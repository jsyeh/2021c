///Week14-6.cpp step03-1 �x�}��m
///���g�X����,�A�令�諸
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
	for(int j=0; j<n; j++){//�ѧo! j�]�쥪��
		for(int i=0; i<n; i++){//�Ѱ�! i�]��k��
			printf("%3d", a[i][j] );
		}
		printf("\n");
	}
}
