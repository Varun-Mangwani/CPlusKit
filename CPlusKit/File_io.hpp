#include <fstream>
#include <iostream>
using namespace std;

namespace cpk::io
{
    /**
     * @brief Reads the entire content of a file into a string.
     * @param filename The name of the file to read.
     * @return A string containing the file's content.
     */
    string ReadFile(string filename)
    {
        ifstream file(filename);
        if (file.is_open())
        {
            string content((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
            file.close();
            return content;
        }
        else
        {
            cout << "Unable to open file: " << filename << endl;
            return "";
        }
    }

    int WriteFile(string filename, string content)
    {
        ofstream file(filename);
        if (file.is_open())
        {
            file << content;
            file.close();
            return 1; // Success
        }
        else
        {
            cout << "Unable to open file: " << filename << endl;
            return 0; // Failure
        }
    }

    int CreateFile(string file)
    {
        ofstream newFile(file);
        if (newFile.is_open())
        {
            newFile.close();
            return 1; // Success
        }
        else
        {
            cout << "Unable to create file: " << file << endl;
            return 0; // Failure
        }
    }

    int WriteFile(string filename, string content, bool append)
    {
        ofstream file;
        if (append)
        {
            file.open(filename, ios::app);
        }
        else
        {
            file.open(filename);
        }

        if (file.is_open())
        {
            file << content;
            file.close();
            return 1; // Success
        }
        else
        {
            cout << "Unable to open file: " << filename << endl;
            return 0; // Failure
        }
    }

    int DeleteFile(string filename)
    {
        if (remove(filename.c_str()) == 0)
        {
            return 1; // Success
        }
        else
        {
            cout << "Unable to delete file: " << filename << endl;
            return 0; // Failure
        }
    }
}
