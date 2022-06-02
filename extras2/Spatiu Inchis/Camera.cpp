#include "Camera.h"
#include <iostream>
using namespace std;
Camera::Camera(string smell, bool light, string name)
{
	miros = smell;
	lumina = light;
	nume = name;
}

Camera::~Camera()
{
}

void Camera::AddSpatiu()
{
}

void Camera::PrintInfo()
{
	
		cout << this->nume << " are 0 camere" << " miros " << this->miros << " ";
		if (lumina)
			cout << "luminos" << endl;
		else
			cout << "intunecat" << endl;
	
}
