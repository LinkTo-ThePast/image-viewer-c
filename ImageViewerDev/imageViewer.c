#include<stdio.h>
#include<stdlib.h>
#include<SDL.h>

int main() {
	printf("Image viewer project.");
	
	// create a window
	SDL_Window *window = SDL_CreateWindow("Image Viewer", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 900, 600, NULL);

	// access to the surface´s window
	SDL_Surface *currentSurface = SDL_GetWindowSurface(window);

	// pixel format
	Uint8 r, g, b;
	r = 0xFF;
	g = b = 0;
	
	// map RGB
	Uint32 color = SDL_MapRGB(currentSurface->format, r, g, b);
	

	int x = 50;
	int y = 50;

	SDL_Rect rectPixel = (SDL_Rect){ x,y,1,1 };
	
	// establish the surface as a rectangle to fill
	SDL_FillRect(currentSurface, &rectPixel, color);
	// update surface to track new changes
	SDL_UpdateWindowSurface(window);
	
	
	// adding delay to window so it does not close instantly
	SDL_Delay(4000);
	

	return 0;
}