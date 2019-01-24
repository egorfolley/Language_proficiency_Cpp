#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector <int> parseInts(string str)
{
  vector<int> integers;
  stringstream ss(str);
  char comma;
  int temp;

  while(ss)
  {
    ss >> temp >> comma;
    integers.push_back(temp);
  }

  return integers;
}

int main()
{
  string str;
  cin >> str;

  vector <int> integers = parseInts(str);

  for (int i = 0; i < integers.size(); i++)
  {
    cout << integers[i] << endl;
  }
}
