/**
 * MK4duo Firmware for 3D Printer, Laser and CNC
 *
 * Based on Marlin, Sprinter and grbl
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 * Copyright (c) 2020 Alberto Cotronei @MagoKimbra
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * Configuration_Overall.h
 * Here you can define all your custom settings and they will overwrite configurations in the main configuration files.
 */

/*******************************
 *   Firmware Version V4.4.0   *
 *******************************/

#define CONFIGURATION_OVERALL


/***********************
 * Configuration_Basic *
 ***********************/
#define SERIAL_PORT_1 0
#define BAUDRATE_1 115200
#define SERIAL_PORT_2 -2
#define BAUDRATE_2 115200
#define BLOCK_BUFFER_SIZE 16
#define MAX_CMD_SIZE 96
#define BUFSIZE 4
#define TX_BUFFER_SIZE 0
#define RX_BUFFER_SIZE 128
//#define SERIAL_XON_XOFF
//#define SERIAL_STATS_MAX_RX_QUEUED
//#define SERIAL_STATS_DROPPED_RX
#define STRING_CONFIG_AUTHOR "(cinna, 3Dw 2.2.0)"
#define MACHINE_UUID "00000000-0000-0000-0000-000000000000"
#define KILL_METHOD 0
#define NO_TIMEOUTS 1000
//#define ADVANCED_OK
//#define EMERGENCY_PARSER
//#define FASTER_GCODE_PARSER
//#define FASTER_GCODE_EXECUTE
#define HOST_KEEPALIVE_FEATURE
#define DEFAULT_KEEPALIVE_INTERVAL 2
#define MOTHERBOARD BOARD_RAMPS_13_HFB
#define MECHANISM MECH_CARTESIAN
#define POWER_SUPPLY 0
//#define POWER_NAME "Generic"
#define PS_DEFAULT_OFF false
#define DELAY_AFTER_POWER_ON 5
#define POWER_TIMEOUT 30
#define EXTRUDERS 1
#define DRIVER_EXTRUDERS 1

/*****************************
 * Configuration_Temperature *
 *****************************/
//#define TEMPERATURE_UNITS_SUPPORT
#define TEMP_SENSOR_HE0 1
#define TEMP_SENSOR_HE1 0
#define TEMP_SENSOR_HE2 0
#define TEMP_SENSOR_HE3 0
#define TEMP_SENSOR_HE4 0
#define TEMP_SENSOR_HE5 0
#define TEMP_SENSOR_BED0 1
#define TEMP_SENSOR_BED1 0
#define TEMP_SENSOR_BED2 0
#define TEMP_SENSOR_BED3 0
#define TEMP_SENSOR_CHAMBER0 0
#define TEMP_SENSOR_CHAMBER1 0
#define TEMP_SENSOR_CHAMBER2 0
#define TEMP_SENSOR_CHAMBER3 0
#define TEMP_SENSOR_COOLER 0
#define THERMISTOR_SERIES_RS 4700
#define T9_NAME "User sensor"
#define T9_R25 100000
#define T9_BETA 4036
//#define DHT_SENSOR
#define DHT_TYPE 11
#define TEMP_SENSOR_AD595_OFFSET 0
#define TEMP_SENSOR_AD595_GAIN 1
#define DUMMY_THERMISTOR_998_VALUE 25
#define DUMMY_THERMISTOR_999_VALUE 25
#define TEMP_RESIDENCY_TIME 10  // (seconds)
#define TEMP_WINDOW     1       // (degC) Window around target to start the residency timer x degC early.
#define HOTEND_0_MAXTEMP 275
#define HOTEND_1_MAXTEMP 275
#define HOTEND_2_MAXTEMP 275
#define HOTEND_3_MAXTEMP 275
#define HOTEND_4_MAXTEMP 275
#define HOTEND_5_MAXTEMP 275
#define BED_MAXTEMP 150
#define CHAMBER_MAXTEMP 150
#define COOLER_MAXTEMP 150
#define HOTEND_0_MINTEMP 5
#define HOTEND_1_MINTEMP 5
#define HOTEND_2_MINTEMP 5
#define HOTEND_3_MINTEMP 5
#define HOTEND_4_MINTEMP 5
#define HOTEND_5_MINTEMP 5
#define BED_MINTEMP 5
#define CHAMBER_MINTEMP 5
#define COOLER_MINTEMP 5
#define MAX_CONSECUTIVE_LOW_TEMP 2
#define PREHEAT_1_LABEL "PLA"
#define PREHEAT_1_TEMP_HOTEND 190
#define PREHEAT_1_TEMP_BED 60
#define PREHEAT_1_TEMP_CHAMBER  0
#define PREHEAT_1_FAN_SPEED 255
#define PREHEAT_2_LABEL "ABS"
#define PREHEAT_2_TEMP_HOTEND 240
#define PREHEAT_2_TEMP_BED 100
#define PREHEAT_2_TEMP_CHAMBER 50
#define PREHEAT_2_FAN_SPEED 255
#define PREHEAT_3_LABEL "GUM"
#define PREHEAT_3_TEMP_HOTEND 230
#define PREHEAT_3_TEMP_BED 60
#define PREHEAT_3_TEMP_CHAMBER 50
#define PREHEAT_3_FAN_SPEED 255
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT 0.98
//#define TEMP_STAT_LEDS
#define HOTEND_PWM_FREQUENCY  250
#define BED_PWM_FREQUENCY     100
#define CHAMBER_PWM_FREQUENCY 100
#define COOLER_PWM_FREQUENCY  100
#define PIDTEMP true
#define POWER_MAX 255
#define POWER_DRIVE_MIN 40
#define POWER_DRIVE_MAX 230
#define HOTEND_HYSTERESIS 2
#define HOTEND_CHECK_INTERVAL 100
#define PID_AUTOTUNE_MENU // Add PID Autotune to the LCD "Temperature" menu to run M303 and apply the result.
//#define PID_ADD_EXTRUSION_RATE
#define LPQ_MAX_LEN 50
#define HOTEND_Kp {26.32,40,40,40,40,40}
#define HOTEND_Ki {2.18,7,7,7,7,7}
#define HOTEND_Kd {79.46,60,60,60,60,60}
#define HOTEND_Kc {100,100,100,100,100,100}
#define PIDTEMPBED false
#define BED_POWER_MAX 255
#define BED_POWER_DRIVE_MIN 40
#define BED_POWER_DRIVE_MAX 230
#define BED_HYSTERESIS 2
#define BED_CHECK_INTERVAL 500
#define BED_Kp {10,10,10,10}
#define BED_Ki {1,1,1,1}
#define BED_Kd {305,300,300,300}
#define PIDTEMPCHAMBER false
#define CHAMBER_POWER_MAX 255
#define CHAMBER_POWER_DRIVE_MIN 80
#define CHAMBER_POWER_DRIVE_MAX 255
#define CHAMBER_HYSTERESIS 2
#define CHAMBER_CHECK_INTERVAL 500
#define CHAMBER_Kp {10,10,10,10}
#define CHAMBER_Ki {1,1,1,1}
#define CHAMBER_Kd {305,300,300,300}
#define PIDTEMPCOOLER false
#define COOLER_POWER_MAX 255
#define COOLER_POWER_DRIVE_MIN 80
#define COOLER_POWER_DRIVE_MAX 255
#define COOLER_HYSTERESIS 2
#define COOLER_CHECK_INTERVAL 500
#define COOLER_Kp 10
#define COOLER_Ki 1
#define COOLER_Kd 305
#define INVERTED_HEATER_PINS false
#define INVERTED_BED_PIN false
#define INVERTED_CHAMBER_PIN false
#define INVERTED_COOLER_PIN false
#define THERMAL_PROTECTION_HOTENDS false
#define THERMAL_PROTECTION_BED false
#define THERMAL_PROTECTION_CHAMBER false
#define THERMAL_PROTECTION_COOLER false
#define THERMAL_PROTECTION_PERIOD 40
#define THERMAL_PROTECTION_HYSTERESIS 4
//#define ADAPTIVE_FAN_SPEED
#define WATCH_HOTEND_PERIOD 20
#define WATCH_HOTEND_INCREASE 2
#define WATCH_BED_PERIOD 60
#define WATCH_BED_INCREASE 2
#define WATCH_CHAMBER_PERIOD 60
#define WATCH_CHAMBER_INCREASE 2
#define WATCH_COOLER_PERIOD 60
#define WATCH_COOLER_INCREASE 2
#define PREVENT_COLD_EXTRUSION
#define EXTRUDE_MINTEMP 170
//#define PREVENT_LENGTHY_EXTRUDE
#define EXTRUDE_MAXLENGTH 400
#define SAFETYTIMER_TIME_MINS 30

/***************************
 * Configuration_Cartesian *
 ***************************/
