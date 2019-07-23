#include<stdio.h>

int main(){
    int i,j,n;
    char name[5][10] ;
    char temp[20];

    printf("Enter 5 names : \n");
    for(i=0;i<5;i++){
        gets(name[i]);
    }
    // sorting
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(strcmp(name[i],name[j]) > 0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);

            }
        }
    }
    printf("\nAfter sorted : \n");
    for(i=0;i<5;i++){
        puts(name[i]);
    }
    return 0;
}
