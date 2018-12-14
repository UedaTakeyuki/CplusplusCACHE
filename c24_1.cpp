#include "Parent.h"

int main(){
	Parent *parent = new Parent(200, 150);
	parent->run();
	delete parent;
	return 0;
}
