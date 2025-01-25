#define BLYNK_TEMPLATE_ID "Your_Template_ID"
#define BLYNK_DEVICE_NAME "Theft Alert System"
#define BLYNK_AUTH_TOKEN "Your_Auth_Token" 
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char ssid[] = "Your_SSID"; 
char pass[] = "Your_PASSWORD"; 
#define PIR_SENSOR_PIN D5
#define BUZZER_PIN D6
bool motionDetected = false;
void setup() {
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  pinMode(PIR_SENSOR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);
  Serial.println("System initialized.");
}
void loop() {
  Blynk.run();
  if (digitalRead(PIR_SENSOR_PIN) == HIGH) {
    if (!motionDetected) {
      motionDetected = true;
      Serial.println("Motion detected!");

      Blynk.notify("⚠️ Motion Detected! Potential Intruder Alert!");
      digitalWrite(BUZZER_PIN, HIGH);
      delay(1000); 
      digitalWrite(BUZZER_PIN, LOW);
    }
  } else {
    motionDetected = false; 
  }
}
