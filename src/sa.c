/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-05 - 09:55 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: sa
 */

#include <unistd.h>
#include "fonction.h"

void sa(struct liste *info)
{
    swap_int(&info->la[0], &info->la[1]);
    write(1, "sa ", 3);
}