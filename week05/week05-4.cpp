#include <stdio.h>
int main()
{///0不成立,其他都可以算是成立
    //if( 1+1 > 2 ) printf("1+1>2\n");
    if(-2) printf("-2成立\n");
    if(-1) printf("-1成立\n");
    if(0) printf("0不成立\n");///不會印出來
    if(1) printf("1成立\n");
    if(2) printf("2成立\n");
    if(3) printf("3成立\n");
    if(9999) printf("9999成立\n");
}
