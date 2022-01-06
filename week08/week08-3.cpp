///Week08-3.cpp step02-2 判斷質數
#include <stdio.h>
int main()
{
    int n;///Input: 1數, Output: 是不是質數
    scanf("%d", &n);

    /// n 是不是質數: 1 和 n本身可整除,其它都不行
    int bad=0;///沒有壞掉,沒有老鼠屎
    for( int i=2 ; i<n; i++ ){///只判斷 2...n-1
        if( n%i==0 ) bad++; ///糟糕, 整除了, 不是質數
    }

    if( bad==0 ) printf("%d是質數", n);///沒有老鼠屎,沒有壞掉
    else printf("%d壞掉了, 不是質數", n);
}
