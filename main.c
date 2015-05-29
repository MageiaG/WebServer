#include "common.h"

char *cwd;

int main(int argc, char **argv)
{
    int listenfd, connfd, port, clientlen;
    pit_t pid;
    struct sockaddr_in cliet_addr;
    char isdaemon=0, *portp=NULL, *logp=NULL, tmpcwd[MAXLINE];

#ifdef HTTPS
    int sslport
    char dossl=0, *sslportp=NULL;
#endif

    openlog(argv[0], LOG_NDELAY|LOG_PID, LOG_DAEMON);
    getcwd(cwd, 0);
    strcpy(tmpcwd, cwd);
    strcat(tmpcwd, "/");
}
