#define _CRT_SECURE_NO_WARANINGS 1
//static
//static���������α����ͺ�����
//1. ���ξֲ����� - ��Ϊ��̬�ֲ�����
//2. ����ȫ�ֱ��� - ��Ϊ��̬ȫ�ֱ���
//3. ���κ��� - ��Ϊ��̬����


//�Ա�1
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
//�Ա�2
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
//��һ��ȫ�ֱ�����static���Σ�ʹ�����ȫ�ֱ���ֻ���ڱ�Դ�ļ���ʹ�ã�����������Դ�ļ���ʹ��
//һ��������static���Σ�ʹ���������ֻ���ڱ�Դ�ļ���ʹ�ã�����������Դ�ļ���ʹ��