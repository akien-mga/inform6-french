# Makefile pour générer la distribution des 
# bibliothèques francophones d'Inform 6 et Inform 7 
#
# http://informfr.tuxfamily.org
# http://ifiction.free.fr/
#

info:
	# make: + distrib ou clean 

distrib: 

	-rm -fr InformLibFR.zip
	-zip InformLibFR.zip  -r ./
	-zip -d InformLibFR.zip ".svn/*"
	-zip -d InformLibFR.zip "makefile"
	-zip -d InformLibFR.zip "Inform6FR/.svn/*"
	-zip -d InformLibFR.zip "Inform6FR/tools/.svn/*"
	-zip -d InformLibFR.zip "Inform7FR/.svn/*" 
	-zip -d InformLibFR.zip "Inform7FR/Eric\ Forgeot/.svn/*" 

clean:
	-rm -fr .*~ 
	-rm -fr Inform6FR/.*~ 
	-rm -fr Inform6FR/tools/.*~
	-rm -fr Inform7FR/.*~ 
	-rm -fr Inform7FR/fichier*.txt*
	-touch  Inform7FR/fichier.txt
	-rm -fr Inform7FR/Eric\ Forgeot/.*~

