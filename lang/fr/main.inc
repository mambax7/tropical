<?php
include("../lang/eng/main.inc"); // <-- do not delete
/********************************************************
	lang/fr/main.inc
	(C) 1999-2002 Ryo Chijiiwa <Ryo@IlohaMail.org>

	This file is part of IlohaMail, and released under GPL.
 	See COPYING, or http://www.fsf.org/copyleft/gpl.html

********************************************************/

$mainMessages["delete"] = "%n message(s) supprim�(s)";
$mainMessages["move"] = "%n message(s) transf�r�(s) dans %f";

function formatStatusString($num, $folder, $type){
	$str="";
	if ($type=="delete"){
		$str = "$num message(s) supprim�(s) ".($num>1?"":"");
	}else if ($type == "move"){
		$str = "$num message(s) transf�r�(s) ".($num>1?"":"")." dans $folder";
	}
	
	return $str;
}

$mainStrings[0] = "%p de %n affich�(s)";
$mainStrings[1] = " message(s) trouv�(s)";
$mainStrings[2] = "";
$mainStrings[3] = " mess. pr�c�dents ";
$mainStrings[4] = "";
$mainStrings[5] = " mess. suivants ";
$mainStrings[6] = "Sujet";
$mainStrings[7] = "�";
$mainStrings[8] = "Exp�diteur";
$mainStrings[9] = "Date";
$mainStrings[10] = "Supprimer";
$mainStrings[11] = "Vider la corbeille";
$mainStrings[12] = "Transf�rer";
$mainStrings[13] = "Recherche";
$mainStrings[14] = "Taille";
$mainStrings[15] = "Sans titre";
$mainStrings[16] = "Afficher";
$mainStrings[17] = "Relever le courrier";
$mainStrings[18] = "Supprimer tout";
$mainStrings[19] = "Annuler";
$mainStrings[20] = "Marquer %b";
$mainStrings[21] = "Lu";
$mainStrings[22] = "Non lu";
$mainStrings[23] = "Selectionner...";
$mainStrings[24] = "Appliquer le filtre";
$mainStrings[25] = "Marquer";
$mainStrings[26] = "Important";

$mainErrors[0] = "Aucun message n'a �t� trouv� dans ce dossier.";
$mainErrors[1] = "Aucun message dans ce dossier";
$mainErrors[2] = "Impossible de mettre ce message dans la corbeille.";
$mainErrors[3] = "Impossible de changer le statut des messages � supprimer.";
$mainErrors[4] = "Impossible de d�placer les messages.";
$mainErrors[5] = "Le dossier corbeille n'a pas �t� sp�cifi�.";
$mainErrors[6] = "Impossible de vider la corbeille";
$mainErrors[7] = "Valider la suppression de TOUS les messages dans %f?  ";
$mainErrors[8] = "Cliquer sur les fl�ches sous les colonnes pour les d�placer. <br> L'op�ration termin�e, fermer simplement la fen�tre."; 
?>
