#include<stdio.h>
int main(){
    int i,j;
    int arr[20] = {3,4,6,10,18,33,60,70,74,90}; //10
    printf("Sorted array : ");
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

    printf("\nAfter inserting 54 :\n");
    for(i=0;i<10;i++){
        if(arr[i]<54 && arr[i+1]>54){
            for(j=10;j>i;j--){
                arr[j+1] = arr[j];
            }
            arr[i+1] = 54;
        }
    }
    for(i=0;i<11;i++){
        printf("%d ",arr[i]);
    }
    //
    printf("\n 99 to position 5:\n");
    for(i=10;i>=4;i--){
        arr[i+1] = arr[i];
    }
    arr[4] = 99;
    for(i=0;i<11;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}
