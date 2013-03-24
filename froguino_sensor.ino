String SEPARATOR = ":";
// Temperature sensor
int TEMP_SENSOR_PIN = 0; // analog pin
String TEMP_SENSOR_NAME = "temp";
int NUMBER_OF_READING = 10;
float temperature = 0; 
// Delay between
int DELAY = 1000;


int i;
float data;

void setup(){
  Serial.begin(9600);
}

void loop(){
  temperature = 0;
  for(i = 0;i<NUMBER_OF_READING;i++){
    // Voltage
    data = analogRead(TEMP_SENSOR_PIN);
    // Convert voltage to celsius temperature
    temperature += ( data * 500.0) / 1024.0;
    // delay(DELAY);
  }
  temperature /= NUMBER_OF_READING; 
  // Send tempature data
  Serial.print(TEMP_SENSOR_NAME);
  Serial.print(SEPARATOR);
  Serial.println(temperature);
     
  // Waiting
  delay(DELAY);
}
