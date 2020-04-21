#include "main.h"
#include "diode.h"

#define DIODE_GPIO_MASK GPIOC
#define DIODE_PIN LL_GPIO_PIN_13


Diode::Diode() {
	this->isOn = false;
}

void Diode::turnOn()
{
	LL_GPIO_ResetOutputPin(DIODE_GPIO_MASK, DIODE_PIN);
	this->isOn = true;
}

void Diode::turnOff()
{
	LL_GPIO_SetOutputPin(DIODE_GPIO_MASK, DIODE_PIN);
	this->isOn = false;
}

void Diode::toggle()
{
	if (this->isOn)
	{
		this->turnOff();
	}
	else
	{
		this->turnOn();
	}
}
