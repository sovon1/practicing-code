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








