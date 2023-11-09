#include<stdio.h>
#include<stdlib.h>
struct node{
  struct node*prev;
  int data;
  struct node*next;
}*first=NULL;

void create(int a[],int n){
  struct node *temp,*last;
  first=(struct node*)malloc(sizeof(struct node));
  first->data=a[0];
  first->prev=NULL;
  first->next=NULL;
  last=first;
  for(int i=1;i<n;i++){
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=a[i];
    temp->next=NULL;
    temp->prev=last;
    last->next=temp;
    last=temp;
  }
}

int count(struct node*p){
  int c=0;
  while(p!=NULL){
      c++;
      p=p->next;
  }return c;
}

void display(struct node *p){
  while(p!=NULL){
    printf("%d  ",p->data);
    p=p->next;
  }
}

void insertfirst(struct node *head,int x){
  struct node *temp;
  temp = (struct node*)malloc(sizeof(struct node));
  temp->data=x;
  temp->prev=NULL;
  temp->next=head;
  temp->prev=temp;
  first=temp;
}

void deletionfirst(struct node *p){
  first=first->next;
  first->prev=NULL;
  p->next=NULL;
}

void deletionlast(struct node *p){
  while(p!=NULL){
  p=p->next;
  }
  p->prev->next=NULL;
  p->prev=NULL;
  free(p);
}

void insertend(struct node *head,int x){
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node*));
  temp->data=x;
  temp->next=NULL;
  temp->prev=NULL;
  if(head==NULL){
    first=temp;
    temp->prev=NULL;}
  while(head->next!=NULL){
    head=head->next;
  }
  head->next=temp;
  temp->prev=head;
}

void insert(struct node *p,int value,int index){
  int c=count(first);
  if(index==0)
  insertfirst(p,value);
  if(index==c)
  insertend(p,value);
  if(index>0&&index<c)
  insert_at_given_index(p,value,index);
}

void insert_at_given_index(struct node *p,int value,int index){
  int c=count(first);
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node*));
  temp->data=value;
  temp->prev=NULL;
  temp->next=NULL;
  if(c<=0||c<index){
    return ;
  }
  for(int i=0;i<index;i++){
    p=p->next;
  }
  temp->next=p->next;
  p->next->prev=temp;
  p->next=temp;
  temp->prev=p;
}

void main(){
  int a[]={19,23,45,67,89,90};
  create(a,6);
  display(first);
  int x= count(first);
  printf("\ncount : %d\n",x);
  insertfirst(first,1000);
  printf("\n");
  display(first);
    printf("\n");
  insertend(first,1000);

    insert_at_given_index(first,9999,2);
  display(first);
  insert(first,444,0);
    printf("\n");
    display(first);
    printf("\n");
    deletionfirst(first);
      display(first);
}
