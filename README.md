Welcome to the website of Raspberry Pi OS System Administration with systemd!

In this three volume series of books, you'll find a lot of useful
information about how a beginner can do system administration on their
Raspberry Pi. 

Latst News

The 64 bit Raspberry Pi OS for the Pi 5 is available now! And it can be used on the
Pi 4b, and Pi 400. I've used the Raspberry Pi Imager to download and install it on
a microSD card, and it boots and works great on my Pi 400. And as I suspected,
ZFS is easily installed on it! So in Volume 2, there's no need to use Ubuntu 23.04
to install ZFS on, and do the various tutorial operations in ZFS shown in that volume
with Ubuntu, you can now reliably, and easily install ZFS on the Bookworm-version
of the Raspberry Pi OS!

Here's a link to installaion instructions for installing ZFS on Bookworm-

https://www.cyberciti.biz/faq/installing-zfs-on-debian-12-bookworm-linux-apt-get/

Remember to use this instruction in Step 5.,not the amd64 instruction-

apt install linux-headers-arm64 zfsutils-linux zfs-dkms zfs-zed

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
