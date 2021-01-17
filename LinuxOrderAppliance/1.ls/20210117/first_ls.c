/************************************************************************
    > File Name: first_ls.c
    > Author: Lao Zhenyu
    > Mail: LaoZhenyu_961112@163.com 
    > Created Time: 日  1/17 21:42:11 2021
************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char ** argv){
    int opt;
    while((opt = getopt(argc, argv, "-al")) != -1){
        switch(opt){
            case 'a':
                printf("a found!\n");
                break;
            case 'l':
                printf("l found!\n");
                break;
            default:
                fprintf(stderr, "error file : %s\n", argv[0]);
                exit(1);    
        }
    }
    return 0;
}
