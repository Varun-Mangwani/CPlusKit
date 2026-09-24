    // Basic
    bool FileExists(string filename);//
    bool IsEmpty(string filename);//
    void CreateFile(string filename);//
    void DeleteFile(string filename);//

    // Writing
    void WriteFile(string filename, string data);//
    void AppendFile(string filename, string data);//
    void WriteLine(string filename, string line);//

    // Reading
    string ReadFile(string filename); //
    string ReadLine(string filename, int line);
    char ReadChar(string filename);

    // Information
    long long FileSize(string filename);//
    string FileName(string path);
    string FileExtension(string filename);

    // Management
    void CopyFile(string source, string destination);//
    void MoveFile(string source, string destination);//
    void RenameFile(string oldName, string newName);//

    // Content utilities
    int CountLines(string filename);
    int CountWords(string filename);
    int CountCharacters(string filename);
    bool SearchInFile(string filename, string text);
    void ClearFile(string filename);