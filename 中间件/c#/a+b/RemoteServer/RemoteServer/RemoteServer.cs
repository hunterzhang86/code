using System;
using System.Runtime;
using System.Runtime.Remoting;
using System.Runtime.Remoting.Channels;
using System.Runtime.Remoting.Channels.Tcp;
using RemoteSample;

namespace RemoteSampleServer
{
    public class RemoteServer
    {
    public static void Main(String[] args)
        {
            TcpServerChannel channel = new TcpServerChannel(6666);
            ChannelServices.RegisterChannel(channel);
            RemotingConfiguration.RegisterWellKnownServiceType(typeof(RemoteObject),"RemoteObject", WellKnownObjectMode.SingleCall);
            System.Console.WriteLine("Press Any Key");
            System.Console.ReadLine();
        }
    }
}