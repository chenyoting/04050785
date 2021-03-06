//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// The Unnamed Circuit
// 
// Made by dai dania2009
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4210709-the-unnamed-circuit


int led[8] = {2,3,4,5,6,7,8,9};
int i,num;

void setup() {
  
  for (i=0;i<8;i++)
  {
    pinMode(led[i], OUTPUT);
  }
}


void loop() {
  for (num=0;num<2;num++){				//全亮滅2次
  	for (i=7;i>=0;i--){
    	digitalWrite(led[i], HIGH);   
  	}
    delay(1000);
  	for (i=7;i>=0;i--){
	    digitalWrite(led[i], LOW);   
  	}
    delay(1000);
  }
  
  //左移
  	for (i=7;i>=0;i--){
	    digitalWrite(led[i], HIGH);   
	  	delay(100);               
	  	digitalWrite(led[i], LOW);   
	  	delay(100);               
  	}
  
  
  for (num=0;num<2;num++){			//亮滅2次
  	for (i=7;i>=0;i--){
    	digitalWrite(led[i], HIGH);   
  	}
    delay(1000);
  	for (i=7;i>=0;i--){
	    digitalWrite(led[i], LOW);   
  	}
    delay(1000);
  }
  for (num=0;num<1;num++){			//右移
	  for (i=0;i<8;i++){
	    digitalWrite(led[i], HIGH);   
	  	delay(100);               
	  	digitalWrite(led[i], LOW);    
	  	delay(100);               
  	}
  }
}
