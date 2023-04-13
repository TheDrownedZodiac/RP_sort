/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-04 - 14:35 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: ra
 */

#include <unistd.h>
#include "fonction.h"

void ra(struct liste *info)
{
    int i;
    int la;

    i = 0;
    la = info->la[0];
    while (i < info->len_a) {
        info->la[i] = info->la[i + 1];
        i += 1;
    }
    info->la[info->len_a - 1] = la;
    write(1, "ra ", 3);
}
