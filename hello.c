/*苦しんで覚えるC言語14*/
#include<stdio.h>
#include<memory.h>
int main(void){
    char sei[20];
    char mei[20];
    int i;

    printf("名字を入力してください:");
    scanf("%s",sei);

    printf("名前を入力してください:");
    scanf("%s",mei);
    
    printf("名前を連結させます。\n");
    strcat(sei,mei);
    printf("%s",sei);
    return 0;
    }