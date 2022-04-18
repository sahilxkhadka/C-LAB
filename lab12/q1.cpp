// Create a text file and write some data into it. Then, read every other 5 bytes of data from this file and display it onto the output screen. 
#include <iostream>
#include <fstream>
using namespace std;

int main (){
    fstream writeFile("hello.bin", ios::binary | ios::out);
    string data;
    char ch;
    cout<<"Enter the data you want to write into the file:"<<endl;
    getline(cin, data);
    writeFile<<data;
    writeFile.close();
    fstream readFile("hello.bin", ios::binary | ios::in | ios::ate);
    streampos length = readFile.tellg();
    readFile.seekp(0, ios::beg);
    while(readFile.good()) {
        if(readFile.tellg() <= length) {
            for(int i = 0; i < 5; i++) {
                readFile.get(ch); //read(sss,5)     fout.seekg(5,ios::cur)
                if(readFile.eof())
                    break;
                cout<<ch;
            }
        } else break;
        readFile.seekp(5, ios::cur);
    }
    readFile.close();
    return 0;
}