#define KNOWN_MECH
#define CUSTOM_MACHINE_NAME "3Dw 2.2.0"
#define ENDSTOPPULLUP_XMIN true
#define ENDSTOPPULLUP_YMIN true
#define ENDSTOPPULLUP_ZMIN true
#define ENDSTOPPULLUP_XMAX true
#define ENDSTOPPULLUP_YMAX true
#define ENDSTOPPULLUP_ZMAX true
#define ENDSTOPPULLUP_X2MIN true
#define ENDSTOPPULLUP_Y2MIN true
#define ENDSTOPPULLUP_Z2MIN true
#define ENDSTOPPULLUP_Z3MIN true
#define ENDSTOPPULLUP_X2MAX true
#define ENDSTOPPULLUP_Y2MAX true
#define ENDSTOPPULLUP_Z2MAX true
#define ENDSTOPPULLUP_Z3MAX true
#define ENDSTOPPULLUP_ZPROBE true
#define X_MIN_ENDSTOP_LOGIC false
#define Y_MIN_ENDSTOP_LOGIC false
#define Z_MIN_ENDSTOP_LOGIC false
#define X_MAX_ENDSTOP_LOGIC false
#define Y_MAX_ENDSTOP_LOGIC false
#define Z_MAX_ENDSTOP_LOGIC false
#define X2_MIN_ENDSTOP_LOGIC false
#define Y2_MIN_ENDSTOP_LOGIC false
#define Z2_MIN_ENDSTOP_LOGIC false
#define Z3_MIN_ENDSTOP_LOGIC false
#define X2_MAX_ENDSTOP_LOGIC false
#define Y2_MAX_ENDSTOP_LOGIC false
#define Z2_MAX_ENDSTOP_LOGIC false
#define Z3_MAX_ENDSTOP_LOGIC false
#define Z_PROBE_ENDSTOP_LOGIC false
//#define ENDSTOP_INTERRUPTS_FEATURE
#define PROBE_SERVO_NR -1
#define PROBE_SERVO_ANGLES {90,0} // Probe Servo Deploy and Stow angles
//#define PROBE_MANUALLY
//#define PROBE_FIX_MOUNTED
//#define BLTOUCH
//#define PROBE_SENSORLESS
//#define PROBE_SLED
#define SLED_DOCKING_OFFSET 5
#define X_PROBE_OFFSET_FROM_NOZZLE 0
#define Y_PROBE_OFFSET_FROM_NOZZLE 0
#define Z_PROBE_OFFSET_FROM_NOZZLE -1
#define XY_PROBE_SPEED 8000
#define Z_PROBE_SPEED_FAST 200
#define Z_PROBE_SPEED_SLOW 100
#define Z_PROBE_REPETITIONS 1
//#define PROBE_REPEATABILITY_TEST
//#define PAUSE_BEFORE_DEPLOY_STOW
#define Z_PROBE_DEPLOY_HEIGHT 15
#define Z_PROBE_BETWEEN_HEIGHT 10
#define Z_PROBE_AFTER_PROBING 0
#define Z_PROBE_LOW_POINT -5
#define Z_PROBE_OFFSET_RANGE_MIN -50
#define Z_PROBE_OFFSET_RANGE_MAX  50
//#define PROBING_HEATERS_OFF       // Turn heaters off when probing
//#define PROBING_FANS_OFF          // Turn fans off when probing
//#define LCD_BED_LEVELING
#define LCD_Z_STEP 0.025
#define LCD_PROBE_Z_RANGE 4   // (mm) Z Range centered on Z MIN POS for LCD Z adjustment
//#define MESH_EDIT_MENU      // Add a menu to edit mesh points
//#define LEVEL_BED_CORNERS
#define LEVEL_CORNERS_INSET_LFRB { 30, 30, 30, 30 } // (mm) Left, Front, Right, Back insets
#define LEVEL_CORNERS_Z_HOP   4.0 // (mm) Move nozzle up before moving between corners
#define LEVEL_CORNERS_HEIGHT  0.0 // (mm) Z height of nozzle at leveling points
//#define LEVEL_CENTER_TOO        // Move to the center after the last corner
#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR -1
#define MIN_Z_HEIGHT_FOR_HOMING 0
#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define E_ENABLE_ON 0
#define INVERT_X_STEP_PIN false
#define INVERT_Y_STEP_PIN false
#define INVERT_Z_STEP_PIN false
#define INVERT_E_STEP_PIN false
#define INVERT_X_DIR false
#define INVERT_Y_DIR false
#define INVERT_Z_DIR false
#define INVERT_E0_DIR false
#define INVERT_E1_DIR false
#define INVERT_E2_DIR false
#define INVERT_E3_DIR false
#define INVERT_E4_DIR false
#define INVERT_E5_DIR false
#define DISABLE_X false
#define DISABLE_Y false
#define DISABLE_Z false
#define DISABLE_E false
//#define DISABLE_INACTIVE_EXTRUDER
#define X_MAX_POS 190
#define X_MIN_POS -20
#define Y_MAX_POS 170
#define Y_MIN_POS 0
#define Z_MAX_POS 260
#define Z_MIN_POS -0.8
#define E_MIN_POS 0
#define AXIS_RELATIVE_MODES {false, false, false, false}
//#define Z_SAFE_HOMING
#define Z_SAFE_HOMING_X_POINT 100
#define Z_SAFE_HOMING_Y_POINT 100
//#define MESH_BED_LEVELING
//#define AUTO_BED_LEVELING_UBL
//#define AUTO_BED_LEVELING_LINEAR
//#define AUTO_BED_LEVELING_BILINEAR
//#define AUTO_BED_LEVELING_3POINT
//#define MESH_EDIT_GFX_OVERLAY
#define MIN_PROBE_EDGE 10
//#define G26_MESH_VALIDATION
#define MESH_TEST_NOZZLE_SIZE    0.4  // (mm) Diameter of primary nozzle.
#define MESH_TEST_LAYER_HEIGHT   0.2  // (mm) Default layer height for the G26 Mesh Validation Tool.
#define MESH_TEST_HOTEND_TEMP  200    // (c)  Default nozzle temperature for the G26 Mesh Validation Tool.
#define MESH_TEST_BED_TEMP      60    // (c)  Default bed temperature for the G26 Mesh Validation Tool.
#define G26_XY_FEEDRATE         20    // (mm/s) Feedrate for XY Moves for the G26 Mesh Validation Tool.
//#define MESH_G28_REST_ORIGIN
#define UBL_MESH_EDIT_MOVES_Z
//#define UBL_Z_RAISE_WHEN_OFF_MESH 2.5
#define GRID_MAX_POINTS_X 3
#define GRID_MAX_POINTS_Y 3
//#define PROBE_Y_FIRST
//#define ABL_BILINEAR_SUBDIVISION
#define BILINEAR_SUBDIVISIONS 3
//#define Z_PROBE_END_SCRIPT "G1 Z10 F8000\nG1 X10 Y10\nG1 Z0.5"
//#define ENABLE_LEVELING_FADE_HEIGHT
//#define BED_CENTER_AT_0_0
//#define MANUAL_X_HOME_POS 0
//#define MANUAL_Y_HOME_POS 0
//#define MANUAL_Z_HOME_POS 0
#define DEFAULT_AXIS_STEPS_PER_UNIT {80,80,1065}
#define DEFAULT_AXIS_STEPS_PER_UNIT_E {95,625,625,625,625,625,625,625,625,625,625,625}
#define DEFAULT_MAX_FEEDRATE {150,150,4}
#define DEFAULT_MAX_FEEDRATE_E {50,100,100,100,100,100,50,50,50,50,50,50}
#define MANUAL_FEEDRATE {100,100,2,10}
#define SHORT_MANUAL_Z_MOVE           0.025
#define DEFAULT_MIN_FEEDRATE          0.0
#define DEFAULT_MIN_TRAVEL_FEEDRATE   0.0
#define MINIMUM_PLANNER_SPEED         0.05                      // (mm/sec)
#define DEFAULT_MAX_ACCELERATION {1000,1000,20}
#define DEFAULT_MAX_ACCELERATION_E {3000,3000,3000,3000,3000,3000,1000,1000,1000,1000,1000,1000}
#define DEFAULT_RETRACT_ACCELERATION {4000,10000,10000,10000,10000,10000,5000,5000,5000,5000,5000,5000}
#define DEFAULT_ACCELERATION 1000
#define DEFAULT_TRAVEL_ACCELERATION 1000
#define DEFAULT_XJERK 5
#define DEFAULT_YJERK 5
#define DEFAULT_ZJERK 0.4
#define DEFAULT_EJERK {5,5,5,5,5,5,5,5,5,5,5,5}
#define HOMING_FEEDRATE_X (100*60)
#define HOMING_FEEDRATE_Y (100*60)
#define HOMING_FEEDRATE_Z (2*60)
//#define SLOW_HOMING
#define X_HOME_BUMP_MM 5
#define Y_HOME_BUMP_MM 5
#define Z_HOME_BUMP_MM 2
#define HOMING_BUMP_DIVISOR {5,5,2}
#define HOTEND_OFFSET_X {0,0,0,0}
#define HOTEND_OFFSET_Y {0,0,0,0}
#define HOTEND_OFFSET_Z {0,0,0,0}
//#define HYSTERESIS_FEATURE
#define HYSTERESIS_AXIS_MM {0,0,0}
#define HYSTERESIS_CORRECTION 1

/*************************
 *   Configuration_LCD   *
 *************************/
