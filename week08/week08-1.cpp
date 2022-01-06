///Week08-1.cpp step01-1 ¶¥­¼
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int ans=1;
    for(int i=1; i<=n; i++){
        ans *= i;
    }
    printf("%d", ans);
}
