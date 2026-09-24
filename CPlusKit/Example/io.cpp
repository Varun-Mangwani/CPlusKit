#include<iostream>
#include "../File_io.hpp"
using namespace std;

int main()
{
    string filename = "example.txt"; // Specify the file name
    cpk::io::WriteFile(filename, "Hello, World!\nThis is a test file.\n");
    // int file = cpk::io::CreateFile("newfile.txt");
    int Dlt = cpk::io::DeleteFile("newfile.txt");
    return 0;
}