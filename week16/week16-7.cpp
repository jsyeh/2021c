///Week16-7.cpp step03-3 �j�� (�˵�Ū���@��)
/// 20211202 ���ѵo�{�@�ɰj���
#include <stdio.h>
#include <string.h>//for strlen()
char line[100];//�j�@�I,�w��
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
