// Define this to set a custom name for your generic Mendel,
// Displayed in the LCD "Ready" message
#define CUSTOM_MACHINE_NAME "R2Evo"

//===========================================================================
//=============================Mechanical Settings===========================
//===========================================================================

// coarse Endstop Settings
#define ENDSTOPPULLUPS // Comment this out (using // at the start of the line) to disable the endstop pullup resistors

#ifndef ENDSTOPPULLUPS
  // fine endstop settings: Individual pullups. will be ignored if ENDSTOPPULLUPS is defined
  // #define ENDSTOPPULLUP_XMAX
  // #define ENDSTOPPULLUP_YMAX
  // #define ENDSTOPPULLUP_ZMAX
  // #define ENDSTOPPULLUP_XMIN
  // #define ENDSTOPPULLUP_YMIN
  // #define ENDSTOPPULLUP_ZMIN
  // #define ENDSTOPPULLUP_ZPROBE
  // #define ENDSTOPPULLUP_EMIN
#endif

// Mechanical endstop with COM to ground and NC to Signal uses "false" here (most common setup).
#define X_MIN_ENDSTOP_LOGIC false      // set to true to invert the logic of the endstop.
#define Y_MIN_ENDSTOP_LOGIC false      // set to true to invert the logic of the endstop.
#define Z_MIN_ENDSTOP_LOGIC false      // set to true to invert the logic of the endstop.
#define E_MIN_ENDSTOP_LOGIC false      // set to true to invert the logic of the endstop.
#define X_MAX_ENDSTOP_LOGIC false      // set to true to invert the logic of the endstop.
#define Y_MAX_ENDSTOP_LOGIC false      // set to true to invert the logic of the endstop.
#define Z_MAX_ENDSTOP_LOGIC false      // set to true to invert the logic of the endstop.
#define Z_PROBE_ENDSTOP_LOGIC false      // set to true to invert the logic of the endstop.

// ENDSTOP SETTINGS:
// Sets direction of endstop when homing; 1=MAX, -1=MIN
#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR -1
#define E_HOME_DIR -1

#define min_software_endstops false  // If true, axis won't move to coordinates less than HOME_POS.
#define max_software_endstops true  // If true, axis won't move to coordinates greater than the defined lengths below.


// For Inverting Stepper Enable Pins (Active Low) use 0, Non Inverting (Active High) use 1
#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define E_ENABLE_ON 0      // For all extruder

// Disables axis when it's not being used.
#define DISABLE_X false
#define DISABLE_Y false
#define DISABLE_Z false
#define DISABLE_E false      // For all extruder
#define DISABLE_INACTIVE_EXTRUDER false //disable only inactive extruder and keep active extruder enabled

// Invert the stepper direction. Change (or reverse the motor connector) if an axis goes the wrong way.
#define INVERT_X_DIR false
#define INVERT_Y_DIR false
#define INVERT_Z_DIR false
#define INVERT_E0_DIR false
#define INVERT_E1_DIR true
#define INVERT_E2_DIR false
#define INVERT_E3_DIR false

// Travel limits after homing (units are in mm)
// center in x=93 y=77
#define X_MAX_POS 190
#define X_MIN_POS -20
#define Y_MAX_POS 170
#define Y_MIN_POS 0
#define Z_MAX_POS 260
#define Z_MIN_POS -1.2
#define E_MIN_POS 0

//=====================================================================================
//============================= Bed Manual or Auto Leveling ===========================
//=====================================================================================

// set the rectangle in which to probe in manual or automatic
#define LEFT_PROBE_BED_POSITION 10
#define RIGHT_PROBE_BED_POSITION 200
#define FRONT_PROBE_BED_POSITION 40
#define BACK_PROBE_BED_POSITION 270

#define XY_TRAVEL_SPEED 8000     // X and Y axis travel speed between probes, in mm/min

//If you have enabled the Auto Bed Levelling and are using the same Z Probe for Z Homing,
//it is highly recommended you let this Z_SAFE_HOMING enabled!!!
//#define Z_SAFE_HOMING
#ifdef Z_SAFE_HOMING
  #define Z_SAFE_HOMING_X_POINT (X_MAX_LENGTH/2)    // X point for Z homing when homing all axis (G28) or homing Z
  #define Z_SAFE_HOMING_Y_POINT (Y_MAX_LENGTH/2)    // Y point for Z homing when homing all axis (G28) or homing Z
