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
		Console.WriteLine("这是一个客户端程序，输入'q'退出聊天室");
		x = (ChatRoom) Activator.GetObject(typeof (ChatRoom), "tcp://127.0.0.1:8080/ChatRoomURL");
		Console.WriteLine("首先请给自己取一个名字:");
		User = Console.ReadLine();
		x.OnLogin(User);
		Console.WriteLine("欢迎 " + User + ",你可以发送你的消息:");
		string s; 
		while ((s = Console.ReadLine()) != "q") 
		{
			x.OnMessageReceive(User + " 说: " + s);
		}
		x.OnLogoff(User);
		Console.WriteLine("再见 " + User);
	}
}
