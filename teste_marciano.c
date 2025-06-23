#include <stdio.h>
#include <unistd.h> 
//trabalho
int main() {
    int i = 0;
    while (1) {
        printf("\rCarregando");
        for (int j = 0; j < i % 4; j++) printf(".");
        fflush(stdout);
        i++;
        usleep(300000); 
    }
    return 0;
}
