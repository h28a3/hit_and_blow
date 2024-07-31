#include "header.h"

int answer[10], input[N];

int main(void) {
	int i ,j, count = 1;

	srand((unsigned int)time(NULL));
	make_answer();

	while(1){
		unsigned short hit = 0,blow = 0;	//hit数、blow数保存用変数の初期化

		get_player_answer(count);

		for(i = 0; i < N; i++){
			if(input[i] == answer[i]){
				hit++;		//hit数保存用変数更新
				continue;
			}
			for(j = 0; j <N; j++){
				if(input[i] == answer[j]){
					blow++;		//blow数保存用変数更新
					break;
				}
			}
		}

		printf("%dhit, %dblow\n",hit,blow);

		if(hit == N)
			break;		//ヒット数が桁数に一致したら終了
		count++;
	}

	printf("%d回でクリア!!\n",count);
	return 0;
}
