#include <Keyboard.h>

//probably not final code

int D = 2;
int F = 3;
int J = 4;
int K = 5;
int N = 6;
int V = 7;
int outb1 = 16;
int outa1 = 10;
int outb2 = 14;
int outa2 = 15;
int stoutb1;
int stoutb2;
int lstoutb1;
int lstoutb2;

void setup() {
  // put your setup code here, to run once:
pinMode(D, INPUT_PULLUP);
pinMode(F, INPUT_PULLUP);
pinMode(J, INPUT_PULLUP);
pinMode(K, INPUT_PULLUP);
pinMode(N, INPUT_PULLUP);
pinMode(V, INPUT_PULLUP);
pinMode(outb1, INPUT_PULLUP);
pinMode(outa1, INPUT_PULLUP);
pinMode(outb2, INPUT_PULLUP);
pinMode(outa2, INPUT_PULLUP);

Keyboard.begin();

stoutb2 = digitalRead(outb2);
stoutb1 = digitalRead(outb1);
}

void loop() {
  // put your main code here, to run repeatedly:
lstoutb1 = digitalRead(outb1);
lstoutb2 = digitalRead(outb2);

// button logic
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
// knob logic
if(lstoutb1 != stoutb1 && lstoutb1 == LOW) {
 if(digitalRead(outa1) != lstoutb1){
//Keyboard.press();
 } else if (digitalRead(outa1) == lstoutb1) {
//Keyboard.press();
 } else {
  //Keyboard.release();
  //Keyboard.release();
 }
if(lstoutb2 != stoutb2 && lstoutb2 == LOW) {
 if(digitalRead(outa2) != lstoutb2) {
//Keyboard.press();
 } else if (digitalRead(outa2) == lstoutb2) {
//Keyboard.press();
 } else {
  //Keyboard.release();
  //Keyboard.release();
 }
}
stoutb1 = lstoutb1;
stoutb2 = lstoutb2;
}
}

stoutb1 = lstoutb1;
stoutb2 = lstoutb2;
}
