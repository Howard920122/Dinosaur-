#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
#include"Girl.h"
using namespace std;

int main() {
	int x;
	string mainCharacter;
	cout << "�п�J�D���m�W�G";
	cin >> mainCharacter;
	Girl ���ܳ¦�(60);
	cout << endl;
	string a;
	srand(time(NULL));
	int b[4];
	int v=1000 ,d=100,e=100,f=100;

	for (int i = 0; i < 4; i++) {
		 x = rand();
		 x = x % 6;	
		while (x == v||x==d||x==e||x==f) {
			x = rand();
			x = x % 6;	
		}
		b[i] = x;
		v = b[i];
		if(i>0)
		d = b[i-1];
		if(i>1)
		e = b[i-2];
		 if (i>2)
		f = b[i-3];
	}

	cout << "�b�o�өP���ڹ��_�i����F�@�Ӧb�����W�{�ѫܤ[�����͡C" << endl;
		cout << "�ڭ̦��ܦh�@�q���R�n�A�ڸ�o�۳B�o�ܧּ֡C" << endl;
		cout << "�o���ڨM�w�V�o�i�աA�ڭ̬��n�b�C�ֶ骺���f�C" << endl;
		cout << "�b���ݮɭԧڬݨ�@�Ӭ�o����A�A" << endl;
		cout << "���o�ª������֤k���ڳo�̨��ӡC" << endl;
		cout << "�ڬݳo�o���ڪ��Ӥ��A���D�ڭn�����H�A" << endl;
		cout << "�W�l�s���ܳ¦窺���֤k�A�ڦV���ܥ��F�۩I�A" << endl;
		cout << "���ܤ]�ܦ�§������ڰݦn�A�N�o�˧ڭ̪����|�}�l�F" << endl;
		cout << endl;
		cout << "(�C�D�ﶵ�ХHA.B.C�^��)" << endl;
	for (int i = 0; i < 4; i++) {
		
		switch (b[i]) {
		case 0:
			cout << "�ݨ체�e���X�{�F�@�a�B�N�O������()�����@�G�A�S�X�F�ܷQ�Y�o����" << endl;
			cout << "A."<< mainCharacter<<":�u�A�o��D�N�O�Y�F�v" << endl;
			cout << "B." << mainCharacter << ":�u�n���n�@�_�h�Y�v" << endl;
			cout << "C.���򳣤���������" << endl;
			cin >> a;
			while (a != "A" && a != "B" && a != "C") {
				cout << "�Э��s���A.B.C�^��" << endl;
				cin >> a;
			}
			cout << endl;
			if (a == "A") {
				cout << "���ܤ��򳣤�����������"<<endl;
				���ܳ¦�.sub(10);
			}
			if (a == "B") {
				cout << "�����S�X�F�}�ߪ�����" << endl;
				���ܳ¦�.add(10);
			}
			if (a == "C") {
				cout << "���ܤ��򳣤���������" << endl;
			}
			cout << endl;
			break;
		case 1:
			cout << "��M���U�_�F�@���j�B�o�{�F���ܨS���a�ʦӧڧ�]�]���ʮ��X��" << endl;
			cout << "A.�åB����ܤ@�_����" << endl;
			cout << "B.�W�ۤ@�ӤH����" << endl;
			cout << "C.���˦ۤv�S�a�ʡA�ç�ʦ��_��"<<endl;
			cin >> a;
			while (a != "A" && a != "B" && a != "C") {
				cout << "�Э��s���A.B.C�^��" << endl;
				cin >> a;
			}
			cout << endl;
			if (a == "A") {
				cout << "�����S�X�F�`�۪�����" << endl;
				���ܳ¦�.add(10);
			}
			if (a == "B") {
				cout << "�ݨ���ܷW�i���h���׫B���a��" << endl;
				���ܳ¦�.sub(10);
			}
			if (a == "C") {
				cout << "����ܤ@�_�h���׫B���a��" << endl;
			}
			cout << endl;
			break;			
		case 2:
			cout << "�b���L�C�ֳ]�I��o��ĳ�n���n�h�ө��}�A�ڨS�h�Q�N�P�N�@�_�h��"<<endl<<"�ڭ̨��i�F�\�h��§�~���A���\�h���ܳ��w�������P�P��A�o���o��W�S�h�[�N�j�]�p�]���U�l" << endl;
			cout << "A." << mainCharacter << ":�u�ڨ����A���F��a�v" << endl;
			cout << "B." << mainCharacter << ":�u���䦳�n�Y���ڭ̥h�Y�a�v" << endl;
			cout << "C." << mainCharacter << ":�u�A���R�F����h�F��r�v" << endl;
			cin >> a;
			while (a != "A" && a != "B" && a != "C") {
				cout << "�Э��s���A.B.C�^��" << endl;
				cin >> a;
			}
			cout << endl;
			if (a == "A") {
				cout << "���ܳ¦�:�n�r ���§A���ڮ�" << endl;
				cout << "�ڮ��n�F���A�ڭ��~��h�}��L���ө��A���]���P���H�y�����A���ڭ̮t�I�����A��M���ܤ�Ħ�ڪ���A�����y������ڻ�" << endl;
				cout << "���ܳ¦�:�u�o�˧ڭ̴N���|�����F�C�v" << endl;
				cout << "���ܬX�n�����߾a�b�ڨ��W�A���ڤ]�߸��[�t�A�Ʊ�o��û����n����" << endl;
				���ܳ¦�.add(10);
			}
			if (a == "B") {
				cout << "���ܳ¦�:�u�i�H���ڭ̨��h�ݬݧa�v" << endl;
				cout <<" ���ܤ]�S�~�򻡬ƻ�A�ڭ̴N�q�q�������h��a��𮧤F" << endl;
				
			}
			if (a == "C") {
				cout << "���ܳ¦�:�u�A���o�˻��A�ڥu�O�R�F���I�h�Ӥw�C�v" << endl;
				cout << "���ܥͮ𪺤����ܡA�ڭ̴N�o�˧C������������{" << endl;
				���ܳ¦�.sub(10);
			}
			cout << endl;
			break;
		case 3:
			cout << "�ݨ�C�ֶ�̨̳�E���F��A���N�O���]�����A�@�ݨ���ܪ����v�o�������ۻ��ڭ̥h������" << endl;
			cout << "A." << mainCharacter << ":�u�n�]�ڭ̤@�_�h���a�v" << endl;
			cout << "B." << mainCharacter << ":�u���Ӧn�a �ڦ��I�Ȱ��A�A�ۤv�W�h���a�v" << endl;
			cout << "C." << mainCharacter << ":�u�ڤ��Q���A�A�ۤv�h���o�خ��ƪ��]�I�v" << endl;
			cin >> a;
			while (a != "A" && a != "B" && a != "C") {
				cout << "�Э��s���A.B.C�^��" << endl;
				cin >> a;
			}
			cout << endl;
			if (a == "A") {
				cout << "���ܳ¦�:�u�Ӧn�F!�ڤ@���ܴ��ݤ@�_�����]�����O�A���§A�@�N���ڡC�v" << endl;
				cout << "�ڭ̤@�_�f�W�h�A���ܦb�ڮ���ܪ�Z���A���ڭ쥻��i���߱���[�@�F�A���ܵo�{�ڪ��~�A�A�ⴤ��ڤ⻡��" << endl;
				cout << "���ܳ¦�:�u���n�`�Ȧ��ڦb�A���n��ߡv" << endl;
				cout << "���@�����ڷP����ŷx�P�w��" << endl;
				���ܳ¦�.add(10);
			}
			if (a == "B") {
				cout << "���ܳ¦�:�u�n�a���ڴN�ۤv�@�ӤH�W�h�F�A�A���ڮ��@�U�F��C�v" << endl;
				cout << " �ݳo���ܦۤv�@�ӤH�W�h�A���o�ܶ}�����ڤߤ����I�I��A�Q�n����ܤ@�_���o�U�س]�I" << endl;
			}
			if (a == "C") {
				cout << "���ܳ¦�:�u���Q���N���r�A���n�f�𨺻�t�v" << endl;
				cout << "���ܥͮ𪺦ۤv�W�h���A���o�U�ӧڭ̨�Ӥ����٬O�N�B�B���S���@�I�i�i" << endl;
				���ܳ¦�.sub(10);
			}
			cout << endl;
			break;

		case 4:
			cout << "���ۨ��۬�M�ݨ�F�A�ݰ_�ӤQ�����˪��a��A��ӬO���찭�Ϊ��P�I�i�F��" << endl;
			cout << "���ܬ�M���y���Ħa�ݵۧڡA��ڻ��L�S�h�L���ΡA�Q�i�h�ݬ�" << endl;
			cout << "A." << mainCharacter << ":�u���ǳ��O�����A�L�᪺�ܡC�v" << endl;
			cout << "B." << mainCharacter << ":�u�n~�A���a�ڭ̶i�h�ݬݡC�v" << endl;
			cout << "C." << mainCharacter << ":�u�A�ۤv�h�a�A�ڷ|�ȡC�v" << endl;
			cin >> a;
			while (a != "A" && a != "B" && a != "C") {
				cout << "�Э��s���A.B.C�^��" << endl;
				cin >> a;
			}
			cout << endl;
			if (a == "A") {
				cout << "���ܳ¦�: �u�ڴN�S�����L�ڡA���ڪ����ݤ����?�v" << endl;
				cout << "���ܫܥͮ�A�M�ᤣ���ܪ������F" << endl;
				���ܳ¦�.sub(10);
			}
			if (a == "B") {
				cout << "���ܳ¦�: �u���ڦ��I���١A�A�����n�O�@�n�ڳ�C�v" << endl;
				cout << " ��: �u�����A�ڷ|�@���b�A���䪺��ߡC�v " << endl;
				cout << "�i�h����� �]�����ƪ���^�A�ҥH�@���ܤ��w�A�o�ɬ�M���@�����]�X��" << endl;
				cout << "���ܪ�����N�����a�b�ڪ����W�A�ٲo�_�ڪ���A�u�Ʊ�ɶ���û����b�o�@��" << endl;
				���ܳ¦�.add(10);
			}
			if (a == "C") {
				cout << "���ܳ¦�: �u�p�G�A�|�ȡA���N���n�F�C �v" << endl;
				cout << "���M���ܻ���F�A���Pı�o�X�Ӧo�ܥ���a���}�F�o�Ӧa��" << endl;				
			}
			cout << endl;
			break;

		case 5:
			cout << "�C�ֶ�̳̰����C�ֳ]�I�N�O���ѽ��F�A���ܫܳ��w�ݭ���"<<endl;
			cout<<"�ר�O�q���Ť������A���ܰ��W�Եۧڧ��W�F���ѽ�"<<endl;
			cout << "A." << mainCharacter << ":�u�o�����o��C�ڡv" << endl;
			cout << "B." << mainCharacter << ":�u�����n�}�G��A���D�F������A���w�q���B�ݭ����F�v" << endl;
			cout << "C." << mainCharacter << ":�u�کȰ��A�o�ӳ]�I�u��A�ۤv�W�h���F�v" << endl;
			cin >> a;
			while (a != "A" && a != "B" && a != "C") {
				cout << "�Э��s���A.B.C�^��" << endl;
				cin >> a;
			}
			cout << endl;
			if (a == "A") {
				cout << "���ܳ¦�: �u���ѽ����O�o�˪��C�v" << endl;
				cout << "������o�N�ܦw�R�A�@����ڭ̤U�ӡA�o�٬O���ӻ������" << endl;
				���ܳ¦�.sub(10);
			}
			if (a == "B") {
				cout << "���ܳ¦�: �u�ܺ}�G��a�A�ګܳ��w�ݭ����A�ר�O�q���Ť��C�v" << endl;
				cout << " ��: �u�O���A�u���n���C�v " << endl;
				cout << "���ܳ¦�: �u�ڪ��D���Ӧa�護���ܺ}�G�A�ڭ̤U���N�h���a�C�v" << endl;
				cout << "��: �u�����ڷ|���ߴ��ݤU������{���C�v" << endl;
				���ܳ¦�.add(10);
			}
			if (a == "C") {
				cout << "���ܳ¦�: �u�n�a�A�A�|�Ȩ��A�N�����n���a�A���ڮ��ӪF��C�v" << endl;
				cout << "��: �u�n�A�W�h�n�n���C�v" << endl;
				cout << "�ڱq�¦��W���L�F�o�����~�A�M��ݵۥL�W�h���A���M�ݨ�¦窱�o�}��" << endl;
				cout << "�ڴN�ܰ����F�A���ڧƱ�ڤ]��b�¦���䳭�o��" << endl;
			}
			cout << endl;
			break;
		}
	}
	cout << "end:" << endl;
	cout << "�b���Ѫ����|�����e�A�ڱa�ۦ��ܨ�F�j��W�ݷϤ��A�M�����ܪ���F�ۤv���߷N�C";
	if (���ܳ¦�.getFelling() <= 40) {
		cout << "���ܳ¦�:�u��ı�o�ڭ̤��ӾA�X�C�v" << endl;
		cout << "�U�ۦ^�j�a����ܫ���F�ڪ��b��" << endl;
		cout << "����N�A�]�S����ܨ����F" << endl;
		cout << "��" << mainCharacter << "�רs�@���l�n��ӪΦv�S���H�R�F......";
	}
	if (���ܳ¦�.getFelling() > 40 && ���ܳ¦�.getFelling() <= 89) {
		cout << " ���ܳ¦�:�u��ı�o�ӧ֤F�A���٨S�ǳƤ�i�쨺�Ӷ��q" << endl;
			cout << "	�ڭ̴N���~���B�ͧa�C�v" << endl;
	}
	if (���ܳ¦�.getFelling() >= 90 ) {
		cout << "��:��ı�o�ڤw�g�R�W�A�F�A�A�@�N��ڪ��k�B�Ͷ� ?" << endl;
		cout << "���ܳ¦� : �u���Ѫ��o�ܶ}�ߡA�ڤ]�ܳ��w�A�A�ڭ̦b�@�_�a�C�v" << endl;
		cout << "�̫��٬��n�U§���A�X�h��" << endl;
	}
}