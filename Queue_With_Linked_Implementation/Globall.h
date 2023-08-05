/*
*https://youtu.be/UU7_Z0UgX-Y
* this link contain video this explian list with linked implementation
*/
#ifndef GLOBAL_H
#define GLOBAL_H
typedef struct elementtype {
	int	year;
	float	age;
	int	tmp;
}ElementType;

#define MAXELEMENTS 100

typedef ElementType QueueEntry;
#define MAXQUEUE MAXELEMENTS

typedef ElementType StackEntry;
#define MAXSTACK MAXELEMENTS

typedef ElementType   ListEntry;
#define MAXLIST       MAXELEMENTS

#endif // !GLOBAL_H


