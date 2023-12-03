#!/usr/bin/python3
import os
import shutil
target = "/media/bob/7C87-8F1D/"
i = 1
while i <= 5:
    temp_path = target + str(i) + "/"
    if not os.path.exists (temp_path):
        try:
            os.makedirs (temp_path)
            print ("Created  " + temp_path)
        except:
            print (" Could not create  " + temp_path)
    i = i + 1
print ("Deleting the oldest archive")
shutil.rmtree (target + "5")
print ("Recycle the backups")
os.rename (target + "4", target + "5")
os.rename (target + "3", target + "4")
os.rename (target + "2", target + "3")

os.system('cp -a ' + target + "1" + " " + target + "2")
os.system('rsync -av __pycache__' + " " + target + "1")
