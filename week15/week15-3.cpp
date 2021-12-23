///Week15-3.cpp step02-2 輾轉相除法,把過程印出來
///口訣: 除法, 餘數, 輾轉重覆做,到0
///大a,除中b, 得到小c, 老大換人,老二換人,重覆
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b );
    int c = a%b;
    printf("老大:%d 老二:%d 老三:%d\n", a, b, c);
    while(1){
        if(c==0){
            printf("因為c是0,就break離開迴圈\n");
            break;///離開迴圈
        }
        a=b;///老大換人
        b=c;///老二換人
        c=a%b;///新的老三
        printf("老大:%d 老二:%d 老三:%d\n", a, b, c);
    }
    printf("離迴開迴圈後,答案是b: %d \n", b);
}