#define LCD_LANGUAGE it
#define LCD_LANGUAGE_1 NO_LANGUAGE
#define LCD_LANGUAGE_2 NO_LANGUAGE
#define LCD_LANGUAGE_3 NO_LANGUAGE
#define LCD_LANGUAGE_4 NO_LANGUAGE
#define LCD_CHARSET_HD44780 JAPANESE
#define LCD_INFO_SCREEN_STYLE 0
//#define REPRAP_DISCOUNT_SMART_CONTROLLER
//#define ULTIMAKERCONTROLLER
//#define ULTIPANEL
//#define PANEL_ONE
//#define G3D_PANEL
//#define RIGIDBOT_PANEL
//#define MAKEBOARD_MINI_2_LINE_DISPLAY_1602
//#define ZONESTAR_LCD            // Requires ADC_KEYPAD_PIN to be assigned to an analog pin.
//#define ULTRA_LCD
//#define RA_CONTROL_PANEL
//#define LCD_SAINSMART_I2C_1602
//#define LCD_SAINSMART_I2C_2004
//#define LCM1602
//#define LCD_I2C_PANELOLU2
//#define LCD_I2C_VIKI
//#define RADDS_DISPLAY
//#define SAV_3DLCD
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
//#define REPRAPWORLD_GRAPHICAL_LCD
//#define VIKI2
//#define miniVIKI
//#define MINIPANEL
//#define MAKRPANEL
//#define ELB_FULL_GRAPHIC_CONTROLLER
//#define BQ_LCD_SMART_CONTROLLER
//#define WANHAO_D6_OLED
//#define CARTESIO_UI
//#define LCD_FOR_MELZI
//#define U8GLIB_SSD1306
//#define SAV_3DGLCD
//#define U8GLIB_SSD1306
//#define U8GLIB_SH1106
//#define ULTI_CONTROLLER
//#define OLED_PANEL_TINYBOY2
//#define MKS_MINI_12864
//#define FYSETC_MINI_12864
//#define CR10_STOCKDISPLAY
//#define ANET_FULL_GRAPHICS_LCD  // Anet 128x64 full graphics lcd with rotary encoder as used on Anet A6
//#define MKS_12864OLED          // Uses the SH1106 controller (default)
//#define MKS_12864OLED_SSD1306  // Uses the SSD1306 controller
//#define AZSMZ_12864
//#define SILVER_GATE_GLCD_CONTROLLER
//#define NEXTION
#define NEXTION_SERIAL 1
#define NEXTION_BAUDRATE 57600
#define NEXTION_MAX_MESSAGE_LENGTH 30
//#define NEXTION_GFX
#define NEXTION_FIRMWARE_FILE "mk4duo.tft"
#define SHOW_BOOTSCREEN
#define BOOTSCREEN_TIMEOUT  2500
#define BOOTSCREEN_MKLOGO_HIGH                    // Show a hight MK4duo logo on the Boot Screen (disable it saving 399 bytes of flash)
//#define BOOTSCREEN_MKLOGO_ANIMATED              // Animated MK4duo logo. Costs ~‭3260 (or ~940) bytes of PROGMEM.
//#define SHOW_CUSTOM_BOOTSCREEN
//#define CUSTOM_STATUS_SCREEN_IMAGE
#define XYZ_HOLLOW_FRAME
#define MENU_HOLLOW_FRAME
//#define USE_BIG_EDIT_FONT
//#define USE_SMALL_INFOFONT
//#define DOGM_SPI_DELAY_US 5
//#define OVERLAY_GFX_REVERSE
//#define STATUS_HOTEND_NUMBERLESS  // Use plain hotend icons instead of numbered ones (with 2+ hotends)
#define STATUS_HOTEND_INVERTED      // Show solid nozzle bitmaps when heating (Requires STATUS_HOTEND_ANIM)
#define STATUS_HOTEND_ANIM          // Use a second bitmap to indicate hotend heating
#define STATUS_BED_ANIM             // Use a second bitmap to indicate bed heating
#define STATUS_CHAMBER_ANIM         // Use a second bitmap to indicate chamber heating
//#define STATUS_ALT_BED_BITMAP     // Use the alternative bed bitmap
//#define STATUS_ALT_FAN_BITMAP     // Use the alternative fan bitmap
//#define STATUS_FAN_FRAMES 3       // :[0,1,2,3,4] Number of fan animation frames
//#define STATUS_HEAT_PERCENT       // Show heating in a progress bar
//#define GAME_BRICKOUT
//#define GAME_INVADERS
//#define GAME_SNAKE
//#define NO_LCD_MENUS
//#define SLIM_LCD_MENUS
//#define ST7920_DELAY_1  DELAY_NS(0)
//#define ST7920_DELAY_2  DELAY_NS(0)
//#define ST7920_DELAY_3  DELAY_NS(64)
#define ENCODER_PULSES_PER_STEP 3
#define ENCODER_STEPS_PER_MENU_ITEM 1
//#define LCD_SCREEN_ROT_90    // Rotate screen orientation for graphics display by 90 degree clockwise
//#define LCD_SCREEN_ROT_180   // Rotate screen orientation for graphics display by 180 degree clockwise
//#define LCD_SCREEN_ROT_270   // Rotate screen orientation for graphics display by 270 degree clockwise
//#define INVERT_CLICK_BUTTON           // Option for invert encoder button logic
//#define INVERT_BACK_BUTTON            // Option for invert back button logic if avaible
#define REVERSE_ENCODER_DIRECTION
//#define REVERSE_MENU_DIRECTION
//#define REVERSE_SELECT_DIRECTION
#define ENCODER_RATE_MULTIPLIER         // If defined, certain menu edit operations automatically multiply the steps when the encoder is moved quickly
#define ENCODER_10X_STEPS_PER_SEC 75    // If the encoder steps per sec exceeds this value, multiply steps moved x10 to quickly advance the value
#define ENCODER_100X_STEPS_PER_SEC 160  // If the encoder steps per sec exceeds this value, multiply steps moved x100 to really quickly advance the value
#define ULTIPANEL_FEEDMULTIPLY
//#define SPEAKER
//#define LCD_FEEDBACK_FREQUENCY_DURATION_MS 2
//#define LCD_FEEDBACK_FREQUENCY_HZ 5000
#define LCD_ALLIGATOR_VOLTAGE_LEVEL 1
#define LCD_INFO_MENU
//#define STATUS_MESSAGE_SCROLLING
//#define LCD_DECIMAL_SMALL_XY
//#define LCD_TIMEOUT_TO_STATUS 15000
//#define LED_CONTROL_MENU
//#define LED_COLOR_PRESETS             // Enable the Preset Color menu option
//#define LED_USER_PRESET_STARTUP       // Have the printer display the user preset color on startup
#define LED_USER_PRESET_RED        255  // User defined RED value
#define LED_USER_PRESET_GREEN      255  // User defined GREEN value
#define LED_USER_PRESET_BLUE       255  // User defined BLUE value
#define LED_USER_PRESET_WHITE      255  // User defined WHITE value
#define LED_USER_PRESET_BRIGHTNESS 255  // User defined intensity
//#define LCD_PROGRESS_BAR
#define PROGRESS_BAR_BAR_TIME 5000U
#define PROGRESS_BAR_MSG_TIME 1500U
#define PROGRESS_MSG_EXPIRE 0
//#define PROGRESS_MSG_ONCE
//#define LCD_PROGRESS_BAR_TEST
//#define CUSTOM_USER_MENUS
#define USER_SCRIPT_DONE "M117 User Script Done"
#define USER_DESC_1 "Home & ABL"
#define USER_GCODE_1 "G28\nG29"
//#define USER_DESC_2 "Preheat for " PREHEAT_1_LABEL
//#define USER_GCODE_2 "M140 S" STRINGIFY(PREHEAT_1_TEMP_BED) "\nM104 S" STRINGIFY(PREHEAT_1_TEMP_HOTEND)
//#define USER_DESC_3 "Preheat for " PREHEAT_2_LABEL
//#define USER_GCODE_3 "M140 S" STRINGIFY(PREHEAT_2_TEMP_BED) "\nM104 S" STRINGIFY(PREHEAT_2_TEMP_HOTEND)
//#define USER_DESC_4 "Preheat for " PREHEAT_3_LABEL
//#define USER_GCODE_4 "M140 S" STRINGIFY(PREHEAT_3_TEMP_BED) "\nM104 S" STRINGIFY(PREHEAT_3_TEMP_HOTEND)
//#define USER_DESC_5 "Heat Bed/Home/Level"
//#define USER_GCODE_5 "M140 S" STRINGIFY(PREHEAT_2_TEMP_BED) "\nG28\nG29"
//#define USER_DESC_6 "Home & Info"
//#define USER_GCODE_6 "G28\nM503"

/*************************
 * Configuration_Feature *
 *************************/
