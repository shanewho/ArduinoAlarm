























.build/atmega328/Time/DateStrings.o : lib/Time/DateStrings.cpp
	@echo Time/DateStrings.cpp
	@mkdir -p .build/atmega328/Time
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c lib/Time/DateStrings.cpp
include .build/atmega328/Time/DateStrings.d

.build/atmega328/Time/Time.o : lib/Time/Time.cpp
	@echo Time/Time.cpp
	@mkdir -p .build/atmega328/Time
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c lib/Time/Time.cpp
include .build/atmega328/Time/Time.d



.build/atmega328/Time/libTime.a : .build/atmega328/Time/DateStrings.o .build/atmega328/Time/Time.o
	@echo Linking libTime.a
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-ar rcs $@ $^












.build/atmega328/VirtualWire/VirtualWire.o : lib/VirtualWire/VirtualWire.cpp
	@echo VirtualWire/VirtualWire.cpp
	@mkdir -p .build/atmega328/VirtualWire
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c lib/VirtualWire/VirtualWire.cpp
include .build/atmega328/VirtualWire/VirtualWire.d



.build/atmega328/VirtualWire/libVirtualWire.a : .build/atmega328/VirtualWire/VirtualWire.o
	@echo Linking libVirtualWire.a
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-ar rcs $@ $^







.build/atmega328/arduino/avr-libc/malloc.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc/malloc.c
	@echo arduino/avr-libc/malloc.c
	@mkdir -p .build/atmega328/arduino/avr-libc
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc/malloc.c
include .build/atmega328/arduino/avr-libc/malloc.d

.build/atmega328/arduino/avr-libc/realloc.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc/realloc.c
	@echo arduino/avr-libc/realloc.c
	@mkdir -p .build/atmega328/arduino/avr-libc
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc/realloc.c
include .build/atmega328/arduino/avr-libc/realloc.d

.build/atmega328/arduino/WInterrupts.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/WInterrupts.c
	@echo arduino/WInterrupts.c
	@mkdir -p .build/atmega328/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/WInterrupts.c
include .build/atmega328/arduino/WInterrupts.d

.build/atmega328/arduino/wiring.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring.c
	@echo arduino/wiring.c
	@mkdir -p .build/atmega328/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring.c
include .build/atmega328/arduino/wiring.d

.build/atmega328/arduino/wiring_analog.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring_analog.c
	@echo arduino/wiring_analog.c
	@mkdir -p .build/atmega328/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring_analog.c
include .build/atmega328/arduino/wiring_analog.d

.build/atmega328/arduino/wiring_digital.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring_digital.c
	@echo arduino/wiring_digital.c
	@mkdir -p .build/atmega328/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring_digital.c
include .build/atmega328/arduino/wiring_digital.d

.build/atmega328/arduino/wiring_pulse.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring_pulse.c
	@echo arduino/wiring_pulse.c
	@mkdir -p .build/atmega328/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring_pulse.c
include .build/atmega328/arduino/wiring_pulse.d

.build/atmega328/arduino/wiring_shift.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring_shift.c
	@echo arduino/wiring_shift.c
	@mkdir -p .build/atmega328/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring_shift.c
include .build/atmega328/arduino/wiring_shift.d






.build/atmega328/arduino/CDC.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/CDC.cpp
	@echo arduino/CDC.cpp
	@mkdir -p .build/atmega328/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/CDC.cpp
include .build/atmega328/arduino/CDC.d

.build/atmega328/arduino/HardwareSerial.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/HardwareSerial.cpp
	@echo arduino/HardwareSerial.cpp
	@mkdir -p .build/atmega328/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/HardwareSerial.cpp
include .build/atmega328/arduino/HardwareSerial.d

.build/atmega328/arduino/HID.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/HID.cpp
	@echo arduino/HID.cpp
	@mkdir -p .build/atmega328/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/HID.cpp
include .build/atmega328/arduino/HID.d

.build/atmega328/arduino/IPAddress.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/IPAddress.cpp
	@echo arduino/IPAddress.cpp
	@mkdir -p .build/atmega328/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/IPAddress.cpp
include .build/atmega328/arduino/IPAddress.d

.build/atmega328/arduino/main.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/main.cpp
	@echo arduino/main.cpp
	@mkdir -p .build/atmega328/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/main.cpp
include .build/atmega328/arduino/main.d

.build/atmega328/arduino/new.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/new.cpp
	@echo arduino/new.cpp
	@mkdir -p .build/atmega328/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/new.cpp
