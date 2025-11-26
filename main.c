#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("Hej. Welcome to the spare parts inventory!\n");

    while (1) {
        printf("Which part do you need? ");
        scanf(" %[^\n]", input);  // reads a full line

        if (strcmp(input, "hydraulic pump") == 0) {
            printf("I've got hydraulic pump here for you 😊\n");
            break;
        }

        if (strcmp(input, "PLC module") == 0) {
            printf("I've got PLC module here for you 😊\n");
            break;
        }

        if (strcmp(input, "servo motor") == 0) {
            printf("I've got servo motor here for you 😊\n");
            break;
        }

        if (strcmp(input, "Do you actually have any parts?") == 0 ||
            strcmp(input, "Is there anything in stock at all?") == 0) {

            printf("We have 3 part(s)!\n");
            printf("hydraulic pump\n");
            printf("PLC module\n");
            printf("servo motor\n");
            continue;
        }

        printf("I am afraid we don't have any %s in the inventory 😔\n", input);
    }

    return 0;
}
