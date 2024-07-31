#include"header.h"

void get_player_answer(int count){
	int key, i;
	printf("Please enter a %ddigit number(%dtimes)：",N,count);
	scanf_s("%04d",&key);	//キーボードからN桁の数字を受け取る
	for(i = 0; i < N; i++){	//4桁の数字の各位の数を配列に格納
		input[i] = key % 10;
		key /= 10;
	}
}
