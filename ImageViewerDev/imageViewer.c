#include<stdio.h>
#include<stdlib.h>
#include<SDL.h>

int main() {
	printf("Welcome to the Image Viewer project! :) ");
	// initialize window & renderer
	static SDL_Window* window;
	static SDL_Renderer* renderer;

	window = SDL_CreateWindow("Image viewer", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		600, 900, 0);

	renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);

	SDL_Delay(6000);
	SDL_Quit();
	return 0;
}