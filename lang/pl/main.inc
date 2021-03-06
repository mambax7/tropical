<?php
include("../lang/eng/main.inc"); // <-- do not delete
/********************************************************
	lang/pl/main.inc
	(C)2002 Marcin Piliszczuk <marti@net26.pl>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html

********************************************************/

function formatStatusString($num, $folder, $type){
	$str="";
	if ($type=="delete"){
		$str = "Usuni�to $num wiadomo�".($num>1?"ci":"�");
	}else if ($type == "move"){
		$str = "Przeniesiono $num wiadomo�".($num>1?"ci":"�")." do $folder";
	}
	
	return $str;
}

$mainStrings[0] = "Wy�wietlonych %p z %n wiadomo�ci";
$mainStrings[1] = " wiadomo�ci";
$mainStrings[2] = "Poprzednia";
$mainStrings[3] = " wiad.";
$mainStrings[4] = "Nast�pna";
$mainStrings[5] = " wiad.";
$mainStrings[6] = "Temat";
$mainStrings[7] = "Do";
$mainStrings[8] = "Od";
$mainStrings[9] = "Data";
$mainStrings[10] = "Usu�";
$mainStrings[11] = "Opr�nij kosz";
$mainStrings[12] = "Plik";
$mainStrings[13] = "Szukaj";
$mainStrings[14] = "Rozmiar";
$mainStrings[15] = "bez tytu�u";
$mainStrings[16] = "Poka�";
$mainStrings[17] = "Pobierz nowe";
$mainStrings[18] = "Usu� wszystkie";
$mainStrings[19] = "Anuluj";


$mainErrors[0] = "Brak wiadomo�ci w tym folderze";
$mainErrors[1] = "Brak wiadomo�ci.";
$mainErrors[2] = "Nie mo�na przenie�� wiadomo�ci do kosza.";
$mainErrors[3] = "Nie mo�na oznaczy� wiadomo�ci jako usuni�tych.";
$mainErrors[4] = "Nie mo�na przenie�� wiadomo�ci.";
$mainErrors[5] = "Nie okre�lono folderu dla kosza.";
$mainErrors[6] = "Nie mo�na opr�ni� kosza";
$mainErrors[7] = "Czy na pewno chcesz usun�� WSZYSTKIE wiadomo�ci w %f?";



?>