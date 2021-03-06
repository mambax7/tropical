<?php
/********************************************************
	lang/si/prefs.inc
	(C)2001-2002 Ryo Chijiiwa <Ryo@IlohaMail.org>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html

********************************************************/

//TRANSLATORS:  Uncomment next line for all non-English languages!!
include("../lang/eng/prefs.inc");

$prefHeaderStrings[0] = "Nastavitve";
$prefHeaderStrings[1] = "Glavno";
$prefHeaderStrings[3] = "Identitete";
$prefHeaderStrings[2] = "Prikaz";

											
$prefsStrings["0.0"] = "Privzeta identiteta";
$prefsStrings["0.1"] = "Ime: ";
$prefsStrings["0.2"] = "E-po�ta: ";
$prefsStrings["0.3"] = "Spremembe se lahko zgodijo na strani \"%s\".";
$prefsStrings["0.4"] = "Nedolo�eno";
$prefsStrings["1.0"] = "Mednarodno";
$prefsStrings["1.1"] = "Vmesnik: ";
$prefsStrings["1.2"] = "Nabor znakov: ";
$prefsStrings["1.3"] = "�asovna cona: ";
$prefsStrings["1.4"] = "�asovne nastavitve: ";
$prefsStrings["1.5"] = array(12=>"12 ur", 24=>"24 ur");
$prefsStrings["2.0"] = "Prikaz nastavitev pogleda";
$prefsStrings["2.1"] = "Poka�i vse do ";
$prefsStrings["2.2"] = " elementov";
$prefsStrings["2.3"] = "Prika�i velikost";
$prefsStrings["2.4"] = "Sortiraj po: ";
$prefsStrings["2.5"] = "";
$prefsStrings["2.6"] = "Vrstni red sortiranja: ";
$prefsStrings["2.7"] = "";
$prefsStrings["2.8"] = "Poka�i vsebino mape";
$prefsStrings["2.9"] = "Velikost seznama map";
$prefsStrings["2.10"] = "Vsakih %n sekund preveri za nova sporo�ila";
$prefsStrings["2.11"] = "Na %m prika�i orodno vrstico";
$prefsStrings["2.12"] = array("b"=>"dno", "t"=>"vrh", "bt"=>"dno in vrh");
$prefsStrings["2.13"] = "Ponastavi stolpce: ";
$prefsStrings["2.14"] = "kliknite tukaj";
$prefsStrings["3.0"] = "Samodejno shrani nastavitve";
$prefsStrings["3.1"] = "Shrani poslana sporo�ila.";
$prefsStrings["3.2"] = "Shrani poslana sporo�ila v mapo: ";
$prefsStrings["3.3"] = "";
$prefsStrings["3.4"] = "Samodejno izbri�i smeti";
$prefsStrings["3.5"] = "Premakni izbrane mape v imenik: ";
$prefsStrings["3.6"] = "";
$prefsStrings["3.7"] = "Za�etni imenik: ";
$prefsStrings["3.8"] = "Drugo";
$prefsStrings["3.9"] = "Skrij nepodpisane imenike";
$prefsStrings["3.10"] = "Poka�i citate %m";
$prefsStrings["3.11"] = array(""=>"ne poka�i", "m"=>"v seznamu sporo�il", "f"=>"v seznamu map");
$prefsStrings["4.0"] = "Nastavitve prikaza sporo�il";
$prefsStrings["4.1"] = "Prika�i v okvirjih";
$prefsStrings["4.2"] = "Barvaj citate";
$prefsStrings["4.3"] = "Vklop te nastavitve lahko upo�asni sistem.";
$prefsStrings["4.4"] = "Pretvori URL naslove v povezave";
$prefsStrings["4.5"] = "Prikaz HTML sporo�il";
$prefsStrings["4.6"] = "Prikaz slik znotraj sporo�il";
$prefsStrings["4.7"] = "Prikaz navigacijskih povezav";
$prefsStrings["4.8"] = "Ne ozna�i sporo�il, ko preusmerja�";
$prefsStrings["5.0"] = "Podpis";
$prefsStrings["5.1"] = "Prikaz sporo�il po privzetem";
$prefsStrings["5.2"] = "";
$prefsStrings["6.0"] = "Sestavljanje sporo�ila";
$prefsStrings["6.1"] = "Prikaz stikov";
$prefsStrings["6.2"] = "Prikaz CC/BCC polj";
$prefsStrings["6.3"] = "Zapri po po�iljanju";
$prefsStrings["6.4"] = "Sestavi znotraj okvirja";
$prefsStrings["7.0.0"] = "Disk &amp; lastnosti imenika";
$prefsStrings["7.0.1"] = "Nastavitve kvote";
$prefsStrings["7.1"] = "Prika�i �tevilo neprebranih sporo�il";
$prefsStrings["7.2"] = "Vsakih %n sekund osve�i vsebino sporo�il";

$pref_col_title = "Ponastavi stolpce";
$pref_colstr["order"] = "Uredi";
$pref_colstr["field"] = "Polje";
$pref_col_label['c'] = "Okence za odkljukati";
$pref_col_label['a'] = "Priloge";
$pref_col_label['m'] = "Zastavice/status";

$sort_fields=array("DATE"=>"Datum", "SUBJECT"=>"Tema", "SIZE"=>"Velikost");
$sort_orders=array("ASC"=>"Nara��ajo�e", "DESC"=>"Padajo�e");

$prefsButtonStrings = array( 0=> "Obnovi", 1=>"Dodaj spremembe", 2=> "Prekli�i", 3=> "Privzeto");

$prefs_new_user = "Ob va�i prvi prijavi vam �elimo izre�i dobrodo�lico!<br>";
$prefs_new_user .= "Prosimo, pojdite skozi slede�e nastavitve in pritisnite \"Apply\"";
?>