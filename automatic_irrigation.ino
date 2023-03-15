int sensorPin = A0;    //Sensörün takılacağı pin 
int relayPin= 8;
int veri;
int esikdeger=300;
int passive_led = 2;
int active_led = 3;

//Sensörden okunan verinin tutulacağı değişken

void setup() {
  pinMode(sensorPin, INPUT);        //Sensörün takılacağı pini INPUT olarak ayarlıyoruz.
  pinMode(relayPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  Serial.println(veri);
  veri = analogRead(sensorPin);    //Sensörden dijital okuma yapıyoruz.
  if(veri > esikdeger and veri!= 0){            //Sensör verisi eşik değerini geçerse if içerisindeki kodlar uygulanır.
    digitalWrite(relayPin, HIGH);
    delay(5000);
    digitalWrite(passive_led,LOW);
    digitalWrite(active_led,HIGH);
    digitalWrite(relayPin, LOW);
    delay(5000);
  
  }
  else 
  {digitalWrite(relayPin, HIGH);
   digitalWrite(passive_led,HIGH);
   digitalWrite(active_led,LOW);
   
  }
  
  
}
