#include"StackArray.h"
void InitStack(Stack*ps)
{
	ps->top = 0;
}
void Push(StackEntry e, Stack* ps) 
{
	ps->entry[ps->top] = e;
	ps->top++;
}
void Push(StackEntry e, Stack* ps) 
{
	ps->entry[ps->top++] = e;
}
int StackFull(Stack* ps) 
{
	if (ps->top == MAXSTACK)
		return 1;
	else
		return 0;
}
void Pop(StackEntry* pe, Stack* ps)
{
	ps->top--;
	*pe = ps->entry[ps->top];
}
int StackEmpty(Stack* ps) 
{
	if (ps->top == 0)
		return 1;
	else
		return 0;
}
//Same preconditions of Pop.
void StackTop(StackEntry* pe, Stack* ps) 
{
	*pe = ps->entry[ps->top - 1];
}

int StackSize(Stack* ps) 
{
	return ;
}
//Precondition: The stack is Initialized
void TraverseStack(Stack* ps, void(*pf)(StackEntry))
{
	for (int i = ps->top; i > 0; i--)
		(*pf)(ps->entry[i - 1]);
}
