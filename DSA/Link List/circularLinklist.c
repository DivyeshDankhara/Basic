#include <stdio.h>
#include <stdlib.h>

struct node
{
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

    if(head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }

    while(ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->next = head;
    return;
}

void DeleteEnd()
{
    if(head == NULL)
    {
        printf("List is already Empty...\n");
        return;
    }
    struct node *ptr = head;
    struct node *p = NULL;

    if(head->next == head)
    {
        free(ptr);
        head = NULL;
        printf("List is Empty now...\n");
        return;
    }
    while(ptr->next != head)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = head;
    free(ptr);
    return;
}

void InsertFirst(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
        temp->next = head;
        return;
    }
    else
    {
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        temp->next = head;
        head = temp;
        ptr->next=head;
        return;
    }

}

void DeleteFirst()
{
    if(head == NULL)
    {
        printf("List is already Empty...\n");
        return;
    }
    struct node *ptr = head;
    struct node *p = NULL;
    p = ptr;

    if(head->next == head)
    {
        free(ptr);
        head = NULL;
        printf("List is Empty now...\n");
        return;
    }
    while(ptr->next != head)
    {
        ptr = ptr->next;
    }
    head = p->next;
    ptr->next = head;
    free(p);
    return;
}

void InserMid(int val,int pos)
{
    struct node *ptr = head;
    struct node *p = NULL;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    if(head->data == pos)
    {
        printf("This is first elment...\n");
        return;
    }
    while(ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = temp;
    temp->next = ptr;
}

void DeleteMid(int val)
{
    struct node *ptr = head;
    struct node *p = NULL;

    if(head->next == head)
    {
        printf("In Your list have only one variable!!");
    }
    while(ptr->data != val)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    free(ptr);
}

void Display()
{
    struct node *ptr = head;
    if(head == NULL)
    {
        printf("List is Empty .....\n");
    }
    else
    {
        while(ptr->next != head)
        {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
        printf("%d ",ptr->data);
        printf("\n");
    }
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

            InserMid(value,pos);
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
    
    return 0;
}