#define X_DRIVER_TYPE A4988
#define Y_DRIVER_TYPE A4988
#define Z_DRIVER_TYPE A4988
#define X2_DRIVER_TYPE A4988
#define Y2_DRIVER_TYPE A4988
#define Z2_DRIVER_TYPE A4988
#define Z3_DRIVER_TYPE A4988
#define E0_DRIVER_TYPE A4988
#define E1_DRIVER_TYPE A4988
#define E2_DRIVER_TYPE A4988
#define E3_DRIVER_TYPE A4988
#define E4_DRIVER_TYPE A4988
#define E5_DRIVER_TYPE A4988
#define SOFT_PWM_SPEED 0
#define FAN_MIN_PWM 0
#define FAN_MAX_PWM 255
//#define INVERTED_FAN_PINS
#define FAN_PWM_FREQUENCY 250
//#define FAN_KICKSTART_TIME 0
#define AUTO_FAN {0,-1,-1,-1,-1,-1}
#define HOTEND_AUTO_FAN_TEMPERATURE 50
#define HOTEND_AUTO_FAN_SPEED 255
#define HOTEND_AUTO_FAN_MIN_SPEED 0
#define CONTROLLERFAN_SECS 60
#define CONTROLLERFAN_SPEED 255
#define CONTROLLERFAN_MIN_SPEED 0
//#define TACHOMETRIC
#define TOOL_CHANGE_Z_RAISE 1
//#define TOOL_CHANGE_PARK
//#define TOOL_CHANGE_NO_RETURN
//#define TOOL_CHANGE_FIL_SWAP
#define TOOL_CHANGE_FIL_SWAP_LENGTH 20
#define TOOL_CHANGE_FIL_SWAP_PURGE 2
#define TOOL_CHANGE_FIL_SWAP_RETRACT_SPEED 3000
#define TOOL_CHANGE_FIL_SWAP_PRIME_SPEED 600
//#define VOLUMETRIC_EXTRUSION
#define VOLUMETRIC_DEFAULT_ON false
#define DEFAULT_NOMINAL_FILAMENT_DIA 1.75
//#define SINGLENOZZLE
//#define BARICUDA
//#define EXT_SOLENOID
//#define COLOR_MIXING_EXTRUDER
#define MIXING_STEPPERS 2
#define MIXING_VIRTUAL_TOOLS 16
//#define MKR4
//#define INVERTED_RELE_PINS
//#define MKR6
//#define INVERTED_RELE_PINS
//#define MKR12
//#define INVERTED_RELE_PINS
//#define MKSE6
#define MKSE6_SERVO_INDEX    0
#define MKSE6_SERVOPOS_E0  -60
#define MKSE6_SERVOPOS_E1  -30
#define MKSE6_SERVOPOS_E2    0
#define MKSE6_SERVOPOS_E3   30
#define MKSE6_SERVOPOS_E4   60
#define MKSE6_SERVOPOS_E5   90
#define MKSE6_SERVO_DELAY 1000
//#define PRUSA_MMU2
#define MMU2_SERIAL 1
//#define MMU2_MODE_12V
#define MMU2_FILAMENT_RUNOUT_SCRIPT "M600"
#define MMU2_FILAMENTCHANGE_EJECT_FEED 80.0
#define MMU2_LOAD_TO_NOZZLE_SEQUENCE  { 7.2, 562 }, { 14.4, 871 }, { 36.0, 1393 }, { 14.4, 871 }, { 50.0, 198 }
#define MMU2_RAMMING_SEQUENCE { 1.0, 1000 }, { 1.0, 1500 }, { 2.0, 2000 }, { 1.5, 3000 }, { 2.5, 4000 }, { -15.0, 5000 }, { -14.0, 1200 }, { -6.0, 600 }, { 10.0, 700 }, { -10.0, 400 }, { -50.0, 2000 }
//#define DONDOLO_SINGLE_MOTOR
//#define DONDOLO_DUAL_MOTOR
#define DONDOLO_SERVO_INDEX 0
#define DONDOLO_SERVOPOS_E0 120
#define DONDOLO_SERVOPOS_E1 10
#define DONDOLO_SERVO_DELAY 1000
//#define IDLE_OOZING_PREVENT
#define IDLE_OOZING_MINTEMP           190
#define IDLE_OOZING_FEEDRATE          50    //default feedrate for retracting (mm/s)
#define IDLE_OOZING_SECONDS           5
#define IDLE_OOZING_LENGTH            15    //default retract length (positive mm)
#define IDLE_OOZING_RECOVER_LENGTH    0     //default additional recover length (mm, added to retract length when recovering)
#define IDLE_OOZING_RECOVER_FEEDRATE  50    //default feedrate for recovering from retraction (mm/s)
//#define EXTRUDER_RUNOUT_PREVENT
#define EXTRUDER_RUNOUT_MINTEMP 190
#define EXTRUDER_RUNOUT_SECONDS  30
#define EXTRUDER_RUNOUT_SPEED  1500 // mm/m
#define EXTRUDER_RUNOUT_EXTRUDE   5 // mm
//#define LIN_ADVANCE
#define LIN_ADVANCE_K         0.22
#define LIN_ADVANCE_K_START   0
#define LIN_ADVANCE_K_FACTOR  0.02
//#define WORKSPACE_OFFSETS
#define DEFAULT_STEPPER_DEACTIVE_TIME 120
#define DISABLE_INACTIVE_X
#define DISABLE_INACTIVE_Y
#define DISABLE_INACTIVE_Z
#define DISABLE_INACTIVE_E
#define MIN_SOFTWARE_ENDSTOPS
#define MAX_SOFTWARE_ENDSTOPS
#define ENDSTOPS_ONLY_FOR_HOMING
//#define ENABLED_ALL_SIX_ENDSTOP
//#define SD_ABORT_ON_ENDSTOP_HIT
//#define G38_PROBE_TARGET
#define G38_MINIMUM_MOVE 0.0275
//#define ENABLE_SERVOS
#define NUM_SERVOS 0
//#define DEACTIVATE_SERVOS_AFTER_MOVE
#define SERVO_DEACTIVATION_DELAY 300
//#define Z_LATE_ENABLE
#define SLOWDOWN
//#define QUICK_HOME
#define HOME_Y_BEFORE_X
//#define FORCE_HOME_XY_BEFORE_Z
//#define BABYSTEPPING
//#define BABYSTEP_XY
#define BABYSTEP_INVERT_Z false
#define BABYSTEP_MULTIPLICATOR_Z  1
#define BABYSTEP_MULTIPLICATOR_XY 1
//#define BABYSTEP_DISPLAY_TOTAL
//#define BABYSTEP_ZPROBE_OFFSET
//#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define DOUBLECLICK_MAX_INTERVAL 1250U
//#define BABYSTEP_ZPROBE_GFX_OVERLAY
//#define BABYSTEP_ZPROBE_GFX_REVERSE
//#define FWRETRACT
#define MIN_AUTORETRACT               0.1 // When auto-retract is on, convert E moves of this length and over
#define MAX_AUTORETRACT              10.0 // Upper limit for auto-retract conversion
#define RETRACT_LENGTH                3   // Default retract length (positive mm)
#define RETRACT_LENGTH_SWAP          13   // Default swap retract length (positive mm), for extruder change
#define RETRACT_FEEDRATE             45   // Default feedrate for retracting (mm/s)
#define RETRACT_ZLIFT                 0   // Default retract Z-lift
#define RETRACT_RECOVER_LENGTH        0   // Default additional recover length (mm, added to retract length when recovering)
#define RETRACT_RECOVER_LENGTH_SWAP   0   // Default additional swap recover length (mm, added to retract length when recovering from extruder change)
#define RETRACT_RECOVER_FEEDRATE      8   // Default feedrate for recovering from retraction (mm/s)
#define RETRACT_RECOVER_FEEDRATE_SWAP 8   // Default feedrate for recovering from swap retraction (mm/s)
//#define DUAL_X_CARRIAGE
#define X1_MIN_POS X_MIN_POS    // set minimum to ensure first x-carriage doesn't hit the parked second X-carriage
#define X1_MAX_POS X_MAX_POS    // set maximum to ensure first x-carriage doesn't hit the parked second X-carriage
#define X2_MIN_POS 80           // set minimum to ensure second x-carriage doesn't hit the parked first X-carriage
#define X2_MAX_POS 353          // set maximum to the distance between toolheads when both heads are homed
#define X2_HOME_DIR 1           // the second X-carriage always homes to the maximum endstop position
#define X2_HOME_POS X2_MAX_POS  // default home position is the maximum carriage position
#define DEFAULT_DUAL_X_CARRIAGE_MODE DXC_FULL_CONTROL_MODE
#define DEFAULT_DUPLICATION_X_OFFSET 100
//#define X_TWO_STEPPER_DRIVERS
#define INVERT_X2_VS_X_DIR false
//#define X_TWO_ENDSTOPS
//#define Y_TWO_STEPPER_DRIVERS
#define INVERT_Y2_VS_Y_DIR false
//#define Y_TWO_ENDSTOPS
//#define Z_TWO_STEPPER_DRIVERS
#define INVERT_Z2_VS_Z_DIR false
//#define Z_TWO_ENDSTOPS
//#define Z_THREE_STEPPER_DRIVERS
#define INVERT_Z2_VS_Z_DIR false
#define INVERT_Z3_VS_Z_DIR false
//#define Z_THREE_ENDSTOPS
//#define Z_STEPPER_AUTO_ALIGN
#define Z_STEPPER_ALIGN_XY { {  10, 190 }, { 100,  10 }, { 190, 190 } }
//#define Z_STEPPER_ALIGN_KNOWN_STEPPER_POSITIONS
#define Z_STEPPER_ALIGN_STEPPER_XY { { 210.7, 102.5 }, { 152.6, 220.0 }, { 94.5, 102.5 } }
#define Z_STEPPER_ALIGN_AMP 1.0
#define Z_STEPPER_ALIGN_ITERATIONS 3
#define RESTORE_LEVELING_AFTER_G34
#define G34_MAX_GRADE  5
#define Z_STEPPER_ALIGN_ACC 0.02
//#define XY_FREQUENCY_LIMIT  15
//#define SF_ARC_FIX
//#define BLTOUCH_DELAY 500
//#define BLTOUCH_HIGH_SPEED_MODE
//#define BLTOUCH_FORCE_SW_MODE
#define BLTOUCH_MODE_5V false
//#define BLTOUCH_FORCE_MODE
//#define BLTOUCH_LCD_VOLTAGE_MENU
//#define FILAMENT_WIDTH_SENSOR
#define FILAMENT_SENSOR_EXTRUDER_NUM 0
#define MEASUREMENT_DELAY_CM         14   // (cm) The distance from the filament sensor to the melting chamber
#define FILWIDTH_ERROR_MARGIN        1.0  // (mm) If a measurement differs too much from nominal width ignore it
#define MAX_MEASUREMENT_DELAY        20   // (bytes) Buffer size for stored measurements (1 byte per cm). Must be larger than MEASUREMENT_DELAY_CM.
#define DEFAULT_MEASURED_FILAMENT_DIA  DEFAULT_NOMINAL_FILAMENT_DIA  //set measured to nominal initially
//#define FILAMENT_LCD_DISPLAY
//#define FILAMENT_RUNOUT_SENSOR
//#define FILAMENT_RUNOUT_DAV_SYSTEM
//#define EXTRUDER_ENCODER_CONTROL
#define FIL_RUNOUT_0_LOGIC false
#define FIL_RUNOUT_1_LOGIC false
#define FIL_RUNOUT_2_LOGIC false
#define FIL_RUNOUT_3_LOGIC false
#define FIL_RUNOUT_4_LOGIC false
#define FIL_RUNOUT_5_LOGIC false
#define FIL_RUNOUT_0_PULLUP true
#define FIL_RUNOUT_1_PULLUP true
#define FIL_RUNOUT_2_PULLUP true
#define FIL_RUNOUT_3_PULLUP true
#define FIL_RUNOUT_4_PULLUP true
#define FIL_RUNOUT_5_PULLUP true
#define FILAMENT_RUNOUT_DISTANCE_MM 0
#define FILAMENT_RUNOUT_THRESHOLD 5
#define FILAMENT_RUNOUT_SCRIPT "M600"
//#define POWER_CONSUMPTION
#define POWER_VOLTAGE      12.00    //(V) The power supply OUT voltage
#define POWER_SENSITIVITY   0.066   //(V/A) How much increase V for 1A of increase
#define POWER_OFFSET        0.005   //(A) Help to get 0A when no load is connected.
#define POWER_ZERO          2.500   //(V) The /\V coming out from the sensor when no current flow.
#define POWER_ERROR         0.0     //(%) Ammortize measure error.
#define POWER_EFFICIENCY  100.0     //(%) The power efficency of the power supply
//#define POWER_CONSUMPTION_LCD_DISPLAY
//#define FLOWMETER_SENSOR
#define FLOWMETER_MAXFLOW  6.0      // Liters per minute max
#define FLOWMETER_MAXFREQ  55       // frequency of pulses at max flow
//#define MINFLOW_PROTECTION 4
//#define DOOR_OPEN_FEATURE
#define DOOR_OPEN_LOGIC false
#define PULLUP_DOOR_OPEN true
//#define POWER_CHECK
#define POWER_CHECK_LOGIC false
#define PULLUP_POWER_CHECK true
//#define PCF8574_EXPANSION_IO
#define PCF8574_ADDRESS 0x39
//#define EEPROM_SETTINGS
#define EEPROM_CHITCHAT
//#define DISABLE_M503
//#define EEPROM_AUTO_INIT
//#define EEPROM_I2C
//#define EEPROM_SPI
//#define EEPROM_SD
//#define EEPROM_FLASH
#define SDSUPPORT
//#define USB_FLASH_DRIVE_SUPPORT (NOT USED FOR NOW!!!)
//#define ADVANCED_SD_COMMAND
#define SD_HALF_SPEED
//#define SD_QUARTER_SPEED
//#define SD_EIGHTH_SPEED
//#define SD_SIXTEENTH_SPEED
//#define SD_CHECK_AND_RETRY
//#define SD_EXTENDED_DIR
//#define SD_DISABLED_DETECT
//#define SD_DETECT_INVERTED
#define SD_FINISHED_STEPPERRELEASE true           // if sd support and the file is finished: disable steppers?
#define SD_FINISHED_RELEASECOMMAND "M84 X Y Z E"  // You might want to keep the z enabled so your bed stays in place.
//#define MENU_ADDAUTOSTART
//#define SCROLL_LONG_FILENAMES
//#define SDCARD_SORT_ALPHA
#define SDSORT_LIMIT       40     // Maximum number of sorted items (10-256). Costs 27 bytes each.
#define FOLDER_SORTING     -1     // -1=above  0=none  1=below
#define SDSORT_GCODE       false  // Allow turning sorting on/off with LCD and M36 g-code.
#define SDSORT_USES_RAM    false  // Pre-allocate a static array for faster pre-sorting.
#define SDSORT_USES_STACK  false  // Prefer the stack for pre-sorting to give back some SRAM. (Negated by next 2 options.)
#define SDSORT_CACHE_NAMES false  // Keep sorted items in RAM longer for speedy performance. Most expensive option.
#define SDSORT_DYNAMIC_RAM false  // Use dynamic allocation (within SD menus). Least expensive option. Set SDSORT_LIMIT before use!
#define SDSORT_CACHE_VFATS 2      // Maximum number of 13-byte VFAT entries to use for sorting.
//#define SD_RESTART_FILE               // Uncomment to enable
#define SD_RESTART_FILE_SAVE_TIME 1
#define SD_RESTART_FILE_PURGE_LEN   20  // Purge when restart
#define SD_RESTART_FILE_RETRACT_LEN  1  // Retract when restart
//#define PHOTO_GCODE
//#define PHOTO_POSITION { X_MAX_POS - 5, Y_MAX_POS, 0 }  // { xpos, ypos, zraise } (M240 X Y Z)
//#define PHOTO_DELAY_MS   100                            // (ms) Duration to pause before moving back (M240 P)
//#define PHOTO_RETRACT_MM   6.5                          // (mm) E retract/recover for the photo move (M240 R S)
//#define PHOTO_SWITCH_POSITION { X_MAX_POS, Y_MAX_POS }  // { xpos, ypos } (M240 I J)
#define PHOTO_SWITCH_MS   50 // (ms) (M240 D)
//#define CHDK
#define CHDK_DELAY 50   //How long in ms the pin should stay HIGH before going LOW again
//#define RFID_MODULE
#define RFID_SERIAL 1
//#define BLINKM
//#define RGB_LED
//#define RGBW_LED
//#define PCA9632
//#define NEOPIXEL_LED
#define NEOPIXEL_TYPE NEO_GRB
#define NEOPIXEL_PIXELS 16
#define NEOPIXEL_IS_SEQUENTIAL
#define NEOPIXEL_BRIGHTNESS 127
//#define NEOPIXEL_STARTUP_TEST
//#define PRINTER_EVENT_LEDS
//#define LASER
//#define CNCROUTER
//#define CASE_LIGHT
#define INVERT_CASE_LIGHT false
#define CASE_LIGHT_DEFAULT_ON false
#define CASE_LIGHT_DEFAULT_BRIGHTNESS 255
//#define CASE_LIGHT_USE_NEOPIXEL
#define CASE_LIGHT_NEOPIXEL_COLOR { 255, 255, 255, 255 }
#define DOUBLE_QUAD_STEPPING false
//#define JUNCTION_DEVIATION
#define JUNCTION_DEVIATION_MM 0.02
//#define BEZIER_JERK_CONTROL
#define MINIMUM_STEPPER_PULSE 0
#define MAXIMUM_STEPPER_RATE 500000
#define DIRECTION_STEPPER_DELAY 0
//#define ADAPTIVE_STEP_SMOOTHING
#define X_MICROSTEPS 16
#define Y_MICROSTEPS 16
#define Z_MICROSTEPS 16
#define E0_MICROSTEPS 16
#define E1_MICROSTEPS 16
#define E2_MICROSTEPS 16
#define E3_MICROSTEPS 16
#define E4_MICROSTEPS 16
#define E5_MICROSTEPS 16
#define X_CURRENT 800
#define Y_CURRENT 800
#define Z_CURRENT 800
#define E0_CURRENT 800
#define E1_CURRENT 800
#define E2_CURRENT 800
#define E3_CURRENT 800
#define E4_CURRENT 800
#define E5_CURRENT 800
#define DIGIPOT_MOTOR_CURRENT {135, 135, 135, 135, 135}
#define PWM_MOTOR_CURRENT {1200, 1000, 1000}
//#define DIGIPOT_I2C
#define DIGIPOT_I2C_NUM_CHANNELS 8
#define DIGIPOT_I2C_MOTOR_CURRENTS {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0}
//#define SERVICE_NAME_1        "Service 1"
//#define SERVICE_TIME_1        100
//#define SERVICE_NAME_2        "Service 2"
//#define SERVICE_TIME_2        100
//#define SERVICE_NAME_3        "Service 3"
//#define SERVICE_TIME_3        100
#define SERVICE_WARNING_BUZZES  3
#define NUM_POSITON_SLOTS 1
#define DEFAULT_MIN_SEGMENT_TIME 20000
//#define ARC_SUPPORT
#define MM_PER_ARC_SEGMENT  1   // Length of each arc segment
#define MIN_ARC_SEGMENTS   24   // Minimum number of segments in a complete circle
#define N_ARC_CORRECTION   25   // Number of intertpolated segments between corrections
//#define ARC_P_CIRCLES         // Enable the 'P' parameter to specify complete circles
//#define CNC_WORKSPACE_PLANES  // Allow G2/G3 to operate in XY, ZX, or YZ planes
#define MIN_STEPS_PER_SEGMENT 6
//#define M100_FREE_MEMORY_WATCHER
#define M100_FREE_MEMORY_DUMPER
#define M100_FREE_MEMORY_CORRUPTOR
//#define NOZZLE_CLEAN_FEATURE
#define NOZZLE_CLEAN_STROKES 12
#define NOZZLE_CLEAN_TRIANGLES 3
#define NOZZLE_CLEAN_START_POINT {30,30,1}
#define NOZZLE_CLEAN_END_POINT {100,60,1}
#define NOZZLE_CLEAN_CIRCLE_RADIUS 6.5
#define NOZZLE_CLEAN_CIRCLE_FN 10
#define NOZZLE_CLEAN_CIRCLE_MIDDLE NOZZLE_CLEAN_START_POINT
#define NOZZLE_CLEAN_GOBACK
//#define NOZZLE_CLEAN_NO_Z
//#define NOZZLE_PARK_FEATURE
#define NOZZLE_PARK_POINT {10,10,20}
#define NOZZLE_PARK_XY_FEEDRATE 100
#define NOZZLE_PARK_Z_FEEDRATE 5
//#define ADVANCED_PAUSE_FEATURE
#define PAUSE_PARK_RETRACT_FEEDRATE 20
#define PAUSE_PARK_RETRACT_LENGTH 5
#define PAUSE_PARK_UNLOAD_FEEDRATE 50
#define PAUSE_PARK_UNLOAD_LENGTH 100
#define PAUSE_PARK_SLOW_LOAD_FEEDRATE 6
#define PAUSE_PARK_SLOW_LOAD_LENGTH 5
#define PAUSE_PARK_FAST_LOAD_FEEDRATE 50
#define PAUSE_PARK_FAST_LOAD_LENGTH 100
#define PAUSE_PARK_PURGE_FEEDRATE 5
#define PAUSE_PARK_PURGE_LENGTH 50
#define FILAMENT_UNLOAD_RETRACT_LENGTH 10
#define FILAMENT_UNLOAD_DELAY 5000
#define FILAMENT_UNLOAD_PURGE_LENGTH 8
#define PAUSE_PARK_NOZZLE_TIMEOUT 45
#define PAUSE_PARK_PRINTER_OFF 5
#define PAUSE_PARK_NUMBER_OF_ALERT_BEEPS 5
#define PAUSE_PARK_NO_STEPPER_TIMEOUT         // Enable for XYZ steppers to stay powered on during filament change.
//#define PARK_HEAD_ON_PAUSE                  // Park the nozzle during pause and filament change.
//#define HOME_BEFORE_FILAMENT_CHANGE         // Ensure homing has been completed prior to parking for filament change
//#define FILAMENT_LOAD_UNLOAD_GCODES         // Add M701/M702 Load/Unload G-codes, plus Load/Unload in the LCD Prepare menu.
//#define FILAMENT_UNLOAD_ALL_EXTRUDERS       // Allow M702 to unload all extruders above a minimum target temp (as set by M302)
//#define INCH_MODE_SUPPORT
//#define JSON_OUTPUT
//#define SCAD_MESH_OUTPUT
//#define PINS_DEBUGGING
//#define DEBUG_FEATURE
//#define USE_WATCHDOG
//#define WATCHDOG_RESET_MANUAL
//#define START_GCODE
#define START_PRINTING_SCRIPT "G28\nG1 Z10 F8000"
//#define STOP_GCODE
#define STOP_PRINTING_SCRIPT "G28\nM107\nM104 T0 S0\nM140 S0\nM84\nM81"
#define PROPORTIONAL_FONT_RATIO 1

