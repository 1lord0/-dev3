#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 50

struct Node {
    char word[MAX_WORD_LENGTH];
    struct Node* next;
};

void insert(struct Node** head, const char* word) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strncpy(newNode->word, word, MAX_WORD_LENGTH);
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

void findWords(struct Node* head, const char* target) {
    struct Node* temp = head;

    while (temp != NULL) {
        if (strstr(temp->word, target) == temp->word) {
            printf("%s\n", temp->word);
        }
        temp = temp->next;
    }
}

int main() {
    struct Node* head = NULL;
    char text[1000];
    char target[MAX_WORD_LENGTH];

    printf("Metni girin: ");
    fgets(text, sizeof(text), stdin);
    text[strlen(text) - 1] = '\0';

    printf("Hedef metni girin: ");
    scanf("%s", target);

    char* token = strtok(text, " ");
    while (token != NULL) {
        insert(&head, token);
        token = strtok(NULL, " ");
    }

    findWords(head, target);

    return 0;
}

