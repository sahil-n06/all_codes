#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head=NULL;

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

void insertb(struct node *p,int data){
  struct node*temp;
  temp=(struct node*)malloc(sizeof(struct node));
  temp->data=data;
  temp->next=head;
  head=temp;
}

void main(){

    int a[]={19,23,45,67,89,90};
    create(a,6);
    //
    // rdisplay(head);
    insertb(head,10);
    display(head);
    // free(temp);
    free(head);
    head=NULL;

}
void display(struct node *p){
    while(p!=NULL){
printf("%d  ",p->data);
p=p->next;
    }
}
void rdisplay(struct node*p){
    if(p!=NULL){
printf("%d  ",p->data);
return rdisplay(p->next);
    }return 0;
}
int count(struct node*p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }return c;
}
