<?php
include("../lang/eng/search.inc"); // <-- do not delete
/********************************************************
	lang/se/search.inc
	(C)2001-2002 Ryo Chijiiwa <Ryo@IlohaMail.org>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html

	Translated by Markus Svensson <markus.svensson@linux.nu>

********************************************************/

	//TRANSLATORS:
	//in the follow arrays, translate key, not value
	//i.e.  translate "From" not "FROM".
	$search_fields=array("select"=>"-", "Fr�n"=>"FROM", "Till"=>"TO", "�rende"=>"SUBJECT","Meddelande"=>"BODY");
	$search_dates=array("spelar ingen roll"=>"ignore", "�r p�"=>"ON", "�r efter"=>"SINCE", "�r f�re"=>"BEFORE");

	$search_str["title"] = "S�k";
	$search_str["str"] = "S�k i mapp %folders <br>\n";
	$search_str["str"] .= "d�r f�ltet %fields inneh�ller %value <br>\n";
	$search_str["str"] .= "och datumet %dateops %m/%d/%y <br>\n";
	$search_str["submit"] = "s�k";
?>