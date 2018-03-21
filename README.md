# ColorName
An Arduino library for spelling out color's names. Idea is simple, pass red, green and blue or RGB hex to get back closest color name. Takes up a lot of memory, so be careful in memory management.

## Using the Library
* Download this GitHub [library](https://github.com/debsahu/ColorName/archive/master.zip).
* In Arduino, Goto Sketch -> Include Library -> Add .ZIP Library... and point to the zip file downloaded.

Include the library
```
#include <ColorName.h>
```
Passing Red, Green and Blue values
```
int red = 255, int green= 0, blue =0;
Serial.println(ColorNameString(red, green, blue));
```
Serial will print 
>> Red

Passing RGB HEX
```
Serial.println(ColorNameString(0xff0000));
```
Serial will print 
>> Red