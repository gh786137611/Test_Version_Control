#include "stdafx.h"
#include <thread>
#include <mutex>
#include <iostream>
#include <typeinfo>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;



void f()
{

}

void main()
{
	vector<int> vi{ 1,2,3,4,5,6,7,8,9 };
	int n = count_if(vi.begin(), vi.end(), bind(less<int>{}, 5,std::placeholders::_1));
	cout << n << endl;


}