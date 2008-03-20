! ==============================================================================
!   GRAMMAR:  Grammar table entries for the standard verbs library.
!   
!   Supplied for use with Inform 6 -- Release 6/11 -- Serial number 040227
!   Version modifiée pour Inform 7
!   Copyright Graham Nelson 1993-2004 but freely usable (see manuals)
!
!   Traduit en français par Jean-Luc Pontico 2001-2004. Version 2.2 du 20/02/2008
!   Certaines fonctions sont tirées de la traduction en espagnol de Jose Luis Diaz.
!   Diverses corrections apportées par Samuel Verschelde (Stormi) sur LanguageToInformese
!
!   Dans votre fichier de jeu, incluez les trois bibliothèques dans l'ordre suivant :
!       Include "Parser";
!       Include "VerbLib";
!       Include "FrenchG";
! ==============================================================================

System_file;


! ------------------------------------------------------------------------------
!  The "meta-verbs", commands to the game rather than in the game, come first:
! ------------------------------------------------------------------------------



#ifndef NI_BUILD_COUNT;
Verb meta 'score'
                *                                -> Score
		* 'detaille'/'complet'           -> Fullscore;
Verb meta 'fullscore' 'full' 'detaille' 'complet'
                *                                -> FullScore
                * 'score'                        -> FullScore;
Verb meta 'quitter' 'quit' ! 'q//'
                *                                -> Quit;
Verb meta 'enregistrer' 'recording'
    *                                           -> CommandsOn
    * 'on'                                      -> CommandsOn
    * 'off'                                     -> CommandsOff;
    
Verb meta 'rejouer' 'replay'
    *                                           -> CommandsRead;
    
Verb meta 'charger' 'restore'
                *                                -> Restore;
Verb meta 'recommencer' 'restart'
                *                                -> Restart;
Verb meta 'verifier' 'verify'
                *                                -> Verify;
Verb meta 'version'
                *                                -> Version;
Verb meta 'sauver' 'save' 'sauvegarder'
                *                                -> Save;
Verb meta 'log' 'script' ! 'transcript' 'transcrire' 'transcription'
                *                                -> ScriptOn
                * 'off'                          -> ScriptOff
                * 'on'                           -> ScriptOn;
Verb meta 'nolog' 'noscript' 'unscript'
                *                                -> ScriptOff;

Verb meta 'mode'
		* 'normal'			-> LMode1
		* 'long'/'bavard'/'verbeux'	-> LMode2
		* 'court'			-> LMode3;
		
Verb meta 'pronouns' 'nouns'
                *                                -> Pronouns;
Verb meta 'notify' 'notification'
                * 'on'                           -> NotifyOn
                * 'off'                          -> NotifyOff;

#endif;  ! NI_BUILD_COUNT
! NE PAS UTILISER DE VERBES META ANGLAIS ICI, SEULEMENT LES MOTS FRANÇAIS SINON CELA BUGGE LES COMMANDES ANGLAISES SI ON LES TAPE

     Verb meta 'recording' 'enregistrer'
          *                                                         -> CommandsOn
          * 'on'                                                  -> CommandsOn
          * 'off'                                                 -> CommandsOff;
     Verb meta 'replay' 'rejouer'
          *                                                         -> CommandsRead;
     
  !   Verb meta 'score'
   !                       *                                          -> Score
   !             * 'detaille'/'complet'              -> Fullscore;
     Verb meta 'fullscore' 'full' 'detaille' 'complet'
                          *                                          -> FullScore
                          * 'score'                                -> FullScore;
     Verb meta  'quitter' !'quit' ! 'q//'
                          *                                          -> Quit;
     Verb meta 'charger' ! 'restore'
                          *                                          -> Restore;
     Verb meta 'recommencer' ! 'restart'
                          *                                          -> Restart;
     Verb meta 'verifier' ! 'verify'
                          *                                          -> Verify;
     Verb meta 'sauver' ! 'save'
                          *                                          -> Save;
     Verb meta 'log' 'transcrire' ! 'script' 'transcript' 'transcription'
                          *                                          -> ScriptOn
                          * 'off'                                  -> ScriptOff
                          * 'on'                                    -> ScriptOn;
     Verb meta 'nolog' 'noscript' 'unscript'
                          *                                          -> ScriptOff;
     
     Verb meta 'mode'
                * 'normal'			-> LMode1
                * 'long'/'bavard'/'verbeux'	-> LMode2
                * 'court'			-> LMode3;
                
     Verb meta 'pronouns' 'nouns'
                          *                                          -> Pronouns;
     Verb meta 'notify' 'notification'
                          * 'on'                                    -> NotifyOn
                          * 'off'                                  -> NotifyOff;
     Verb meta 'version'
                          *                                          -> Version;
  
  
#IFNDEF NO_PLACES;
Verb meta 'places' 'endroits'
                *                                -> Places;
Verb meta 'objects' 'objets'
                *                                -> Objects;
#ENDIF; ! NO_PLACES


! ------------------------------------------------------------------------------
!  Debugging grammar
! ------------------------------------------------------------------------------

#Ifdef DEBUG;

[ AccentsOnSub;
!    enleveaccents=0;
    "Les accents ne seront pas éliminés de chaque commande reçue."; ! (fonction desactivee)
];
[ AccentsOffSub;
!  enleveaccents=1;
  "Les accents seront éliminés de chaque commande reçue, mais seulement pour
   les mots qui sinon ne seraient pas compris."; ! (fonction desactivee)
];
Verb meta 'accents'
    *						-> AccentsOn
    * 'on'					-> AccentsOn
    * 'off'					-> AccentsOff;

Verb meta 'actions'
    *                                           -> ActionsOn
    * 'on'                                      -> ActionsOn
    * 'off'                                     -> ActionsOff;
Verb meta 'changes'
    *                                           -> ChangesOn
    * 'on'                                      -> ChangesOn
    * 'off'                                     -> ChangesOff;
Verb meta 'gonear'
    * noun                                      -> Gonear;
Verb meta 'goto'
    * number                                    -> Goto;
Verb meta 'random'
    *                                           -> Predictable;
Verb meta 'routines' 'messages'
    *                                           -> RoutinesOn
    * 'on'                                      -> RoutinesOn
    * 'off'                                     -> RoutinesOff;
Verb meta 'scope'
    *                                           -> Scope
    * noun                                      -> Scope;
