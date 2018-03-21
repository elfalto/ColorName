#include <ColorName.h>

void setup() {
  Serial.begin(115200);
  int red   = 255;
  int blue  = 0;
  int green = 128;
  const char* search_color = ColorNameString(red, green, blue);
//  const char* search_color = ColorNameString(0xFFD700);
  Serial.print("Color Name: ");
  Serial.println(search_color);
}

void loop() {
  // put your main code here, to run repeatedly:

}
