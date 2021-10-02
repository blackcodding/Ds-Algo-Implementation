#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head = NULL;
struct node *p = NULL;

void showDoubbleLinkedList(){
	p = head;
	printf("Linked list is : \n");
	while(p != NULL){
		printf("%d \n", p->data);
		p = p -> next;
	}
}

void createDoubbleLinkedList(int n){
    int i;
	for(i=1; i<=n; i++) {
		struct node *new = (struct node *)malloc(sizeof(struct node));
		new -> next = NULL;
		new -> prev = NULL;
		printf("Enter the %d node data : \n", i);
		scanf("%d", &(new->data));
		if(head == NULL){
			head = new;
			p = head;
		} else {
			p -> next = new;
			new -> prev = p;
			p = p -> next;
		}
	}
	showDoubbleLinkedList();
}

void InsertAtBeginning(){
    p = head;
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->next = NULL;
    new->prev = NULL;
    printf("Enter the node data for the beginning : \n");
    scanf("%d", &(new->data));
    if(head == NULL){
        head = new;
        p = head;
    }
    else {
        new->next = p;
        p->prev = new;
        head = new;
        p = head;
    }
    showDoubbleLinkedList();
}

void InsertAtEnd(){
    p = head;
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->next = NULL;
    new->prev = NULL;
    printf("Enter the node data for end : \n");
    scanf("%d", &(new->data));
    if(head == NULL){
        head = new;
        p = head;
    }
    else {
        while(p->next != NULL){
            p = p->next;
        }
        p->next = new;
        new->prev = p;
        p = p->next;
    }
    showDoubbleLinkedList();
}

void InsertAtIntermidiate(int pos) {
    int i;
    p = head;
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->next = NULL;
    new->prev = NULL;
    printf("Enter the Intermediate node data : \n");
    scanf("%d", &(new->data));
    if(head == NULL){
        head = new;
        p = head;
    }
    else {
        for(i=1; i<pos-1; i++){
            p = p->next;
        }
        new->next = p->next;
        p->next->prev = new;
        p->next = new;
        new->prev = p;
    }
    showDoubbleLinkedList();
}

int main ()
{
	int n, pos;
	printf("Enter the number of nodes  : \n ");
	scanf("%d", &n);
	createDoubbleLinkedList(n);

	InsertAtBeginning();
	InsertAtEnd();
	printf("Enter the position where the node will be inserted : \n ");
	scanf("%d", &pos);
	InsertAtIntermidiate(pos);
	return 0;
}
