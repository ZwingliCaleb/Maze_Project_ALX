#ifndef Demo_h
#define Demo_h

#define SCREEN_WIDTH 1080
#define SCREEN_HEIGHT 600
#define gun_scale 0.35
#define map_x 8
#define map_y 8
#define map_s 64
#define PI 3.14159265
#define PI2 (0.5 * PI)
#define PI3 (1.5 * PI)
#define DR 0.0174533
#define MAP_SCALE 0.25
#define num_enemy 5
#define FOV (PI / 3)
#define RAD_DEG 57.296
#define num_rays 60

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
