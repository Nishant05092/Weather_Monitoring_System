#include <DHT.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define DHTPIN 7
#define DHTTYPE DHT11

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

DHT dht(DHTPIN, DHTTYPE);
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  dht.begin();

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  display.clearDisplay();
  display.setTextSize(1);
  display.setCursor(0, 10);
  display.print("Temperature:");
  display.setCursor(0, 25);
  display.print(t);
  display.print(" C");

  display.setCursor(0, 45);
  display.print("Humidity:");
  display.print(h);
  display.print(" %");

  display.display();
  delay(2000);
}
