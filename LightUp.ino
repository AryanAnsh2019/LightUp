#include HTTPClint.h

//char getSSID()
//{
//  HTTPClient http;
//  http.begin(" https://api.thingspeak.com/apps/thinghttp/send_request?api_key=35AAYBGPGJ1A9WAU");
//  int httpCode = http.GET();
//  
//  if (httpCode > 0)
//  {
//    ssid = http.getString();
//  } 
//}     


char ssid[] = "Ktayal";
char pass[] = "1357924680";

char getRGB()
{
  HTTPClient http;
  http.begin(" https://api.thingspeak.com/apps/thinghttp/send_request?api_key=35AAYBGPGJ1A9WAU");
  int httpCode = http.GET();
  
  if (httpCode > 0)
  {
    ssid = http.getString();
  }
  return ssid; 
} 
void setup() {
    
  Serial.begin(9600);
}

void loop() {
  rgb= getRGB();  
    Serial.println(rgb);
}
