#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
/*
* print can be FALSE or TRUE. If it is TRUE it only prints the value of counter variable
and reset its value to 0L.
* if print is FALSE, the function works as it should be.
* whichSave records how many calls fibor has been called when parameter n is equals to whichSave.
* For example, if I am interested on how many times fibor has been called with value n=1, I will set
whichSave=1.
*/
unsigned long fibor(unsigned long n, unsigned long  whichSave, char print){
    static unsigned long howManyCalls = 0;
    unsigned long returnValue;
    if(print==TRUE){
        printf("When calling Fibor(%ld), Fibor(%ld) has been called %ld times", n, whichSave, howManyCalls);
        returnValue = howManyCalls;
        howManyCalls = 0;
        return(returnValue);
    }else{
        if(n==whichSave) howManyCalls++;
        if(n==0 || n==1){
            return (n);
        }else{
            return fibor(n-1, whichSave, print)+fibor(n-2, whichSave, print);
        }
    }
}

int main(int argc, char *argv[]){
    if (argc<3){
        printf("Use %s n whichSave\n", argv[0]);
        return 0;
    }

    printf("%ld\n", fibor(atol(argv[1]), atol(argv[2]), FALSE));
    fibor(atol(argv[1]), atol(argv[2]), TRUE);
    return 0;
}
