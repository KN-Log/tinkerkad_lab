#include <LiquidCrystal.h>


LiquidCrystal lcd(13, 12, 11, 10, 9, 0);

unsigned int time=0;
bool lock_button= true; 
int buttonState_LCD;
unsigned int xl=0;
unsigned int swithchPin=15;

unsigned const int A = 1;
unsigned const int B = 2;
unsigned const int C = 3;
unsigned const int D = 4;
unsigned const int E = 5;
unsigned const int F = 6;
unsigned const int G = 7;
unsigned const int H = 8;
unsigned const int DZZ = A3;
unsigned const int P = 14;

bool buttonState = true;
bool button = false;
bool button_LCD = false;
unsigned int timer = 0;
int num = 4;
int mode = 0;
int per = 7;
int x=0;


void 
setup(void){ 
  
  lcd.begin(16, 2);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(H, OUTPUT);
  pinMode(DZZ, OUTPUT);
  pinMode(P, INPUT);
  pinMode(swithchPin,INPUT);
  pinMode(swithchPin,OUTPUT);
  
}


void 
Clear(void) {
  
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(H, HIGH);
}

void 
_9(void) {
  
  num = 9;
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(H, HIGH);
}

void 
_8(void) {

  num = 8;
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(H, HIGH);
}

void 
_7(void) {
  
  num = 7;
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(H, HIGH);
}

void 
_6(void) {
  
  num = 6;
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(H, HIGH);
}

void 
_5(void) {
  
  num = 5;
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(H, HIGH);
}

void 
_4(void) {
  
  num = 4;
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(H, HIGH);
}

void 
_3(void) {
  
  num = 3;
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(H, HIGH);
}

void 
_2(void) {
  
  num = 2;
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(G, LOW);
  digitalWrite(H, HIGH);
}

void 
_1(void) {
  
  num = 1;
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(H, HIGH);
}

void 
_0(void) {
  
  num = 0;
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(H, HIGH);
}


void 
automode(void){

  Clear();
  period();
  digitalWrite(H, HIGH);
  while(timer <= 500 && mode == 0)
  {
    timer += 1;
    if(timer > 250)
      button = true;
    bool buttonState = digitalRead(P);
    if (buttonState == false && button) {
      dzz();
      button = false;
      mode = 1;
      per = 11;
  	  timer = 0;
      return;
  	}
  	delay(1);
  }
  timer = 0;
}

void 
usermode1(void){
	
  Clear();
  per1();
  digitalWrite(H, LOW);
  while(timer <= 500)
  {
    timer += 1;
    if(timer > 250)
      button = true;
    bool buttonState = digitalRead(P);
    if (buttonState == false && button) {
      dzz();
      button = false;
      mode = 2;
  	  per = 3;
  	  timer = 0;
       return;
      }
  	delay(1);
  }
  timer = 0;
}

void 
usermode2(void){

  Clear();
  per2();
  digitalWrite(H, LOW);
  while(timer <= 500)
  {
    timer += 1;
    if(timer > 250)
      button = true;
    bool buttonState = digitalRead(P);
    if (buttonState == false && button) {
      dzz();
      button = false;
      mode = 3;
  	  per = 3;
  	  timer = 0;
       return;
  	}
  	delay(1);
  }
  timer = 0;
}


void 
usermode3(void){

  Clear();
  per3();
  digitalWrite(H, LOW);
  while(timer <= 500)
  {
    timer += 1;
    if(timer > 250)
      button = true;
    bool buttonState = digitalRead(P);
    if (buttonState == false && button) {
      dzz();
      button = false;
      mode = 1;
  	  per = 3;
  	  timer = 0;
      return;
  	}
  	delay(1);
  }
  timer = 0;
}



void 
period(void){

 switch (per) {
 	case 0:
    	per += 1;
      	_0();
    break;
 	case 1:
    	per += 1;
      	Clear();
    break;
 	case 2:
    	per += 1;
      	_6();
    break;
 	case 3:
    	per += 1;
      	Clear();
    break;
 	case 4:
    	per += 1;
      	_0();
    break;
 	case 5:
    	per += 1;
		Clear();
    break;
 	case 6:
    	per += 1;
      	_7();
    break;
 	case 7:
      	per +=1;
		Clear();
    break;
    case 8:
    	per += 1;
      	_0();
    break;
    case 9:
      	per += 1;
		Clear();
    break;
   	case 10:
      	per += 1;
      	_9();
    break;
    case 11:
      	per = 0;
		Clear();
    break;
	}
  	if(per > 11)
      per = 0;
}

