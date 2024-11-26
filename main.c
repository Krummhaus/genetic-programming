#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("SDL failed to init VIDEO!");
        printf("SDL error: %s\n", SDL_GetError());
        exit(1);
    }
    SDL_Quit();
    return 0;
}
