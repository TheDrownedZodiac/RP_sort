/*
 * E89 Pedagogical & Technical Lab
 * project:     rp sort
 * created on:  2023-01-04 - 10:14 +0100
 * 1st author:  victor.vandeputte - victor.vandeputte
 * description: main
 */

#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "fonction.h"

static void set(struct liste *info, char *buf)
{
    info->count_nbr = count_nbr(buf);
    info->len_a = info->count_nbr;
    info->len_b = 0;
    info->la = malloc(sizeof(int) * info->count_nbr);
    info->lb = malloc(sizeof(int) * info->count_nbr);
}

static void all_free(char *buf, struct liste *info)
{
    free(buf);
    free(info->la);
    free(info->lb);
}

int main(int ac, char **ag)
{
    int fd;
    char *buf;
    int i;
    struct stat sfile;
    struct liste info;

    if(ac < 1) {
        return -1;
    }
    fd = open(ag[1], O_RDONLY);
    stat(ag[1], &sfile);
    buf = malloc(sizeof(char) * sfile.st_size + 1);
    read(fd, buf, sfile.st_size);
    buf[sfile.st_size] = '\0';
    set(&info, buf);
    input(&info, buf);
    i = 0;
    while (i < info.count_nbr) {
        high_nbr(&info);
        i += 1;
    }
    sd(&info);
    all_free(buf, &info);
    close(fd);
    return 0;
}
