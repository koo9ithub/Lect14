#include <stdio.h>
#include <stdlib.h>

typedef struct linknd {
	
	int data; 
	void* next;
	
} linknd_t;

static linknd_t* list; //Linked List 실체, static: 남이 못 건들이게 방어막

linknd_t* create_node(int value) {
	
	linknd_t* ndPtr;
	
	//동적 메모리 할당 & 정수값 저장
	ndPtr = (linknd_t*)malloc( sizeof(linknd_t) );
	
	if (ndPtr == NULL)
	{
		printf("ERROR\n");
		return NULL;
	}
	
	ndPtr->data = value;
	ndPtr->next = NULL;
	
	return ndPtr; 
} 

void addTail(int value) {
	
	linknd_t *ndPtr;
	linknd_t *newPtr;
	
	if (list == NULL)
	{
		return;
	}
	else
	{
		ndPtr = list;
		while (ndPtr->next != NULL) {
			ndPtr = ndPtr->next;
		}
		
		newPtr = create_node(value);	//새로운 노드(NULL)를 만들어 주고, 
		ndPtr->next = newPtr;			//그 노드를 연결해준다. 		
	}
	
} 
 
void genList(void) {
	
	list = create_node(0);
	
	return;
} 

void print_list(void) {
	
	linknd_t *ndPtr;
	
	ndPtr = list->next;
	while(ndPtr != NULL) {
		printf("%i", ndPtr->data);
		ndPtr = ndPtr->next;	
	}
}













 
 
 
 
 
 
 
 
 
 
 
 
