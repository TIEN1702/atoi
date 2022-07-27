#include<stdio.h>
#include<stdint.h>

#define True 1
#define False 0

int front=0;

uint8_t IsEmpty(int *rear){
    
    if(front==*rear){
        return True;
    }else{
        return False;
    }
}
//xoa phan tu
void DeQueue(int queue[],int *rear){
    if(IsEmpty(rear) == True){
        printf("mang rong!!!");
    }else{
        //queue[front]='\0';
        front++;
    }
}

/// them phan tu
void EnQueue(int queue[],int *rear,int value,int lenght){
    if(*rear==lenght){
        printf("overflow\n");
    }else{
    queue[*rear]=value;
    *(rear)++;
    }
}
int Front(int queue[],int front){
    return queue[front];
}

int main(){
    int queue[]={1,2,3,4,5};
    int lenght=5;
    int *rear=&lenght;
    int size_queue=20;
    for(int i=0;i<lenght;i++){
        EnQueue(queue,rear,i*2,size_queue);
    }
    for(int i=0;i<lenght;i++){
        DeQueue(queue,rear);
    }

    for(int i=0;i<lenght;i++){
        printf("%d\n",queue[i]);
    }
    return 0;
}