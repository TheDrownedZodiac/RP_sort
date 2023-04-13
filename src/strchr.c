/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-06 - 10:01 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: count nbr
 */

#include "fonction.h"

int stu_strchr(const char *str, char search)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        if (str[i] == search) {
            return 1;
        }
        i += 1;
    }
    return 0;
}
