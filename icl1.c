#include <stdio.h>
#include <usistd.h>
#include <assert.h>
#include <fcntl.h>
#include <sys/types.h>

/* main returns an integer */
int main(int argc, char *argv[]) {
    /* printf is our output function;
    by default, writes to standard out */
    /* printf returns an integer, but we ignore that */
    printf("hello, world\n");

    int fd = open("/tmp/leep9.txt, O_WRONLY | O_CREAT \ O_TRUNC, S_IRWXU);
    assert(fd > -1);
    int rc = write(fd, "Operating Systems Programming is amazing\n", 42);
    assert(rc == 42);
    close(fd);

    /* return 0 to indicate all went well */
    return(0);
}
