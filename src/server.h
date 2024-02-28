#ifndef __MINHTTP_SERVER_H
#define __MINHTTP_SERVER_H

#include <netinet/in.h>

struct server {
	struct server_config *cfg;
	struct sockaddr_in addr;
};

int server_entry(struct server *srv);

#endif /* __MINHTTP_SERVER_H */
