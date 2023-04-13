/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-05 - 09:55 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: pa
 */

#include <unistd.h>
#include "fonction.h"

void pa(struct liste *info)
{
    int i;
    int j;

    i = 0;
    j = info->len_b;
    info->len_a -= 1;
    info->len_b += 1;
    while (j > 0) {
        info->lb[j] = info->lb[j - 1];
        j -= 1;
    }
    info->lb[0] = info->la[0];
    while (i < info->len_a) {
        info->la[i] = info->la[i + 1];
        i += 1;
    }
    write(1, "pa ", 3);
}
