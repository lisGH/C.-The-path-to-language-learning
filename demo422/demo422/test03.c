#define _CRT_SECURE_NO_WARANINGS 1
//#define
//define�����ʶ������
#define MAX 1000
//define�����
#define ADD(x, y) ((x)+(y))
#include <stdio.h>
int main()
{
    int sum = ADD(2, 3);
    printf("sum = %d\n", sum);

    sum = 10 * ADD(2, 3);
    printf("sum = %d\n", sum);

    return 0;
}