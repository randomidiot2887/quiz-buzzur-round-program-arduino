# Buzzur round (WIP)
> This project is under construction and is not finalised yet. Any issues found would be welcome and reporting errors and bugs are highly encouraged. This Readme will also get an update in the future with more detail and information about the project 

An arduino based project which is planned to be used for the buzzer round of quizes in Gn.AEC *(Gaviyani Atoll Education Centre)*

## Materials used (WIP)
- Arduino Uno R3 based board
- 4 colored LED's
    - Green
    - Yellow
    - Blue
    - Red
- A large sized breadboard (2 small breadboards joined togather)
- 4 buttons
- Wires to connect to arduino
- 1 Buzzur

## How to upload to an arduino
#### With Arduino IDE
- Download and install the [Arduino IDE](https://www.arduino.cc/en/software_) if not already installed
- Create a new project
- go to [the C++ source code](https://github.com/randomidiot2887/quiz-buzzur-round-program-arduino/blob/main/src/main.cpp) and copy the contents of the file
- Paste it in the Arduino IDE
- Press verify to verify if the code works
- **If** it does, connect the arduino and select the arduino's TTYL from the selection and then press **UPLOAD** to upload the code to the arduino
- Enjoy!

#### With Visual Studio Code
- Download and install [Visual Studio Code](https://code.visualstudio.com/) for your operating system of choice
- Download and install [Platform tools IDE extension](https://platformio.org/install/ide?install=vscode) for Visual Studio Code
- Open the platform IO tab in the Visual Studio Code side bar
- Let it finish the initial setup
- Clone this reposotory
- Open the cloned folder using platformIO
- Press verify (usually on the bottom left) and if that suceeds press upload with your arduino plugged in (**MAKE SURE YOUR ARDUINO'S TTYL IS SELECTED**)
- Enjoy!

> **Warning**: This method is harder to use for begginers and new users. but is more powerful for devs who want to contribute to this project OR improve it.

## LICENCE
randomidiot2887/quiz-buzzur-round-program-arduino is licensed under the
[**GNU Affero General Public License v3.0**](https://github.com/randomidiot2887/quiz-buzzur-round-program-arduino/blob/main/LICENSE)
> This means while you can reuse the code, You have to make sure to make the code avalable to the users in an open manner and should consider contributing back to this repo

.