/********************************
 *     Configuration_Driver     *
 ********************************/
#define R_SENSE           0.11  // R_sense resistor
#define INTERPOLATE       true  // Interpolate X/Y/Z_MICROSTEPS to 256
//#define TMC_USE_SW_SPI
//#define SENSORLESS_HOMING
#define X_STALL_SENSITIVITY 8
#define Y_STALL_SENSITIVITY 8
#define Z_STALL_SENSITIVITY 8
#define PHASE_HOME { -1, -1, -1 }
//#define SPI_ENDSTOPS
//#define IMPROVE_HOMING_RELIABILITY
//#define SQUARE_WAVE_STEPPING
//#define TMC_DEBUG
//#define TMC_Z_CALIBRATION
#define CALIBRATION_CURRENT 250
#define CALIBRATION_EXTRA_HEIGHT 10
//#define TMC_SOFTWARE_DRIVER_ENABLE
#define X_STEALTHCHOP   false
#define Y_STEALTHCHOP   false
#define Z_STEALTHCHOP   false
#define E0_STEALTHCHOP  false
#define E1_STEALTHCHOP  false
#define E2_STEALTHCHOP  false
#define E3_STEALTHCHOP  false
#define E4_STEALTHCHOP  false
#define E5_STEALTHCHOP  false
#define CHOPPER_DEFAULT_12V  { 3, -1, 1 }
#define CHOPPER_DEFAULT_19V  { 4,  1, 1 }
#define CHOPPER_DEFAULT_24V  { 4,  2, 1 }
#define CHOPPER_DEFAULT_36V  { 5,  2, 4 }
#define CHOPPER_PRUSAMK3_24V { 3, -2, 6 } // Imported parameters from the official Prusa firmware for MK3 (24V)
#define CHOPPER_MK4DUO_436   { 5,  2, 3 } // Old defaults from MK4duo v4.3.6
#define CHOPPER_TIMING CHOPPER_DEFAULT_12V
//#define MONITOR_DRIVER_STATUS
//#define MONITOR_DRIVER_STATUS_INTERVAL_MS 500u
//#define CURRENT_STEP_DOWN     50  // [mA]
//#define REPORT_CURRENT_CHANGE
//#define STOP_ON_ERROR
//#define HYBRID_THRESHOLD
#define X_HYBRID_THRESHOLD     100
#define Y_HYBRID_THRESHOLD     100
#define Z_HYBRID_THRESHOLD       2
#define E0_HYBRID_THRESHOLD     30
#define E1_HYBRID_THRESHOLD     30
#define E2_HYBRID_THRESHOLD     30
#define E3_HYBRID_THRESHOLD     30
#define E4_HYBRID_THRESHOLD     30
#define E5_HYBRID_THRESHOLD     30
#define  TMC_ADV() {  }
//#define X_HARDWARE_SERIAL  Serial1
//#define X2_HARDWARE_SERIAL Serial1
//#define Y_HARDWARE_SERIAL  Serial1
//#define Y2_HARDWARE_SERIAL Serial1
//#define Z_HARDWARE_SERIAL  Serial1
//#define Z2_HARDWARE_SERIAL Serial1
//#define Z3_HARDWARE_SERIAL Serial1
//#define E0_HARDWARE_SERIAL Serial1
//#define E1_HARDWARE_SERIAL Serial1
//#define E2_HARDWARE_SERIAL Serial1
//#define E3_HARDWARE_SERIAL Serial1
//#define E4_HARDWARE_SERIAL Serial1
//#define E5_HARDWARE_SERIAL Serial1
#define X_SERIAL_TX_PIN   NoPin
#define X_SERIAL_RX_PIN   NoPin
#define X2_SERIAL_TX_PIN  NoPin
#define X2_SERIAL_RX_PIN  NoPin
#define Y_SERIAL_TX_PIN   NoPin
#define Y_SERIAL_RX_PIN   NoPin
#define Y2_SERIAL_TX_PIN  NoPin
#define Y2_SERIAL_RX_PIN  NoPin
#define Z_SERIAL_TX_PIN   NoPin
#define Z_SERIAL_RX_PIN   NoPin
#define Z2_SERIAL_TX_PIN  NoPin
#define Z2_SERIAL_RX_PIN  NoPin
#define Z3_SERIAL_TX_PIN  NoPin
#define Z3_SERIAL_RX_PIN  NoPin
#define E0_SERIAL_TX_PIN  NoPin
#define E0_SERIAL_RX_PIN  NoPin
#define E1_SERIAL_TX_PIN  NoPin
#define E1_SERIAL_RX_PIN  NoPin
#define E2_SERIAL_TX_PIN  NoPin
#define E2_SERIAL_RX_PIN  NoPin
#define E3_SERIAL_TX_PIN  NoPin
#define E3_SERIAL_RX_PIN  NoPin
#define E4_SERIAL_TX_PIN  NoPin
#define E4_SERIAL_RX_PIN  NoPin
#define E5_SERIAL_TX_PIN  NoPin
#define E5_SERIAL_RX_PIN  NoPin
#define X_OVERCURRENT   2000 // maxc current in mA. If the current goes over this value, the driver will switch off
#define X_STALLCURRENT  1500 // current in mA where the driver will detect a stall
#define X2_OVERCURRENT  2000
#define X2_STALLCURRENT 1500
#define Y_OVERCURRENT   2000
#define Y_STALLCURRENT  1500
#define Y2_OVERCURRENT  2000
#define Y2_STALLCURRENT 1500
#define Z_OVERCURRENT   2000
#define Z_STALLCURRENT  1500
#define Z2_OVERCURRENT  2000
#define Z2_STALLCURRENT 1500
#define Z3_OVERCURRENT  2000
#define Z3_STALLCURRENT 1500
#define E0_OVERCURRENT  2000
#define E0_STALLCURRENT 1500
#define E1_OVERCURRENT  2000
#define E1_STALLCURRENT 1500
#define E2_OVERCURRENT  2000
#define E2_STALLCURRENT 1500
#define E3_OVERCURRENT  2000
#define E3_STALLCURRENT 1500
#define E4_OVERCURRENT  2000
#define E4_STALLCURRENT 1500
#define E5_OVERCURRENT  2000
#define E5_STALLCURRENT 1500


