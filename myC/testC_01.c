#include <stdio.h>

int main() {

    // 控制台输入一个字符，如果输入m，则输出男性，否则输出女性
    char inp;
    // printf("请输入：");
    scanf("%c", &inp);
    if (inp == 'm'){
        printf("男");
    }else{
        printf("女");
    }
    

}