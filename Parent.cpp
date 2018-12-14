#include "Parent.h"
#include "Child.h"

Parent::Parent(unsigned int x, unsigned int y):
	m_child(0),
	m_x(x),
	m_y(y){
}

Parent::~Parent(){
	if(m_child) delete m_child;
}

void Parent::run(){
	if(!m_child){ // Only create a child if there isn't one already
			m_child = new Child(this);
			m_child->run();
	}
}