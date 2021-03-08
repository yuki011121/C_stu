/*定义了列的大小为120，所以定义标准输出格式框架为80个‘*’号*/
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include "newhead.h"
int main()
{
	system("mode con cols=120 lines=35"); // 定义好行和列的大小
	HideCursor();
	user_login();
}
//一个获取登陆命令，返回值为一个命令
int get_login_cmd ()
{
    int i;
    char ch;
    while(scanf("%d",&i) != 1 || (i<0 || i>4)) {
            while((ch = getchar()) != '\n') putchar(ch);
            if(i<0 || i>4) printf("%d",i);
            printf("不是一个有效的命令，请重新输入\n");
            printf("请输入命令，按回车结束\n");
    }
    return i;
}
//退出函数
void user_exit() {
    printf("感谢您的使用，再见\n");
}
//用户登陆函数
void user_login()
{
    int i;
	print_user();
	printf("请输入命令,按回车结束：\n");
	switch(get_login_cmd()) {
        case 0: user_exit();  break;//exit(); break;
        case 1: break; //调用登陆函数
        case 2: break; //调用注册新账号函数
        case 3: break; //调用修改密码函数
        case 4: break ; //
    }
}
//打印登陆框架
void print_user()
{
	printf("\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t欢迎进入学生成绩管理系统\t\t\n");
	printf(FRAME_);
	printf("\t\t\t\t*\t\t    登录 \t请按 1\t\t\t*\n");
	printf("\t\t\t\t*\t\t    注册新账号 \t请按 2\t\t\t*\n");
	printf("\t\t\t\t*\t\t    找回密码 \t请按 3\t\t\t*\n");
	printf("\t\t\t\t*\t\t    修改密码 \t请按 4\t\t\t*\n");
	printf("\t\t\t\t*\t\t    退出程序 \t请按 0\t\t\t*\n");
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
