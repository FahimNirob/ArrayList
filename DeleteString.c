#include<stdio.h>

int main(){
    int i,j;
    int p;
    char name[10][10]={"fahim","faysal","karim","munna","nirob"};
    char temp[200];



    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(strcmp(name[i],name[j])>0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);

            }
        }
    }
    for(i=0;i<5;i++){
        printf("%s\n",name[i]);
    }

    // delete karim

    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if (strcmp(name[i],"karim")&&strcmp(name[j],"karim"))
        }
    }



    return 0;
}

