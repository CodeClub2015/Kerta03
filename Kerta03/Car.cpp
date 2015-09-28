#include "Car.h"


Car::Car(std::string model)
	: model(model)
{
	
}


Car::~Car()
{
}

void Car::accelrate() {

}

void Car::setModel(std::string newModel) {
	this->model = newModel;
}

std::string Car::getModel() {
	return model;
}