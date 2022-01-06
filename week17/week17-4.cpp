///Week17-4.cpp step02-2 利用剝皮法,來解決 UVA11332 Summing Digits
///在瘋狂程設-CPE顆星廣場-CPE一顆星-UVA11332 Summing Digits
///使用了6個程式技巧, 其中前面3個技巧在前面3個課堂作業有做完。
///第4個技巧是寫出函式,並呼叫它。
///第5個技巧, 是 if(N==0) break 遇到0結束。
///第6個技巧最難, 是利用 while( scanf(讀資料,讀到1個資料)==1 )
#include <stdio.h>
int f(int N)//Step04: 函式
{
	int sum=0;//Step03 sum
	while( N > 0 ){//Step02 while一直剝
		sum += N % 10; //Step01: N%10剝皮, Step03
		N = N / 10;//Step02 N變小
	}
	return sum;//Step03
}
int main()
{
	int N;
	while( scanf("%d", &N)==1 ){//Step06 while迴圈一直讀
		if(N==0) break;//Step05: 遇到0結束

		int ans = f( f( f(N) ) ); //Step04: 函式
		printf("%d\n", ans);
	}
}
