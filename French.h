! ==============================================================================
!   FRENCH:  Language Definition File
!
!   Supplied for use with Inform 6 -- Release 6/11 -- Serial number 040227
!   Version adapt�e pour Inform 7
!   Copyright Graham Nelson 1993-2004 but freely usable (see manuals)
!
!   Traduit en fran�ais par Jean-Luc Pontico 2001-2004.
!   Adaptation initiale � Glulx r�alis�e avec l'aide d'Eric Forgeot.
!   Diverses modifications et am�liorations apport�es par Samuel Verschelde (Stormi)
!   avec l'aide et les r�flexions de la communaut� des joueurs et auteurs
!   francophones de fictions interactives.
!   Fork par Hugo Labrande (2014), apportant diverses modifications et am�liorations.
!
!   Certaines fonctions sont tir�es de la traduction en espagnol de Jose Luis Diaz.
!
!
!   This file is automatically Included in your game file by "parserm".
!   Strictly, "parserm" includes the file named in the "language__" variable,
!   whose contents can be defined by+language_name=XXX compiler setting (with a
!   default of "english").
!
! ==============================================================================




!======================================
! Quand il y a les pr�positions 'a'/'au'/'aux' et 'de'/'du'/'des'/'d^', et qu'il faut
!    compl�ter le motif, le parser prend toujours la premi�re pr�position pour l'affichage
!    ce qui donne "se servir (de le passeport)"

Replace PrintCommand;

[ PrintCommand from i k spacing_flag variante_flag prep;
    if (from == 0) {
        i = verb_word;
        if (LanguageVerb(i) == 0)
            if (PrintVerb(i) == 0) print (address) i;
        from++; spacing_flag = true;
    }

	variante_flag = 0;
    for (k=from : k<pcount : k++) {
        i = pattern-->k;
        if (i == PATTERN_NULL) continue;
        if (spacing_flag && variante_flag == 0) print (char) ' ';
        if (i ==0 ) { print (string) THOSET__TX; jump TokenPrinted; }
        if (i == 1) { print (string) THAT__TX;   jump TokenPrinted; }
        if (i >= REPARSE_CODE) {
			prep = No__Dword(i-REPARSE_CODE);
            if (prep == 'de' || prep == 'a//') {
				if (prep == 'de') { variante_flag = 1;} else { variante_flag = 2;}
				! On skippe, on affichera tout �a au tour suivant
			}
			else { print (address) prep; }
		}
        else {
            if (i in compass && LanguageVerbLikesAdverb(verb_word))
                LanguageDirection (i.door_dir); ! the direction name as adverb
            else
                if (variante_flag > 0) {
					if (variante_flag == 1) { print (DeDuDes) i;}
					else { print (to_the) i; }
					variante_flag = 0;
				}
				else { print (the) i;}
		}
      .TokenPrinted;
        spacing_flag = true;
    }
];


! Version 2.3 du 05/09/2008
Constant LibReleaseFR      "2.4devHL";
Message		"[Compil� avec le fork de Hugo Labrande de la version 2.4dev de la biblioth�que francophone.]";
! note : "message" ne permet pas d'inclure une constante, cela doit �tre d'un seul bloc
! sinon cela ne compile pas. C'est dommage cela aurait �t� pratique...

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
Constant BUT1__WD     = 'mais pas'; ! FIXME : ne fonctionne pas
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
    'seize' 16 'dix-sept' 17 'dix-huit' 18 'dix-neuf' 19 'vingt' 20
    'vingt et un' 21 'vingt-deux' 22 'vingt-trois' 23 'vingt-quatre' 24
   'vingt-cinq' 25 'vingt-six' 26 'vingt-sept' 27 'vingt-huit' 28
   'vingt-neuf' 29 'trente' 30
;

! ------------------------------------------------------------------------------
!   Part III.   Translation
! ------------------------------------------------------------------------------


