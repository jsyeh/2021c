#include <stdio.h>
int a[8] = { 2,0,2,1,  1,2,0,2};
int *p2, *p1;
int main()
{
    p1=&a[0]; p2=&a[7];
    if(a[0] == a[7]) printf("a[0] a[7] 相同\n");

    p1=&a[1]; p2=&a[6];
    if(a[1] == a[6]) printf("a[1] a[6] 相同\n");

    p1=&a[2]; p2=&a[5];
    if(a[2] == a[5]) printf("a[2] a[5] 相同\n");

    p1=&a[3]; p2=&a[4];
    if(a[3] == a[4]) printf("a[3] a[4] 相同\n");
}
