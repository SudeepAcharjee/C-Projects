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

// Function to merge two sorted linked lists
struct LinkedList mergeSortedLists(struct LinkedList* list1, struct LinkedList* list2) {
    struct LinkedList result;
    initializeLinkedList(&result);

    struct Node* current_node1 = list1->head;
    struct Node* current_node2 = list2->head;

    while (current_node1 != NULL && current_node2 != NULL) {
        if (current_node1->data < current_node2->data) {
            append(&result, current_node1->data);
            current_node1 = current_node1->next;
        } else {
            append(&result, current_node2->data);
            current_node2 = current_node2->next;
        }
    }

    // If one of the lists is not empty, append the remaining elements
    while (current_node1 != NULL) {
        append(&result, current_node1->data);
        current_node1 = current_node1->next;
    }

    while (current_node2 != NULL) {
        append(&result, current_node2->data);
        current_node2 = current_node2->next;
    }

    return result;
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

    // Input for the first sorted linked list
    printf("Enter the number of elements for the first sorted list: ");
    scanf("%d", &n);

    printf("Enter the elements for the first sorted list in ascending order:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &data);
        append(&list1, data);
    }

    // Input for the second sorted linked list
    printf("Enter the number of elements for the second sorted list: ");
    scanf("%d", &n);

    printf("Enter the elements for the second sorted list in ascending order:\n");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &data);
        append(&list2, data);
    }

    // Print the original sorted linked lists
    printf("Original Sorted List 1: ");
    printList(&list1);
    printf("Original Sorted List 2: ");
    printList(&list2);

    // Merge the two sorted linked lists
    struct LinkedList mergedList = mergeSortedLists(&list1, &list2);

    // Print the result after merging
    printf("Merged Sorted List: ");
    printList(&mergedList);

    return 0;
}
