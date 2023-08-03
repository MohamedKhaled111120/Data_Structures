
#define StackEntery int // user should define this satck entry

typedef struct stacknode {
	StackEntery entry;
	struct stacknode* next;
	
}StackNode;

typedef struct stack {
	StackNode* top; // pointer of stack 
	int size;
}Stack;

void InitStack(Stack *ps);
void Push(StackEntery e, Stack* ps);
void Pup(StackEntery* pe, Stack* ps);
int StackEmpty(Stack* ps);
int StackFull(Stack* ps);
void ClearStack(Stack* ps);
void TraverseStack(Stack* ps, void(*pf)(StackEntery));
void StackTop(StackEntery* pe, Stack* ps);