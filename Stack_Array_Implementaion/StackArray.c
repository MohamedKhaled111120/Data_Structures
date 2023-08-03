#include"StackArray.h"

void InitStack(stack* ps)
{
	ps->top = 0; // iniliaze stack put in top 0 
}

void Push(StackEntry e, stack* ps) // push value in stack
{
	ps->entry[ps->top] = e;
	ps->top++;
	//or
	//ps->entry[ps->top++] = e;
}

int StackFull(stack* ps)
{
	if (ps->top == MAXSTACK)
		return 1;//return 1 if stack is full
	else
		return 0;// if not full
	//or
	//return ps->top >= MAXSTACK;
}

void Pup(StackEntry* pe, stack* ps)
{
	ps->top--; // make the top point to the last postion full 
	*pe = ps->entry[ps->top]; 
	//or
	//*pe = ps->entry[--ps->top];
}

int StackEmpty(stack* ps)
{
	if (ps->top == 0) //this fun return 1 is stack is already empty
	{
		return 1;
	}
	else
		return 0;
}

void StackTop(StackEntry* pe, stack* ps)
{
	*pe = ps->entry[ps->top - 1]; // take the last element pushed in stack
}
/*
* pre: stack is initialized
* post: returns how many elements exist

*/
int StackSize(stack* ps)
{
	return ps->top; 
}

/*
* pre condition:stack in ititialized
* post: destroy all elements in stack

*/
void ClearStack(stack* ps)
{
	ps->top = 0;

}
/*
* pre codition stack is initialized
*/
void TraverseStack(stack* ps, void(*pf)(StackEntry))
{
	// pf is pointer to fun;
	for (int i = ps->top; i >0; i--)
	{
		(*pf)(ps->entry[i - 1]);
	}
}