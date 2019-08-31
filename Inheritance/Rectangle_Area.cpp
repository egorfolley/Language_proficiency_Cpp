#include <bits/stdc++.h>

class Rectangle
{
public:
  virtual void display() const
  { std::cout << m_width << ' ' << m_height << std::endl; }
protected:
  uint16_t m_width = 0;
  uint16_t m_height = 0;
};

class RectangleArea : public Rectangle
{
public:
  void read_input() { std::cin >> m_width >> m_height; }
  void display() const override
  { std::cout << ( m_width * m_height ) << std::endl; }
};

int main()
{
  RectangleArea recArea;

  recArea.read_input();
  recArea.Rectangle::display();
  recArea.display();

  return 0;
}