! Routines utiles pour reconna�tre les versions accentu�es d'une lettre
[ IsAnA c;
    ! a������� + majuscules
    #Ifdef TARGET_ZCODE;
    if (c == 'a' or 'A' or 155 or 158 or 169 or 175 or 181 or 186 or 191 or 196 or 201 or 202 or 205 or 208 or '@ae' or 212) return true;
    #Ifnot; ! TARGET_GLULX    - donc il faut les valeurs Unicode !
    if ((c == 'a' or 'A') || (c > 191 && c < 199) || (c > 223 && c < 231)) return true;
    #Endif; ! TARGET_
    return false;
];
[ IsAnE c;
    ! e���� + majuscules
    #Ifdef TARGET_ZCODE;
    if (c == 'e' or 'E' or 164 or 167 or 170 or 176 or 182 or 187 or 192 or 197 ) return true;
    #Ifnot; ! TARGET_GLULX    - donc il faut les valeurs Unicode !
    if ((c == 'e' or 'E') || (c > 199 && c < 204) || (c > 231 && c < 236)) return true;
    #Endif; ! TARGET_
    return false;
];
[ IsAnI c;
    ! i���� + majuscules
    #Ifdef TARGET_ZCODE;
    if (c == 'i' or 'I' or 165 or 168 or 171 or 177 or 183 or 188 or 193 or 198 ) return true;
    #Ifnot; ! TARGET_GLULX    - donc il faut les valeurs Unicode !
    if ((c == 'i' or 'I') || (c > 203 && c < 208) || (c > 235 && c < 240)) return true;
    #Endif; ! TARGET_
    return false;
];
[ IsAnO c;
    ! o����� oe + majuscules
    #Ifdef TARGET_ZCODE;
    if (c == 'o' or 'O' or 156 or 159 or 172 or 178 or 184 or 189 or 194 or 199 or 203 or 204 or 207 or 210 or '@oe' or 221 ) return true;
    #Ifnot; ! TARGET_GLULX    - donc il faut les valeurs Unicode !
    if ((c == 'o' or 'O') || (c > 209 && c < 215) || (c == 216 or 248 or 338 or 339) || (c > 241 && c < 247)) return true;
    #Endif; ! TARGET_
    return false;
];
[ IsAnU c;
    ! u���� + majuscules
    #Ifdef TARGET_ZCODE;
    if (c == 'u' or 'U' or 157 or 160 or 173 or 179 or 185 or 190 or 195 or 200 ) return true;
    #Ifnot; ! TARGET_GLULX    - donc il faut les valeurs Unicode !
    if ((c == 'u' or 'U') || (c > 216 && c < 221) || (c > 248 && c < 253)) return true;
    #Endif; ! TARGET_
    return false;
];



! La fonction enleve_accents enl�ve les accents de l'input ; de cette mani�re,
! le joueur peut utiliser les accents ou non. Pour cela le jeu doit d�finir les
! mots sans accent, par exemple :
!   object set_of_keys "trousseau de cl�s"
!   with name 'trousseau' 'cles';
! Si le joueur demande : "examiner cles", le mot est compris directement.
! S'il demande : "examiner cl�s", les accents sont enlev�s et on retombe sur le
! cas pr�c�dent.

! On peut modifier ce comportement en modifiant la variable "gardeaccents" :
!   1 = l'accent est enlev� uniquement si le mot n'est pas dans le dictionnaire
!       (attention: "cl�s" dans un name et "cles" dans 10 autres fera un bug sur les 10 autres)
!       Commande de d�boguage : accents on
!   2 = les accents ne sont jamais enlev�s
!       (pas compatible avec la biblioth�que, puisque les verbes n'ont pas d'accents)
!       Commande de d�boguage : accents strict

global gardeaccents=0;


[ convertir_lettre i ;
    if (IsAnA(buffer->i)) buffer->i='a';
    if (IsAnE(buffer->i)) buffer->i='e';
    if (IsAnI(buffer->i)) buffer->i='i';
    if (IsAnO(buffer->i)) buffer->i='o';
    if (IsAnU(buffer->i)) buffer->i='u';
	switch(buffer->i) {
		! d'apr�s mes tests, la conversion en minuscules se fait avant que cette fonction soit appel�e
		    '�': buffer->i='y';
		    '�': buffer->i='y';
		    '�': buffer->i='n';
            '�': buffer->i='c';
		}
];

