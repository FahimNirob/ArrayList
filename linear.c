#include<stdio.h>
int main(){
    int arr[20];
    int i,n;
    int loc = -1;
    int item;
    printf("Array size : ");
    scanf("%d",&n);
    printf("\nArray elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter item to search : ");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(item == arr[i]){
            loc = i + 1;
            break;
        }
    }

    if(loc == -1) printf("Item not found \n");
    else printf("Item found on position : %d\n",loc);
    return 0;
}
