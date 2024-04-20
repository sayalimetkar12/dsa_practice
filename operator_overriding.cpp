/*#include<iostream>
using namespace std;

class A {
public:
    void print()
    {
        cout << "A class is parent class" << endl;
    }
};

class B : public A {
public:
    void print()
    {
        cout << "B class is child class" << endl;
    }
};

int main()
   {
    A obja;
    obja.print();
    B objb;
    objb.print();
   }

*/
#include <iostream>
#include <cstring>
//#include <sys/socket.h>
//#include <netinet/in.h>
#include <unistd.h>

int main()
{   int AF_INET, SOCK_STREAM, serverSocket, socket;
    // Create a socket
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);

    // Configure the server address
    struct sockaddr_in serverAddr;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(8080);
    serverAddr.sin_addr.s_addr = INADDR_ANY;

    // Bind the socket to the address
    bind(serverSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr));

    // Listen for incoming connections
    listen(serverSocket, 5);
    std::cout << "Server is listening..." << std::endl;

    // Accept connections and handle communication
    int clientSocket = accept(serverSocket, nullptr, nullptr);
    char buffer[1024];

    while (true) {
        memset(buffer, 0, sizeof(buffer));
        recv(clientSocket, buffer, sizeof(buffer), 0);
        std::cout << "Client: " << buffer << std::endl;

        std::string message;
        std::cout << "You: ";
        std::getline(std::cin, message);
        send(clientSocket, message.c_str(), message.length(), 0);
    }

    // Close the sockets
    close(serverSocket);
    close(clientSocket);

    return 0;
}

