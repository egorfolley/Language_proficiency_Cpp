#include <iostream>

using namespace std;

class Student
{
private:
  int scores[5];
  int sum;
public:
  void input()
  {
    for (int i = 0; i < 5; i++)
    {
      cin >> scores[i];
      sum += scores[i];
    }
  }

  int calculateTotalScore() { return sum; }
};

int main()
{
  int n;
  cin >> n;

  Student *st = new Student[n];

  for (int i = 0; i < n; i++)
    st[i].input();

  int kristen_score = st[0].calculateTotalScore();

  int higher = 0;
  for (int i = 0; i < n; i++)
  {
    int total = st[i].calculateTotalScore();

    if (total > kristen_score)
      higher++;
  }

  cout << higher;
}
