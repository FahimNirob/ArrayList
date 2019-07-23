#include<stdio.h>
int main(){
    int i,j,n,temp;
    int arr[20];
    printf("Enter array size : ");
    scanf("%d",&n);
    printf("\nEnter array items : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // Bubble sorting : Ascending
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j] < arr[i]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    printf("\nAscending : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // Bubble sorting : Descending
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j] > arr[i]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    printf("\nDescending : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}
