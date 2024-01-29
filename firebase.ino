#include <WiFi.h>
#include <Firebase.h>

#define API_KEY "iaMiYhsa7Rsq3DstBnupZjhpzzwpBU3xJadLoy2j"
#define DATABASE_URL "https://our-project-8b4f3-default-rtdb.firebaseio.com/"
FirebaseData fbdo;
FirebaseConfig config;
#define CapF 15
#define LED 13
void setup() {

  pinMode(CapF, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
   Serial.println("check_wifi");
  WiFi.mode(WIFI_STA);
  WiFi.begin("Ooredoo _M30_3E7A","6DB5D10D");
  while (WiFi.status() != WL_CONNECTED) {
    delay(100);
    digitalWrite(LED,LOW);
    Serial.println("...echec");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  delay(100);
  config.api_key = API_KEY;
  config.database_url = DATABASE_URL;
  Firebase.begin(DATABASE_URL, API_KEY);
}
void loop() 
{  int a=random(0, 50);
  int valCap = analogRead(CapF);
Serial.println(valCap);
  if (valCap >  650) {
    digitalWrite(LED, HIGH);
    Serial.println("Fumée détectée !"); }
  else {
    digitalWrite(LED, LOW);  }
  delay(1000); 
if (Firebase.ready()) {
    //setValue_RTDB
     Serial.println("Firebase started");
    Firebase.RTDB.setInt(&fbdo, "/our-project/TEMP", a);
    delay(200);
    Serial.println("------------------");
    Serial.println();
    delay(1000);
  }


}