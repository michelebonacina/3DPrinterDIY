# 3D Printer DIY
Self made 3D Printer Project


## Firmware
### MarlinKimbraR2
This is the original firmware version, used without the hot bed.

Trying to activate hot bed causes prolems: port 8 remains always down. Till now no solution.

### MK4duo 4.4.0
This new version add more feature and resolve the hot bed problem of the MarlinKimbraR2 firmware.

## Versions
### v 0.0.0
Firmware initial version

Based on MarlinKimbraEvo made by Nicola P.

No changes other than author

### v 1.0.0
Changed BOARD_RAMPS_13_EFB for managing Extruder - Fan - Bed

Exchanged Y and Z axes in order to use the double connector provided for the Z with the two Y motors

Right Y motor reversed by swapping black / green wires

Configured X and Y axis motor steps:
. motor step angle = 1.8 °
. microstepping driver = 1/16
. belt pitch = GT2 Belt (2mm)
. num. teeth = 20
  . step value for mm = 80

Z-axis motor steps configured:
. motor step angle = 1.8 °
. microstepping driver = 1/16
. thread pitch = M12 (1.75mm per revolution)
. transmission ratio = 1: 1
  . step value for mm = 1828.5714 ---> NOT CORRECT
  . by attempts -> step value for mm = 1065

Extruder motor steps E0 configured:
. number of steps originally set = 1240
. extrusion length required = 50mm
. extruded wire length = 651mm
  . step to be set = 95.238

Transfer rate set at 112500 baud for communication with Repetier-Host

Axis direction configured to set the Cartesian 0 in the lower left if viewed from above
It must be X inverted - Y not inverted - Z not inverted - E0 not inverted

Added configuration parameters of the speed and acceleration coefficient

Execute PID Autotune: Kp = 18.99 - Ki = 1.48 - Kd = 60.99

Calibrated home point

### v 1.1.0
Inverted X axis motor for new support installation with belt tensioner

New offset set for hotend in Home position

Set the speed and acceleration coefficient to 1

The wire end sensor has been disabled to allow SD card operation

### v 1.2.0
Renamed firmware to MarlinKimbraR2

### v 2.0.0
Added new version based on MK4duo 4.4.0 using the Prusa I3 R2 with A4988 (by NicolaP)

Changed serial connection configuration

Mapped Y axis stepper driver and Y min endstop pin to Z driver. Y axis have 2 motor and on the board there're 2 parallel driver for Z axis

Mapped Z axis stepper driver and Z min endstop pin to Y driver. Y axis have 2 motor and on the board there're 2 parallel driver for Z axis.

Calibrated max and min x, y, z axis limits

Changed home axis order, y before x

Configured LCD panel

Enabled hot bed

Calibrated estruder stepper

Calibrated z stepper

Enabled SD support

