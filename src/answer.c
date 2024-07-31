#include"header.h"

void make_answer(void) {
    int i, temp, rand1, rand2;
    for (i = 0; i < 10; i++)
        answer[i] = i;  //正答用配列の初期化
    for (i = 0; i < 20; i++) {          //正答用配列の生成(20は任意の入れ替え回>数)
        for (rand1 = 0; rand1 < 10; rand1++) {
            rand2 = rand() % 10;
            temp = answer[rand1];
            answer[rand1] = answer[rand2];
            answer[rand2] = temp;
        }
    }
}
