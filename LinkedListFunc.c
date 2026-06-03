#include "LinkedList.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct Data GenerateData() {

    struct Data data;

    int ids[] = {101, 202, 303, 404, 505, 606, 707, 808};

    char* names[] = {
        "Alex", "Jordan", "Sam", "Taylor",
        "Riley", "Casey", "Morgan", "Avery"
    };

    int idIndex = rand() % 8;
    int nameIndex = rand() % 8;

    data.EmployeeNumber = ids[idIndex];

    strcpy(data.EmployeeName, names[nameIndex]);

    return data;
}



struct LinkedListNode* createNode(struct Data data) { 
    struct LinkedListNode* node = malloc(sizeof(struct LinkedListNode));

    node->NextNode = NULL;
    node->PreviousNode = NULL;
    node->ListData = data;
    node->index = 0;

    return node;
}


// remember the temp is the node before we do anything
struct LinkedListNode* insertFront(struct LinkedListNode* list, struct Data data) {

    struct LinkedListNode* temp = list;

    while (temp->PreviousNode != NULL) {
        temp = temp->PreviousNode;
    }

    struct LinkedListNode* newNode = createNode(data);

    newNode->NextNode = temp;
    newNode->PreviousNode = NULL;

    temp->PreviousNode = newNode;

    while (temp != NULL) {
        temp->index += 1;
        temp = temp->NextNode;
    }
    return newNode;
}

struct LinkedListNode* insertBack(struct LinkedListNode* list, struct Data data) {
 
    struct LinkedListNode* temp = list;

    while (temp->NextNode != NULL) {
        temp = temp->NextNode;
    }
    struct LinkedListNode* newNode = createNode(data);

    // 
    newNode->NextNode = NULL;
    newNode->PreviousNode = temp;
    newNode->index = temp->index+1;
    return newNode;

}
 

/*struct LinkedListNode* */ void insertIndex(struct LinkedListNode* list, int index, struct Data data) { 
    struct LinkedListNode* temp = list;
    
    while (temp != NULL) {
        if (temp->index == index) {
            struct LinkedListNode* newNode = createNode(data); //This is the node that was asked to be made, we just need to update the suronding nodes
            
                        
        }
        else {
            if (temp->NextNode == NULL){
                printf("Out of bounds of this list");
            }
            else {
                temp = temp->NextNode;
            }
        }
    }

    printNode(temp);
}



void printList(struct LinkedListNode* node) {

    struct LinkedListNode* temp = node;

    while (temp != NULL) {

        printf(
            "EmployeeNumber: %d, Name: %s, Index: %d\n",
            temp->ListData.EmployeeNumber,
            temp->ListData.EmployeeName,
            temp->index
        );

        temp = temp->NextNode;
    }
}
void printNode(struct LinkedListNode* node) {
    
    if (node == NULL) {
        printf("Node is null");
    }
    
    printf("EmployeeNumber: %d, Name: %s, Index %d\n",
        node->ListData.EmployeeNumber,
        node->ListData.EmployeeName,
        node->index
    );
}



