#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define RED "\e[31m"
#define GRN "\e[32m"
#define YEL "\e[33m"
#define BLU "\e[34m"
#define MAG "\e[35m"
#define CYN "\e[36m"
#define RST "\e[0m"

#define VAL 10000000

int main() {
    printf("\e[?25l");
    do {
        printf(GRN "     ####\\\n");
        printf(BLU "  <<<"GRN"#########\\\n");
        printf(GRN "     #################\n");
        printf(BLU "  <<<"GRN"#########/\n");  
        printf(GRN "     ####/\n" RST);
        int i = VAL; while (i-- > 0);
        system("clear");
        printf(GRN "     ####\\\n");
        printf(GRN "     #########\\\n");
        printf(GRN "     #################"RED">> "YEL"---      ---       ---      ---         ---\a\n");
        printf(GRN "     #########/\n");  
        printf(GRN "     ####/\n" RST);
        i = VAL; while (i-- > 0);
        system("clear");
    } while (1);
    printf("\e[?25h");
    return 0;  
}
