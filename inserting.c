#include<stdio.h>

int main(){
    int i,j;
    int num[15] = {1,3,7,11,32,50,60,67,75,86,95,99};//12
    printf("*** Sorted Array ***\n");
    for(i=0;i<12;i++){
        printf("%d ",num[i]);
    }

    printf("\n*** After inserting 54 ***\n");
    for(i=0;i<12;i++){
        if(num[i]<54 && num[i+1]>54){
            for(j=12; j>i; j--){
                num[j+1] = num[j];
            }
            num[i+1] = 54;
            //break;
        }
    }
    for(i=0;i<13;i++){
        printf("%d ",num[i]);
    }
    printf("\n*** After inserting 99 to 5th position ***\n");
    for(i=12;i>=4;i--){
        num[i+1] = num[i];
    }
    num[4] = 99;
    for(i=0;i<13;i++){
        printf("%d ",num[i]);
    }

}