/* Below you will find the configuration string, that created with Configurator tool online marlinkimbra.it
========== Start configuration string ==========
{
"processor": 0,
"serial": 0,
"baudrates": 115200,
"serial2": -2,
"baudrates2": 115200,
"blockbuffersize": 16,
"bufsize": 4,
"txbuffersize": 0,
"rxbuffersize": 128,
"serialxonxoff": "0",
"customname": "cinna",
"customconfig": "3Dw 2.2.0",
"machineuuid": "00000000-0000-0000-0000-000000000000",
"killMethod": 0,
"notimeouts": 1000,
"advancedok": "0",
"emergencyparser": "0",
"fastergcodeparser": "0",
"fastergcodeexecute": "0",
"hostkeepalive": "1",
"hostkeepalivesecond": 2,
"motherboards": "BOARD_RAMPS_13_HFB",
"mechanism": 0,
"power": 0,
"defaultpower": "0",
"delayafterpower": 5,
"powertimeout": 30,
"extruders": 1,
"driverextruders": 1,
"tempunitsupport": "0",
"bed": "1",
"chamber": "0",
"cooler": "0",
"nbed": 1,
"nchamber": 0,
"dhtsupport": "0",
"dhttype": 11,
"tempsensor0": "1",
"tempsensor1": "0",
"tempsensor2": "0",
"tempsensor3": "0",
"tempsensor4": "0",
"tempsensor5": "0",
"tempsensorbed": "1",
"tempsensorbed1": "0",
"tempsensorbed2": "0",
"tempsensorbed3": "0",
"tempsensorchamber": "0",
"tempsensorchamber1": "0",
"tempsensorchamber2": "0",
"tempsensorchamber3": "0",
"tempsensorcooler": "0",
"seriesrs": 4700,
"t9name": "User sensor",
"t9r25": 100000,
"t9betak": 4036,
"ad595offset": 0,
"ad595gain": 1,
"dummy998": 25,
"dummy999": 25,
"maxtemp0": 275,
"maxtemp1": 275,
"maxtemp2": 275,
"maxtemp3": 275,
"maxtemp4": 275,
"maxtemp5": 275,
"maxtempbed": 150,
"maxtempchamber": 150,
"maxtempcooler": 150,
"mintemp0": 5,
"mintemp1": 5,
"mintemp2": 5,
"mintemp3": 5,
"mintemp4": 5,
"mintemp5": 5,
"mintempbed": 5,
"mintempchamber": 5,
"mintempcooler": 5,
"maxconsecutivelowtemp": 2,
"preheat1label": "PLA",
"preheat1hotendtemp": 190,
"preheat1bedtemp": 60,
"preheat1chambertemp": 0,
"preheat1fanspeed": 255,
"preheat2label": "ABS",
"preheat2hotendtemp": 240,
"preheat2bedtemp": 100,
"preheat2chambertemp": 50,
"preheat2fanspeed": 255,
"preheat3label": "GUM",
"preheat3hotendtemp": 230,
"preheat3bedtemp": 60,
"preheat3chambertemp": 50,
"preheat3fanspeed": 255,
"autotemp": "1",
"autotempoldweight": 0.98,
"pidtemp": "1",
"pidmax": 255,
"piddrivemin": 40,
"piddrivemax": 230,
"pidfunctionalrange": 10,
"pidautotunemenu": "1",
"pidextrusionrate": "0",
"lpqmaxlen": 50,
"temphysteresis": 2,
"tempinterval": 100,
"pidkp0": 26.32,
"pidki0": 2.18,
"pidkd0": 79.46,
"pidkc0": 100,
"pidkp1": 40,
"pidki1": 7,
"pidkd1": 60,
"pidkc1": 100,
"pidkp2": 40,
"pidki2": 7,
"pidkd2": 60,
"pidkc2": 100,
"pidkp3": 40,
"pidki3": 7,
"pidkd3": 60,
"pidkc3": 100,
"pidkp4": 40,
"pidki4": 7,
"pidkd4": 60,
"pidkc4": 100,
"pidkp5": 40,
"pidki5": 7,
"pidkd5": 60,
"pidkc5": 100,
"pidbedtemp": "0",
"pidbedmax": 255,
"pidbeddrivemin": 40,
"pidbeddrivemax": 230,
"bedhysteresis": 2,
"bedinterval": 500,
"pidbedkp": 10,
"pidbedki": 1,
"pidbedkd": 305,
"pidbedkp1": 10,
"pidbedki1": 1,
"pidbedkd1": 300,
"pidbedkp2": 10,
"pidbedki2": 1,
"pidbedkd2": 300,
"pidbedkp3": 10,
"pidbedki3": 1,
"pidbedkd3": 300,
"pidchambertemp": "0",
"pidchambermax": 255,
"pidchamberdrivemin": 80,
"pidchamberdrivemax": 255,
"chamberhysteresis": 2,
"chamberinterval": 500,
"pidchamberkp": 10,
"pidchamberki": 1,
"pidchamberkd": 305,
"pidchamberkp1": 10,
"pidchamberki1": 1,
"pidchamberkd1": 300,
"pidchamberkp2": 10,
"pidchamberki2": 1,
"pidchamberkd2": 300,
"pidchamberkp3": 10,
"pidchamberki3": 1,
"pidchamberkd3": 300,
"pidcoolertemp": "0",
"pidcoolermax": 255,
"pidcoolerdrivemin": 80,
"pidcoolerdrivemax": 255,
"coolerhysteresis": 2,
"coolerinterval": 500,
"pidcoolerkp": 10,
"pidcoolerki": 1,
"pidcoolerkd": 305,
"invertedheaterpins": "0",
"invertedbedpin": "0",
"invertedchamberpin": "0",
"invertedcoolerpin": "0",
"thermalprotectionhotend": "0",
"thermalprotectionbed": "0",
"thermalprotectionchamber": "0",
"thermalprotectioncooler": "0",
"adaptivefanspeed": "0",
"thermalprotectionperiod": 40,
"thermalprotectionhysteresis": 4,
"watchtempperiod": 20,
"watchtempincrease": 2,
"watchbedtempperiod": 60,
"watchbedtempincrease": 2,
"watchchambertempperiod": 60,
"watchchambertempincrease": 2,
"watchcoolertempperiod": 60,
"watchcoolertempincrease": 2,
"uiprintername": "3Dw 2.2.0",
"endstopinterrupt": "0",
"Xminendstop": "0",
"Xmaxendstop": "0",
"Yminendstop": "0",
"Ymaxendstop": "0",
"Zminendstop": "0",
"Zmaxendstop": "0",
"X2minendstop": "0",
"X2maxendstop": "0",
"Y2minendstop": "0",
"Y2maxendstop": "0",
"Z2minendstop": "0",
"Z2maxendstop": "0",
"Z3minendstop": "0",
"Z3maxendstop": "0",
"Zprobeendstop": "0",
"Xhoming": 0,
"Yhoming": 0,
"Zhoming": 0,
"Ehoming": 0,
"disableX": "1",
"disableY": "1",
"disableZ": "1",
"disableE": "1",
"Xmaxpos": 190,
"Xminpos": -20,
"Ymaxpos": 170,
"Yminpos": 0,
"Zmaxpos": 260,
"Zminpos": -0.8,
"Zsafehoming": "0",
"ZsafehomingX": 100,
"ZsafehomingY": 100,
"Zminheightbeforehoming": 0,
"Zprobetype": 0,
"Zprobesledoffset": 5,
"Xprobeoffset": 0,
"Yprobeoffset": 0,
"Zprobeoffset": -1,
"xyprobespeed": 8000,
"zprobespeedfast": 200,
"zprobespeedslow": 100,
"zprobingrepeat": "0",
"Zproberepetitions": 1,
"Zraiseprobedeploystow": 15,
"Zraisebetweenprobe": 10,
"Zraiseafterprobe": 0,
"Zprobelowpoint": -5,
"bltouch5vmode": "0",
"lcdbedlevel": "0",
"lcdzstep": 0.025,
"lcdprobezrange": 4,
"levelingfadeheight": "0",
"bedlevel": 0,
"meshinset": 10,
"meshg28rest": "0",
"maxgridpointX": 3,
"maxgridpointY": 3,
"manualhomepos": "0",
"bedcenter00": "0",
"Xhomepos": 0,
"Yhomepos": 0,
"Zhomepos": 0,
"Xstepspermm": 80,
"Ystepspermm": 80,
"Zstepspermm": 1065,
"Xmaxspeed": 150,
"Ymaxspeed": 150,
"Zmaxspeed": 4,
"Xmanualspeed": 100,
"Ymanualspeed": 100,
"Zmanualspeed": 2,
"minimumspeed": 0,
"minimumtravelspeed": 0,
"minimumplannerspeed": 0.05,
"Xmaxacceleration": 1000,
"Ymaxacceleration": 1000,
"Zmaxacceleration": 20,
"defaultacceleration": 1000,
"defaulttravelacceleration": 1000,
"maxXjerk": 5,
"maxYjerk": 5,
"maxZjerk": 0.4,
"Xhomingspeed": 100,
"Yhomingspeed": 100,
"Zhomingspeed": 2,
"XbumpMM": 5,
"YbumpMM": 5,
"ZbumpMM": 2,
"Xbumpdivisor": 5,
"Ybumpdivisor": 5,
"Zbumpdivisor": 2,
"hotendoffsetXE1": 0,
"hotendoffsetXE2": 0,
"hotendoffsetXE3": 0,
"hotendoffsetYE1": 0,
"hotendoffsetYE2": 0,
"hotendoffsetYE3": 0,
"hotendoffsetZE1": 0,
"hotendoffsetZE2": 0,
"hotendoffsetZE3": 0,
"hysteresis": "0",
"hysteresisXmm": 0,
"hysteresisYmm": 0,
"hysteresisZmm": 0,
"hysteresiscorrection": 1,
"E0stepspermm": 95,
"E1stepspermm": 625,
"E2stepspermm": 625,
"E3stepspermm": 625,
"E4stepspermm": 625,
"E5stepspermm": 625,
"E6stepspermm": 625,
"E7stepspermm": 625,
"E8stepspermm": 625,
"E9stepspermm": 625,
"E10stepspermm": 625,
"E11stepspermm": 625,
"E0maxspeed": 50,
"E1maxspeed": 100,
"E2maxspeed": 100,
"E3maxspeed": 100,
"E4maxspeed": 100,
"E5maxspeed": 100,
"E6maxspeed": 50,
"E7maxspeed": 50,
"E8maxspeed": 50,
"E9maxspeed": 50,
"E10maxspeed": 50,
"E11maxspeed": 50,
"E0maxacceleration": 3000,
"E1maxacceleration": 3000,
"E2maxacceleration": 3000,
"E3maxacceleration": 3000,
"E4maxacceleration": 3000,
"E5maxacceleration": 3000,
"E6maxacceleration": 1000,
"E7maxacceleration": 1000,
"E8maxacceleration": 1000,
"E9maxacceleration": 1000,
"E10maxacceleration": 1000,
"E11maxacceleration": 1000,
"E0retractacceleration": 4000,
"E1retractacceleration": 10000,
"E2retractacceleration": 10000,
"E3retractacceleration": 10000,
"E4retractacceleration": 10000,
"E5retractacceleration": 10000,
"E6retractacceleration": 5000,
"E7retractacceleration": 5000,
"E8retractacceleration": 5000,
"E9retractacceleration": 5000,
"E10retractacceleration": 5000,
"E11retractacceleration": 5000,
"maxE0jerk": 5,
"maxE1jerk": 5,
"maxE2jerk": 5,
"maxE3jerk": 5,
"maxE4jerk": 5,
"maxE5jerk": 5,
"maxE6jerk": 5,
"maxE7jerk": 5,
"maxE8jerk": 5,
"maxE9jerk": 5,
"maxE10jerk": 5,
"maxE11jerk": 5,
"Emanualspeed": 10,
"deltasegmentpersecond": 200,
"deltasegmentpersecondmove": 50,
"deltasegmentperline": 20,
"deltadiagonalrod": 220,
"deltasmoothrodoffset": 145,
"deltaeffectoroffset": 20,
"deltacarriageoffset": 20,
"deltaprinterradius": 70,
"deltaheight": 210,
"towerAendstop": 0,
"towerBendstop": 0,
"towerCendstop": 0,
"towerAangle": 0,
"towerBangle": 0,
"towerCangle": 0,
"towerAradius": 0,
"towerBradius": 0,
"towerCradius": 0,
"towerAdiagonalrod": 0,
"towerBdiagonalrod": 0,
"towerCdiagonalrod": 0,
"deltaautoprecision": 0.1,
"deltaautogrid": 7,
"deltaXdeploystart": 0,
"deltaYdeploystart": 0,
"deltaZdeploystart": 30,
"deltaXdeployend": 0,
"deltaYdeployend": 0,
"deltaZdeployend": 30,
"deltaXretractstart": 0,
"deltaYretractstart": 0,
"deltaZretractstart": 30,
"deltaXretractend": 0,
"deltaYretractend": 0,
"deltaZretractend": 0,
"deltaautocalibration": 0,
"deltahomesafezone": "1",
"deltahomeonpower": "0",
"lcdlanguages": "it",
"lcdlanguages1": "NO_LANGUAGE",
"lcdlanguages2": "NO_LANGUAGE",
"lcdlanguages3": "NO_LANGUAGE",
"lcdlanguages4": "NO_LANGUAGE",
"displays": 5,
"encoderpulsesstep": 3,
"encoderstepmenu": 1,
"invertclickbutton": "0",
"invertbackbutton": "0",
"invertrotaryswitch": "1",
"invertmenudirection": "0",
"lcdspeaker": "0",
"nextion_model": 8,
"nextion_port": 1,
"nextion_baud": 57600,
"nextionGFX": "0",
"lcdprogressbar": "0",
"lcdprogressbarbartime": 2,
"lcdprogressbarmsgtime": 2,
"lcdprogressbarmsgexpire": 0,
"doublequadstepping": "0",
"junctiondeviation": "0",
"junctiondeviationfactor": 0.02,
"bezierjerk": "0",
"stepperpulse": 0,
"stepperrate": 500000,
"directiondelay": 0,
"stepsmoothing": "0",
"Xtwostepper": "0",
"X2vsXdir": "0",
"Xtwoendstop": "0",
"Ytwostepper": "0",
"Y2vsYdir": "0",
"Ytwoendstop": "0",
"Ztwostepper": "0",
"Z2vsZdir": "0",
"Ztwoendstop": "0",
"Zthreestepper": "0",
"Z3vsZdir": "0",
"Zthreeendstop": "0",
"extencoder": "0",
"extencodererrorstep": 500,
"extencoderminstep": 10,
"Xmicrostep": 16,
"Ymicrostep": 16,
"Zmicrostep": 16,
"E0microstep": 16,
"E1microstep": 16,
"E2microstep": 16,
"E3microstep": 16,
"E4microstep": 16,
"E5microstep": 16,
"Xcurrent": 800,
"Ycurrent": 800,
"Zcurrent": 800,
"E0current": 800,
"E1current": 800,
"E2current": 800,
"E3current": 800,
"E4current": 800,
"E5current": 800,
"Xinvertenable": 0,
"Yinvertenable": 0,
"Zinvertenable": 0,
"Einvertenable": 0,
"Xinvertstep": "0",
"Yinvertstep": "0",
"Zinvertstep": "0",
"Einvertstep": "0",
"Xinvertdir": "0",
"Yinvertdir": "0",
"Zinvertdir": "0",
"E0invertdir": "0",
"E1invertdir": "0",
"E2invertdir": "0",
"E3invertdir": "0",
"E4invertdir": "0",
"E5invertdir": "0",
"Xdrivertype": "A4988",
"Ydrivertype": "A4988",
"Zdrivertype": "A4988",
"X2drivertype": "A4988",
"Y2drivertype": "A4988",
"Z2drivertype": "A4988",
"Z3drivertype": "A4988",
"E0drivertype": "A4988",
"E1drivertype": "A4988",
"E2drivertype": "A4988",
"E3drivertype": "A4988",
"E4drivertype": "A4988",
"E5drivertype": "A4988",
"softpwmspeed": 0,
"fanminpwm": 0,
"fanmaxpwm": 255,
"fanpwmfreq": 250,
"fankickstarttime": 0,
"autofan0": 0,
"autofan1": -1,
"autofan2": -1,
"autofan3": -1,
"autofan4": -1,
"autofan5": -1,
"Ecoolertemp": 50,
"Ecoolerspeed": 255,
"Ecoolerminspeed": 0,
"controllerfansec": 60,
"controllerfanspeed": 255,
"controllerfanminspeed": 0,
"toolzraise": 1,
"toolpark": "0",
"toolnoreturn": "0",
"toolfilamentswap": "0",
"toolfilamentlenght": 20,
"toolfilamentpurge": 2,
"toolfilamentspeed": 3000,
"toolfilamentprimespeed": 600,
"defaultfilamentdia": 1.75,
"dangerousextrude": "1",
"extrudemintemp": 170,
"lengthextrude": "1",
"extrudemaxlenght": 400,
"singlenozzle": "0",
"baricuda": "0",
"colormixingextruder": "0",
"mixingsteppers": "2",
"virtualtools": 16,
"mkr4": "0",
"invertrelepin": "0",
"E0E1pin": -1,
"E0E2pin": -1,
"E1E3pin": -1,
"mkr6": "0",
"mkr12": "0",
"EX1pin": -1,
"EX2pin": -1,
"mmu2": "0",
"mmu2serial": 1,
"mmu2mode12": "0",
"mmu2rstpin": -1,
"dondolo": "0",
"dondolodualmotor": "0",
"dondoloservo": 0,
"dondoloservoe0": 120,
"dondoloservoe1": 10,
"dondolodelay": 1000,
"workspace": "0",
"softwareminendstop": "1",
"softwaremaxendstop": "1",
"endstoponlyforhome": "1",
"abortendstophit": "0",
"servos": "0",
"numservos": 0,
"Zservo": -1,
"angleextendservosZ": 0,
"angleretractservosZ": 0,
"servodeactivate": "0",
"servodeactivatedelay": 300,
"quickhome": "0",
"homeYbeforeX": "1",
"homeXYbeforeZ": "0",
"babystepping": "0",
"babysteppingXY": "0",
"babysteppingZprobe": "0",
"babysteppingdoubleclick": "0",
"filamentsensor": "0",
"filamentsensorextruder": 0,
"filamentsensormaxdia": 2,
"filamentsensormindia": 1.35,
"filamentsensordia": 1.75,
"filamentsensorlcd": "0",
"filamentrunout": "0",
"filamentrunoutdav": "0",
"filamentrunoutdistance": 0,
"filamentrunoutscript": "M600",
"filamentsensor0": "0",
"filamentsensor1": "0",
"filamentsensor2": "0",
"filamentsensor3": "0",
"filamentsensor4": "0",
"filamentsensor5": "0",
"powerconsumption": "0",
"dooropen": "0",
"doorendstop": "0",
"powercheck": "0",
"powercheckendstop": "0",
"caselight": "0",
"caselightinvert": "0",
"caselightdefault": "0",
"caselightbrightness": 255,
"eeprom": "0",
"eepromsd": "0",
"eepromchitchat": "1",
"sdsupport": "1",
"sdspeed": 1,
"sddisableddetect": "0",
"sddetectinverted": "0",
"sdrestart": "0",
"sdrestarttime": 1,
"laserbeam": "0",
"lasercontrol": 1,
"laserfocus": "0",
"laserraster": "0",
"rfidmodule": "0",
"rfidserial": 1,
"rgbled": "0",
"rgbwled": "0",
"pca9632": "0",
"neopixelled": "0",
"neopixeltype": "NEO_GRB",
"neopixelpixels": 16,
"eventled": "0",
"jsonoutput": "0",
"testmode": "0",
"inchmodesupport": "0",
"nozzlecleanfeature": "0",
"nozzlecleanstrokes": 12,
"nozzlecleantriangle": 3,
"nozzlecleanstart_x": 30,
"nozzlecleanstart_y": 30,
"nozzlecleanstart_z": 1,
"nozzlecleanend_x": 100,
"nozzlecleanend_y": 60,
"nozzlecleanend_z": 1,
"nozzlecleangoback": "1",
"nozzleparkfeature": "0",
"nozzleparkXpos": 10,
"nozzleparkYpos": 10,
"nozzleparkZpos": 20,
"nozzleparkXYfr": 100,
"nozzleparkZfr": 5,
"filamentchangeenable": "0",
"filamentchangeretract": 5,
"filamentchangeretractfr": 20,
"filamentchangeunload": 100,
"filamentchangeunloadfr": 50,
"filamentchangeslowload": 5,
"filamentchangeslowloadfr": 6,
"filamentchangefastload": 100,
"filamentchangefastloadfr": 50,
"filamentchangeextrude": 50,
"filamentchangeextrudefr": 5,
"filamentchangeunloadretract": 10,
"filamentchangeunloadretractdelay": 5000,
"filamentchangeunloadretractpurge": 8,
"filamentchangenozzletimeout": 45,
"filamentchangeprinteroff": 5,
"filamentchangenumberbeep": 5,
"filamentchangenosteppertimeout": "1",
"filamentchangeparkheadonpause": "0",
"filamentchangehomebefore": "0",
"filamentchangegcodes": "0",
"filamentchangeallextruder": "0",
"Xmotor": {
  "name": "X Driver",
  "step": "ORIG_X_STEP_PIN",
  "dir": "ORIG_X_DIR_PIN",
  "enable": "ORIG_X_ENABLE_PIN"
},
"Ymotor": {
  "name": "Z Driver",
  "step": "ORIG_Z_STEP_PIN",
  "dir": "ORIG_Z_DIR_PIN",
  "enable": "ORIG_Z_ENABLE_PIN"
},
"Zmotor": {
  "name": "Y Driver",
  "step": "ORIG_Y_STEP_PIN",
  "dir": "ORIG_Y_DIR_PIN",
  "enable": "ORIG_Y_ENABLE_PIN"
},
"X2motor": {
  "name": "E1 Driver",
  "step": "ORIG_E1_STEP_PIN",
  "dir": "ORIG_E1_DIR_PIN",
  "enable": "ORIG_E1_ENABLE_PIN"
},
"Y2motor": {
  "name": "E1 Driver",
  "step": "ORIG_E1_STEP_PIN",
  "dir": "ORIG_E1_DIR_PIN",
  "enable": "ORIG_E1_ENABLE_PIN"
},
"Z2motor": {
  "name": "E1 Driver",
  "step": "ORIG_E1_STEP_PIN",
  "dir": "ORIG_E1_DIR_PIN",
  "enable": "ORIG_E1_ENABLE_PIN"
},
"Z3motor": {
  "name": "E2 Driver",
  "step": "ORIG_E2_STEP_PIN",
  "dir": "ORIG_E2_DIR_PIN",
  "enable": "ORIG_E2_ENABLE_PIN"
},
"E0motor": {
  "name": "E0 Driver",
  "step": "ORIG_E0_STEP_PIN",
  "dir": "ORIG_E0_DIR_PIN",
  "enable": "ORIG_E0_ENABLE_PIN"
},
"E1motor": {
  "name": "E1 Driver",
  "step": "ORIG_E1_STEP_PIN",
  "dir": "ORIG_E1_DIR_PIN",
  "enable": "ORIG_E1_ENABLE_PIN"
},
"E2motor": {
  "name": "E2 Driver",
  "step": "ORIG_E2_STEP_PIN",
  "dir": "ORIG_E2_DIR_PIN",
  "enable": "ORIG_E2_ENABLE_PIN"
},
"E3motor": {
  "name": "E3 Driver",
  "step": "ORIG_E3_STEP_PIN",
  "dir": "ORIG_E3_DIR_PIN",
  "enable": "ORIG_E3_ENABLE_PIN"
},
"E4motor": {
  "name": "E4 Driver",
  "step": "ORIG_E4_STEP_PIN",
  "dir": "ORIG_E4_DIR_PIN",
  "enable": "ORIG_E4_ENABLE_PIN"
},
"E5motor": {
  "name": "E5 Driver",
  "step": "ORIG_E5_STEP_PIN",
  "dir": "ORIG_E5_DIR_PIN",
  "enable": "ORIG_E5_ENABLE_PIN"
},
"heater0pin": "ORIG_HEATER_HE0_PIN",
"heater1pin": "ORIG_HEATER_HE1_PIN",
"heater2pin": "ORIG_HEATER_HE2_PIN",
"heater3pin": "ORIG_HEATER_HE3_PIN",
"heater4pin": "ORIG_HEATER_HE4_PIN",
"heater5pin": "ORIG_HEATER_HE5_PIN",
"heaterbedpin": "ORIG_HEATER_BED0_PIN",
"heaterbed1pin": "ORIG_HEATER_BED1_PIN",
"heaterbed2pin": "ORIG_HEATER_BED2_PIN",
"heaterbed3pin": "ORIG_HEATER_BED3_PIN",
"heaterchamberpin": "NoPin",
"heaterchamber1pin": "NoPin",
"heaterchamber2pin": "NoPin",
"heaterchamber3pin": "NoPin",
"heatercoolerpin": "NoPin",
"temp0pin": "ORIG_TEMP_HE0_PIN",
"temp1pin": "ORIG_TEMP_HE1_PIN",
"temp2pin": "ORIG_TEMP_HE2_PIN",
"temp3pin": "ORIG_TEMP_HE3_PIN",
"temp4pin": "ORIG_TEMP_HE4_PIN",
"temp5pin": "ORIG_TEMP_HE5_PIN",
"tempbedpin": "ORIG_TEMP_BED0_PIN",
"tempbed1pin": "ORIG_TEMP_BED1_PIN",
"tempbed2pin": "ORIG_TEMP_BED2_PIN",
"tempbed3pin": "ORIG_TEMP_BED3_PIN",
"tempchamberpin": "NoPin",
"tempchamber1pin": "NoPin",
"tempchamber2pin": "NoPin",
"tempchamber3pin": "NoPin",
"tempcoolerpin": "NoPin",
"Xminpin": "ORIG_X_MIN_PIN",
"Xmaxpin": "ORIG_X_MAX_PIN",
"Yminpin": "ORIG_Z_MIN_PIN",
"Ymaxpin": "ORIG_Y_MAX_PIN",
"Zminpin": "ORIG_Y_MIN_PIN",
"Zmaxpin": "ORIG_Z_MAX_PIN",
"X2minpin": "NoPin",
"X2maxpin": "NoPin",
"Y2minpin": "NoPin",
"Y2maxpin": "NoPin",
"Z2minpin": "NoPin",
"Z3minpin": "NoPin",
"Z2maxpin": "NoPin",
"Z3maxpin": "NoPin",
"Zprobepin": "NoPin",
"Xcspin": "NoPin",
"Ycspin": "NoPin",
"Zcspin": "NoPin",
"X2cspin": "NoPin",
"Y2cspin": "NoPin",
"Z2cspin": "NoPin",
"Z3cspin": "ORIG_E2_CS_PIN",
"E0cspin": "NoPin",
"E1cspin": "NoPin",
"E2cspin": "NoPin",
"E3cspin": "NoPin",
"E4cspin": "NoPin",
"E5cspin": "NoPin",
"fanpin": "ORIG_FAN0_PIN",
"fan1pin": "ORIG_FAN1_PIN",
"fan2pin": "ORIG_FAN2_PIN",
"fan3pin": "ORIG_FAN3_PIN",
"fan4pin": "ORIG_FAN4_PIN",
"fan5pin": "ORIG_FAN5_PIN",
"PSONpin": "ORIG_PS_ON_PIN",
"beeperpin": "ORIG_BEEPER_PIN",
"filamentsensorpin": "NoPin",
"filrunoutdavpin": "NoPin",
"filrunoutpin0": "NoPin",
"filrunoutpin1": "NoPin",
"filrunoutpin2": "NoPin",
"filrunoutpin3": "NoPin",
"filrunoutpin4": "NoPin",
"filrunoutpin5": "NoPin",
"laserpwrpin": "ORIG_LASER_PWR_PIN",
"laserpwmpin": "ORIG_LASER_PWM_PIN",
"laserperipheralspin": "NoPin",
"laserperipheralsstatuspin": "NoPin",
"cncrouterpin": "NoPin",
"powerconsumptionpin": "NoPin",
"doorpin": "NoPin",
"powercheckpin": "NoPin",
"caselightpin": "NoPin",
"rgbledRpin": "NoPin",
"rgbledGpin": "NoPin",
"rgbledBpin": "NoPin",
"rgbledWpin": "NoPin",
"neopixelpin": "NoPin",
"dhtdatapin": "NoPin",
"tacho0pin": "NoPin",
"tacho1pin": "NoPin",
"tacho2pin": "NoPin",
"tacho3pin": "NoPin",
"tacho4pin": "NoPin",
"tacho5pin": "NoPin",
"END_DATA": 0,
"printer": "prusa_i3_r2_evo",
"plahotendtemp": 190,
"plabedtemp": 60,
"plafanspeed": 255,
"abshotendtemp": 240,
"absbedtemp": 100,
"absfanspeed": 255,
"gumhotendtemp": 230,
"gumbedtemp": 60,
"gumfanspeed": 255,
"heaterpwmspeed": 0,
"maxbedpower": 255,
"maxchamberpower": 255,
"fastpwmcooler": "0",
"maxcoolerpower": 255,
"thermalprotectionbedperiod": 20,
"thermalprotectionbedhysteresis": 2,
"thermalprotectionchamberperiod": 20,
"thermalprotectionchamberhysteresis": 2,
"thermalprotectioncoolerperiod": 20,
"thermalprotectioncoolerhysteresis": 2,
"zprobespeed": 3600,
"leftprobe": 20,
"rightprobe": 180,
"backprobe": 180,
"frontprobe": 20,
"Xprobe1": 15,
"Yprobe1": 180,
"Xprobe2": 15,
"Yprobe2": 15,
"Xprobe3": 180,
"Yprobe3": 15,
"disableddoublequadstepping": "0",
"X2microstep": 16,
"Y2microstep": 16,
"Z2microstep": 16,
"X2current": 800,
"Y2current": 800,
"Z2current": 800,
"fanpwmspeed": 0,
"abortendstophitinit": "1",
"filamentrunoutpininverting": "0",
"filamentrunoutpullup": "1",
"sdslow": "0",
"sdextraslow": "0",
"sdsetting": "0",
"sdsettingtime": 300,
"E0encoderpin": "NoPin",
"E1encoderpin": "NoPin",
"E2encoderpin": "NoPin",
"E3encoderpin": "NoPin",
"E4encoderpin": "NoPin",
"E5encoderpin": "NoPin",
"flowmeterpin": "NoPin",
"filrunoutpin": "NoPin"
}
========== End configuration string ==========
*/