Verb meta 'showobj'
    *                                           -> Showobj
    * number                                    -> Showobj
    * multi                                     -> Showobj;
Verb meta 'showverb'
    * special                                   -> Showverb;
Verb meta 'timers' 'daemons'
    *                                           -> TimersOn
    * 'on'                                      -> TimersOn
    * 'off'                                     -> TimersOff;
Verb meta 'trace'
    *                                           -> TraceOn
    * number                                    -> TraceLevel
    * 'on'                                      -> TraceOn
    * 'off'                                     -> TraceOff;
Verb meta 'abstract'
    * noun 'to' noun                            -> XAbstract;
Verb meta 'purloin'
    * multi                                     -> XPurloin;
Verb meta 'tree'
    *                                           -> XTree
    * noun                                      -> XTree;

#Ifdef TARGET_GLULX;
Verb meta 'glklist'
    *                                           -> Glklist;
#Endif; ! TARGET_

#Endif; ! DEBUG

! ------------------------------------------------------------------------------
!  And now the game verbs.
! ------------------------------------------------------------------------------

! #ifndef NI_BUILD_COUNT;
[ ADirection; if (noun in compass) rtrue; rfalse; ];

! ------- Verbes de déplacement du joueur

Verb 'entrer' 'rentrer'
                *                                -> GoIn
                * 'dans'/'par' noun              -> Enter
                * noun                           -> Enter;

Verb 'asseoir' 'allonger' 'coucher'
		* 'vous'					-> GoIn  ! s'asseoir ! ligne commentee car problematique (note : si on la commente ça fait des bugs aussi..)
		* 'vous' 'en' 'haut' 'de'/'du'/'d^' noun	-> Enter
		* 'sur'/'dans' noun		-> Enter
		* 'vous' 'sur'/'dans' noun		-> Enter;

Verb 'sortir'
                *                                   -> Exit
                * 'de' 'la'                         -> Exit
                * multiinside 'de'/'du'/'des' noun  -> Remove
                * 'de'/'du'/'des' noun              -> Exit;

Verb 'partir'
                *                                -> VagueGo
                * 'vers'/'à'/'a' noun=ADirection     -> Go
                * 'de' 'la'           -> Exit
                * 'de'/'du'/'des' noun           -> Exit
                * 'dans'/'par' noun              -> Enter;

! Verb 'get'      * 'off' noun                     -> GetOff;  !*!

Verb 'aller' 'marcher' 'courir' 'passer' !*! fuir suivre emprunter franchir
                *                                                   	-> VagueGo
		* 'au' 'sur' 'luy'					-> GoUp ! "aller au-dessus" -> "aller au sur luy"
		* 'au'/'en' 'sous' 'luy'				-> Godown ! "aller au-dessous" -> "aller au sous luy"!*! entrer ?
                * 'à'/'a'/'au'/'en'/'vers'/'par' noun=ADirection        	-> Go ! (Go déclenche des bugs sans noun=ADirection)
                * 'à'/'a'/'au'/'en'/'vers'/'par'/'dans'/'sur'/'sous' noun   -> Enter
                * noun=ADirection                		    	-> Go
                * noun                                              	-> Enter;

Verb 'en' !*! du travail pour LanguageToInformese ?
!		*                  		-> VagueDo
                * 'vous' 'aller'/'vais'     -> Exit; ! "s'en aller" "je m'en vais"

Verb 'debout'   *                                -> Exit;

Verb 'lever' 'relever' 'soulever'
		* 'vous'				-> Exit	! se lever
		* noun				-> Take;


[GoDownSub; <<Go d_obj>>;];      ! n'existait pas en anglais
#ifndef NI_BUILD_COUNT;
Verb 'descendre'
                *                                			-> GoDown
                * 'de'/'du'/'des' noun           			-> Exit
                * 'à'/'a'/'au'/'en'/'vers'/'par' noun=ADirection   		-> Go
                * 'à'/'a'/'au'/'en'/'vers'/'par'/'dans'/'sur'/'sous' noun   -> Enter
                * noun=ADirection                		    	-> Go
                * noun            			               -> Enter;
#endif; ! NI_BUILD_COUNT
[GoUpSub; <<Go u_obj>>;];      ! n'existait pas en anglais
Verb 'monter' 'remonter'
                *                                			-> GoUp
                * 'à'/'a'/'au'/'en'/'vers'/'par' noun=ADirection   		-> Go
                * 'à'/'a'/'au'/'en'/'vers'/'par'/'dans'/'sur'/'sous' noun   -> Enter
                * noun=ADirection                		    	-> Go
                * noun                           -> Enter;

Verb 'grimper' 'gravir' 'escalader'
                * noun                           -> Climb
                * 'sur' noun                     -> Climb;

Verb 'sauter' 'bondir'
                *                                	-> Jump
                * noun				 	-> JumpOver
                * 'par'/'au' 'dessus' noun	 	-> JumpOver
                * 'par'/'au' 'dessus' 'de' noun		-> JumpOver
                * 'sur' noun				-> JumpOver;
#ifndef NI_BUILD_COUNT;
Verb 'nager' 'plonger'
                *                                -> Swim;
#endif; ! NI_BUILD_COUNT

! ------- Verbes pour ouvrir et fermer
Verb 'fermer' 'refermer'
                * noun                           -> Close
                * noun 'avec' held               -> Lock
                * noun 'à'/'a' 'cle' held            -> Lock
                * noun 'à'/'a' 'cle' 'avec' held     -> Lock;
Verb 'ouvrir'
                * noun                           -> Open
                * noun 'avec' held               -> Unlock;
Verb 'verrouiller'
                * noun 'avec' held               -> Lock;
Verb 'deverrouiller' 'forcer'
                * noun 'avec' held               -> Unlock;

! ------- Verbes concernant ce que le joueur possède
Verb 'inventaire' ! 'inv' ! 'i//'
                *                                -> Inv
                * 'haut'/'tall'                         -> InvTall
                * 'large'/'wide'                         -> InvWide;
Verb 'acheter'
                * noun                           -> Buy;

Verb 'payer' 'offrir' 'donner' ! 'remettre' !*!
		* held 'à'/'a'/'au'/'aux' creature  	-> Give
		* 'à'/'a'/'au'/'aux' creature held		-> Give reverse;
Verb 'nourrir'
                * creature 'avec' held             	-> Give reverse;
Verb 'inserer' 'introduire'
                * multiexcept 'dans' noun        -> Insert;
