pause
@echo. Programme d'installation des bibliotheques francaises pour Inform 7
@echo. Si cela ne fonctionne pas du premier coup, allez dans le menu demarrer,
@echo. cliquez sur "executer", tapez "cmd", et dans l'ecran taper cd, 
@echo. et glissez depuis l'explorateur de documents l'icone du repertoire 
@echo. contenant ce script. Ensuite, tapez install_inform7_french_win.bat
@echo.
@pause 
@rename C:\Progra~1\Inform~1\Inform7\Extensions\Reserved\Main.i6 C:\Progra~1\Inform~1\Inform7\Extensions\Reserved\Main.bak
@copy .\I7\MainFR.i6 C:\Progra~1\Inform~1\Inform7\Extensions\Reserved\Main.i6
@copy .\I6\French.h C:\Progra~1\Inform~1\Library\Natural\French.h
@copy .\I6\FrenchG.h C:\Progra~1\Inform~1\Library\Natural\FrenchG.h
@copy .\I7\Selector.h C:\Progra~1\Inform~1\Library\Natural\Selector.h
@pause
@echo. 
@echo. Installez maintenant l'extension francaise dans l'interface graphique SVP
@pause
