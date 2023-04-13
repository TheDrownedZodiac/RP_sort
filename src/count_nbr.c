/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-06 - 10:01 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: count nbr
 */

#include "fonction.h"

const char *num = "0123456789";

int count_nbr(const char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (src[i] != '\0') {
        if (stu_strchr(num, src[i]) == 1) {
            j += 1;
            while (stu_strchr(num, src[i]) == 1) {
                i += 1;
            }
        } else {
            i += 1;
        }
    }
    return j;
}
