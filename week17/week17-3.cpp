///Week17-3.cpp step01-1 ブ猭, 羆癬ㄓ
#include <stdio.h>
int main()
{
    int N=1234567892;///Q: 叫拜计琌ぶ
    ///  N%10 緇计,碞琌计
    ///  N/10 埃10, 玡计

    int sum=0;
    while( N > 0 ){
        printf("%d => %d %d \n", N, N/10, N%10 );
        sum += N%10;

        N = N / 10;///跑
    }
    printf("%d", sum);

}

