#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *command = "cmd /C curl parrot.live";
    printf("Loading", command);
    int result = system(command);
}

