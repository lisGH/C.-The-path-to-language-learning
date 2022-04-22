#define _CRT_SECURE_NO_WARANINGS 1
//static
//static是用来修饰变量和函数的
//1. 修饰局部变量 - 称为静态局部变量
//2. 修饰全局变量 - 称为静态全局变量
//3. 修饰函数 - 称为静态函数


//对比1
#include<stdio.h>
void test()
{
	int i = 0;
	i++;
	printf("%d", i);
}
int main() 
{
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		test();
	}
	return 0;
}
//对比2
#include<stdio.h>
void test()
{
	static int i = 0;
	i++;
	printf("%d", i);
}
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	return 0;
}
//另，一个全局变量被static修饰，使得这个全局变量只能在本源文件内使用，不能在其他源文件内使用
//一个函数被static修饰，使得这个函数只能在本源文件内使用，不能在其他源文件内使用