#include <stdio.h>
int a[10]={3,0,1,8,7,2,5,4,6,9};
int main()
{
    for(int i=0; i<10; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    int *a_j, *a_i;
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            a_i=&a[i]; a_j=&a[j];
            if( a[i] > a[j] ){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }///Selection Sort 的口訣是 左手i, 右手j, 大小不對就交換
    for(int i=0; i<10; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
