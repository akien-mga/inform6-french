! =====================================================================
! Multilingual Inform Library Switch
! =====================================================================
!        Author: 
!       Version: 
!      Released: 
! Serial Number: 
! Based on INFSP (Spanish library)



! Constant ForeignLanguage is defined in SL extension


 #ifdef ForeignLanguage;
        #ifdef French;
		Message "Inclus le français, seconde personne du pluriel au présent.";
                Include "FrenchN11";
        #endif;
        #ifdef FrenchN11_3PSP;
		Message "Inclus le français, troisième personne du singulier au passé.";
                Include "FrenchN11_3PSP";
        #endif;
        #ifdef Spanish;
                Include "Spanish";
        #endif;
        #ifdef Italian;
                Include "Italian";
        #endif;
 #ifnot;
  		Include "English";
 #endif;

