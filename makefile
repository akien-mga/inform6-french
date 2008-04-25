# Makefile pour générer la distribution des 
# bibliothèques francophones d'Inform 6 et Inform 7 
#
# http://informfr.tuxfamily.org
# http://ifiction.free.fr/
#

info:
	# make: + distrib ou clean 

distrib: 

	-rm -fr InformLibFR-dev.zip
	-zip InformLibFR-dev.zip  -r ./
	-zip -d InformLibFR-dev.zip ".svn/*"
	-zip -d InformLibFR-dev.zip "makefile"
	-zip -d InformLibFR-dev.zip "I6/.svn/*"
	-zip -d InformLibFR-dev.zip "I7/.svn/*" 
#	-zip -d InformLibFR-dev.zip "I7/Eric\ Forgeot/.svn/*" 

clean:
	-rm -fr .*~ 
	-rm -fr I6/.*~ 
	-rm -fr I7/.*~ 
	-rm -fr I7/fichier*.txt*
	-touch  I7/fichier.txt
#	-rm -fr I7/Eric\ Forgeot/.*~

