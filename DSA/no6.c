#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// LinkedList structure
struct LinkedList {
    struct Node* head;
};

// Function to initialize a linked list
void initializeLinkedList(struct LinkedList* list) {
    list->head = NULL;
}

// Function to append a new node to the linked list
void append(struct LinkedList* list, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (list->head == NULL) {
        list->head = new_node;
        return;
    }

    struct Node* last_node = list->head;
    while (last_node->next != NULL) {
        last_node = last_node->next;
    }

    last_node->next = new_node;
}

// Function to concatenate two linked lists
void concatenateLists(struct LinkedList* list1, struct LinkedList* list2) {
    if (list1->head == NULL) {
        list1->head = list2->head;
    } else {
        struct Node* last_node = list1->head;
        while (last_node->next != NULL) {
            last_node = last_node->next;
        }
        last_node->next = list2->head;
    }
    // Set list2 to an empty list after concatenation
    list2->head = NULL;
}

// Function to print the elements of a linked list
void printList(struct LinkedList* list) {
    struct Node* current_node = list->head;
    while (current_node != NULL) {
        printf("%d -> ", current_node->data);
        current_node = current_node->next;
    }
    printf("NULL\n");
}

int main() {
    struct LinkedList list1, list2;
    initializeLinkedList(&list1);
    initializeLinkedList(&list2);

    int n, data;

    // Input for the first linked list
    printf("Enter the number of elements for the first list: ");
    scanf("%d", &n);

    printf("Enter the elements for the first list:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &data);
        append(&list1, data);
    }

    // Input for the second linked list
    printf("Enter the number of elements for the second list: ");
    scanf("%d", &n);

    printf("Enter the elements for the second list:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &data);
        append(&list2, data);
    }

    // Print the original linked lists
    printf("Original List 1: ");
    printList(&list1);
    printf("Original List 2: ");
    printList(&list2);

    // Concatenate the two linked lists
    concatenateLists(&list1, &list2);

    // Print the result after concatenation
    printf("Concatenated List: ");
    printList(&list1);

    return 0;
}

