//Program to display current working directory 

#include <unistd.h>
#include <stdio.h>
int main() {
        char cwd[256];

        getcwd(cwd,256);
        printf ("current directory is: %s\n", cwd);

        return 0;

}
