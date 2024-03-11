#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void selectionSort(int array[], int arraySize) {
	int i, j, minimalIndex;
	
	for(i = 0; i < arraySize - 1; i++) {
        minimalIndex = i;
        for(j = i + 1; j < arraySize; j++) {
            if(array[minimalIndex] > array[j]) {
                minimalIndex = j;
            }
        }
        if(minimalIndex != i)
        {
            int valueHolder = array[i];
            array[i] = array[minimalIndex];
            array[minimalIndex] = valueHolder;
        }
    }
}


size_t calculateStringSize() {
    char characterBuffer[100];
    printf("-- Enter a string: ");
    scanf("%99s", characterBuffer);

    const char *pointer = characterBuffer;
    size_t stringSize = 0;

    while (*pointer != '\0') {
		stringSize++;
        pointer++;
    }

    return stringSize;
}

void toUpperCase(char *string) {
    while (*string != '\0') {
        if (*string >= 'a' && *string <= 'z') {
            *string = *string - 'a' + 'A';
        }
        string++;
    }
}

int main(int argc, char *argv[]) {
	int numbersArrayOne[7], numbersArrayTwo[10], i, j;
	char inputString[100];
	srand(time(NULL));
	
	for (i = 0; i < 8; i++) {
		numbersArrayOne[i] = rand() % 100;
	}
	
	// code 1
	printf("# This chunk of code generate random array number elements and sort them using selective sort algorithm.\n\n");
	
	printf("Generated array elements before selective sort: %d %d %d %d %d %d %d\n", numbersArrayOne[0], numbersArrayOne[1], numbersArrayOne[2], numbersArrayOne[3], numbersArrayOne[4], numbersArrayOne[5], numbersArrayOne[6]);
	selectionSort(numbersArrayOne, 7);
	printf("Generated array elements after selective sort: %d %d %d %d %d %d %d", numbersArrayOne[0], numbersArrayOne[1], numbersArrayOne[2], numbersArrayOne[3], numbersArrayOne[4], numbersArrayOne[5], numbersArrayOne[6]);

	printf("\n\n-----------------------------------------------------------------------\n\n");

	for (j = 0; j < 10; j++) {
		numbersArrayTwo[j] = rand() % 100;
	}
	
	// code 2
	printf("# This chunk of code only displays odd numbers in randomly generated array elements.\n\n");
	
	printf("Generated array elements : %d %d %d %d %d %d %d %d %d %d\n", numbersArrayTwo[0], numbersArrayTwo[1], numbersArrayTwo[2], numbersArrayTwo[3], numbersArrayTwo[4], numbersArrayTwo[5], numbersArrayTwo[6], numbersArrayTwo[7], numbersArrayTwo[8], numbersArrayTwo[9]);
	printf("Selected odd array elements: ");
	for (i = 0; i < 10; i++) {
		if (numbersArrayTwo[i] % 2 != 0) {
			printf("%d ", numbersArrayTwo[i]);
		}
	}
	
	printf("\n\n-----------------------------------------------------------------------\n\n");
	
	// code 3
	printf("# This chunk of code calculate the size of a string using pointers.\n\n");
	
	size_t stringSize = calculateStringSize();
    printf("The string size is: %zu\n", stringSize);
    
    // code 4
    printf("\n\n-----------------------------------------------------------------------\n\n");
	
	printf("# This chunk of code capitalize a string using pointers.\n\n");

    printf("-- Enter a string : ");
    scanf("%99s", inputString);
    
    toUpperCase(inputString);

    printf("String capitalized : %s\n", inputString);
	
	return 0;
}
