#include "LinkedList.h"
#include <stdio.h>


int main() {
    
    struct Data data = {.EmployeeNumber = 1, .EmployeeName = "Kim"};
    struct Data data2 = {.EmployeeNumber = 2, .EmployeeName = "Jim"};
    struct Data data3 = {.EmployeeNumber = 3, .EmployeeName = "Tim"};
    struct Data data4 = {.EmployeeNumber = 4, .EmployeeName = "Pam"};


    struct LinkedListNode* list = createNode(data);
    list = insertBack(list, data2);
    list = insertBack(list, data3);
    
    printList(list);
    printf("\n");

    insertIndex(list, 2, data4);


    
}   