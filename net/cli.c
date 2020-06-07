#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<unistd.h>
#include<arpa/inet.h>
#define PORT 8888


int main(int argc,char *argv[]){
	int s;
	struct sockaddr_in server_addr;

	s=socket(AF_INET,SOCK_STREAM,0);
	if(s<0)
	{
		printf("socket error\n");
		return -1;
	}


	bzero(&server_addr,sizeof(server_addr));
	server_addr.sin_family=AF_INET;
	server_addr.sin_addr.s_addr=htonl(INADDR_ANY);
	server_addr.sin_port=htons(PORT);

	connect(s,(struct sockaddr*)&server_addr,sizeof(struct sockaddr));

	char buf[1024];

	read(0,buf,1024);
	printf("buf=%s",buf);
	close(s);
	return 0;
}
