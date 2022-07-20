#include<stdio.h>
#include<string.h>

int test_atoi(char * _string){
    int val=0;
    for(int i=0;_string[i] != '\0';i++){
        val = val * 10 + _string[i] - 48;
    }
    return val;
}

int main(){
    char arr[30];
    char lenght;
    //printf("nhap do dai chuoi: ");scanf("%d",&lenght);
    strcpy(arr,"1234567890");
    printf("chuoi: %s\n",arr);
    printf("chuoi sau khi doi la: %d",test_atoi(arr));
    return 0;   
}