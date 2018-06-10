#include <iostream>

using namespace std;

int main()
{
    char name1[20],name2[20];
    cout<<"Enter the receiver\n";
    cin.getline(name1,20);//按行提取字符
    cout<<"Enter the sender\n";
    cin.getline(name2,20);
    cout<<name1<<endl;
    cout<<"    Happy birthday to you!"<<endl;
    cout<<name2<<endl;
    return 0;
}
