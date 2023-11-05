#!/usr/bin/python3

# This script file does a daily, local, rotating backup to a remote machine, using rsync
#
import time
import datetime
import os
import shutil
import UserString
def backupserver():
	debug_flag = "debug"
	sources = ["/home/bob/test_dir"]
	codetarget = "/home/bob/some_code/"
	target = "/home/bob/Daily_Backups/"
	host = "192.168.0.25"
	user = "bob"
	# Target can be reached, start the rotation of the snapshot directories
	if (debug_flag == "debug"):
	        print ("Date: " + str(datetime.date.today()))
	        print (host +" is up, rotating snapshots.")

	# Check to see if the directories exist	
	i = 1
	while i <= 5:
		temp_path = target + str(i) + "/"
		if not os.path.exists( temp_path ):
			try:
				os.makedirs( temp_path )
				print ("Created " + temp_path)
			except:
				print ("Couldn't create " + temp_path)
		i = i + 1
	# Cycle through the backups
	# First deleting the oldest one #5
	print ("Deleting oldest archive")
	shutil.rmtree( target + "5" )
	# Cycle through 2 - 4
	print "Cycle backups"
	os.rename( target + "4", target + "5")	
	os.rename( target + "3", target + "4")
	os.rename( target + "2", target + "3")
	# Do hard copy of 1
	os.system('find "' + target + '1" -print | cpio -pdl ' + target +"2")
	print ("Copy first backup")
	# Copy tree does a full copy whereas cpio does hard link copies (i.e. each copied file
	# takes up no extra space)
	shutil.copytree( target + "1", target + "2")
	os.system('cd "' + target + '1"; find . -print | cpio -pdl "' + target + '2"')
	print ("Rsyncing now")
	# Rsync from local directories to local backup
	for source in sources:
		print ("Local directories " + source)
		os.system('rsync -azv -e   --delete --delete-excluded ' +
		 		  '--exclude-from=/home/bob/.rsync/exclude "' + source + 
		 		  '" "' + target+'1"')
	# Rsync from the server to the local backup
	for source in sources:
		print ("Downloading " + source)
		os.system('rsync -azv -e ssh  --delete --delete-excluded ' +
				  '--exclude-from=/home/bob/.rsync/exclude ' + user + "@" + 
				  host + ':"' + source + '" "' + target+'1"')
	# Backup only the targeted programming source code
	newfolder = codetarget + str(datetime.date.today())
	# Make the new directory
	if not os.path.exists( newfolder ):
		os.makedirs( newfolder )
	# Here's the critical operation.  
      # Find all the source files from our rsync backup and copy them as hard links
	print ("Backing up source")
	os.system('cd "' + target + '1"; find . \( ' + " -name '*.cpp' -or -name 'Makefile'" +
			 "-or -name  '*.c' -or -name '*.h' -or -name '*.lex' -or -name '*.y'" +
			 " -or -name '*.bat' -or -name '*.py' \) " + ' -print | cpio -pdl "' + newfolder +'"')
backupserver()