! =====================================================================
! Multilingual Inform Library Switch
! =====================================================================
!        Author: 
!       Version: 
!      Released: 
! Serial Number: 
! Based on INFSP (Spanish library)



! Constant ForeignLanguage is defined in SL extension


�#ifdef ForeignLanguage;
� � � � #ifdef French;
		Message "Inclus le fran�ais, seconde personne du pluriel au pr�sent.";
� � � � � � � � Include "FrenchN11";
� � � � #endif;
� � � � #ifdef FrenchN11_3PSP;
		Message "Inclus le fran�ais, troisi�me personne du singulier au pass�.";
� � � � � � � � Include "FrenchN11_3PSP";
� � � � #endif;
� � � � #ifdef Spanish;
� � � � � � � � Include "Spanish";
� � � � #endif;
� � � � #ifdef Italian;
� � � � � � � � Include "Italian";
� � � � #endif;
�#ifnot;
� 		Include "English";
�#endif;

