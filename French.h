! ==============================================================================
!   FRENCH:  Language Definition File
!
!   Supplied for use with Inform 6 -- Release 6/11 -- Serial number 040227
!   Version adapt�e pour Inform 7
!   Copyright Graham Nelson 1993-2004 but freely usable (see manuals)
!
!   Traduit en fran�ais par Jean-Luc Pontico 2001-2004.
!   L'adaptation � Glulx a �t� r�alis�e avec l'aide d'Eric Forgeot.
!   Certaines fonctions sont tir�es de la traduction en espagnol de Jose Luis Diaz.
!   Diverses modifications apport�es par Samuel Verschelde (Stormi)
!
!   This file is automatically Included in your game file by "parserm".
!   Strictly, "parserm" includes the file named in the "language__" variable,
!   whose contents can be defined by+language_name=XXX compiler setting (with a
!   default of "english").
!
! ==============================================================================

! Version 2.3 du 05/09/2008
Constant LibReleaseFR      "2.4dev";
Message		"[Compil� avec la version ", (string) LibReleaseFR, " de la biblioth�que francophone.]";

System_file;

! ------------------------------------------------------------------------------
!   Part I.   Preliminaries
! ------------------------------------------------------------------------------

! Zplet n'affiche pas bien certains accents si les lignes suivantes sont activ�es.
! (voir le Designer's Manual paragraphe 36)
! Ceci dit, il est d�conseill� de mettre des accents dans les mots du dictionnaire
! car les accents saisis par le joueur sont automatiquement enlev�s pour les mots
! non reconnus.
! (fonction d�sactiv�e)
!#Ifdef PAS_POUR_LA_ZPLET;
!Zcharacter '�';
!Zcharacter '�';
!Zcharacter '�';
!Zcharacter '�';
!Zcharacter '�';
!Zcharacter '�';
!#endif;

!*! Constant EnglishNaturalLanguage;    ! Needed to keep old pronouns mechanism

Class   CompassDirection
  with  number 0, article "le",
        description [;
            if (location provides compass_look && location.compass_look(self)) rtrue;
            if (self.compass_look()) rtrue;
            L__M(##Look, 7, self);
        ],
        compass_look false,
  has   scenery;

Object Compass "compass" has concealed;

#Ifndef WITHOUT_DIRECTIONS;
CompassDirection -> n_obj "nord"
                    with door_dir n_to, name 'n//' 'nord';
CompassDirection -> s_obj "sud"
                    with door_dir s_to, name 's//' 'sud';
CompassDirection -> e_obj "est"
                    with door_dir e_to, name 'e//' 'est',
                    article "l'";
CompassDirection -> w_obj "ouest"
                    with door_dir w_to, name 'o//' 'w//' 'ouest',
                    article "l'";
CompassDirection -> ne_obj "nord-est"
                    with door_dir ne_to, name 'ne' 'nordest';
CompassDirection -> nw_obj "nord-ouest"
                    with door_dir nw_to, name 'no' 'nw' 'nordouest';
CompassDirection -> se_obj "sud-est"
                    with door_dir se_to, name 'se' 'sudest';
CompassDirection -> sw_obj "sud-ouest"
                    with door_dir sw_to, name 'so' 'sw' 'sudouest';
CompassDirection -> u_obj "haut"
                    with door_dir u_to, name 'h//' 'haut' 'plafond' 'ciel';
CompassDirection -> d_obj "bas"
                    with door_dir d_to, name 'b//' 'd//' 'bas' 'sol';
#endif; ! WITHOUT_DIRECTIONS

CompassDirection -> in_obj "int�rieur"
                    with door_dir in_to, name 'dedans' 'interieur',
                    article "l'";
CompassDirection -> out_obj "ext�rieur"
                    with door_dir out_to, name 'dehors' 'exterieur',
                    article "l'";

! ------------------------------------------------------------------------------
!   Part II.   Vocabulary
! ------------------------------------------------------------------------------

Constant AGAIN1__WD   = 'encore';
Constant AGAIN2__WD   = 'g//';
Constant AGAIN3__WD   = 'c//';
Constant OOPS1__WD    = 'oops';
Constant OOPS2__WD    = 'euh';
Constant OOPS3__WD    = 'euh';
Constant UNDO1__WD    = 'undo';
Constant UNDO2__WD    = 'annule';
Constant UNDO3__WD    = 'annuler';

Constant ALL1__WD     = 'tous';
Constant ALL2__WD     = 'toutes';
Constant ALL3__WD     = 'tout';
Constant ALL4__WD     = 'tout';
Constant ALL5__WD     = 'tout';
Constant AND1__WD     = 'et';
Constant AND2__WD     = 'et';
Constant AND3__WD     = 'et';
Constant BUT1__WD     = 'mais pas';
Constant BUT2__WD     = 'excepte';
Constant BUT3__WD     = 'sauf';
Constant ME1__WD      = 'moi';
Constant ME2__WD      = 'toi'; !*! nous ? moi-m�me ?
Constant ME3__WD      = 'vous';
Constant OF1__WD      = 'de';
Constant OF2__WD      = 'de';
Constant OF3__WD      = 'de';
Constant OF4__WD      = 'de';
Constant OTHER1__WD   = 'unautre';
Constant OTHER2__WD   = 'autre';
Constant OTHER3__WD   = 'autre';
Constant THEN1__WD    = 'alors';
Constant THEN2__WD    = 'puis';
Constant THEN3__WD    = 'ensuite';

Constant NO1__WD      = 'n//';
Constant NO2__WD      = 'non';
Constant NO3__WD      = 'non';
Constant YES1__WD     = 'o//';
Constant YES2__WD     = 'y//';
Constant YES3__WD     = 'oui';

Constant AMUSING__WD  = 'amusing';
Constant FULLSCORE1__WD = 'fullscore';
Constant FULLSCORE2__WD = 'full';
Constant QUIT1__WD    = 'q//';
Constant QUIT2__WD    = 'quitter';
Constant RESTART__WD  = 'recommencer';
Constant RESTORE__WD  = 'charger';

Array LanguagePronouns table

   !  word       possible GNAs                   connected
   !             to follow:                      to:
   !             a     i
   !             s  p  s  p
   !             mfnmfnmfnmfn

      ! Object pronouns
      '-le'    $$100000100000                    NULL
      '-la'    $$010000010000                    NULL
      '-les'   $$000110000110                    NULL
      '-lui'   $$110000110000                    NULL
      '-leur'  $$000110000110                    NULL        ! tirets remis
!      'le'    $$100000100000                    NULL        ! car l'article le/la/les vient parfois interf�rer
!      'la'    $$010000010000                    NULL        ! par exemple "mange la pomme" est compris comme "mange-la" si "pomme" est inconnu, d'o� des messages d'erreur troublants pour le joueur
!      'les'   $$000110000110                    NULL
!      'lui'   $$110000110000                    NULL ! dans "donne-lui", "lui" est m ou f
!      'leur'  $$000110000110                    NULL
      
      ! Disjunctive pronouns
!*! ! f�minin accept� pour 'luy' (mot bidon) pour traiter les cas 'dedans', 'dessus', 'l^'... (genre inconnu)
!   en fait, '-lui' pourrait jouer le m�me r�le
      'luy'    $$110000110000                    NULL ! "l'ouvrir" devient "ouvrir luy", "luy" �tant m ou f
      'lui'    $$100000100000                    NULL
      'elle'   $$010000010000                    NULL
      'eux'    $$000110000110                    NULL
      'elles'  $$000010000010                    NULL;

Array LanguageDescriptors table

   !  word       possible GNAs   descriptor      connected
   !             to follow:      type:           to:
   !             a     i
   !             s  p  s  p
   !             mfnmfnmfnmfn

      'mon'    $$100000100000    POSSESS_PK      0  !*! ce qui suit ne doit pas fonctionner souvent
      'ma'     $$010000010000    POSSESS_PK      0  !*! du moins je l'esp�re car mon/ma/mes devrait
      'mes'    $$000110000110    POSSESS_PK      0  !*! changer en fonction du type de parole
      'ton'    $$100000100000    POSSESS_PK      0  !*!
      'ta'     $$010000010000    POSSESS_PK      0  !*! (quoique �a a l'air tres tolerant)
      'tes'    $$000110000110    POSSESS_PK      0  !*!
      'notre'  $$110000110000    POSSESS_PK      0  !*!
      'nos'    $$000110000110    POSSESS_PK      0  !*!
      'votre'  $$110000110000    POSSESS_PK      0  !*!
      'vos'    $$000110000110    POSSESS_PK      0  !*!
      'son'    $$100000100000    POSSESS_PK      '-lui'        ! tirets remis
      'sa'     $$010000010000    POSSESS_PK      '-lui'
      'ses'    $$000110000110    POSSESS_PK      '-lui'
      'leur'   $$110000110000    POSSESS_PK      '-les'
      'leurs'  $$000110000110    POSSESS_PK      '-les'
!      'son'    $$100000100000    POSSESS_PK      'lui' 
!      'sa'     $$010000010000    POSSESS_PK      'lui'
!      'ses'    $$000110000110    POSSESS_PK      'lui'
!      'leur'   $$110000110000    POSSESS_PK      'les'
!      'leurs'  $$000110000110    POSSESS_PK      'les' 

      'le'     $$100000100000    DEFART_PK       NULL
      'la'     $$010000010000    DEFART_PK       NULL
      'l^'     $$110000110000    DEFART_PK       NULL
      'les'    $$000110000110    DEFART_PK       NULL
      'un'     $$100000100000    INDEFART_PK     NULL
      'une'    $$010000010000    INDEFART_PK     NULL
      'des'    $$000110000110    INDEFART_PK     NULL

     'allum�'  $$100000100000    light           NULL
     'allum�e' $$010000010000    light           NULL
     '�teint'  $$100000100000    (-light)        NULL
     '�teinte' $$010000010000    (-light)        NULL;

Array LanguageNumbers table
    'un' 1 'une' 1 'deux' 2 'trois' 3 'quatre' 4 'cinq' 5
    'six' 6 'sept' 7 'huit' 8 'neuf' 9 'dix' 10
    'onze' 11 'douze' 12 'treize' 13 'quatorze' 14 'quinze' 15
    'seize' 16 'dix-sept' 17 'dix-huit' 18 'dix-neuf' 19 'vingt' 20;

! ------------------------------------------------------------------------------
!   Part III.   Translation
! ------------------------------------------------------------------------------

! La fonction enleve_accents enl�ve les accents des mots qui n'ont pu �tre
! interpr�t�s. De cette mani�re, le joueur peut utiliser les accents ou non.
! Pour cela le jeu doit d�finir les mots sans accent, par exemple :
! object set_of_keys "trousseau de cl�s"
! with name 'trousseau' 'cles'
!
! Si le joueur demande : "examiner cles", le mot est compris directement.
! S'il demande : "examiner cl�s" le mot n'est pas compris, ce qui d�clenche 
! la suppression des accents et une nouvelle analyse.

! L'appel de cette fonction peut �tre d�sactiv� avec la commande de
! deboguage "accents on" pour que les accents soient conserv�s.

global enleveaccents=1;

[ enleve_accents x i word at len;

    #Ifdef DEBUG; affiche_buffer(buffer, "  [ enleve_accents :^  - Buffer re�u : "); #Endif;

    for (x=0:x<NbMots():x++) ! pour chaque mot
    {
        word=Mot(x);
        at=PositionMot(x);
        len=LongueurMot(x);
        if (word==0) ! non compris
        {
#Ifdef DEBUG;
            if (parser_trace>=7)
            {
                print "    NON COMPRIS : |";
                for (i=at:i<at+len:i++) print (char) buffer->i;
                print "|^";
            }
#Endif;
            for (i=at:i<at+len:i++)
                if (buffer->i=='�') buffer->i='e'; !*! plut�t un switch ?

                else if(buffer->i=='�') buffer->i='a';
                else if(buffer->i=='�') buffer->i='e';
                else if(buffer->i=='�') buffer->i='u';

                else if(buffer->i=='�') buffer->i='a';
                else if(buffer->i=='�') buffer->i='e';
                else if(buffer->i=='�') buffer->i='i';
                else if(buffer->i=='�') buffer->i='o';
                else if(buffer->i=='�') buffer->i='u';

                else if(buffer->i=='�') buffer->i='a';
                else if(buffer->i=='�') buffer->i='e';
                else if(buffer->i=='�') buffer->i='i';
                else if(buffer->i=='�') buffer->i='o';
                else if(buffer->i=='�') buffer->i='u';

                else if(buffer->i=='�') buffer->i='c';

            Tokenise__(buffer,parse);
        }
    }

    #Ifdef DEBUG; affiche_buffer(buffer, "  - Buffer sans accents : "); #Endif;
];

! enl�ve le tiret de d�part des mots qui ne sont pas dans le dictionnaire
[ enleve_tirets x i word at len;
    i=NULL; ! pour retirer warning a la compilation glulxe

    #Ifdef DEBUG; affiche_buffer(buffer, "  [ enleve_tirets :^  - Buffer re�u : "); #Endif;

    for (x=0:x<NbMots():x++) ! pour chaque mot
    {
        word=Mot(x);
        at=PositionMot(x);
        len=LongueurMot(x);
        if (word==0) ! non compris
        {
#Ifdef DEBUG;
            if (parser_trace>=7)
            {
                print "    NON COMPRIS : |";
                for (i=at:i<at+len:i++) print (char) buffer->i;
                print "|^";
            }
#Endif;

            if (buffer->at=='-') buffer->at=' ';
            Tokenise__(buffer,parse);
        }
    }

    #Ifdef DEBUG; affiche_buffer(buffer, "  - Buffer sans tirets : "); #Endif;
];

[ NbMots; ! nombre de mots dans parse
#Ifdef TARGET_ZCODE;
    return parse->1;
#Ifnot; ! TARGET_GLULX
    return parse-->0;
#Endif; ! TARGET_
];

[ NbChars; ! nombre de chars dans buffer
#Ifdef TARGET_ZCODE;
    return buffer->1;
#Ifnot; ! TARGET_GLULX
    return buffer-->0;
#Endif; ! TARGET_
];

[ Mot n; ! valeur (dictionnaire) du mot num�ro n de parse
#Ifdef TARGET_ZCODE;
    return parse-->(n*2 + 1);
#Ifnot; ! TARGET_GLULX
    return parse-->(n*3 + 1);
#Endif; ! TARGET_
];

[ PositionMot n; ! position dans buffer du mot num�ro n de parse
#Ifdef TARGET_ZCODE;
    return parse->(n*4 + 5);
#Ifnot; ! TARGET_GLULX
    return parse-->(n*3 + 3);
#Endif; ! TARGET_
];

[ LongueurMot n;   ! longueur (en chars) dans buffer du mot num�ro n de parse
#Ifdef TARGET_ZCODE;
    return parse->(n*4 + 4);
#Ifnot; ! TARGET_GLULX
    return parse-->(n*3 + 2);
#Endif; ! TARGET_
];

[ EcraseMot n i;        ! �crase avec des espaces dans buffer le mot num�ro n
    for(i=0:i<LongueurMot(n):i++)
        buffer->(PositionMot(n)+i) = ' ';
];

[ DernierMot n; ! vrai si le mot num�ro n est le dernier ou suivi d'un "point" (THEN1__WD, ...)
    if (n==NbMots()-1) ! le mot num�ro n est-il le dernier ?
        return true;
    else        ! est-il suivi d'un "point" ?
        return (Mot(n+1) == THEN1__WD or THEN2__WD or THEN3__WD);
];

[ LanguageToInformese i word wordsuiv at b RangVerbe RangDernier;

    Tokenise__(buffer,parse);
    #Ifdef DEBUG; affiche_buffer(buffer, "[ LanguageToInformese:^* Buffer re�u : "); #Endif;

    for (i=0:i<NbMots():i++) ! balayer toute la phrase
    {
         word = Mot(i);
         if (DernierMot(i)) wordsuiv=THEN1__WD; else wordsuiv=Mot(i+1);
         at = PositionMot(i); ! position du mot num�ro i dans buffer
         if (word == 'dessus')
         {   LTI_Insert(at, ' '); ! remplace
             buffer->at     = 's';
             buffer->(at+1) = 'u';
             buffer->(at+2) = 'r';
             buffer->(at+3) = '-'; ! contrairement � 'lui', '-lui' peut �tre f�minin !*! mais pas pluriel...
             buffer->(at+4) = 'l';
             buffer->(at+5) = 'u';
             buffer->(at+6) = 'i';
             Tokenise__(buffer,parse);
             i = 0; continue;
         }
         if (word == 'dessous')
         {   LTI_Insert(at, ' '); ! remplace
             buffer->at     = 's';
             buffer->(at+1) = 'o';
             buffer->(at+2) = 'u';
             buffer->(at+3) = 's';
             buffer->(at+4) = '-'; ! contrairement � 'lui', '-lui' peut �tre f�minin !*! mais pas pluriel...
             buffer->(at+5) = 'l';
             buffer->(at+6) = 'u';
             buffer->(at+7) = 'i';
             Tokenise__(buffer,parse);
             i = 0; continue;
         }
!*! pas forc�ment une bonne id�e car "dedans" est aussi une direction !*! mais "mets-le dedans" ?
!         if (word == 'dedans') !*! dehors ?
!         {   LTI_Insert(at, ' '); ! remplace
!             LTI_Insert(at, ' ');
!             buffer->at     = 'd';
!             buffer->(at+1) = 'a';
!             buffer->(at+2) = 'n';
!             buffer->(at+3) = 's';
!             buffer->(at+4) = ' ';
!             buffer->(at+5) = 'l';
!             buffer->(at+6) = 'u';
!             buffer->(at+7) = 'y';
!             Tokenise__(buffer,parse);
!             i = 0; continue;
!         }

         ! "nord-est" ou "nord est" devient "nordest"
         if ( (word=='nord-est'or'nord-ouest') || ((word=='nord')&&(wordsuiv=='est'or'ouest')) )
         {
             buffer->at     = ' '; ! d�cale
             buffer->(at+1) = 'n';
             buffer->(at+2) = 'o';
             buffer->(at+3) = 'r';
             buffer->(at+4) = 'd';
             Tokenise__(buffer,parse);
             i = 0; continue;
         }
         ! "sud-est" ou "sud est" devient "sudest"
         if ( (word=='sud-est'or'sud-ouest') || ((word=='sud')&&(wordsuiv=='est'or'ouest')) )
         {
             buffer->at     = ' '; ! d�cale
             buffer->(at+1) = 's';
             buffer->(at+2) = 'u';
             buffer->(at+3) = 'd';
             Tokenise__(buffer,parse);
             i = 0; continue;
         }
     }

    !  insertion d'un espace avant chaque tiret et apr�s chaque apostrophe 
    for (i=WORDSIZE:i<WORDSIZE+NbChars():i++) {
        if (buffer->i == '-') LTI_Insert(i++, ' ');
        if (buffer->i == ''') LTI_Insert(++i, ' '); ! ''' !*! autre notation ? '\'' par exemple ?
    }
    Tokenise__(buffer,parse);

    ! Suppression de 'je' ou 'j^' en d�but de phrase.
    ! Par exemple, "je vais au nord" devient "vais au nord".
    if (Mot(0) == 'je' or 'j^') {
        EcraseMot(0);
        Tokenise__(buffer,parse); 
    }

    !*! ce qui suit ne tient pas bien compte des commandes s'adressant � quelqu'un ("machin, fais ceci")
    ! Transformation de phrases � l'infinitif commen�ant par un ou deux pronoms suivis d'un mot (verbe, probablement)
    ! Ex : "le lui donner" devient "donner -le -lui"
    ! Etape A : "le/la/l'/les" (suivi �ventuellement de "lui/leur") passe apr�s le verbe. Ex : "lui donner -le"
    word=Mot(0); ! 1er mot
    if ((NbMots()>=2)&&(Mot(1)=='lui'or'leur')) RangVerbe=2; else RangVerbe=1; ! verbe = 2e ou 3e mot ?
    b=PositionMot(RangVerbe)+LongueurMot(RangVerbe); ! juste apr�s le verbe = position du verbe + longueur du verbe
    if (~~DernierMot(RangVerbe-1)) { ! ne rien faire si la phrase ne comporte pas de verbe
        if (word == 'le')
        {
            EcraseMot(0);
            LTI_Insert(b, ' ');
            LTI_Insert(b+1, '-');
            LTI_Insert(b+2, 'l');
            LTI_Insert(b+3, 'e');
        }
        if (word == 'la')
        {
            EcraseMot(0);
            LTI_Insert(b, ' ');
            LTI_Insert(b+1, '-');
            LTI_Insert(b+2, 'l');
            LTI_Insert(b+3, 'a');
        }
        if (word == 'l^' or 'y//') ! exemple : "y aller" !*! 'y' � d�placer ?
        {
            EcraseMot(0); !*! impr�cision : en fait 'l^' est �quivalent � '-le' ou '-la'
            LTI_Insert(b, ' '); ! '-lui' est masculin ou f�minin
            LTI_Insert(b+1, '-');
            LTI_Insert(b+2, 'l'); !*! 'y' donne '-y' ? et 'en' ?
            LTI_Insert(b+3, 'u');
            LTI_Insert(b+4, 'i');
        }
        if (word == 'les')
        {
            EcraseMot(0);
            LTI_Insert(b, ' ');
            LTI_Insert(b+1, '-');
            LTI_Insert(b+2, 'l');
            LTI_Insert(b+3, 'e');
            LTI_Insert(b+4, 's');
        }
    }
    Tokenise__(buffer,parse);

    ! Etape B : "lui/leur" passe apr�s le verbe. Ex : "lui donner -le" devient "donner -le -lui"
    word=Mot(0); ! 1er mot
    ! RangDernier est le rang du dernier mot du bloc : verbe + "-le/-la/-les"
    if ((NbMots()>=3)&&(Mot(2)=='-le'or'-la'or'-les' or'-lui')) RangDernier=2; else RangDernier=1; ! "-le/-la/-les" apr�s le verbe ?
    b=PositionMot(RangDernier)+LongueurMot(RangDernier); ! juste apr�s bloc = position du dernier + longueur du dernier
    if (~~DernierMot(0)) { ! ne rien faire si la phrase ne comporte pas de verbe
        if (word == 'lui')
        {
            EcraseMot(0);
            LTI_Insert(b, ' ');
            LTI_Insert(b+1, '-');
            LTI_Insert(b+2, 'l');
            LTI_Insert(b+3, 'u');
            LTI_Insert(b+4, 'i');
        }
        if (word == 'leur')
        {
            EcraseMot(0);
            LTI_Insert(b, ' ');
            LTI_Insert(b+1, '-');
            LTI_Insert(b+2, 'l');
            LTI_Insert(b+3, 'e');
            LTI_Insert(b+4, 'u');
            LTI_Insert(b+5, 'r');
        }
    }
    Tokenise__(buffer,parse);

    if ( (word == 'me' or 'm^' or 'te' or 't^' or 'se' or 's^' or 'nous' or 'vous')
            && ~~DernierMot(0) ) ! sinon g�nerait "se", abr�viation de "sud-est"
    {
        EcraseMot(0);
        LTI_Insert(b, ' ');
        LTI_Insert(b+1, 'v');
        LTI_Insert(b+2, 'o');
        LTI_Insert(b+3, 'u');
        LTI_Insert(b+4, 's');
    }
    Tokenise__(buffer,parse);

    ! maintenant que les traitements sur l'infinitif ont �t� faits,
    ! enlever le tiret en d�but de mot pour ceux qui n'existent pas dans le dictionnaire
    ! (conserve '-lui','-le','-la'... et les mots pr�vus par le joueur)
    enleve_tirets();

    ! Avertir ceux qui oublient de mettre des traits d'union entre les pronons et le verbe
    ! � l'imp�ratif et corriger les cas les plus simples : !*! le plus possible
    enleve_accents(); ! sinon "�" n'est pas reconnu !*! placer cette fonction encore plus en amont ?
    if ( ((NbMots()==2)&&(Mot(1)=='le'or'la'or'les'or'lui'or'leur')) || ! "parle lui" devient "parle-lui"
            ((NbMots()>=2)&&(Mot(1)=='lui')) || ! "donne lui la pomme" devient "donne-lui la pomme" (pas de confusion possible avec l'article)
            ((NbMots()>=4)&&(Mot(1)=='le'or'la'or'les'or'lui'or'leur')&&(Mot(2)=='a//'or'au'or'aux'or'de'or'du'or'des'or'dans'or'sur')) ) ! "donne le aux moutons" devient "donne-le aux moutons"
    {
        LTI_Insert(PositionMot(1), '-');
        print "[Mettez toujours un trait d'union entre le pronom et le verbe � l'imp�ratif !]^";
    }
    if ((NbMots()==3)&&(Mot(1)=='le'or'la'or'les'or'-le'or'-la'or'-les')&&(Mot(2)=='lui'or'leur')) { ! "donne le lui" ou "donne-le lui" devient "donne-le-lui"
        if (Mot(1)=='le'or'la'or'les') LTI_Insert(PositionMot(1), '-');
        LTI_Insert(PositionMot(2), '-');
        print "[Mettez toujours un trait d'union entre chaque pronom et le verbe � l'imp�ratif !]^";
    }

    ! remplacer "toi/vous/nous" en 2e position par "vous"
    if ((Mot(1) == 'moi' or 'toi' or 'nous')) !*! pas s�r encore, sert � g�rer "r�veillons nous" -> "r�veillons vous"
    {
        EcraseMot(1); !*! fiable mais le buffer est agrandi de 3 ou 4 caract�res : pas grave ?
        LTI_Insert(PositionMot(1)  , 'v');
        LTI_Insert(PositionMot(1)+1, 'o');
        LTI_Insert(PositionMot(1)+2, 'u');
        LTI_Insert(PositionMot(1)+3, 's');
    }

    Tokenise__(buffer,parse);

    enleve_accents(); !*! d�j� fait plus haut ? on ne sait jamais avec enleve_tirets() !*! rendre la suppression des accents syst�matique ? (dictionnaire ou pas)

    #Ifdef DEBUG; affiche_buffer(buffer, "* Buffer traduit en informese : "); #Endif;
];

#Ifdef DEBUG;
[ affiche_buffer buffer msg i len;
    if (parser_trace>=7)
    {
#Ifdef TARGET_ZCODE;
        len=buffer->1;
#Ifnot; ! TARGET_GLULX
        len=buffer-->0;
#Endif; ! TARGET_
        print (string) msg,"|";
              for(i=WORDSIZE:i<WORDSIZE+len:i++) print (char) buffer->i;
        print "|^";
    }
];
#Endif;

! ------------------------------------------------------------------------------
!   Part IV.   Printing
! ------------------------------------------------------------------------------

Constant LanguageAnimateGender   = male;
Constant LanguageInanimateGender = male;

Constant LanguageContractionForms = 2;     ! French has two:
                                           ! 0 = starting with a consonant
                                           ! 1 = starting with a vowel
                                           !     or mute h
!*! ajouter d'autres voyelles (� accents) ?
[ LanguageContraction text;
    if (text->0 == 'a' or 'e' or '�' or '�' or 'i' or 'o' or 'u' or 'h'
                    or 'A' or 'E' or 'I' or 'O' or 'U' or 'H') return 1;
    return 0;
];

Array LanguageArticles -->

 !   Contraction form 0:     Contraction form 1:
 !   Cdef   Def    Indef     Cdef   Def    Indef

     "Le "  "le "  "un "     "L'"   "l'"   "un "          ! 0: masc sing
     "La "  "la "  "une "    "L'"   "l'"   "une "         ! 1: fem sing
     "Les " "les " "des "    "Les " "les " "des ";        ! 2: plural

                   !             a           i
                   !             s     p     s     p
                   !             m f n m f n m f n m f n                 

Array LanguageGNAsToArticles --> 0 1 0 2 2 2 0 1 0 2 2 2;

[ LanguageDirection d;
    switch(d)
    {
        n_to: print "nord";
        s_to: print "sud";
        e_to: print "est";
        w_to: print "ouest";
        ne_to: print "nord-est";
        nw_to: print "nord-ouest";
        se_to: print "sud-est";
        sw_to: print "sud-ouest";
        u_to: print "haut";
        d_to: print "bas";
        in_to: print "dedans";
        out_to: print "dehors";
        default: return RunTimeError(9,d);
    }
];

[ LanguageNumber n f;
    if (n==0)    { print "z�ro"; rfalse; }
    if (n<0)     { print "moins "; n=-n; }
    if (n>=1000) { print (LanguageNumber) n/1000, " mille"; n=n%1000; f=1; }
    if (n>=100)  { 
        if (f==1) print ", ";
        print (LanguageNumber) n/100, " cent"; n=n%100; f=1; 
    }

    if (n==0) rfalse;
    switch(n)
    {
        1:  print "un";
        2:  print "deux";
        3:  print "trois";
        4:  print "quatre";
        5:  print "cinq";
        6:  print "six";
        7:  print "sept";
        8:  print "huit";
        9:  print "neuf";
        10: print "dix";
        11: print "onze";
        12: print "douze";
        13: print "treize";
        14: print "quatorze";
        15: print "quinze";
        16: print "seize";
        17: print "dix-sept";
        18: print "dix-huit";
        19: print "dix-neuf";
        20 to 99:
            switch(n/10)
            {
                2:  print "vingt";
                    if (n%10 == 1) {print " et un"; return; }
                3:  print "trente";
                    if (n%10 == 1) {print " et un"; return; }
                4:  print "quarante";
                    if (n%10 == 1) {print " et un"; return; }
                5:  print "cinquante";
                    if (n%10 == 1) {print " et un"; return; }
                6:  print "soixante";
                    if (n%10 == 1) {print " et un"; return; }
                7:  print "soixante";
                    if (n%10 == 1) {print " et onze"; return; } !*!
                    print "-"; LanguageNumber(10 + n%10); return;
                8:  if (n%10 == 0) {print "quatre vingts"; return; }
                    print "quatre-vingt";
                9:  print "quatre-vingt-"; LanguageNumber(10+ n%10); return;
            }
            if (n%10 ~= 0)
            {
                print "-"; LanguageNumber(n%10);
            }
    }
];

[ LanguageTimeOfDay hours mins;
    print hours/10, hours%10, "h", mins/10, mins%10;
];

[ LanguageVerb i;
    switch (i) {
      'i//','inv','inventaire':
               print "inventaire";
      'r//':   print "regarder";
      'x//':   print "examiner";
      'z//':   print "attendre";
      'v//':   print "regarder";
      'a//':   print "attendre";
      '!//':   print "dire";
      '?//':   print "demander";
      'q//':   print "quitter";
      'verrouiller': print "verrouiller";
      'deverrouiller': print "deverrouiller";
      default: rfalse;
    }
    rtrue;
];

! ----------------------------------------------------------------------------
!  LanguageVerbIsDebugging is called by SearchScope.  It should return true 
!  if word w is a debugging verb which needs all objects to be in scope.
! ----------------------------------------------------------------------------

#Ifdef DEBUG;
[ LanguageVerbIsDebugging w;
    if (w == 'purloin' or 'tree' or 'abstract'
                       or 'gonear' or 'scope' or 'showobj')
        rtrue;
    rfalse;
];
#Endif;

! ----------------------------------------------------------------------------
!  LanguageVerbLikesAdverb is called by PrintCommand when printing an UPTO_PE
!  error or an inference message.  Words which are intransitive verbs, i.e.,
!  which require a direction name as an adverb ('walk west'), not a noun
!  ('I only understood you as far as wanting to touch /the/ ground'), should
!  cause the routine to return true.
! ----------------------------------------------------------------------------
!*!
[ LanguageVerbLikesAdverb w;
    if (w == 'look' or 'go' or 'push' or 'walk')
        rtrue;
    rfalse;
];

! ----------------------------------------------------------------------------
!  LanguageVerbMayBeName is called by NounDomain when dealing with the 
!  player's reply to a "Which do you mean, the short stick or the long
!  stick?" prompt from the parser. If the reply is another verb (for example,
!  LOOK) then then previous ambiguous command is discarded /unless/
!  it is one of these words which could be both a verb /and/ an
!  adjective in a 'name' property.
! ----------------------------------------------------------------------------
!*!
[ LanguageVerbMayBeName w;
    if (w == 'long' or 'short' or 'normal'
                    or 'brief' or 'full' or 'verbose')
        rtrue;
    rfalse;
];

Constant NKEY__TX     = "S = suivant";
Constant PKEY__TX     = "P = pr�c�dent";
Constant QKEY1__TX    = "        Q = retour"; !huit espaces pour aligner � droite
Constant QKEY2__TX    = "Q = menu pr�c�dent";
Constant RKEY__TX     = "ENTREE = lire sujet";

Constant NKEY1__KY    = 'S';
Constant NKEY2__KY    = 's';
Constant PKEY1__KY    = 'P';
Constant PKEY2__KY    = 'p';
Constant QKEY1__KY    = 'Q';
Constant QKEY2__KY    = 'q';

Constant SCORE__TX    = "Score : ";
Constant MOVES__TX    = "Tours : ";
Constant TIME__TX     = "Heure : ";
Constant CANTGO__TX   = "Vous ne pouvez pas aller dans cette direction.";
Constant FORMER__TX   = "votre ancien vous";
Constant YOURSELF__TX = "vous-m�me";
Constant YOU__TX        = "Vous";
Constant DARKNESS__TX = "L'obscurit�";

Constant THOSET__TX   = "ces choses-l�";
Constant THAT__TX     = "cela";
Constant OR__TX       = " ou ";
Constant NOTHING__TX  = "rien";
Constant IS__TX       = "est ";   ! utilis�s par WriteListFrom
Constant ARE__TX      = "sont ";  ! 
Constant IS2__TX      = "";  ! dans/sur lequel " est"  => contenant/supportant
Constant ARE2__TX     = "";  ! dans/sur lequel " sont" => contenant/supportant
Constant AND__TX      = " et ";
Constant WHOM__TX     = "";  ! dans/sur "lequel " est  => contenant/supportant
Constant WHICH__TX    = "";  ! dans/sur "lequel " est  => contenant/supportant
Constant COMMA__TX      = ", ";


![ ThatorThose obj;   ! ex : vous n'allez pas manger �a (accusatif) (utile ?)
!  print "�a";
!];
[ ItorThem obj; ! ex : avant de pouvoir vous/le/la/les poser... (accusatif ?)
    if (obj == player) { print "vous"; return; }
    if (obj has pluralname)  { print "les"; return;}
    if (obj has female) { print "la"; return; }
    else { print "le"; return; }
];
[ IsorAre obj;
    if (obj has pluralname || obj == player) print "sont"; else print "est";
];
[ CThatorThose obj;   ! il/ils/elle/elles semble(nt) ouvert(e) (nominatif)
    ! if (obj == player) { print "Vous"; return; } !*! utile ?
    if (obj has pluralname) {
        if (obj has female) {print "Elles"; return; }
        else { print "Ils"; return; }
    }
    if (obj has female) { print "Elle"; return; }
    else { print "Il"; return; }
    ];
[ CTheyreorThats obj;
    if (obj == player) { print "Vous �tes"; return; }
    if (obj has pluralname) {
        if (obj has female) { print "Elles sont"; return; }
        else { print "Ils sont"; return; }
    }
    if (obj has female) { print "Elle est"; return; }
    else { print "Il est"; return; }
];

! Quelques fonctions additionnelles...
[ es obj; ! ex: ferm�(es), ouvert(es)
    if (obj has female) print "e";
    if (obj has pluralname) print "s";
    !*! attention : pris, prise, pris, prises
];
[ s obj; ! ex: vide(s)
    if (obj has pluralname) print "s";
];
[ DeDuDes obj; ! ex : descendre... sortir...
    if (obj == player) { print "de vous"; return; }
    if (obj has pluralname)  { print "des ", (name) obj; return;}
    if (obj has female or proper) { print "de ", (the) obj; return;} ! ex : de la voiture, de Paris
    !*! test ci-dessous � effectuer avec @output_stream (ZCode) et avec PrintAnyToArray (Glulx) ?
    ! if ((the)obj="l'...") {print "de ", (the) obj; return;} ! ex : de l'avion
    print "du ", (name) obj; return; ! ex : du train, du Nautilus (le Nautilus ne doit donc pas �tre consid�r� comme proper !*!)
];
! (Stormi) Cette fonction permet d'afficher correctement "� la" "� l'" "au" ou "aux"
! selon le contexte.
[ to_the obj;
    if (obj has pluralname) {
        print "aux ", (name) obj;
    }
    else if (obj has proper) {
        print "� ", (name) obj;
    }
    else {
        ! Les lignes qui suivent sont copi�es de la fonction PrefaceByArticle de parserm.h
        ! afin de conna�tre la valeur de LanguageContraction pour le nom affich� de l'objet
        ! Je suis le seul � trouver cela atrocement compliqu� ?
#ifdef TARGET_ZCODE;
        StorageForShortName-->0 = 160;
        @output_stream 3 StorageForShortName;
        print (PSN__) noun;
        @output_stream -3;
        if (obj has male && LanguageContraction(StorageForShortName + 2)==0) {
             print "au ", (name) obj;
        }
        else {
            print "� ", (the) obj;
        }
#ifnot; ! TARGET_GLULX;
		print "� quelqu'un : ", (name) obj;
#endif;
    }
];
[ nt obj; ! ex: semble(nt)
    if (obj has pluralname) print "nt";
    !*! attention :  para�t, paraissent (etc)
];
[ IsorAreNot obj;
    if (obj has pluralname || obj == player) print "ne sont pas";
                                        else print "n'est pas";
];

[ LanguageLM n x1;
    Answer, Ask:    "Pas de r�ponse.";
!    Ask:      see Answer
    Attack:         "La violence n'est pas une solution ici.";
    Blow:           "Vous ne pouvez pas utilement souffler dedans.";
    Burn:           "Cet acte dangereux ne m�nerait pas � grand-chose.";
    Buy:            "Il n'y a rien � vendre, ici.";
    Climb:          "Je ne pense pas que l'on puisse arriver � grand-chose de cette mani�re.";
    Close: switch (n) {
        1:  "Vous ne pouvez pas fermer cela.";
        2:  print (ctheyreorthats) x1, " d�j� ferm�";
            if (x1 has female) "e.";
            ".";
        3:  "Vous fermez ", (the) x1, ".";
    }
    CommandsOff: switch (n) {
        1:  "[Enregistrement des commandes d�sactiv�.]";
        #Ifdef TARGET_GLULX;
        2:  "[Enregistrement des commandes d�j� d�sactiv�.]";
        #Endif; ! TARGET_
    }
    CommandsOn: switch (n) {
        1:  "[Enregistrement des commandes activ�.]";
        #Ifdef TARGET_GLULX;
        2:  "[Les commandes sont actuellement en train d'�tre rejou�es.]";
        3:  "[Enregistrement des commandes d�j� activ�.]";
        4:  "[Echec d'enregistrement des commandes.]";
        #Endif; ! TARGET_
    }
    CommandsRead: switch (n) {
        1:  "[Rejouer les commandes.]";
        #Ifdef TARGET_GLULX;
        2:  "[Les commandes sont d�j� en train d'�tre rejou�es.]";
        3:  "[Rejouer les commandes a �chou�.  L'enregistrement des commandes est activ�.]";
        4:  "[Rejouer les commandes a �chou�.]";
        5:  "[Rejouer les commandes achev�.]";
        #Endif; ! TARGET_
    }
    Consult:        "Vous ne trouvez rien d'int�ressant dans ", (the) x1, ".";
    CrierSansPrecision : "Vous criez ce qui vous passe par la t�te.";
    Cut:            "Allons, ", (itorthem) x1, " couper ne m�nerait pas � grand-chose.";
    Dig:            "Creuser ne m�nerait � rien ici.";
    Disrobe: switch (n) {
        1:  "Vous ne ", (itorthem) x1, " portez pas.";
        2:  "Vous enlevez ", (the) x1, ".";
    }
    Drink:          "Ceci n'a rien de buvable.";
    Drop: switch (n) {
        1:  if (x1 has pluralname) print (The) x1, " sont ";
            else print (The) x1, " est ";
            "d�j� ici.";
        2:  "Vous n'avez pas �a.";
        3: "(vous prenez d'abord ", (the) x1, ")";
        4:  "D'accord."; ! ok
    }
    Eat: switch (n) {
        1:  print_ret (ctheyreorthats) x1,
            " non comestible",(s) x1,", selon toute �vidence.";
        2:  "Vous mangez ", (the) x1, ". Pas mauvais.";
    }
    EmptyT: switch (n) {
        1:  print_ret (The) x1, " ne peut rien contenir."; ! TODO risque de poser pb si pluriel ?
        2:  print_ret (The) x1, " ", (isorare) x1, " ferm�",(es) x1,".";
        3:  print_ret (The) x1, " ", (isorare) x1, " d�j� vide",(s) x1,".";
        4:  "Ceci ne viderait rien.";
    }
    Enter: switch (n) {
        1:  print "Mais vous �tes d�j� ";
            if (x1 has supporter) print "sur "; else print "dans ";
            print_ret (the) x1, ".";
        2:  print "Vous ne pouvez pas ";
            switch (verb_word) {
                'entrer':    "y entrer.";
                'asseoir':    "vous y asseoir.";
                'allonger':    "vous y allonger.";
                'coucher':    "vous y coucher.";
                'monter':    "y monter.";
                default:  "y aller."; ! plut�t que "y entrer." !*!
            }
        3:  "Vous ne pouvez entrer dans ", (the) x1, " ferm�",(es) x1,".";
        4:  print "Vous ne pouvez pas ";                  
            if (x1 has supporter) print "y monter";
                             else print "y entrer";
            " si ce n'est pas pos�."; 
                        ! sur pieds, non encastr� (freestanding)
        5:  print "Vous ";
            if (x1 has supporter) print "montez sur "; else print "entrez dans ";
            print_ret (the) x1, ".";
        6:  print "(";
            if (x1 has supporter) print "descendant "; else print "sortant ";
            print (DeDuDes) x1; ")";
        7:  if (x1 has supporter) "(montant sur ", (the) x1, ")^";
            if (x1 has container) "(entrant dans ", (the) x1, ")^";
            "(entrant dans ", (the) x1, ")^";
    }
    Examine: switch (n) {
        1:  "Vous ne pouvez rien voir.";
        2:  "Rien de particulier concernant ", (the) x1, ".";
        3:  print (The) x1, " ", (isorare) x1, " actuellement ";
            if (x1 has on) "allum�",(es) x1,"."; else "�teint",(es) x1,".";
    }
    Exit: switch (n) {
        1:  "Sortir d'o� ?!";
        2:  print "Vous ne pouvez pas sortir ";
            print_ret (dedudes) x1, " ferm�", (es) x1, ".";
        3:  print "Vous ";
            if (x1 has supporter) print "descendez "; else print "sortez ";
            print_ret (dedudes) x1, ".";
        4:  print "Mais vous n'�tes pas ";
            if (x1 has supporter) print "sur "; else print "dans ";
            print_ret (the) x1, ".";
    }
    Fill:           "Mais il n'y a pas d'eau � porter ici.";
    FullScore: switch(n) {   
        1:  if (deadflag) print "Le score �tait ";
            else          print "Le score est ";
            "compos� comme suit :^";
        2:  "trouver divers objets";
        3:  "visiter diff�rents endroits";
        4:  print "total (sur ", MAX_SCORE; ")";
    }
    GetOff:         "Mais vous n'�tes pas sur ", (the) x1, " en ce moment.";
    Give: switch (n) {
        1:  "Vous n'avez pas en main ", (the) x1, ".";
        2:  "Vous jonglez avec ", (the) x1,
            " pendant un moment, mais vous n'arrivez pas � grand-chose.";
        3:  print (The) x1;
            if (x1 has pluralname)
                print " n'ont pas l'air int�ress�";
            else print " n'a pas l'air int�ress�";
            ".";
    }
    Go: switch (n) {
        1:  print "Vous devez d'abord ";
            if (x1 has supporter) print "descendre "; else print "sortir ";
            print_ret (dedudes) x1, ".";
        2:  "Vous ne pouvez pas aller par l�.";
        3:  "Vous �tes incapable de gravir ", (the) x1, ".";
        4:  "Vous �tes incapable de descendre par ", (the) x1, ".";
        5:  "Vous ne pouvez pas, puisque ", (the) x1, " ", (isorare) x1,
            " sur votre chemin.";
        6:  print "Vous ne pouvez pas, puisque ", (the) x1;
            if (x1 has pluralname) " ne m�nent nulle part.";
            " ne m�ne nulle part.";
    }
    Insert: switch (n) {
        1:  "Vous devez avoir en main ", (the) x1,
            " avant de pouvoir ", (itorthem) x1,
            " mettre dans autre chose.";
        2:  if (x1 has pluralname) 
            print_ret (The) x1, " ne peuvent pas contenir d'objet.";
            else  
            print_ret (The) x1, " ne peut pas contenir d'objet.";
        3:  print_ret (The) x1, " ", (isorare) x1, " ferm�",(es) x1,".";
        4:  "Vous avez besoin de ", (itorthem) x1, " prendre d'abord.";
        5:  "Vous ne pouvez pas mettre un objet � l'int�rieur de lui-m�me.";
        6:  "(", (itorthem) x1, " prenant d'abord)^";
        7:  "Il n'y a plus de place dans ", (the) x1, ".";
        8:  "Fait.";
        9:  "Vous mettez ", (the) x1, " dans ", (the) second, ".";
    }
    Inv: switch (n) {
        1:  "Vous n'avez rien.";
        2:  print "Vous avez";
        3:  print ":^";
        4:  print ".^";
    }
    Jump:           "Vous sautez sur place, vainement.";
    JumpOver, Tie:  "Vous n'arriverez � rien comme �a.";
    Kiss:           "Concentrez-vous sur le jeu.";
    Listen:         "Vous n'entendez rien de particulier.";
    ListMiscellany: switch (n) {
         1: print " (allum�",(es) x1,")";
         2: print " (qui ", (isorare) x1, " ferm�",(es) x1,")";
         3: print " (ferm�",(es) x1," et allum�",(es) x1,")";
         4: print " (qui ", (isorare) x1, " vide",(s) x1,")";
         5: print " (vide",(s) x1," et allum�",(es) x1,")";
         6: print " (qui ", (isorare) x1, " ferm�",(es) x1," et vide",(s) x1,")";
         7: print " (ferm�",(es) x1,", vide",(s) x1," et allum�",(es) x1,")";
         8: print " (allum�",(es) x1," et port�",(es) x1;
         9: print " (allum�",(es) x1;
        10: print " (port�",(es) x1;
        11: print " (qui ", (isorare) x1, " ";
        12: print "ouvert",(es) x1;
        13: print "ouvert",(es) x1," mais vide",(s) x1;
        14: print "ferm�",(es) x1;
        15: print "ferm�",(es) x1," et verrouill�",(es) x1;
        16: print " et vide",(s) x1;
        17: print " (qui ", (isorare) x1, " vide",(s) x1,")";
        18: print " contenant ";
        19: print " (supportant "; ! " (sur ";
        20: print " supportant ";  ! " sur "; 
        21: print " (contenant ";  ! " (dans ";
        22: print " contenant ";   ! " dans ";
    }
    LMode1:         " est pass� en mode description normale ; seuls les lieux 
                      visit�s pour la premi�re fois sont d�crits en d�tail.";
    LMode2:         " est pass� en mode description longue ; tous les lieux,
                      m�me d�j� visit�s, sont d�crits en d�tail.";
    LMode3:         " est pass� en mode description courte ; tous les lieux,
                      m�me non visit�s, sont d�crits bri�vement.";
    Lock: switch (n) {
        1:  "Vous ne pouvez pas verrouiller cela.";
        2:  print_ret (ctheyreorthats) x1, " verrouill� en ce moment.";
        3:  "Vous devez fermer ", (the) x1, " d'abord.";
        4:  "Cela ne rentre pas dans la serrure.";
        5:  "Vous verrouillez ", (the) x1, ".";
    }
    Look: switch (n) {
        1:  print " (sur ", (the) x1, ")";
        2:  print " (dans ", (the) x1, ")";
        3:  print " (comme ", (object) x1, ")";
        4:  print "^Sur ", (the) x1, ", ";
            WriteListFrom(child(x1),
                ENGLISH_BIT + RECURSE_BIT + PARTINV_BIT
                + TERSE_BIT + CONCEAL_BIT);
            ".";
        5,6:
            if (x1 ~= location) {
                if (x1 has supporter) print "^Sur "; else print "^Dans ";
                print (the) x1, " vous";
            }
            else print "^Vous";
            print " pouvez voir ";
            if (n == 5) print "aussi ";
            WriteListFrom(child(x1),
              ENGLISH_BIT+RECURSE_BIT+PARTINV_BIT+TERSE_BIT+CONCEAL_BIT+WORKFLAG_BIT);
            ".";
        7:  "Vous ne voyez rien de particulier dans cette direction.";
    }
    LookUnder: switch (n) {
        1:  "Mais il fait noir !";
        2:  "Vous ne trouvez rien d'int�ressant.";
    }
    Mild:           "Assez.";
    Miscellany: switch (n) {
        1:  "(affichage des seize premiers)^";
        2:  "Rien � faire !";
        3:  print " Vous �tes mort ";
        4:  print " Vous avez gagn� ";
        5:  print "^Voulez-vous RECOMMENCER, CHARGER une partie sauvegard�e";
            #IFDEF DEATH_MENTION_UNDO;
            print ", ANNULER votre derni�re action";
            #ENDIF;
            if (TASKS_PROVIDED==0)
                print ", obtenir le score d�taill� pour cette partie (FULLSCORE)";
            if (deadflag==2 && AMUSING_PROVIDED==0)
                print ", lire quelques suggestions amusantes (AMUSING)";
            " ou quitter (QUITTER) ?"; !*!
        6:  "[Votre interpr�teur ne permet pas d' ~annuler~. D�sol� !]";
        #Ifdef TARGET_ZCODE;
        7:  "~Annuler~ a �chou�.  [Tous les interpr�teurs ne le permettent pas.]";
        #Ifnot; ! TARGET_GLULX
        7:  "[Vous ne pouvez pas ~Annuler~ plus loin.]";
        #Endif; ! TARGET_
        8:  "Faites un choix parmi les propositions ci-dessus.";
        9:  "^Vous �tes � pr�sent plong� dans l'obscurit� !";
        10: "Je vous demande pardon ?";
        11: "[Vous ne pouvez pas annuler alors que rien n'a encore �t� fait !]";
        12: "[Impossible d'annuler deux fois de suite. D�sol� !]";
        13: "[Action pr�c�dente annul�e.]";
        14: "D�sol�, impossible de corriger.";
        15: "N'y pensez m�me pas."; !*! "Think nothing of it."; !*!
        16: "~Oops~ ne peut corriger qu'un seul mot.";
        17: "Il fait noir, et vous ne pouvez rien voir.";
        18: print "vous-m�me";
        19: "Aussi beau que d'habitude.";
        20: "Pour r�p�ter une commande comme ~grenouille, saute~, d�tes seulement
            ~encore~, et pas ~grenouille, encore~.";
        21: "Vous pouvez difficilement r�p�ter cela.";
        22: "Vous ne pouvez pas commencer par une virgule.";
        23: "Vous semblez vouloir parler � quelqu'un, mais je ne vois pas � qui.";
        24: "Vous ne pouvez pas discuter avec ", (the) x1, ".";
            ! "parler �" serait mieux mais d�licat (ex: � l'oiseau)
        25: "Pour parler � quelqu'un, essayez ~quelqu'un, bonjour~ ou quelque chose dans le genre.";
        26: "(vous prenez d'abord ", (the) not_holding, ")";
        27: "Je ne comprends pas cette phrase.";
        28: print "Merci de reformuler. Je n'ai compris que : ";
        29: "Je n'ai pas compris ce nombre.";
        30: "Vous ne voyez rien de tel, � moins que cela ne soit sans grande importance.";
        31: "Vous semblez en avoir dit trop peu !";
        32: "Vous ne l'avez pas dans vos mains !";
        33: "Vous ne pouvez pas employer le mot ~tout~ (ou une liste) avec ce verbe.";
        34: "Vous ne pouvez utiliser le mot ~tout~ (ou une liste) qu'une fois par ligne.";
        35: "Je ne suis pas s�r de ce � quoi ~", (address) pronoun_word,
            "~ se r�f�re.";
        36: "Vous avez exclu quelque chose qui n'�tait de toute fa�on pas compris dans la liste !";
        37: "Vous ne pouvez agir ainsi qu'avec une chose anim�e.";
        38: "Je ne connais pas ce verbe.";
        39: "Ce n'est pas une chose � laquelle vous aurez � vous r�f�rer au cours du jeu.";
        40: "Vous ne pouvez voir ~", (address) pronoun_word,
            "~ (", (the) pronoun_obj, ") pour l'instant.";
        41: "Impossible de comprendre la fin de la phrase.";
        42: if (x1==0) print "Aucun de disponible.";
            else print "Il en reste seulement ", (number) x1, ".";
        43: "Rien � faire !";
        44: "Rien n'est disponible !";
        45: print "Pr�cisez : "; !*!
        46: print "Pr�cisez : "; !*!
        47: "D�sol�, vous pouvez seulement avoir un objet ici. Lequel voulez-vous exactement ?";
        48: print "Pouvez-vous pr�ciser qui est concern� par cette action ?^"; !*!
        49: print "Pouvez-vous pr�ciser l'objet concern� par cette action, ou � utiliser ?^"; !*!
        50: print "Votre score vient ";
            if (x1 > 0) print "d'augmenter"; else { x1 = -x1; print "de diminuer"; }
            print " de ", (number) x1, " point";
            if (x1 > 1) print "s";
        51: "(Comme quelque chose de dramatique vient de se produire,
            votre liste de commandes a �t� raccourcie.)";
        52: "^Tapez un nombre entre 1 et ", x1,
            ", 0 pour r�afficher ou appuyez sur ENTREE.^";
        53: "^[Appuyez sur ESPACE.]"; !*! SVP
        54: "[Commentaire enregistr�.]";
        55: "[Commentaire NON enregistr�.]";
        56: print ".^";
        57: print "?^";
    }
    Yes, No:        "Mmmh ?";
    NotifyOff:      "Notification du score d�sactiv�e.";
    NotifyOn:       "Notification du score activ�e.";
    Objects: switch(n) {
        1:  "Objets ayant �t� port�s :^";
        2:  "Aucun.";
        3:  print "   (sur le corps)";
        4:  print "   (dans l'inventaire)";
        5:  print "   (abandonn�",(es) x1,")";
        6:  print "   (", (name) x1, ")";
        7:  print "   (dans ", (the) x1, ")";
        8:  print "   (dans ", (the) x1, ")";
        9:  print "   (sur ", (the) x1, ")";
        10: print "   (perdu",(es) x1,")";
    }
    Open: switch (n) {
        1:  print_ret "Vous ne pouvez pas ouvrir ", (the) x1,".";
        2:  print_ret (cthatorthose) x1," semble",(nt) x1,
            " �tre ferm�",(es) x1," � cl�.";
        3:  print (ctheyreorthats) x1, " d�j� ouvert";
            if (x1 has female) "e.";
            ".";
        4:  print "Vous ouvrez ", (the) x1, ", r�v�lant ";
            if (WriteListFrom(child(x1),
                ENGLISH_BIT + TERSE_BIT + CONCEAL_BIT)==0) "rien du tout.";
                ".";
        5:  "Vous ouvrez ", (the) x1, ".";
    }
    Order:  print (The) x1;
            if (x1 has pluralname) print " ont";
            else print " a";
            " mieux � faire.";
    ParlerIncorrect : "Soyez plus pr�cis dans votre communication, ou reformulez.";
    ParlerSansPrecision :   if (x1==player) "Vous ne savez pas quoi vous dire que vous ne sachiez d�j�.";
                            else "Pas de r�ponse.";
    Places: switch (n) {
        1:  print "Vous avez visit� : ";
        2:  print ".^";
    }
    Pray:   "Rien de concret ne r�sulte de votre pri�re.";
    Prompt:   print "^>";
    Pronouns: switch (n) {
        1:  print "En ce moment, ";
        2:  print "signifie ";
        3:  print "n'est pas d�fini";
        4:  "aucun pronom n'est connu du jeu.";
        5:  ".";
    }
    Pull,Push,Turn: switch (n) {
        1:  "C'est fix� sur place.";
        2:  "Vous en �tes incapable.";
        3:  "Rien d'�vident ne se produit.";
        4:  "Cela serait moins que courtois.";
    }
! Push: see Pull
    PushDir: switch (n) {
        1:  "Vous ne pouvez donc rien imaginer de mieux ?";
        2:  "Ce n'est pas une direction.";
        3:  "Vous ne pouvez pas dans cette direction.";
    }
    PutOn: switch (n) {
        1:  "Vous devez avoir en main ", (the) x1,
            " avant de pouvoir ", (itorthem) x1,
            " mettre sur quelque chose d'autre.";
        2:  "Vous ne pouvez pas poser un objet sur lui-m�me.";
        3:  "Poser des objets sur ", (the) x1, " ne m�nerait � rien.";
        4:  "Vous manquez de dext�rit�.";
        5:  "(", (itorthem) x1, " prenant d'abord)^";
        6:  "Il n'y a plus assez de place sur ", (the) x1, ".";
        7:  "C'est fait.";
        8:  "Vous mettez ", (the) x1, " sur ", (the) second, ".";
    }
    Quit: switch (n) {
        1:  print "R�pondez par oui ou par non, je vous prie.";
        2:  print "�tes-vous s�r de vouloir quitter ? (O/N) ";
    }
    Remove: switch (n) {
        1:  if (x1 has pluralname)
                print "Ils sont malheureusement ferm�s."; !*! elle(s)
            else print "Il est malheureusement ferm�."; !*!
        2:  if (x1 has pluralname)
                print "Mais ils ne sont pas";
            else print "Mais ce n'est pas";
            " ici maintenant.";
        3:  "D'accord."; ! Ok
    }
    Restart: switch (n) {
        1: print "�tes-vous s�r de vouloir recommencer ? (O/N) ";
        2: "Rat�.";
    }
    Restore: switch (n) {
        1: "�chec du chargement.";
        2: "^--- La partie a bien �t� restaur�e ---^"; ! ok.
    }
    Rub: if (x1 has animate) "Tenez donc vos mains tranquilles.";
         else "Vous n'arriverez � rien comme �a.";
    Save: switch (n) {
        1: "La sauvegarde a �chou�.";
        2: "^--- La partie a bien �t� sauvegard�e ---^"; ! ok.
    }
    Score: switch (n) {
        1:  if (deadflag) print "Dans cette partie vous avez obtenu "; else print "Vous avez jusqu'� pr�sent obtenu ";
            print score, " sur un score possible de ", MAX_SCORE, ", en ", turns, " tour";
            if (turns ~= 1) print "s";
            return;
        2:  "Il n'y a pas de score dans cette histoire.";
    }
    ScriptOff: switch (n) {
        1:  "Aucune transcription en cours.";
        2:  "^Fin de transcription.";
        3:  "Impossible de terminer la transcription.";
    }
    ScriptOn: switch (n) {
        1:  "Transcription d�j� en cours.";
        2:  "D�but d'une transcription de...";
        3:  "Impossible de commencer la transcription.";
    }
    Search: switch (n) {
        1:  "Mais il fait noir !";
        2:  "Il n'y a rien sur ", (the) x1, ".";
        3:  print "Sur ", (the) x1, ", vous voyez "; 
            WriteListFrom(child(x1),
                TERSE_BIT + ENGLISH_BIT + CONCEAL_BIT);
            ".";
        4:  if (x1 has animate) "Tenez donc vos mains tranquilles.";
            else "Vous ne trouvez rien d'int�ressant.";
        5:  "Vous ne pouvez pas voir � l'int�rieur, puisque ", (the) x1, " ",
            (isorare) x1, " ferm�",(es) x1,".";
        6:  print_ret (The) x1, " ", (isorare) x1, " vide",(s) x1,".";
        7:  print (The) x1;
            if (x1 has pluralname) print " contiennent ";
            else print " contient ";
            WriteListFrom(child(x1),
                TERSE_BIT + ENGLISH_BIT + CONCEAL_BIT);
            ".";
    }
    Set:            "Non, vous ne pouvez pas ", (itorthem) x1, " r�gler.";
    SetTo:          "Non, vous ne pouvez pas ", (itorthem) x1, " r�gler sur rien.";
    Show: switch (n) {
        1:  "Vous n'avez pas ", (the) x1, ".";
        2:  print_ret (The) x1, " ", (isorare) x1, " peu impressionn�",(es) x1,".";
    }
    Sing:           "Vous chantez un morceau de la premi�re chanson qui vous vient � l'esprit.";
    Sleep:          "Vous n'avez pas particuli�rement sommeil.";
    Smell:          "Vous ne sentez rien de particulier.";
    Sorry:          "Pas grave.";
    Squeeze: switch (n) {
        1:  "Surveillez vos mains.";
        2:  "Vous n'arrivez � rien ainsi.";
    }
    Strong:         "Les vrais aventuriers n'emploient pas un tel langage.";
    Swim:           "Il n'y a pas assez d'eau pour nager dedans.";  ! swim desactive par defaut dans I7
    Swing:          "Il n'y a rien de sens� pour se balancer ici.";
    SwitchOff: switch (n) {
        1:  "Vous ne pouvez pas allumer ou �teindre cela.";
        2:  print_ret (ctheyreorthats) x1,
            " d�j� �teint",(es) x1,".";
        3:  "Vous �teignez ", (the) x1, ".";
    }
    SwitchOn: switch (n) {
        1:  "Vous ne pouvez pas allumer cela.";
        2:  print_ret (ctheyreorthats) x1,
            " d�j� allum�",(es) x1,".";
        3:  "Vous allumez ", (the) x1, ".";
    }
    Take:    switch(n) {
        1:  "D'accord."; ! ok.
        2:  "Vous vous poss�dez vous-m�me. Voil� une probl�matique relevant de la physique quantique.";
        3:  "Cela ne semble pas �tre une bonne id�e.";
        4:  print "Vous devez d'abord ";
            if (x1 has supporter) print "descendre "; else print "sortir ";
            print_ret (dedudes) x1, ".";
        5:  "Vous l'avez d�j�.";
        6:  "Cela semble appartenir ", (to_the) x1, ".";
        7:  if (noun has pluralname) print "Cela semble ";
            else print "Cela semble ";
            "faire partie ", (dedudes) x1, ".";
        8:  print_ret (Cthatorthose) x1, " ", (isorarenot) x1,
            " disponible", (s) x1, ".";
        9:  print_ret (The) x1, " ", (isorarenot) x1, " ouvert",(es) x1,".";
        10: "Trop difficile � transporter.";
        11: "C'est fix� sur place.";
        12: "Vous transportez d�j� trop d'objets.";
        13: "(vous mettez ", (the) x1, " dans ", (the) SACK_OBJECT,
            " pour faire de la place)";
    }
    Taste: if (x1 has animate) "Cela ne serait pas tr�s convenable.";
           else "Vous ne remarquez rien de particulier.";
    Tell: switch (n) {
        1:  "Vous discutez avec vous-m�me pendant un bon moment...";
        2:  "Pas de r�action.";
    }
    Think:          "Quelle bonne id�e.";
    ThrowAt: switch (n) {
        1:  "Futile.";
        2:  "Vous h�sitez au moment crucial.";
    }
!    Tie:  see JumpOver.
    Touch: switch (n) {
        1:  "Tenez vos mains tranquilles !";
        2:  "Vous ne sentez rien de particulier.";
        3:  "Si vous pensez que �a peut aider.";
    }
!    Turn: see Pull.
    Unlock:  switch (n) {
        1:  "Vous ne pouvez pas d�verrouiller cela.";
        2:  print_ret (ctheyreorthats) x1,
            " d�j� d�verrouill�", (es) x1, ".";
        3:  "Cela ne rentre pas dans la serrure.";
        4:  "Vous d�verrouillez ", (the) x1, ".";
    }
    VagueDo: "Soyez plus pr�cis."; 
    VagueGo: "Vous devez donner la direction dans laquelle aller.";
    VagueDig: "Vous devez indiquer ce que vous souhaitez creuser, et si n�cessaire, avec quoi vous voulez le faire.";
    VagueSearch: "Utilisez plut�t 'fouiller'.";
    VagueUse: "Veuillez indiquer un verbe plus pr�cis.";
    Verify: switch (n) {
        1: "Le fichier semble intact.";
        2: "Le fichier est certainement corrompu !";
    }
    Wait:           "Le temps passe...";
    Wake:           "Il ne s'agit pas d'un r�ve."; !plus neutre que la formule pr�c�dente
    WakeOther:      "Cela ne semble pas n�cessaire.";
    Wave: switch (n) {
        1: "Mais vous n'avez pas cela !";
        2: "Vous avez l'air ridicule en agitant ", (the) x1, ".";
    }
    WaveHands:
        if (x1 == 0 || x1 == player) "Vous agitez vos mains devant vous.";
        else "Vous saluez ", (the) x1, ".";
    Wear: switch (n) {
        1: "Vous ne pouvez pas porter cela !";
        2: "Vous n'avez pas cela !";
        3: "Vous ", (itorthem) x1, " portez d�j� !";
        4: "Vous mettez ", (the) x1, ".";
    }
!    Yes:  see No.
];

! ==============================================================================

Constant LIBRARY_FRENCH;       ! for dependency checking.

! ==============================================================================
