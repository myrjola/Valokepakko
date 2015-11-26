# Arduino Make file. Refer to https://github.com/sudar/Arduino-Makefile

BOARD_TAG = uno
ARDUINO_LIBS = Adafruit_NeoPixel

include /usr/local/opt/arduino-mk/Arduino.mk

check-syntax:
	$(CXX) -c -include Arduino.h   -x c++ $(CXXFLAGS)   $(CPPFLAGS)  -fsyntax-only $(CHK_SOURCES)
