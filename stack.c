#include <stdio.h>
#include <stdint.h>
int khoi_du_lieu=-1;

uint8_t IsFull(int lenght){
    if( khoi_du_lieu >= lenght - 1){
        return 1;
    }else{
        return 0;
    }
}
uint8_t IsEmpty(){
    if(khoi_du_lieu ==-1){
        return 1;
    }else{
        return 0;
    }
}

void Add(int stack[],int lenght,int value){
    if (IsFull(lenght)==1)
    {
        printf("stack is full!");
    }else{
        khoi_du_lieu++;
        stack[khoi_du_lieu]=value;
    }
}

void delete(int stack[]){
    if(IsEmpty()==1){
        printf("stack is empty!");
    }else{
        //stack[khoi_du_lieu]='\0';
        khoi_du_lieu--;
    }
}


int main(){
    int stack[]={1,2,3,4,5};
    int lenght=5;

    for(int i=0;i<lenght;i++){
        Add(stack,lenght,i*3);
    }
    for (int i = 0; i < lenght; i++)
    {
     delete(stack);
    }
    
    for(int i=0;i<lenght;i++){
        printf("%d\n",stack[i]);
    }
    return 0;
}