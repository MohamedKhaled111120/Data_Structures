#include"Global.h"

typedef struct listnode {
	ListEntry entry;
	struct listnode* next;
}ListNode;

typedef struct list {
	ListNode* head;
	int		size;
}List;

void CreateList(List* pl);
int ListEmpty(List* pl);
void DestroyList(List* pl); //destroy all of list
void TraverseList(List* pl, void(*Visit)(ListEntry));
int InsertList(int pos, ListEntry e, List* pl);
void DeleteList(int pos, ListEntry* pe, List* pl); // delete one node from list
void RetrieveList(int pos, ListEntry* pe, List* pl);//take copy from node in list without delete it
void ReplaceList(int pos, ListEntry e, List* pl); //replace content of node in list



