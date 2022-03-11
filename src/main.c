#include<header.h>
int main(int argc , char** argv){
    hashmap ht;
    hashInitializer(&ht);
    printf("select option :- \n\
1.add element to hash table\n\
2.retrive element from hashtable\n\
3.display whole hashtable\n\
0.exit\n");
    int num,data;
    while (1)
    {
    printf(">>> ");
    scanf("%d",&num);
    switch(num){
        case 1:
            
            printf("Enter data to insert : ");
            scanf("%d",&data);
            insertData(&ht,data);
            printf("%d inserted successfully!\n",data);
            break;
        case 2:
            
            printf("Enter data to retrive : ");
            scanf("%d",&data);
            int res = retrive(&ht,data);
            if(res){
                printf("data retrived! --> %d\n",data);
            } else {
                printf("%d not found \n",data);
            }
            break;
        case 3:
            display(&ht);
            break;
        case 0:
            return 0;
    }
    }
    
    return 0;
}