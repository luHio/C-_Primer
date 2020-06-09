#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>

#define PORT 8888
#define BACKLOG 2



int main(int argc,char *argv[])
{
	int ss,sc;
	struct sockaddr_in server_addr;
	struct sockaddr_in client_addr;


	int err;
	pid_t pid;


	ss=socket(AF_INET,SOCK_STREAM,0);

	if(ss<0)
	{
		printf("socket error\n");
		return -1;
	}

	bzero(&server_addr,sizeof(server_addr));
	server_addr.sin_family=AF_INET;
	server_addr.sin_addr.s_addr=htonl("127.0.0.1");
	server_addr.sin_port=htons(PORT);

	err=bind(ss,(struct sockaddr*)&server_addr,sizeof(server_addr));
	if(err<0)
	{
		printf("bind error\n");
		return -1;
	}


	err=listen(ss,BACKLOG);
	if(err<0)
	{
		printf("listen error\n");
		return -1;
	}

	socklen_t addrlen=sizeof(struct sockaddr);
	sc=accept(ss,(struct sockaddr*)&client_addr,&addrlen);

		
		char buf[100]="hello world";

		write(sc,buf,strlen(buf)+1);
	close(sc);
	close(ss);

	return 0;

	
}



