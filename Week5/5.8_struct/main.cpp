#include <iostream>
#include<cstring>

using namespace std;

struct student
{
      char name[20];
      int score;
};
void shuchu(student s)
{
      cout<<s.name<<' '<<s.score<<endl;
}
int main()
{

    student s;
    strcpy(s.name, "linjunjie");
    s.score=90;
    shuchu(s);
    return 0;
}
