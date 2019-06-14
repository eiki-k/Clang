#include<stdio.h>

void Check();

int main(){
    int input;
    scanf("%d",&input);
    Check(input);
}

void Check(int input){
    if(input >= 0){
        if(input % 2 == 0){
            printf("正の偶数です\n");
        }else{
            printf("正の奇数です\n");
        }
    }else{
        if(input % 2 == 0){
            printf("負の偶数です\n");
        }else{
            printf("負の奇数です\n");
        }
    }
}