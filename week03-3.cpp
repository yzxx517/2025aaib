/// week03.cpp
#include <stdio.h>
int main()
{/// 從0開始, 中間寫多少就跑多少次
    for(int i=0 ; i<5 ; i++){
        printf("%d" , i );
    }/// 電腦的 for 迴圈 從0開始

    printf("\n"); ///跳行

    ///人類比較麻煩, 從1開始數
    for(int i=1; i<=5; i++) {
        printf("%d ", i);
    }///人類的 for 迴圈 從1開始
}
