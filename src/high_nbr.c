/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-06 - 10:01 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: high nbr
 */

#include <unistd.h>
#include "fonction.h"

static void shortcut(struct liste *info, int j)
{
    int i;

    i = 0;
    if (info->len_a / 2 >= j) {
        while (i < j) {
            ra(info);
            i += 1;
        }
    } else {
        while (i < info->len_a - j) {
            rra(info);
            i += 1;
        }
    }
}

void high_nbr(struct liste *info)
{
    int i;
    int j;
    int c;

    i = 0;
    c = info->la[i];
    if ((info->la[i] < info->la[i + 1]) && info->len_a < 4) {
        sa(info);
    }
    i = 0;
    while (i < info->len_a) {
        if (info->la[i] >= c) {
            c = info->la[i];
            j = i;
        }
        i += 1;
    }
    shortcut(info, j);
    pa(info);
}