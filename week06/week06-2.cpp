///step02-1
#include <stdio.h>
int main()
{
    int a=999, b=100;
    int temp;

    printf("%d %d\n", a, b);

    temp=a; ///a車 跑到 temp路上 (a車位就空下來了)
    a=b; ///馬上把 b車, 停到剛剛空下來的a車位
    b=temp; ///把 temp路上剛剛停 車子, 放進

    printf("%d %d\n", a, b);
}
