# 3D Printer DIY
Self made 3D Printer Project.

First firmware version (MarlinKimbraR2) does not activate hot bed. This is the main reason for changing it with the MK4duo version.

Now the firmware is not fully optimized, but the actual result is pretty good.

Take a look to _Issues_ for problems and future improvements.

## Firmware

### MarlinKimbraR2 - version 1.x.y
This is the original firmware version, used without the hot bed.

Trying to activate hot bed causes prolems: port 8 remains always down. Till now no solution.

### MK4duo 4.4.0 - version 2.x.y
This new version add more feature and resolve the hot bed problem of the MarlinKimbraR2 firmware.

Fully configured using [official online configurator](https://marlinkimbra.it/configurator/v4_4_0/firmware_configurator.php)

*ATTENTION* Download SdFat library by Bill Greiman 1.1.1 or higher

##[Versions](./details.md/versions.md)