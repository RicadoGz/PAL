#include<stdio.h>
int main(void) {
    int value = 5;

    int* pMark = &value;

    
    // why can not set??
    //printf("%p\n",(void*)pMark);
    *pMark = 10;
    printf("%d",*pMark );
    //printf("%d", value);
    //
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    // 
    ////what in the pMark
    //printf("%p", (void*)pMark);
    //*pMark = 10;
    // 
    // 
    // 
    // 
    //// what happend in here 
    //// let we go to debug
    //printf("%d", value);

   


    //return 0;
    //int value = 5;
    //int & address = value;
    //printf("%p\n", (void*)address);
    //printf("%d", *&value);


    //what is the * two way to use 
    // int * vlaue to define vlaue is a pointer varible 
    // *get the address value 
     
}