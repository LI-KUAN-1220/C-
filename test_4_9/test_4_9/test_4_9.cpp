������һ���򵥵�C++����ʾ���������˴�Լ200�д��룬������ʾ��δ���һ���򵥵��ı��༭����

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

�ó�������Ҫ���û�����һ���ļ����������Դ򿪸��ļ��Զ�ȡ�����ݡ�����ļ��޷��򿪣�����ӡһ��������Ϣ���˳�����

������������ʹ��whileѭ�������ļ��е�ÿһ�У��������������Ļ�ϡ�֮�󣬳����ͬһ���ļ���׷���ı�����Ҫ���û�����һЩ�ı��������丽�ӵ��ļ�ĩβ��ֱ���û����롰exit����

��󣬳���ر��ļ����˳���