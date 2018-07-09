#include <iostream>
#include<cstring>

using namespace std;
//公有继承举例
class Person//人员类定义
{
protected:
      char Name[10];
      int Age;
      char Sex;
public:
      void Register (char *name,int age,char sex)//设置数据成员
      {
            strcpy(Name,name);
            Age=age;
            Sex=(sex=='m'?'m':'f');
      }
      void ShowMe()
      {
            cout<<Name<<"\t"<<Sex<<"\t"<<Age<<"\t";
      }

};
class Employee:public Person//公有继承
{
      char Dept[20];
      float Salary;
public:
      void EmployeeRegister(char *name,int age,char sex,char *dept,float salary);
      Employee()//��EmployeeRegister���г�ʼ��
      {
            EmployeeRegister("XXX",0,'m',"XXX",0);
      }
      void ShowEmp();

};
void Employee::EmployeeRegister(char *name,int age,char sex,char *dept,float salary)
{
      Register(name,age,sex);
      strcpy(Dept,dept);
      Salary=salary;
}
void Employee::ShowEmp()
{
      cout<<Name<<"\t"<<Sex<<"\t"<<Age<<"\t";
      cout<<Dept<<"\t"<<Salary;
}
int main()
{
    Employee emp;
    emp.EmployeeRegister("Zhang",49,'m',"Library",400);
    emp.ShowEmp();
    cout<<endl;
    emp.ShowMe();
    cout<<endl;

    return 0;
}
