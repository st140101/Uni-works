#include "rectangle.hpp"

rectangle::rectangle() {
	start.x = 0;
	start.y = 0;
	width = 0;
	height = 0;
}

rectangle::rectangle(point startPoint, int chosenWidth, int chosenHeight) {
	start = startPoint;
	width = chosenWidth;
	height = chosenHeight;
}

bool rectangle::isPointInside(const point p) const {
	if ((p.x >= start.x && p.x <= (start.x + width)) && (p.y >= start.y && p.y <= (start.y + height))) {
		return true;
	}
	return false;
}

void rectangle::translateRectangle(int offsetX, int offsetY) {
	start.x += offsetX;
	start.y += offsetY;
}

point* rectangle::edgesOfRectangle() const {
	point topLeft = start;
	point topRight = { (topLeft.x + width), topLeft.y };
	point bottomLeft = { topLeft.x, (topLeft.y + height) };
	point bottomRight = { (topLeft.x + width), (topLeft.y + height) };
	point* rec = new point[4];
	rec[0] = topLeft;
	rec[1] = topRight;
	rec[2] = bottomLeft;
	rec[3] = bottomRight;
	return rec;
}
