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

	int inputNumber = 0;

	CELL head;
	head.next = nullptr;
	printf("5‰ñ‚Ü‚Å“ü—Í‰Â”\\n");
	while (true)
	{
		printf("D‚«‚È”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");

		scanf_s("%d", &val);

		create(&head, val);

		index(&head);

		inputNumber += 1;
		if (inputNumber == 5) {
			break;
		}
	}
	return 0;
}

void create(CELL* head,int val) {
	CELL* newCell;

	newCell = (CELL*)malloc(sizeof(CELL));
	
	newCell->val = val;
	newCell->next = nullptr;

	while (head->next!=nullptr)
	{
		head = head->next;
	}
	head->next = newCell;
}

void index(CELL* head) {
	printf("\nŒ‹‰Ê:");
	while (head->next != nullptr)
	{
		head = head->next;
		if (head->next != nullptr) {
			printf("%d,", head->val);
		}
		if (head->next == nullptr) {
			printf("%d\n", head->val);
		}
	}
}