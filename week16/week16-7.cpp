///Week16-7.cpp step03-3 迴文 (倒著讀都一樣)
/// 20211202 那天發現世界迴文日
#include <stdio.h>
#include <string.h>//for strlen()
char line[100];//大一點,安全
int main()
{
	scanf("%s", line);

	int bad=0;
	int N=strlen(line);
	for(int i=0; i<N; i++){
		if(line[i] != line[N-1-i]) bad=1;
	}
	if(bad==0) printf("YES");
	else printf("NO");
}
