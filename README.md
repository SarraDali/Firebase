# Arduino Firebase Real-Time Database Project

This project demonstrates how to use Arduino to communicate with the Firebase real-time database. The code leverages the Firebase library to send and receive data between an Arduino device and Firebase.

## Features

- **Real-time Data**: Send data from Arduino to Firebase and receive updates instantly.
- **Firebase Library**: Utilizes Firebase's Arduino library for seamless communication with Firebase's real-time database.
- **Data Logging**: Log sensor data or other Arduino data to Firebase for storage and further analysis.

## Requirements

- **Arduino Board**: Any compatible Arduino board (e.g., ESP8266, ESP32).
- **Firebase Account**: A Google Firebase account with a real-time database set up.
- **Libraries**: Install the Firebase Arduino library from the Library Manager in Arduino IDE.

- 
- ## Setup

1. **Install Dependencies**:
   - Open Arduino IDE.
   - Go to **Sketch** -> **Include Library** -> **Manage Libraries**.
   - Search for and install the **Firebase Arduino Library**.
   
2. **Configure Firebase**:
   - Set up a Firebase project on the [Firebase Console](https://console.firebase.google.com/).
   - Copy the Firebase **Database URL** and **API Key**.
   - Add these credentials to the Arduino code.

3. **Upload Code**:
   - Connect your Arduino to your computer.
   - Upload the code from this repository to your Arduino board.

## Usage

1. Power on your Arduino device.
2. Data from the Arduino will be sent to Firebase in real-time.
3. You can monitor the data directly from the Firebase Console.
