#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
} Node;

typedef struct hash{
    Node* coloumns[10];
} hashmap;


void insertData(hashmap *ht , int data);
void hashInitializer(hashmap* ht);
int retrive(hashmap* ht,int data);
int display(hashmap* ht);