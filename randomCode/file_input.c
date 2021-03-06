#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv []){
    
    FILE * stream = fopen("students.dat", "r");
    FILE * wStream = fopen("helloworld.txt", "a");
    
    char iD[1024], lname[1024];
    int a;
    float b;
    char c;
    
    while ( fscanf(stream,
                   "%s %s %d %f %c",
                   iD, lname, &a, &b, &c) != EOF){
        
        printf("ID: %s\n",iD);
        printf( "Name: %s\n",lname);
        printf("marks: %d\n",a);
        printf("gpa: %f\n",b);
        printf("grade: %c\n",c);
        printf("\n");
        fprintf(wStream, "%s %s %d %f %c \n",
                iD, lname, a, b, c);
    }
    
    fclose(stream);
    fclose(wStream);
    return 0;
}
