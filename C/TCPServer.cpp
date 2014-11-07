#include "InitSock.h"
#include <stdio.h>

CInitSock initSock;	//初始化Winsock库

int main()
{
	//创建套接字
	SOCKET sListen = ::socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	if (sListen == INVALID_SOCKET)
	{
		printf("Failed socket()\n");
		return 0;
	}
	//填充sockaddr_in结构
	sockaddr_in sin;
	sin.sin_family = AF_INET;
	sin.sin_port = htons(4567);
	sin.sin_addr.S_un.S_addr = INADDR_ANY;
	//绑定这个套接字到一个本地地址
	if (::bind(sListen,(LPSOCKADDR)&sin,sizeof(sin)) == SOCKET_ERROR)
	{
		printf("Failed bind()\n");
		return 0;
	}
	//进入监听模式
	if (::listen(sListen,2) == SOCKET_ERROR)
	{
		printf("Failed listen()\n");
		return 0;
	}
	//循环接受客户的连接请求
	sockaddr_in remoteAddr;
	int nAddrLen = sizeof(remoteAddr);
	printf("Length of sockaddr_in is: %d",nAddrLen);
	SOCKET sClient;
	char szText[] = "TCP Server Demo!\r\n";
	while(TRUE)
	{
		sClient = ::accept(sListen,(SOCKADDR *)&remoteAddr,&nAddrLen);
		if (sClient == INVALID_SOCKET)
		{
			printf("Failed accapt()");
			continue;
		}
		printf("接受到一个连接:%s\r\n",inet_ntoa(remoteAddr.sin_addr));
		//向客户端发送数据
		::send(sClient,szText,strlen(szText),0);

	}

	//关闭客户端的连接

	::closesocket(sListen);
	return 0;
}