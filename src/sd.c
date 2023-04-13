/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-05 - 09:55 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: sd
 */

#include <unistd.h>
#include "fonction.h"

void sd(struct liste *info)
{
    int i;

    i = 0;
    while (i < info->len_a || i < info->len_b) {
        swap_int(&info->la[i], &info->lb[i]);
        i += 1;
    }
    swap_int(&info->len_a, &info->len_b);
    write(1, "sd\n", 3);
}