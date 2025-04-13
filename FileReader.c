#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 256  

int main() {
    FILE *file;
    char filename[100];  
    char line[MAX_LINE_LENGTH];

    printf("Enter the filename: ");
    scanf("%s", filename);

  
    file = fopen(filename, "r");

   
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    printf("\nFile contents:\n");

 
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }


    fclose(file);
    
    return 0;
}