#include<stdio.h>
int main(){
    int i,j,n,item;
    int arr[20];
    int low,mid,high;

    printf("Array size : ");
    scanf("%d",&n);
    printf("\nArray elements ascending order : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    low = 0;
    high = n - 1;

    printf("\nEnter item to search : ");
    scanf("%d",&item);
    while(low<=high){
        mid = (low + high)/2;
        if(item == arr[mid]){
            printf("Item found on position : %d\n",mid+1);
            break;
        }
        else if(item > arr[mid]){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    if(low > high){
        printf("Failed to search !");
    }
    return 0;
}
