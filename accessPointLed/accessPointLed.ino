
/* Create a WiFi access point and provide a web server on it. */

#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

/* Set these to your desired credentials. */

const char *ssid = "HelloWorldWifi";
const char *password = "helloWorldPass";

int val;

/* Set Port */
ESP8266WebServer server(80);

/* Just a little test message.  Go to http://192.168.4.1 in a web browser
 * connected to this access point to see it.
 */
void handleRoot() {
  server.send(200, "text/html", "<h1>HELLO WORLD</h1><h2>You are connected on the ESP8266WebServer ! </h2>");
}

/* Control LED via Url */

void setLow() {
  val = 0;
  server.send(200, "text/html", "<h1>LED IS SET AS : </h1><h2>LOW</h2>");
  Serial.println("Led is LOW");
  delay(2);
}
void setHigh() {
  val = 1;
  server.send(200, "text/html", "<h1>LED IS SET AS : </h1><h2>HIGH</h2>");
  Serial.println("Led is HIGH ");
  delay(2);
}
void setup() {
  delay(1000);
  Serial.begin(115200);
  Serial.println();
  Serial.print("Configuring access point...");
  pinMode(2, OUTPUT);
  
  /* You can remove the password parameter if you want the AP to be open. */
  WiFi.softAP(ssid, password);
  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);


  /*  Server Routing */
  server.on("/", handleRoot);
  server.on("/setlow", setLow);
  server.on("/sethigh", setHigh);
  server.begin();
  Serial.println("HTTP server started");
}

void loop() {
  digitalWrite(2,val);
  server.handleClient();
  delay(1);
}
