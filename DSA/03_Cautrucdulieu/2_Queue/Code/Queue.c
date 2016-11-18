#include <stdio.h>
#include <stdlib.h>
#define MAX 10
struct node {
    int data;
    struct node * next;
};
struct Queue{
    struct node *front, *rear;
    int count;
};
struct Queue q;

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
void add(int x){
    struct node *p = createNode(x);
    if(q.count==0){
        q.front = q.rear =p;
        //q.count++;
    }else{
        q.rear->next = p;
        q.rear = p;
    }
    q.count++;
}
//Xuat stack
void xuat(struct Queue q){
    if(q.count==0){
        printf("File empty");
    }else{
    struct node* p = q.front;
    while(p!=NULL){
        printf("%d ", p->data);
        p=p->next;
    }
    }
}
//Doc top va xoa
int xoadau(){
    int x;
    if(q.count==0){
        printf("File empty");
        return 0;
    }else{
        if(q.count==1){
            q.front = q.front = NULL;
            q.count = 0;
        }else{
            q.front=q.front->next;
            q.count--;
        }
        return 1;
    }
}
void main(){
    q.front=q.front=NULL;
    q.count=0;
    int i;
    while(1){
        printf("\n=======\n1. Them vao Queue\n2. Show Queue\n3. Xoa phan tu dau(front)\n4. Thoat\nChon: ");
        if(scanf("%d",&i)<=0){
            printf("Nhap so nguyen");
            //exit(0);
            return;
        }else{
            switch(i){
            case 1:
                add(nhap());
                break;
            case 2:
                xuat(q);
                break;
            case 3:
                if(xoadau())
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
