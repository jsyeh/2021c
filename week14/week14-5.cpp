///Week14-5.cpp step02-3 矩陣加法=>矩陣乘法
#include <stdio.h>
int a[10][10], b[10][10], c[10][10];//放外面
int main()
{
	int n;
	scanf("%d", &n);

	for(int i=0; i<n; i++){//(1)讀入A
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j] );
		}
	}//Q:上下可合併嗎? 不可合併!!
	for(int i=0; i<n; i++){//(2)讀入B
		for(int j=0; j<n; j++){
			scanf("%d", &b[i][j] );
		}
	}

	for(int i=0; i<n; i++){//(3)算答案
		for(int j=0; j<n; j++){
			//c[i][j] = a[i][j] + b[i][j];
			c[i][j]=0;
			for(int k=0; k<n; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
			printf("%3d ", c[i][j] );
		}
		printf("\n");
	}
}
