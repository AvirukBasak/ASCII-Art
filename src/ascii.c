#include <stdio.h>
#include <string.h>

#define RED "\e[31m"
#define YEL "\e[33m"
#define RST "\e[0m"

int main(int argsc, char **args) {
    if (argsc >= 2) {
        int c;
        for (int i = 1; i < argsc; i++) {
            printf(" %d:\t{" YEL, i);
            for (int j = 0; j < strlen(args[i]); j++) {
                if (args[i][j] == '\\') {
                    j++;
                    if (args[i][j] == 't') c = 9;
                    else if (args[i][j] == 'n') c = 10;
                    else if (args[i][j] == 'r') c = 13;
                    else if (args[i][j] == 'b') c = 32;
                    else c = (int)args[i][j];
                }
                else c = (int)args[i][j];
                printf(" %d", c);
            }
            printf(RST " }\n");
        }
        return 0;
    }
    else {
        fprintf(stderr, RED "E1> Too few arguments\n" RST);
        return 1;
    }
}
