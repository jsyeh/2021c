///Week10-2.cpp step02-1  �Q���D���X�ӽ��, �p��?
#include <stdio.h>	///A: �C���1�ӽ��, �N ++
int main()
{ ///�{�����Ӱ��D: �V�j���Ʀr, �|�V�C =>�֤@�I!!!!!
	int m;
	scanf("%d", &m);

	int ans=0;///�٨S������ ���
	for(int n=2; n<=m; n++){
		int bad=0;
		for(int i=2; i<n; i++){
			if(n%i==0){
                bad=1;///�p�G���㰣,�N�a�F
                break;///�Ʊ�j��i�H��������,�|��!
			}
		}
		if( bad==0 ){
            ans++;///���F, �N++
            ///���n�L����,�|��! printf("%d ", n);///��� ���
		}
	}
	printf(" \n ans: %d \n", ans);
}
