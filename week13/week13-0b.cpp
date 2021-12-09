#include <stdio.h>
int a[8] = { 2,0,2,1,  1,2,0,2};
int *p2, *p1;
int main()
{
    for(int i=0; i<8; i++){
        p1=&a[i]; p2=&a[7-i];
        if(a[i] == a[7-i]) printf("¬Û¦P\n");
    }
}
