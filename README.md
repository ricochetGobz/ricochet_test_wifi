# Ricochet Test Wifi with ESP8266

Test of arduino wifi shield esp8266.

<img alt="Photo" src="http://jpg32190.fr/wp-content/uploads/2015/10/WiFi-Serial-Transceiver-Module.jpg?raw=true">


<img alt="Photo" src="http://i1.wp.com/randomnerdtutorials.com/wp-content/uploads/2015/01/esp8266_pinout_h-569x236.png?resize=569%2C236?raw=true">

# AT Commands 

<img alt="Photo" src="http://i2.wp.com/randomnerdtutorials.com/wp-content/uploads/2015/01/commands.png?raw=true">

- `AT+RST` : Reset la carte wifi.
- `AT+CWMODE=3` : Serveur et client TCP à la fois.
- `AT+CWLAP` : Lister les réseaux wifi captés.
- `AT+CWJAP="wifi_name","password"` : connexion à une wifi.
- `AT+CIFSR` : Connaitre l'adresse IP de la carte. la première en tant que serveur, la deuxième en tant que client. 

# Links 

[TUTO avec et sans Arduino](http://randomnerdtutorials.com/getting-started-with-esp8266-wifi-transceiver-review/)



# How to cabling and communicate with an Arduino

[TUTO FR](http://les-electroniciens.com/videos/arduino-ep16-installation-du-module-wifi-esp8266)

**Uniquement en 3.3V !!!**

**Mettre le moniteur en `NL et CR` & `115200 baud`.**


- Cabling for using AT commands :

<img alt="Photo" src="http://i2.wp.com/randomnerdtutorials.com/wp-content/uploads/2015/01/Flashing-Firmware-Arduino.png?resize=1024%2C728?raw=true">

- Cabling for automatics connection with the arduino script `automaticConnection.ino` :

Regarder le tuto.

# How to use the ESP alone

[Tuto ESP8266 Remote Controlled Sockets](http://randomnerdtutorials.com/esp8266-remote-controlled-sockets/) 

[Tuto ESP8266 how to install board arduino IDE](http://randomnerdtutorials.com/how-to-install-esp8266-board-arduino-ide/)

[TUTO FR flashage](http://les-electroniciens.com/videos/esp8266-comment-flasher-le-node-mcu)

[Compileur ESP pour OSX](http://www.esp8266.com/wiki/doku.php?id=setup-osx-compiler-esp8266)

