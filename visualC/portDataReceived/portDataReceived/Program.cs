// public event System.IO.Ports.SerialDataReceivedEventHandler DataReceived;

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO.Ports;

namespace PortDataReceived
{
    class Program
    {
        public static void Main()
        {
            SerialPort mySerialPort = new SerialPort("COM1");
            //클래스    레퍼런스         객체생성  (address 저장)
            mySerialPort.BaudRate = 9600;  //멤버 변수들
            mySerialPort.Parity = Parity.None;
            mySerialPort.StopBits = StopBits.One;
            mySerialPort.DataBits = 8;
            mySerialPort.Handshake = Handshake.None;
            mySerialPort.RtsEnable = true;

            mySerialPort.DataReceived += new SerialDataReceivedEventHandler(DataReceivedHandler);
            //event 변수 (DataReceived) 내가 바꿀수없다.
            //DataReceivedHandler 함수를 호출
            mySerialPort.Open();

            Console.WriteLine("Press any key to continue...");
            Console.WriteLine(); //공백 1줄
            Console.ReadKey(); //키를 누르면 닫는다.
            mySerialPort.Close();
        }

        private static void DataReceivedHandler(
                            object sender,
                            SerialDataReceivedEventArgs e)
        //
        {
            SerialPort sp = (SerialPort)sender;
            string indata = sp.ReadExisting();
            Console.WriteLine("Data Received:");
            Console.Write(indata);
        }
    }
}