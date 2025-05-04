#include <Keyboard.h>

//probably not final code

int D = 2;
int F = 3;
int J = 4;
int K = 5;
int N = 6;
int V = 7;

void setup() {
  // put your setup code here, to run once:
pinMode(D, INPUT_PULLUP);
pinMode(F, INPUT_PULLUP);
pinMode(J, INPUT_PULLUP);
pinMode(K, INPUT_PULLUP);
pinMode(N, INPUT_PULLUP);
pinMode(V, INPUT_PULLUP);
Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

if(digitalRead(D) == LOW ){
Keyboard.press('d');
} else{
Keyboard.release('d');
}
if(digitalRead(F) == LOW){
Keyboard.press('f');
} else {
Keyboard.release('f');
}
if(digitalRead(J) == LOW){
Keyboard.press('j');
} else {
Keyboard.release('j');
}
if(digitalRead(K) == LOW){
Keyboard.press('k');
}else {
Keyboard.release('k');
}
if(digitalRead(N) == LOW){
Keyboard.press('n');
}else {
Keyboard.release('n');
}
if(digitalRead(V) == LOW){
Keyboard.press('v');
}else {
Keyboard.release('v');
}
}
