#include <bits/stdc++.h>

using namespace std;

int main()
{
  uint N = 0;
  uint Q = 0;

  cin >> N >> Q;

  map <string, string> attributes;
  string inputLine;
  string tag_init = "";

  while (N--)
  {
    getline(cin, inputLine);

    stringstream ss(inputLine);
    string line, attr, value;
    int pos;

    while (getline(ss, line, ' '))
    {
      if (line[0] == '<')
      {
        string tag;
        if (line[1] == '/')
        {
          tag = line.substr(2);
          tag = tag.substr(0, tag.length() - 1);
          pos = tag_init.find("." + tag);

          if (pos == string::npos)
            tag_init = "";
          else
            tag_init = tag_init.substr(0, pos);
        }

        else
        {
          tag = line.substr(1);
          if (tag.find(">") != string::npos)
            tag = tag.substr(0, tag.length() - 1);
          if (tag_init == "")
            tag_init = tag;
          else
            tag_init = tag_init + "." + tag;
        }
      }

      else if (line[0] == '"')
      {
        pos = line.find_last_of('"');
        value = line.substr(1, pos - 1);
        attributes[attr] = value;
      }

      else if (line[0] != '=')
        attr = tag_init + "~" + line;
    }
  }

  while (Q--)
  {
    getline(cin, inputLine);
    if (attributes.find(inputLine) == attributes.end())
      cout << "Not Found!" << endl;
    else
        cout << attributes[inputLine] << endl;
  }

  return 0;
}
