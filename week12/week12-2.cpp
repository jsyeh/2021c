///Week12-2.cpp step02-2 百數排法-選擇排序法
#include <stdio.h>
int a[100];
int main()
{	//1. Input
	for(int i=0; i<100; i++){
		scanf("%d", &a[i] );
	}
	for(int i=0; i<100; i++){//4. 左手i
		for(int j=i+1; j<100; j++){//5. 右手j (i的右邊哦!!)
			if(a[i] > a[j]){//3. 比較,希望小的左邊
				int temp=a[i];//3. 錯了就交換
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	//2. Output
	for(int i=0; i<100; i++){
		printf("%d\n", a[i] );
	}
}
