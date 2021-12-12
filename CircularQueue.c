#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int rear=-1;
int front =-1;
int elements[SIZE];

void insert()
{
    if((rear == SIZE-1)||(rear == front -1))
    printf("ThE QUEUE is full\n");
    else
    {
        if(front==-1&&rear==-1)
        {
        front = 0;
        rear =0;
        }
        
        
            printf("Enter a number to be inserted: \n");
            int item;
            scanf("%d", &item);
            elements[rear]= item;
            rear = (rear +1)%SIZE;
            printf("Number inserted is --> %d \n ", item);
            
        
    }
}

void display()
{
    if((front==-1&&rear==-1))
    printf("The queue is empty\n");
    else
    {
        printf("ELEMENTS: \n");
        int i;
       
        for( i=front; i!=rear; i =(i+1)%SIZE)
        printf("%d \n",elements[i]);
    }
}

void delete()
{
    if((front==-1&&rear==-1))
    printf("The queue is empty\n");
    else
    {
        printf("Deleted element --> %d", elements[front]);
        front = (front + 1)%SIZE;
        
    }
}

int main()
{
    int input;
    while(1)
    {
    printf("Enter your choice \n");
    printf("1.Insert\n 2.Delete\n 3.Display\n 4.Exit\n");
    scanf("%d", &input);
    switch(input)
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
        default:printf("Invalid entry try again \n");
    }
    }
    return 0;
}

