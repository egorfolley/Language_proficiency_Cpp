#include <iostream>
#include <sstream>

using namespace std;

class Student
{
private:
  int age;
  string ft_name;
  string lt_name;
  int stdt;

public:
  void set_age(int a) { age = a; }
  void set_ft_name(string ft) { ft_name = ft; }
  void set_lt_name(string lt) { lt_name = lt; }
  void set_stdt(int s) { stdt = s; }

  int get_age() { return age; }
  string get_ft_name() { return ft_name; }
  string get_lt_name() { return lt_name; }
  int get_stdt() { return stdt; }

  string to_str()
  {
    stringstream ss;
    ss << age << "," << ft_name << "," << lt_name << "," << stdt;

    return ss.str();
  }
}st;

int main()
{
  int age, stdt;
  string ft_name, lt_name;

  cin >> age >> ft_name >> lt_name >> stdt;
  st.set_age(age);
  st.set_stdt(stdt);
  st.set_ft_name(ft_name);
  st.set_lt_name(lt_name);

  cout << st.get_age() << endl
       << st.get_lt_name() << ", " << st.get_ft_name() << endl
       << st.get_stdt() << endl << endl
       << st.to_str();
}
