using System;
using System.Collections;

using System.Runtime.Remoting;
using System.Runtime.Remoting.Channels;
using System.Runtime.Remoting.Channels.Tcp;
using System.Runtime.Serialization.Formatters;

class Sender
{
	ChatRoom x;

	public static void Main(string[] Args)
	{
		Sender y = new Sender();
		y.Run();
	}

	string User;

	public void Run()
	{
		Console.WriteLine("����һ���ͻ��˳�������'q'�˳�������");
		x = (ChatRoom) Activator.GetObject(typeof (ChatRoom), "tcp://127.0.0.1:8080/ChatRoomURL");
		Console.WriteLine("��������Լ�ȡһ������:");
		User = Console.ReadLine();
		x.OnLogin(User);
		Console.WriteLine("��ӭ " + User + ",����Է��������Ϣ:");
		string s; 
		while ((s = Console.ReadLine()) != "q") 
		{
			x.OnMessageReceive(User + " ˵: " + s);
		}
		x.OnLogoff(User);
		Console.WriteLine("�ټ� " + User);
	}
}
