#pragma once

struct point {
	int x;
	int y;
};

class rectangle {
private:
	point start;
	int width;
	int height;
public:
	//constructors:
	rectangle();
	rectangle(point, int, int);
	//methods:
	bool isPointInside(const point) const;
	void translateRectangle(int, int);
	point* edgesOfRectangle() const;
};