#include<header.h>

void hashInitializer(hashmap* ht){
    for(int i=0;i<10;i++){
        ht->coloumns[i]=NULL;
    }
}


void insertData(hashmap *ht , int data){
    int pos = data%10;
    if(ht->coloumns[pos]==NULL){
        ht->coloumns[pos]=(Node*)malloc(sizeof(Node));
        ht->coloumns[pos]->data=data;
        ht->coloumns[pos]->next=NULL;
    } else {
        Node* tracer=ht->coloumns[pos];
        while(tracer){
            if(tracer->next == NULL){
                tracer->next = (Node*)malloc(sizeof(Node));
                tracer=tracer->next;
                tracer->data=data;
                tracer->next = NULL;
            }
            tracer=tracer->next;
        }
    }
}

int retrive(hashmap* ht,int data){
    int pos=data%10;
    Node* tracer = ht->coloumns[pos];
    while(tracer){
        if(tracer->data==data){
            return 1;
        }
        tracer=tracer->next;
    }
    return 0;
}

int display(hashmap* ht){
    
    for(int i=0;i<10;i++){
        Node* tracer = ht->coloumns[i];
        printf("[key]->");
        while(tracer){
            printf("%d ->",tracer->data);
            tracer=tracer->next;
        }
        printf("\n");
    }
    return 0;
}