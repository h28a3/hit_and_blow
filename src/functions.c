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

void make_answer(void) {
    int i, j, temp, rand2;
    for (i = 0; i < 10; i++)
        answer[i] = i;  //正答用配列の初期化
    for (i = 0; i < 20; i++) {          //正答用配列の生成(20は任意の入れ替え回>数)
        for (j = 0; j < 10; j++) {
            rand = rand() % 10;
            temp = answer[j];
            answer[j] = answer[rand];
            answer[rand] = temp;
        }
    }
}
