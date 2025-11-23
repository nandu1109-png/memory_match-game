#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4            // 4x4 board
#define PAIRS (SIZE*SIZE/2)

void shuffle(int arr[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void printBoard(int revealed[], int values[]) {
    printf("\n    0 1 2 3\n");
    printf("   ---------\n");
    for (int r = 0; r < SIZE; r++) {
        printf("%d | ", r);
        for (int c = 0; c < SIZE; c++) {
            int idx = r * SIZE + c;
            if (revealed[idx])
                printf("%d ", values[idx]);
            else
                printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int values[SIZE * SIZE];
    int revealed[SIZE * SIZE] = {0};

    // Fill pairs: 1 1 2 2 3 3 ...
    for (int i = 0; i < PAIRS; i++) {
        values[2 * i] = i + 1;
        values[2 * i + 1] = i + 1;
    }

    srand(time(NULL));
    shuffle(values, SIZE * SIZE);

    int matches = 0;

    printf("=== Memory Match Game ===\n");

    while (matches < PAIRS) {
        int r1, c1, r2, c2;

        printBoard(revealed, values);

        // FIRST PICK
        printf("Pick first card (row col): ");
        scanf("%d %d", &r1, &c1);
        int i1 = r1 * SIZE + c1;

        if (revealed[i1]) {
            printf("Card already revealed. Try again.\n");
            continue;
        }

        revealed[i1] = 1;
        printBoard(revealed, values);

        // SECOND PICK
        printf("Pick second card (row col): ");
        scanf("%d %d", &r2, &c2);
        int i2 = r2 * SIZE + c2;

        if (revealed[i2]) {
            printf("Card already revealed. Try again.\n");
            revealed[i1] = 0; // reset
            continue;
        }

        revealed[i2] = 1;
        printBoard(revealed, values);

        // MATCH?
        if (values[i1] == values[i2]) {
            printf("Match!\n");
            matches++;
        } else {
            printf("No match.\n");
            revealed[i1] = 0;
            revealed[i2] = 0;
        }

        printf("Matches found: %d / %d\n", matches, PAIRS);
    }

    printf("\n🎉 Congratulations! You matched all pairs!\n");
    return 0;
}

   