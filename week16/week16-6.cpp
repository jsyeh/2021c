///Week16-6.cpp step03-2 �r�ꪺ�j��
#include <stdio.h>
#include <string.h>///���F strlen()
char line[300]="101010110100101010101";
int main()
{
    int ans=0;
    int N = strlen(line);
    for(int i=0; i<N; i++){
        if(line[i] == '1') ans++;
    }
    printf("��%d��1\n", ans);
}
