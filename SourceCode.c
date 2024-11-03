#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<time.h>
int system_ware(void){
A1:
	system("cls");
	int user_input = 0;
	int user_input_check = 0;
	printf("请选择以下功能：");
	printf("\n1.计算器\n");
	printf("2.记事本\n");
	printf("3.画图\n");
	printf("4.远程桌面连接\n");
	printf("5.命令提示符\n");
	printf("6.注册表编辑器\n");
	printf("7.Windows服务\n");
	printf("8.组策略\n");
	printf("9.Windows设备管理器\n");
	printf("10.返回主菜单\n");
	printf("\n请选择：");
	user_input_check = scanf("%d", &user_input);
	if (user_input_check == 0){
		printf("非法输入！请输入1-10的序号！\n\a");
		Sleep(1500);
		return 1;
	}
	switch (user_input){
	case 1:
		system("start calc.exe");
		printf("请等待进程响应...\n");
		Sleep(2000);
		goto A1;
		break;
	case 2:
		system("start notepad.exe");
		printf("请等待进程响应...\n");
		Sleep(2000);
		goto A1;
		break;
	case 3:
		system("start mspaint.exe");
		printf("请等待进程响应...\n");
		Sleep(2000);
		goto A1;
		break;
	case 4:
		system("start mstsc.exe");
		printf("请等待进程响应...\n");
		Sleep(2000);
		goto A1;
		break;
	case 5:
		system("start cmd.exe");
		printf("请等待进程响应...\n");
		Sleep(2000);
		goto A1;
		break;
	case 6:
		system("start regedit.exe");
		printf("请等待进程响应...\n");
		Sleep(2000);
		goto A1;
		break;
	case 7:
		system("start services.msc");
		printf("请等待进程响应...\n");
		Sleep(2000);
		goto A1;
		break;
	case 8:
		system("start gpedit.msc");
		printf("请等待进程响应...\n");
		Sleep(2000);
		goto A1;
		break;
	case 9:
		system("start devmgmt.msc");
		printf("请等待进程响应...\n");
		Sleep(2000);
		goto A1;
		break;
	case 10:
		return 1;
		break;
	default:
		printf("非法输入！请输入1-10的序号！\n\a");
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
	printf("请选择以下功能\n");
	printf("\n1.激活Windows（KMS）\n");
	printf("\n2.禁用Windows自动更新\n");
	printf("\n3.清除系统垃圾\n");
	printf("\n4.禁用Windows防火墙\n");
	printf("\n5.返回主菜单\n");
	printf("\n请选择：");
	user_input_check = scanf("%d",&user_input);
	if (user_input_check == 0){
		printf("非法输入！请输入1-5的序号！\n\a");
		Sleep(1500);
		return 1;
	}
	switch (user_input){
	case 1:
		system("cls");
		int winver = 0;
		int shutdown = 0;
		printf("\n请选择Windows版本：");
		printf("\n1.Windows7专业版");
		printf("\n2.Windows10/11专业版");
		printf("请输入：");
		if (winver == 1){
			printf("\n目标系统：Windows7专业版\n");
			printf("执行中...若失败请使用管理员身份运行！\n");
			system("slmgr.vbs /upk");
			system("slmgr /ipk 6K2KY-BFH24-PJW6W-9GK29-TMPWP");
			system("slmgr/skms kms.loli.best");
			system("slmgr /ato");
			printf("\n是否重启系统？（1.是 0.否）：\n");
			scanf("%d",&shutdown);
			if (shutdown == 1){
				printf("系统将在1分钟内重启，请尽快保存文件！\n\a");
				system("shutdown.exe -r -t 60");
				Sleep(60000);
			}
			if (winver == 2){
				printf("\n目标系统：Windows10/11专业版\n");
				printf("执行中...若失败请使用管理员身份运行！\n");
				system("slmgr.vbs /upk");
				system("slmgr /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX");
				system("slmgr/skms kms.loli.best");
				system("slmgr /ato");
				printf("\n是否重启系统？（1.是 0.否）：\n");
				scanf("%d", &shutdown);
				if (shutdown == 1){
					printf("系统将在1分钟内重启，请尽快保存文件！\n\a");
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
		printf("\n正在执行中...若提示失败请以管理员身份运行！\n");
		Sleep(1000);
		system("net stop \"windows update\"");
		system("net stop usosvc");
		system("sc.exe config wuauserv start= disabled");
		Sleep(1000);
		printf("\n操作成功完成！\n");
		Sleep(2000);
		setbuf(stdin, NULL);
		goto A2;
		break;
	case 3:
		printf("\n注意！在清理过程中请避免运行其他程序\n");
		system("cleanmgr.exe");
		system("rmdir /s /q C:\\Windows\\Temp");
		system("rmdir /s /q C:\\Windows\\SoftwareDistribution");
		system("rmdir /s /q C:\\Windows\\Logs");
		printf("操作成功完成！\n");
		Sleep(2000);
		setbuf(stdin, NULL);
		goto A2;
		break;
	case 4:
		printf("\n注意！此功能需要使用管理员身份运行！\n");
		system("netsh advfirewall set allprofiles state off && exit");
		printf("操作成功完成!\n");
		Sleep(1000);
		setbuf(stdin, NULL);
		goto A2;
		break;
	case 5:
		return 1;
		break;
	default:
		printf("非法输入！请输入1-5的序号！\n\a");
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
	printf("\n警告！此功能将会重置网络适配器以及清除DNS缓存，请谨慎使用此功能！\n\a");
	printf("\n注意！此功能需要管理员权限才能使用，若未使用管理员身份运行请关闭后重新以管理员身份运行！\n");
	printf("\n操作确认（1.执行操作 0.终止操作）：");
	user_input_check = scanf("%d", &user_input);
	if (user_input_check == 0){
		printf("\n非法输入！请输入1或0来确定操作！\n\a");
		Sleep(1500);
		return 1;
	}
	switch (user_input){
	case 1:
		printf("\n正在执行中...请勿关闭程序！\n");
		printf("获取网络适配器信息中...\n");
		system("ipconfig /all");
		Sleep(1000);
		printf("\n重置中...\n");
		system("ipconfig /flushdns");
		system("netsh winsock reset");
		system("ipconfig /release");
		system("ipconfig /renew");
		printf("\n\n操作成功完成！建议重启计算机\n\n\n");
		system("pause");
		system("cls");
		return 1;
	case 0:
		printf("\n操作被用户取消！\n");
		Sleep(1000);
		return 1;
	default:
		printf("\n非法输入！请输入1或0来确定操作！\n\a");
		return 1;
		break;
	}
}
int advance_function(void){
A3:
	system("cls");
	int user_input = 0;
	int user_input_check = 0;
	printf("警告！此功能为高危功能，因为使用不当所造成的一切损失由用户承担！\n");
	printf("\n请选择以下功能：\n");
	printf("\n 1.重启Windows到Recovery环境\n");
	printf("\n 2.强制重启Windows资源管理器\n");
	printf("\n 3.启动Diskpart磁盘分区工具\n");
	printf("\n 4.自动添加用户至Windows\n");
	printf("\n 5.返回主菜单\n");
	printf("\n请输入：");
	user_input_check = scanf("%d", &user_input);
	if (user_input_check == 0){
		printf("非法输入！请输入1-5的序号！\n\a");
		Sleep(1500);
		system("cls");
		setbuf(stdin,NULL);
		goto A3;
	}
	switch (user_input){
	case 1:
		system("cls");
		int reject = 0;
		printf("\n系统将在30s后自动重启到Windows恢复环境，请及时保存数据!\a\n");
		printf("若要终止关机进程请输入0，若要继续重启进程请不要输入任何数据！\n");
		system("shutdown.exe -r -o -t 30");
		printf("\n请输入：");
		scanf("%d", &reject);
		if (reject == 0){
			printf("终止命令已发出...\n");
			system("shutdown.exe -a");
			Sleep(2000);
			goto A3;
		}
		break;
	case 2:
		printf("\n注意！在程序执行期间可能桌面会消失这属于正常现象，请勿关闭程序！\n\a");
		Sleep(1000);
		system("taskkill.exe /f /im explorer.exe");
		Sleep(500);
		system("taskkill.exe /f /im dwm.exe ");
		Sleep(500);
		system("cmd.exe /c start c:\\windows\\explorer.exe");
		printf("资源管理器重启成功！\n");
		Sleep(1000);
		goto A3;
		break;
	case 3:
		system("cls");
		printf("\n数据无价，谨慎操作！\n");
		system("diskpart.exe");
		goto A3;
		break;
	case 4:
		printf("\n警告！使用此功能可能导致他人在未经授权的情况下访问计算机！\n\a");
		Sleep(1000);
		system("net user new_user 123456 /add");
		printf("\n添加成功！用户名：net_user 密码：123456\n");
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
	printf("\n文件已保存至D:\\system_info.log中！\n\n");
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
	printf("欢迎使用Windows工具箱 Made By Qizhou 2024.11.3\n");
	printf("当前系统时钟：%s\n", asctime(timeinfo));
A:
	printf("请选择你要执行的功能");
	printf("\n\n1.调用系统软件\n");
	printf("\n2.Windows实用功能\n");
	printf("\n3.Windows网络重置\n");
	printf("\n4.高级功能（新手慎用！）\n");
	printf("\n5.检测系统信息并保存\n");
	printf("\n请选择：");
	user_input_check = scanf("%d", &user_choice);
	if (user_input_check == 0){
		printf("非法输入！请输入1-5的序号！\n\a");
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
		printf("\n非法输入！请输入1-5的序号！\n\a");
		system("pause");
		setbuf(stdin,NULL);
		system("cls");
		goto A;
		break; 
		}

		system("pause");
		return 0;
	}
