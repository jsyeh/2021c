///Week17-4.cpp step02-2 �Q�έ�֪k,�ӸѨM UVA11332 Summing Digits
///�b�ƨg�{�]-CPE���P�s��-CPE�@���P-UVA11332 Summing Digits
///�ϥΤF6�ӵ{���ޥ�, �䤤�e��3�ӧޥ��b�e��3�ӽҰ�@�~�������C
///��4�ӧޥ��O�g�X�禡,�éI�s���C
///��5�ӧޥ�, �O if(N==0) break �J��0�����C
///��6�ӧޥ�����, �O�Q�� while( scanf(Ū���,Ū��1�Ӹ��)==1 )
#include <stdio.h>
int f(int N)//Step04: �禡
{
	int sum=0;//Step03 sum
	while( N > 0 ){//Step02 while�@����
		sum += N % 10; //Step01: N%10���, Step03
		N = N / 10;//Step02 N�ܤp
	}
	return sum;//Step03
}
int main()
{
	int N;
	while( scanf("%d", &N)==1 ){//Step06 while�j��@��Ū
		if(N==0) break;//Step05: �J��0����

		int ans = f( f( f(N) ) ); //Step04: �禡
		printf("%d\n", ans);
	}
}
