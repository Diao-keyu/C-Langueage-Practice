#include<stdio.h>
int main()
{
	//键盘录入朋友的名字并打印出来
	//char str[4] = "aaa";
	//printf("%s\n", str);
	//printf("%zu\n", sizeof(str));
	char name[100];
	printf("请输入你朋友的名字:\n");
	scanf("%s",&name);
	printf("你朋友的名字为；%s",name);
	return 0;



}