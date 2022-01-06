///Week12-3.cpp step03-1 迴文
#include <stdio.h>
int a[8]={2, 0, 2, 1,  1, 2, 0, 2};
 ///     [0][1][2][3] [4][5][6][7]
int main()
{
    for(int i=0; i<8; i++){
        printf("%d ", a[i] );
    }
    printf("\n現在想要倒過來印哦!!!!\n");

    for(int i=7; i>=0; i--){
        printf("%d ", a[i] );
    }
}
