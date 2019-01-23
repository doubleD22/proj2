#include "C_Line.h"


ostream& operator<<(ostream& os, color c)
{
	switch (c)
	{
	case color::white:		cout << "White "; break;
	case color::red:		cout << "Red "; break;
	case color::green:		cout << "Green "; break;
	case color::blue:		cout << "Blue "; break;
	case color::yellow:		cout << "Yellow "; break;
	case color::black:		cout << "Black "; break;
	default:				cout << "No color ";
	}
	return os;
}





void C_Line::draw() const
{
	cout << m_color << " Line from " << m_org << " To " << m_end << endl;
}
