#include <stdio.h>
#include <stdlib.h>

void* molloc(size_t size);

typedef struct cell{
	int val;
	struct  cell* next;
}CELL;



void create(CELL* head, int val);
void index(CELL* head);

int main() {
	int val;

	CELL head;
	head.next = nullptr;
	while (true)
	{
		scanf_s("%d", &val);

		create(&head, val);

		index(&head);

	}
	return 0;
}

void create(CELL* head,int val) {
	CELL* next;

	next = (CELL*)malloc(sizeof(CELL));
	
	head->val = val;
	head->next = nullptr;

	while (head->next!=nullptr)
	{
		head = head->next;
	}
	head->next = next;
}

void index(CELL* head) {
	while (head->next != nullptr)
	{
		head = head->next;
		printf("%d\n", head->val);
	}
}