#include <SDL2/SDL.h>

int main()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0){
		return 1;
	}

	SDL_Window *win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);
	if (win == NULL){
		return 1;
	}

	SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (ren == NULL){
		return 1;
	}

	SDL_Delay(2000);
	SDL_Quit();
	return 0;
}