///Week16-1.cpp step01-1 �Ʋ߹�߽ҦҪ� while2 �e�����T����
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int i=0;//for(int i=0; i<n; i++)
	while(i<n){
		//�L����� 7x7 nxn
		//for(int k=0; k<n; k++)
		int k=0;
		while(k<n){
			if(k<n-i-1) printf(" ");
			else printf("*");
			k++;
		}
		int space=n-i-1;
		//printf("%d %d\n",space, i);
		printf("\n");
		i++;
	}
}
