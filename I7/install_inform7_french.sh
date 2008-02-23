#!/bin/bash

#I7VERSION=4X60
#I7VERSION=5G67
I7VERSION=5J39

if [ $(uname)=Linux ]; then 
	echo "Your system should be Linux"
	if [ -e /usr/local/share/inform7/ ]; then
		I7EXTENSIONSPATH=/usr/local/share/inform7/Inform7/Extensions/reserved
		I7LIBRARYPATH=/usr/local/share/inform7/Library/Natural
	else 
		echo "Linux Inform 7 (command line interface) doesn't seem to be installed"
	fi
	
	if [ -e /usr/share/gnome-inform7/ ]; then
	I7EXTENSIONSPATH2=/usr/share/gnome-inform7/Inform7/Extensions/Reserved
	I7LIBRARYPATH2=/usr/share/gnome-inform7/Library/Natural
	else 
	I7EXTENSIONSPATH2=/usr/local/share/gnome-inform7/Inform7/Extensions/Reserved
	I7LIBRARYPATH2=/usr/local/share/gnome-inform7/Library/Natural
	fi
else
	echo "Your system should be Mac OS X"
	I7EXTENSIONSPATH=/Applications/Inform.app/Contents/Ressources/Inform7/Extensions/reserved
	I7EXTENSIONSPATH2=/dev/null
	I7LIBRARYPATH=/Applications/Inform.app/Contents/Ressources/Library/Natural
	I7LIBRARYPATH2=/dev/null
fi

echo "To install you must run this script as root."
echo " "
echo "Be sure to check that your Inform 7 version is $I7VERSION"
if [ -e $I7EXTENSIONSPATH/Main.i6.bak ] || [ -e $I7EXTENSIONSPATH2/Main.i6.bak ]; then
	echo "It seems there is already a backup of some original files, they may be erased with this update (they can be retried from Inform website anyway...)"
fi
echo -n "Is it ok to proceed (yes/no) ?" $'\n \n'

read Option   # read from keyboard


 case "$Option" in
 yes)

if [ -e /usr/local/share/inform7/ ]; then
cp -fr $I7EXTENSIONSPATH/Main.i6 $I7EXTENSIONSPATH/Main.i6.bak 
cp -fr ./MainFR$I7VERSION.i6 	$I7EXTENSIONSPATH/Main.i6
cp -fr French*.h			$I7LIBRARYPATH/
cp -fr Selector.h			$I7LIBRARYPATH/
fi

cp -fr $I7EXTENSIONSPATH2/Main.i6 $I7EXTENSIONSPATH2/Main.i6.bak 
cp -fr ./MainFR$I7VERSION.i6 	$I7EXTENSIONSPATH2/Main.i6

cp -fr French*.h			$I7LIBRARYPATH2/
cp -fr Selector.h			$I7LIBRARYPATH2/

if [ $(uname)=Linux ]; then 
	mkdir -p ~/Inform/Extensions/Eric\ Forgeot
	cp -fr Eric\ Forgeot/French		~/Inform/Extensions/Eric\ Forgeot
	cp -fr Eric\ Forgeot/Locksmith-fr		~/Inform/Extensions/Eric\ Forgeot
	cp -fr Eric\ Forgeot/Simple\ Chat\ fr		~/Inform/Extensions/Eric\ Forgeot
	ln -sf ~/Inform/Extensions/Eric\ Forgeot	~/Inform/Extensions/eric\ forgeot
	ln -sf ~/Inform/Extensions/Eric\ Forgeot/French	~/Inform/Extensions/eric\ forgeot/french
	ln -sf ~/Inform/Extensions/Eric\ Forgeot/Locksmith-fr	~/Inform/Extensions/Eric\ Forgeot/locksmith-fr
	ln -sf ~/Inform/Extensions/Eric\ Forgeot/Simple\ Chat\ fr	~/Inform/Extensions/Eric\ Forgeot/simple\ chat\ fr

# + faire chmod
else
	echo "On a Mac, install the French extension from the GUI please"
fi
echo "Done. About gnome-inform7, everything was installed into $I7EXTENSIONSPATH2 and $I7LIBRARYPATH2";;

 no)
echo "Not installed !";;

 *) 
echo "Not installed !";;
esac
