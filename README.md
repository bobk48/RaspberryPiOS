Welcome to the website of Raspberry Pi OS System Administration with systemd!

In this now four volume series of books, you'll find a lot of useful
information about how a beginner can do system administration on their
Raspberry Pi. 

Latest News as of 6/16/2024

The In-Chapter Exercise Solutions (ICE Solutions) are now available for Volume 4.

I'm happy to announce that the 4th volume of this series is now being printed,
and will be available on or about July 3rd. It covers a bunch of ancillary topics,
most prominent of which is the Zettabyte File System(ZFS).

It is possible to install ZFS on Bookworm kernel version 6.6.20! 
Follow these instructions:

First, with nano as sudo, add the following line to /etc/apt/sources.list

deb http://deb.debian.org/debian bookworm-backports main contrib

Then, run the following three commands-

sudo apt update

sudo apt upgrade

sudo apt install zfs-dkms/bookworm-backports zfsutils-linux/bookworm-backports

The above commands, as of this date, allow you to install , and use ZFS on

the Raspberry Pi OS with the 6.6.20 kernel. Volume 4 contains an entire chapter

on ZFS, and the above instructions allow you to work with that chapter.

Old News

I'm proud to announce that Volume 3 of this series, entitled
"Raspberry Pi OS Text Editors, Git, and LXC" will be available on
May 2, 2024. The book's website at Routledge is-
http://www.routledge.com/9781032596914

I've updated the Chapter 0 In-Chapter Exercise solutions for Volumes 1,2, and 3
to include fuller answers to some of the exercises. Additionally, I updated
the fork of awesome-raspberry-pi to include the latest commits to that 
helpful repo. Check it out!

In anticipation of the printed book release for Volume 3, I've uploaded the
In-Chapter Exercise solutions for that volume.

Happy New Year! I'm happy to announce that the second volume of this book
has been published by Routledge/T&F. In it you'll find more system administration
tips and tricks for the beginner, plus an extensive tutorial on Python, all
using the Debian Bookworm version of the Raspberry Pi OS.

Incidentally, if you're running the Raspberry Pi OS based on Debian Bookworm, 
and want to switch from the Wayland/Wayfire backend (which IMHO is buggy right now)
then you can use the sudo raspi-config command, choice 6 Advanced Options, A6
Wayland to achieve the switch to X11. I've found that GUI to be bugless.

Also, the commands we show in The Raspberry Pi OS based on Debian Bullseye
to execute an HTTP server in Python have changed in Debian Bookworm to- 

python3 -m http.server 8080

Python3 is the default on the Raspberry Pi OS based on Debian Bookworm.

I've added the In-Chapter Exercise solutions for Volume 2,
along with the Python code for Chapter 2 of that volume. This is in
anticipation of the availability of the printed version on December 24.
Merry Christmas!

Here are the publisher's links to the first two volumes of the series-

http://www.routledge.com/9781032596341

http://www.routledge.com/9781032596884

As more volumes are published, I will make links to the publisher's website
for them available.

I received my examination copies of the 1st volume hardcover book today, 
and it looks great! Although the shipping date was slated for 11/22, examination
copies are available now for the hardcover edition. I suspect that general
availablility of this volume will take until the end of November.

I've uploaded the In-Chapter Exercise Solutons, and code for the first volume. 
It's all in the folder Volume 1.

The End-of-Chapter Solutions will only be available through your CRC/T&F
representative if you're a certified adopter of the book.

With the Raspberry Pi OS Bookworm-version, ssh into LXD/LXC containers doesn't work
as easily as shown in Volume 3. Perhaps that'll be ironed out in later versions of the
Raspberry Pi OS for the Pi 5.

The 64 bit Raspberry Pi OS for the Pi 5 is available now! And it can be installed on
a Pi 3 & 4b, and Pi 400. I've used the Raspberry Pi Imager to download and install it to
a microSD card, and it boots and works great on my Pi 3, 4b, and Pi400. As I suspected,
ZFS is easily installed on it! So in upcoming Volume 2, there's no need to use Ubuntu 23.04
to install ZFS on, to do the various tutorial operations in ZFS shown in that volume
with Ubuntu- you can now reliably, and easily install ZFS on the Bookworm-version
of the Raspberry Pi OS, and use it on your Pi 4 or Pi400!

Here's a link to installaion instructions for installing ZFS on Bookworm-

https://www.cyberciti.biz/faq/installing-zfs-on-debian-12-bookworm-linux-apt-get/

Remember to use the following instruction in Step 5.,not the amd64 instruction-

apt install linux-headers-arm64 zfsutils-linux zfs-dkms zfs-zed

I've also tested out the installation of LXD/LXC on the Bookworm-version of the
Raspberry Pi OS, and it works in pretty much the same way as shown in Volume 3's chapter
on Virtualization with LXD/LXC.

As I can get a chance to test all of the other Raspberry Pi facilities shown in
in the Bullseye-version of the Raspberry Pi OS, I will.

Last week, the Raspberry Pi 5 release date of October 23 was made public.
The Raspberry Pi OS for it will be based on Debian Bookworm, but in all
probability this will not effect the content of the three volumes in our series
in a significant way. And when I can get ahold of Pi 5 hardware, I will test out
as much of the content of Volume 1, or whatever Volume has been printed and
distributed by that time, and give updates here at this website. 

I've introduced a new repository, that's a fork of awesome-raspberry-pi,
and contains a bunch of helpful links to Raspberry Pi information.
Check it out, it's on my home page here!

The publication date of the hardcover book has been updated to November 22, 2023.
At that time, we will post solutions to In-Chapter Exercises, advisories, errata,
and Python3, and Bash shell script code found in Volume 1 of the series. 
This is the expected release/publication date
of the hardcover edition of that volume.  We'll also provide links
to reference materials you can use to go beyond what we present in the
book.

Till then, keep checking back here for more information and content!

And have fun with your Raspberry Pi!

Bob
