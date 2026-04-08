int ledPin = 4;
int sensorPin = 5;
int leitura = 0;
bool estadoSensor = false;

void setup() {
  
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(115200);

}

void loop() {
  leitura = digitalRead(sensorPin);

  if(leitura == HIGH){
    digitalWrite(ledPin, HIGH);
    if(estadoSensor == false){
      Serial.println("Movimento detectado");
      estadoSensor = true;
    }
    delay(5000);
  }
  else{
    digitalWrite(ledPin, LOW);
    if(estadoSensor == true){
      Serial.println("Sem movimento");
      estadoSensor = false;
    }
    
  }
}
