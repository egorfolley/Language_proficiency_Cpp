#include <iostream>

using namespace std;

struct Student
{
  int age;
  string ft_name;
  string lt_name;
  int stdt;
}student;

int main()
{
  cin >> student.age >> student.ft_name >> student.lt_name >> student.stdt;
  cout << student.age << " " << student.ft_name << " "
       << student.lt_name << " " << student.stdt;
}
