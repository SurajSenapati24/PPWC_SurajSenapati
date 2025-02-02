#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

// Function to create a fan process (Figure-a)
void create_fan_process() {
    printf("Fan Process Tree:\n");
    printf("PID: %d, PPID: %d\n", getpid(), getppid());

    for (int i = 0; i < 3; i++) { // Creating three child processes
        pid_t pid = fork();
        if (pid == 0) { // Child process
            printf("PID: %d, PPID: %d\n", getpid(), getppid());
            exit(0); // Exit child
        }
    }
    for (int i = 0; i < 3; i++) { // Parent waits for all children
        wait(NULL);
    }
}

// Function to create a chain process (Figure-b)
void create_chain_process() {
    printf("\nChain Process Tree:\n");
    printf("PID: %d, PPID: %d\n", getpid(), getppid());

    for (int i = 0; i < 3; i++) { // Creating a chain of processes
        pid_t pid = fork();
        if (pid == 0) { // Child process
            printf("PID: %d, PPID: %d\n", getpid(), getppid());
        } else { // Parent should wait to ensure chain formation
            wait(NULL);
            break;
        }
    }
}

int main() {
    pid_t pid = fork();
    
    if (pid == 0) { // Child creates fan process
        create_fan_process();
        exit(0);
    } else { // Parent creates chain process
        wait(NULL);
        create_chain_process();
    }

    return 0;
}
