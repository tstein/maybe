#include <stdio.h>
#include "maybe.h"

int main() {
    maybe {
        printf("yep!\n");
    } else {
        printf("nope!\n");
    }

    surely {
        printf("Credits to Jack for the notion.\n");
    } else {
        printf("Error: bit bucket empty.\n");
    }
    return 0;
}

