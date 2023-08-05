#include"StackLinked.h"
#include <cstddef>

void InitStack(Stack* ps)
{
	ps->top = NULL; // make the top pointer point to null
	ps->size = 0; //inilize the size of stack with zero that no elements had pushed
}
/*
* pre condition: the stack exist and initialized
* post condition : the element has been stored at the top of stack
*/
void Push(StackEntery e, Stack* ps)
{
	//create pointer to access the node has been created by malloc function with size of stacknode
	StackNode* pn = (StackNode*)malloc(sizeof(StackNode)); 
	pn->entry = e; //put the value in the entry of stack
	pn->next = ps->top; // make the pointer the point to the next element  
	ps->top = pn; // make the top pointer point to the top last element pushed
	ps->size++; //increase the size of stack by one 
}
/*
* pre condition:stack is exist and not empty
* post condition: the elemet at top of stack has been removed and returned in *pe
*/

void Pup(StackEntery* pe, Stack* ps)
{
	StackNode* pn; // temparay pointer to point the node will be freed 
	*pe = ps->top->entry; // put the value which top point to it in *pe
	pn = ps->top; // point to the node will be freed 
	ps->top = ps->top->next; //make thh top pointer point to the next node 
	free(pn); // free the node
	ps->size--; // dercement the stack size by one  
}
 /*
 * pre: the Stack is exist
 * post : returns the status 1 or 0
 */
int StackEmpty(Stack* ps)
{
	return ps->top == NULL; 
}

int StackFull(Stack* ps)
{
	return 0; 
}
/*
* pre:the stack is exist
* post:All elements is freed
*/
void ClearStack(Stack* ps)
{
	StackNode* pn = ps->top;
	while (pn)
	{
		pn = pn->next;
		free(ps->top);
		ps->top = pn;
	}
	ps->size = 0;
}

/*
* pre :the stack is exist
* post:function is passed to process every element
*/
void TraverseStack(Stack* ps, void(*pf)(StackEntery))
{
	StackNode* pn = ps->top;
	while (pn)
	{
		(*pf)(pn->entry);
		pn = pn->next;
	}
}
void StackTop(StackEntery* pe, Stack* ps)
{
	*pe = ps->top->entry; // take copy of the last element in stack;
}