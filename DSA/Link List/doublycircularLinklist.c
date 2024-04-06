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
        head->next = temp;
        head->prev = temp;
        return;
    }

    while(ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = head;
    temp->prev = ptr;
    head->prev = temp;
}

void DeleteEnd()
{
    struct node *ptr = head;
    struct node *p = NULL;

    if(head == NULL)
    {
        printf("List is empty...\n");
        return;
    }
    if(head->next == head)
    {
        head = NULL;
        free(ptr);
        return;
    }
    while (ptr->next != head)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = head;
    free(ptr);
    head->prev = p;
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
        head->next = temp;
        head->prev = temp;
    }
    
}

void Display()
{
    struct node *ptr = head;

    if(head == NULL)
    {
        printf("List is empty...\n");
        return;
    }
    else
    {
        while(ptr->next != head)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
        printf("%d\n",ptr->data);
    }
}

void Displaylast()
{
    struct node *ptr = head;

    if(head == NULL)
    {
        printf("List is empty...\n");
        return;
    }
    while(ptr->next != head)
    {
        ptr = ptr->next;
    }
    while(ptr != head)
    {
        printf("%d ",ptr->data);
        ptr = ptr->prev;
    }
    printf("%d \n",ptr->data);
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
        printf("8. DisplayReverse\n");
        scanf("%d",&number);

        if(number<0||number>8)
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
        // else if(number==4)
        // {
        //     DeleteFirst();
        // }
        // else if(number==5)
        // {
        //     int value,pos;
        //     printf("Enter the position :-> ");
        //     scanf("%d",&pos);
        //     printf("Enter the number :-> ");
        //     scanf("%d",&value);

        //     InserMid(value,pos);
        // }
        // else if(number==6)
        // {
        //     int val;
        //     printf("Enter value you delete :-> ");
        //     scanf("%d",&val);

        //     DeleteMid(val);
        // }
        else if(number==7)
        {
            Display();
        }
        else if(number==8)
        {
            Displaylast();
        }


    }while(number>0 && number<9);
    
    return 0;
}