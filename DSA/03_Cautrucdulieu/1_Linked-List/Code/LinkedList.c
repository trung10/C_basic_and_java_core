#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;

//Kiem tra file
int kiemtra(struct node *head){
    if(head==NULL){
        return 1;
    }
    return 0;
}
//Length
int lengthList(struct node *head){
    int i = 0;
    struct node* current = head;
    while(current!=NULL){
        i++;
        current = current->next;
    }
    return i;
}
//insert beninning
void insertBeginning(int data){
    struct node* newNode;
    newNode = malloc(sizeof(struct node));

    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
//insert
void insert(int data){
    if(kiemtra(head)){
        head = malloc(sizeof(struct node));
        head->data = data;
        head->next = NULL;
    }else{
    struct node* current = head;
    while(current->next!=NULL){
        current = current->next;
    }
    current->next = malloc(sizeof(struct node));
    current->next->data = data;
    current->next->next =NULL;
    }
}
//show
void show(){
    struct node* current = head;
    if(current==NULL){
        printf("File empty");
    }else{
    while(current!= NULL){
        printf("%3d", current->data);
        current= current->next;
    }
    }
}
//Remove last
int removeLast(struct node* head){
    int n;
    struct node* lastNode=head;
    while (lastNode->next->next!=NULL){
        lastNode = lastNode->next;
    }
    n = lastNode->next->data;
    free(lastNode->next);
    lastNode->next=NULL;
    return n;
}
int removeFirst(struct node** head){
    int n;
    if(kiemtra(head)){
        //printf("File empty");
        return -1;
    }
        struct node* nextFirst=NULL;
        //nextNode = malloc(sizeof(struct node));
        nextFirst = (*head)->next;
        //nextNode->next=head->next->next;
        n = (*head)->data;
        free(*head);

        (*head) = nextFirst;
        return n;
}
int removee(struct node ** head, int num){
    struct node *temp, *prev;
    temp=*head;
    while(temp!=NULL)
    {
    if(temp->data==num)
    {
        if(temp==*head)
        {
        *head=temp->next;
        free(temp);
        return 1;
        }
        else
        {
        prev->next=temp->next;
        free(temp);
        return 1;
        }
    }
    else
    {
        prev=temp;
        temp= temp->next;
    }
    }
    return 0;
}
int nhap(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    return n;
}
void main(){
    //struct node *m;
    head = NULL;
    int i;
    int nu;
    //int n=0;
    while(1){
        printf("\n________\n1. Add an item to the end\n2. Add an item to the beginning\n3. Show list\n4. Remove the last\n5. Remove the first\n6. Remove a specific\n7. Exit\nChoice: ");
        if(scanf("%d",&i)<=0){
            printf("Enter only an Integer");
            exit(0);
        }else{
        switch(i){
        case 1:
            nu = nhap();
            while(nu!=0){
            if(nu!=0)insert(nu);
            nu=nhap();
            }
            break;
        case 2:
            //nhap();
            insertBeginning(nhap());
            break;
        case 3:
            show();
            break;
        case 4:
            if(kiemtra(head)!=1){
            printf("Removed %d",removeLast(head));
            break;
            }
        case 5:
            if(kiemtra(head)!=1){
            printf("Removed %d",removeFirst(&head));
            }
            break;
        case 6:
            nu = nhap();
            if(removee(&head, nu)){
                printf("%d deleted successfully\n",nu);
            }else{
                printf("%d Not found\n",nu);
            }

            break;
        case 7:
            return;
        default: printf("Invalid option");
            }
        }
    }
}

