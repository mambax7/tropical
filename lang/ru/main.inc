<?php
include("../lang/eng/main.inc"); // <-- do not delete
/********************************************************
	lang/ruw/main.inc
	(C)2001-2002 Ryo Chijiiwa <Ryo@IlohaMail.org>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html

********************************************************/

function formatStatusString($num, $folder, $type){
	$str="";
	if ($type=="�������"){
		$str = "������� $num ���������".($num>1?"(�)":"");
	}else if ($type == "move"){
		$str = "��������� $num ���������".($num>1?"(�)":"")." � $folder";
	}
	
	return $str;
}

$mainStrings[0] = "�������� %p �� %n";
$mainStrings[1] = " ������� ���������";
$mainStrings[2] = "����������";
$mainStrings[3] = " ���������";
$mainStrings[4] = "���������";
$mainStrings[5] = " ���������";
$mainStrings[6] = "����";
$mainStrings[7] = "����";
$mainStrings[8] = "��";
$mainStrings[9] = "����";
$mainStrings[10] = "�������";
$mainStrings[11] = "�������� �������";
$mainStrings[12] = "���������";
$mainStrings[13] = "�����";
$mainStrings[14] = "������";
$mainStrings[15] = "��� ����";
$mainStrings[16] = "��������";
$mainStrings[17] = "��������� �����";
$mainStrings[18] = "������� ���";
$mainStrings[19] = "��������";
$mainStrings[20] = "�������� ��� %b";
$mainStrings[21] = "�����������";
$mainStrings[22] = "�������������";


$mainErrors[0] = "�� ������� ��������� � ���� �����";
$mainErrors[1] = "� ���� ����� ��� ���������";
$mainErrors[2] = "���������� ��������� ��������� � �������.";
$mainErrors[3] = "���������� �������� ��������� ��� ���������.";
$mainErrors[4] = "���������� ��������� ���������.";
$mainErrors[5] = "����� ������� �� ����������.";
$mainErrors[6] = "���������� �������� �������";
$mainErrors[7] = "�� ������� ��� ������ ������� ��� ��������� � %f?";
$mainErrors[8] = "������� �� ������� ��� ����������� �������� ��� ���� ���-�� �������� ��.<br>����� ���������, ������ �������� ��� ����.";



?>