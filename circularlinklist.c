#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
//circular linklist
void linklisttraversal(struct Node* head){
    struct Node* ptr=head;
    do{
        printf("the element:%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
//insertion a node at begining
struct Node* insertionatfirst(struct Node* head,int data){
struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
ptr->data=data;
struct Node*p =head->next;
while(p->next != head){
    p=p->next;
}
//at this point p point the last node
p->next=ptr;
ptr->next=head;
head=ptr;
return head;
}

int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* fifth;

    head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
fourth=(struct Node*)malloc(sizeof(struct Node));
fifth=(struct Node*)malloc(sizeof(struct Node));

head->data=8;
head->next=second;
second->data=6;
second->next=third;
third->data=7;
third->next=fourth;
fourth->data=3;
fourth->next=fifth;
fifth->data=2;
fifth->next=head;
printf("circularlinklist before insertion\n");
linklisttraversal(head);
printf("circularlinklist after insertion\n");
head=insertionatfirst(head,9);
linklisttraversal(head);
return 0;
}
