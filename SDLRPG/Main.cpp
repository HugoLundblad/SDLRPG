#include <SDL.h>

SDL_Window* g_pWindow = 0;
SDL_Renderer* g_pRenderer = 0;

int main(int argc, char* argv[])
{
	if (SDL_Init(SDL_INIT_EVERYTHING) >= 0)
	{
		g_pWindow = SDL_CreateWindow("SDLSetup", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 840, SDL_WINDOW_SHOWN);
	}
	return 0;
}