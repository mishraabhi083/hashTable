#include<header.h>
int main(int argc , char** argv){
    hashmap ht;
    hashInitializer(&ht);
    for(int i=0;i<10;i++){
        insertData(&ht,i);
        insertData(&ht,i+10);
    }
    for(int i=0;i<20;i++){
        int res = retrive(&ht,i);
        if(res){
            printf("data retrived! --> %d\n",i);
        } else {
            printf("%d not found \n",i);
        }
       
    }
    return 0;
}