#include"Globall.h"

typedef struct stack {
	int top;
	StackEntry entry[MAXSTACK];
}Stack;

void Push(StackEntry, Stack*);
void Pop(StackEntry*ps, Stack*pe);
int StackEmpty(Stack*ps);
int StackFull(Stack*ps);
void InitStack(Stack*ps);
void StackTop(StackEntry*pe, Stack*ps);
int StackSize(Stack*ps);
void ClearStack(Stack*ps);
void TraverseStack(Stack*ps, void(*pf)(StackEntry));


