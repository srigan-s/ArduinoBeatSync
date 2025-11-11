🎵 Arduino BeatSync

Arduino BeatSync is a music visualization project that plays a song while synchronizing LED light patterns to its beat. Using audio splicing software, I analyzed and isolated key beat points from a track, then programmed the Arduino to flash LEDs in sync with the music. The result is a simple yet captivating fusion of sound and light.

🔧 Features

Plays a custom melody or spliced song via a piezo buzzer

LEDs flash and pulse in sync with the beat

Adjustable timing for perfect rhythm alignment

Easy to modify for different songs or lighting setups

🧠 How It Works

Audio Splicing:
The song was processed using audio splicing software to identify the beats and note durations. These were converted into millisecond intervals for Arduino timing.

Arduino Control:
The Arduino plays tones through a piezo buzzer using the tone() function while controlling LEDs to match the rhythm.

Beat Synchronization:
Each beat triggers a light flash on the LED, creating a real-time visual representation of the music.

💻 Technologies

Arduino Uno

C++ (Arduino IDE)

Audio Splicing Software (e.g., Audacity)

LEDs & Piezo Buzzer

PWM Timing

🧩 Circuit Setup
Component	Arduino Pin	Description
Piezo Buzzer	8	Plays musical notes
LED	13	Flashes to beat
Ground	GND	Common ground connection
🕹️ How to Run

Connect your circuit as shown above.

Open the code in the Arduino IDE.

Upload it to your Arduino board.

Watch as the LED lights sync to the melody!

🚀 Future Improvements

Integrate a microphone input for real-time beat detection

Use multiple LEDs or RGB strips for richer visuals

Sync LED brightness dynamically with song volume
