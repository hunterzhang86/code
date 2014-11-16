using System;

public class ChatRoom : MarshalByRefObject
{
	public delegate void ChatRoomEventHandler(string s);

	public void OnMessageReceive(string Message)
	{
		throw new NotImplementedException();
	}

	public void OnLogin(string User)
	{
		throw new NotImplementedException();
	}

	public void OnLogoff(string User)
	{
		throw new NotImplementedException();
	}

}