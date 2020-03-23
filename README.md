# 3D Printer DIY
Self made 3D Printer Project

## Firmware
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