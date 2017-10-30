
Debian
====================
This directory contains files used to package gasbitd/gasbit-qt
for Debian-based Linux systems. If you compile gasbitd/gasbit-qt yourself, there are some useful files here.

## gasbit: URI support ##


gasbit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install gasbit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your gasbit-qt binary to `/usr/bin`
and the `../../share/pixmaps/gasbit128.png` to `/usr/share/pixmaps`

gasbit-qt.protocol (KDE)

