# MorAscii

MorAscii is a simple, lightweight and efficient command-line tool built in C that **convert** the given file text into **Morse Code** and vice-versa means that it can also convert Morse Code back into **text**. It is ideal for those who want to learn, send encrypted messages or want to explore Morse Code for fun. It is built using the **International Morse Code Pattern**.

## Features

- Converts file text into Morse Code
- Converts Morse Code into text
- Provide dot & dash sound support for compatablity
- Display Morse Code into dot(.) & dash(_) for readability
- Supports both Capital (A-Z) and small (a-z) letters
- Easy to use, beginner-friendly and lightweight

## Project Structure

```
MorAscii/
│
├── text_files/         # Sample text files for testing
|   ├── sample.txt
|   └── welcome.txt
|
├── UI-UX/              # UI-UX user interface
|   ├── welcome.c
|   └── welcome.h
|
├── utils/              # Logic and functions
|   ├── function.c
|   └── function.h
|
├── main.c              # Entry point
├── mor.exe             # Main executable
├── LICENSE             # Project license       
└── README.md           # Project Documentation
```

## How It Works

1. Display a welcome banner.
2. Ask whether you want to convert **Text to Morse Code** or **Morse Code to Text**.
3. Ask for the file path if you choose option **1** or ask for morse code if you choose option **2**.
4. Display result.

## Build & Run Instructions

- MinGW GCC (C compiler)
- PowerShell/WSL/CMD/Git Bash on Windows

### Compile it

```bash
# Clone the repository
https://github.com/akshat-kaushik/MorAscii.git

# Compile it
gcc -o mor main.c utils/function.c UI-UX/welcome.c

# Run it
./mor
```

## Sample Output

Text-to-Morse Code
```
     *****   **    **                                   **                                                                ******  ***** *****                                *****                                *       *                      **   *  *  ***** *****                             *  ***                               ***     ***                    *    *  *   * **  * **                                 ***                                *       *                         *  *    *     *        ****    ***  ****          *  **          ****                                                  ** **    *     *       * ***  *  **** **** *       *  **         * **** *    ****    ***     ***                        ** **    *     *      *   ****    **   ****       *    **       **  ****    * ***  *  ***     ***                       ** **    *     *     **    **     **              *    **      ****        *   ****    **      **                       ** **    *     *     **    **     **             *      **       ***      **           **      **                       ** **    *     **    **    **     **             *********         ***    **           **      **                       *  **    *     **    **    **     **            *        **          ***  **           **      **                          *     *      **   **    **     **            *        **     ****  **  **           **      **                      ****      *      **    ******      ***          *****      **   * **** *   ***     *    **      **                     *  *****           **    ****        ***        *   ****    ** *    ****     *******     *** *   *** *                 *     **                                        *     **      **               *****       ***     ***                  *                                               *                                                                        **                                              **                                                                                              Press '0' for Text to Morse Code
                         Press '1' for Morse Code to Text
0
Enter file path: text_files/sample.txt
.__ .... ___ . ..._ . ._. | .._. .. __. .... _ ... | __ ___ _. ... _ . ._. ... | ... .... ___ .._ ._.. _.. | ... . . | _ ___ | .. _ | _ .... ._ _ | .. _. | _ .... . | .__. ._. ___ _._. . ... ... | .... . | _.. ___ . ... | _. ___ _ | _... . _._. ___ __ . | ._ | __ ___ _. ... _ . ._. | ._ _. _.. | .. .._. | _.__ ___ .._ | __. ._ __.. . | ._.. ___ _. __. | . _. ___ .._ __. .... | .. _. _ ___ | ._ _. | ._ _... _.__ ... ... | | _ .... . | ._ _... _.__ ... ... | .__ .. ._.. ._.. | __. ._ __.. . ... | _... ._ _._. _._ | .. _. _ ___ | _.__ ___ .._ | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | .._. ._. .. . _.. ._. .. _._. .... | _. .. . _ __.. ... _._. .... .
```

