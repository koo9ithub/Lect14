#include <stdio.h>
#include <stdlib.h>

typedef struct linknd {
	
	int data; 
	void* next;
	
} linknd_t;

static linknd_t* list; //Linked List ��ü, static: ���� �� �ǵ��̰� ��

linknd_t* create_node(int value) {
	
	linknd_t* ndPtr;
	
	//���� �޸� �Ҵ� & ������ ����
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
		
		newPtr = create_node(value);	//���ο� ���(NULL)�� ����� �ְ�, 
		ndPtr->next = newPtr;			//�� ��带 �������ش�. 		
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













 
 
 
 
 
 
 
 
 
 
 
 
