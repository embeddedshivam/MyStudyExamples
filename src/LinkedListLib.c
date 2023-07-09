
#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *link;
};

struct node *START=NULL;

struct node* createNode(){
	struct node *n;
	n=(struct node*) malloc(sizeof(struct node));
	return n;
}

/*Generic Implementation for Stack push: Adding element at Last*/
void pushElement(int value){
	struct node *temp, *t;
	temp = createNode();
	temp->info = value;
	temp->link = NULL;
	if (START==NULL){
		START=temp;
	}
	else{
		t=START;
		while(t->link !=NULL){
			t=t->link;
		}
		t->link =temp;
	}
}

/*Generic Implementation for Stack pop: Deleting element from Last*/
void popElement(){
	struct node *temp;
	if (START == NULL){
		printf("Cannot Pop Element, List is Empty!!! \n");
	}

}

/*Generic Implementation for Queue Enqueue: Adding element at Last*/
void enqueueElement(int value){
	struct node *temp, *t;
	temp = createNode();
	temp->info = value;
	temp->link = NULL;
	if (START==NULL){
		START=temp;
	}
	else{
		t=START;
		while(t->link !=NULL){
			t=t->link;
		}
		t->link =temp;
	}
}

/*Generic Implementation for Queue Dequeue: Removing element from First*/
void dequeueElement(){
	struct node *r;
	if (START == NULL){
		printf("Dequeue is not Possible, List is Empty!!! \n");
	}
	else{
		r=START;
		START = START->link;
		free(r);
	}
}

void printList(){
	struct node *t;
	if (START ==NULL){
		printf("List is Empty!!! \n");
	}
	else{
		t=START;
		while(t!=NULL){
			printf(" %d ", t->info);
			t= t->link;
			if (t!=NULL){
				printf(" -> ");
			}
		}
		printf(" \n ");
	}
}


int main(){
	for (int i=0;i<15;i++){
		enqueueElement(i);
	}
	printList();
	dequeueElement();
	printList();
	return 0;
}
