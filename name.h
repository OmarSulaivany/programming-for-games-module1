#ifndef NAME_H
#define NAME_H
#include <string>
class name
{
private: //Members variables
	std::string firstName;
	unsigned int age;


public: //Member methods
	void setname(std::string name);

	std::string getname();
	
};
#endif