#include <iostream>
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <SDL3_ttf/SDL_ttf.h>
#include "page.h"

//Creates the main window, returns NULL if creation fails
SDL_Window* initializeWindow(){
    SDL_Window* mainWindow;
    mainWindow = SDL_CreateWindow("iohub", 1300, 700, SDL_WINDOW_RESIZABLE);

    if(mainWindow == NULL){
        SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Could not create window: %s\n", SDL_GetError());
        return NULL;
    }
    return mainWindow;
}

void captureTextInput(SDL_Window* mainWindow, SDL_Surface* windowSurface, SDL_Event* event, SDL_Color* color, TTF_Font* font, int* x, int* y){
        SDL_Surface* textFace;   
        SDL_Rect textPos;
        textPos.x = *x;
        textPos.y = *y;
        switch(event->key.key){
            case SDLK_Q:   
                textFace = TTF_RenderText_Solid(font, "q", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_W:   
                textFace = TTF_RenderText_Solid(font, "w", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_E:   
                textFace = TTF_RenderText_Solid(font, "e", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_R:   
                textFace = TTF_RenderText_Solid(font, "r", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_T:   
                textFace = TTF_RenderText_Solid(font, "t", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_Y:   
                textFace = TTF_RenderText_Solid(font, "y", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_U:   
                textFace = TTF_RenderText_Solid(font, "u", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_I:   
                textFace = TTF_RenderText_Solid(font, "i", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_O:   
                textFace = TTF_RenderText_Solid(font, "o", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_P:   
                textFace = TTF_RenderText_Solid(font, "p", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_A:   
                textFace = TTF_RenderText_Solid(font, "a", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_S:   
                textFace = TTF_RenderText_Solid(font, "s", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_D:   
                textFace = TTF_RenderText_Solid(font, "d", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_F:   
                textFace = TTF_RenderText_Solid(font, "f", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_G:   
                textFace = TTF_RenderText_Solid(font, "g", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_H:   
                textFace = TTF_RenderText_Solid(font, "h", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_J:   
                textFace = TTF_RenderText_Solid(font, "j", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_K:   
                textFace = TTF_RenderText_Solid(font, "k", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_L:   
                textFace = TTF_RenderText_Solid(font, "l", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_Z:   
                textFace = TTF_RenderText_Solid(font, "z", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_X:   
                textFace = TTF_RenderText_Solid(font, "x", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_C:   
                textFace = TTF_RenderText_Solid(font, "c", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_V:   
                textFace = TTF_RenderText_Solid(font, "v", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_B:   
                textFace = TTF_RenderText_Solid(font, "b", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_N:   
                textFace = TTF_RenderText_Solid(font, "n", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_M:   
                textFace = TTF_RenderText_Solid(font, "k", 1, *color);
                SDL_BlitSurface(textFace, NULL, windowSurface, &textPos); 
                SDL_UpdateWindowSurface(mainWindow);
                *x += 10;
                break;
            case SDLK_SPACE:
                *x+= 20;
                break;
            case SDLK_DELETE:
        }
      
}

int main(int argc, char*argv[]){
    SDL_Window* mainWindow = initializeWindow(); 
    SDL_Surface* mainWindowSurface = SDL_GetWindowSurface(mainWindow);
    SDL_Color white = {255,255,255};
    if(!TTF_Init()){
        std::cout<<"error loading ttf";
    }
    TTF_Font* rubik = TTF_OpenFont("../fonts/Rubik-Regular.ttf", 10);
    if(!rubik){
        std::cout<<"error loading font";
    }

    bool run = true;
    int textXPos = 40;
    int textYPos = 40;
    while(run){
        SDL_Event event;
        while(SDL_PollEvent(&event)){
            if(event.type == SDL_EVENT_KEY_DOWN){
                captureTextInput(mainWindow, mainWindowSurface, &event, &white, rubik, &textXPos, &textYPos);
            }
            else if(event.type == SDL_EVENT_QUIT){
                run = false;
            }
        }
    }

    SDL_DestroyWindow(mainWindow);
    SDL_Quit();
    return 0;

} 