#ifndef NI_BUILD_COUNT;
Verb 'remplir'
                * noun                           -> Fill;

Verb 'vider'
                * noun                           -> Empty
                * noun 'vers'/'dans'/'sur' noun  -> EmptyT;
#endif; ! NI_BUILD_COUNT
Verb 'transferer'
                * noun 'vers'/'à'/'a' noun             -> Transfer;

Verb 'prendre' 'pr' 'ramasser' 'cueillir'
    		* noun=ADirection  		-> Go!*!
    		* 'vers' noun  			-> Go!*!
                * multi                          -> Take;
Verb 'deposer' 'poser' 'abandonner' 'lacher'
                * multiheld                      -> Drop
                * multiexcept 'dans' noun        -> Insert
                * multiexcept 'sur' noun         -> PutOn;
Verb 'jeter' 'lancer'
                * multiheld                      -> Drop
                * multiexcept 'dans' noun        -> Insert
                * held 'sur' noun                -> ThrowAt;
Verb 'laisser'
                * held                           -> Drop
                * 'tomber' held                  -> Drop;
Verb 'enlever' 'oter' 'retirer'  !! j'ai ajouté retirer
                * held                              -> Disrobe
                * multiinside 'de'/'du'/'des'/'d^' noun  -> Remove;

Verb 'revetir' 'porter' 'endosser' 'enfiler'
                * held                           -> Wear;
Verb 'habiller' 'vetir' 'deguiser' 'couvrir'
		* 'vous' 'de'/'d^'/'du'/'des'/'avec' held	-> Wear;
Verb 'mettre' 'remettre'
		* 'vous' 'debout'		-> Exit ! se lever
                * held                           -> Wear
                * multiexcept 'dans' noun        -> Insert
                * multiexcept 'sur' noun         -> PutOn;

! ------- Verbes agressifs ou destructeurs
Verb 'peler' 'eplucher' 'decortiquer'
                * noun                           -> Take; !* ? *!
Verb 'boire' 'avaler' 'siroter'
                * noun                           -> Drink
		* 'de'/'du' noun                   -> Drink
		* 'de'/'du' 'l^' noun                   -> Drink
		* 'à'/'a' noun                   -> Drink;
Verb 'manger' 'devorer'
                * held                           -> Eat
                * 'de/du' held                           -> Eat;

Verb 'bruler' 'incendier' 'embraser' 'cramer'
                * noun                           -> Burn
                * noun 'avec' held               -> Burn;
#ifndef NI_BUILD_COUNT;
Verb 'attaquer' 'casser' 'frapper' 'combattre' 'ruiner' 'briser' 'detruire'
     'tuer' 'torturer' 'cogner'
                * noun                          	-> Attack
     		* 'à'/'a'/'à'/'a' noun				-> Attack
     		* 'à' noun				-> Attack
 !               * noun 'avec' held  			-> Attack;

#endif; ! NI_BUILD_COUNT

Verb 'presser' 'tordre' 'comprimer' 'ecraser'
                * noun                           -> Squeeze;
[VagueDoSub; "Soyez plus précis."; ];
Verb 'faire'
		* 				             -> VagueDo
                * 'bruler'/'cramer' noun                     -> Burn
                * 'bruler'/'cramer' noun 'avec' held         -> Burn
                * 'signe'                                    -> WaveHands
                * 'bonjour'/'signe' 'de'/'avec' 'la' 'main'  -> WaveHands;
Verb 'couper' 'trancher' 'elaguer'
                * noun                           -> Cut
		* noun 'avec' held		-> Cut;

Verb 'creuser'      
                * noun                           -> Dig
                * noun 'avec' held               -> Dig;

! ------- Verbes d'observation

Verb 'regarder' 'voir' 'r//'  'v//' ! 'l//'  ! l// a désactiver lorsqu'il sera integre avec NI_BUILD_COUNT au reste des verbes dans French
                *                                  -> Look
		* noun                             -> Examine
		* 'sur' noun			   -> Examine
                * 'dans'/'atravers' noun           -> Search
                * 'sous' noun                      -> LookUnder
                * 'derriere' noun			-> Search ! à la place de Turn
                * topic 'dans' noun                -> Consult
    		* 'vers'/'à'/'a'/'au' noun=ADirection  -> Examine;
#ifndef NI_BUILD_COUNT;
Verb 'examiner'  'decrire' 'observer' 'x//'  
                * noun                           -> Examine;
Verb 'fouiller' 
                * noun                           -> Search;

Verb 'chercher'
		* 'dans' noun			-> Search;

#endif; ! NI_BUILD_COUNT
Verb 'sentir' 'renifler'
                *                                -> Smell
                * noun                           -> Smell;
Verb 'ecouter' 'entendre'
                *                                -> Listen
                * noun                           -> Listen;
Verb 'gouter'
                * noun                           -> Taste;
Verb 'toucher' 'caresser' 'tater'
                * noun                           -> Touch;
#ifndef NI_BUILD_COUNT;
Verb 'lire'
                * noun                           -> Examine
                * 'sur' topic 'dans' noun        -> Consult
                * topic 'dans' noun                -> Consult;

#endif; ! NI_BUILD_COUNT
Verb 'consulter'  
                * noun 'sur' topic                -> Consult;

! ------- Verbes de manipulation non agressive d'objets
Verb 'tirer' 'trainer'
                * noun                           -> Pull;
Verb 'pousser' 'deplacer' 'bouger'
                * noun                           -> Push
                * noun 'vers'/'à'/'a' noun           -> PushDir;
Verb 'appuyer'
                * noun                           -> Push
                * 'sur' noun                     -> Push;
Verb 'regler' 'ajuster'
                * noun                           -> Set
                * noun 'à'/'a'/'sur' special         -> SetTo;
Verb 'tourner' 'devisser' 'visser'
                * noun                           -> Turn;
Verb 'eteindre' 'arreter'
                * noun				 -> Switchoff;
Verb 'allumer' 'demarrer'
                * noun                           -> Switchon;
Verb 'balancer'
                * noun                           -> Swing;

Verb 'frotter' 'cirer' 'astiquer' 'balayer' 'nettoyer' 'depoussierer' 'essuyer' 'recurer'
                * noun                           -> Rub;
Verb 'nouer' 'attacher' 'fixer'
                * noun                           	-> Tie
                * noun 'à'/'a'/'au'/'aux'/'avec' noun 	-> Tie;

