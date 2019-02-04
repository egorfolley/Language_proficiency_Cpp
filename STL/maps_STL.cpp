#include <iostream>
#include <map>

using namespace std;

int main()
{
    int q;
    cin >> q;
	
	map <string, int> students;
    for (int i = 0; i < q; i++)
    {
		int type = 0, mark = 0;
		string name;

		cin >> type >> name;
		switch (type)
		{
			case 1:
				cin >> mark;
				{map <string, int>::iterator itr = students.find(name);}
				students[name] += mark;
				break;
			case 2:
				students.erase(name);
				break;
			case 3:
				cout << students[name] << endl;
				break;
		}
	}			

    return 0;
}




