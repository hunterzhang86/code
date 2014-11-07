using System;
using System.Runtime.Remoting;
using System.Runtime.Remoting.Channels;
using System.Runtime.Remoting.Channels.Tcp;
using RemoteSample;

namespace RemoteSampleClient
{
    public class RemoteClient
    {
        public static void Main(string[] args)
        {
            ChannelServices.RegisterChannel(new TcpClientChannel());
            RemoteObject remoteobj = (RemoteObject)Activator.GetObject(typeof(RemoteObject), "tcp://localhost:6666/RemoteObject");
            int a = 0;
            int b = 0;
            try
            {
                a = int.Parse(Console.ReadLine());
                b = int.Parse(Console.ReadLine());
            }
            catch
            {
                Console.WriteLine("输入为非数字");
            }
            Console.WriteLine(a+"+"+b+"="+remoteobj.sum(a, b).ToString());
            Console.ReadLine();
        }
    }
}