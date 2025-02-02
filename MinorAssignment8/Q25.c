#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void create_processes() {
    pid_t pid1, pid2, pid3, pid4, pid5, pid6;

    printf("Process ID: %d, Parent ID: %d, fork() return: %d\n", getpid(), getppid(), fork());

    pid1 = fork();  // First child
    if (pid1 == 0) {
        printf("Process ID: %d, Parent ID: %d\n", getpid(), getppid());
        exit(0);
    }

    pid2 = fork();  // Second child
    if (pid2 == 0) {
        printf("Process ID: %d, Parent ID: %d\n", getpid(), getppid());

        pid4 = fork();  // Child of second child
        if (pid4 == 0) {
            printf("Process ID: %d, Parent ID: %d\n", getpid(), getppid());

            pid5 = fork();  // Chain process
            if (pid5 == 0) {
                printf("Process ID: %d, Parent ID: %d\n", getpid(), getppid());

                pid6 = fork();  // Another chain process
                if (pid6 == 0) {
                    printf("Process ID: %d, Parent ID: %d\n", getpid(), getppid());
                    exit(0);
                }
                wait(NULL); // Wait for child
                exit(0);
            }
            wait(NULL); // Wait for child
            exit(0);
        }
        wait(NULL); // Wait for child
        exit(0);
    }

    wait(NULL);
    wait(NULL);
}

int main() {
    create_processes();
    return 0;
}
