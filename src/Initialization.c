#include"header.h"

void Initialization(void){
	int i;
	for(i = 0; i < 10; i++)
		answer[i] = i;	//正答用配列の初期化
}

void get_answer(){
	srand((int)time(NULL));	//実行毎に答えを変えるための処理
	int i, temp, rand1, rand2;
	for(i = 0; i < 20; i++){		//正答用配列の生成(20は任意の入れ替え回数)
		rand1 = rand() % 10;
		rand2 = rand() % 10;
		temp = answer[rand1];
		answer[rand1] = answer[rand2];
		answer[rand2] = temp;
	}
}
