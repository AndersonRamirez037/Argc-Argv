#include <stdio.h>
#include <stdlib.h>
int main(int argc, char ** argv){
    if(argc <= 1){
        printf("Error\n");
        return 1; 
    } else{
        int num1 = atoi(argv[1]); 
        int num2 = atoi(argv[2]); 
        int result = num1 * num2;
        printf("%d\n",result); 
    }
    return 0;
}