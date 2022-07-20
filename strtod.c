#include<stdio.h>
#include<stdint.h>
#include<string.h>

int test_strtod(char array[]){
    int val=0;
    for(int i=0; array[i] != '\0';++i){
        if(array[i]>=48 && array[i]<=57){
            val = val *10 + array[i] - 48;
        }
    }
    return val;
}

int main(){
    char array[30];
    double ref;

    strcpy(array, "hello word 12365");
    //ref=strtod(array,&ptr);
    printf("chuoi: %s\n",array);
    //printf("Gia tri cua ref: %d\n",(int)ref);
    printf("chuoi sau khi cat la: %d\n",test_strtod(array));
    return 0;
}  