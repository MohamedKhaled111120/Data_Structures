#define MAXQUEUE 100 // should defined by user
#define QueueEntry int //should defined by user
typedef struct queue {
	int front;
	int rear;
	int size;
	QueueEntry entry[MAXQUEUE];
}Queue;

void InitQueue(Queue* pq); //fun to init queue
void Append(QueueEntry e, Queue* pq); //fun to add elemet in Queue
void Serve(QueueEntry* pe, Queue* pq); //fun to serve element from queue
int QueueEmpty(Queue* pq); // Fun return if queue is empty or not
int QueueFull(Queue* pq); // fun return if queue is full or not
int QueueSize(Queue* pq);//fun return the size of queue
void ClearQueue(Queue* pq);// fun to clear the queue
void TraverseQueue(Queue* pq, void(*pf)(QueueEntry));//fun the pass another fun implemented by user to all elements
