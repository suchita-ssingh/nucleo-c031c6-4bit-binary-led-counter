#define LSB_PIN 10
#define BIT1_PIN 11
#define BIT2_PIN 12
#define MSB_PIN 13

void setup() {
  
  pinMode(LSB_PIN, OUTPUT);
  pinMode(BIT1_PIN, OUTPUT);
  pinMode(BIT2_PIN, OUTPUT);
  pinMode(MSB_PIN, OUTPUT);
}

void loop() {
  
  for (int count = 0; count < 16; count++) {
    
    digitalWrite(MSB_PIN,  (count >> 3) & 1); 
    digitalWrite(BIT2_PIN, (count >> 2) & 1); 
    digitalWrite(BIT1_PIN, (count >> 1) & 1); 
    digitalWrite(LSB_PIN,  (count >> 0) & 1); 

    delay(1000);
  }
}

  