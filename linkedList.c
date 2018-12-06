typedef struct linknd {
	
	int data;
	void *next;
	
} linknd_t;

static linknd_t *list; //Linked List 실체, static: 남이 못건들이게 방어막 
 
