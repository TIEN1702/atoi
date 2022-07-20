#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<stdlib.h>
char* p;
int test_strtof(char array[],char **ptr){
    int val=0;
    while (*array<47 || *array>57)
    {
        ++array;
    }
    
        while (*array != '\0' && *array >47 && *array <58)
        {
            val= val * 10 + *array - 48;
            ++array;
         /* code */
        }
    array++;
    ptr=&array;
    //printf("%s\n",*ptr);
    return val;
    
}
int main(){
    char array[]={"hello word 234 853"};

    char *ptr;

    printf("%s\n",array);
    printf("chuoi sau khi tach la: %d\n",test_strtof(array,&ptr));
    printf("%s",*ptr);
    //int f1= strtof(array,&ptr);

   // printf("f1: %d\n",f1);

    //int f2 = strtof(ptr,NULL);

    //printf("f2: %d\n",f2);

    return 0;
}