/**** Program C8.1: mkdir.c: run as a.out dirname ****/
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    int r;
    if (argc < 2) {
        printf("Usage: %s dirname\n", argv[0]); 
        exit(1);
    }

 for (int i = 1; i < argc; i++) {

        if (mkdir(argv[i], 0755) < 0) {
            perror(argv[i]);
        }
    }

    
    return 0;
}