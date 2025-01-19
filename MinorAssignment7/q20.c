#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
typedef struct node {
    int data;
    struct node *next;
} node_t;

// Function prototypes
node_t* create_node(int data);
void insert_at_end(node_t **head, int data);
void sort_linked_list(node_t *head);
void display_list(node_t *head);

int main() {
    int n, value;
    node_t *head = NULL;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Create the linked list
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        insert_at_end(&head, value);
    }

    // Sort the linked list
    sort_linked_list(head);

    // Display the sorted list
    printf("Sorted Linked List in Ascending Order:\n");
    display_list(head);

    return 0;
}

// Function to create a new node
node_t* create_node(int data) {
    node_t *new_node = (node_t *)malloc(sizeof(node_t));
    if (!new_node) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// Function to insert a node at the end of the linked list
void insert_at_end(node_t **head, int data) {
    node_t *new_node = create_node(data);
    if (*head == NULL) {
        *head = new_node;
    } else {
        node_t *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

// Function to sort the linked list in ascending order
void sort_linked_list(node_t *head) {
    if (head == NULL) {
        return;
    }
    node_t *i, *j;
    int temp;

    for (i = head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

// Function to display the linked list
void display_list(node_t *head) {
    node_t *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
