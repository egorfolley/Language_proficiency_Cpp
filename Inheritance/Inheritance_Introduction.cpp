#include <bits/stdc++.h>

class Triangle
{
public:
	void triangle() { std::cout << "I am a triangle" << std::endl; }
};

class Isosceles : public Triangle
{
public:
	void isosceles() { std::cout << "I am an isosceles triangle" << std::endl; }
	void description() { std::cout << "In an isosceles triangle two sides are equal" << std::endl; }
};

int main()
{
  Isosceles obj;
  obj.isosceles();
  obj.description();
  obj.triangle();

  return 0;
}
