#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node*next;
};
struct node*head= NULL;

void push()
{
    printf("Enter data to be inserted: \n"); int item;
    scanf("%d", &item);
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = item ;
    new_node->next = (head);
    (head)= new_node;

}

void display()
{
    struct node*ptr;
    ptr = head;
    printf("The linked list elements are :");
    while(ptr!= NULL)
    {
        printf(" %d ", ptr->data);
        ptr = ptr-> next;
    }
}

void delete_at_front()
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
        printf("\nNode deleted from the begining\n");
        
    }
}

void delete_random()
{
    struct node *ptr, *temp;
    int pos;
    printf("Enter the location of node to be deleted \n");
    scanf("%d", &pos);
    for(int i = 0; i <pos; i++)
    {
        ptr = temp;
        temp= temp->next;
        
    }
    ptr->next= temp->next;
    printf("Deleted node -> %d", ptr->data);
    free(ptr);
    
}

void last_delete()
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
        printf("Node deleted at the end : %d", ptr->data);
        free(ptr);
        
        
    }
}

int main()
{
    int choice;
    while(1)
    {
        printf("1. INSERT\n2.DELETE FROM BEGINING\n3.DELETE FROM SPECIFIED LOCATION\n4.DELETE FROM END\n5.DISPLAY\n6.EXIT\n");
        printf("Enter your choice :");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
             push(); break;
             
             case 2:
             delete_at_front(); break;
             
             case 3:
             delete_random(); break;
             
             case 4:
             last_delete(); break;
             
             case 5:
             display();break;
             
             case 6:
             exit(0);
             
             default: printf("Invalid choice!!! Please enter choice again!\n");
             
             
             
        }
        
    }
    
    
}
