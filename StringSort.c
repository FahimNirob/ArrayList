#include<stdio.h>

int main(){
    int i,j;
    char name[5][10] ;//={"fahim","faysal","nirob","asad","munna"};
    char temp[20];

    printf("Enter names : \n");

    for(i=0 ;i<5;i++){
        gets(name[i]);
    }


    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(strcmp(name[i],name[j])>0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);

            }
        }
    }
    printf("**After sorting**\n");
    for(i=0;i<5;i++){
        puts(name[i]);
    }
    return 0;
}