[ enleve_accents x i word at len;

    #Ifdef DEBUG; affiche_buffer(buffer, "  [ enleve_accents :^  - Buffer re�u : "); #Endif;

    if (gardeaccents ~= 2) {

		for (x=0:x<NbMots():x++) ! pour chaque mot
		{
			word=Mot(x);
			at=PositionMot(x);
			len=LongueurMot(x);
			if ( gardeaccents == 0 || (gardeaccents == 1 && word==0) )
			{
	#Ifdef DEBUG;
				if (parser_trace>=7 && gardeaccents == 1)
				{
					print "    NON COMPRIS : |";
					for (i=at:i<at+len:i++) print (char) buffer->i;
					print "|^";
				}
	#Endif;
				for (i=at:i<at+len:i++)
				{	convertir_lettre(i);
				}


				Tokenise__(buffer,parse);
			}
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

    ! On enl�ve les accents de la commande
    !   le seul side-effect de le faire si t�t, c'est "l� sortir de" est compris comme "sortir-la de"
    !   on peut penser qu'un joueur qui tape "l� sortir de" pour "sortir de l�" ne m�rite pas qu'on le comprenne
    !                  qu'un joueur qui tape "l� sortir de la bo�te" m�rite qu'on le corrige en "la sortir de la bo�te" et qu'on le comprenne
    !   bref, c'est aussi une am�lioration
    enleve_accents();

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
             i = -1; continue; ! on reprend la passe au d�but de la phrase
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
             i = -1; continue; ! on reprend la passe au d�but de la phrase
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
!             i = -1; continue; ! on reprend la passe au d�but de la phrase
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
             i = -1; continue; ! on reprend la passe au d�but de la phrase
         }
         ! "sud-est" ou "sud est" devient "sudest"
         if ( (word=='sud-est'or'sud-ouest') || ((word=='sud')&&(wordsuiv=='est'or'ouest')) )
         {
             buffer->at     = ' '; ! d�cale
             buffer->(at+1) = 's';
             buffer->(at+2) = 'u';
             buffer->(at+3) = 'd';
             Tokenise__(buffer,parse);
             i = -1; continue; ! on reprend la passe au d�but de la phrase
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
[ LanguageContraction text;
    if (IsAnA(text->0) || IsAnE(text->0) || IsAnI(text->0) || IsAnO(text->0) || IsAnU(text->0) || text->0 == 'h' or 'H') return 1;
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

[ LanguageNumber n s f;
    ! L'argument "s" sert � sp�cifier si on n'est pas en train de construire la fin du nombre(c-�-d les 3 derniers chiffres). Si s == 1, alors on est � l'int�rieur du nombre et on ne peut pas ajouter un "s" � "cent" et � "quatre-vingt".
    if (n == 0)    { print "z�ro"; rfalse; }
    if (n < 0)     { print "moins "; n = -n; }
    #Iftrue (WORDSIZE == 4);
    if (n >= 1000000000)
    {
        LanguageNumber(n/1000000000, 1); print " ";
        print "milliard";
        if (n/1000000000 > 1) { print "s"; }
        f = 1;
        n = n%1000000000;
    }
    if (n >= 1000000)
    {
        if (f == 1) { print " "; }
        LanguageNumber(n/1000000, 1); print " ";
        print "million";
        if (n/1000000 > 1) { print "s"; }
        f = 1;
        n = n%1000000;
    }
    #Endif;
    if (n >= 1000)
    {
        if (f == 1) { print " "; }
        if (n/1000 ~= 1) { LanguageNumber(n/1000, 1); print " "; }
        print "mille";
        f = 1;
        n = n%1000;
    }
    if (n >= 100)
    {
        if (f == 1) { print " "; }
        if (n/100 ~= 1) { LanguageNumber(n/100); print " "; }
        print "cent";
        if (n%100 == 0 && n/100 > 1 && s == 0) {print "s"; }
        f = 1;
        n = n%100;
    }
    if (n >= 20)
    {
        if (f == 1) { print " "; }
        switch(n/10)
        {
        2: print "vingt";
        3: print "trente";
        4: print "quarante";
        5: print "cinquante";
        6: print "soixante";
        7: print "soixante";
             if (n == 71) { print " et onze"; return; }
        8: print "quatre-vingt"; if (n == 80 && s == 0) { print "s"; } if (n == 81) { print "-un"; return; }
        9: print "quatre-vingt";
        }
        if (n%10 == 1) { print " et "; }
        if (n%10 > 1) { print "-"; }
        n = n%10;
        f=0;
    }
    if (f == 1) { print " "; }
    ! Attention, il faut skipper le "une" dans la table !
    ! ("une" est l� � cause de NumberWord, qui doit la reconna�tre comme 1 ; par contre on aurait pu consid�rer la bouger � la fin de la table, mais bon)
    if (n == 1) { print "un"; } else { print (address) LanguageNumbers-->(2*n+1); }
    return;
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
Constant RKEY__TX     = "ENTR�E = lire sujet";

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
Constant YOU__TX      = "Vous";
Constant DARKNESS__TX = "L'obscurit�";

Constant THOSET__TX   = "ces choses-l�";
Constant THAT__TX     = "cela";
Constant OR__TX       = " ou ";
Constant NOTHING__TX  = "rien";
! Potentiellement utilis�s par WriteListFrom (bit ISORARE_BIT), mais pas dans la bibli fran�aise
Constant IS__TX       = "il y a";  ! Constant IS__TX       = "est ";   ! ancienne version
Constant ARE__TX      = "il y a";  ! Constant ARE__TX      = "sont ";  ! ancienne version
! Ne pas changer ceux-l�, ils sont utilis�s dans WriteAfterEntry, qui liste l'inventaire notamment
!      (et sont d�j� bien faits, cf ListMiscellany plus bas)
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
    if (obj has pluralname) print "sont";
    else {
         if (obj == player) print "�tes";
         else print "est";
    }
];
[ IsorAreNot obj;
    if (obj has pluralname) print "ne sont pas";
    else {
         if (obj == player) print "n'�tes pas";
         else print "n'est pas";
    }
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

[ LanguageLM n x1;
    Answer, Ask:    "Pas de r�ponse.";
!    Ask:      see Answer
    Attack:         "La violence n'est pas une solution ici.";
    Blow:           "Vous ne pouvez pas utilement souffler dedans.";
    Burn:           "Cet acte dangereux ne m�nerait pas � grand-chose.";
    Buy:            print (The) x1;
                    if (x1 has pluralname) print " ne sont ";
                    else print " n'est ";
                    "pas � vendre.";
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
!    Consult:        "Vous ne d�couvrez rien d'int�ressant dans ", (the) x1, ".";
    Consult:        if (x1 has animate || x1 has talkable) {
                        if (x1 has pluralname) print (The) x1, " ne sont pas consultables de cette mani�re.^";
                        else print (The) x1, " n'est pas consultable de cette mani�re.^";
                    }
                    else {
                        print "Vous ne d�couvrez rien. Soit ", (the) x1;
                        if (x1 has pluralname) print " ne sont pas consultables ";
                        else print " n'est pas consultable ";
                        "ainsi, soit vous tentez de consulter sur le mauvais sujet.";
                    }
    CrierSansPrecision : "Cela ne m�nerait � rien.";
    Cut:            "Allons, couper ", (the) x1, " ne m�nerait pas � grand-chose.";
    Dig:            if (noun==0) "Creuser ne m�nerait � rien ici.";
                    else "Creuser cela ne m�nerait � rien.";
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
        1:  print_ret (The) x1, " ", (isorare) x1,
            " non comestible",(s) x1,", selon toute �vidence.";
        2:  "Vous mangez ", (the) x1, ". Pas mauvais.";
    }
    EmptyT: switch (n) {
        1:  if (x1==player) print_ret "En voil� une id�e.";
            print (The) x1;
            if (x1 has pluralname) print " ne sont pas ";
            else print " n'est pas ";
            print_ret "un r�cipient que l'on peut vider.";
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
        1:  "Vous n'�tes � l'int�rieur de rien pour le moment.";
        2:  print "Vous ne pouvez pas sortir ";
            print_ret (dedudes) x1, " ferm�", (es) x1, ".";
        3:  print "Vous ";
            if (x1 has supporter) print "descendez "; else print "sortez ";
            print_ret (dedudes) x1, ".";
        4:  print "Mais vous n'�tes pas ";
            if (x1 has supporter) print "sur "; else print "dans ";
            print_ret (the) x1, ".";
    }
    Fill:   "Cela ne vous avancerait pas.";
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
        2:  "Vous vous remerciez pour ce cadeau.";
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
        3:  print " :^";
        4:  print ".^";
    }
    Jump:           "Sauter sur place ne vous avancerait en rien.";
    JumpOver:       "Vous n'arriverez � rien comme �a.";
    Kiss:           "Concentrez-vous sur le jeu.";
    Listen:
        if (x1 == 0) "Vous n'entendez rien de particulier.";
        else print_ret (The) x1, "ne semble", (nt) x1, " pas produire de son particulier.";
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
        2:  "Votre action ne produit aucune d�couverte notable.";
    }
    Mild:           "Assez.";
    Miscellany: switch (n) {
        1:  "(affichage des seize premiers)^";
        2:  "Rien � faire !";
        3:  print " Vous avez perdu ";
        4:  print " Vous avez gagn� ";
        5:  print "^Voulez-vous RECOMMENCER, CHARGER une partie sauvegard�e";
            #IFDEF DEATH_MENTION_UNDO;
            print ", ANNULER votre derni�re action";
            #ENDIF;
            if (TASKS_PROVIDED==0)
                print ", obtenir le score d�taill� pour cette partie (FULLSCORE)";
            if (deadflag==2 && AMUSING_PROVIDED==0)
                print ", lire quelques suggestions amusantes (AMUSING)";
            " ou QUITTER ?"; !*!
        6:  "[Votre interpr�teur ne permet pas d'@<< annuler @>>. D�sol� !]";
        #Ifdef TARGET_ZCODE;
        7:  "@<< Annuler @>> a �chou�.  [Tous les interpr�teurs ne le permettent pas.]";
        #Ifnot; ! TARGET_GLULX
        7:  "[Vous ne pouvez pas @<< Annuler @>> plus que cela.]";
        #Endif; ! TARGET_
        8:  "Faites un choix parmi les propositions ci-dessus.";
        9:  "^Vous �tes � pr�sent dans le noir total !";
        10: "Je vous demande pardon ?";
        11: "[Vous ne pouvez pas annuler alors que rien n'a encore �t� fait !]";
        12: "[Impossible d'annuler deux fois de suite. D�sol� !]";
        13: "[Action pr�c�dente annul�e.]";
        14: "D�sol�, impossible de corriger.";
        15: "N'y pensez m�me pas."; !*! "Think nothing of it."; !*!
        16: "@<< Oops @>> ne peut corriger qu'un seul mot.";
        17: "Il fait noir, et vous ne pouvez rien voir.";
        18: print "vous-m�me";
        19: "Votre apparence est aussi agr�able qu'� l'accoutum�e.";
        20: "Pour r�p�ter une commande comme @<< grenouille, saute @>>, dites seulement
            @<< encore @>>, et pas @<< grenouille, encore @>>.";
        21: "Vous pouvez difficilement r�p�ter cela.";
        22: "Vous ne pouvez pas commencer par une virgule.";
        23: "Vous semblez vouloir parler � quelqu'un, mais je ne vois pas � qui.";
        24: "Vous ne pouvez pas discuter avec ", (the) x1, ".";
            ! "parler �" serait mieux mais d�licat (ex: � l'oiseau)
        25: "Pour parler � quelqu'un, essayez @<< quelqu'un, bonjour @>> ou quelque chose dans le genre.";
        26: "(vous prenez d'abord ", (the) not_holding, ")";
        27: "Je ne comprends pas cette phrase.";
        28: print "Merci de reformuler. Je n'ai compris que : ";
        29: "Je n'ai pas compris ce nombre.";
        30: "Vous ne voyez rien de tel, � moins que cela ne soit sans grande importance.";
        31: "Vous semblez en avoir dit trop peu !";
        32: "Vous ne l'avez pas dans vos mains !";
        33: "Vous ne pouvez pas employer le mot @<< tout @>> (ou une liste) avec ce verbe.";
        34: "Vous ne pouvez utiliser le mot @<< tout @>> (ou une liste) qu'une fois par ligne.";
        35: "Je ne suis pas s�r de ce � quoi @<< ", (address) pronoun_word,
            " @>> se r�f�re.";
        36: "Vous avez exclu quelque chose qui n'�tait de toute fa�on pas compris dans la liste !";
        37: "Vous ne pouvez agir ainsi qu'avec une chose anim�e.";
        38: "Je ne connais pas ce verbe.";
        39: "Ce n'est pas une chose � laquelle vous aurez � vous r�f�rer au cours du jeu.";
        40: "Vous ne pouvez voir @<< ", (address) pronoun_word,
            " @>> (", (the) pronoun_obj, ") pour l'instant.";
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
        57: print " ?^"; ! espace rajout� pour �viter l'espace manquant.
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
        2:  print "Voulez-vous vraiment quitter ? (O/N) ";
    }
    Remove: switch (n) {
        1:  if (x1 has pluralname)
                "Ils sont malheureusement ferm�s."; !*! elle(s)
            else "Il est malheureusement ferm�."; !*!
        2:  if (x1 has pluralname)
                print "Mais ils ne sont pas";
            else print "Mais ce n'est pas";
            " ici maintenant.";
        3:  "D'accord."; ! Ok
    }
    Restart: switch (n) {
        1: print "Voulez-vous vraiment recommencer ? (O/N) ";
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
    SeLever:        "Inutile.";
    Set:            "Non, vous ne pouvez pas ", (itorthem) x1, " r�gler.";
    SetTo:          "Non, vous ne pouvez ", (itorthem) x1, " r�gler sur rien.";
    Show: switch (n) {
        1:  "Vous n'avez pas ", (the) x1, ".";
        2:  print (The) x1;
            if (x1 has pluralname)
                print " n'ont pas l'air int�ress�";
            else print " n'a pas l'air int�ress�";
            ".";
    }
    Sing:           "Vous ne chantez pas si bien que �a, alors vous n'osez pas.";
    Sleep:          "Vous n'avez pas particuli�rement sommeil.";
    Smell:
       if (x1 == 0) "Vous ne sentez rien de particulier.";
       else print_ret "Aucune odeur particuli�re n'�mane ", (dedudes) x1, ".";
    Sorry:          "Pas grave.";
    Squeeze: switch (n) {
        1:  "Surveillez vos mains.";
        2:  "Vous n'arriverez � rien ainsi.";
    }
    Strong:         "Vous n'avez pas besoin de ce genre de langage pour finir l'aventure.";
    Swim:           "Il n'y a pas assez d'eau pour nager dedans.";  ! swim desactive par defaut dans I7
    Swing:          "Ce n'est pas une chose � laquelle il est utile de se balancer.";
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
        2:  "Vous vous poss�dez vous-m�me. Voil� une probl�matique sur laquelle les philosophes n'ont pas d� passer beaucoup de temps.";
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
           else "Vous pr�f�rez ne pas go�ter n'importe quoi. On ne sait jamais o� �a a pu tra�ner.";
    Tell: switch (n) {
        1:  "Vous discutez avec vous-m�me pendant un bon moment...";
        2:  "Pas de r�action.";
    }
    Think:          "Vous r�fl�chissez un peu, mais aucune id�e ne vous vient � l'esprit.";
    ThrowAt: switch (n) {
        1:  "Futile.";
        2:  "Vous h�sitez au moment crucial.";
    }
    Tie:  "Vous n'arriverez � rien comme �a.";
    Touch: switch (n) {
        1:  "Tenez vos mains tranquilles !";
        2:  "Vous pr�f�rez ne pas mettre vos mains n'importe o�.";
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
    VagueConsult :  "Pr�cisez sur quel sujet vous souhaitez consulter ", (the) x1, ".";
    VagueDo: "Soyez plus pr�cis.";
    VagueGo: "Vous devez donner la direction dans laquelle aller.";
    VagueSearch: "Utilisez plut�t 'fouiller'.";
    VagueTie:  "[Reformulez : ", (address) verb_word, " ... avec ...]";
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
        2: "Vous auriez l'air ridicule en agitant ", (the) x1, ".";
    }
    WaveHands:
        if (x1 == 0 || x1 == player) "Vous auriez l'air b�te en agitant vos mains devant vous.";
        else "Votre timidit� prend le dessus au dernier moment.";
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
