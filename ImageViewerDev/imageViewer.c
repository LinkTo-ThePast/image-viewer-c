#include<stdio.h>
#include<stdlib.h>
#include<SDL.h>

int main() {
	printf("Image viewer project.");
	
	const HEIGHT = 900;
	const WIDTH = 600;
	
	// create a window
	SDL_Window *window = SDL_CreateWindow("Image Viewer", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, HEIGHT, WIDTH, NULL);

	// access to the surface´s window
	SDL_Surface *currentSurface = SDL_GetWindowSurface(window);

	// pixel format
	Uint8 r, g, b;
	r = 0;
	g = 0xFF;
	b = 0;
	
	// map RGB
	Uint32 color = SDL_MapRGB(currentSurface->format, r, g, b);
	

	int x;
	

	for (int x = 0; x <= WIDTH; x++) 
	{
		SDL_Rect rectPixel = (SDL_Rect){ x,x,1,1 };
		SDL_FillRect(currentSurface, &rectPixel, color);
	
	}

	// update surface to track new changes
	SDL_UpdateWindowSurface(window);
	
	
	// adding delay to window so it does not close instantly
	SDL_Delay(4000);
	

	return 0; 
}