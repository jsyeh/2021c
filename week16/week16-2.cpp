///Week16-2.cpp step02-1
#include <stdio.h>
int a[4];
char s[4]="ABC";///它有4格

int main()
{
    for(int i=0; i<4; i++){
        printf("字母:%c= 值是%d\n", s[i], s[i]);
    }
}
