#include <stdlib.h>
#include <time.h>

static char maybe_rand_init = 0;

char make_sure_rand_is_seeded() {
    if (maybe_rand_init == 0) {
       srand(time(NULL));
       maybe_rand_init = 1;
    }
    return maybe_rand_init;
}

#define maybe if (make_sure_rand_is_seeded() && rand() % 2 == 0)
#define surely if (make_sure_rand_is_seeded() && rand() % 2 < 2)

