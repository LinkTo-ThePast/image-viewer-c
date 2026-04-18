#include<stdio.h>
#include<stdlib.h>
#include<SDL.h>

int main() {
	printf("Image viewer project.");
	
	// create a window
	SDL_Window* window = SDL_CreateWindow("Image Viewer", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 200, 200, NULL);

	return 0;
}