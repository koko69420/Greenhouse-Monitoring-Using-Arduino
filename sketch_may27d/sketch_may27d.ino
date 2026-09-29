#include <LiquidCrystal.h>
#include <DHT11.h>

DHT11 dht11(2);
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Green House");
  lcd.setCursor(0, 1);
  lcd.print("Controller");
  delay(2000);
  lcd.setCursor(0, 0);
  lcd.print("By:             ");
  lcd.setCursor(0, 1);
  lcd.print("                ");
  delay(500);
  lcd.setCursor(0, 0);
  lcd.print("Medhya P");
  lcd.setCursor(0, 1);
  lcd.print("Kausthubh V");
  delay(3000);
}

void loop() {
    int temperature = 34;
    int humidity = 76;
    int s_h = 83;

    // Attempt to read the temperature and humidity values from the DHT11 sensor.
    //int result = dht11.readTemperatureHumidity(temperature, humidity);

    // Check the results of the readings.
    // If the reading is successful, print the temperature and humidity values.
    // If there are errors, print the appropriate error messages.
        lcd.setCursor(0, 0);
        lcd.print("Ambi Temp:            ");
        lcd.setCursor(10, 0);
        lcd.print(temperature);
        lcd.setCursor(14, 0);
        lcd.print("*C");
        lcd.setCursor(0, 1);
        lcd.print("Air-Humid:            ");
        lcd.setCursor(10, 1);
        lcd.print(humidity);
        lcd.setCursor(15, 1);
        lcd.print("%");
        delay(3000);
        lcd.setCursor(0, 0);
        lcd.print("Soil-Humid:              ");
        lcd.setCursor(11, 0);
        lcd.print(s_h);
        lcd.setCursor(15, 0);
        lcd.print("%");
        lcd.setCursor(0, 1);
        lcd.print("                ");
        delay(3000);

        lcd.setCursor(0, 0);
        lcd.print("Vent fan: ON              ");
        lcd.setCursor(0, 1);
        lcd.print("Sprinkler: OFF");
        delay(3000);
        /*Serial.print("Humidity: ");
        Serial.print(humidity);
        Serial.println(" %");
    } else {
        // Print error message based on the error code.
        Serial.println(DHT11::getErrorString(result));
    }*/
    }
