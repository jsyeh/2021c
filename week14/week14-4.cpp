///Week14-4.cpp step02-2 �令 �x�}�[�k
#include <stdio.h>
int a[10][10],b[10][10],c[10][10];//��~��
int main()
{
	int n;
	scanf("%d", &n);

	for(int i=0; i<n; i++){//(1)Ū�JA
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j] );
		}
	}//Q:�W�U�i�X�ֶ�? ���i�X��!!
	for(int i=0; i<n; i++){//(2)Ū�JB
		for(int j=0; j<n; j++){
			scanf("%d", &b[i][j] );
		}
	}

	for(int i=0; i<n; i++){//(3)�⵪��
		for(int j=0; j<n; j++){
			c[i][j] = a[i][j] + b[i][j];
			printf("%3d ", c[i][j] );
		}
		printf("\n");
	}
}