#include <stdio.h>
#include <string.h>

#define MAX_COMMAND_LENGTH 100

void print_banner() {
    printf("\n");
    printf("========================================\n");
    printf("       FILE MANAGEMENT SYSTEM\n");
    printf("========================================\n");
    printf("\n");
}

void print_help() {
    printf("\nAvailable commands:\n");
    printf("  help    - Show available commands\n");
    printf("  clear   - Clear the terminal\n");
    printf("  exit    - Exit the program\n");
    printf("\n");
}

int main() {

    char command[MAX_COMMAND_LENGTH];

    print_banner();

    while (1) {

        printf("fm> ");

        if (fgets(command, sizeof(command), stdin) == NULL) {
            break;
        }

        command[strcspn(command, "\n")] = '\0';

        if (strcmp(command, "help") == 0) {
            print_help();
        }

        else if (strcmp(command, "clear") == 0) {
            printf("\033[2J\033[H");
        }

        else if (strcmp(command, "exit") == 0) {
            printf("Exiting File Management System...\n");
            break;
        }

        else if (strlen(command) == 0) {
            continue;
        }

        else {
            printf("Unknown command: %s\n", command);
            printf("Type 'help' to see available commands.\n");
        }
    }

    return 0;
}
