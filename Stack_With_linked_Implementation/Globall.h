/*
* https://youtu.be/JmlIHoqaj4I
* https://youtu.be/ePRs24VWHtA
* https://youtu.be/kahbXJ_nQzU
* this link contain video this explian stack with array implementation
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


