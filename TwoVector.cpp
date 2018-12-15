#include "TwoVector.h"
#include <cmath>

TwoVector::TwoVector(double x, double y):
	m_x(x),	// assign the value of x to m_x
	m_y(y) {// assign the value of y to m_y
}

double TwoVector::resultant(void) const {
	double r = std::pow(m_x,2) + std::pow(m_y,2); // The sum of the squares of m_x and m_y
	if(r > 0.) r = std::sqrt(r); // The sqrt only makes sense for values greater than zero
	return r;
}

double TwoVector::angle(void) const {
	double r = resultant(); // Get the resultant
	if(r <= 0.) return 0.;
	return std::acos(m_x/r); // angle in radians
}

void TwoVector::rotate(double theta) {
	double x = m_x, y = m_y; // Store the current values;
	m_x = x*std::cos(theta) - y*std::sin(theta); // Rotate the x component
	m_y = x*std::sin(theta) + y*std::cos(theta); // Rotate the x component
}

TwoVector TwoVector::operator+(const TwoVector& rhs) const {
	TwoVector twoVector = *this; // Copy this object using the assignment operator
	twoVector.m_x += rhs.m_x; // Add the m_x value in this object to th other object
	twoVector.m_y += rhs.m_y; // Add the m_y value in this object to th other object
	return twoVector; // Return the resulting vector
}

TwoVector TwoVector::operator-(const TwoVector& rhs) const {
	TwoVector twoVector = *this; // Copy this object
	twoVector.m_x -= rhs.m_x; // Subtract the m_x value from the other object from this class
	twoVector.m_y -= rhs.m_y; // Subtract the m_y value from the other object from this class
	return twoVector; // Return the resulting vector
}

TwoVector& TwoVector::operator=(const TwoVector& rhs) {
	m_x = rhs.m_x; // Assign the m_x value from the other object
	m_y = rhs.m_y; // Assign the m_y value from the other object
	return *this; // Return the value of this object
}

std::ostream& operator<<(std::ostream& os, const TwoVector& vec){
	os << "{" << vec.m_x << "," << vec.m_y << "}";
	return os;
}
