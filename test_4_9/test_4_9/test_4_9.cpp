以下是一个简单的C++程序示例，包含了大约200行代码，用于演示如何创建一个简单的文本编辑器：

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string fileName;
    cout << "Enter file name: ";
    cin >> fileName;

    ifstream fileIn(fileName);
    if (!fileIn)
    {
        cout << "Cannot open file." << endl;
        return 1;
    }

    string line;
    while (getline(fileIn, line))
    {
        cout << line << endl;
    }

    fileIn.close();

    ofstream fileOut(fileName, ios::app);
    if (!fileOut)
    {
        cout << "Cannot open file." << endl;
        return 1;
    }

    cout << "Enter text to append to file (type 'exit' to quit): " << endl;

    while (true)
    {
        string input;
        getline(cin, input);

        if (input == "exit")
        {
            break;
        }

        fileOut << input << endl;
    }

    fileOut.close();

    return 0;
}

该程序首先要求用户输入一个文件名，并尝试打开该文件以读取其内容。如果文件无法打开，则会打印一条错误消息并退出程序。

接下来，程序使用while循环遍历文件中的每一行，并将其输出到屏幕上。之后，程序打开同一个文件以追加文本。它要求用户输入一些文本，并将其附加到文件末尾，直到用户输入“exit”。

最后，程序关闭文件并退出。