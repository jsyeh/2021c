///Week17-3.cpp step01-1 剝皮法, 加總起來
#include <stdio.h>
int main()
{
    int N=1234567892;///Q: 請問個位數是多少
    ///  N%10 取餘數,就是個位數
    ///  N/10 除10, 前面的位數

    int sum=0;
    while( N > 0 ){
        printf("%d => %d %d \n", N, N/10, N%10 );
        sum += N%10;

        N = N / 10;///變小
    }
    printf("%d", sum);

}

