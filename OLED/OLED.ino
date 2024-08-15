#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128  /* OLED DISPLAY WIDTH, IN PIXELS */ 
#define SCREEN_HEIGHT 64  /* OLED DISPLAY HEIGHT, IN PIXELS */ 

#define OLED_RESET -1     /* RESET PIN NOT USED */ 
#define SCREEN_ADDRESS 0x3C /* I2C ADDRESS FOR 128x64 OLED */ 

/* CREATE AN INSTANCE OF THE SSD1306 DISPLAY  */ 
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(115200);

  /* INITIALIZE THE DISPLAY */
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { /* ADDRESS 0x3D FOR 128x64 */  
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); /* INFINITE LOOP */ 
  }

  display.clearDisplay(); /* CLEAR THE DISPLAY BUFFER */ 
  display.setTextSize(1); /* SET TEXT SIZE TO 1 */ 
  display.setTextColor(SSD1306_WHITE); /* SET TEXT COLOR TO WHITE */ 
  display.setCursor(0, 10); /* SET CURSOR POSITION (X, Y) */ 
  
  display.println(F("Ireallylovemygurl\n\n"));
  display.println(F("Daararararari \3"));
  
  // display.println(F("AI FARM ROBOTIC"));  /* PRINT "AI FARM ROBOTIC" ON THE SCREEN */ 
  display.display(); /* DISPLAY THE TEXT ON THE SCREEN */ 

  // Serial.println("AI FARM ROBOTIC"); /* PRINTS "AI FARM ROBOTIC" TO SERIAL MONITOR */
  Serial.println("Ireallylovemygurl\n");
  Serial.println("“Daarararararii “");

  delay(1500);  /* HOLD THE "AI FARM ROBOTIC" MESSAGE FOR 1.5 SECONDS*/ 
}

void loop() {

  /* NOTHING TO DO HRER */

}
