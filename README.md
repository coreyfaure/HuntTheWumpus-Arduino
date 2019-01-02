# HuntTheWumpus-Arduino
A version of Hunt The Wumpus for Arduino

This project was made with an Arduino Mega 2560.
Used components:
1x MAX7219 8x8 Matrix Display module
1x Green LED
1x Blue LED
1x Passive Peizo Speaker
1x Joystick Module
3x 220 Ohm resistors
Lots of wire

On startup, the game will generate an 8x8 map for the player that contains bats, pits, and a Wumpus. The player must pay attention to their senses to ensure they don't fall into a pit or run into a Wumpus. Running into a bat might not be instant death, but they can carry you over a pit or even straight to the Wumpus.

If the player wishes to win, they must pinpoint the location of the Wumpus. Then, they must take one step towards the Wumpus (so that they are faceing the proper direction) and fire their only arrow. If they hit the Wumpus, they win! If they miscalculated, however, they will meet a grisly fate.
