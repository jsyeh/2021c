///Week08-2.cpp step02-1 �p�⥭��M
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int ans=0;
	for(int i=1; i<=n; i++){//�H��
		ans += i*i;
	}
	printf("%d", ans);

}