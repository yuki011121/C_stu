/*�������еĴ�СΪ120�����Զ����׼�����ʽ���Ϊ80����*����*/
#define FRAME_ "\t\t\t\t*********************************************************\n"
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void print_user();
void user_login()
{
	int i;
	print_user();
	printf("���������\n");
	scanf("%d", &i);
}
void print_user()
{
	printf("\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t��ӭ����ѧ���ɼ�����ϵͳ\t\t\n");
	printf(FRAME_);
	//printf("\t\t\t\t*\t\t��ӭ����ѧ���ɼ�����ϵͳ\t\t*\n");
	printf("\t\t\t\t*\t\t    ��¼ �밴 1\t\t\t\t*\n");
	printf("\t\t\t\t*\t\t    ע�����˺� �밴 2\t\t\t*\n");
	printf("\t\t\t\t*\t\t    �һ����� �밴 3\t\t\t*\n");
	printf("\t\t\t\t*\t\t    �޸����� �밴 4\t\t\t*\n");
	printf("\t\t\t\t*\t\t    �˳����� �밴 5\t\t\t*\n");
	printf(FRAME_);
}
//���ع��
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
	system("mode con cols=120 lines=35"); // ������к��еĴ�С
	HideCursor();
	user_login();
}
/////////////
