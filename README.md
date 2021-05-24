# Soul-Machine-2.0
Description - Global crisis caused by COVID pandemic,  hospitals are reporting shortage of beds & vital equipments. At worse conditions it's possible that there will be an extreme shortage of ventilator beds it's our responsibility to provide aid in such situation. Our design focuses on todays need  for saving lives in this pandemic by providing portable ventilators along with oxygen concentrator with a alert signal along with health monitoring system.
Our proposed design operates on the principle of constantly monitoring the health of the patient and updating it to open source platform so that doctors and keep monitoring the patients health.The development of this project is to enhance and upgrade the operation of Ventilators and other parameters including pulse rate, temperature, breathing rates and its medication at soonest.Intelligent control using Arduino and managing parameters of ventilators into account eg. BPM, Flow rate we can can solve various breathing related problems at initial stages. A oxygen concentrator is also used for enhancing the project and providing help to the needy who doesn't get oxygen tanks and lose their lives.

The circuit diagram shown is simulated using TinkerCad. It is basically our health monitoring system. When we start the simulation we can see that the temperature and BPM are calculated and the data is fetched through the ESP8266 to Thingspeak . Further we have our simple operation for our BVM using servo motor . It rotates at 90 degree to provide the constant flow of air. Next we have our oxygen concentrator , here we have developed a DIY oxygen concentrator to generate oxygen from atmospheric air using pneumatic supply. Our machine makes use of pneumatic pressure along with zeolite vessels a separate pressure vessel along with pressure sensors, oxygen sensors and leakage sensors to develop this system. We first use atmospheric air through an external compressor to drive air through our system by valves. The valves drive air through zeolite vessels. We here hold the compressed air through the zeolite vessels so the atmospheric N2 goes through a quadruple moment and the oxygen and other gases are lest free to move. Then release the outlet valves of the vessel to drive the oxygen rich air to the second pressure vessel. The separated N2 is then flushed out through other valve. The oxygen rich air in second pressure vessel is then pushed through to patient on a regulated basis or supplied to the ventilator as required. The pressure sensors and valves work in coordination to achieve the desired output.The entire system is run by a microcontroller to ensure smooth operation. These are the list of components used for our project. Here we have a rough 3D model of our project which depicts how the flaps will move for the BVM and displaying data on the LCD. 
Hardware - Software requirments --- 
Hardware - Arduino UNO, pulse-oximeter sensor, temperature sensor, pressure sensors, connecting wires, mechanical fram to set, LCD, Servo motors, resistors, oxgen tanks of small size, Zeolite vessel, pneumatic pipes, pressure vessels, transformer
Software - TinkerCad, Animaker, Canva, Proteus, Solidworks,etc
Process Flow - The output of the senosrs is given to the arduino to be displayed on the screen and BVM is used as a ventilator which is compressed by using servo motors . An oxygen concentartor is also used to help in an emergency situation.
