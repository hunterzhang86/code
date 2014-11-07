#include <stdio.h>
#include "InitSock.h"

CInitSock initSock;

int main()
{
	//�����׽���
	SOCKET s = ::socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	if (s == INVALID_SOCKET)
	{
		printf("Failed socket()\n");
		return 0;
	}
	//���������bindһ�����ص�ַ
	//����ϵͳ���Զ�����

	//��дԶ�̵�ַ��Ϣ
	sockaddr_in servAddr;
	servAddr.sin_family = AF_INET;
	servAddr.sin_port = htons(4567);

	//ע�⣬����Ҫ��д����������TCPServer�������ڻ�����IP��ַ
	//��������û��������ֱ��ʹ��127.0.0.1����
	servAddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	if (connect(s,(sockaddr *)&servAddr,sizeof(servAddr)) == -1)
	{
		printf("Failed connect()\n");
		return 0;
	}
	//��������
	char buff[256];
	int nRev = ::recv(s,buff,256,0);
	if (nRev>0)
	{
		buff[nRev] = '\0';
		printf("���ܵ�����:%s",buff);
	}
	
	//�����˷�������
	char szText[] = "TCP client demo \r\n";
	::send(s,szText,strlen(szText),0);
	//�ر��׽���
	::closesocket(s);

	return 0;
}