! ------- Verbes de communication avec des personnages
Verb 'repondre' 'dire' ! 'crier'
                * creature   		              -> Answer ! "dis-lui"
                * creature topic	              -> Answer
                * 'à'/'a'/'au'/'aux' creature             -> Answer
                * topic 'à'/'a'/'au'/'aux' creature       -> Answer;
!Verb 'parler'
!                * creature			     		    -> Tell ! "parle-lui"
!                * 'avec'/'à'/'a'/'au'/'aux' creature		     	    -> Tell
!                * creature 'de'/'du'/'des' topic     		    -> Tell ! "parle-lui"
!                * 'à'/'a'/'au'/'aux' creature 'de'/'du'/'des' topic     -> Tell;
Verb 'questionner' ! 'interroger'
                * creature 'à'/'a' 'propos' 'de'/'du'/'des' topic   -> Ask
                * creature 'au' 'sujet' 'de'/'du'/'des' topic   -> Ask
                * creature 'sur' topic               -> Ask;
Verb 'demander' 'exiger' !*! reclamer
                * noun 'à'/'a'/'au'/'aux' creature   -> AskFor reverse             
                * creature noun   		 -> AskFor ! "demande-lui"
                * 'à'/'a'/'au'/'aux' creature noun   -> AskFor
		* creature 'de' topic			-> AskTo
		* 'à'/'a'/'au'/'aux' creature 'de' topic	-> AskTo;
Verb 'ordonner' 
		* creature 'de' topic			-> AskTo ! "ordonne-lui"
		* 'à'/'a'/'au'/'aux' creature 'de' topic	-> AskTo;

Verb 'agiter'
                * 'la'/'les' 'main'/'mains'      -> WaveHands
                * noun                           -> Wave;
Verb 'brandir' 'secouer'
                * held                           -> Wave;
Verb 'saluer'
                *                                            -> WaveHands
                * 'de'/'avec' 'la' 'main'                    -> WaveHands;

Verb 'montrer' 'presenter'
                * held 'à'/'a'/'au'/'aux' creature             -> Show;

Verb 'reveiller' 'eveiller'
		* 'vous'				-> Wake
                * creature			-> WakeOther;

Verb 'embrasser' 'etreindre'
                * creature                       -> Kiss;

! ------- Verbes musicaux
Verb 'chanter'
                *                                -> Sing;
Verb 'souffler' !*! jouer d'un instrument ?
                * 'dans' held                    -> Blow
                * held                           -> Blow;

! ------- Verbes "immobiles"
Verb 'attendre' 'a//' ! 'z//' !*! patienter
                *                                -> Wait;
Verb 'prier'
                *                                -> Pray;
Verb 'penser' 'reflechir'
                *                                -> Think;
Verb 'dormir' 'somnoler'
                *                                -> Sleep;

! ------- Verbes de communication avec le narrateur
Verb 'oui' 
                *                                -> Yes;
Verb 'non'
                *                                -> No;
Verb 'desole'
                *                                -> Sorry;
Verb 'merde' 
                *                                -> Strong
                * topic                          -> Strong;
Verb 'zut' 'maudit'
                *                                -> Mild
                * topic                          -> Mild;

