#include <iostream>
#include "Parent.h"
#include "Child.h"

using namespace std;

Child::Child(Parent *parent):
	m_parent(parent){
}

void Child::run() {
	cout << "Parent frame dimensions = {"
			 << m_parent->x() << ", "
			 << m_parent->y() << "}" << endl;
}