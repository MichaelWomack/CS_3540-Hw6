#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
#include<stdlib.h>

int main()
{	
     char *destination = "/home/mwomac11/temp/new";
     char *currentdir;
     long count = 0;
  	
	if(mkdir(destination, S_IRWXU | S_IRWXG | S_IRWXO) < 0)
	{ 
	     printf("Error on make\nNumber created: %ld\n", count);   
        }
        
          count++;

        for (;;)
        {

          if (chdir(destination) < 0)
                 printf("Problem Changing directory\n");
        
          int path_len = strlen(destination);
          currentdir = malloc(strlen(destination) + strlen("/new") + 1);
          strcpy(currentdir, destination);
          strcat(currentdir, "/new");
          currentdir[strlen(currentdir)] = '\0';
       
          destination = currentdir;
        
          int mk = mkdir(destination, S_IRWXU | S_IRWXG | S_IRWXO); 
          count++;
          
          if(mk < 0)
          {
            printf("Number of directories made: %ld\n", count);
                break;
          }
        }           
             
     return 0;
}
