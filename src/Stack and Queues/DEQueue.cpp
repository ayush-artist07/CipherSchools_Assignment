#include<stdio.h>
#include<stdlib.h>

struct Queue
{
	int front;
	int rear;
	int size;
	int *A;
};

void Create(struct Queue *Q)
{
	printf("Enter the size of the queue");
	scanf("%d",&Q->size);
	Q->A=(int *)malloc(sizeof(int)*Q->size);
	Q->front=Q->rear=-1;
}
bool isFull(struct Queue Q)
{
	if(Q.rear==Q.size-1)
	return 1;
	return 0;
}
bool isEmpty(struct Queue Q)
{
	if(Q.front==Q.rear)
	return 1;
	return 0;
}
void Fenqueue(struct Queue *Q,int x)
{
	if(Q->front==Q->rear)
	{
	printf("Queue is Full");}
	
	
	else if(Q->front+1!=0){
	printf("Queue is Full");
	Q->front--;
	}	
	else{
	Q->A[Q->front]=x;
}
}
void REnqueue(struct Queue *Q,int x)
{
	if(isFull(*Q))
	printf("Queue is Full");
	
	else
	{
		Q->rear++;
		Q->A[Q->rear]=x;
	}
}


int Dequeue(struct Queue *Q)
{
	int x=-1;
	if(isEmpty(*Q))
	printf("Queue is Empty");
	
	else
	{
		Q->front++;
		x=Q->A[Q->front];
	}
	return x;
}

void Display(struct Queue Q)
{
	for(int i=0;i<=Q.size;i++)
	printf("%d ",Q.A[i]);
}
int main()
{
	struct Queue Q;
	Create(&Q);
	REnqueue(&Q,10);
	REnqueue(&Q,14);
	REnqueue(&Q,16);
	Fenqueue(&Q,17);

	Display(Q);
}

