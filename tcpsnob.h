#ifndef TCPSNOB_H
#define TCPSNOB_H

#define TCPSNOB_IPV4 AF_INET
#define TCPSNOB_IPV6 AF_INET6

int tcpsnob_create(int ip_type);
int tcpsnob_connect(int sockfd, int ip_type, const char *host, const char *port);
int tcpsnob_status(int sockfd);
int tcpsnob_send(int sockfd, const char *msg, size_t len);
int tcpsnob_receive(int sockfd, char *buf, size_t len);
int tcpsnob_close(int sockfd);

#endif
