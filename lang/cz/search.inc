<?php
/********************************************************
	lang/eng/search.inc
	(C)2001-2002 Ryo Chijiiwa <Ryo@IlohaMail.org>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html

********************************************************/

	//TRANSLATORS:  Uncomment next line for all non-English languages!!
	include("../lang/eng/search.inc");

	//TRANSLATORS:
	//in the follow arrays, translate key, not value
	//i.e.  translate "From" not "FROM".
	$search_fields=array("vyberte"=>"-", "Od"=>"FROM", "Pro"=>"TO", "P�edm�t"=>"SUBJECT","T�lo zpr�vy"=>"BODY");
	$search_dates=array("nen� relevantn�"=>"ignore", "je"=>"ON", "je po"=>"SINCE", "je p�ed"=>"BEFORE");

	$search_str["title"] = "Hledn�n�";
	$search_str["str"] = "Hledej ve schr�nce %folders <br>\n";
	$search_str["str"] .= "kde pole %fields obsahuje %value <br>\n";
	$search_str["str"] .= "a datum %dateops %m/%d/%y <br>\n";
	$search_str["submit"] = "Hledej";
?>