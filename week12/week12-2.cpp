///Week12-2.cpp step02-2 �ʼƱƪk-��ܱƧǪk
#include <stdio.h>
int a[100];
int main()
{	//1. Input
	for(int i=0; i<100; i++){
		scanf("%d", &a[i] );
	}
	for(int i=0; i<100; i++){//4. ����i
		for(int j=i+1; j<100; j++){//5. �k��j (i���k��@!!)
			if(a[i] > a[j]){//3. ���,�Ʊ�p������
				int temp=a[i];//3. ���F�N�洫
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
