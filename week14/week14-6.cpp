///Week14-6.cpp step03-1 矩陣轉置
///先寫出錯的,再改成對的
#include <stdio.h>
int a[100][100];
int main()
{
	int n;
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j] );
		}
	}

	printf("\n");
	for(int j=0; j<n; j++){//天吶! j跑到左邊
		for(int i=0; i<n; i++){//天啊! i跑到右邊
			printf("%3d", a[i][j] );
		}
		printf("\n");
	}
}
