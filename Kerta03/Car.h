#pragma once
#include <string>
class Car
{
private:
	std::string model;

public:
	Car(std::string);
	~Car();

	void accelrate();
	std::string getModel();
	void setModel(std::string newModel);
};

