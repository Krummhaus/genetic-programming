#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600

// 33:31

int main(int argc, char *argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL failed to init VIDEO!");
        printf("SDL error: %s\n", SDL_GetError());
        exit(1);
    }

    SDL_Window *const window =
        SDL_CreateWindow("Genetic play", 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT,
                         SDL_WINDOW_RESIZABLE);
    if (window == NULL) {
        printf("SDL error: %s\n", SDL_GetError());
    }

    // Renderer
    SDL_Renderer *const renderer =
        SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) {
        printf("SDL error: %s\n", SDL_GetError());
    }

    int quit = 0;
    while (!quit) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT: {
                    quit = 1;
                } break;
            }
        }
        if SDL_RenderClear () }

    SDL_Quit();
    return 0;
}
