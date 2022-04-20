#define _CRT_SECURE_NO_WARANINGS 1
//数据类型
//char			字符型
//short			短整型
//int			整形
//long			长整型
//long long		更长整形
//float			单精度浮点型
//double		双精度浮点型

//变量

#include <stdio.h>
int a = 1;//全局变量
int main() 
{
	int b = 2;//局部变量
	printf("%d  %d\n", &a,&b);
	return 0;
}


