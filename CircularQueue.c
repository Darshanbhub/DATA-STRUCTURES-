#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 5

int items[SIZE];
int front = -1, rear=-1;

bool isFull(){
    printf("%d", front);
    printf("%d", rear);
    if((front==(rear +1) % SIZE)||(front ==0 && rear == SIZE -1))
    return true;
    else false;
}

int isEmpty(){
    if(front==-1)
    return 1;
}

void enQueue(int element){
    if(isFull())
    printf("\nQueue is full!!\n");
    else{
        if(front==-1)
        front =0;
        rear=0;
        rear = (rear +1)%SIZE;
        items[rear]=element;
        printf("\nInserted --> %d", element);
    }
}

int deQueue()
{
    int element;
    if(isEmpty()){
        printf("\nQueue is empty!!\n");
        return(-1);
        
    }
    else{
        element = items[front];
        if(front==rear){
            front = -1;
            rear = -1;
        }
        else{
            front = (front +1)%SIZE;
        }
        printf("\nDeleted element --> %d\n", element);
        return (element);
    }
}

void display(){
    int i;
    if (isEmpty())
    printf("\n Empty queue\n");
    else{
        printf("\nFront --> %d", front);
        printf("\nItems -->");
        for(i=front; i!=rear; i=(i+1)%SIZE){
            printf("%d", items[1]);
            printf("\nRear --> %d\n", rear);
        }
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("1.ENQUEUE   2.DEQUEUE   3.DSIPLAY   4.EXIT\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            enQueue(choice);
            break;
            
            case 2:
            deQueue();
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
