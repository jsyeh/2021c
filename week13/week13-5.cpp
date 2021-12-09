///Week13-5.cpp step02-4 (真的)畫星星的三角形
#include <stdio.h>
void printStar(int n)
{
    for(int i=0; i<n; i++) printf("*");
}
void printSpace(int n)
{
    for(int i=0; i<n; i++) printf(" ");
}
int main()
{
    for(int i=1; i<=10; i++){
        printSpace( 10-i );
        printStar( i );///它會印出很多個星星
        printf("\n");///跳行
    }
}
