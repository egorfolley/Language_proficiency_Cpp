#include <bits/stdc++.h>

class A
{
public:
    A() { callA = 0; }
private:
    int callA;
    void inc() { callA++; }

protected:
    void func(int & a)
    {
        a *= 2;
        inc();
    }
public:
    int getA() { return callA; }
};

class B
{
public:
    B() { callB = 0; }
private:
    int callB;
    void inc() { callB++; }
protected:
    void func(int & a)
    {
        a *= 3;
        inc();
    }
public:
    int getB() { return callB; }
};

class C
{
public:
    C() { callC = 0; }
private:
    int callC;
    void inc() { callC++; }
protected:
    void func(int & a)
    {
        a *= 5;
        inc();
    }
public:
    int getC() { return callC; }
};

class D :  public A, public B, public C
{
int val;
public:
 	 D() { val = 1; }

	 void update_val(int new_val)
	 {
      while(val < new_val)
      {
        if( new_val % ( val * 2 ) == 0 )
          A::func(val);

        else if ( new_val % ( val * 3 ) == 0 )
          B::func(val);

        else if ( new_val % ( val * 5 ) == 0 )
          C::func(val);
      }
	 }
	 void check(int);
};



void D::check(int new_val)
{
  update_val(new_val);
  std::cout << "Value = " << val
            << std::endl << "A's func called " << getA() << " times "
            << std::endl << "B's func called " << getB() << " times"
            << std::endl << "C's func called " << getC() << " times" << std::endl;
}


int main()
{
  D d;
  uint16_t new_val;
  std::cin >> new_val;

  d.check(new_val);

  return 0;
}
