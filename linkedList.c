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
 
