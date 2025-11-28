#include <stdio.h>

int main() {

    // READ A FILE

    // open file in read mode ("r")
    FILE *pFile = fopen("input.txt", "r");
    
    // buffer to store each line
    char buffer[1024] = {0};

    // check if file opened successfully
    if (pFile == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    // read and print file line by line
    while (fgets(buffer, sizeof(buffer), pFile) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(pFile);

    return 0;
}

/*
 * READING FILES:
 * 
 * steps:
 * 1. open file with fopen(filename, "r")
 * 2. check if file opened (NULL check)
 * 3. read from file with fgets()
 * 4. close file with fclose()
 * 
 * functions:
 * fopen(filename, "r")        - open file for reading
 * fgets(buffer, size, file)   - read one line from file
 * fclose(file)                - close file
 * 
 * fgets() returns:
 * - pointer to buffer if successful
 * - NULL if end of file or error
 * 
 * important:
 * - file must exist (or will return NULL)
 * - always check if file opened
 * - buffer size should be large enough for lines
 * - fgets() reads until newline or buffer full
 * - always close files after use
 */