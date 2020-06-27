#include <iostream> 
#include <string>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "name.h"
using namespace std;


int main()
{

	vector<name> names;


	for (int i = 0; i < 10; i++)
	{
		name obj;
		obj.setname("omar");
		names.push_back(obj);

	}
	for (auto item : names)
	{
		cout << item.getname() << endl;
	}

}