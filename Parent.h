#ifndef PARENT_H
#define PARENT_H

class Child; // Forward declaration to reduce precompile time.

class Parent {
public:
	Parent(unsigned int x, unsigned int y); // Construct a Parent frame with some dimensions.
	~Parent(void); // Destructor to clean up the particle pointer
	void run(void); // Call a member function in the Child class
	unsigned int x(void){return m_x;} // Get the x dimension
	unsigned int y(void){return m_y;} // Get the y dimension
	Child* child(void){return m_child;} // Get the child pointer

private:
	Child *m_child; // A data member to store a pointer to the Child class
	unsigned int m_x; // A data member to store the x dimension
	unsigned int m_y; // A data member to store the y dimension
};

#endif