#include<stdio.h>
#include<stdlib.h>
#include<SDL.h>

int main() {
	printf("Image viewer project");
	
	// create a window
	SDL_Window* pwindow = SDL_CreateWindow("image viewer", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 900, 600, 0);
	SDL_Delay(3000);
	return 0;
}