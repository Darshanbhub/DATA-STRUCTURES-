#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int front = -1;
int rear = -1;
int stack[SIZE];

void insert()
{
    if(rear == SIZE -1)
    printf("Stack overflow! (Stack is full)\n");
    else
    {
        if(front==-1 && rear==-1)
        {
            front = 0;
            rear = 0;
            
        }
        else
        {
            int ele;
            printf("Enter the number to be inserted : \n");
            scanf("%d", &ele);
            stack[rear++]= ele;
            printf("Elemen inserted %d\n", ele);
            }
    }
}

void delete()
{
    if((front==-1&&rear==-1)||(front == rear  ))
    printf("Stack underflow! (Stack is empty)");
    else
    {
        printf("Deleted element is --> %d", stack[front++]);
        
    }
}

void display()
{
    if((front==-1&&rear==-1)||(front == rear ))
    printf("Stack underflow! (Stack is empty)");
    else
    {
        printf("Queue elements are -->");
        for(int i = front; i!=rear; i++)
        printf("%d ", stack[i]);
    }
    
}

int main()
{
    int choice;
    while(1)
    {
        printf("1.insert  2.delete   3.display 4.EXIT\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            insert();
            break;
            
            case 2:
            delete();
            break;
            
            case 3:
            display();
            break;
            
            case 4:
            exit(0);
            
            
            default:printf("Invalid choice\n");
        }
    }
    return 0;
}









}

void delete()
{
    if(front == -1 || front > rear)
    {
        printf("Queue underflow\n");
        return;
    }
    
    else
    {
        printf("Deleted element is : %d\n", queue_array[front]);
        front = front +1;
    }
}

int main()
{
    int choice;
    while(1)
    {
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            insert();
            display();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Invalid choice\n");
        }
        
    }
}