[ UnknownVerb word;

	! Remarque :
	!
	! Il aurait peut-être été plus simple d'employer des lignes comme :
	!     if (word=='entre'or'entrons'or'entrez') return 'entrer';
	! ...mais cela ne permettait pas de désactiver séparément par exemple
	! la 1e personne du pluriel pour des raisons de mémoire, de vitesse
	! ou de cohérence.
	!
	! Pour désactiver, définissez une constante au début de votre jeu.
	! Par exemple :
	! Constant DESACTIVER_IMPERATIF_PPP;

#Ifndef DESACTIVER_IMPERATIF_DPS;
	! impératif 2e personne du singulier
	! (ne pas le désactiver si vous souhaitez l'indicatif
	! à la 1e personne du singulier)
	if (word=='abandonne') return 'abandonner';
	if (word=='achete') return 'acheter';
	if (word=='agite') return 'agiter';
	if (word=='ajuste') return 'ajuster';
	if (word=='allonge') return 'allonger';
	if (word=='allume') return 'allumer';
	if (word=='appuie') return 'appuyer';
	if (word=='arrete') return 'arreter';
	if (word=='assieds'or'assois') return 'asseoir';
	if (word=='astique') return 'astiquer';
	if (word=='attache') return 'attacher';
	if (word=='attaque') return 'attaquer';
	if (word=='attends') return 'attendre';
	if (word=='avale') return 'avaler';
	if (word=='balance') return 'balancer';
	if (word=='balaye' or 'balaie') return 'balayer';
	if (word=='bois') return 'boire';
	if (word=='bondis') return 'bondir';
	if (word=='bouge') return 'bouger';
	if (word=='brandis') return 'brandir';
	if (word=='brise') return 'briser';
	if (word=='brule') return 'bruler';
	if (word=='caresse') return 'caresser';
	if (word=='casse') return 'casser';
	if (word=='chante') return 'chanter';
	if (word=='cire') return 'cirer';
	if (word=='cogne') return 'cogner';
	if (word=='combats') return 'combattre';
	if (word=='comprime') return 'comprimer';
	if (word=='consulte') return 'consulter';
	if (word=='couche') return 'coucher';
	if (word=='coupe') return 'couper';
	if (word=='cours') return 'courir';
	if (word=='couvre') return 'couvrir';
	if (word=='crame') return 'cramer';
	if (word=='creuse') return 'creuser';
!	if (word=='crie') return 'crier';
	if (word=='cueille') return 'cueillir';
	if (word=='decortique') return 'decortiquer';
	if (word=='decris') return 'decrire';
	if (word=='deguise') return 'deguiser';
	if (word=='demande') return 'demander';
	if (word=='demarre') return 'demarrer';
	if (word=='deplace') return 'deplacer';
	if (word=='depose') return 'deposer';
	if (word=='depoussiere') return 'depoussierer';
	if (word=='descends') return 'descendre'; !*! j'aurais dit 'descend'
	if (word=='detruis') return 'detruire';
	if (word=='deverrouille') return 'deverrouiller';
	if (word=='devisse') return 'devisser';
	if (word=='devore') return 'devorer';
	if (word=='dis') return 'dire';
	if (word=='donne') return 'donner';
	if (word=='dors') return 'dormir';
	if (word=='ecoute') return 'ecouter';
	if (word=='ecrase') return 'ecraser';
	if (word=='elague') return 'elaguer';
	if (word=='embrase') return 'embraser';
	if (word=='embrasse') return 'embrasser';
	if (word=='endosse') return 'endosser';
	if (word=='enfile') return 'enfiler';
	if (word=='enleve') return 'enlever';
	if (word=='entends') return 'entendre';
	if (word=='entre') return 'entrer';
	if (word=='epluche') return 'eplucher';
	if (word=='escalade') return 'escalader';
	if (word=='essuie') return 'essuyer';
	if (word=='eteins') return 'eteindre';
	if (word=='etreins') return 'etreindre';
	if (word=='eveille') return 'eveiller';
	if (word=='examine') return 'examiner';
	if (word=='exige') return 'exiger';
	if (word=='fais') return 'faire';
	if (word=='ferme') return 'fermer';
	if (word=='fixe') return 'fixer';
	if (word=='fouille') return 'fouiller';
	if (word=='frappe') return 'frapper';
	if (word=='frotte') return 'frotter';
	if (word=='goute') return 'gouter';
	if (word=='gravis') return 'gravir';
	if (word=='grimpe') return 'grimper';
	if (word=='habille') return 'habiller';
	if (word=='incendie') return 'incendier';
	if (word=='insere') return 'inserer';
	if (word=='interroge') return 'interroger';
	if (word=='introduis') return 'introduire';
	if (word=='jette') return 'jeter';
	if (word=='lache') return 'lacher';
	if (word=='laisse') return 'laisser';
	if (word=='lance') return 'lancer';
	if (word=='leve') return 'lever';
	if (word=='lis') return 'lire';
	if (word=='mange') return 'manger';
	if (word=='marche') return 'marcher';
	if (word=='mets') return 'mettre';
	if (word=='monte') return 'monter';
	if (word=='montre') return 'montrer';  !*! aussi un nom
	if (word=='nage') return 'nager';
	if (word=='nettoie') return 'nettoyer';
	if (word=='noue') return 'nouer';
	if (word=='nourris') return 'nourrir';
	if (word=='observe') return 'observer';
	if (word=='offre') return 'offrir';
	if (word=='ordonne') return 'ordonner';
	if (word=='ote') return 'oter';
	if (word=='ouvre') return 'ouvrir';
!	if (word=='parle') return 'parler';
	if (word=='pars') return 'partir';
	if (word=='passe') return 'passer';
	if (word=='paye'or'paie') return 'payer'; !*! aussi un nom
	if (word=='pele') return 'peler';
	if (word=='pense') return 'penser';
	if (word=='plonge') return 'plonger';
	if (word=='porte') return 'porter'; !*! aussi un nom
	if (word=='pose') return 'poser';
	if (word=='pousse') return 'pousser';
	if (word=='prends') return 'prendre'; !*! j'aurais dit 'prend'
	if (word=='presente') return 'presenter';
	if (word=='presse') return 'presser';
	if (word=='prie') return 'prier';
	if (word=='questionne') return 'questionner';
	if (word=='ramasse') return 'ramasser';
	if (word=='recure') return 'recurer';
	if (word=='referme') return 'refermer';
	if (word=='reflechis') return 'reflechir';
	if (word=='regarde') return 'regarder';
	if (word=='regle') return 'regler';
	if (word=='releve') return 'relever';
	if (word=='remets') return 'remettre';
	if (word=='remplis') return 'remplir';
	if (word=='renifle') return 'renifler';
	if (word=='rentre') return 'rentrer';
	if (word=='reponds') return 'repondre';
	if (word=='reveille') return 'reveiller';
	if (word=='revets') return 'revetir';
	if (word=='ruine') return 'ruiner';
	if (word=='salue') return 'saluer';
	if (word=='saute') return 'sauter';
	if (word=='secoue') return 'secouer';
	if (word=='sens') return 'sentir';
	if (word=='sirote') return 'siroter';
	if (word=='somnole') return 'somnoler';
	if (word=='sors') return 'sortir';
	if (word=='souffle') return 'souffler';
	if (word=='souleve') return 'soulever';
	if (word=='tate') return 'tater';
	if (word=='tire') return 'tirer';
	if (word=='tords') return 'tordre';
	if (word=='torture') return 'torturer';
	if (word=='touche') return 'toucher';
	if (word=='tourne') return 'tourner';
	if (word=='traine') return 'trainer';
	if (word=='tranche') return 'trancher';
	if (word=='transfere') return 'transferer';
	if (word=='tue') return 'tuer';
	if (word=='va') return 'aller';
	if (word=='verrouille') return 'verrouiller';
	if (word=='vets') return 'vetir';
	if (word=='vide') return 'vider';
	if (word=='visse') return 'visser';
	if (word=='vois') return 'voir';
#Endif;

#Ifndef DESACTIVER_IMPERATIF_DPP;
	! impératif 2e personne du pluriel
	if (word=='abandonnez') return 'abandonner';
	if (word=='achetez') return 'acheter';
	if (word=='agitez') return 'agiter';
	if (word=='ajustez') return 'ajuster';
	if (word=='allez') return 'aller';
	if (word=='allongez') return 'allonger';
	if (word=='allumez') return 'allumer';
	if (word=='appuyez') return 'appuyer';
	if (word=='arretez') return 'arreter';
	if (word=='asseyez'or'assoyez') return 'asseoir';
	if (word=='astiquez') return 'astiquer';
	if (word=='attachez') return 'attacher';
	if (word=='attaquez') return 'attaquer';
	if (word=='attendez') return 'attendre';
	if (word=='avalez') return 'avaler';
	if (word=='balancez') return 'balancer';
	if (word=='balayez') return 'balayer';
	if (word=='bondissez') return 'bondir';
	if (word=='bougez') return 'bouger';
	if (word=='brandissez') return 'brandir';
	if (word=='brisez') return 'briser';
	if (word=='brulez') return 'bruler';
	if (word=='buvez') return 'boire';
	if (word=='caressez') return 'caresser';
	if (word=='cassez') return 'casser';
	if (word=='chantez') return 'chanter';
	if (word=='cirez') return 'cirer';
	if (word=='cognez') return 'cogner';
	if (word=='combattez') return 'combattre';
	if (word=='comprimez') return 'comprimer';
	if (word=='consultez') return 'consulter';
	if (word=='couchez') return 'coucher';
	if (word=='coupez') return 'couper';
	if (word=='courez') return 'courir';
	if (word=='couvrez') return 'couvrir';
	if (word=='cramez') return 'cramer';
	if (word=='creusez') return 'creuser';
!	if (word=='criez') return 'crier';
	if (word=='cueillez') return 'cueillir';
	if (word=='decortiquez') return 'decortiquer';
	if (word=='decrivez') return 'decrire';
	if (word=='deguisez') return 'deguiser';
	if (word=='demandez') return 'demander';
	if (word=='demarrez') return 'demarrer';
	if (word=='deplacez') return 'deplacer';
	if (word=='deposez') return 'deposer';
	if (word=='depoussierez') return 'depoussierer';
	if (word=='descendez') return 'descendre';
	if (word=='detruisez') return 'detruire';
	if (word=='deverrouillez') return 'deverrouiller';
	if (word=='devissez') return 'devisser';
	if (word=='devorez') return 'devorer';
	if (word=='dites') return 'dire';
	if (word=='donnez') return 'donner';
	if (word=='dormez') return 'dormir';
	if (word=='ecoutez') return 'ecouter';
	if (word=='ecrasez') return 'ecraser';
	if (word=='elaguez') return 'elaguer';
	if (word=='embrasez') return 'embraser';
	if (word=='embrassez') return 'embrasser';
	if (word=='endossez') return 'endosser';
	if (word=='enfilez') return 'enfiler';
	if (word=='enlevez') return 'enlever';
	if (word=='entendez') return 'entendre';
	if (word=='entrez') return 'entrer';
	if (word=='epluchez') return 'eplucher';
	if (word=='escaladez') return 'escalader';
	if (word=='essuyez') return 'essuyer';
	if (word=='eteignez') return 'eteindre';
	if (word=='etreignez') return 'etreindre';
	if (word=='eveillez') return 'eveiller';
	if (word=='examinez') return 'examiner';
	if (word=='exigez') return 'exiger';
	if (word=='faites') return 'faire';
	if (word=='fermez') return 'fermer';
	if (word=='fixez') return 'fixer';
	if (word=='fouillez') return 'fouiller';
	if (word=='frappez') return 'frapper';
	if (word=='frottez') return 'frotter';
	if (word=='goutez') return 'gouter';
	if (word=='gravissez') return 'gravir';
	if (word=='grimpez') return 'grimper';
	if (word=='habillez') return 'habiller';
	if (word=='incendiez') return 'incendier';
	if (word=='inserez') return 'inserer';
	if (word=='interrogez') return 'interroger';
	if (word=='introduisez') return 'introduire';
	if (word=='jetez') return 'jeter';
	if (word=='lachez') return 'lacher';
	if (word=='laissez') return 'laisser';
	if (word=='lancez') return 'lancer';
	if (word=='levez') return 'lever';
	if (word=='lisez') return 'lire';
	if (word=='mangez') return 'manger';
	if (word=='marchez') return 'marcher';
	if (word=='mettez') return 'mettre';
	if (word=='montez') return 'monter';
	if (word=='montrez') return 'montrer';
	if (word=='nagez') return 'nager';
	if (word=='nettoyez') return 'nettoyer';
	if (word=='nouez') return 'nouer';
	if (word=='nourrissez') return 'nourrir';
	if (word=='observez') return 'observer';
	if (word=='offrez') return 'offrir';
	if (word=='ordonnez') return 'ordonner';
	if (word=='otez') return 'oter';
	if (word=='ouvrez') return 'ouvrir';
!	if (word=='parlez') return 'parler';
	if (word=='partez') return 'partir';
	if (word=='passez') return 'passer';
	if (word=='payez') return 'payer';
	if (word=='pelez') return 'peler';
	if (word=='pensez') return 'penser';
	if (word=='plongez') return 'plonger';
	if (word=='portez') return 'porter';
	if (word=='posez') return 'poser';
	if (word=='poussez') return 'pousser';
	if (word=='prenez') return 'prendre';
	if (word=='presentez') return 'presenter';
	if (word=='pressez') return 'presser';
	if (word=='priez') return 'prier';
	if (word=='questionnez') return 'questionner';
	if (word=='ramassez') return 'ramasser';
	if (word=='recurez') return 'recurer';
	if (word=='refermez') return 'refermer';
	if (word=='reflechissez') return 'reflechir';
	if (word=='regardez') return 'regarder';
	if (word=='reglez') return 'regler';
	if (word=='relevez') return 'relever';
	if (word=='remettez') return 'remettre';
	if (word=='remplissez') return 'remplir';
	if (word=='reniflez') return 'renifler';
	if (word=='rentrez') return 'rentrer';
	if (word=='repondez') return 'repondre';
	if (word=='reveillez') return 'reveiller';
	if (word=='revetez') return 'revetir';
	if (word=='ruinez') return 'ruiner';
	if (word=='saluez') return 'saluer';
	if (word=='sautez') return 'sauter';
	if (word=='secouez') return 'secouer';
	if (word=='sentez') return 'sentir';
	if (word=='sirotez') return 'siroter';
	if (word=='somnolez') return 'somnoler';
	if (word=='sortez') return 'sortir';
	if (word=='soufflez') return 'souffler';
	if (word=='soulevez') return 'soulever';
	if (word=='tatez') return 'tater';
	if (word=='tirez') return 'tirer';
	if (word=='tordez') return 'tordre';
	if (word=='torturez') return 'torturer';
	if (word=='touchez') return 'toucher';
	if (word=='tournez') return 'tourner';
	if (word=='trainez') return 'trainer';
	if (word=='tranchez') return 'trancher';
	if (word=='transferez') return 'transferer';
	if (word=='tuez') return 'tuer';
	if (word=='verrouillez') return 'verrouiller';
	if (word=='vetez') return 'vetir';
	if (word=='videz') return 'vider';
	if (word=='vissez') return 'visser';
	if (word=='voyez') return 'voir';
#Endif;

#Ifndef DESACTIVER_INDICATIF_PPS;
	! présent de l'indicatif 1e personne du singulier
	! (nécessite l'impératif, 2e personne du singulier)
	if (word=='vais') return 'aller'; ! exception
#Endif;

#Ifndef DESACTIVER_IMPERATIF_PPP;
	! impératif 1e personne du pluriel
	! (identique à l'indicatif 1e personne du pluriel)
	if (word=='abandonnons') return 'abandonner';
	if (word=='achetons') return 'acheter';
	if (word=='agitons') return 'agiter';
	if (word=='ajustons') return 'ajuster';
	if (word=='allongeons') return 'allonger';
	if (word=='allons') return 'aller';
	if (word=='allumons') return 'allumer';
	if (word=='appuyons') return 'appuyer';
	if (word=='arretons') return 'arreter';
	if (word=='asseyons'or'assoyons') return 'asseoir';
	if (word=='astiquons') return 'astiquer';
	if (word=='attachons') return 'attacher';
	if (word=='attaquons') return 'attaquer';
	if (word=='attendons') return 'attendre';
	if (word=='avalons') return 'avaler';
	if (word=='balancons') return 'balancer';
	if (word=='balayons') return 'balayer';
	if (word=='bondissons') return 'bondir';
	if (word=='bougeons') return 'bouger';
	if (word=='brandissons') return 'brandir';
	if (word=='brisons') return 'briser';
	if (word=='brulons') return 'bruler';
	if (word=='buvons') return 'boire';
	if (word=='caressons') return 'caresser';
	if (word=='cassons') return 'casser';
	if (word=='chantons') return 'chanter';
	if (word=='cirons') return 'cirer';
	if (word=='cognons') return 'cogner';
	if (word=='combattons') return 'combattre';
	if (word=='comprimons') return 'comprimer';
	if (word=='consultons') return 'consulter';
	if (word=='couchons') return 'coucher';
	if (word=='coupons') return 'couper';
	if (word=='courons') return 'courir';
	if (word=='couvrons') return 'couvrir';
	if (word=='cramons') return 'cramer';
	if (word=='creusons') return 'creuser';
!	if (word=='crions') return 'crier';
	if (word=='cueillons') return 'cueillir';
	if (word=='decortiquons') return 'decortiquer';
	if (word=='decrivons') return 'decrire';
	if (word=='deguisons') return 'deguiser';
	if (word=='demandons') return 'demander';
	if (word=='demarrons') return 'demarrer';
	if (word=='deplacons') return 'deplacer';
	if (word=='deposons') return 'deposer';
	if (word=='depoussierons') return 'depoussierer';
	if (word=='descendons') return 'descendre';
	if (word=='detruisons') return 'detruire';
	if (word=='deverrouillons') return 'deverrouiller';
	if (word=='devissons') return 'devisser';
	if (word=='devorons') return 'devorer';
	if (word=='disons') return 'dire';
	if (word=='donnons') return 'donner';
	if (word=='dormons') return 'dormir';
	if (word=='ecoutons') return 'ecouter';
	if (word=='ecrasons') return 'ecraser';
	if (word=='elaguons') return 'elaguer';
	if (word=='embrasons') return 'embraser';
	if (word=='embrassons') return 'embrasser';
	if (word=='endossons') return 'endosser';
	if (word=='enfilons') return 'enfiler';
	if (word=='enlevons') return 'enlever';
	if (word=='entendons') return 'entendre';
	if (word=='entrons') return 'entrer';
	if (word=='epluchons') return 'eplucher';
	if (word=='escaladons') return 'escalader';
	if (word=='essuyons') return 'essuyer';
	if (word=='eteignons') return 'eteindre';
	if (word=='etreignons') return 'etreindre';
	if (word=='eveillons') return 'eveiller';
	if (word=='examinons') return 'examiner';
	if (word=='exigeons') return 'exiger';
	if (word=='faisons') return 'faire';
	if (word=='fermons') return 'fermer';
	if (word=='fixons') return 'fixer';
	if (word=='fouillons') return 'fouiller';
	if (word=='frappons') return 'frapper';
	if (word=='frottons') return 'frotter';
	if (word=='goutons') return 'gouter';
	if (word=='gravissons') return 'gravir';
	if (word=='grimpons') return 'grimper';
	if (word=='habillons') return 'habiller';
	if (word=='incendions') return 'incendier';
	if (word=='inserons') return 'inserer';
	if (word=='interrogeons') return 'interroger';
	if (word=='introduisons') return 'introduire';
	if (word=='jetons') return 'jeter';
	if (word=='lachons') return 'lacher';
	if (word=='laissons') return 'laisser';
	if (word=='lancons') return 'lancer';
	if (word=='levons') return 'lever';
	if (word=='lisons') return 'lire';
	if (word=='mangeons') return 'manger';
	if (word=='marchons') return 'marcher';
	if (word=='mettons') return 'mettre';
	if (word=='montons') return 'monter';
	if (word=='montrons') return 'montrer';
	if (word=='nageons') return 'nager';
	if (word=='nettoyons') return 'nettoyer';
	if (word=='nouons') return 'nouer';
	if (word=='nourrissons') return 'nourrir';
	if (word=='observons') return 'observer';
	if (word=='offrons') return 'offrir';
	if (word=='ordonnons') return 'ordonner';
	if (word=='otons') return 'oter';
	if (word=='ouvrons') return 'ouvrir';
!	if (word=='parlons') return 'parler';
	if (word=='partons') return 'partir';
	if (word=='passons') return 'passer';
	if (word=='payons') return 'payer';
	if (word=='pelons') return 'peler';
	if (word=='pensons') return 'penser';
	if (word=='plongeons') return 'plonger';
	if (word=='portons') return 'porter';
	if (word=='posons') return 'poser';
	if (word=='poussons') return 'pousser';
	if (word=='prenons') return 'prendre';
	if (word=='presentons') return 'presenter';
	if (word=='pressons') return 'presser';
	if (word=='prions') return 'prier';
	if (word=='questionnons') return 'questionner';
	if (word=='ramassons') return 'ramasser';
	if (word=='recurons') return 'recurer';
	if (word=='refermons') return 'refermer';
	if (word=='reflechissons') return 'reflechir';
	if (word=='regardons') return 'regarder';
	if (word=='reglons') return 'regler';
	if (word=='relevons') return 'relever';
	if (word=='remettons') return 'remettre';
	if (word=='remplissons') return 'remplir';
	if (word=='reniflons') return 'renifler';
	if (word=='rentrons') return 'rentrer';
	if (word=='repondons') return 'repondre';
	if (word=='reveillons') return 'reveiller';
	if (word=='revetons') return 'revetir';
	if (word=='ruinons') return 'ruiner';
	if (word=='saluons') return 'saluer';
	if (word=='sautons') return 'sauter';
	if (word=='secouons') return 'secouer';
	if (word=='sentons') return 'sentir';
	if (word=='sirotons') return 'siroter';
	if (word=='somnolons') return 'somnoler';
	if (word=='sortons') return 'sortir';
	if (word=='soufflons') return 'souffler';
	if (word=='soulevons') return 'soulever';
	if (word=='tatons') return 'tater';
	if (word=='tirons') return 'tirer';
	if (word=='tordons') return 'tordre';
	if (word=='torturons') return 'torturer';
	if (word=='touchons') return 'toucher';
	if (word=='tournons') return 'tourner';
	if (word=='trainons') return 'trainer';
	if (word=='tranchons') return 'trancher';
	if (word=='transferons') return 'transferer';
	if (word=='tuons') return 'tuer';
	if (word=='verrouillons') return 'verrouiller';
	if (word=='vetons') return 'vetir';
	if (word=='vidons') return 'vider';
	if (word=='vissons') return 'visser';
	if (word=='voyons') return 'voir';
#Endif;

	return MyUnknownVerb(word); ! fonction facultative permettant d'étendre UnknownVerb
!	rfalse;
];

! #endif; ! NI_BUILD_COUNT 
! ------------------------------------------------------------------------------
!  This routine is no longer used here, but provided to help existing games
!  which use it as a general parsing routine:

[ ConTopic w;
    consult_from = wn;
    do w = NextWordStopped();
    until (w == -1 || (w == 'to' && action_to_be == ##Answer));
    wn--;
    consult_words = wn - consult_from;
    if (consult_words == 0) return -1;
    if (action_to_be == ##Answer or ##Ask or ##Tell) {
        w = wn; wn = consult_from; parsed_number = NextWord();
        if (parsed_number == 'the' && consult_words > 1) parsed_number = NextWord();
        wn = w;
        return 1;
    }
    return 0;
];

! ------------------------------------------------------------------------------
!  Final task: provide trivial routines if the user hasn't already:
! ------------------------------------------------------------------------------

#Stub AfterLife         0;
#Stub AfterPrompt       0;
#Stub Amusing           0;
#Stub BeforeParsing     0;
#Stub ChooseObjects     2;
#Stub DarkToDark        0;
#Stub DeathMessage      0;
#Stub GamePostRoutine   0;
#Stub GamePreRoutine    0;
#Stub InScope           1;
#Stub LookRoutine       0;
#Stub NewRoom           0;
#Stub ParseNumber       2;
#Stub ParserError       1;
#Stub PrintTaskName     1;
#Stub PrintVerb         1;
#Stub TimePasses        0;
#Stub UnknownVerb       1;
#Stub MyUnknownVerb     1; ! fonction facultative permettant d'étendre UnknownVerb

#Ifdef TARGET_GLULX;
#Stub HandleGlkEvent    2;
#Stub IdentifyGlkObject 4;
#Stub InitGlkWindow     1;
#Endif; ! TARGET_GLULX

#Ifndef PrintRank;
! Constant Make__PR;
! #Endif;
! #Ifdef Make__PR;
[ PrintRank; "."; ];
#Endif;

#Ifndef ParseNoun;
! Constant Make__PN;
! #Endif;
! #Ifdef Make__PN;


! D'après la traduction en espagnol (par Jose Luis Diaz) :
! La routine ParseNoun s'occupe d'ignorer "de" quand il apparaît entre
! deux mots reconnus comme noms d'un même objet. Ainsi, si
! un objet a dans son champ "name" les valeurs "cage" "bois" "caoba"
! ParseNoun acceptera "cage de bois" "cage de caoba" et aussi
! "cage de bois de caoba". Par contre, avec la chaîne "cage de malle", il
! n'acceptera que le premier mot (cage) laissant "de malle", ce qui permet
! l'interprétation ultérieure de phrases comme "sors cage de malle"
! Y compris "sors cage de bois de caoba de malle"
! Au passage il ignore aussi les articles ce qui lui permet d'admettre :
! "sors la cage de bois de caoba de la malle"
!
! ParseNoun doit retourner un nombre indiquant combien de mots conviennent
! comme appartenant à l'objet. Dans notre exemple, avec "cage de bois"
! il doit retourner 3, mais avec "cage de malle" il doit retourner 1.
!
! [JLP : "bois de l'eau" est également rendu possible]
!
[ ParseNoun obj n doute continuer p;

    n=0;   ! nombre de mots reconnus pour le moment
! doute=0;      !*! facultatif ? 
    continuer=1;  ! continuer à regarder les mots pour voir si les suivants
                  ! se réfèrent à ce même objet
    while(continuer)
    {
        p=NextWord();
        if (IsAWordIn(p, obj, name))  ! Un mot qui se réfère à l'objet
        {
            n++;                ! nous le comptabilisons
            n=n+doute;          ! nous ajoutons tous les "de" "la"...
                                ! qui ne comptaient pas
            doute=0;            ! et nous remettons à zéro le compteur de "de"s
            continue;           ! nous revenons au while
        }
        ! Si le mot n'a pas été reconnu, nous regarderons s'il s'agit
        ! de 'de' ou d'un article. Dans ce cas nous maintenons le doute et
        ! nous continuons à regarder les mots, jusqu'à ce que l'un d'eux
        ! corresponde à cet objet, auquel cas on retourne toutes celles qui
        ! ont été lues, ou bien on en trouve un qui ne correspond pas auquel
        ! cas on retourne celles que l'on avait trouvées avant le "de"

        else if (p=='le' or 'l^' or 'la' or 'les'
                 or 'de' or 'd^' or 'en'
                 or 'du' or 'des') !*! ces 2 derniers sont discutables
        {
                doute++; continue;
        }
        else continuer=0;   ! Si on ne reconnaît ni un article, ni "de"
                            ! nous nous avouons vaincus
    }
        return n;
];
[ IsAWordIn nom o prop k l m;
  k=o.&prop; l=(o.#prop)/WORDSIZE;
  for (m=0:m<l:m++) if (nom==k-->m) rtrue;
  rfalse;
];


#Endif;

#Default Story 0;
#Default Headline 0;

#Ifdef INFIX;
#Include "infix";
#Endif;

! ==============================================================================

Constant LIBRARY_GRAMMAR;       ! for dependency checking

! ==============================================================================
