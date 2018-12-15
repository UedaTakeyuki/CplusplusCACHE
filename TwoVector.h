#ifndef TWOVECTOR_H
#define TWOVECTOR_H
#include <iostream>

class TwoVector {
public:
	TwoVector(double x = 0., double y = 0.); // Constructor with default values
	double resultant(void) const; // Resultant
	double angle(void) const; //Angle of vector in x-y plane
	void rotate(double theta); // Rotate the two vector about itself
	TwoVector operator+(const TwoVector& twoVector) const; // Addition
	TwoVector operator-(const TwoVector& twoVector) const; // Subtraction
	TwoVector& operator=(const TwoVector& twoVector); // Assignment

	double x(void) const { return m_x; } // Return the x component
	double y(void) const { return m_y; } // Return the y component

	friend std::ostream& operator<<(std::ostream& os, const TwoVector& vec); // New line to add

private:
	double m_x; // x component of the vector
	double m_y; // y component of the vector
};
std::ostream& operator<<(std::ostream& os, const TwoVector& vec); // New line to add

#endif