Morse Code-to-Text
```
     *****   **    **                                   **                                                                ******  ***** *****                                *****                                *       *                      **   *  *  ***** *****                             *  ***                               ***     ***                    *    *  *   * **  * **                                 ***                                *       *                         *  *    *     *        ****    ***  ****          *  **          ****                                                  ** **    *     *       * ***  *  **** **** *       *  **         * **** *    ****    ***     ***                        ** **    *     *      *   ****    **   ****       *    **       **  ****    * ***  *  ***     ***                       ** **    *     *     **    **     **              *    **      ****        *   ****    **      **                       ** **    *     *     **    **     **             *      **       ***      **           **      **                       ** **    *     **    **    **     **             *********         ***    **           **      **                       *  **    *     **    **    **     **            *        **          ***  **           **      **                          *     *      **   **    **     **            *        **     ****  **  **           **      **                      ****      *      **    ******      ***          *****      **   * **** *   ***     *    **      **                     *  *****           **    ****        ***        *   ****    ** *    ****     *******     *** *   *** *                 *     **                                        *     **      **               *****       ***     ***                  *                                               *                                                                        **                                              **                                                                                              Press '0' for Text to Morse Code
                         Press '1' for Morse Code to Text
1
                        Enter Morse Code
.__ .... ___ . ..._ . ._. | .._. .. __. .... _ ... | __ ___ _. ... _ . ._. ... | ... .... ___ .._ ._.. _.. | ... . . | _ ___ | .. _ | _ .... ._ _ | .. _. | _ .... . | .__. ._. ___ _._. . ... ... | .... . | _.. ___ . ... | _. ___ _ | _... . _._. ___ __ . | ._ | __ ___ _. ... _ . ._. | ._ _. _.. | .. .._. | _.__ ___ .._ | __. ._ __.. . | ._.. ___ _. __. | . _. ___ .._ __. .... | .. _. _ ___ | ._ _. | ._ _... _.__ ... ... | | _ .... . | ._ _... _.__ ... ... | .__ .. ._.. ._.. | __. ._ __.. . ... | _... ._ _._. _._ | .. _. _ ___ | _.__ ___ .._ | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | | .._. ._. .. . _.. ._. .. _._. .... | _. .. . _ __.. ... _._. .... .




Text:
WHOEVER FIGHTS MONSTERS SHOULD SEE TO IT THAT IN THE PROCESS HE DOES NOT BECOME A MONSTER AND IF YOU GAZE LONG ENOUGH INTO AN ABYSS  THE ABYSS WILL GAZES BACK INTO YOU                                                               FRIEDRICH NIETZSCHE
```

## Supported Alphabets

```
 ________________________
| Character | Morse Code |
| --------- | ---------- |
| A         | .-         |
| B         | -...       |
| C         | -.-.       |
| D         | -..        |
| E         | .          |
| F         | ..-.       |
| G         | --.        |
| H         | ....       |
| I         | ..         |
| J         | .---       |
| K         | -.-        |
| L         | .-..       |
| M         | --         |
| N         | -.         |
| O         | ---        |
| P         | .--.       |
| Q         | --.-       |
| R         | .-.        |
| S         | ...        |
| T         | -          |
| U         | ..-        |
| V         | ...-       |
| W         | .--        |
| X         | -..-       |
| Y         | -.--       |
| Z         | --..       |
|___________|____________|
```

## To-Do/Improvements

- Add 0-9 and Special Charaters
- Add a interactive GUI and a menu instead of numeric inputs

## Contributing

Contributions are always welcome and appreciated! feel free to contribute

## License

This project is licensed under the [MIT License](LICENSE)

## Author

Akshat Kaushik

### Alive At

- GitHub: [@akshat-kaushik](https://github.com/akshat-kaushik)
- X: [@X](https://x.com/kaushk_akshat)