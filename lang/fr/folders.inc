<?php
include("../lang/eng/folders.inc"); // <-- do not delete
/********************************************************
	lang/fr/folders.inc
	(C) 1999-2002 Ryo Chijiiwa <Ryo@IlohaMail.org>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html
********************************************************/

$fl_str["folders"] = "Dossiers";
$fl_str["manage"] = "G�rer les dossiers";

	$sentbox=$my_prefs["sent_box_name"];
	$trashname=$my_prefs["trash_name"];
	$defaults["INBOX"] = "Bo�te de r�ception";
	$defaults[$sentbox] = "Messages envoy�s";
	$defaults[$trashname] = "Corbeille";
	$fstr["reload"] = "Recharger";
	$fstr["expunge"] = "Vider";

?>
