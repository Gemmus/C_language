/*
Write a program that asks user to enter numbers or to enter end to stop entering numbers. If user
enters any other text except end the program prints an error message and discards the input. The
program must store the numbers in a linked list where each node is dynamically allocated.

typedef struct node {
 int number;
 struct node *next;
} nnode;

When user enters end the program prints all entered numbers, frees the allocated memory and then
ends.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 50

typedef struct node {
    int number;
    struct node* next;
} nnode;

nnode* create_node(int num);

void free_allocated_memory(nnode* head);

void print_numbers(nnode* head);

int main(void) {

    nnode* head = NULL;
    nnode* tail = NULL;

    char input[MAX_SIZE] = {0};
    bool end = false;
    int num = 0;

    do {

        printf("Enter a number or 'end' to stop: ");

        if (fgets(input, MAX_SIZE, stdin) == NULL ) {
            fprintf(stderr, "Error reading input.\n");
            free_allocated_memory(head);
            exit(EXIT_FAILURE);
        } else {
            input[strcspn(input, "\n")] = 0;

            if (strcmp(input, "end") == 0) {
                end = true;
            } else if (sscanf(input, "%d", &num) == 1) {
                nnode* newNode = create_node(num);
                if (head == NULL) {
                    head = newNode;
                    tail = newNode;
                } else {
                    tail->next = newNode;
                    tail = newNode;
                }
            } else {
                printf("No text allowed but 'end'. ");
            }
        }

    } while (end == false);

    if (head != NULL) {
        print_numbers(head);
        free_allocated_memory(head);
    } else {
        printf("No number was entered. Bye!");
    }

    return 0;
}

nnode* create_node(int num) {
    nnode *newNode = (nnode *) malloc(sizeof(nnode));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed. The programme exits.\n");
        exit(EXIT_FAILURE);
    }
    newNode->number = num;
    newNode->next = NULL;
    return newNode;
}

void free_allocated_memory(nnode* head) {
    while (head != NULL) {
        nnode* temp = head;
        head = head->next;
        free(temp);
    }
    printf("Memory freed. Bye!\n");
}

void print_numbers(nnode* head) {
    printf("The entered numbers: \n");
    while (head != NULL) {
        printf("%d ", head->number);
        head = head->next;
    }
    printf("\n");
}
