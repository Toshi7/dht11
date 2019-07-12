# dht11-sensor

## Purpose 
To use luminosity sensor with platformio

## libraries for DHT and search Adafruit Unified Sensor 
```
pio lib search DHT sensor library
pio lib install 19
pio lib search Adafruit Unified Sensor
pio lib install 31
```

- Checking board definition
```
$ platformio boards
$ platformio boards esp32
$ platformio init --board nodemcu-32s
```

Build
```
platformio run
```

Upload
```
platformio run -t upload
```

Serial monitor
```
platformio serialports monitor -b 115200
```

Installing library
```
[env:nodemcu-32s]
platform = espressif32
board = nodemcu-32s
framework = arduino
lib_deps = DHT sensor library, Adafruit Unified Sensor
monitor_speed = 115200
```

Running
```
./run_esp32.sh
```

- [Boards](https://docs.platformio.org/en/latest/boards/index.html)
