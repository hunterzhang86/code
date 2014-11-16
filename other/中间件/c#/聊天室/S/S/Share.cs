using System;

public class ChatRoom : MarshalByRefObject
{
	public delegate void ChatRoomEventHandler(string s);

	public event ChatRoomEventHandler MessageReceive;
	public event ChatRoomEventHandler Login;
	public event ChatRoomEventHandler Logoff;

	public void OnMessageReceive(string Message)
	{
		if (MessageReceive != null)
		{
			RaiseEvents(ref MessageReceive, ref Message);
		}
        Console.WriteLine(Message); 
	}

	public void OnLogin(string User)
	{
		string s =User + "加入聊天室!";
		if (Login != null)
		{
			RaiseEvents(ref Login, ref s);
		}
        Console.WriteLine(s);
	}

	public void OnLogoff(string User)
	{
		string s = User + "退出聊天室!";
		if (Logoff != null)
		{
			RaiseEvents(ref Logoff, ref s);
		}
		Console.WriteLine(s);
	}

	public override object InitializeLifetimeService()
	{
		return null;
	}

	public void RaiseEvents(ref ChatRoomEventHandler e, ref string Message)
	{
		ChatRoomEventHandler creh = null;
		int i = 1;
		Delegate[] D = e.GetInvocationList();
		foreach (Delegate d in D)
		{
			try
			{
				creh = (ChatRoomEventHandler) d;
				creh(Message);
			}
			catch
			{
				Message += "\n第 " + i.ToString() + " 个订阅者发生错误,系统取消其事件订阅!";
				e -= creh;
			}
			i ++;
		}
	}
}