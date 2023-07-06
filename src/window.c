#include "../headers/header.h"

/**
* init_instance - initialize a window instance.
* @in: the instance
*
* Return: 1 when there is success or 0 for failure
**/

int init_instance(SDL_Instance *in)
{
	/**when the window is initialized **/
	if (SDL_Init(SDL_INIT_VIDEO) !=0)
	{
		fprintf(stderr, "Unable to initialize SDL: %s\n", SDL_GetError());
		return (1);
	}
	/** set the height and width of window**/
	in->win = SDL_CreateWindow("The Maze Project", 0, 0, SCREEN_WIDTH,
	SCREEN_HEIGHT, SDL_WINDOW_OPENGL);
	/**if window is not created**/
	if (in->win == NULL)
	{
		fprintf(stderr, "SDL_CreateWindow Error: %s\n", SDL_GetError());
		SDL_Quit();
		return (1);
	}
	/** create render instance**/
	in->ren = SDL_CreateRenderer(in->win, -1, SDL_RENDERER_ACCELERATED 
	| SDL_RENDERER_PRESENTVSYNC);
	/**if renderer is not created **/
	if (in->ren == NULL)
	{
		fprintf(stderr, "SDL_CreateRenderer Error: %s\n", SDL_GetError());
		SDL_Quit();
		return (1);
	}
	/** if SDL image fails to be initialized **/
	if (IMG_Init(IMG_INIT_PNG) != IMG_INIT_PNG)
	{
		fprintf(stderr, "Initialize SDL Image failed \n")
		return (1);
	}
	return (0);
}

/**
* FixAng - reset the angle if it is over specified range
* @a: the specified angle
* Return: the converted angle
**/
float FixAng(float a)
{
	/** if the angle is over 360 degrees ***/
	if (a > 2 * PI)
		a -= 2 * PI;
	/** in the case of a negative angle **/
	if (a < 0)
		a += 2 * PI;
	return (a);
}

