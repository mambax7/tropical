<?php
include("../lang/eng/main.inc"); // <-- do not delete
/********************************************************
	lang/hu/main.inc
	(C)2001-2002 Ryo Chijiiwa <Ryo@IlohaMail.org>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html

********************************************************/

function formatStatusString($num, $folder, $type){
	$str="";
	if ($type=="delete"){
		$str = "$num �zenet(ek) t�rl�se".($num>1?"s":"");
	}else if ($type == "move"){
		$str = "$num �zenet �thelyez�se".($num>1?"s":"")." to $folder";
	}
	
	return $str;
}

$mainStrings[0] = "L�that� %p / %n";
$mainStrings[1] = " �zenet tal�lhat�";
$mainStrings[2] = "El�z�";
$mainStrings[3] = " �zenetek";
$mainStrings[4] = "K�vetkez�";
$mainStrings[5] = " �zenetek";
$mainStrings[6] = "T�ma";
$mainStrings[7] = "C�mzett";
$mainStrings[8] = "Felad�";
$mainStrings[9] = "D�tum ";
$mainStrings[10] = "T�rl�s";
$mainStrings[11] = "Szemetes t�rl�se";
$mainStrings[12] = "�zenet �thelyez�se";
$mainStrings[13] = "Keres�s";
$mainStrings[14] = "M�ret";
$mainStrings[15] = "Cimtelen";
$mainStrings[16] = "Megmutat";
$mainStrings[17] = "�jra megn�z ";
$mainStrings[18] = "Mindent t�r�l";
$mainStrings[19] = "M�gse";
$mainStrings[20] = "Megjel�l mint %b";
$mainStrings[21] = "Olvasott";
$mainStrings[22] = "Olvasatlan";
$mainStrings[23] = "Kiv�laszt...";


$mainErrors[0] = "Ebben a mapp�ban nem tal�lhat� �zenet";
$mainErrors[1] = "Ebben a mapp�ban nincs �zenet";
$mainErrors[2] = "Nem lehetet az �zenetet t�r�lni.";
$mainErrors[3] = "Nem lehetet az �znetetet megjel�lni.";
$mainErrors[4] = "Nem lehetett az �zenetet �thelyezni .";
$mainErrors[5] = "A szemetes nem lett kijel�lve.";
$mainErrors[6] = "A szemetest nem lehetett �riteni";
$mainErrors[7] = "Biztos abban, hogy minden �zenetet t�r�lni k�v�n a(z) %f mapp�b�l ?";
$mainErrors[8] = "Az oszlop mozgat�s�hoz kattints a fejl�cn�l tal�lhat� ny�lra.<br>Ha k�sz vagy, egyszer�en z�rd be az ablakot.";



?>