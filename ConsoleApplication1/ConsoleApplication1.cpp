#include "stdafx.h"
#include <thread>
#include <mutex>
#include <iostream>
#include <typeinfo>
using namespace std;


template <class Fn,class... Args>
 void func(Fn&&f, Args&&... arg)
{
	f(arg...);
}


void f(int k)
{
	cout << "s:\n";
}
void f(double, double)
{
	cout << "dobule\n";
}

typedef void (*FT)(int)  ;




void main()
{

}