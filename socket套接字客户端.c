#include <stdio.h>
#include <winsock.h>

int main (void)
{
    //定义变量
    char Sendbuf[100];          //发送数据的缓冲区
    char Receivebuf[100];       //接收数据的缓冲区
    int SendLen;                //发送数据的长度
    int ReceiveLen;             //接收数据的长度

    SOCKET socket_send;         //定义套接字
    SOCKADDR_IN Server_add;      //服务器地址信息结构

    WORD wVersionRequested;      //字（word）：unsigned short
    WSADATA wsaData;            //库版本信息结构
    int error;                  //表示错误

    //初始化套接字库
    wVersionRequested = MAKEWORD(2, 2);             //定义版本类型。将两个字节组合成一个字， 前面是低字节， 后面是高字节
    error = WSAStartup(wVersionRequested, &wsaData);         //加载套接字库， 初始化Ws2_32.dll动态链接库
    if(error != 0)
    {
        printf("加载套接字失败！");
        return 0;
    }

    if(LOBYTE(wsaData.wVersion) != 2 || HIBYTE(wsaData.wVersion) != 2)      //判断加载的版本号是否符合要求
    {
        WSACleanup();                        //不符合关闭套接字库
        return 0;                           //程序结束
    }

    //设置服务器地址
    Server_add.sin_family = AF_INET;            //地址家族，必须是AF_INET，注意只有它不是网络字节顺序
    Server_add.sin_addr.S_un.S_addr = inet_addr("192.168.3.6");        //服务器的地址，inet_addr将一个点分十进制表示为IP地址，inet_nota是将地址转换为字符串,inet_nota功能是将网络地址转换成“.”点隔的字符串格式
    Server_add.sin_port = htons(5000);          //端口号，通过htons函数将一个无符号短整型转换为网络排序格式

    //进行连接服务器
    socket_send = socket(AF_INET, SOCK_STREAM, 0);      //客户端创建套接字，但是不需要绑定，只需要和服务器建立连接就可以
                                                        //sock_send表示的是套接字，Server_add是服务器的地址结构
                                                        //AF_INET表示指定的地址族，SOCK_STREAM表示流氏套接字TCP，特定的地址家族相关的协议，使用了socket函数

    //创建用于连接的套接字
    if(connect(socket_send, (SOCKADDR*)&Server_add, sizeof(SOCKADDR)) == SOCKET_ERROR)
    {
        printf("连接失败\n");
    }

    //进行聊天
    while(1)        //无限循环
    {
        //发送数据过程，调用send函数
        printf("please enter message:");
        scanf("%s", Sendbuf);
        SendLen = send(socket_send, Sendbuf, 100, 0);      //发送数据
        if(SendLen < 0)
        {
            printf("发送失败\n");
        }

        //接收数据过程，调用recv函数
        ReceiveLen = recv(socket_send, Receivebuf, 100, 0);
        if(ReceiveLen < 0)
        {
            printf("接收失败\n");
            printf("程序退出\n");
            break;                                  //跳出循环
        }
        else
        {
            printf("Sever say: %s\n", Receivebuf);
        }
    }

    closesocket(socket_send);
    WSACleanup();
    return 0;
}