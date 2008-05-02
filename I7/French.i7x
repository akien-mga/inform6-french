Version 1/080502 of French by Eric Forgeot begins here.

"Quelques modifications des regles de base pour supporter le francais : To make French the language of play."

Part 1 - French specifics

Use French Language translates as (- Constant French; -). [Use French Language. ]Use French 3PSP Language translates as (- Constant French3PSP; -).[Use French 3PSP Language.][troisième personne du singulier au passé. : work in progress, was used in the game "les heures du vent"]

Use French 1PSP Language translates as (- Constant French1PSP; -).
[Use French 1PSP Language.]

A thing can be female.
[ pose pb : A device is always an Inform library supporter.]

[ 1=masculino, 2=femenino,
  3=masculino plural, 4= femenino plural ]
A thing has a number called the gender.
Gender is a kind of value. The gender are single male, single female, plural male and plural female.
[pose pb : The gender translates into Inform as "gender".]

[The description of a player-character is always "Vous êtes comme à votre habitude." ] 
  [doesn't work in the french lib, it must be set by the author]

Part 2 - French directions

A direction has a text called printed name.
The printed name of north is "nord".
The printed name of south is "sud".
The printed name of east is "est".
The printed name of west is "ouest".

The printed name of northeast is "nord-est".
The printed name of southwest is "sud-ouest".
The printed name of southeast is "sud-est".
The printed name of northwest is "nord-ouest".

The printed name of inside is "dedans".
The printed name of outside is "dehors".
The printed name of up is "en haut".
the printed name of down is "en bas".


Understand "gauche" as west.
Understand "ouest" as west.
Understand "o" as west.
Understand "droite" as east.
Understand "est" as east.

Understand "sud" as south.
Understand "nord" as north.	
Understand "bas" as down.
Understand "haut" as up.
Understand "remonter" as up.

Understand "nord-est/nordest" as northeast.
Understand "nord-ouest/nordouest" or "no" as northwest. [toujours problème de 'saying no']
Understand "sud-ouest/sudouest" or "so" as southwest.
Understand "sud-est/sudest" as southeast.

Include (- has proper, -) when defining up. [para evitar 'el arriba']
Include (- has proper, -) when defining down.
Include (- has proper, -) when defining inside.
Include (- has proper, -) when defining outside.

Part 3 - Replacing English verbs

[I don't remove the english verbs yet, they could be useful to some players ?
I'll create a way to desactive them later anyway, when all the verbs in French will be working correctly.
Here is the list anyway...

Understand the command "take" as something new.
Understand the command "carry" as something new.
Understand the command "hold" as something new.
Understand the command "get" as something new.
Understand the command "pick" as something new.
Understand the command "stand" as something new.
Understand the command "remove" as something new.
Understand the command "shed" as something new.
Understand the command "doff" as something new.
Understand the command "disrobe" as something new.
Understand the command "don" as something new.
Understand the command "wear" as something new.
Understand the command "put" as something new.
Understand the command "drop" as something new.
Understand the command "throw" as something new.
Understand the command "discard" as something new.
Understand the command "give" as something new.
Understand the command "pay" as something new.
Understand the command "offer" as something new.
Understand the command "feed" as something new.
Understand the command "present" as something new.
Understand the command "display" as something new.
Understand the command "show" as something new.
Understand the command "go" as something new.
Understand the command "walk" as something new.
Understand the command "leave" as something new.
Understand the command "run" as something new.
Understand the command "inventory" as something new.
Understand the command "i" as something new.
Understand the command "inv" as something new.
Understand the command "look" as something new.
Understand the command "l" as something new.
Understand the command "consult" as something new.
Understand the command "open" as something new.
Understand the command "unwrap" as something new.
Understand the command "uncover" as something new.
Understand the command "shut" as something new.
Understand the command "cover" as something new.
Understand the command "close" as something new.
Understand the command "cross" as something new.
Understand the command "enter" as something new.
Understand the command "sit" as something new.
Understand the command "exit" as something new.
Understand the command "out" as something new.
Understand the command "x" as something new.
Understand the command "watch" as something new.
Understand the command "describe" as something new.
Understand the command "check" as something new.
Understand the command "examine" as something new.
Understand the command "read" as something new.
Understand the command "yes" as something new.
Understand the command "y" as something new.
Understand the command "yes" as something new.
Understand the command "no" as something new.
Understand the command "sorry" as something new.
Understand the command "shit" as something new.
Understand the command "fuck" as something new.
Understand the command "damn" as something new.
Understand the command "bother" as something new.
Understand the command "curses" as something new.
Understand the command "drat" as something new.
Understand the command "darn" as something new.
Understand the command "search" as something new.
Understand the command "wave" as something new.
Understand the command "adjust" as something new.
Understand the command "set" as something new.
Understand the command "drag" as something new.
Understand the command "pull" as something new.
Understand the command "push" as something new.
Understand the command "move" as something new.
Understand the command "shift" as something new.
Understand the command "clear" as something new.
Understand the command "press" as something new.
Understand the command "rotate" as something new.
Understand the command "twist" as something new.
Understand the command "unscrew" as something new.
Understand the command "screw" as something new.
Understand the command "turn" as something new.
Understand the command "switch" as something new.
Understand the command "lock" as something new.
Understand the command "unlock" as something new.
Understand the command "attack" as something new.
Understand the command "break" as something new.
Understand the command "sm ash" as something new.
Understand the command "hit" as something new.
Understand the command "fight" as something new.
Understand the command "torture" as something new.
Understand the command "wreck" as something new.
Understand the command "crack" as something new.
Understand the command "destroy" as something new.
Understand the command "murder" as something new.
Understand the command "kill" as something new.
Understand the command "punch" as something new.
Understand the command "thump" as something new.
Understand the command "wait" as something new.
Understand the command "z" as something new.
Understand the command "answer" as something new.
Understand the command "say" as something new.
Understand the command "shout" as something new.
Understand the command "speak" as something new.
Understand the command "tell" as something new.
Understand the command "ask" as something new.
Understand the command "eat" as something new.
Understand the command "sleep" as something new.
Understand the command "nap" as something new.
Understand the command "sing" as something new.
Understand the command "climb" as something new.
Understand the command "scale" as something new.
Understand the command "purch ase" as something new.
Understand the command "buy" as something new.
Understand the command "squ ash" as something new.
Understand the command "squeeze" as something new.

Understand the command "dive" as something new.
Understand the command "swing" as something new.
Understand the command "blow" as something new.
Understand the command "pray" as something new.
Understand the command "wake" as something new.
Understand the command "awake" as something new.
Understand the command "awaken" as something new.
Understand the command "kiss" as something new.
Understand the command "embrace" as something new.
Understand the command "hug" as something new.
Understand the command "think" as something new.
Understand the command "sniff" as something new.
Understand the command "smell" as something new.
Understand the command "listen" as something new.
Understand the command "hear" as something new.
Understand the command "t aste" as something new.
Understand the command "feel" as something new.
Understand the command "touch" as something new.
Understand the command "rub" as something new.
Understand the command "shine" as something new.
Understand the command "polish" as something new.
Understand the command "sweep" as something new.
Understand the command "clean" as something new.
Understand the command "dust" as something new.
Understand the command "wipe" as something new.
Understand the command "scrub" as something new.
Understand the command "attach" as something new.
Understand the command "fix" as something new.
Understand the command "f asten" as something new.
Understand the command "tie" as something new.
Understand the command "light" as something new.
Understand the command "burn" as something new.
Understand the command "swallow" as something new.
Understand the command "sip" as something new.
Understand the command "drink" as something new.
Understand the command "fill" as something new.
Understand the command "slice" as something new.
Understand the command "prune" as something new.
Understand the command "chop" as something new.
Understand the command "cut" as something new.
Understand the command "jump" as something new.
Understand the command "skip" as something new.
Understand the command "hop" as something new.

Understand the command "score" as something new.
Understand the command "full score" as something new.
Understand the command "quit" as something new.
Understand the command "q" as something new.
Understand the command "save" as something new.
Understand the command "restart" as something new.
Understand the command "restore" as something new.
Understand the command "verify" as something new.
Understand the command "version" as something new.
Understand the command "script" as something new.
Understand the command "transcript" as something new.
Understand the command "superbrief" as something new.
Understand the command "short" as something new.
Understand the command "verbose" as something new.
Understand the command "long" as something new.
Understand the command "brief" as something new.
Understand the command "normal" as something new.
Understand the command "nouns" as something new.
Understand the command "pronouns" as something new.
Understand the command "notify" as something new.
Understand the command "insert" as something new.
Understand the command "smash" as something new.
Understand the command "purchase" as something new.
Understand the command "squash" as something new.
Understand the command "taste" as something new.
Understand the command "fasten" as something new.

]


Part 4 - Grammar


[ note : 
blowing' action, intended for woodwind instruments and perhaps the occasional siphon, has been withdrawn from the built-in set: it no longer seems to us part of the essential core of actions. We have similarly removed praying, digging, jumping over, filling and swimming

à implémenter par la suite : 

After reading a command:
        if the player's command is a topic listed in the Table of Compound
Actions
        begin;
                try the specified action entry;
                reject the player's command;
        end if;

Table of Compound Actions
topic   specified action
"descend"       going down
"ascend"        going up
"diagnose"      examining yourself

]

Understand "entrer" as InGoing.
InGoing is an action applying to nothing.
Carry out InGoing: try going inside.

Understand "entrer dans [something]" or  "entrer [something]"  as entering.
Understand the command "rentrer" as "entrer".



Understand "asseoir [something]" or "asseoir vous dans/sur [something]" as entering.
Understand the command "allonger" or "coucher" as "asseoir".

Understand "descendre" as DownGoing.
DownGoing is an action applying to nothing.
Carry out DownGoing: try going down.


Understand "descendre de [something]" as getting off.
Understand "descendre du [something]" as getting off.
Understand "descendre des [something]" as getting off.

[todo : descendre vers etc]

Understand "sortir" or "sortir de la" or "sortir d'ici"  as exiting.

Understand "sortir vers/a/au/de/du/des/d' [something]" as OutGoing.
OutGoing is an action applying to one thing.
Carry out OutGoing: try going outside.


Understand the command "partir" as "sortir".

Understand "aller vers/a/à/en [direction]" or "aller [direction]" as going.
Understand "aller vers le bas" or "aller en bas" as DownGoing.

Understand "aller [something]" as entering.

Understand the command "marcher", "courir" or "passer" as "aller".

Understand "debout" as exiting.
Understand "lever vous" or "se lever" as exiting.

Understand "lever [something]" as taking.
Understand the command "relever" or "soulever" as "lever".

Understand "boire [something]" or "boire de [something]" or "boire du [something]" or "boire a [something]" or "boire de l'[something]" as drinking.
Understand the command "avaler" and "siroter" as "boire".

Understand "manger [something preferably held]" or "manger du [something preferably held]" as eating.
Understand the command "devorer", "grignoter", "mastiquer" et "ingerer" as "manger".

Understand "bruler [something]" as burning. [todo ? bruler [something] avec [held]]
Understand the command "embraser", "cramer" et "incendier" as "bruler".

Understand "attaquer [someone]" or "tuer [someone]" or "torturer [someone]" or "cogner [someone]" as attacking. [someone est redondant si on a something par ailleurs mais l'inverse n'est pas vrai]

Understand "attaquer [something]" or "attaquer a [something]" or "attaquer à [something]" or  "cogner [something]" as attacking.

Understand the command "frapper", "combattre", "briser", "detruire", or "casser" as "attaquer".

[ruiner a ete retire]
[vider a ete retire]
[remplir/emplir a ete retire]

[Understand "transferer [something] vers/dans/sur [something]" as transfering.]

Understand "prendre [things]" as taking.
Understand the command "pr", "ramasser", "decoller" and "cueillir" as "prendre".

Understand "prendre [direction]" or "prendre vers [direction]" as going.

Understand "deposer [things preferably held]" as dropping.
Understand "deposer [other things] dans [something]" or "mettre [other things] dans [something]" as inserting it into.
Understand "deposer [other things] sur [something]" or "mettre [other things] sur [something]" as putting it on.

Understand the command "poser" and "abandonner" and "lacher" and as "deposer". 

Understand "enlever [something preferably held]" as taking off.

Understand "revetir [something preferably held]"or "mettre [something preferably held]" as wearing. 


Understand "examiner [something]", "decrire [something]" and "observer [something]" as examining.

Understand the command "regarder" as "examiner".

Understand "fouiller [something]" as searching.
Understand "chercher dans [something]" as searching.

Understand "sentir" as smelling. 
Understand "sentir [something]" as smelling.
Understand the command "renifler" as "sentir".

Understand "ecouter" as listening.
Understand "ecouter [something]" as listening.
Understand the command "entendre" as "ecouter".

Understand "gouter [something]" as tasting.

Understand "toucher [something]" as touching.
Understand the command "caresser" as "toucher".
Understand the command "tater" as "toucher".

Understand the command "read" as something new.
[Understand the command "lire" as something new.]

Reading is an action applying to one thing.
[will we keep this difference in the future ? TODO]

Understand "read [something]" or "lire [something]" as reading.
 

Carry out reading: 
	say "[if using the French 3PSP Language option]Il n[']y avait rien de spécial à lire ici.[otherwise if using the French 1PSP Language option]Je n'avais rien de spécial à lire ici.[otherwise]Il n[']y a rien de spécial à lire ici.[end if]".

Understand "consulter [something] sur [text]" or "consulter [something] a [text]" or "consulter [something] a propos de [text]" as consulting it about.

Understand "tirer [something]" as pulling.
Understand the command "trainer" as "tirer".

Understand "pousser [something]" as pushing.
Understand "pousser [something] vers [direction]" or "pousser [something] a [direction]" or "pousser [something] au [direction]" as pushing it to.
Understand the command "deplacer", "bouger" as "pousser".

Understand "appuyer [something]" or "appuyer sur [something]" as pushing.

Understand "regler" as setting it to.
Understand "regler [something] to [text]" as setting it to.
Understand the command "ajuster" as "regler".

Understand "tourner" as turning.
Understand the command "devisser" and "visser" as "tourner".

Understand "eteindre [something]" as switching off.
Understand the command "arreter" as "eteindre".

Understand "allumer [something]" as switching on.
Understand the command "demarrer" as "allumer".

Understand "balancer [something]" as swinging.

Understand "frotter [something]" as rubbing.
Understand the command "cirer", "astiquer", "balayer", "nettoyer", "depoussierer", "essuyer" and "recurer" as "frotter".

Understand ["nouer [something]" or] "nouer [something] a [something]" or "nouer [something] au [something]" or "nouer [something] aux [something]" or "nouer [something] avec [something]" or "nouer [something] sur [something]" as tying it to. 
Understand the command "attacher", "fixer", "connecter" and "brancher" as "nouer".

[TODO : faire parler, dire etc ici]

Understand "agiter les mains" or "agiter la main" as waving hands.
Understand "saluer" or "saluer avec la main" [or "saluer [someone]" or "saluer [someone] avec la main"] as waving hands. [todo: on ne peut ajouter un cod]

Understand "agiter [something]" as waving.
Understand the command "brandir", "secouer" as "agiter".

Understand "montrer [something] a [someone]" or "montrer [something] à [someone]" or "montrer [something] au [someone]" or "montrer [something] aux [someone]" as showing it to.
Understand the command "presenter" as "montrer".

Understand "reveiller moi" or "me reveiller" or "se reveiller" as waking up.
Understand "reveiller [someone]" as waking.
Understand the command "eveiller" as "reveiller".

Understand "embrasser [someone]" as kissing.
Understand the command "etreindre" as "embrasser".

Understand "chanter" as singing.
Understand the command "fredonner" as "chanter". 

[Understand "souffler dans [something preferably held]" or  "souffler [something preferably held]" as blowing. [blow non implemente dans I7...]]

Understand "attendre" or "a" as waiting.

[Understand "prier" as praying. Pas dans I7]

Understand "monter" as UpGoing.
UpGoing is an action applying to nothing.
Carry out UpGoing: try going up.



Understand "grimper" or "grimper sur [something]" as climbing.
Understand the command "gravir" and "escalader" as "grimper".

[jump over not in I7]
Understand "sauter" as jumping.
Understand the command "bondir" as "sauter".

Understand the command "swim" as something new.
Swimming is an action applying to nothing. Understand "swim" or "dive" or "nager" or "plonger" as swimming. 

Carry out swimming:
	if using the French Language option, say "Il n'y a pas assez d'eau pour nager dedans.";
	if using the French 3PSP Language option, say "Il n'y avait pas assez d'eau pour nager dedans.".

Understand "fermer [something]" as closing.

Understand "fermer [something] avec [something preferably held]" or "fermer [something] a cle" or "fermer [something] a clef" as locking it with.

Understand the command "verrouiller" as "fermer".

Understand "ouvrir [something]" as opening.

Understand "ouvrir [something] avec [something preferably held]" as unlocking it with.

Understand the command "deverrouiller" and "forcer" as "ouvrir".

Understand "inventaire" as taking inventory.          [todo : invtall et invwide]

Understand "acheter [something]" as buying.

Understand "donner [something preferably held] a/au/aux [someone]" as giving it to. 
Understand "donner [someone] [something preferably held]" as giving it to (with nouns reversed).

Understand the commands "payer" and "offrir" and "remettre" as "donner".

Understand "nourrir [someone] avec [something preferably held]" as giving it to (with nouns reversed).



Part 5 - Redefinition and replacement of some sensitive parts in the default rules

[ I hope it won't mess with future releases of Inform.]

Before printing the locale description (this is the interesting locale paragraphs-french rule):
	let the domain be the parameter-object;
	sort the Table of Locale Priorities in locale description priority order;
	repeat through the Table of Locale Priorities:
		[say "[notable-object entry]...";]
		carry out the printing a locale paragraph about activity with the notable-object entry;
	continue the activity.

Before printing the locale description (this is the you-can-also-see-french rule):
	let the domain be the parameter-object;
	let the mentionable count be 0;
	repeat with item running through things:
		now the item is not marked for listing;
	repeat through the Table of Locale Priorities:
		[say "[notable-object entry] - [locale description priority entry].";]
		if the locale description priority entry is greater than 0,
			now the notable-object entry is marked for listing;
		increase the mentionable count by 1;
	if the mentionable count is greater than 0:
		repeat with item running through things:
			if the item is mentioned:
				now the item is not marked for listing;
		begin the listing nondescript items activity;
		if the number of marked for listing things is 0:
			abandon the listing nondescript items activity;
		otherwise:
			if handling the listing nondescript items activity:
				if the domain is a room:
					if the domain is the location, say "Vous ";
					otherwise say "Dans [the domain] vous ";
				otherwise if the domain is a supporter:
					say "Sur [the domain] vous ";
				otherwise:
					say "Dans [the domain] vous ";
				say "pouvez [if the locale paragraph count is greater than 0]aussi [end if]voir ";
				let the common holder be nothing;
				let contents form of list be true;
				repeat with list item running through marked for listing things:
					if the holder of the list item is not the common holder:
						if the common holder is nothing,
							now the common holder is the holder of the list item;
						otherwise now contents form of list is false;
					if the list item is mentioned, now the list item is not marked for listing;
				filter list recursion to unmentioned things;
				if contents form of list is true and the common holder is not nothing,
					list the contents of the common holder, as a sentence, including contents,
						giving brief inventory information, tersely, not listing
						concealed items, listing marked items only;
				otherwise say "[a list of marked for listing things including contents]";
				if the domain is the location, say " ici";
				say ".[paragraph break]";
				unfilter list recursion;
			end the listing nondescript items activity;
	continue the activity.

Include (-

[ Banner;
   BeginActivity(PRINTING_BANNER_TEXT_ACT);
   if (ForActivity(PRINTING_BANNER_TEXT_ACT) == false) {
	   	VM_Style(HEADER_VMSTY);
		print (string) Story;
		VM_Style(NORMAL_VMSTY);
		new_line;
		print (string) Headline;
		#ifdef Story_Author;
		print " par ", (string) Story_Author;
		#endif; ! Story_Author
		new_line;
		VM_Describe_Release();
		print " / Inform 7 build ", (string) NI_BUILD_COUNT, " ";
		print "(I6/v"; inversion;
		print " lib ", (string) LibRelease, ") ";
		#Ifdef STRICT_MODE;
		print "S";
		#Endif; ! STRICT_MODE
		#Ifdef DEBUG;
		print "D";
		#Endif; ! DEBUG
		new_line;
    }
    EndActivity(PRINTING_BANNER_TEXT_ACT);
];
-) instead of "Banner" in "Printing.i6t".


Part 6 - Redefinition of Languages_i6_t

Include (-
Constant LibReleaseFR      "2.3dev";
Message		"[Compilé avec la version 2.3dev (future 2.3 stable) de la bibliothèque francophone.]";
!System_file;

! To keep compat with some french declarations. Should be replaced later probably. Was used in the outdated verblib.h
Default AMUSING_PROVIDED 1;
Default MAX_CARRIED      100;
Default MAX_SCORE        0;
Default NUMBER_TASKS     1;
Default OBJECT_SCORE     4;
Default ROOM_SCORE       5;
Default SACK_OBJECT      0;
Default TASKS_PROVIDED   1;


! tokenise__ has been removed too in inform 7 :

#Ifdef TARGET_ZCODE;

[ Tokenise__ b p; b->(2 + b->1) = 0; @tokenise b p; ];

#Ifnot; ! TARGET_GLULX

Array gg_tokenbuf -> DICT_WORD_SIZE;

[ GGWordCompare str1 str2 ix jx;
    for (ix=0 : ix<DICT_WORD_SIZE : ix++) {
        jx = (str1->ix) - (str2->ix);
        if (jx ~= 0) return jx;
    }
    return 0;
];

[ Tokenise__ buf tab
    cx numwords len bx ix wx wpos wlen val res dictlen entrylen;
    len = buf-->0;
    buf = buf+WORDSIZE;

    ! First, split the buffer up into words. We use the standard Infocom
    ! list of word separators (comma, period, double-quote).

    cx = 0;
    numwords = 0;
    while (cx < len) {
        while (cx < len && buf->cx == ' ') cx++;
        if (cx >= len) break;
        bx = cx;
        if (buf->cx == '.' or ',' or '"') cx++;
        else {
            while (cx < len && buf->cx ~= ' ' or '.' or ',' or '"') cx++;
        }
        tab-->(numwords*3+2) = (cx-bx);
        tab-->(numwords*3+3) = WORDSIZE+bx;
        numwords++;
        if (numwords >= MAX_BUFFER_WORDS) break;
    }
    tab-->0 = numwords;

    ! Now we look each word up in the dictionary.

    dictlen = #dictionary_table-->0;
    entrylen = DICT_WORD_SIZE + 7;

    for (wx=0 : wx<numwords : wx++) {
        wlen = tab-->(wx*3+2);
        wpos = tab-->(wx*3+3);

        ! Copy the word into the gg_tokenbuf array, clipping to DICT_WORD_SIZE
        ! characters and lower case.
        if (wlen > DICT_WORD_SIZE) wlen = DICT_WORD_SIZE;
        cx = wpos - WORDSIZE;
        for (ix=0 : ix<wlen : ix++) gg_tokenbuf->ix = glk($00A0, buf->(cx+ix));
        for (: ix<DICT_WORD_SIZE : ix++) gg_tokenbuf->ix = 0;

        val = #dictionary_table + WORDSIZE;
        @binarysearch gg_tokenbuf DICT_WORD_SIZE val entrylen dictlen 1 1 res;
        tab-->(wx*3+1) = res;
    }
];

#Endif; ! TARGET_


! not_holding, removed too

-)

Include (-
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

-) instead of "Compass" in "Output.i6t"

Include (-
Constant AGAIN1__WD     = 'again';
Constant AGAIN2__WD     = 'g//';
Constant AGAIN3__WD     = 'again';
Constant OOPS1__WD      = 'oops';
Constant OOPS2__WD      = 'o//';
Constant OOPS3__WD      = 'oops';
Constant UNDO1__WD      = 'undo';
Constant UNDO2__WD      = 'undo';
Constant UNDO3__WD      = 'undo';

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
Constant ME2__WD      = 'toi'; !*! nous ? moi-même ?
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
Constant QUIT1__WD    = 'quit'; !*! "q//" ?
Constant QUIT2__WD    = 'quitter';
Constant RESTART__WD  = 'recommencer';
Constant RESTORE__WD  = 'charger';
-) instead of "Vocabulary" in "Language.i6t".

Include (-
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
!      'le'    $$100000100000                    NULL        ! car l'article le/la/les vient parfois interférer
!      'la'    $$010000010000                    NULL        ! par exemple "mange la pomme" est compris comme "mange-la" si "pomme" est inconnu, d'où des messages d'erreur troublants pour le joueur
!      'les'   $$000110000110                    NULL
!      'lui'   $$110000110000                    NULL ! dans "donne-lui", "lui" est m ou f
!      'leur'  $$000110000110                    NULL
      
      ! Disjunctive pronouns
!*! ! féminin accepté pour 'luy' (mot bidon) pour traiter les cas 'dedans', 'dessus', 'l^'... (genre inconnu)
!   en fait, '-lui' pourrait jouer le même rôle
      'luy'    $$110000110000                    NULL ! "l'ouvrir" devient "ouvrir luy", "luy" étant m ou f
      'lui'    $$100000100000                    NULL
      'elle'   $$010000010000                    NULL
      'eux'    $$000110000110                    NULL
      'elles'  $$000010000010                    NULL;
-) instead of "Pronouns" in "Language.i6t".

Include (-
Array LanguageDescriptors table
   !  word       possible GNAs   descriptor      connected
   !             to follow:      type:           to:
   !             a     i
   !             s  p  s  p
   !             mfnmfnmfnmfn                 

      'mon'    $$100000100000    POSSESS_PK      0  !*! ce qui suit ne doit pas fonctionner souvent
      'ma'     $$010000010000    POSSESS_PK      0  !*! du moins je l'espère car mon/ma/mes devrait
      'mes'    $$000110000110    POSSESS_PK      0  !*! changer en fonction du type de parole
      'ton'    $$100000100000    POSSESS_PK      0  !*!
      'ta'     $$010000010000    POSSESS_PK      0  !*! (quoique ça a l'air tres tolerant)
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

     'allumé'  $$100000100000    light           NULL
     'allumée' $$010000010000    light           NULL
     'éteint'  $$100000100000    (-light)        NULL
     'éteinte' $$010000010000    (-light)        NULL;
-) instead of "Descriptors" in "Language.i6t".

Include (-
Array LanguageNumbers table
    'un' 1 'une' 1 'deux' 2 'trois' 3 'quatre' 4 'cinq' 5
    'six' 6 'sept' 7 'huit' 8 'neuf' 9 'dix' 10
    'onze' 11 'douze' 12 'treize' 13 'quatorze' 14 'quinze' 15
    'seize' 16 'dix-sept' 17 'dix-huit' 18 'dix-neuf' 19 'vingt' 20
    'vingt-et-un' 21 'vingt-deux' 22 'vingt-trois' 23 'vingt-quatre' 24
	'vingt-cinq' 25 'vingt-six' 26 'vingt-sept' 27 'vingt-huit' 28
	'vingt-neuf' 29 'trente' 30
;

[ LanguageNumber n f;
    if (n==0)    { print "zéro"; rfalse; }
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
-) instead of "Numbers" in "Language.i6t".

Include (-
[ LanguageTimeOfDay hours mins;
    print hours/10, hours%10, "h", mins/10, mins%10;
];
-) instead of "Time" in "Language.i6t".

Include (-
[ LanguageDirection d;
    switch (d) {
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
-) instead of "Directions" in "Language.i6t".

Include (-
! LanguageToInformese
! ------------------------------------------------------------------------------
!   Part III.   Translation
! ------------------------------------------------------------------------------
!
! La fonction enleve_accents enlève les accents des mots qui n'ont pu être
! interprétés. De cette manière, le joueur peut utiliser les accents ou non.
! Pour cela le jeu doit définir les mots sans accent, par exemple :
! object set_of_keys "trousseau de clés"
! with name 'trousseau' 'cles'
!
! Si le joueur demande : "examiner cles", le mot est compris directement.
! S'il demande : "examiner clés" le mot n'est pas compris, ce qui déclenche 
! la suppression des accents et une nouvelle analyse.

! L'appel de cette fonction peut être désactivé avec la commande de
! deboguage "accents on" pour que les accents soient conservés.

global enleveaccents=1;

[ enleve_accents x i word at len;

    #Ifdef DEBUG; affiche_buffer(buffer, "  [ enleve_accents :^  - Buffer reçu : "); #Endif;

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
                if (buffer->i=='é') buffer->i='e'; 
                ! plutôt un switch ?

                else if(buffer->i=='à') buffer->i='a';
                else if(buffer->i=='è') buffer->i='e';
                else if(buffer->i=='ù') buffer->i='u';

                else if(buffer->i=='â') buffer->i='a';
                else if(buffer->i=='ê') buffer->i='e';
                else if(buffer->i=='î') buffer->i='i';
                else if(buffer->i=='ô') buffer->i='o';
                else if(buffer->i=='û') buffer->i='u';

                else if(buffer->i=='ä') buffer->i='a';
                else if(buffer->i=='ë') buffer->i='e';
                else if(buffer->i=='ï') buffer->i='i';
                else if(buffer->i=='ö') buffer->i='o';
                else if(buffer->i=='ü') buffer->i='u';

                else if(buffer->i=='ç') buffer->i='c';

            Tokenise__(buffer,parse);
        }
    }

    #Ifdef DEBUG; affiche_buffer(buffer, "  - Buffer sans accents : "); #Endif;
];

! enlève le tiret de départ des mots qui ne sont pas dans le dictionnaire
[ enleve_tirets x i word at len;
    i=NULL; ! pour retirer warning a la compilation glulxe

    #Ifdef DEBUG; affiche_buffer(buffer, "  [ enleve_tirets :^  - Buffer reçu : "); #Endif;

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

[ Mot n; ! valeur (dictionnaire) du mot numéro n de parse
#Ifdef TARGET_ZCODE;
    return parse-->(n*2 + 1);
#Ifnot; ! TARGET_GLULX
    return parse-->(n*3 + 1);
#Endif; ! TARGET_
];

[ PositionMot n; ! position dans buffer du mot numéro n de parse
#Ifdef TARGET_ZCODE;
    return parse->(n*4 + 5);
#Ifnot; ! TARGET_GLULX
    return parse-->(n*3 + 3);
#Endif; ! TARGET_
];

[ LongueurMot n;   ! longueur (en chars) dans buffer du mot numéro n de parse
#Ifdef TARGET_ZCODE;
    return parse->(n*4 + 4);
#Ifnot; ! TARGET_GLULX
    return parse-->(n*3 + 2);
#Endif; ! TARGET_
];

[ EcraseMot n i;        ! écrase avec des espaces dans buffer le mot numéro n
    for(i=0:i<LongueurMot(n):i++)
        buffer->(PositionMot(n)+i) = ' ';
];

[ DernierMot n; ! vrai si le mot numéro n est le dernier ou suivi d'un "point" (THEN1__WD, ...)
    if (n==NbMots()-1) ! le mot numéro n est-il le dernier ?
        return true;
    else        ! est-il suivi d'un "point" ?
        return (Mot(n+1) == THEN1__WD or THEN2__WD or THEN3__WD);
];

[ LanguageToInformese i word wordsuiv at b RangVerbe RangDernier;

    Tokenise__(buffer,parse);
    #Ifdef DEBUG; affiche_buffer(buffer, "[ LanguageToInformese:^* Buffer reçu : "); #Endif;

    for (i=0:i<NbMots():i++) ! balayer toute la phrase
    {
         word = Mot(i);
         if (DernierMot(i)) wordsuiv=THEN1__WD; else wordsuiv=Mot(i+1);
         at = PositionMot(i); ! position du mot numéro i dans buffer
         if (word == 'dessus')
         {   LTI_Insert(at, ' '); ! remplace
             buffer->at     = 's';
             buffer->(at+1) = 'u';
             buffer->(at+2) = 'r';
             buffer->(at+3) = '-'; ! contrairement à 'lui', '-lui' peut être féminin !*! mais pas pluriel...
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
             buffer->(at+4) = '-'; ! contrairement à 'lui', '-lui' peut être féminin !*! mais pas pluriel...
             buffer->(at+5) = 'l';
             buffer->(at+6) = 'u';
             buffer->(at+7) = 'i';
             Tokenise__(buffer,parse);
             i = 0; continue;
         }
!*! pas forcément une bonne idée car "dedans" est aussi une direction !*! mais "mets-le dedans" ?
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
             buffer->at     = ' '; ! décale
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
             buffer->at     = ' '; ! décale
             buffer->(at+1) = 's';
             buffer->(at+2) = 'u';
             buffer->(at+3) = 'd';
             Tokenise__(buffer,parse);
             i = 0; continue;
         }
     }

    !  insertion d'un espace avant chaque tiret et après chaque apostrophe 
    for (i=WORDSIZE:i<WORDSIZE+NbChars():i++) {
        if (buffer->i == '-') LTI_Insert(i++, ' ');
        if (buffer->i == ''') LTI_Insert( ++i, ' ');  
    ! autre notation (interrogation) 'antislash'' par exemple (interrogation)
    }
    Tokenise__(buffer,parse);

    ! Suppression de 'je' ou 'j^' en début de phrase.
    ! Par exemple, "je vais au nord" devient "vais au nord".
    if (Mot(0) == 'je' or 'j^') {
        EcraseMot(0);
        Tokenise__(buffer,parse); 
    }

    ! ce qui suit ne tient pas bien compte des commandes s'adressant à quelqu'un ("machin, fais ceci")
    ! Transformation de phrases à l'infinitif commençant par un ou deux pronoms suivis d'un mot (verbe, probablement)
    ! Ex : "le lui donner" devient "donner -le -lui"
    ! Etape A : "le/la/l'/les" (suivi éventuellement de "lui/leur") passe après le verbe. Ex : "lui donner -le"
    word=Mot(0); ! 1er mot
    if ((NbMots()>=2)&&(Mot(1)=='lui'or'leur')) RangVerbe=2; else RangVerbe=1; 
    ! verbe = 2e ou 3e mot ?
    b=PositionMot(RangVerbe)+LongueurMot(RangVerbe); 
    
    ! juste après le verbe (egal) position du verbe (plus) longueur du verbe ne rien faire si la phrase ne comporte pas de verbe
     
     if (~~DernierMot(RangVerbe-1)) { 
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
        if (word == 'l^' or 'y//') ! exemple : "y aller" !*! 'y' à déplacer ?
        {
            EcraseMot(0); !*! imprécision : en fait 'l^' est équivalent à '-le' ou '-la'
            LTI_Insert(b, ' '); ! '-lui' est masculin ou féminin
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

    ! Etape B : "lui/leur" passe après le verbe. Ex : "lui donner -le" devient "donner -le -lui"
    word=Mot(0); ! 1er mot
    ! RangDernier est le rang du dernier mot du bloc : verbe + "-le/-la/-les"
    if ((NbMots()>=3)&&(Mot(2)=='-le'or'-la'or'-les' or'-lui')) RangDernier=2; else RangDernier=1; ! "-le/-la/-les" après le verbe ?
    b=PositionMot(RangDernier)+LongueurMot(RangDernier); 
    ! juste après bloc = position du dernier + longueur du dernier
    if (~~DernierMot(0)) { 
    	! ne rien faire si la phrase ne comporte pas de verbe
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
            && ~~DernierMot(0) ) ! sinon gènerait "se", abréviation de "sud-est"
    {
        EcraseMot(0);
        LTI_Insert(b, ' ');
        LTI_Insert(b+1, 'v');
        LTI_Insert(b+2, 'o');
        LTI_Insert(b+3, 'u');
        LTI_Insert(b+4, 's');
    }
    Tokenise__(buffer,parse);

    ! maintenant que les traitements sur l'infinitif ont été faits,
    ! enlever le tiret en début de mot pour ceux qui n'existent pas dans le dictionnaire
    ! (conserve '-lui','-le','-la'... et les mots prévus par le joueur)
    enleve_tirets();

    ! Avertir ceux qui oublient de mettre des traits d'union entre les pronons et le verbe
    ! à l'impératif et corriger les cas les plus simples : !*! le plus possible
    enleve_accents(); ! sinon "à" n'est pas reconnu !*! placer cette fonction encore plus en amont ?
    if ( ((NbMots()==2)&&(Mot(1)=='le'or'la'or'les'or'lui'or'leur')) || ! "parle lui" devient "parle-lui"
            ((NbMots()>=2)&&(Mot(1)=='lui')) || ! "donne lui la pomme" devient "donne-lui la pomme" (pas de confusion possible avec l'article)
            ((NbMots()>=4)&&(Mot(1)=='le'or'la'or'les'or'lui'or'leur')&&(Mot(2)=='a//'or'au'or'aux'or'de'or'du'or'des'or'dans'or'sur')) ) ! "donne le aux moutons" devient "donne-le aux moutons"
    {
        LTI_Insert(PositionMot(1), '-');
        print "[Mettez toujours un trait d'union entre le pronom et le verbe à l'impératif !]^";
    }
    if ((NbMots()==3)&&(Mot(1)=='le'or'la'or'les'or'-le'or'-la'or'-les')&&(Mot(2)=='lui'or'leur')) { ! "donne le lui" ou "donne-le lui" devient "donne-le-lui"
        if (Mot(1)=='le'or'la'or'les') LTI_Insert(PositionMot(1), '-');
        LTI_Insert(PositionMot(2), '-');
        print "[Mettez toujours un trait d'union entre chaque pronom et le verbe à l'impératif !]^";
    }

    ! remplacer "toi/vous/nous" en 2e position par "vous"
    if ((Mot(1) == 'moi' or 'toi' or 'nous')) !*! pas sûr encore, sert à gérer "réveillons nous" -> "réveillons vous"
    {
        EcraseMot(1); !*! fiable mais le buffer est agrandi de 3 ou 4 caractères : pas grave ?
        LTI_Insert(PositionMot(1)  , 'v');
        LTI_Insert(PositionMot(1)+1, 'o');
        LTI_Insert(PositionMot(1)+2, 'u');
        LTI_Insert(PositionMot(1)+3, 's');
    }

    Tokenise__(buffer,parse);

    enleve_accents(); !*! déjà fait plus haut ? on ne sait jamais avec enleve_tirets() !*! rendre la suppression des accents systématique ? (dictionnaire ou pas)

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


-) instead of "Translation" in "Language.i6t".

Include (-
Constant LanguageAnimateGender   = male;
Constant LanguageInanimateGender = male;

Constant LanguageContractionForms = 2;     ! French has two:
                                           ! 0 = starting with a consonant
                                           ! 1 = starting with a vowel
                                           !     or mute h
!*! ajouter d'autres voyelles (à accents) ?
[ LanguageContraction text;
    if (text->0 == 'a' or 'e' or 'é' or 'è' or 'i' or 'o' or 'u' or 'h'
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

-) instead of "Articles" in "Language.i6t".

Include (-
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


[ LanguageVerbLikesAdverb w;
    if (w == 'look' or 'go' or 'push' or 'walk')
        rtrue;
    rfalse;
];

[ LanguageVerbMayBeName w;
    if (w == 'long' or 'short' or 'normal'
                    or 'brief' or 'full' or 'verbose')
        rtrue;
    rfalse;
];
-) instead of "Commands" in "Language.i6t".

Include (-
Constant NKEY__TX     = "S = suivant";
Constant PKEY__TX     = "P = précédent";
Constant QKEY1__TX    = "        Q = retour"; !huit espaces pour aligner à droite
Constant QKEY2__TX    = "Q = menu précédent";
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

Global CANTGO__TX   = "Vous ne pouvez pas aller dans cette direction.";
Global FORMER__TX   = "votre ancien vous";
Global YOURSELF__TX = "vous-même";

Constant YOU__TX        = "Vous";
Constant DARKNESS__TX = "L'obscurité";

Constant THOSET__TX   = "ces choses-là";
Constant THAT__TX     = "cela";
Constant OR__TX       = " ou ";
Constant NOTHING__TX  = "rien";

Global IS__TX       = "est ";   ! utilisés par WriteListFrom
Global ARE__TX      = "sont ";  ! 
Global IS2__TX      = "";  ! dans/sur lequel " est"  => contenant/supportant
Global ARE2__TX     = "";  ! dans/sur lequel " sont" => contenant/supportant
Global IS3__TX       = "est ";  
Global ARE3__TX      = "sont ";  ! 

Constant AND__TX        = " et ";
#ifdef I7_SERIAL_COMMA;
Constant LISTAND__TX   = ", et ";
Constant LISTAND2__TX  = " et ";
#ifnot;
Constant LISTAND__TX   = " et ";
Constant LISTAND2__TX  = " et ";
#endif; ! I7_SERIAL_COMMA
Constant WHOM__TX     = "";  ! dans/sur "lequel " est  => contenant/supportant
Constant WHICH__TX    = "";  ! dans/sur "lequel " est  => contenant/supportant
Constant COMMA__TX      = ", ";
-) instead of "Short Texts" in "Language.i6t".

Include (-

![ ThatorThose obj;   ! ex : vous n'allez pas manger ça (accusatif) (utile ?)
!  print "ça";
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
    if (obj == player) { print "Vous êtes"; return; }
    if (obj has pluralname) {
        if (obj has female) { print "Elles sont"; return; }
        else { print "Ils sont"; return; }
    }
    if (obj has female) { print "Elle est"; return; }
    else { print "Il est"; return; }
];

! Quelques fonctions additionnelles...
[ es obj; ! ex: fermé(es), ouvert(es)
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
    !*! test ci-dessous à effectuer avec @output_stream (ZCode) et avec PrintAnyToArray (Glulx) ?
    ! if ((the)obj="l'...") {print "de ", (the) obj; return;} ! ex : de l'avion
    print "du ", (name) obj; return; ! ex : du train, du Nautilus (le Nautilus ne doit donc pas être considéré comme proper !*!)
];
! (Stormi) Cette fonction permet d'afficher correctement "à la" "à l'" "au" ou "aux"
! selon le contexte.
[ to_the obj;
    if (obj has pluralname) {
        print "aux ", (name) obj;
    }
    else if (obj has proper) {
        print "à ", (name) obj;
    }
    else {
        ! Les lignes qui suivent sont copiées de la fonction PrefaceByArticle de parserm.h
        ! afin de connaître la valeur de LanguageContraction pour le nom affiché de l'objet
        ! Je suis le seul à trouver cela atrocement compliqué ?
#ifdef TARGET_ZCODE;
        StorageForShortName-->0 = 160;
        @output_stream 3 StorageForShortName;
        print (PSN__) noun;
        @output_stream -3;
        if (obj has male && LanguageContraction(StorageForShortName + 2)==0) {
             print "au ", (name) obj;
        }
        else {
            print "à ", (the) obj;
        }
#ifnot; ! TARGET_GLULX;
		print "à quelqu'un : ", (name) obj;
#endif;
    }
];
[ nt obj; ! ex: semble(nt)
    if (obj has pluralname) print "nt";
    !*! attention :  paraît, paraissent (etc)
];
[ IsorAreNot obj;
    if (obj has pluralname || obj == player) print "ne sont pas";
                                        else print "n'est pas";
];
-) instead of "Printed Inflections" in "Language.i6t".

Include (-
! The standard messages are (will be) implemented in I7 source text, not here in
! I6 code. (for now)
[ LanguageLM n x1;
#ifdef NI_BUILD_COUNT; say__p = 1; #endif;
    Answer, Ask:    "Pas de réponse.";
!    Ask:      see Answer
    Attack:         "La violence n'est pas une solution ici.";
!    Blow:           "Vous ne pouvez pas utilement souffler dedans.";
    Burn:           "Cet acte dangereux ne mènerait pas à grand-chose.";
    Buy:            "Il n'y a rien à vendre, ici.";
    Climb:          "Je ne pense pas que l'on puisse arriver à grand-chose de cette manière.";
    Close: switch (n) {
        1:  "Vous ne pouvez pas fermer cela.";
        2:  print (ctheyreorthats) x1, " déjà fermé";
            if (x1 has female) "e.";
            ".";
        3:  "Vous fermez ", (the) x1, ".";
    }
   ! CommandsOff: switch (n) {
   !     1:  "[Enregistrement des commandes désactivé.]";
   !     #Ifdef TARGET_GLULX;
   !     2:  "[Enregistrement des commandes déjà désactivé.]";
   !     #Endif; ! TARGET_
   ! }
   ! CommandsOn: switch (n) {
   !     1:  "[Enregistrement des commandes activé.]";
   !     #Ifdef TARGET_GLULX;
   !     2:  "[Les commandes sont actuellement en train d'être rejouées.]";
   !     3:  "[Enregistrement des commandes déjà activé.]";
   !     4:  "[Echec d'enregistrement des commandes.]";
   !     #Endif; ! TARGET_
   ! }
   ! CommandsRead: switch (n) {
   !     1:  "[Rejouer les commandes.]";
   !     #Ifdef TARGET_GLULX;
   !     2:  "[Les commandes sont déjà en train d'être rejouées.]";
   !     3:  "[Rejouer les commandes a échoué.  L'enregistrement des commandes est activé.]";
   !     4:  "[Rejouer les commandes a échoué.]";
   !     5:  "[Rejouer les commandes achevé.]";
   !     #Endif; ! TARGET_
   ! }
   ! suite pb compil I7
    Consult:        "Vous ne trouvez rien d'intéressant dans ", (the) x1, ".";
!    CrierSansPrecision : "Vous criez ce qui vous passe par la tête.";
    Cut:            "Allons, ", (itorthem) x1, " couper ne mènerait pas à grand-chose.";
!    Dig:            "Creuser ne mènerait à rien ici.";
    Disrobe: switch (n) {
        1:  "Vous ne ", (itorthem) x1, " portez pas.";
        2:  "Vous enlevez ", (the) x1, ".";
    }
    Drink:          "Il n'y a rien de buvable ici.";
    Drop: switch (n) {
        1:  if (x1 has pluralname) print (The) x1, " sont ";
            else print (The) x1, " est ";
            "déjà ici.";
        2:  "Vous n'avez pas ça.";
        #ifdef NI_BUILD_COUNT;
        3:  print "(vous prenez d'abord en main ", (the) x1, ")^"; say__p = 0; return;
        #ifnot;
        3: "(vous prenez d'abord ", (the) x1, ")";
        #endif;
        4:  "D'accord."; ! ok
    }
    Eat: switch (n) {
        1:  print_ret (ctheyreorthats) x1,
            " non comestible",(s) x1,", selon toute évidence.";
        2:  "Vous mangez ", (the) x1, ". Pas mauvais.";
    }
!    EmptyT: switch (n) {
!       1:  print_ret (The) x1, " ne peut rien contenir."; ! TODO risque de poser pb si pluriel ?
 !       2:  print_ret (The) x1, " ", (isorare) x1, " fermé",(es) x1,".";
 !       3:  print_ret (The) x1, " ", (isorare) x1, " déjà vide",(s) x1,".";
 !       4:  "Ceci ne viderait rien.";
 !  }
 ! suite pb compil I7
  
    Enter: switch (n) {
        1:  print "Mais vous êtes déjà ";
            if (x1 has supporter) print "sur "; else print "dans ";
            print_ret (the) x1, ".";
        2:  print "Vous ne pouvez pas ";
            switch (verb_word) {
                'entrer':    "y entrer.";
                'asseoir':    "vous y asseoir.";
                'allonger':    "vous y allonger.";
                'coucher':    "vous y coucher.";
		'monter':    "y monter.";
                default:  "y aller."; ! plutôt que "y entrer." !*!
            }
        3:  "Vous ne pouvez entrer dans ", (the) x1, " fermé",(es) x1,".";
        4:  print "Vous ne pouvez pas ";                  
            if (x1 has supporter) print "y monter";
                             else print "y entrer";
            " si ce n'est pas posé."; 
                        ! sur pieds, non encastré (freestanding)
        5:  print "Vous ";
            if (x1 has supporter) print "montez sur "; else print "entrez dans ";
            print_ret (the) x1, ".";
 #ifdef NI_BUILD_COUNT;
        6:  print "(";
            if (x1 has supporter) print "descendant "; else print "sortant ";
            print (DeDuDes) x1; print ")^"; say__p = 0; return;
        7:  say__p = 0;
            if (x1 has supporter) "(montant sur ", (the) x1, ")^";
            if (x1 has container) "(entrant dans ", (the) x1, ")^";
            "(entrant dans ", (the) x1, ")^";
        #ifnot; ! NI_BUILD_COUNT
        6:  print "(";
            if (x1 has supporter) print "descendant "; else print "sortant ";
            print (DeDuDes) x1; ")";
        7:  if (x1 has supporter) "(montant sur ", (the) x1, ")^";
            if (x1 has container) "(entrant dans ", (the) x1, ")^";
            "(entrant dans ", (the) x1, ")^";   #endif; ! NI_BUILD_COUNT
    }
    Examine: switch (n) {
        1:  "Vous ne pouvez rien voir.";
        2:  "Rien de particulier concernant ", (the) x1, ".";
        3:  print (The) x1, " ", (isorare) x1, " actuellement ";
            if (x1 has on) "allumé",(es) x1,"."; else "éteint",(es) x1,".";
    }
    Exit: switch (n) {
        1:  "Sortir d'où ?!";
        2:  print "Vous ne pouvez pas sortir ";
            print_ret (dedudes) x1, " fermé", (es) x1, ".";
        3:  print "Vous ";
            if (x1 has supporter) print "descendez "; else print "sortez ";
            print_ret (dedudes) x1, ".";
        4:  print "Mais vous n'êtes pas ";
            if (x1 has supporter) print "sur "; else print "dans ";
            print_ret (the) x1, ".";
    }
!    Fill:           "Mais il n'y a pas d'eau à porter ici.";
!    FullScore: switch(n) {   
!        1:  if (deadflag) print "Le score était ";
!            else          print "Le score est ";
!            "composé comme suit :^";
!        2:  "trouver divers objets";
!        3:  "visiter différents endroits";
!        4:  print "total (sur ", MAX_SCORE; ")";
!    }
 ! suite pb compil I7
    GetOff:         "Mais vous n'êtes pas sur ", (the) x1, " en ce moment.";
    Give: switch (n) {
        1:  "Vous n'avez pas en main ", (the) x1, ".";
        2:  "Vous jonglez avec ", (the) x1,
            " pendant un moment, mais vous n'arrivez pas à grand-chose.";
        3:  print (The) x1;
            if (x1 has pluralname)
                print " n'ont pas l'air intéressé";
            else print " n'a pas l'air intéressé";
            ".";
    }
    Go: switch (n) {
        1:  print "Vous devez d'abord ";
            if (x1 has supporter) print "descendre "; else print "sortir ";
            print_ret (dedudes) x1, ".";
        2:  "Vous ne pouvez pas aller par là.";
        3:  "Vous êtes incapable de gravir ", (the) x1, ".";
        4:  "Vous êtes incapable de descendre par ", (the) x1, ".";
        5:  "Vous ne pouvez pas, puisque ", (the) x1, " ", (isorare) x1,
            " sur votre chemin.";
        6:  print "Vous ne pouvez pas, puisque ", (the) x1;
            if (x1 has pluralname) " ne mènent nulle part.";
            " ne mène nulle part.";
    }
    Insert: switch (n) {
        1: "Vous devez avoir en main ", (the) x1,
            " avant de pouvoir ", (itorthem) x1,
            " mettre dans autre chose.";
        2:  if (x1 has pluralname) 
            print_ret (The) x1, " ne peuvent pas contenir d'objet.";
            else  
            print_ret (The) x1, " ne peut pas contenir d'objet.";
        3:  print_ret (The) x1, " ", (isorare) x1, " fermé",(es) x1,".";
        4:  "Vous avez besoin de ", (itorthem) x1, " prendre d'abord.";
        5:  "Vous ne pouvez pas mettre un objet à l'intérieur de lui-même.";
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
   ! JumpOver:  "Vous n'arriverez à rien comme ça.";
    Tie:  "Vous n'arriverez à rien comme ça.";
    Kiss:           "Concentrez-vous sur le jeu.";
    Listen:         "Vous n'entendez rien de particulier.";
    ListMiscellany: switch (n) {
         1: print " (allumé",(es) x1,")";
		#ifdef NI_BUILD_COUNT;
		2: print " (fermé",(es) x1,")";
		4: print " (vide",(s) x1,")";
		6: print " (fermé",(es) x1," et vide",(s) x1,")";
		#ifnot; ! NI_BUILD_COUNT
		2: print " (qui ", (isorare) x1, " fermé",(es) x1,")";
		4: print " (qui ", (isorare) x1, " vide",(s) x1,")";
		6: print " (qui ", (isorare) x1, " fermé",(es) x1," et vide",(s) x1,")";
		#endif; ! NI_BUILD_COUNT
		3: print " (fermé",(es) x1," et allumé",(es) x1,")";
		5: print " (vide",(s) x1," et allumé",(es) x1,")";
		7: print " (fermé",(es) x1,", vide",(s) x1," et allumé",(es) x1,")";
         8: print " (allumé",(es) x1," et porté",(es) x1;
         9: print " (allumé",(es) x1;
        10: print " (porté",(es) x1;
        11: print " (qui ", (isorare) x1, " ";
        12: print "ouvert",(es) x1;
        13: print "ouvert",(es) x1," mais vide",(s) x1;
        14: print "fermé",(es) x1;
        15: print "fermé",(es) x1," et verrouillé",(es) x1;
        16: print " et vide",(s) x1;
        17: print " (qui ", (isorare) x1, " vide",(s) x1,")";
        18: print " contenant ";
        19: print " (supportant "; ! " (sur ";
        20: print " supportant ";  ! " sur "; 
        21: print " (contenant ";  ! " (dans ";
        22: print " contenant ";   ! " dans ";
    }
    LMode1:         " est passé en mode description normale ; seuls les lieux 
                      visités pour la première fois sont décrits en détail.";
    LMode2:         " est passé en mode description longue ; tous les lieux,
                      même déjà visités, sont décrits en détail.";
    LMode3:         " est passé en mode description courte ; tous les lieux,
                      même non visités, sont décrits brièvement.";
    Lock: switch (n) {
        1:  "Vous ne pouvez pas verrouiller cela.";
        2:  print_ret (ctheyreorthats) x1, " verrouillé en ce moment.";
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
        2:  "Vous ne trouvez rien d'intéressant.";
    }
    Mild:           "Assez.";
    Miscellany: switch (n) {
        1:  "(affichage des seize premiers)^";
        2:  "Rien à faire !";
        3:  print " Vous êtes mort ";
        4:  print " Vous avez gagné ";
        5:  print "^Voulez-vous RECOMMENCER, CHARGER une partie sauvegardée";
            #IFDEF DEATH_MENTION_UNDO;
            print ", ANNULER votre dernière action";
            #ENDIF;
            if (TASKS_PROVIDED==0)
                print ", obtenir le score détaillé pour cette partie (FULLSCORE)";
            if (deadflag==2 && AMUSING_PROVIDED==0)
                print ", lire quelques suggestions amusantes (AMUSING)";
            " ou quitter (QUITTER) ?"; !*!
        6:  "[Votre interpréteur ne permet pas d' ~annuler~. Désolé !]";
        #Ifdef TARGET_ZCODE;
        7:  "~Annuler~ a échoué.  [Tous les interpréteurs ne le permettent pas.]";
        #Ifnot; ! TARGET_GLULX
        7:  "[Vous ne pouvez pas ~Annuler~ plus loin.]";
        #Endif; ! TARGET_
        8:  "Faites un choix parmi les propositions ci-dessus.";
        9:  "^Vous êtes à présent plongé dans l'obscurité !";
        10: "Je vous demande pardon ?";
        11: "[Vous ne pouvez pas annuler alors que rien n'a encore été fait !]";
        12: "[Impossible d'annuler deux fois de suite. Désolé !]";
        13: "[Action précédente annulée.]";
        14: "Désolé, impossible de corriger.";
        15: "N'y pensez même pas."; !*! "Think nothing of it."; !*!
        16: "~Oops~ ne peut corriger qu'un seul mot.";
        17: "Il fait noir, et vous ne pouvez rien voir.";
        18: print "vous-même";
        19: "Aussi beau que d'habitude.";
        20: "Pour répéter une commande comme ~grenouille, saute~, dîtes seulement
            ~encore~, et pas ~grenouille, encore~.";
        21: "Vous pouvez difficilement répéter cela.";
        22: "Vous ne pouvez pas commencer par une virgule.";
        23: "Vous semblez vouloir parler à quelqu'un, mais je ne vois pas à qui.";
        24: "Vous ne pouvez pas discuter avec ", (the) x1, ".";
            ! "parler à" serait mieux mais délicat (ex: à l'oiseau)
        25: "Pour parler à quelqu'un, essayez ~quelqu'un, bonjour~ ou quelque chose dans le genre.";
       !  26: "(vous prenez d'abord ", (the) not_holding, ")";
        26: "(vous prenez d'abord cela.)";
        27: "Je ne comprends pas cette phrase.";
        28: print "Merci de reformuler. Je n'ai compris que : ";
        29: "Je n'ai pas compris ce nombre.";
        30: "Vous ne voyez rien de tel, à moins que cela ne soit sans grande importance.";
        31: "Vous semblez en avoir dit trop peu !";
        32: "Vous ne l'avez pas dans vos mains !";
        33: "Vous ne pouvez pas employer le mot ~tout~ (ou une liste) avec ce verbe.";
        34: "Vous ne pouvez utiliser le mot ~tout~ (ou une liste) qu'une fois par ligne.";
        35: "Je ne suis pas sûr de ce à quoi ~", (address) pronoun_word,
            "~ se réfère.";
        36: "Vous avez exclu quelque chose qui n'était de toute façon pas compris dans la liste !";
        37: "Vous ne pouvez agir ainsi qu'avec une chose animée.";
        38: "Je ne connais pas ce verbe.";
        39: "Ce n'est pas une chose à laquelle vous aurez à vous référer
            au cours du jeu.";
        40: "Vous ne pouvez voir ~", (address) pronoun_word,
            "~ (", (the) pronoun_obj, ") pour l'instant.";
        41: "Impossible de comprendre la fin de la phrase.";
        42: if (x1==0) print "Aucun de disponible.";
            else print "Il en reste seulement ", (number) x1, ".";
        43: "Rien à faire !";
        44: "Rien n'est disponible !";
        45: print "Précisez : "; !*!
        46: print "Précisez : "; !*!
        47: "Désolé, vous pouvez seulement avoir un objet ici. Lequel voulez-vous exactement ?";
        48: print "Pouvez-vous préciser qui est concerné par cette action ?^"; !*!
        49: print "Pouvez-vous préciser le nom de l'objet à utiliser ?^"; !*!
        50: print "Votre score vient ";
            if (x1 > 0) print "d'augmenter"; else { x1 = -x1; print "de diminuer"; }
            print " de ", (number) x1, " point";
            if (x1 > 1) print "s";
        51: "(Comme quelque chose de dramatique vient de se produire,
            votre liste de commandes a été raccourcie.)";
        52: "^Tapez un nombre entre 1 et ", x1,
            ", 0 pour réafficher ou appuyez sur ENTREE.^";
        53: "^[Appuyez sur ESPACE.]"; !*! SVP
        54: "[Commentaire enregistré.]";
        55: "[Commentaire NON enregistré.]";
        56: print ".^";
        57: print "?^";
        ! TODO le reste
        58: print (The) actor, " ", (IsOrAre) actor, " incapable de faire cela.^";
		59:	"You must supply a noun.";
		60:	"You may not supply a noun.";
		61:	"You must name an object.";
		62:	"You may not name an object.";
		63:	"You must name a second object.";
		64:	"You may not name a second object.";
		65:	"You must supply a second noun.";
		66:	"You may not supply a second noun.";
		67:	"You must name something more substantial.";
		68:	print "(", (The) actor, " prenant d'abord ", (the) x1, ")^";
        69: "(prenand d'abord ", (the) x1, ")";
        70: "L'utilisation de UNDO n'est pas autorisée dans ce jeu.";
        71: print (string) DARKNESS__TX;
  		72: print (The) x1;
            if (x1 has pluralname) print " have"; else print " has";
            " better things to do.";
        73: "That noun did not make sense in this context.";
    }
    Yes, No:        "Mmmh ?";
    NotifyOff:      "Notification du score désactivée.";
    NotifyOn:       "Notification du score activée.";
!    Objects: switch(n) {
!        1:  "Objets ayant été portés :^";
 !       2:  "Aucun.";
!        3:  print "   (sur le corps)";
!        4:  print "   (dans l'inventaire)";
!        5:  print "   (abandonné",(es) x1,")";
!        6:  print "   (", (name) x1, ")";
!        7:  print "   (dans ", (the) x1, ")";
!        8:  print "   (dans ", (the) x1, ")";
!        9:  print "   (sur ", (the) x1, ")";
!        10: print "   (perdu",(es) x1,")";
 !   }
 ! suite pb compil I7
    Open: switch (n) {
!        1: "Vous ne pouvez pas ouvrir cela.";
        1:  print_ret "Vous ne pouvez pas ouvrir ", (the) x1,".";
        2:  print_ret (cthatorthose) x1," semble",(nt) x1,
            " être fermé",(es) x1," à clé.";
        3:  print (ctheyreorthats) x1, " déjà ouvert";
            if (x1 has female) "e.";
            ".";
        4:  print "Vous ouvrez ", (the) x1, ", révélant ";
            if (WriteListFrom(child(x1),
                ENGLISH_BIT + TERSE_BIT + CONCEAL_BIT)==0) "rien du tout.";
            ".";
        5:  "Vous ouvrez ", (the) x1, ".";
    }
 !   Order:  print (The) x1;
 !           if (x1 has pluralname) 
 !               print " ont"; else print " a";
 !               " mieux à faire.";
  !  suite pb compil I7
  !  ParlerIncorrect : "Soyez plus précis dans votre communication, ou reformulez.";
  !  ParlerSansPrecision :   if (noun==player) "Vous ne savez pas quoi vous dire que vous ne sachiez déjà.";
   !                         else "Pas de réponse.";
  !  Places: switch (n) {
  !      1:  print "Vous avez visité : ";
  !      2:  print ".^";
  !  }
!    Pray:   "Rien de concret ne résulte de votre prière.";
 !   Prompt:   print "^>";
 ! I7
    Pronouns: switch (n) {
        1:  print "En ce moment, ";
        2:  print "signifie ";
        3:  print "n'est pas défini";
        4:  "aucun pronom n'est connu du jeu.";
        5:  ".";
    }
    Pull,Push,Turn: switch (n) {
        1:  "C'est fixé sur place.";
        2:  "Vous en êtes incapable.";
        3:  "Rien d'évident ne se produit.";
        4:  "Cela serait moins que courtois.";
        ! TODO
        5:	print (The) actor, " pulls ", (the) x1, ".^";
		6:	print (The) actor, " pushes ", (the) x1, ".^";
		7:	print (The) actor, " turns ", (the) x1, ".^";
    }
! Push: see Pull
    PushDir: switch (n) {
        1:  "Vous ne pouvez donc rien imaginer de mieux ?";
        2:  "Ce n'est pas une direction.";
        3:  "Vous ne pouvez pas dans cette direction.";
    }
    PutOn: switch (n) {
        1: "Vous devez avoir en main ", (the) x1,
            " avant de pouvoir ", (itorthem) x1,
            " mettre sur quelque chose d'autre.";
        2:  "Vous ne pouvez pas poser un objet sur lui-même.";
        3:  "Poser des objets sur ", (the) x1, " ne mènerait à rien.";
        4:  "Vous manquez de dextérité.";
        5:  "(", (itorthem) x1, " prenant d'abord)^";
        6:  "Il n'y a plus assez de place sur ", (the) x1, ".";
        7:  "C'est fait.";
        8:  "Vous mettez ", (the) x1, " sur ", (the) second, ".";
        ! TODO
        9:  print (The) actor, " puts ", (the) x1, " on ", (the) second, ".^";
    }
    Quit: switch (n) {
        1:  print "Répondez par oui ou par non, je vous prie.";
        2:  print "Êtes-vous sûr de vouloir quitter ? (O/N) ";
    }
    Remove: switch (n) {
        1:  if (x1 has pluralname)
                print "Ils sont malheureusement fermés."; !*! elle(s)
                else print "Il est malheureusement fermé."; !*!
        2:  if (x1 has pluralname)
                print "Mais ils ne sont pas";
            else print "Mais ce n'est pas";
            " ici maintenant.";
        3:  "D'accord."; ! Ok
    }
    Restart: switch (n) {
        1: print "Êtes-vous sûr de vouloir recommencer ? (O/N) ";
        2: "Raté.";
    }
    Restore: switch (n) {
        1: "Échec du chargement.";
        2: "^--- La partie a bien été restaurée ---^"; ! ok.
    }
    Rub:            "Vous n'arrivez à rien comme ça.";
    Save: switch (n) {
        1: "La sauvegarde a échoué.";
        2: "^--- La partie a bien été sauvegardée ---^"; ! ok.
    }
    Score: switch (n) {
        1:  if (deadflag) print "Dans cette partie vous avez obtenu "; else print "Vous avez jusqu'à présent obtenu ";
            print score, " sur un score possible de ", MAX_SCORE, ", en ", turns, " tour";
            if (turns ~= 1) print "s";
            return;
        2:  "Il n'y a pas de score dans cette histoire.";
         ! TODO
         3:	print ", earning you the rank of ";
    }
    ScriptOff: switch (n) {
        1:  "Aucune transcription en cours.";
        2:  "^Fin de transcription.";
        3:  "Impossible de terminer la transcription.";
    }
    ScriptOn: switch (n) {
        1:  "Transcription déjà en cours.";
        2:  "Début d'une transcription de...";
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
            else "Vous ne trouvez rien d'intéressant.";
        5:  "Vous ne pouvez pas voir à l'intérieur, puisque ", (the) x1, " ",
            (isorare) x1, " fermé",(es) x1,".";
        6:  print_ret (The) x1, " ", (isorare) x1, " vide",(s) x1,".";
        7:  print (The) x1;
            if (x1 has pluralname) print " contiennent ";
            else print " contient ";
            WriteListFrom(child(x1),
                TERSE_BIT + ENGLISH_BIT + CONCEAL_BIT);
            ".";
    }
  !  Set:            "Non, vous ne pouvez pas ", (itorthem) x1, " régler.";
    SetTo:          "Non, vous ne pouvez pas ", (itorthem) x1, " régler sur rien.";
    Show: switch (n) {
        1:  "Vous n'avez pas ", (the) x1, ".";
        2:  print_ret (The) x1, " ", (isorare) x1, " peu impressionné",(es) x1,".";
    }
    Sing:           "Vous chantez un morceau de la première chanson qui vous vient à l'esprit.";
    Sleep:          "Vous n'avez pas particulièrement sommeil.";
    Smell:          "Vous ne sentez rien de particulier.";
    Sorry:          "Pas grave.";
    Squeeze: switch (n) {
        1:  "Surveillez vos mains.";
        2:  "Vous n'arrivez à rien ainsi.";
    }
    Strong:         "Les vrais aventuriers n'emploient pas un tel langage.";
#Ifndef NI_BUILD_COUNT;
!  Swim:           "Il n'y a pas assez d'eau pour nager dedans.";  ! swim desactive par defaut dans I7
#endif; ! NI_BUILD_COUNT
    Swing:          "Il n'y a rien de sensé pour se balancer ici.";
    SwitchOff: switch (n) {
        1:  "Vous ne pouvez pas allumer ou éteindre cela.";
        2:  print_ret (ctheyreorthats) x1,
            " déjà éteint",(es) x1,".";
        3:  "Vous éteignez ", (the) x1, ".";
    }
    SwitchOn: switch (n) {
        1:  "Vous ne pouvez pas allumer cela.";
        2:  print_ret (ctheyreorthats) x1,
            " déjà allumé",(es) x1,".";
        3:  "Vous allumez ", (the) x1, ".";
    }
    Take:    switch(n) {
        1:  "D'accord."; ! ok.
        2:  "Vous vous possédez vous-même. Voilà une problématique relevant de la physique quantique.";
        3:  "Cela ne semble pas être une bonne idée.";
        4:  print "Vous devez d'abord ";
            if (x1 has supporter) print "descendre "; else print "sortir ";
            print_ret (dedudes) x1, ".";
        5:  "Vous l'avez déjà.";
        6:  "Cela semble appartenir ", (to_the) x1, ".";
        7:  if (noun has pluralname) print "Cela semble ";
            else print "Cela semble ";
            "faire partie ", (dedudes) x1, ".";
        8:  print_ret (Cthatorthose) x1, " ", (isorarenot) x1,
            " disponible", (s) x1, ".";
        9:  print_ret (The) x1, " ", (isorarenot) x1, " ouvert",(es) x1,".";
        10: "Trop difficile à transporter.";
        11: "C'est fixé sur place.";
        12: "Vous transportez déjà trop d'objets.";
        13: "(vous mettez ", (the) x1, " dans ", (the) SACK_OBJECT,
            " pour faire de la place)";
    }
    Taste:          "Vous ne remarquez rien de particulier.";
    Tell: switch (n) {
        1:  "Vous discutez avec vous-même pendant un bon moment...";
        2:  "Pas de réaction.";
    }
    Think:          "Quelle bonne idée.";
    ThrowAt: switch (n) {
        1:  "Futile.";
        2:  "Vous hésitez au moment crucial.";
    }
!    Tie:  see JumpOver.
    Touch: switch (n) {
        1:  "Tenez vos mains tranquilles !";
        2:  "Vous ne sentez rien de particulier.";
        3:  "Si vous pensez que ça peut aider.";
    }
!    Turn: see Pull.
    Unlock:  switch (n) {
        1:  "Vous ne pouvez pas déverrouiller cela.";
        2:  print_ret (ctheyreorthats) x1,
            " déjà déverrouillé", (es) x1, ".";
        3:  "Cela ne rentre pas dans la serrure.";
        4:  "Vous déverrouillez ", (the) x1, ".";
    }
!    VagueDo: "Soyez plus précis."; 
!    VagueGo: "Vous devez donner la direction dans laquelle aller.";
!    VagueDig: "Vous devez indiquer ce que vous souhaitez creuser, et si nécessaire, avec quoi vous voulez le faire.";
!    VagueUse: "Veuillez indiquer un verbe plus précis.";
    Verify: switch (n) {
        1: "Le fichier semble intact.";
        2: "Le fichier est certainement corrompu !";
    }
    Wait:           "Le temps passe...";
    Wake:           "Il ne s'agit pas d'un rêve."; !plus neutre que la formule précédente
    WakeOther:      "Cela ne semble pas nécessaire.";
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
        3: "Vous ", (itorthem) x1, " portez déjà !";
        4: "Vous mettez ", (the) x1, ".";
    }
!    Yes:  see No.
];

-) instead of "Long Texts" in "Language.i6t".

Include (-
Constant LIBRARY_FRENCH;       ! for dependency checking.
-)

French ends here.


---- DOCUMENTATION ----

Inform 7 permet de changer facilement de système de langue comme c'était le cas auparavant avec Inform 6.

Pour utiliser les bibliothèques françaises, il faudrait inclure dans la source du jeu :

		Include French by Eric Forgeot. 
		[optional : Use French Language. : ceci existe pour utiliser des formes au passé etc., par exemple Use French 3PSP language pour la 3ème personne du singulier passé, mais n'est pas encore implémenté]

En ayant bien auparavant installé cette extension via la commande >Files>Install extensions d'Inform 7.



Bugs connus :

- La définition de base du joueur n'est plus en français comme auparavant. Vous pouvez ajouter cette règle dans votre jeu pour corriger cela : Instead of examining player, say "Vous êtes comme à votre habitude.". (ou toute autre description à votre convenance).
- [probably deprecated : Certaines rares répliques restent en anglais. Tout implémenter, cela impliquait de remplacer tous ces fichiers dans les définitions livrées avec Inform, juste pour traduire parfois une ou deux phrases, et refaire cela à chaque mise à jour d'inform : Actions.i6  ChooseObjects.i6  Lists.i6  Main.i6  Printing.i6  Relations.i6  Tables.i6  Time.i6  Verbs.i6]
- Tous les verbes français n'ont pas encore été adapté en Inform 7, ce qui veut dire que si vous voulez en remplacer la définition dans votre jeu, cela produira un bug. Cette adaptation est en cours, pour le moment vous pouvez quand même redéfinir dans votre jeu des verbes comme "descendre", "attaquer", "boire", "manger", "fouiller". Vous pouvez bien entendu utiliser tous les autres verbes non adaptés, mais il ne sera pas possible de modifier leur définition de base pour le moment. (c'est à dire le contexte dans lequel ils seront appelés par le joueur)

Note :
[ may be deprecated :
Pour utiliser Inform 7 uniquement en ligne de commande, on peut invoquer le compilateur ni avec :
                ./ni -rules ./Inform7/Extensions -package ./Projects/project.inform -extension=z8
                et le compilateur inform avec :
                ./inform-6.31-biplatform -v8 +language_name=French -wSD +include_path=Projects/project.inform/Build/auto.info project.z8
                ]

        
Merci à Sarganar et à l'équipe de Rakontointeraktiva pour l'effort commun de nos traductions en différentes langues.
All hails to Sarganar and the Spanish translation team! (http://www.caad.es/informate/infsp/).


Eric Forgeot - http://ifiction.free.fr - http://informfr.tuxfamily.org/

        
Example: * Petit Père Noël - Un très court exemple de jeu en français.

	*: "Petit Père Noël" by Otto Grimwald. 
	
	Include French by Eric Forgeot.
	
	Part 1 - Les lieux 
	
	Hotte is a player's holdall. The player is wearing hotte. Hotte is female. The printed name of hotte is "la hotte".

	SurLeToit is a room. The printed name of SurLeToit is "Sur le toit". "Après avoir effectué votre travail sur l'ensemble des bâtisses de cette petite ville provinciale, vous vous trouvez enfin sur le toit de la dernière des maisons à visiter. Quel travail..."

	East of Jardin is Jardin2. Above is SurLeToit. 

	The cheminée is in SurLeToit. Cheminée is a container. Cheminée is female and fixed in place. Understand "cheminee" as cheminée. The description of cheminée is "Les cheminées, ça vous les connaissez !" 

	Instead of inserting something into Cheminée, say "Vous ne pouvez pas, il y a encore du feu là dedans, et cela détruirait ce que vous voulez y mettre.".

	When play begins:
                move hotte to player;
                move cadeau to hotte;
                move carte to hotte.

	Part 2 - Les objets 
	
	The cadeau is a thing. Understand "paquet" or "cadeau" as cadeau.

	The carte is a female thing. Understand "carte" or "cartes" as carte. The printed name of carte is "carte de visite". The description of carte is "Un paquet de cartes de visite à votre effigie que vous laissez généralement avec les cadeaux que vous livrez.".

	Instead of giving carte to gnome:
        say "Il prend la carte, et sursaute aussitôt.";
        say "Après avoir fait une petite révérence, il dépose sur le sol une clé, et se dirige vers la porte de la maison.";
        move gnome to jardin;
        move GnomeCle to location of the player.

	Instead of giving cadeau to gnome, say "Il n'est veut pas, et il ne semble pas aimer ce genre de chose. ".

	Jardin is a room. The printed name of Jardin is "Un beau jardin". "Ce petit jardin propret vous fait penser au vôtre. Sans doute qu'il y a là quelques gnomes agiles qui viennent l'entretenir. Il continue à s'étendre, sur votre droite, à l'est. La maison se trouve au sud."

	The PorteMaison is a door. It is south of Jardin and north of Salon. Salon is inside from Jardin. PorteMaison is female, locked and closed. The matching key of the PorteMaison is the GnomeCle. The printed name of PorteMaison is "porte d'entrée". The description of PorteMaison is "La porte de la maison est en acier qui semble épais." 
	Understand "portail/porte/seuil/entree" as PorteMaison.

	GnomeCle is a thing. The printed name of GnomeCle is "clef". Understand "clé/clef/cle" as gnomecle.

	Instead of going to salon when the player is in Jardin: 
        if PorteMaison is not locked
                begin;
                        say "Vous pouvez enfin entrer et livrer votre paquet directement dans la maison. Félicitation.";
                        End the game in victory;
                Otherwise;
                        say "La porte est verrouillée.";
        end if.
                

	Instead of examining Jardin for the second time, say "Vous êtes dans le jardin, tout près de la maison. Vous pouvez remonter sur le toit depuis ici."

	Jardin2 is a room. The printed name of Jardin2 is "Le bout du jardin". "Vous êtes près de la limite de la propriété. Au delà s'étendent les autres jardins du voisinage."
              
	The gnome is in jardin2.
	The gnome is a man. Understand "gnome/troll/créature/lutin" or "petit gnome" as Gnome. The description of Gnome is "C'est un lutin à l'air espiègle. Vous vous demandez si ce n'est pas lui qui garde la maison en l'absence de ses propriétaires.".
                
	Instead of pushing or pulling or attacking the PorteMaison for the first time:
         say "Vous frapper vigoureusement à la porte, manquant de la faire céder sous vos coups. Mais on dirait qu'il n'y a personne pour répondre.".
        
	Instead of pushing or pulling or attacking the door for the second time, say "Voudriez-vous vous reconvertir dans le braquage ? Qu'en penserait votre femme ?"

	Instead of pushing or pulling or attacking the door for the third time:
        say "Vous voyez une voiture de police qui passe par là. Des policiers vous arrêtent et vous mettent directement en prison.";
        end the game in death.

	Understand "parler avec [someone]" as a mistake ("Le gnome ne comprend pas votre langue.").

	Test me with "lire la carte / examiner la carte / mettre le cadeau dans la cheminée / poser la hotte / mettre la hotte / enlever la hotte / descendre / frapper à la porte / aller à droite / regarder le gnome / donner le cadeau au gnome / parler avec le gnome / donner la carte au gnome / prendre la cle /  ouest / ouvrir la porte avec la clé  "

