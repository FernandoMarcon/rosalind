#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    char *seq = argv[1];
    for(int i = 0; i <= strlen(seq); i++){
        char letter = seq[i];
        if (letter == 'T') {
            printf("%c", 'U');
        } else {
            printf("%c",letter);
        };
    };
    printf("\n");
};
