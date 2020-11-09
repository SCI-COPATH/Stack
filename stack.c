#include <stdio.h>
#include <stdlib.h>
#define Max_Size 10
typedef struct{
    int key;
}element;
element stack[Max_Size];
int top=-1;
void push(int item){
    if(top==Max_Size-1)
        printf("Stack Overflow\n");
    else{
        stack[++top].key=item;   
        printf("%d add\n",item);
    }
}
void pop(){
    if(top<0)
        printf("Stack underflow\n");
    else
        printf("%d is delete\n",stack[--top].key);
}
void viewStack(){
    int i;
    printf("stack is\n");
    if(top<0)
        printf("Stack empty\n");
    else{
        printf("Intex\tvlue\n");
        for(i=0;i<=top;i++){
            printf("%d\t%d\n",i,stack[i].key);
        }
    }
}
void main(){
    int n,item;
    char dis;
    printf("Enter 1 - Push \nEnter 2 - pop\nEnter 3 -Exit\nEnter 4 -Satck View\n");
    scanf("%d",&n);
    while(1){
        switch(n){
            case 1:printf("Enter element\t");
                   scanf("%d",&item);
                   push(item);
                   break;
            case 2:pop(item);
                   break;
            case 3:exit(0);
                   break;
            case 4:viewStack();
                    break;
            default:printf("Wrong input\n");
        }
    printf("\nEnter 1 - Push \nEnter 2 - pop\nEnter 3 -Exit\nEnter 4 -Satck View\n");
    scanf("%d",&n);
    };
}