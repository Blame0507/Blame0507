#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()

{
	int a;
	scanf("%d", &a);
	if(a%4==0 && a%100!=0 || a%400==0)
		{
		printf("今年是闰年",a);
		return 0;
		}
	else
		{
		printf("今年不是闰年", a);
		}
	return 0;
}