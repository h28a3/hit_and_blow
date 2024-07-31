#include"header.h"

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
