#include <stdio.h>

int main() {

    // WRITE A FILE

    // open file in write mode ("w")
    FILE *pFile = fopen("output.txt", "w");

    // text to write to file
    char text[] = "Hello World!\nThis is written to a file.\nC programming is fun!";

    // check if file opened successfully
    if (pFile == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // write text to file
    fprintf(pFile, "%s", text);

    printf("File was written successfully!\n");

    // close the file
    fclose(pFile);

    return 0;
}

/*
 * WRITING FILES:
 * 
 * steps:
 * 1. open file with fopen(filename, mode)
 * 2. check if file opened (NULL check)
 * 3. write to file with fprintf()
 * 4. close file with fclose()
 * 
 * file modes:
 * "w" - write (creates new file or overwrites existing)
 * "a" - append (adds to end of existing file)
 * "r" - read
 * 
 * functions:
 * fopen(filename, mode)  - open file
 * fprintf(file, format)  - write formatted text
 * fclose(file)           - close file
 * 
 * important:
 * - always check if file opened (pFile == NULL)
 * - always close files after use
 * - "w" mode will overwrite existing content
 * - file is created in same directory as program
 */