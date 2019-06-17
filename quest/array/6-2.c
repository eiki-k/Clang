#include<stdio.h>

int main(){
    int numarray[10];

    for(int i = 9;i >= 0;i--){
        scanf("%d",&numarray[i]);
    }
    for(int i = 0;i < 10; i++){
        printf("%d\n",numarray[i]);
    }

    return 0;
}
