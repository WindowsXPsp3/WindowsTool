#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<time.h>
int system_ware(void){
A1:
	system("cls");
	int user_input = 0;
	int user_input_check = 0;
	printf("��ѡ�����¹��ܣ�");
	printf("\n1.������\n");
	printf("2.���±�\n");
	printf("3.��ͼ\n");
	printf("4.Զ����������\n");
	printf("5.������ʾ��\n");
	printf("6.ע���༭��\n");
	printf("7.Windows����\n");
	printf("8.�����\n");
	printf("9.Windows�豸������\n");
	printf("10.�������˵�\n");
	printf("\n��ѡ��");
	user_input_check = scanf("%d", &user_input);
	if (user_input_check == 0){
		printf("�Ƿ����룡������1-10����ţ�\n\a");
		Sleep(1500);
		return 1;
	}
	switch (user_input){
	case 1:
		system("start calc.exe");
		printf("��ȴ�������Ӧ...\n");
		Sleep(2000);
		goto A1;
		break;
	case 2:
		system("start notepad.exe");
		printf("��ȴ�������Ӧ...\n");
		Sleep(2000);
		goto A1;
		break;
	case 3:
		system("start mspaint.exe");
		printf("��ȴ�������Ӧ...\n");
		Sleep(2000);
		goto A1;
		break;
	case 4:
		system("start mstsc.exe");
		printf("��ȴ�������Ӧ...\n");
		Sleep(2000);
		goto A1;
		break;
	case 5:
		system("start cmd.exe");
		printf("��ȴ�������Ӧ...\n");
		Sleep(2000);
		goto A1;
		break;
	case 6:
		system("start regedit.exe");
		printf("��ȴ�������Ӧ...\n");
		Sleep(2000);
		goto A1;
		break;
	case 7:
		system("start services.msc");
		printf("��ȴ�������Ӧ...\n");
		Sleep(2000);
		goto A1;
		break;
	case 8:
		system("start gpedit.msc");
		printf("��ȴ�������Ӧ...\n");
		Sleep(2000);
		goto A1;
		break;
	case 9:
		system("start devmgmt.msc");
		printf("��ȴ�������Ӧ...\n");
		Sleep(2000);
		goto A1;
		break;
	case 10:
		return 1;
		break;
	default:
		printf("�Ƿ����룡������1-10����ţ�\n\a");
		Sleep(1000);
		goto A1;
		system("cls");
		break;
	}
	return 1;
}
int system_function(void){
A2:
	system("cls");
	int user_input = 0;
	int user_input_check = 0;
	printf("��ѡ�����¹���\n");
	printf("\n1.����Windows��KMS��\n");
	printf("\n2.����Windows�Զ�����\n");
	printf("\n3.���ϵͳ����\n");
	printf("\n4.����Windows����ǽ\n");
	printf("\n5.�������˵�\n");
	printf("\n��ѡ��");
	user_input_check = scanf("%d",&user_input);
	if (user_input_check == 0){
		printf("�Ƿ����룡������1-5����ţ�\n\a");
		Sleep(1500);
		return 1;
	}
	switch (user_input){
	case 1:
		system("cls");
		int winver = 0;
		int shutdown = 0;
		printf("\n��ѡ��Windows�汾��");
		printf("\n1.Windows7רҵ��");
		printf("\n2.Windows10/11רҵ��");
		printf("�����룺");
		if (winver == 1){
			printf("\nĿ��ϵͳ��Windows7רҵ��\n");
			printf("ִ����...��ʧ����ʹ�ù���Ա������У�\n");
			system("slmgr.vbs /upk");
			system("slmgr /ipk 6K2KY-BFH24-PJW6W-9GK29-TMPWP");
			system("slmgr/skms kms.loli.best");
			system("slmgr /ato");
			printf("\n�Ƿ�����ϵͳ����1.�� 0.�񣩣�\n");
			scanf("%d",&shutdown);
			if (shutdown == 1){
				printf("ϵͳ����1�������������뾡�챣���ļ���\n\a");
				system("shutdown.exe -r -t 60");
				Sleep(60000);
			}
			if (winver == 2){
				printf("\nĿ��ϵͳ��Windows10/11רҵ��\n");
				printf("ִ����...��ʧ����ʹ�ù���Ա������У�\n");
				system("slmgr.vbs /upk");
				system("slmgr /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX");
				system("slmgr/skms kms.loli.best");
				system("slmgr /ato");
				printf("\n�Ƿ�����ϵͳ����1.�� 0.�񣩣�\n");
				scanf("%d", &shutdown);
				if (shutdown == 1){
					printf("ϵͳ����1�������������뾡�챣���ļ���\n\a");
					system("shutdown.exe -r -t 60");
					Sleep(60000);
				}
			}
			else{
				system("cls");
				setbuf(stdin,NULL);
				goto A2;
			}
		}
		break;
	case 2:
		printf("\n����ִ����...����ʾʧ�����Թ���Ա������У�\n");
		Sleep(1000);
		system("net stop \"windows update\"");
		system("net stop usosvc");
		system("sc.exe config wuauserv start= disabled");
		Sleep(1000);
		printf("\n�����ɹ���ɣ�\n");
		Sleep(2000);
		setbuf(stdin, NULL);
		goto A2;
		break;
	case 3:
		printf("\nע�⣡����������������������������\n");
		system("cleanmgr.exe");
		system("rmdir /s /q C:\\Windows\\Temp");
		system("rmdir /s /q C:\\Windows\\SoftwareDistribution");
		system("rmdir /s /q C:\\Windows\\Logs");
		printf("�����ɹ���ɣ�\n");
		Sleep(2000);
		setbuf(stdin, NULL);
		goto A2;
		break;
	case 4:
		printf("\nע�⣡�˹�����Ҫʹ�ù���Ա������У�\n");
		system("netsh advfirewall set allprofiles state off && exit");
		printf("�����ɹ����!\n");
		Sleep(1000);
		setbuf(stdin, NULL);
		goto A2;
		break;
	case 5:
		return 1;
		break;
	default:
		printf("�Ƿ����룡������1-5����ţ�\n\a");
		Sleep(1500);
		goto A2;
		break;
	}
	return 1;
}
int reset_network(void){
	system("cls");
	int user_input = 0; 
	int user_input_check = 0;
	printf("\n���棡�˹��ܽ������������������Լ����DNS���棬�����ʹ�ô˹��ܣ�\n\a");
	printf("\nע�⣡�˹�����Ҫ����ԱȨ�޲���ʹ�ã���δʹ�ù���Ա���������رպ������Թ���Ա������У�\n");
	printf("\n����ȷ�ϣ�1.ִ�в��� 0.��ֹ��������");
	user_input_check = scanf("%d", &user_input);
	if (user_input_check == 0){
		printf("\n�Ƿ����룡������1��0��ȷ��������\n\a");
		Sleep(1500);
		return 1;
	}
	switch (user_input){
	case 1:
		printf("\n����ִ����...����رճ���\n");
		printf("��ȡ������������Ϣ��...\n");
		system("ipconfig /all");
		Sleep(1000);
		printf("\n������...\n");
		system("ipconfig /flushdns");
		system("netsh winsock reset");
		system("ipconfig /release");
		system("ipconfig /renew");
		printf("\n\n�����ɹ���ɣ��������������\n\n\n");
		system("pause");
		system("cls");
		return 1;
	case 0:
		printf("\n�������û�ȡ����\n");
		Sleep(1000);
		return 1;
	default:
		printf("\n�Ƿ����룡������1��0��ȷ��������\n\a");
		return 1;
		break;
	}
}
int advance_function(void){
A3:
	system("cls");
	int user_input = 0;
	int user_input_check = 0;
	printf("���棡�˹���Ϊ��Σ���ܣ���Ϊʹ�ò�������ɵ�һ����ʧ���û��е���\n");
	printf("\n��ѡ�����¹��ܣ�\n");
	printf("\n 1.����Windows��Recovery����\n");
	printf("\n 2.ǿ������Windows��Դ������\n");
	printf("\n 3.����Diskpart���̷�������\n");
	printf("\n 4.�Զ�����û���Windows\n");
	printf("\n 5.�������˵�\n");
	printf("\n�����룺");
	user_input_check = scanf("%d", &user_input);
	if (user_input_check == 0){
		printf("�Ƿ����룡������1-5����ţ�\n\a");
		Sleep(1500);
		system("cls");
		setbuf(stdin,NULL);
		goto A3;
	}
	switch (user_input){
	case 1:
		system("cls");
		int reject = 0;
		printf("\nϵͳ����30s���Զ�������Windows�ָ��������뼰ʱ��������!\a\n");
		printf("��Ҫ��ֹ�ػ�����������0����Ҫ�������������벻Ҫ�����κ����ݣ�\n");
		system("shutdown.exe -r -o -t 30");
		printf("\n�����룺");
		scanf("%d", &reject);
		if (reject == 0){
			printf("��ֹ�����ѷ���...\n");
			system("shutdown.exe -a");
			Sleep(2000);
			goto A3;
		}
		break;
	case 2:
		printf("\nע�⣡�ڳ���ִ���ڼ�����������ʧ������������������رճ���\n\a");
		Sleep(1000);
		system("taskkill.exe /f /im explorer.exe");
		Sleep(500);
		system("taskkill.exe /f /im dwm.exe ");
		Sleep(500);
		system("cmd.exe /c start c:\\windows\\explorer.exe");
		printf("��Դ�����������ɹ���\n");
		Sleep(1000);
		goto A3;
		break;
	case 3:
		system("cls");
		printf("\n�����޼ۣ�����������\n");
		system("diskpart.exe");
		goto A3;
		break;
	case 4:
		printf("\n���棡ʹ�ô˹��ܿ��ܵ���������δ����Ȩ������·��ʼ������\n\a");
		Sleep(1000);
		system("net user new_user 123456 /add");
		printf("\n��ӳɹ����û�����net_user ���룺123456\n");
		system("pause");
		goto A3;
		break;
	case 5:
		return 1;
		break;
	default:
		return 1;
		break;
	}
	return 1;
}
void system_info(void){
	system("echo off && systeminfo >> d:\\system_info.log");
	printf("\n�ļ��ѱ�����D:\\system_info.log�У�\n\n");
	system("pause");
	system("cls");
}
int main(void){
	int user_choice = 0;
	int user_input_check = 0;
	int switch_check = 0;
	time_t rawtime;
	struct time* timeinfo;
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	printf("��ӭʹ��Windows������ Made By Qizhou 2024.11.3\n");
	printf("��ǰϵͳʱ�ӣ�%s\n", asctime(timeinfo));
A:
	printf("��ѡ����Ҫִ�еĹ���");
	printf("\n\n1.����ϵͳ���\n");
	printf("\n2.Windowsʵ�ù���\n");
	printf("\n3.Windows��������\n");
	printf("\n4.�߼����ܣ��������ã���\n");
	printf("\n5.���ϵͳ��Ϣ������\n");
	printf("\n��ѡ��");
	user_input_check = scanf("%d", &user_choice);
	if (user_input_check == 0){
		printf("�Ƿ����룡������1-5����ţ�\n\a");
		Sleep(1500);
		setbuf(stdin, NULL);
		system("cls");
		goto A;
	}
	switch (user_choice){
	case 1:
		switch_check = system_ware();
		if (switch_check == 1){
			setbuf(stdin, NULL);
			system("cls");
			goto A;
			break;
		}
	case 2:
		switch_check = system_function();
		if (switch_check == 1){
			setbuf(stdin, NULL);
			system("cls");
			goto A;
			break;
		}
	case 3:
		switch_check = reset_network();
		if (switch_check == 1){
			setbuf(stdin, NULL);
			system("cls");
			goto A;
			break;
		}
	case 4:
		switch_check = advance_function();
		if (switch_check == 1){
			setbuf(stdin, NULL);
			system("cls");
			goto A;
			break;
		}
	case 5:
		system_info();
			goto A;
			break;
	default:
		printf("\n�Ƿ����룡������1-5����ţ�\n\a");
		system("pause");
		setbuf(stdin,NULL);
		system("cls");
		goto A;
		break; 
		}

		system("pause");
		return 0;
	}