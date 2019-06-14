#include<stdio.h>

int main(){
    int input;
    scanf("%d",&input);
    
    if(input % 2 == 0){
        printf("偶数\n");
    }else{
        printf("奇数\n");
    }
}