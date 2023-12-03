#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/stat.h>
#include<ncurses.h>
#include"../include/syntax.h"



int main(int argc, char* argv[]) {
    //check if args are greater than 2
    if (argc < 2) {
        printf("you must provide more command line arguments");
        return 0;
    }
    //open file
    char* filepath = argv[1];
    //annoying that juss putting 'r' dosnt work some reason causes seg fault
    const char option = 'r';
    
    FILE *fp = fopen(filepath, &option);
    if (!fp) {
        printf("please provide a valid path");
        return -1;
    }
    //weird sys structure macos problems
    struct stat st;
    //file no juss gets the file number links to file descriptor
    fstat(fileno(fp), &st);
    //not the most best way to do it what about compression :(
    const int filesize = st.st_size;
    char buffer[filesize];
    //fread simple
    int eof = fread(buffer, sizeof(char), filesize, fp);
    //for loop 

    char* text = malloc(sizeof(buffer));
    strcpy(text, buffer);
    //fclose if you dont do this the file descriptor stays active
    //even after the program closes
    fclose(fp);

    filetype type = checkFileType(filepath);
    rustlang(text);
    free(text);
    //exit
    return 0;
}