include .build/atmega328/arduino/new.d

.build/atmega328/arduino/Print.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/Print.cpp
	@echo arduino/Print.cpp
	@mkdir -p .build/atmega328/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/Print.cpp
include .build/atmega328/arduino/Print.d

.build/atmega328/arduino/Stream.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/Stream.cpp
	@echo arduino/Stream.cpp
	@mkdir -p .build/atmega328/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/Stream.cpp
include .build/atmega328/arduino/Stream.d

.build/atmega328/arduino/Tone.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/Tone.cpp
	@echo arduino/Tone.cpp
	@mkdir -p .build/atmega328/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/Tone.cpp
include .build/atmega328/arduino/Tone.d

.build/atmega328/arduino/USBCore.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/USBCore.cpp
	@echo arduino/USBCore.cpp
	@mkdir -p .build/atmega328/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/USBCore.cpp
include .build/atmega328/arduino/USBCore.d

.build/atmega328/arduino/WMath.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/WMath.cpp
	@echo arduino/WMath.cpp
	@mkdir -p .build/atmega328/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/WMath.cpp
include .build/atmega328/arduino/WMath.d

.build/atmega328/arduino/WString.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/WString.cpp
	@echo arduino/WString.cpp
	@mkdir -p .build/atmega328/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/WString.cpp
include .build/atmega328/arduino/WString.d



.build/atmega328/arduino/libarduino.a : .build/atmega328/arduino/avr-libc/malloc.o .build/atmega328/arduino/avr-libc/realloc.o .build/atmega328/arduino/WInterrupts.o .build/atmega328/arduino/wiring.o .build/atmega328/arduino/wiring_analog.o .build/atmega328/arduino/wiring_digital.o .build/atmega328/arduino/wiring_pulse.o .build/atmega328/arduino/wiring_shift.o .build/atmega328/arduino/CDC.o .build/atmega328/arduino/HardwareSerial.o .build/atmega328/arduino/HID.o .build/atmega328/arduino/IPAddress.o .build/atmega328/arduino/main.o .build/atmega328/arduino/new.o .build/atmega328/arduino/Print.o .build/atmega328/arduino/Stream.o .build/atmega328/arduino/Tone.o .build/atmega328/arduino/USBCore.o .build/atmega328/arduino/WMath.o .build/atmega328/arduino/WString.o
	@echo Linking libarduino.a
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-ar rcs $@ $^















.build/atmega328/src/Alarm.o : src/Alarm.cpp
	@echo src/Alarm.cpp
	@mkdir -p .build/atmega328/src
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c src/Alarm.cpp
include .build/atmega328/src/Alarm.d

.build/atmega328/src/App.o : src/App.cpp
	@echo src/App.cpp
	@mkdir -p .build/atmega328/src
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c src/App.cpp
include .build/atmega328/src/App.d

.build/atmega328/src/DoorSensor.o : src/DoorSensor.cpp
	@echo src/DoorSensor.cpp
	@mkdir -p .build/atmega328/src
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions  -o $@ -c src/DoorSensor.cpp
include .build/atmega328/src/DoorSensor.d

.build/atmega328/src/sketch.o : .build/atmega328/src/sketch.cpp
	@echo src/sketch.cpp
	@mkdir -p .build/atmega328/src
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/Time -Ilib/VirtualWire -Ilib/VirtualWire/doc -Ilib/VirtualWire/util -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/avr-libc -fno-exceptions -iquote src  -o $@ -c .build/atmega328/src/sketch.cpp
include .build/atmega328/src/sketch.d







.build/atmega328/firmware.elf : .build/atmega328/src/Alarm.o .build/atmega328/src/App.o .build/atmega328/src/DoorSensor.o .build/atmega328/src/sketch.o .build/atmega328/Time/libTime.a .build/atmega328/VirtualWire/libVirtualWire.a .build/atmega328/arduino/libarduino.a
	@echo Linking firmware.elf
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc -Os -Wl,--gc-sections -mmcu=atmega328p -o $@ $^ -lm


.build/atmega328/firmware.hex : .build/atmega328/firmware.elf
	@echo Converting to firmware.hex
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-objcopy -O ihex -R .eeprom $^ $@

include .build/atmega328/src/dependencies.d .build/atmega328/arduino/dependencies.d .build/atmega328/Time/dependencies.d .build/atmega328/VirtualWire/dependencies.d

all : .build/atmega328/firmware.hex
	@true