void 
per1(void){
	
 switch (per) {
 	case 0:
    	per += 1;
      	_0();
    break;
 	case 1:
    	per += 1;
      	Clear();
    break;
 	case 2:
    	per += 1;
      	_6();
    break;
 	case 3:
    	per = 0;
      	Clear();
    break;
    }
  	if(per > 3)
      per = 0;
}

void 
per2(void){
	
 switch (per) {
 	case 0:
    	per += 1;
      	_0();
    break;
 	case 1:
    	per += 1;
      	Clear();
    break;
 	case 2:
    	per += 1;
      	_7();
    break;
 	case 3:
    	per = 0;
      	Clear();
    break;
    }
  	if(per > 3)
      per = 0;
}

void 
per3(void){
	
 switch (per) {
 	case 0:
    	per += 1;
      	_0();
    break;
 	case 1:
    	per += 1;
      	Clear();
    break;
 	case 2:
    	per += 1;
      	_9();
    break;
 	case 3:
    	per = 0;
      	Clear();
    break;
    }
  	if(per > 3)
      per = 0;
}

void 
dzz(void){
  
  digitalWrite(DZZ, HIGH);
  delay(50);
  digitalWrite(DZZ, LOW);
}


void 
name(){
    
    lcd.setCursor(0, 0);
  	lcd.print("Name");  	
}

void  
surname(){
  	
    lcd.setCursor(0, 0);
	lcd.print("Surname");  
}



void 
patronymic(){
  	
    lcd.setCursor(0, 0);
  	lcd.print("Patronymic"); 
}

void 
name_two(){
    
    lcd.setCursor(0, 0);
  	lcd.print("Name1");  	
}

void  
surname_two(){
  	
    lcd.setCursor(0, 0);
	lcd.print("Surname1");  
}



void 
patronymic_two(){
  	
    lcd.setCursor(0, 0);
  	lcd.print("Patronymic1"); 
}

void 
name_three(){
    
    lcd.setCursor(0, 0);
  	lcd.print("Name2");  	
}

void  
surname_three(){
  	
    lcd.setCursor(0, 0);
	lcd.print("Surname2");  
}



void 
patronymic_three(){
  	
    lcd.setCursor(0, 0);
  	lcd.print("Patronymic2"); 
    xl=0;
}

void  
output(int xl){
  
    lcd.clear();
  

    switch(xl){
        
        case 1:
      		surname();
            return;
        case 2:
   	        name();
            return;
        case 3:
   	        patronymic();
      		return;
      	case 4:
      		surname_two();
      		return;
      	case 5:
      		name_two();
            return;
      	case 6:
      		patronymic_two();
            return;
      	case 7:
      		surname_three();
      		return;
      	case 8:
      		name_three();
      		return;
      	case 9:
      		patronymic_three();
            return;
    }

}

bool 
lock_button_time(){
    
	while(1){
       
        time+=1;
       
      	if(time>=100){
            lock_button=false;
      	}
      	
      	buttonState_LCD = digitalRead(P);
       	
      	if (buttonState_LCD == false && !lock_button){
      		xl++;
          	time=0;
          	return true;
        }else{
        	delay(1);
        }
    }

}

void 
LCD(){

  	bool unlock=lock_button_time();
  	  
  	if(unlock){
        output(xl);
      	lock_button=true;
    }
   
}


int switchState=0;
void 
loop(){
	
  switchState=digitalRead(swithchPin);
  if (switchState == HIGH){
	LCD();
  }else{
  
  	switch (mode) {
 	case 0:
    	automode();
    break;
 	case 1:
    	usermode1();
    break;
 	case 2:
    	usermode2();
    break;
    case 3:
      	usermode3();
    break;
  	}
  }  	
}
