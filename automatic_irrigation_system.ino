#define SOIL_SENSOR A0
#define RELAY_PIN 7
#define LED_MOTOR_OFF 8
#define LED_MOTOR_ON 9

int moistureThreshold = 500;

void setup() {
  pinMode(LED_MOTOR_OFF, OUTPUT);
  pinMode(LED_MOTOR_ON, OUTPUT);

  // Relay initially OFF → make pin INPUT (high impedance)
  pinMode(RELAY_PIN, INPUT);

  digitalWrite(LED_MOTOR_OFF, HIGH);
  digitalWrite(LED_MOTOR_ON, LOW);

  Serial.begin(9600);
}

void loop() {
  int moistureValue = analogRead(SOIL_SENSOR);

  Serial.print("Soil Moisture: ");
  Serial.println(moistureValue);

  // Soil DRY → Motor ON
  if (moistureValue > moistureThreshold) {

    pinMode(RELAY_PIN, OUTPUT);
    digitalWrite(RELAY_PIN, LOW);     // Relay ON

    digitalWrite(LED_MOTOR_ON, HIGH);
    digitalWrite(LED_MOTOR_OFF, LOW);
  }
  // Soil WET → Motor OFF
  else {

    pinMode(RELAY_PIN, INPUT);        // Relay OFF (no current draw)

    digitalWrite(LED_MOTOR_ON, LOW);
    digitalWrite(LED_MOTOR_OFF, HIGH);
  }

  delay(1000);
}
