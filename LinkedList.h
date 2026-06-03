#pragma once


struct Data {
    int EmployeeNumber;
    char EmployeeName[16];
};

struct LinkedListNode { 

    struct LinkedListNode* NextNode;
    struct LinkedListNode* PreviousNode;
    struct Data ListData;
    int index;
};


struct Data GenerateData();

struct LinkedListNode* createNode(struct Data);

struct LinkedListNode* insertFront(struct LinkedListNode* list, struct Data data);
struct LinkedListNode* insertBack(struct LinkedListNode* list, struct Data data);
//struct LinkedListNode* insertIndex(struct LinkedListNode* list, int index, struct Data data);
void insertIndex(struct LinkedListNode* list, int index, struct Data data);

void removeFront(struct LinkedListNode* list);
void removeBack(struct LinkedListNode* list);
void removeIndex(struct LinkedListNode* list, int index);

void printList(struct LinkedListNode* list);
void printNode(struct LinkedListNode* node);