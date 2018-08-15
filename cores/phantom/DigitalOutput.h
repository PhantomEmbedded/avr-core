#ifndef DIGITAL_OUTPUT_H
#define DIGITAL_OUTPUT_H

#include <GPIO.h>

class DigitalOutput
{
public:
	DigitalOutput(GPIO::Port port, uint8_t pin);
	DigitalOutput(GPIO::PortPin port_pin);

	void set(bool state) const;
	void toggle() const;

private:
	void initialize() const;

	const GPIO::Port port;
	const uint8_t bitmask;
};

#endif
