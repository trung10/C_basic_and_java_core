#include <stdio.h>
#include <stdlib.h>
#define MAX 10
struct node {
    int data;
    struct node * next;
};
struct stack{
    struct node* top;
};
struct stack s;
int nhap(){
    int n;
    printf("Nhap: ");
    scanf("%d",&n);
    return n;
}
struct node *createNode(int x){
    struct node *p = malloc(sizeof(struct node));
    p->data = x;
    p->next = NULL;
    return p;
}
//Nhap stack
void addtostack(int x){
    struct node *p = createNode(x);
    p->next = s.top;
    s.top = p;
}
//Xuat stack
void xuat(struct stack s){
    if(s.top==NULL){
        printf("File empty");
    }else{
    struct node* p = s.top;
    while(p!=NULL){
        printf("%d ", p->data);
        p=p->next;
    }
    }
}
//Doc top va xoa
int xoa(){
    int x;
    if(s.top!=NULL){
        x = s.top->data;
        s.top= s.top->next;
        return x;
    }
    return 0;
}
void main(){
    s.top = NULL;
    int i;
    while(1){
        printf("\n=======\n1. Them vao stack\n2. Show stack\n3. Xoa top\n4. Thoat\nChon: ");
        if(scanf("%d",&i)<=0){
            printf("Nhap so nguyen");
            //exit(0);
            return;
        }else{
            switch(i){
            case 1:
                addtostack(nhap());
                break;
            case 2:
                xuat(s);
                break;
            case 3:
                if(xoa()!=0)
                {
                    printf("Xoa thanh cong");
                }
                break;
            case 4:
                return;
            default: printf("Khong co chuc nang nay");
            }

        }
    }
}
