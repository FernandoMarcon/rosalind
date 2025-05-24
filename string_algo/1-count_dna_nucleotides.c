#include <stdio.h>
#include <ctype.h>
#include <string.h>

void count_nucleotides(const char *sequence) {
    int countA = 0, countC = 0, countG = 0, countT = 0, countOther = 0;

    for (int i = 0; sequence[i] != '\0'; i++) {
        // Convert to uppercase for case-insensitive comparison
        char nucleotide = toupper(sequence[i]);

        // Count each nucleotide
        switch (nucleotide) {
            case 'A':
                countA++;
                break;
            case 'C':
                countC++;
                break;
            case 'G':
                countG++;
                break;
            case 'T':
                countT++;
                break;
            default:
                // Count non-nucleotide characters if they exist
                if (isalpha(nucleotide)) {
                    countOther++;
                }
                break;
        }
    }

    printf("Nucleotide counts in the DNA sequence:\n");
    printf("A C G T\n");
    printf("%d %d %d %d\n",countA, countC, countG, countT);
}

int main(int argc, char *argv[]) {
    // Check if a command-line argument was provided
    if (argc < 2) {
        printf("Usage: %s <DNA sequence>\n", argv[0]);
        return 1;
    }

    // Get the DNA sequence from command-line argument
    const char *sequence = argv[1];

    // Count nucleotides
    count_nucleotides(sequence);

    return 0;
}


