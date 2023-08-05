#include"Globall.h"
typedef struct queuenode {
	QueueEntry entry;
	struct queuenode* next;
}QueueNode;

typedef struct queue {
	QueueNode* front;
	QueueNode* rear;
	int size;
}Queue;

void InitQueue(Queue* pq); //frun to init the queue
void Append(Queue* pq, QueueEntry e); // append(add) element  in queue
void Serve(QueueEntry* pe, Queue* pq); // serve (take) elemnt from queue
int QueueEmpty(Queue* pq); // ckeck if queue is empty? 
int QueueFull(Queue* pq); // check if queue is full
int QueueSize(Queue* pq); // return the queue size
void ClearQueue(Queue* pq); // clear the queue
void TraverseQueue(Queue* pq, void(*pf)(QueueEntry)); // take fun from user in make it loop to each element in queue