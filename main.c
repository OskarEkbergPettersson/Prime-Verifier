#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool is_prime(int number){
    if(number % 2 == 0){
        return false;
    }

    for(int i = 3; i < number/2; i += 2){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    if(argc != 2){
        fprintf(stderr, "Incorrect amount of arguments\n");
        fprintf(stderr, "Usage: <prime-verifier-file> <number to verify>\n");
        return 1;
    }

    int number = atoi(argv[1]);
    if(is_prime(number)){
        printf("The number %i is a prime number!\n", number);
    } else {
        printf("The number %i is not a prime number!\n", number);
    }

    return 0;
}
