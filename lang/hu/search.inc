<?php
include("../lang/eng/search.inc"); // <-- do not delete
/********************************************************
	lang/eng/search.inc
	(C)2001-2002 Ryo Chijiiwa <Ryo@IlohaMail.org>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html

********************************************************/

	//TRANSLATORS:
	//in the follow arrays, translate key, not value
	//i.e.  translate "From" not "FROM".
	$search_fields=array("kiv�laszt"=>"-", "Felad�"=>"FROM", "C�mzett"=>"TO", "T�rgy"=>"SUBJECT","Lev�l t�rzs"=>"BODY");
	$search_dates=array("nem sz�m�t"=>"ignore", "az napi"=>"ON", "ut�ni"=>"SINCE", "el�tti"=>"BEFORE");

	$search_str["title"] = "Keres�s";
	$search_str["str"] = "Keres�s mapp�ban: %folders <br>\n";
	$search_str["str"] .= "ahol a %fields  mez� tartalmazza: %value <br>\n";
	$search_str["str"] .= "�s a d�tum %y. %d %m. %dateops <br>\n";
	$search_str["submit"] = "keres";
?>