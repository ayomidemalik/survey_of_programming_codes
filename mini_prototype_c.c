#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Definition of the Environment which Simulates Python Dictionary
struct StructName {
    char name[20];
    int value;
    char type[10]; // for example, "int"
    struct StructName* next;
};

struct StructName* head = NULL;

// Demonstration of Dynamic Binding - Assignment
void SetVariable(char* name, int val) {
    struct StructName* current = head;
    while (current != NULL) {
        if (strcmp(current->name, name) == 0) {
            current->value = val; // Rebinding the existing value
            return;
        }
        current = current->next;
    }
    // New variable is created if not found synonymous to python behaviour
    struct StructName* NewVar = (struct StructName*)malloc(sizeof(struct StructName));
    strcpy(NewVar->name, name);
    NewVar->value = val;
    strcpy(NewVar->type, "int");
    NewVar->next = head;
    head = NewVar;
    printf("Bound '%s' to %d\n", name, val);
}

// Demonstration of Dynamic Lookup - Scope Resolution
int GetVariable(char* name) {
    struct StructName* current = head;
    while (current != NULL) {
        if (strcmp(current->name, name) == 0) {
            return current->value;
        }
        current = current->next;
    }
    printf("NameError: name '%s' is not defined\n", name);
    return -1; // Error value
}

// The Main Simulation
int main() {
    printf("--- Emulation of Python Runtime in C ---\n");

    // Simulate: x = 10
    SetVariable("x", 10);

    // Simulate: print(x) -> Runtime lookup, not compile time access
    printf("The value of x: %d\n", GetVariable("x"));

    // Simulate: x = 50 (Rebinding)
    SetVariable("x", 50);
    printf("The value of x after rebind: %d\n", GetVariable("x"));

    return 0;
}