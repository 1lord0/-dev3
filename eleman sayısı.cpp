#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int countElements(struct Node* head) {
    int count = 0;
    struct Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}

int main() {
    struct Node* head = NULL;
    int element, num;

    printf("Kaç eleman gireceksiniz? ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &element);
        insert(&head, element);
    }

    int count = countElements(head);
    printf("Baðlý listedeki eleman sayýsý: %d\n", count);

    return 0;
}

