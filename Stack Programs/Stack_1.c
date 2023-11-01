#include<stdio.h>
int Stack[50],top=-1,n,item,choice;
void Push()
{
    printf("Enter the element to be inserted:");
    scanf("%d",&item);
    if(top==n-1)
    {
        printf("Overflow");
    }
    else
    {
        top=top+1;
        Stack[top]=item;
        printf("Pushed element is %d",Stack[top]);
    }
}
void Pop()
{
    if(top==-1)
    {
        printf("Underflow");
    }
    else
    {
        item=Stack[top];
        top=top-1;
        printf("Deleted element is %d",item);
    }
}
void Display()
{
    printf("\nElements in stack are:");
    for(int i=top;i>=0;i--)
    {
        printf("\n%d ",Stack[i]);
    }
}
void main()
{
    printf("Enter the capacity of stack:");
    scanf("%d",&n);
    do{
        printf("\nEnter the choice:\n 1.Push\n 2.Pop\n 3.Display\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1: Push();
        break;
        case 2: Pop();
        break;
        case 3: Display();
        break;
        default: printf("Invalid choice");
        }
    }
    while(choice!=-1);

}
    