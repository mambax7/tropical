<?php
include("../lang/eng/main.inc"); // <-- do not delete
/********************************************************
	lang/kr/main.inc
	(C)2001-2002 Ryo Chijiiwa <Ryo@IlohaMail.org>

	This file is part of IlohaMail, and released under GPL.
	See COPYING, or http://www.fsf.org/copyleft/gpl.html

********************************************************/

function formatStatusString($num, $folder, $type){
	$str="";
	if ($type=="delete"){
		$str = "$num ���� ���� ����".($num>1?"s":"");
	}else if ($type == "move"){
		$str = "$num ���� ���� �ű�".($num>1?"s":"")." to $folder";
	}
	
	return $str;
}

$mainStrings[0] = "%p of %n ǥ��";
$mainStrings[1] = " ���� ã��";
$mainStrings[2] = "����";
$mainStrings[3] = " ����";
$mainStrings[4] = "����";
$mainStrings[5] = " ����";
$mainStrings[6] = "����";
$mainStrings[7] = "To";
$mainStrings[8] = "From";
$mainStrings[9] = "��¥";
$mainStrings[10] = "����";
$mainStrings[11] = "������ ����";
$mainStrings[12] = "����";
$mainStrings[13] = "�˻�";
$mainStrings[14] = "ũ��";
$mainStrings[15] = "�������";
$mainStrings[16] = "����";
$mainStrings[17] = "���� ��ħ ";
$mainStrings[18] = "��� ����";
$mainStrings[19] = "���";


$mainErrors[0] = "�������� ��� �ֽ��ϴ�.";
$mainErrors[1] = "�������� ��� �ֽ��ϴ�.";
$mainErrors[2] = "���������� �ű�� �����ϴ�..";
$mainErrors[3] = "������ ��������� ǥ���Ҽ� �����ϴ�.";
$mainErrors[4] = "������ �ű�� �����ϴ�.";
$mainErrors[5] = "�������� �������� �ʾҽ��ϴ�.";
$mainErrors[6] = "�������� ���� �����ϴ�.";
$mainErrors[7] = "%f �� �ִ� ��� ������ �����Ͻðڽ��ϱ�?";



?>