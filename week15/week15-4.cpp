///Week15-4.cpp step02-3 輾轉相除法 函式呼叫函式
#include <stdio.h>
int box(int a, int b)///發明神奇盒子,算最大公因數
{     ///老大,老二
    if( a==0 ) return b;
    if( b==0 ) return a;
    return box( b, a%b );
}         /// 老二,老三
int main()
{
    int a, b;
    scanf("%d %d", &a, &b );

    int ans = box( a, b );
    printf("%d", ans);
}
