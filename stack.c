#include <stdio.h>
#define Max_Size 10
int stack[Max_Size];
int top=-1;
void push(int item){
    if(top==Max_Size-1)
        printf("Stack Overflow\n");
    else
        stack[++top]=item;   
}
void pop(){
    if(top<0)
        printf("Stack underflow\n");
    else
        printf("%d is delete\n",stack[--top]);
}
void viewStack(){
    int i;
    printf("stack is\n");
    if(top<0)
        printf("Stack empty\n");
    else{
        printf("\nStack\n");
        for(i=0;i<=top;i++){
            printf("%d\n",stack[i]);
        }
    }
}
void main(){
    int n,item;
    char dis;
    printf("\tStack Menu\n");
    printf("1 - Push \n2 - pop\n4 - Satck View\n3 - Exit\n");
    do{   
        printf("\nEnter \t");
        scanf("%d",&n);
        switch(n){
            case 1:printf("Enter element\t");
                   scanf("%d",&item);
                   push(item);
                   viewStack();
                   break;
            case 2:pop(item);
                   viewStack();
                   break;
            case 3:viewStack();
                   break;
            case 4:break;
            default:printf("Wrong input\n");
                    printf("\tStack Menu\n");
                    printf("1 - Push \n2 - pop\n4 - Satck View\n3 - Exit\n");
        }
    }while(n!=3);
}