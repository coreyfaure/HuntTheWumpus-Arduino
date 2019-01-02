#include <MaxMatrix.h>

//Sprite Data
char bat1[] = {8,8,B01111000,B00011100,B11110110,B01111100,B01111100,B11110110,B00011100,B01111000};
char bat2[] = {8,8,B00001111,B00011100,B11110110,B01111100,B01111100,B11110110,B00011100,B00001111};
char carry1[] = {8,8,B00000001,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
char carry2[] = {8,8,B00000000,B00000010,B00000110,B00000000,B00000000,B00000000,B00000000,B00000000};
char carry3[] = {8,8,B00000000,B00000000,B00000100,B00001100,B00000000,B00000000,B00000000,B00000000};
char carry4[] = {8,8,B00000000,B00000000,B00000000,B00001000,B00011000,B00000000,B00000000,B00000000};
char carry5[] = {8,8,B00000000,B00000000,B00000000,B00000000,B00101000,B00001000,B00000000,B00000000};
char carry6[] = {8,8,B00000000,B00000000,B00000000,B00000000,B01000000,B00001000,B00001000,B00000000};
char carry7[] = {8,8,B00000000,B00000000,B00000000,B00000000,B10000000,B00000000,B00000100,B00000100};
char carry8[] = {8,8,B00000000,B00000000,B00000000,B00000000,B10000000,B00000000,B00000000,B00000010};
char carry9[] = {8,8,B00000000,B00000000,B00000000,B00000000,B10000000,B00000000,B00000000,B00000000};
char fall1[] = {8,8,B11111111,B00011111,B00111111,B00011111,B00111111,B00111111,B00111111,B01111111};
char fall2[] = {8,8,B11111111,B11111111,B11111111,B11111111,B11111111,B10000011,B11000001,B11000000};
char fall3[] = {8,8,B11111111,B11111111,B11111111,B11111111,B11111111,B11000011,B11000001,B11100000};
char fall4[] = {8,8,B11111111,B11111111,B11111111,B11111111,B11111111,B11000001,B11100001,B11110000};
char fall5[] = {8,8,B11111111,B11111111,B11111111,B11111111,B11111111,B11100001,B11110001,B11111000};
char fall6[] = {8,8,B01111111,B11111110,B11111111,B11111111,B11110110,B11100000,B11110000,B11111000};
char fall7[] = {8,8,B00011111,B00111110,B11111110,B11111110,B11110011,B11100000,B11111000,B11111100};
char fall8[] = {8,8,B00011110,B00111100,B01111100,B11111110,B11110001,B11111000,B01111100,B00101100};
char fall9[] = {8,8,B00111100,B00111000,B00111100,B00111110,B01110000,B01111000,B01111100,B00100100};
char fall10[] = {8,8,B00100100,B00111000,B00011000,B00111010,B01110000,B00111000,B00010100,B00010010};
char fall11[] = {8,8,B00010000,B00101000,B00011000,B00111000,B00110000,B00111000,B00010100,B00000000};
char fall12[] = {8,8,B00000000,B00000000,B00010000,B00011000,B00110000,B00001000,B00010000,B00000000};
char fall13[] = {8,8,B00000000,B00000000,B00010000,B00011000,B00010100,B00000000,B00000000,B00000000};
char fall14[] = {8,8,B00000000,B00000000,B00010000,B00010000,B00010000,B00001000,B00000000,B00000000};
char fall15[] = {8,8,B00000000,B00000000,B00000000,B00011000,B00000000,B00000000,B00000000,B00000000};
char fall16[] = {8,8,B00000000,B00000000,B00000000,B00010000,B00000000,B00000000,B00000000,B00000000};
char fall17[] = {8,8,B00000000,B00000000,B00000000,B00001000,B00000000,B00000000,B00000000,B00000000};
char grave[] = {8,8,B10000000,B11000000,B11111110,B11001001,B11111101,B11001001,B01111110,B00000000};
char wumpus1[] = {8,8,B01011000,B10011110,B11001010,B10011111,B11001111,B10011010,B11001110,B01011000};
char wumpus2[] = {8,8,B00111000,B01011110,B01101010,B01011111,B01101111,B01011010,B01101110,B00111000};
char wumpus3[] = {8,8,B00101000,B00111100,011011111,B11011010,B00010111,B01000010,B11110000,B00011110};
char wumpus4[] = {8,8,B00010000,B01011110,B01111100,B00011111,B01010110,B11001010,B01100010,B00011100};
char wumpus5[] = {8,8,B00000000,B00111000,B10110110,B10011110,B11001010,B01101100,B00110100,B00110000};
char wumpus6[] = {8,8,B00000000,B01011100,B10000100,B01011110,B01001010,B01001110,B01101000,B00100000};
char wumpus7[] = {8,8,B00000000,B00111000,B01101100,B01011110,B01001110,B01001100,B00011000,B00000000};
char wumpus8[] = {8,8,B00000000,B00111000,B00101100,B01111000,B01001110,B01010100,B00010000,B00000000};
char wumpus9[] = {8,8,B00000000,B00011000,B00110100,B01001100,B01011100,B00111100,B00000000,B00000000};
char wumpus10[] = {8,8,B00000000,B00001000,B00100000,B01000100,B00011000,B00001000,B00000000,B00000000};
char trophy[] = {8,8,B00001100,B00010111,B10111001,B11100001,B11100001,B10111001,B00010111,B00001100};
char bow1[] = {8,8,B00000000,B00000000,B00000000,B11111111,B01001010,B00111100,B00001000,B00001000};
char bow2[] = {8,8,B00000000,B00011000,B01101110,B10001001,B01001010,B00111100,B00001000,B00000000};
char bow3[] = {8,8,B00011000,B00101100,B01001010,B10001001,B01001010,B00111100,B00000000,B00000000};
char bow4[] = {8,8,B00000000,B00000000,B00000000,B11111111,B01000010,B00111100,B00001000,B00001000};
char bow5[] = {8,8,B00000000,B00000000,B00000000,B11111111,B01000010,B00111100,B00000000,B00000000};
char uhoh[] = {8,8,B00000000,B11101110,B10101000,B11101110,B00000000,B11101110,B01000100,B11101110};
char begin1[] = {8,8,B11000000,B00000000,B00000000,B11111000,B00000100,B00000100,B00000100,B11111000};
char begin2[] = {8,8,B00000000,B11000000,B00000000,B11111000,B00000100,B00000100,B00000100,B11111000};
char begin3[] = {8,8,B00000000,B00000000,B11000000,B11111000,B00000100,B00000100,B00000100,B11111000};
char begin4[] = {8,8,B00000000,B00000000,B00000000,B11111000,B00000100,B00000100,B00000100,B11111000};
char begin5[] = {8,8,B00000000,B00000000,B00000000,B11111000,B11000100,B00000100,B00000100,B11111000};
char begin6[] = {8,8,B00000000,B00000000,B00000000,B11111000,B00000100,B11000100,B00000100,B11111000};
char begin7[] = {8,8,B00000000,B00000000,B00000000,B11111000,B00000100,B00000100,B11000100,B11111000};

//Character data for scrolling text
PROGMEM const unsigned char CH[] = {
3, 8, B00000000, B00000000, B00000000, B00000000, B00000000, // space
1, 8, B01011111, B00000000, B00000000, B00000000, B00000000, // !
3, 8, B00000011, B00000000, B00000011, B00000000, B00000000, // "
5, 8, B00010100, B00111110, B00010100, B00111110, B00010100, // #
4, 8, B00100100, B01101010, B00101011, B00010010, B00000000, // $
5, 8, B01100011, B00010011, B00001000, B01100100, B01100011, // %
5, 8, B00110110, B01001001, B01010110, B00100000, B01010000, // &
1, 8, B00000011, B00000000, B00000000, B00000000, B00000000, // '
3, 8, B00011100, B00100010, B01000001, B00000000, B00000000, // (
3, 8, B01000001, B00100010, B00011100, B00000000, B00000000, // )
5, 8, B00101000, B00011000, B00001110, B00011000, B00101000, // *
5, 8, B00001000, B00001000, B00111110, B00001000, B00001000, // +
2, 8, B10110000, B01110000, B00000000, B00000000, B00000000, // ,
4, 8, B00001000, B00001000, B00001000, B00001000, B00000000, // -
2, 8, B01100000, B01100000, B00000000, B00000000, B00000000, // .
4, 8, B01100000, B00011000, B00000110, B00000001, B00000000, // /
4, 8, B00111110, B01000001, B01000001, B00111110, B00000000, // 0
3, 8, B01000010, B01111111, B01000000, B00000000, B00000000, // 1
4, 8, B01100010, B01010001, B01001001, B01000110, B00000000, // 2
4, 8, B00100010, B01000001, B01001001, B00110110, B00000000, // 3
4, 8, B00011000, B00010100, B00010010, B01111111, B00000000, // 4
4, 8, B00100111, B01000101, B01000101, B00111001, B00000000, // 5
4, 8, B00111110, B01001001, B01001001, B00110000, B00000000, // 6
4, 8, B01100001, B00010001, B00001001, B00000111, B00000000, // 7
4, 8, B00110110, B01001001, B01001001, B00110110, B00000000, // 8
4, 8, B00000110, B01001001, B01001001, B00111110, B00000000, // 9
2, 8, B01010000, B00000000, B00000000, B00000000, B00000000, // :
2, 8, B10000000, B01010000, B00000000, B00000000, B00000000, // ;
3, 8, B00010000, B00101000, B01000100, B00000000, B00000000, // <
3, 8, B00010100, B00010100, B00010100, B00000000, B00000000, // =
3, 8, B01000100, B00101000, B00010000, B00000000, B00000000, // >
4, 8, B00000010, B01011001, B00001001, B00000110, B00000000, // ?
5, 8, B00111110, B01001001, B01010101, B01011101, B00001110, // @
4, 8, B01111110, B00010001, B00010001, B01111110, B00000000, // A
4, 8, B01111111, B01001001, B01001001, B00110110, B00000000, // B
4, 8, B00111110, B01000001, B01000001, B00100010, B00000000, // C
4, 8, B01111111, B01000001, B01000001, B00111110, B00000000, // D
4, 8, B01111111, B01001001, B01001001, B01000001, B00000000, // E
4, 8, B01111111, B00001001, B00001001, B00000001, B00000000, // F
4, 8, B00111110, B01000001, B01001001, B01111010, B00000000, // G
4, 8, B01111111, B00001000, B00001000, B01111111, B00000000, // H
3, 8, B01000001, B01111111, B01000001, B00000000, B00000000, // I
4, 8, B00110000, B01000000, B01000001, B00111111, B00000000, // J
4, 8, B01111111, B00001000, B00010100, B01100011, B00000000, // K
4, 8, B01111111, B01000000, B01000000, B01000000, B00000000, // L
5, 8, B01111111, B00000010, B00001100, B00000010, B01111111, // M
5, 8, B01111111, B00000100, B00001000, B00010000, B01111111, // N
4, 8, B00111110, B01000001, B01000001, B00111110, B00000000, // O
4, 8, B01111111, B00001001, B00001001, B00000110, B00000000, // P
4, 8, B00111110, B01000001, B01000001, B10111110, B00000000, // Q
4, 8, B01111111, B00001001, B00001001, B01110110, B00000000, // R
4, 8, B01000110, B01001001, B01001001, B00110010, B00000000, // S
5, 8, B00000001, B00000001, B01111111, B00000001, B00000001, // T
4, 8, B00111111, B01000000, B01000000, B00111111, B00000000, // U
5, 8, B00001111, B00110000, B01000000, B00110000, B00001111, // V
5, 8, B00111111, B01000000, B00111000, B01000000, B00111111, // W
5, 8, B01100011, B00010100, B00001000, B00010100, B01100011, // X
5, 8, B00000111, B00001000, B01110000, B00001000, B00000111, // Y
4, 8, B01100001, B01010001, B01001001, B01000111, B00000000, // Z
2, 8, B01111111, B01000001, B00000000, B00000000, B00000000, // [
4, 8, B00000001, B00000110, B00011000, B01100000, B00000000, // \ backslash
2, 8, B01000001, B01111111, B00000000, B00000000, B00000000, // ]
3, 8, B00000010, B00000001, B00000010, B00000000, B00000000, // hat
4, 8, B01000000, B01000000, B01000000, B01000000, B00000000, // _
2, 8, B00000001, B00000010, B00000000, B00000000, B00000000, // `
4, 8, B00100000, B01010100, B01010100, B01111000, B00000000, // a
4, 8, B01111111, B01000100, B01000100, B00111000, B00000000, // b
4, 8, B00111000, B01000100, B01000100, B00101000, B00000000, // c
4, 8, B00111000, B01000100, B01000100, B01111111, B00000000, // d
4, 8, B00111000, B01010100, B01010100, B00011000, B00000000, // e
3, 8, B00000100, B01111110, B00000101, B00000000, B00000000, // f
4, 8, B10011000, B10100100, B10100100, B01111000, B00000000, // g
4, 8, B01111111, B00000100, B00000100, B01111000, B00000000, // h
3, 8, B01000100, B01111101, B01000000, B00000000, B00000000, // i
4, 8, B01000000, B10000000, B10000100, B01111101, B00000000, // j
4, 8, B01111111, B00010000, B00101000, B01000100, B00000000, // k
3, 8, B01000001, B01111111, B01000000, B00000000, B00000000, // l
5, 8, B01111100, B00000100, B01111100, B00000100, B01111000, // m
4, 8, B01111100, B00000100, B00000100, B01111000, B00000000, // n
4, 8, B00111000, B01000100, B01000100, B00111000, B00000000, // o
4, 8, B11111100, B00100100, B00100100, B00011000, B00000000, // p
4, 8, B00011000, B00100100, B00100100, B11111100, B00000000, // q
4, 8, B01111100, B00001000, B00000100, B00000100, B00000000, // r
4, 8, B01001000, B01010100, B01010100, B00100100, B00000000, // s
3, 8, B00000100, B00111111, B01000100, B00000000, B00000000, // t
4, 8, B00111100, B01000000, B01000000, B01111100, B00000000, // u
5, 8, B00011100, B00100000, B01000000, B00100000, B00011100, // v
5, 8, B00111100, B01000000, B00111100, B01000000, B00111100, // w
5, 8, B01000100, B00101000, B00010000, B00101000, B01000100, // x
4, 8, B10011100, B10100000, B10100000, B01111100, B00000000, // y
3, 8, B01100100, B01010100, B01001100, B00000000, B00000000, // z
3, 8, B00001000, B00110110, B01000001, B00000000, B00000000, // {
1, 8, B01111111, B00000000, B00000000, B00000000, B00000000, // |
3, 8, B01000001, B00110110, B00001000, B00000000, B00000000, // }
4, 8, B00001000, B00000100, B00001000, B00000100, B00000000, // ~
};

//LEDs
const byte pinGreen = 9;
const byte pinBlue = 8;

//Speaker
const byte pinSpeaker = 4;

//8x8 Matrix
const byte pinDIN = 7;
const byte pinCS = 6;
const byte pinCLK = 5;
const byte maxInUse = 1;
MaxMatrix m(pinDIN, pinCS, pinCLK, maxInUse); 

//JoyStick
const byte pinY = A9;
const byte pinX = A8;
const byte pinButton = 3;
const int deadzone = 100;
const int upperLimit = (1024/2)+deadzone;
const int lowerLimit = (1024/2)-deadzone;

//Wumpus World
char hazards [8][8];
bool visited [8][8];
bool stinkLayer[8][8];
bool soundLayer[8][8];
bool draftLayer[8][8];
byte playerX = 0;
byte playerY = 0;
byte lastMove = 0;
char textWin[] = "YOU WIN!        ";
char textLose[] = "YOU DIED.       ";

//function prototypes
boolean checkJoystick(int x, int y);
byte getDirection(int x, int y);
void checkHazard();
void createWorld();
void drawWorld();
void fireArrow();
void gameOver();
void gameWin();
void introTheme();
void killWumpus();
void miss();
void printCharWithShift(char c, int shift_speed);
void printStringWithShift(char* s, int shift_speed);
void sense();
void wumpusEnd();

//Call this to reset the game.
void(* resetFunc) (void) = 0;

void setup() {
  pinMode(pinGreen, OUTPUT);
  pinMode(pinBlue, OUTPUT);
  pinMode(pinX, INPUT_PULLUP);
  pinMode(pinY, INPUT_PULLUP);
  pinMode(pinButton, INPUT_PULLUP);
  digitalWrite(pinBlue, LOW);
  digitalWrite(pinGreen, LOW);
  Serial.begin(9600);
  m.init();
  m.setIntensity(1);
  //Use unused analog pin for a floating signal
  //to seed random
  randomSeed(analogRead(A4));
  introTheme();
  createWorld();
  drawWorld();
}

//Read the current controller position.
//If it's not in the deadzone, then figure
//out which direction it's in (up, down, left, right).
//If it's in deadzone, check if the player is trying
//to fire an arrow.
void loop() {
  int x = analogRead(pinX);
  int y = analogRead(pinY);
  if(checkJoystick(x,y)){
    //Joystick in a direction
    int dir = getDirection(x,y);
    //Move Player up
    if(dir == 0){
      if(playerY<7){
        playerY++;
        lastMove = 0;
      }
    }
    //Move Player right 
    else if(dir == 1){
      if(playerX<7){
        playerX++;
        lastMove = 1;
      }
    } 
    //Move Player down
    else if(dir == 2){
      if(playerY>0){
        playerY--;
        lastMove = 2;
      }
    }
    //Move Player left
    else {
      if(playerX>0){
        playerX--;
        lastMove = 3;
      }
    }
    visited[playerX][playerY] = 1;
    
  } else {
    //Joystick in deadzone
    if(!digitalRead(pinButton)){
      fireArrow();
      //Shoot arrow up
      if(lastMove == 0){
        if(playerY<7){
          if(hazards[playerX][playerY+1]=='w'){
            killWumpus();
          } else {
            miss();
          }
        }
      }
      //Shoot arrow right 
      else if(lastMove == 1){
        if(playerX<7){
          if(hazards[playerX+1][playerY]=='w'){
            killWumpus();
          } else {
            miss();
          }
        }
      } 
      //Shoot arrow down
      else if(lastMove == 2){
        if(playerY>0){
          if(hazards[playerX][playerY-1]=='w'){
            killWumpus();
          } else {
            miss();
          }
        }
      }
      //Shoot arrow left
      else {
        if(playerX>0){
          if(hazards[playerX-1][playerY]=='w'){
            killWumpus();
          } else {
            miss();
          }
        }
      }
    }
  }
  drawWorld();
  sense();
  checkHazard();
}

//Callback to the theme played in the
//version by Gregory Yob in 1975.
//Also show the player entering the cave.
void introTheme(){
  //D3
  tone(pinSpeaker,147,200);
  m.writeSprite(0,0,begin1);
  delay(200);
  //E3
  tone(pinSpeaker,165,200);
  m.writeSprite(0,0,begin2);
  delay(200);
  //F3
  tone(pinSpeaker,175,200);
  m.writeSprite(0,0,begin3);
  delay(200);
  //G3
  tone(pinSpeaker,196,200);
  m.writeSprite(0,0,begin4);
  delay(200);
  //A4
  tone(pinSpeaker,220,200);
  m.writeSprite(0,0,begin5);
  delay(200);
  //F3
  tone(pinSpeaker,175,200);
  m.writeSprite(0,0,begin6);
  delay(200);
  //A4
  tone(pinSpeaker,220,400);
  m.writeSprite(0,0,begin7);
  delay(400);
  //G#3
  tone(pinSpeaker,208,200);
  m.writeSprite(0,0,begin4);
  delay(200);
  //E#3
  tone(pinSpeaker,175,200);
  delay(200);
  //G#3
  tone(pinSpeaker,208,400);
  delay(400);
  //G3
  tone(pinSpeaker,196,200);
  delay(200);
  //E3
  tone(pinSpeaker,165,200);
  delay(200);
  //G3
  tone(pinSpeaker,196,400);
  delay(400);
  
  //D3
  tone(pinSpeaker,147,200);
  delay(200);
  //E3
  tone(pinSpeaker,165,200);
  delay(200);
  //F3
  tone(pinSpeaker,175,200);
  delay(200);
  //G3
  tone(pinSpeaker,196,200);
  delay(200);
  //A3
  tone(pinSpeaker,220,200);
  delay(200);
  //F3
  tone(pinSpeaker,175,200);
  delay(200);
  //A3
  tone(pinSpeaker,220,200);
  delay(200);
  //D4
  tone(pinSpeaker,294,200);
  delay(200);
  //C4
  tone(pinSpeaker,262,200);
  delay(200);
  //A3
  tone(pinSpeaker,220,200);
  delay(200);
  //F3
  tone(pinSpeaker,175,200);
  delay(200);
  //A3
  tone(pinSpeaker,220,200);
  delay(200);
  //C4
  tone(pinSpeaker,262,400);
  delay(400);
}

// This is code that controls scrolling text, from a Brainy Bits tutorial.
// FROM https://www.brainy-bits.com/scroll-text-using-the-max7219-led-dot-matrix/
// (Code was slightly modified to allow interruption from fire button)
/////////////////////////////////////////////////////////////
byte buffer[10];
// Put extracted character on Display
void printCharWithShift(char c, int shift_speed){
  if (c < 32) return;
  c -= 32;
  memcpy_P(buffer, CH + 7*c, 7);
  m.writeSprite(maxInUse*8, 0, buffer);
  m.setColumn(maxInUse*8 + buffer[0], 0);
  
  for (int i = 0; i < buffer[0]+1; i++) 
  {
    delay(shift_speed);
    m.shiftLeft(false, false);
  }
}

// Extract characters from Scrolling text
void printStringWithShift(char* s, int shift_speed){
  while (*s != 0){
    printCharWithShift(*s, shift_speed);
    s++;
    if(!digitalRead(pinButton)){
      m.clear();
      delay(1000);
      resetFunc();
    }
  }
}
///////////////////////////////////////////////////////////////
// End of Brainy Bits code.

//If the player misses the Wumpus,
//the wumpus finds them.
void miss(){
  m.clear();
  delay(1000);
  m.setDot(1,6,1);
  tone(pinSpeaker,80,100);
  delay(1000);
  m.setDot(3,6,1);
  tone(pinSpeaker,80,100);
  delay(1000);
  m.setDot(5,6,1);
  tone(pinSpeaker,80,100);
  delay(1000);

  wumpusEnd();
  gameOver();
}

//The player successfully kills the Wumpus!
void killWumpus(){
  delay(500);
  m.writeSprite(0,0,wumpus1);
  delay(500);
  m.writeSprite(0,0,wumpus3);
  tone(pinSpeaker,900,100);
  delay(100);
  m.writeSprite(0,0,wumpus4);
  tone(pinSpeaker,850,100);
  delay(100);
  m.writeSprite(0,0,wumpus5);
  tone(pinSpeaker,800,100);
  delay(100);
  m.writeSprite(0,0,wumpus6);
  tone(pinSpeaker,750,100);
  delay(100);
  m.writeSprite(0,0,wumpus7);
  tone(pinSpeaker,700,100);
  delay(100);
  m.writeSprite(0,0,wumpus8);
  tone(pinSpeaker,650,100);
  delay(100);
  m.writeSprite(0,0,wumpus9);
  tone(pinSpeaker,600,100);
  delay(100);
  m.writeSprite(0,0,wumpus10);
  tone(pinSpeaker,550,100);
  delay(100);
  m.clear();
  delay(1000);
  gameWin();
}

//Show arrow firing animation
void fireArrow(){
  delay(500);
  m.writeSprite(0,0,bow1);
  tone(pinSpeaker,100,100);
  delay(100);
  m.writeSprite(0,0,bow2);
  tone(pinSpeaker,200,100);
  delay(100);
  m.writeSprite(0,0,bow3);
  tone(pinSpeaker,300,100);
  delay(1000);
  m.writeSprite(0,0,bow2);
  for(int i=0; i<50; i++){
    tone(pinSpeaker,random(200,1500),1);
    delay(1);
  }
  m.writeSprite(0,0,bow1);
  for(int i=0; i<25; i++){
    tone(pinSpeaker,random(200,1500),1);
    delay(1);
  }
  m.writeSprite(0,0,bow4);
  delay(50);
  m.writeSprite(0,0,bow5);
  delay(100);
}

//Give the player a trophy!
//Reset the game after 5 text scrolls.
void gameWin(){
  m.writeSprite(0,0,trophy);
  tone(pinSpeaker,1397,100); //F6
  m.setIntensity(8);
  delay(200);
  tone(pinSpeaker,1397,100); //F6
  m.setIntensity(1);
  delay(200);
  tone(pinSpeaker,1397,100); //F6
  m.setIntensity(8);
  delay(200);
  tone(pinSpeaker,1397,200); //F6
  m.setIntensity(1);
  delay(300);
  tone(pinSpeaker,1175,200); //D6
  m.setIntensity(8);
  delay(300);
  tone(pinSpeaker,1319,200); //E6
  m.setIntensity(1);
  delay(300);
  tone(pinSpeaker,1397,200); //F6
  m.setIntensity(8);
  delay(300);
  tone(pinSpeaker,1319,150); //E6
  m.setIntensity(1);
  delay(150);
  tone(pinSpeaker,1397,400); //F6
  m.setIntensity(8);
  delay(300);
  m.setIntensity(1);
  delay(300);
  m.setIntensity(8);
  delay(300);
  m.setIntensity(1);
  delay(300);
  m.setIntensity(8);
  delay(300);
  m.setIntensity(1);
  delay(1000);
  for(int i=0; i<5; i++){
    delay(100);
    m.shiftLeft(false,true);
    printStringWithShift(textWin, 100);
  }
  resetFunc();
}

//Give the player a funeral.
void gameOver(){
  m.writeSprite(0,0,grave);
  delay(500);
  tone(pinSpeaker,294,400);
  delay(500);
  tone(pinSpeaker,294,400);
  delay(500);
  tone(pinSpeaker,294,100);
  delay(200);
  tone(pinSpeaker,294,400);
  delay(500);
  tone(pinSpeaker,349,400);
  delay(500);
  tone(pinSpeaker,330,100);
  delay(200);
  tone(pinSpeaker,330,400);
  delay(500);
  tone(pinSpeaker,294,100);
  delay(200);
  tone(pinSpeaker,294,400);
  delay(500);
  tone(pinSpeaker,294,100);
  delay(200);
  tone(pinSpeaker,294,800);
  delay(3000);
  for(int i=0; i<5; i++){
    delay(100);
    m.shiftLeft(false,true);
    printStringWithShift(textLose, 100);
  }
  resetFunc();
}

//Player gets attacked from the vicious Wumpus!
//Complete with nightmare-inducing sound.
void wumpusEnd() {
  for(int j=0; j<3; j++){
      m.writeSprite(0,0,wumpus1);
      for(int i=2000; i>800; i-=2){
        tone(pinSpeaker,i,1);
        delay(1);
      }
      m.writeSprite(0,0,wumpus2);
      for(int i=800; i<2000; i+=2){
        tone(pinSpeaker,i,1);
        delay(1);
      }
    }
    delay(500);
    gameOver();
}

//Check to see if player has run into a bat, pit, or Wumpus.
void checkHazard(){
  if(hazards[playerX][playerY]=='b'){
    //Play bat animation and set player somewhere random
    for(int i=0; i<6; i++){
      m.writeSprite(0,0,bat1);
      delay(100);
      m.writeSprite(0,0,bat2);
      delay(100);
    }
    m.writeSprite(0,0,carry1);
    delay(100);
    m.writeSprite(0,0,carry2);
    delay(100);
    m.writeSprite(0,0,carry3);
    delay(100);
    m.writeSprite(0,0,carry4);
    delay(100);
    m.writeSprite(0,0,carry5);
    delay(100);
    m.writeSprite(0,0,carry6);
    delay(100);
    m.writeSprite(0,0,carry7);
    delay(100);
    m.writeSprite(0,0,carry8);
    delay(100);
    m.writeSprite(0,0,carry9);
    delay(100);
    playerX = random(0,8);
    playerY = random(0,8);
  }
  else if(hazards[playerX][playerY]=='p'){
    //Player fell down a pit.
    m.writeSprite(0,0,fall1);
    tone(pinSpeaker,3000,100);
    delay(100);
    m.writeSprite(0,0,fall2);
    tone(pinSpeaker,2900,100);
    delay(100);
    m.writeSprite(0,0,fall3);
    tone(pinSpeaker,2800,100);
    delay(100);
    m.writeSprite(0,0,fall4);
    tone(pinSpeaker,2700,100);
    delay(100);
    m.writeSprite(0,0,fall5);
    tone(pinSpeaker,2600,100);
    delay(100);
    m.writeSprite(0,0,fall6);
    tone(pinSpeaker,2500,100);
    delay(100);
    m.writeSprite(0,0,fall7);
    tone(pinSpeaker,2400,100);
    delay(100);
    m.writeSprite(0,0,fall8);
    tone(pinSpeaker,2300,100);
    delay(100);
    m.writeSprite(0,0,fall9);
    tone(pinSpeaker,2200,100);
    delay(100);
    m.writeSprite(0,0,fall10);
    tone(pinSpeaker,2100,100);
    delay(100);
    m.writeSprite(0,0,fall11);
    tone(pinSpeaker,2000,100);
    delay(100);
    m.writeSprite(0,0,fall12);
    tone(pinSpeaker,1900,100);
    delay(100);
    m.writeSprite(0,0,fall13);
    tone(pinSpeaker,1800,100);
    delay(100);
    m.writeSprite(0,0,fall14);
    tone(pinSpeaker,1700,100);
    delay(100);
    m.writeSprite(0,0,fall15);
    tone(pinSpeaker,1600,100);
    delay(100);
    m.writeSprite(0,0,fall16);
    tone(pinSpeaker,1500,100);
    delay(100);
    m.writeSprite(0,0,fall17);
    tone(pinSpeaker,1400,100);
    delay(100);
    for(int i=0; i<1000; i++){
      tone(pinSpeaker,random(200,1500),1);
    }
    gameOver();
  }
  else if(hazards[playerX][playerY]=='w'){
    for(int j=0; j<3; j++){
      //Player ran into the Wumpus!
      wumpusEnd();
    }
  }
}



void sense(){
  digitalWrite(pinBlue, draftLayer[playerX][playerY]);
  digitalWrite(pinGreen, stinkLayer[playerX][playerY]);
  if(soundLayer[playerX][playerY]){
    tone(pinSpeaker,6000,50);
    delay(50);
    tone(pinSpeaker,5000,50);
    delay(50);
    tone(pinSpeaker,4000,50);
  }
}

//Draw the world on the 8x8 LED matrix
//and blink the player's location.
void drawWorld(){
  for(int i=0; i<8; i++){
    for(int j=0; j<8; j++){
      m.setDot(i,j,visited[i][7-j]);
    }
  }
  m.setDot(playerX,7-playerY,0);
  delay(100);
  m.setDot(playerX,7-playerY,1);
  delay(100);
}

//Generate the Wumpus's cave.
void createWorld(){
  //Initialize world
  for(int i=0; i<8; i++){
    for(int j=0; j<8; j++){
      hazards[i][j] = '#';
    }
  }
  //create between 1-3 bats
  byte batX = 0;
  byte batY = 0;
  byte numOfBats = random(1,4);
  for(int i=0; i<numOfBats; i++){
    batX = random(0,8);
    batY = random(0,8);
    hazards[batX][batY] = 'b';
  }
  //create 4-8 pits
  byte pitX = 0;
  byte pitY = 0;
  byte numOfPits = random(4,9);
  Serial.println("Number of pits:");
  Serial.println(numOfPits);
  delay(10);
  for(int i=0; i<numOfPits; i++){
    pitX = random(0,8);
    delay(10);
    pitY = random(0,8);
    delay(10);
    hazards[pitX][pitY] = 'p';
  }
  //create one wumpus
  //(generated last so bats and pits
  // can't overwrite it by chance)
  byte wumpusX = 0;
  byte wumpusY = 0;
  while(wumpusX==0 && wumpusY==0){
    wumpusX = random(0,8);
    delay(10);
    wumpusY = random(0,8);
    delay(10);
  }
  hazards[wumpusX][wumpusY] = 'w';

  //Make sure the beginning tile is safe to spawn on.
  hazards[0][0] = '#';

  //Generate senses for sounds and LED reactions
  for(int i=0; i<8; i++){
    for(int j=0; j<8; j++){
      if(hazards[i][j] == 'w'){
        if(i<7){
          stinkLayer[i+1][j] = 1;
        }
        if(i>0){
          stinkLayer[i-1][j] = 1;
        }
        if(j<7){
          stinkLayer[i][j+1] = 1;
        }
        if(j>0){
          stinkLayer[i][j-1] = 1;
        }
      } else if(hazards[i][j] == 'p'){
        if(i<7){
          draftLayer[i+1][j] = 1;
        }
        if(i>0){
          draftLayer[i-1][j] = 1;
        }
        if(j<7){
          draftLayer[i][j+1] = 1;
        }
        if(j>0){
          draftLayer[i][j-1] = 1;
        }
      } else if(hazards[i][j] == 'b'){
        if(i<7){
          soundLayer[i+1][j] = 1;
        }
        if(i>0){
          soundLayer[i-1][j] = 1;
        }
        if(j<7){
          soundLayer[i][j+1] = 1;
        }
        if(j>0){
          soundLayer[i][j-1] = 1;
        }
      }
    }
  }
}

//Check to see if joystick is outside of deadzone
boolean checkJoystick(int x, int y){
  if(x>upperLimit || x<lowerLimit || y>upperLimit || y<lowerLimit){
    return true;
  }
  return false;
}

//Get controller direction from analog input
//0 is up
//1 is right
//2 is down
//3 is left
byte getDirection(int x, int y){
  if(x<y){
    if(x>(1024-y)){
      return 0;
    } else {
      return 3;
    }
  } else {
    if(x>(1024-y)){
      return 1;
    } else {
      return 2;
    }
  }
}
