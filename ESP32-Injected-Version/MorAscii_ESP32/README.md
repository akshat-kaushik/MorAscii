# MorAscii with ESP32

## What is MorAscii ?

MorAscii is a simple, lightweight and efficient command-line tool built in C that **convert** the given file text into **Morse Code** and vice-versa means that it can also convert Morse Code back into **text**. It is ideal for those who want to learn, send encrypted messages or want to explore Morse Code for fun. It is built using the **International Morse Code Pattern**.

## What do you mean by MorAscii injected into ESP32 ?

MorAscii is now avaible in ESP32 to increase it's functionality in the **hardware sector**, with the help of ESP32 microcontroller board we can extent it **Communication bordiers** like with this V2 version it can communicate through **LED** (Built-in ESP32), for now it only supports Text-to-Morse Code convertion.

## Project Structure

```
ESP32-Injected-Version/
|
├── MorAscii_ESP32-V2.ino       # Main code
|
└── README.md                   # Project Documentation
```

## How It Works

1. Enter the text into the msg array on **line no. 12**.
2. Compile the code.
3. Inject the Code into the ESP32.
4. Check the result in the **Serial Monitor**.
5. **Output** will be show in the form of **blinking blue LED**.

## Build & Run Instructions

- MinGW GCC (C compiler)
- Arduino IDE
- ESP32 Board package by Espressif Systems
- CP2102 driver for Connection

### Compile it

```bash
# Copy paste the code

# Compile it

# Inject it in ESP32

# Run it
```

## Sample Output

Text-to-Morse Code
```
. . . .    .    . _ . .    . _ . .    _ _ _    |  . _ _    _ _ _    . _ .    . _ . .    _ . .
```

## To-Do/Improvements

- Add file Handling
- Add Morse Code-to-Text Convertion
- Add Sound Communication
- Add 0-9 and Special Charaters
- Add a interactive GUI and a menu instead of numeric inputs

## Author

Akshat Kaushik

### Alive At

- GitHub: [@akshat-kaushik](https://github.com/akshat-kaushik)
- X: [@X](https://x.com/kaushk_akshat)