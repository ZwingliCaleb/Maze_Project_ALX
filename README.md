## THE 3D MAZE GAME 
This a 3D maze game that has been built using raycasting and it runs on Linux based systems; MacOS or any of the Linux distros(Ubuntu 14.04 being the recommended Operating System for this particular project).

#### Raycasting
This is an image modelling and rendering technique for which is highly utilized to build 3D games. 

For this particular project we're using the SDL2 library to be specific. It has important functions that will be utilized in the project to bring it to fruition.

### Getting Started
For anybody else wanting to run this game. The process below would get you started

1. On your linux terminal initialize git and then clone this repository.
2. Install SDL2 library folder using the command
	```sudo apt install libsdl2-dev```
3. Install the SDL2 Image development package using the command:- 
	``` sudo apt install libsdl2-image-dev```
4. Once the installation process is properly completed use the command below with various flags to compile all the files.
	```gcc -Wall -Werror -Wextra -pedantic ./src/*.c -lm $(sdl2-config --cflags -lSDL2_image $(sdl2-config --libs) -o new_maze```
5. If the compilation goes well without an error, an executable file named new_maze will be formed which when executed opens a game window.

### Play the game!
This game involves the shooter being moved. The keys mapped out on the keyboard to move the players are:- <br>
> move up/forward - w or up directional button <br>
> move down/behind - s or down directional button <br>
> move left - a or left directional button <br>
> move right - d or right directional button

### Game screen grab
![VirtualBox_Ubuntu 22 04_13_07_2023_00_26_09](https://github.com/ZwingliCaleb/Maze_Project_ALX/assets/84632961/1ba91208-2e41-4758-9ebd-14efec52557b)


### Authors
Caleb Zwingli [GitHub](https://github.com/ZwingliCaleb)

## License
&copy 2023 Caleb Zwingli
