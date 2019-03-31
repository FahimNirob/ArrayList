#include<stdio.h>

int main(){

    int num[] = {11,22,33,44,55,66,77,88,99};
    int i,loc = - 1;
    int value = 77;

    printf("Search 77 \n");
    for(i=0;i<9;i++){
        if(value==num[i]){
            loc = i + 1;
            break;
        }
    }
    if(loc==-1){
        printf("Item not found\n");
    }
    else{
        printf("Item found on position %d\n ",loc);
    }

}
