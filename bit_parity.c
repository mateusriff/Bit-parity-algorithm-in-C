#include <stdio.h>
#include <stdlib.h>

int verify_argc_input(int argc) {
    if (argc != 2) {
        printf("Invalid number of arguments\n");
        return 1;
    }
    return 0;
}

int verify_number_input(int number) {
    if (number > 127 || number < 0 ) {
        printf("You must enter a number up to 7 bits\n");
        return 1;
    }
    return 0;
}

int count_1_bits(int number) {
    int mask = 1;
    int result = 0;
    int bits = 0;
    
    for (int i = 0; i < 7; i++) {
        result = number & mask;
        bits += result;
        number = number >> 1;
    }
    
    return bits;
}

void print_binary(int number) {
    int mask = 128;
    int result = 0;

    for (int i = 0; i < 8; i++) {
        result = number & mask;
        
        if (result == 0) {
            printf("%d", result);
        } else {
            printf("1");
        }

        number = number << 1;
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    
    int number;
    int bits = 0;
    
    if (verify_argc_input(argc) == 1) return 1;
    
    number = atoi(argv[1]);
    if (verify_number_input(number) == 1) return 1;

    printf("The informed number was: %d -> ", number);
    print_binary(number); 
    bits = count_1_bits(number); 

    if (bits % 2 == 0) { 
        printf("The number is already even\n");
    } else {
        printf("The new number is: %d -> ", (number + 128));
        print_binary(number + 128);
    }
    return 0;
}