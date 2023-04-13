/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-05 - 09:55 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: pb
 */

#include <unistd.h>
#include "fonction.h"

void pb(struct liste *info)
{
    int i;
    int j;

    i = 0;
    j = info->len_a;
    info->len_a += 1;
    info->len_b -= 1;
    while (j > 0) {
        info->la[j] = info->la[j - 1];
        j -= 1;
    }
    info->la[0] = info->lb[0];
    while (i < info->len_b) {
        info->lb[i] = info->lb[i + 1];
        i += 1;
    }
    write(1, "pb ", 3);
}
