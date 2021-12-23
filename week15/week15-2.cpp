///Week15-2.cpp step02-1 輾轉相除法
/// 3 | 57 | 76 | 1  //大的a,除中的b, 得到小的c,
///   | 57 | 57 |    // 老大換人,老二換人,重覆
///  ---------------
///      0   19  口訣: 除法, 餘數, 輾轉重覆做,到0
#include <stdio.h>
int main()
{
    int a, b;///老大,老二
    scanf("%d %d", &a, &b );
    int c = a%b;///老三
    while(1){///一直做的迴圈
        if(c==0) break;///離開迴圈
        a=b;
        b=c;
        c=a%b;
    }
    printf("%d", b);
}
