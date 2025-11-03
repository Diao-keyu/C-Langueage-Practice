#include<stdio.h>
int main()
{
	//练习1
	//做加法
	int a = 10;
	int b = 20;
	int c = a + b;
	printf("%d\n", c);
	//练习2
	//需求：一开始微信余额为100元，收到了一个2元红包
	//经常发生改变的数据我们可以用变量表示
	int money=100;
	money=money+2;
	printf("%d\n", money);
}
