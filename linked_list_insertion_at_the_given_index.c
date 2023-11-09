#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head=NULL;

int count(struct node*p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }return c;
}

void create(int a[],int n){
    struct node *temp,*last;
head=(struct node*)malloc(sizeof(struct node));
head->data=a[0];
head->next=NULL;
last = head;
for(int i=1;i<n;i++){
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=a[i];
    temp->next=NULL;
    last->next=temp;
    last=temp;
}
}

// void endinsert(struct node *p,int data){
//     struct node *et;
//     et=(struct node *)malloc(sizeof(struct node *));
//
//     et->data=data;
//     et->next=NULL;
//     while(p->next!=NULL){
//         p=p->next;
//     }
//     p->next=et;
// }


void insert(struct node *p,int value,int index){
  int c=count(head);
  if(index==0){
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node*));
  temp->data=value;
  temp->next=p;
  head=temp;
  }

  if(index==c){
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node*));
  temp->data=value;
  temp->next=NULL;
  while(p->next!=NULL){
     p=p->next;
  }
  p->next=temp;
}
if(index>0&&index<c){
 struct node *temp,*q;
 temp=(struct node*)malloc(sizeof(struct node*));
 temp->data=value;
 temp->next=NULL;
 q=(struct node*)malloc(sizeof(struct node*));
 q=NULL;
 for(int i=0;i<index;i++){
    q=p;
    p=p->next;
 }
 temp->next=q->next;
 q->next=temp;
}
}

void display(struct node *p){
    while(p!=NULL){
printf("%d  ",p->data);
p=p->next;
    }
}

void main(){

    int a[]={19,23,45,67,89,90};
    create(a,6);
    //
    // rdisplay(head);
    insert(head,1000,3);
    display(head);
    // free(temp);
    free(head);
    head=NULL;

}
// void display(struct node *p){
//     while(p!=NULL){
// printf("%d  ",p->data);
// p=p->next;`  `
//     }
// }
int rdisplay(struct node*p){
    if(p!=NULL){
printf("%d  ",p->data);
return rdisplay(p->next);
    }return 0;
}
// int count(struct node*p){
//     int c=0;
//     while(p!=NULL){
//         c++;
//         p=p->next;
//     }return c;
// }
