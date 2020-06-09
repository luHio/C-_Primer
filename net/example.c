#include<sys/types.h>
#include<sys/socket.h>
#include<unistd.h>
#define PORT 28888
#include<string.h>
#include<netinet/in.h>
int main()
{
	int sfd,cfd;
	sfd=socket(AF_INET,SOCK_STREAM,0);

	struct sockaddr_in addr;


	if(sfd==-1)
	{
		perror("socket");
		return -1;
	}
	memset(&addr,0,sizeof(struct sockaddr_in));

	addr.sin_family=AF_INET;
	addr.sin_port=htons(PORT);
	addr.sin_addr.s_addr=htonl("127.0.0.1");

	if(bind(sfd,(struct sockaddr *)&addr,sizeof(struct sockaddr))==-1)
	{
		perror("bind");
		return -1;
	}

	close(sfd);
}
