# Soil Moisture Detection System

This project aims to detect the level of moisture content in soil using a moisture sensor, Arduino board, and 1Sheeld module. The system provides real-time feedback to gardeners to facilitate effective plant watering.

## Overview

The soil moisture detection system operates as follows:
- A moisture sensor measures soil moisture levels and sends data to an Arduino board.
- Based on the moisture level:
  - A red LED glows to indicate dry soil conditions.
  - A green LED glows to indicate moist soil conditions.
- The Arduino communicates with the 1Sheeld module, which connects to a mobile app via Bluetooth.
- The mobile app sends notifications, emails, and voice messages to the gardener when watering is required based on soil moisture readings.

## Components Used

- **Moisture Sensor**: Detects soil moisture levels.
- **Arduino Board**: Receives data from the moisture sensor and controls LEDs.
- **1Sheeld Module**: Communicates sensed data to a mobile app.
- **Bluetooth Module**: Establishes communication between 1Sheeld and the mobile app.
- **LEDs**: Red and green LEDs indicate dry and moist soil conditions respectively.

## Project Flow

1. **Moisture Sensing**: The moisture sensor periodically measures soil moisture content.
2. **Arduino Control**: Based on sensor readings:
   - Turns on the red LED for dry soil.
   - Turns on the green LED for moist soil.
3. **1Sheeld Communication**: Sends soil moisture data from Arduino to the 1Sheeld module.
4. **Mobile App Integration**: The 1Sheeld module connects to a mobile app via Bluetooth.
5. **Notification System**: The mobile app notifies the gardener through:
   - Push notifications.
   - Email alerts.
   - Voice messages.

## Usage

Ensure the following steps for setup and usage:

1. **Hardware Setup**:
   - Connect the moisture sensor and LEDs to the Arduino board.
   - Attach the 1Sheeld module and Bluetooth module as per the project schematic.

2. **Software Setup**:
   - Install the necessary libraries and dependencies on the Arduino IDE.
   - Configure the Bluetooth connection between 1Sheeld and the mobile app.

3. **Operation**:
   - Power on the system and monitor soil moisture readings through the mobile app.
   - Respond to notifications to water plants as per soil moisture conditions indicated by LEDs.

## Benefits

- **Real-time Monitoring**: Provides instant updates on soil moisture levels.
- **Automation**: Reduces manual monitoring effort with automated notifications.
- **Efficiency**: Ensures optimal watering conditions for plants, enhancing plant health and growth.

## Contributing

Contributions to enhance functionality, usability, or efficiency of the system are welcome. Please fork the repository, make your changes, and submit a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](./LICENSE) file for more details.

## Contact

For questions or inquiries, please contact [vsroshan2002@gmail.com](mailto:vsroshan2002@gmail.com).

---

