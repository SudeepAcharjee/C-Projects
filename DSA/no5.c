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

// Function to count the number of elements in the linked list
int countElements(struct LinkedList* list) {
    int count = 0;
    struct Node* current_node = list->head;
    while (current_node != NULL) {
        count++;
        current_node = current_node->next;
    }
    return count;
}

// Function to search for a number in the linked list
struct Node* searchElement(struct LinkedList* list, int target) {
    struct Node* current_node = list->head;
    while (current_node != NULL) {
        if (current_node->data == target) {
            return current_node; // Return the node if the target is found
        }
        current_node = current_node->next;
    }
    return NULL; // Return NULL if the target is not found
}

int main() {
    struct LinkedList myLinkedList;
    initializeLinkedList(&myLinkedList);

    int n, data;
    printf("Enter the number of elements to append: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &data);
        append(&myLinkedList, data);
    }

    printf("Enter a number to search: ");
    scanf("%d", &data);

    // Count the number of elements and print the result
    int numberOfElements = countElements(&myLinkedList);
    printf("Number of elements in the linked list: %d\n", numberOfElements);

    // Search for a number in the linked list
    struct Node* result = searchElement(&myLinkedList, data);

    // Print the result
    if (result != NULL) {
        printf("Number %d found in the linked list.\n", data);
    } else {
        printf("Number %d not found in the linked list.\n", data);
    }

    return 0;
}
