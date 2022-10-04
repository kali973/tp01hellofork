#include <stdio.h>
#include <unistd.h>

int i = 0;

int main(int argc, char *argv[]) {
    printf("Bonjour\n");
    fork();
    printf("Au revoir 1!\n");
    fork();
    printf("Au revoir 2!\n");
    return 0;
}
