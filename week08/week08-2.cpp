///Week08-2.cpp step02-1 計算平方和
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int ans=0;
	for(int i=1; i<=n; i++){//人類
		ans += i*i;
	}
	printf("%d", ans);

}