#endif

//#define ENABLE_AUTO_BED_LEVELING    // Delete the comment to enable (ABL)
//#define Z_PROBE_REPEATABILITY_TEST  // Delete the comment to enable

#ifdef ENABLE_AUTO_BED_LEVELING

  // There are 2 different ways to specify probing locations
  //
  // - "grid" mode
  //   Probe several points in a rectangular grid.
  //   You specify the rectangle and the density of sample points.
  //   This mode is preferred because there are more measurements.
  //
  // - "3-point" mode
  //   Probe 3 arbitrary points on the bed (that aren't colinear)
  //   You specify the XY coordinates of all 3 points.

  // Enable this to sample the bed in a grid (least squares solution)
  // Note: this feature generates 10KB extra code size
  #define AUTO_BED_LEVELING_GRID

  #ifdef AUTO_BED_LEVELING_GRID

      #define MIN_PROBE_EDGE 10 // The probe square sides can be no smaller than this

    // Set the number of grid points per dimension
    // You probably don't need more than 3 (squared=9)
#define AUTO_BED_LEVELING_GRID_POINTS 3

  #else  // not AUTO_BED_LEVELING_GRID

    // Arbitrary points to probe. A simple cross-product
    // is used to estimate the plane of the bed.
#define ABL_PROBE_PT_1_X 10
#define ABL_PROBE_PT_1_Y 220
#define ABL_PROBE_PT_2_X 10
#define ABL_PROBE_PT_2_Y 0
#define ABL_PROBE_PT_3_X 220
#define ABL_PROBE_PT_3_Y 0

  #endif // AUTO_BED_LEVELING_GRID

  // Offsets to the probe relative to the extruder tip (Hotend - Probe)
  // X and Y offsets MUST be INTEGERS
#define X_PROBE_OFFSET_FROM_EXTRUDER 0     // Probe on: -left +right
#define Y_PROBE_OFFSET_FROM_EXTRUDER 35    // Probe on: -front +behind
#define Z_PROBE_OFFSET_FROM_EXTRUDER 13    // -below (always!)per alzare il nozzle alzare i valori ( a -6 il nozzle è più alto che a -7)

#define Z_RAISE_BEFORE_HOMING 10            // (in mm) Raise Z before homing (G28) for Probe Clearance.
                                              // Be sure you have this distance over your Z_MAX_POS in case

#define Z_RAISE_BEFORE_PROBING 20       // much the extruder will be raised before travelling to the first probing point.
#define Z_RAISE_BETWEEN_PROBINGS 5      // much the extruder will be raised when travelling from between next probing points
#define Z_RAISE_AFTER_PROBING 5         // How much the extruder will be raised after the last probing point.

  //#define Z_PROBE_SLED                // turn on if you have a z-probe mounted on a sled like those designed by Charles Bell
  //#define SLED_DOCKING_OFFSET 5       // the extra distance the X axis must travel to pick up the sled. 0 should be fine but you can push it further if you'd like.

  //If defined, the Probe servo will be turned on only during movement and then turned off to avoid jerk
  //The value is the delay to turn the servo off after powered on - depends on the servo speed; 300ms is good value, but you can try lower it.
  //You MUST HAVE the SERVO ENDSTOPS defined to use here a value higher than zero otherwise your code will not compile.

  #define PROBE_SERVO_DEACTIVATION_DELAY 300

  // Support for a dedicated Z PROBE endstop separate from the Z MIN endstop.
  // If you would like to use both a Z PROBE and a Z MIN endstop together or just a Z PROBE with a custom pin, uncomment #define Z_PROBE_ENDSTOP and read the instructions below.
  // If you want to still use the Z min endstop for homing, disable Z_SAFE_HOMING above. Eg; to park the head outside the bed area when homing with G28.
  // WARNING: The Z MIN endstop will need to set properly as it would without a Z PROBE to prevent head crashes and premature stopping during a print.
  // To use a separte Z PROBE endstop, you must have a Z_PROBE_PIN defined in the pins.h file for your control board.
  // If you are using a servo based Z PROBE, you will need to enable NUM_SERVOS, SERVO_ENDSTOPS and SERVO_ENDSTOPS_ANGLES in the R/C Servo below.
  // WARNING: Setting the wrong pin may have unexpected and potentially disastrous outcomes. Use with caution and do your homework.

  //#define Z_PROBE_ENDSTOP
  
