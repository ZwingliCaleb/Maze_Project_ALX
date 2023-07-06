#include "../headers/header.h"

enemy_t enemy;
/**
* main - Execution phase commence
* @argc: number of arguments
* @argv: vector of argument
*
* Return: success
**/
int main(int argc, char **argv)
{
	/** Instance variable **/
	SDL_Instance instance;
	/**create and initializ window**/
	if (init_instance(&instance) != 0)
		return (1);
	/** start game **/
	init_game();
	if (argc > 1)
		make_map(argv);
	while ("C is awesome")
	{
		SDL_SetRenderDrawColor(instance.ren, 76, 76, 76, 0);
		SDL_RenderClear(instance.ren);

		/** input keys from user **/
		if (poll_events(instance) == 1)
			break;
		/** draw the map, the ceiling aand walls **/
		display(instance);
		SDL_RenderPresent(instance.ren);
	}

	/** destroy render and quit **/
	SDL_DestroyRenderer(instance.ren);
	SDL_DestroyWindow(instance.win);
	SDL_Quit();
	return (0);
}

/**
 * display - function that displays the game
 * @instance: the given sdl2 instance
 *
 * Return: nothing
 **/
void display(SDL_Instance instance)
{
	ray_cast(instance);
	add_enemy(instance);
	draw_map(instance);
	display_player(instance);
	add_weapon(instance);
	draw_sprite_map(instance);
}

/**
 * init_game - function to initialize the game
 *
 * Return: nothing
 **/
void init_game(void)
{
	/** initialize the player x, y, width, heigth and deltas **/
	player.x = 150;
	player.y = 400;
	player.w = 12;
	player.h = 12;
	player.a = PI3;
	player.dx = cos(player.a) * 5;
	player.dy = sin(player.a) * 5;
}

