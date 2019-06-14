#include<stdio.h>

int main(){
    int num[10];
    int *parray;


    for(parray = num;parray <= &num[9];parray++){
        scanf("%d",parray);
        *parray *= 2;
    }

    for(parray = num;parray <= &num[9];parray++){
        printf("%d\n",*parray);
    }

    return 0;
}