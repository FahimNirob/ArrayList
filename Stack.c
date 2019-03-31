#include<stdio.h>
#define STACK_MAX 100

typedef struct S {
    int top;
    int data[STACK_MAX];
}Stack;

void push(Stack *s,int item);
int pop(Stack *s);

int main(){
    Stack my_stack;
    my_stack.top = 0;
    int item;
    int i,j;

    printf("Push 5 items:\n");
    for(i=0;i<5;i++){
        scanf("%d",&j);
        push(&my_stack,j);
    }

    printf("Pop items\n");
    for(i=0;i<5;i++){
        item =  pop(&my_stack);
        printf("%d ",item);
    }
}

// push
void push(Stack *s,int item){
    if(s->top < STACK_MAX){
        s->data[s->top] = item;
        s->top = s->top + 1;
    }
    else printf("Stack is overflow ! \n");
}

//pop

int pop(Stack *s){
    int item;
    if(s->top == 0){
        printf("Stack is underflow\n");
    }
    else{
        s->top = s->top - 1;
        item = s->data[s->top];
    }
    return item;
}
