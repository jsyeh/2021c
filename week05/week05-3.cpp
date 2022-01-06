#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n );
	if(n<=100 && n>=90 ) printf("A+");//100-90
	if(n<=89 && n>=80 ) printf("A");//89-80
	if(n<=79 && n>=70 ) printf("B");//79-70
	if(n<=69 && n>=60 ) printf("C");//69-60
	if(n<=59) printf("D");//59-
}
