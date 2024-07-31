#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 4	//ヒットアンドブローゲームの桁数(1~10)

extern int answer[10], input[N];

void Initialization(void);

void get_answer(void);

void get_player_answer(int count);

