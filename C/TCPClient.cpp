#include <stdio.h>
#include "InitSock.h"

CInitSock initSock;

int main()
{
	//创建套接字
	SOCKET s = ::socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	if (s == INVALID_SOCKET)
	{
		printf("Failed socket()\n");
		return 0;
	}
	//在这里可以bind一个本地地址
	//否则系统会自动安排

	//填写远程地址信息
	sockaddr_in servAddr;
	servAddr.sin_family = AF_INET;
	servAddr.sin_port = htons(4567);

	//注意，这里要填写服务器程序（TCPServer程序）所在机器的IP地址
	//如果计算机没有联网，直接使用127.0.0.1即可
	servAddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	if (connect(s,(sockaddr *)&servAddr,sizeof(servAddr)) == -1)
	{
		printf("Failed connect()\n");
		return 0;
	}
	//接收数据
	char buff[256];
	int nRev = ::recv(s,buff,256,0);
	if (nRev>0)
	{
		buff[nRev] = '\0';
		printf("接受到数据:%s",buff);
	}
	
	//向服务端发送数据
	char szText[] = "TCP client demo \r\n";
	::send(s,szText,strlen(szText),0);
	//关闭套接字
	::closesocket(s);

	return 0;
}