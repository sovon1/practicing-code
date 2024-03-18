#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt","w");

    if (file==NULL)
    {

        printf("file wasn't created");
    }


    else
        printf("file created");
    fclose(file);
    getch();
}












#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt","w"); //you could use a to add with the previous string
    char name[]="shohidul islam sovon \nwow this is funnnnnnnnnnnnnnnn";

   int len = strlen(name);
   int i;


    if (file==NULL)
    {

        printf("file wasn't created");
    }


    else
    {

        printf("file is created");
        for(i=0;i<len;i++)
        {

            fputc(name[i],file); 
            
        }
    fclose(file);
    }
    
    getch();
}






#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt","w"); //you could use a to add with the previous string
    char name[3000];


   //int len = strlen(name);
   //int i;


    if (file==NULL)
    {

        printf("file wasn't created");
    }


    else
    {

        printf("file is created \n");
        printf("Enter you string : " );
    gets(name);


            fputs(name,file);
            
        }
    fclose(file);


    return 0;
}



#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt","w"); //you could use a to add with the previous string
    char name[3000];
     int age;

    //int len = strlen(name);
    //int i;


    if (file==NULL)
    {

        printf("file wasn't created");
    }


    else
    {

        printf("file is created \n");
        printf("Enter you name : " );
        gets(name);
        printf("\n Enter you age : " );
        scanf("%d",&age);
        fprintf(file,"Name = %s , Age = %d",name,age);
          printf("file written succesfully");

        
    }
    fclose(file);


    return 0;
}





//reading file

#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt","r");
    char name[3000];
     int age;
     char ch;

    //int len = strlen(name);
    //int i;


    if (file==NULL)
    {

        printf("file wasn't created");
    }


    else
    {

        printf("file is created \n");

       while(!feof(file))

       {
           ch = fgetc(file);
           printf("%c",ch);

       }


fclose(file);
    }



    return 0;
}


/*


1. **`fopen()`:** Opens a file.
    ```c
    FILE *fopen(const char *filename, const char *mode);
    ```
    Example:
    ```c
    FILE *file = fopen("example.txt", "r"); // Opens "example.txt" in read mode
    ```

2. **`fclose()`:** Closes a file.
    ```c
    int fclose(FILE *stream);
    ```
    Example:
    ```c
    fclose(file); // Closes the file stream
    ```

3. **`fprintf()`:** Writes formatted data to a file.
    ```c
    int fprintf(FILE *stream, const char *format, ...);
    ```
    Example:
    ```c
    fprintf(file, "Hello, %s!", "world"); // Writes "Hello, world!" to the file
    ```

4. **`fscanf()`:** Reads formatted data from a file.
    ```c
    int fscanf(FILE *stream, const char *format, ...);
    ```
    Example:
    ```c
    char word[20];
    fscanf(file, "%s", word); // Reads a word from the file into 'word' variable
    ```

5. **`fgetc()`:** Reads a character from a file.
    ```c
    int fgetc(FILE *stream);
    ```
    Example:
    ```c
    char ch = fgetc(file); // Reads a character from the file
    ```

6. **`fgets()`:** Reads a line from a file.
    ```c
    char *fgets(char *str, int n, FILE *stream);
    ```
    Example:
    ```c
    char line[100];
    fgets(line, sizeof(line), file); // Reads a line from the file into 'line' variable
    ```

7. **`fputc()`:** Writes a character to a file.
    ```c
    int fputc(int character, FILE *stream);
    ```
    Example:
    ```c
    fputc('A', file); // Writes character 'A' to the file
    ```

8. **`fputs()`:** Writes a string to a file.
    ```c
    int fputs(const char *str, FILE *stream);
    ```
    Example:
    ```c
    fputs("This is a string", file); // Writes the string to the file
    ```

These examples demonstrate how each function works in the context of file handling in C.
*/


#include<stdio.h>

int main() {
    FILE *file;
    file = fopen("test.txt","r"); // Open file in read mode
    char name[3000];
    int age;

    if (file == NULL) {
        printf("File wasn't created");
    } else {
        printf("File is created\n");
        while(!feof(file))
 {

        fgets(name, sizeof(name), file); // points to be noted here , in the end era we used file pointer not stdin ,that for input it's for read
        printf("%s\n",name);
 }

        fclose(file);
    }

    return 0;
}


#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("data.txt", "r"); // Open file in read mode

    if (file == NULL) {
        printf("File wasn't created or cannot be opened\n");
    } else {
        printf("File is opened successfully\n");

        char name[50];
        int age;
        
        // Read data using fscanf
        while (fscanf(file, "%s %d", name, &age) == 2) {
            printf("Name: %s, Age: %d\n", name, age);
        }

        fclose(file); // Close the file after reading
    }

    return 0;
}

The condition `fscanf(file, "%s %d", name, &age) == 2` is used to check if `fscanf` successfully read both a string (name) and an integer (age) from the file. Let me explain in detail:

- `fscanf` returns the number of successfully matched items. In this case, `%s` matches a string and `%d` matches an integer.
- If `fscanf` successfully reads both a string and an integer, it returns `2`, indicating that it matched both items according to the provided format string.
- If `fscanf` encounters an error while reading or reaches the end of the file before reading both items, it returns a value less than `2`.

So, `fscanf(file, "%s %d", name, &age) == 2` checks if `fscanf` successfully read both a string and an integer from the file. If it did, the loop continues; otherwise, it exits. This prevents the program from entering an infinite loop if there are no more items to read in the file.
