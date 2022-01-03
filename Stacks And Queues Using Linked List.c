#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*next;
};
struct node*head = NULL;


void push()
{
    printf("Enter data to be inserted in stack: \n"); int item;
    scanf("%d", &item);
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = item ;
    new_node->next = head;
    head= new_node;
    printf("Element -> %d added ", item);

}


void pop()
{
    struct node *ptr, *ptr1;
    if(head==NULL)
    {
        printf("The list is empty \n");
        
    }
    
    else
    {
        ptr = head;
        while(ptr->next!=NULL)
        {
            ptr1 = ptr;
            ptr = ptr -> next;
            
        }
        
        ptr1->next = NULL;
        printf("Element popped at the end : %d", ptr->data);
        free(ptr);
        
        
    }
}


void stack_display()
{
    struct node*ptr;
    ptr = head;
    printf("The stack elements are :");
    while(ptr!= NULL)
    {
        printf(" %d ", ptr->data);
        ptr = ptr-> next;
    }
}



void enqueue()
{
    

    printf("Enter data to be inserted in queue: \n"); 
    int item;
    scanf("%d", &item);
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = item ;
    new_node->next = head;
    head = new_node;
    printf("Element -> %d added ", item);


}

void dequeue()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("The list is empty");
    }
    else
    {
        ptr = head;
        head = head->next;
        free(ptr);
        printf("\nElement deleted from the begining\n");
        
    }
}
void queue_display()
{
    struct node*ptr;
    ptr = head;
    printf("The queue elements are :");
    while(ptr!= NULL)
    {
        printf(" %d ", ptr->data);
        ptr = ptr-> next;
    }
}

int main()
{
    int choice, option, option2;
    while(1)
    {
        printf("\n1.Stack\n2.Queue\n3.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
                 while (choice == 1){
            printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
            printf("Enter your choice\n");
            scanf("%d", &option);
           
            switch(option)
            {
                case 1:
                push();break;
                case 2:
                pop();break;
                case 3:
                stack_display();break;
                case 4:
                choice = 10;
            }
            
            }
            }
            
            case 2:
            printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
            printf("Enter your choice\n");
            scanf("%d", &option2);
            switch(option2)
            {
                case 1:
                enqueue();break;
                case 2:
                dequeue();break;
                case 3:
                queue_display();break;
                case 4:
                exit(1);
            }
            
        
        
        
        
    
    }
    
    
    
    
    } 
    
    
return 0;
}
