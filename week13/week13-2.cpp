///Week13-2.cpp step02-1 畫星星
#include <stdio.h> ///為了 printf()
#include <stdlib.h> ///為了 system()作業系統
///你自己寫了一個自己的函式 main()函式
///(1) 自定函式 custom function 功能,函數f(x)
int main()
{
    printf("下面是 system( ) 出來的結果\n");
    system("dir");///(3) 呼叫別人的函式 system()
    printf("*"); ///(2) 呼叫別人的函式 printf()
    return 0;
}
