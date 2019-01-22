#include <iostream>
#include <vector>

using namespace std;

class Person
{
protected:
  string name;
  int age;
public:
  virtual void putdata() = 0;
	virtual void getdata() = 0;
};

class Professor : public Person
{
private:
  int professor_id = 0, publications;
  static int id;
public:
  Professor() : professor_id(++id) {}

  void getdata()
  {
    cin >> name >> age >> publications;
  }
	void putdata()
  {
    cout << name << " " << age << " " << publications << " " << professor_id << endl;
  }
};
int Professor :: id = 0;

class Student : public Person
{
private:
  int student_id = 0, marks[6];
  static int id;
public:
  Student() : student_id(++id) {}

  void getdata()
  {
    cin >> name >> age;

    for (int i = 0; i < 6; i++)
      cin >> marks[i];
  }
	void putdata()
  {
    int sum = 0;
    for(int i = 0; i < 6; i++)
      sum += marks[i];

    cout << name << " " << age << " " << sum << " " << student_id << endl;
  }
};
int Student :: id = 0;

int main()
{
  int n, val;
  cin >> n;

  Person *per[n];

  for(int i = 0;i < n;i++)
  {
      cin >> val;

      if (val == 1)
        per[i] = new Professor;

      else
        per[i] = new Student;

      per[i] -> getdata();
  }

  for(int i = 0; i < n; i++)
      per[i] -> putdata();
}
