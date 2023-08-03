#pragma once

#define MAXSTACK 100 //stack size
#define StackEntry int  // array data ;

typedef struct Stack {
	int top;
	StackEntry entry[MAXSTACK];
}stack;

void Push(StackEntry, stack*);
void Pup(StackEntry*ps, stack*pe);
int StackEmpty(stack*ps);
int StackFull(stack*ps);
void InitStack(stack*ps);
void StackTop(StackEntry*pe, stack*ps);
int StackSize(stack*ps);
void ClearStack(stack*ps);
void TraverseStack(stack*ps, void(*pf)(StackEntry));


