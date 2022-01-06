#include <stdio.h>
int a[10]={3,0,1,8,7,2,5,4,6,9};
int main()
{
    int *a_i_1, *a_i;
    for(int k=0; k<10; k++){ ///其實不用做10次哦!
        for(int i=0; i<10-1; i++){
            a_i=&a[i]; a_i_1=&a[i+1];
            if( a[i] > a[i+1] ){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0; i<10; i++) printf("%d ", a[i]);
        printf("\n");
    }
}
