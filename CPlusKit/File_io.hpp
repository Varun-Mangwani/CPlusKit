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

    bool CreateFile(string file)
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

    bool WriteFile(string filename, string content, bool append)
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

    bool DeleteFile(string filename)
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

    bool fileExists(string filename)
    {
        ifstream file(filename);
        return file.good() ? 1 : 0; // Returns 1 if file exists, 0 otherwise
    }

    bool isFileEmpty(string filename)
    {
        ifstream file(filename);
        if (file.is_open())
        {
            return file.peek() == ifstream::traits_type::eof(); // Returns true if file is empty, false otherwise
        }
        else
        {
            cout << "Unable to open file: " << filename << endl;
            return false; // Return false if file cannot be opened
        }
    }
    bool appendFile(string filename, string content)
    {
        return WriteFile(filename, content, true); // Calls WriteFile with append set to true
    }

    bool writeLine(string filename, string content)
    {
        return WriteFile(filename, content + "\n", true); // Calls WriteFile with append set to true and adds a newline
    }

    long long getFileSize(string filename)
    {
        ifstream file(filename, ios::binary | ios::ate);
        if (file.is_open())
        {
            long long size = file.tellg(); // Get the current position in the file, which is the size since we opened it in 'ate' mode
            file.close();
            return size; // Return the size of the file
        }
        else
        {
            cout << "Unable to open file: " << filename << endl;
            return -1; // Return -1 to indicate failure to open the file
        }
    }

    bool copyFile(string source, string destination)
    {
        ifstream src(source, ios::binary);
        ofstream dest(destination, ios::binary);
        if (src.is_open() && dest.is_open())
        {
            dest << src.rdbuf(); // Copy the content of the source file to the destination file
            src.close();
            dest.close();
            return 1; // Success
        }
        else
        {
            cout << "Unable to open source or destination file." << endl;
            return 0; // Failure
        }
    }

    bool moveFile(string source, string destination)
    {
        if (copyFile(source, destination)) // First copy the file
        {
            return DeleteFile(source); // Then delete the original file
        }
        else
        {
            return 0; // Failure to copy the file
        }
    }
    bool renameFile(string oldName, string newName)
    {
        if (rename(oldName.c_str(), newName.c_str()) == 0) // Attempt to rename the file
        {
            return 1; // Success
        }
        else
        {
            cout << "Unable to rename file: " << oldName << " to " << newName << endl;
            return 0; // Failure
        }
    }
    //=======================================
}
