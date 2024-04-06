#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head = NULL;

void InsertEnd(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL; 
    temp->prev = NULL;

    if(head == NULL)
    {
        head = temp;
        return;
    }
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    temp->prev = ptr;
    ptr->next = temp;
    return;
}

void DeleteEnd()
{
    struct node *ptr = head;
    struct node *p = NULL;

    if(head->next == NULL)
    {
        head = NULL;
        return;
    }

    while(ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}

void InsertFirst(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if(head == NULL)
    {
        head = temp;
        return;
    }
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void DeleteFirst()
{
    struct node *ptr = head;

    if(head->next == NULL)
    {
        free(ptr);
        head = NULL;
        return;
    }
     
    head = ptr->next;
    free(ptr);
    return;
}

void InsertMid(int val,int pos)
{
    struct node *ptr = head;
    struct node *p;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    while(ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = temp;
    temp->next = ptr;
    temp->prev = p;
    ptr->prev = temp;
    return;
}

void DeleteMid(int val)
{
    struct node *ptr = head;
    struct node *p = NULL;

    while(ptr->data != val)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    ptr->next->prev = p;
    free(ptr);
}

void Display()
{
    struct node *ptr = head;

    if(head == NULL)
    {
        printf("List is empty...\n");
        return;
    }
    while(ptr->next != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("%d ",ptr->data);
    printf("\n");
    return;
}

int main()
{
    int number;
    do
    {
        printf("1. InsertEnd\n");
        printf("2. DeleteEnd\n");
        printf("3. InsertFirst\n");
        printf("4. DeleteFirst\n");
        printf("5. InsertMid\n");
        printf("6. DeleteMid\n");
        printf("7. Display\n");
        scanf("%d",&number);

        if(number<0||number>7)
        {
            printf("Invalid Input\n");
        }
        else if(number==1)
        {
            int value;
            printf("Enter the number :-> ");
            scanf("%d",&value);

            InsertEnd(value);
        }
        else if(number==2)
        {
            DeleteEnd();
        }
        else if(number==3)
        {
            int value;
            printf("Enter the number :-> ");
            scanf("%d",&value);

            InsertFirst(value);
        }
        else if(number==4)
        {
            DeleteFirst();
        }
        else if(number==5)
        {
            int value,pos;
            printf("Enter the position :-> ");
            scanf("%d",&pos);
            printf("Enter the number :-> ");
            scanf("%d",&value);

            InsertMid(value,pos);
        }
        else if(number==6)
        {
            int val;
            printf("Enter value you delete :-> ");
            scanf("%d",&val);

            DeleteMid(val);
        }
        else if(number==7)
        {
            Display();
        }


    }while(number>0 && number<8);
    
}