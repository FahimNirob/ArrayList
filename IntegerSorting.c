#include<stdio.h>

int main(){
    int i,j,temp=0;
    int num[10]={23,3,54,6,65,76,88,99,77,55};
    printf("***Initial array***\n");
    for(i=0;i<10;i++){
        printf("%d ",num[i]);
    }

    for(i=0;i<9;i++){
        for(j=i+1;j<10;j++){
            if(num[j]<num[i]){
            temp=num[j];
            num[j]=num[i];
            num[i]=temp;
            }
        }
    }
    printf("\n\n***After sorting***\n");

    for(j=0;j<10;j++){
        printf("%d ",num[j]);
    }
    return 0;
}
