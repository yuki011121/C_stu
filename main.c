/*定义了列的大小为120，所以定义标准输出格式框架为80个‘*’号*/
#define FRAME_ "\t\t\t\t*********************************************************\n"
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void print_user();
void user_login()
{
	int i;
	print_user();
	printf("请输入命令：\n");
	scanf("%d", &i);
}
void print_user()
{
	printf("\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t欢迎进入学生成绩管理系统\t\t\n");
	printf(FRAME_);
	//printf("\t\t\t\t*\t\t欢迎进入学生成绩管理系统\t\t*\n");
	printf("\t\t\t\t*\t\t    登录 请按 1\t\t\t\t*\n");
	printf("\t\t\t\t*\t\t    注册新账号 请按 2\t\t\t*\n");
	printf("\t\t\t\t*\t\t    找回密码 请按 3\t\t\t*\n");
	printf("\t\t\t\t*\t\t    修改密码 请按 4\t\t\t*\n");
	printf("\t\t\t\t*\t\t    退出程序 请按 5\t\t\t*\n");
	printf(FRAME_);
}
//隐藏光标
void HideCursor()
{
	HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(hout, &cci);
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hout, &cci);
}
int main()
{
	system("mode con cols=120 lines=35"); // 定义好行和列的大小
	HideCursor();
	user_login();
}
/////////////
