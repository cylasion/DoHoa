#include "Circle.h"



Circle::Circle()
{
}


Circle::~Circle()
{
}

void Draw8Points(int xc, int yc, int x, int y, SDL_Renderer *ren)
{
	int new_x;
	int new_y;

	new_x = xc + x;
	new_y = yc + y;
	SDL_RenderDrawPoint(ren, new_x, new_y);

	new_x = xc + y;
	new_y = yc + x;
	SDL_RenderDrawPoint(ren, new_x, new_y);

	new_x = xc - x;
	new_y = yc + y;
	SDL_RenderDrawPoint(ren, new_x, new_y);

	new_x = xc - y;
	new_y = yc + x;
	SDL_RenderDrawPoint(ren, new_x, new_y);

	new_x = xc + x;
	new_y = yc - y;
	SDL_RenderDrawPoint(ren, new_x, new_y);

	new_x = xc + y;
	new_y = yc - x;
	SDL_RenderDrawPoint(ren, new_x, new_y);

	new_x = xc - x;
	new_y = yc - y;
	SDL_RenderDrawPoint(ren, new_x, new_y);

	new_x = xc - y;
	new_y = yc - x;
	SDL_RenderDrawPoint(ren, new_x, new_y);
	//7 points
}

void BresenhamDrawCircle(int xc, int yc, int R, SDL_Renderer *ren)
{
	int x = R;
	int y = 0;
	int p = 3 - 2 * R;
	Draw8Points(xc, yc, x, y, ren);
	while (x>y)
	{
		if (p < 0)
		{
			p += 4 * y + 6;
		}
		else
		{
			p += 4 * y - 4 * x + 10;
			x = x - 1;
		}
		y++;
		Draw8Points(xc, yc, x, y, ren);
	}
}

void MidpointDrawCircle(int xc, int yc, int R, SDL_Renderer *ren)
{
	int x = R;
	int y = 0;
	int p = 1 - R;
	Draw8Points(xc, yc, x, y, ren);
	while (x>y)
	{
		if (p <= 0)
		{
			p += 2 * y + 3;
		}
		else
		{
			p += 2 * y - 2 * x + 5;
			x = x - 1;
		}
		y++;
		Draw8Points(xc, yc, x, y, ren);
	}
}
