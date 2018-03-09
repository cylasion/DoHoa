#ifndef CIRCLE_H
#define CIRCLE_H
#include <SDL.h>
void BresenhamDrawCircle(int xc, int yc, int R, SDL_Renderer *ren);
void MidpointDrawCircle(int xc, int yc, int R, SDL_Renderer *ren);

class Circle
{
public:
	Circle();
	~Circle();
};

#endif //GRAPHICS2D_CIRCLE_H
