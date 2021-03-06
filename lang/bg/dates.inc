<?php
/********************************************************
	lang/eng/dates.inc
	(C) 2002 Ryo Chijiiwa <Ryo@IlohaMail.org>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html

********************************************************/

//TRANSLATORS:  Uncomment next line for all non-English languages!!
include("../lang/eng/dates.inc");

$lang_months[1] = "������";
$lang_months[2] = "��������";
$lang_months[3] = "����";
$lang_months[4] = "�����";
$lang_months[5] = "���";
$lang_months[6] = "���";
$lang_months[7] = "���";
$lang_months[8] = "������";
$lang_months[9] = "���������";
$lang_months[10] = "��������";
$lang_months[11] = "�������";
$lang_months[12] = "��������";

$lang_datetime["short_mon"][1] = "���";
$lang_datetime["short_mon"][2] = "���";
$lang_datetime["short_mon"][3] = "���";
$lang_datetime["short_mon"][4] = "���";
$lang_datetime["short_mon"][5] = "���";
$lang_datetime["short_mon"][6] = "���";
$lang_datetime["short_mon"][7] = "���";
$lang_datetime["short_mon"][8] = "���";
$lang_datetime["short_mon"][9] = "���";
$lang_datetime["short_mon"][10] = "���";
$lang_datetime["short_mon"][11] = "���";
$lang_datetime["short_mon"][12] = "���";

$lang_datetime["dsow"][0] = "���";
$lang_datetime["dsow"][1] = "���";
$lang_datetime["dsow"][2] = "���";
$lang_datetime["dsow"][3] = "���";
$lang_datetime["dsow"][4] = "���";
$lang_datetime["dsow"][5] = "���";
$lang_datetime["dsow"][6] = "���";

$lang_datetime["dsowl"][0] = "������";
$lang_datetime["dsowl"][1] = "����������";
$lang_datetime["dsowl"][2] = "�������";
$lang_datetime["dsowl"][3] = "�����";
$lang_datetime["dsowl"][4] = "���������";
$lang_datetime["dsowl"][5] = "�����";
$lang_datetime["dsowl"][6] = "������";
			
$lang_datetime["dsow_short"] = array("�", "�", "�", "�", "�", "�", "�");
$lang_datetime["today"] = "���� %t";		//e.g. "Today 12:02"
$lang_datetime["lastweek"] = "%w %t";		//e.g. "Wed 12:00"
$lang_datetime["thisyear"] = "%m/%d";		//e.g. "2/13"
$lang_datetime["prevyears"] = "%m/%d/%y"; 	//e.g. "1/1/2100"
$lang_datetime["monthyear"] = "%m %y";		//e.g. "January 2002"
$lang_datetime["verbal"] = "%m %d, %y";  	//e.g. "Jan 1, 1900"
$lang_datetime["verbal_short"] = "%m %d";  	//e.g. "Jan 1"
$lang_datetime["hour_system"] = 12;			// 12 or 24
$lang_datetime["ampm"]["am"] = "am";
$lang_datetime["ampm"]["pm"] = "pm";
$lang_datetime["time_format"] = "%h:%m%a";	// %h=hour, %m=minutes, %a="am:pm"
$lang_datetime["hour_format"] = "%h%a";
?>
