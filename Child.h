#ifndef CHILD_H
#define CHILD_H

class Parent; // Forward declaration to reduce precompile time.

class Child {
public:
	Child(Parent *); // Construct a Child with a Parent pointer
	void run(void); // A member function to all the Parent class

private:
	Parent *m_parent; // A data member to store a pointer to the Child's Parent.
};

#endif