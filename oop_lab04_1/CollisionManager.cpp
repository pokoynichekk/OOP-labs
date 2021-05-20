#include "CollisionManager.h"
#include <cmath>

bool CollisionManager::IsCollision(Rectangle& rectangle1,
	Rectangle& rectangle2)
{
	double deltaX = abs(rectangle1.GetCenterPoint()->GetX() -
		rectangle2.GetCenterPoint()->GetX());
	double deltaY = abs(rectangle1.GetCenterPoint()->GetY() -
		rectangle2.GetCenterPoint()->GetY());
	double deltaLength = abs(rectangle1.GetHeight() -
		rectangle2.GetHeight());
	double deltaWidth = abs(rectangle1.GetWidth() -
		rectangle2.GetWidth());

	return (deltaX < deltaWidth / 2 && deltaY < deltaLength / 2);
}

bool CollisionManager::IsCollision(Ring& ring1, Ring& ring2)
{
	double deltaX = abs(ring1.GetCenter()->GetX() -
		ring2.GetCenter()->GetX());
	double deltaY = abs(ring1.GetCenter()->GetY() -
		ring2.GetCenter()->GetY());
	double hypotenuse = sqrt(pow(deltaX, 2) + pow(deltaY, 2));

	return (hypotenuse < ring1.GetExternalRadius() + ring2.GetExternalRadius());
}