#endif // ENABLE_AUTO_BED_LEVELING


// The position of the homing switches
//#define MANUAL_HOME_POSITIONS  // If defined, MANUAL_*_HOME_POS below will be used
//#define BED_CENTER_AT_0_0  // If defined, the center of the bed is at (X=0, Y=0)

//Manual homing switch locations:
#ifdef MANUAL_HOME_POSITIONS
  #define MANUAL_X_HOME_POS 0
  #define MANUAL_Y_HOME_POS 0
  #define MANUAL_Z_HOME_POS 0
#endif

// MOVEMENT SETTINGS
#define HOMING_FEEDRATE {140*60,140*60,4*60,0}      // set the homing speeds (mm/min)

// default settings
#define DEFAULT_AXIS_STEPS_PER_UNIT {80,80,1065,95,1240,1240,1240}      // X, Y, Z, E0, E1, E2, E3 default steps per unit
// MIC: #define DEFAULT_MAX_FEEDRATE {150,150,4,50,50,50,50}      // X, Y, Z, E0, E1, E2, E3 (mm/sec)
#define DEFAULT_MAX_FEEDRATE {150*SPEED_RATIO,150*SPEED_RATIO,4*SPEED_RATIO,50*SPEED_RATIO,50*SPEED_RATIO,50*SPEED_RATIO,50*SPEED_RATIO}      // X, Y, Z, E0, E1, E2, E3 (mm/sec)
#define DEFAULT_RETRACTION_MAX_FEEDRATE {100,100,100,100}                  // E0, E1, E2, E3 (mm/sec)
// MIC: #define DEFAULT_MAX_ACCELERATION {5000,5000,20,5000,5000,5000,5000}      // X, Y, Z, E0, E1, E2, E3 maximum start speed for accelerated moves.
#define DEFAULT_MAX_ACCELERATION {5000*ACCELERATION_RATIO,5000*ACCELERATION_RATIO,20*ACCELERATION_RATIO,5000*ACCELERATION_RATIO,5000*ACCELERATION_RATIO,5000*ACCELERATION_RATIO,5000*ACCELERATION_RATIO}      // X, Y, Z, E0, E1, E2, E3 maximum start speed for accelerated moves.

#define DEFAULT_ACCELERATION 2000      // X, Y, Z and E max acceleration in mm/s^2 for printing moves
#define DEFAULT_RETRACT_ACCELERATION 4000      // E max acceleration in mm/s^2 for retracts
#define DEFAULT_TRAVEL_ACCELERATION 1000      // X, Y, Z acceleration in mm/s^2 for travel (non printing) moves

// Offset of the extruders (uncomment if using more than one and relying on firmware to position when changing).
// The offset has to be X=0, Y=0 for the extruder 0 hotend (default extruder).
// For the other hotends it is their distance from the extruder 0 hotend.
//#define HOTEND_OFFSET_X {0.0, 5.00, 0.0, 0.0} // (in mm) for each extruder, offset of the hotend on the X axis
//#define HOTEND_OFFSET_Y {0.0, 5.00, 0.0, 0.0} // (in mm) for each extruder, offset of the hotend on the Y axis

// The speed change that does not require acceleration (i.e. the software might assume it can be done instantaneously)
#define DEFAULT_XYJERK 15      // (mm/sec)
#define DEFAULT_ZJERK 0.4      // (mm/sec)
#define DEFAULT_EJERK 5      // (mm/sec)

//===========================================================================
//=============================Additional Features===========================
//===========================================================================

// Custom M code points
//#define CUSTOM_M_CODES
#ifdef CUSTOM_M_CODES
  #define CUSTOM_M_CODE_SET_Z_PROBE_OFFSET 851
  #define Z_PROBE_OFFSET_RANGE_MIN -20
  #define Z_PROBE_OFFSET_RANGE_MAX 20
#endif

