///Week12-1.cpp step02-1 ��ܱƧǪk
#include <stdio.h>
int a[10]={9,8,7,6,5,4,3,2,1,0};//{3,0,1,8,7,2,5,4,6,9};
int main()
{
    for(int i=0; i<10; i++) printf("%d ", a[i] );
    printf("�}�l���e\n");

    for(int i=0; i<10; i++){///����i
        for(int j=i+1; j<10; j++){///�k��j
            if( a[i] > a[j] ){///(1)���,�Ʊ楪��p---���F�N�洫
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0; i<10; i++) printf("%d ", a[i] );
    printf("�̫ᵲ��\n");
}
