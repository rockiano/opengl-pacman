#include "Dot.h"


Dot::Dot(void)
{
	x = 0;
	y = 0;
	z = 0;
	material = 3;
	list_ptr = glGenLists(1);
	glNewList(list_ptr, GL_COMPILE);
    glPushMatrix(); //dibuja el tope
		glutSolidSphere(0.25, 20, 20);
    glPopMatrix();
	glEndList();
}


Dot::~Dot(void)
{
}
