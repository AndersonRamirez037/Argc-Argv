#include <stdio.h>
#include <stdlib.h>
int main(int argc, char ** argv){
    if(argc <= 1){
        printf("Error\n");
        return 0;
    } else if(argc < 0){
        printf("0\n");
    }
    int cents = atoi(argv[1]);
    int count = 0;

    count += cents / 25; 
    cents %= 25; 

    count += cents / 10; 
    cents %= 10;

    count += cents / 5; 
    cents %= 5; 

    count += cents / 2; 
    cents %= 2; 

    count += cents; 

    printf("%d\n", count);
    return 0;
}