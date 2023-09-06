#define AUTO_BED_LEVELING_UBL          // Added by config.ini
#define BAUDRATE 250000                // Added by config.ini
#define BED_MAXTEMP 100                // Added by config.ini
#define BED_MINTEMP 5                  // Added by config.ini
#define BED_OVERSHOOT 10               // Added by config.ini
#define BED_TRAMMING_HEIGHT 0.0        // Added by config.ini
#define BED_TRAMMING_INSET_LFRB { 30, 30, 30, 30 } // Added by config.ini
#define BED_TRAMMING_LEVELING_ORDER { LF, RF, RB, LB } // Added by config.ini
#define BED_TRAMMING_Z_HOP 4.0         // Added by config.ini
#define BLTOUCH                        // Added by config.ini
#define BUSY_WHILE_HEATING             // Added by config.ini
#define COOLER_OVERSHOOT 2             // Added by config.ini
#define CUSTOM_MACHINE_NAME "mecha-octopus" // Added by config.ini
#define DEFAULT_ACCELERATION 3000      // Added by config.ini
#define DEFAULT_AXIS_STEPS_PER_UNIT { 80, 80, 400, 424.9 } // Added by config.ini
#define DEFAULT_EJERK 5.0              // Added by config.ini
#define DEFAULT_KEEPALIVE_INTERVAL 2   // Added by config.ini
#define DEFAULT_KD 114.00              // Added by config.ini
#define DEFAULT_KI 1.08                // Added by config.ini
#define DEFAULT_KP 22.20               // Added by config.ini
#define DEFAULT_LEVELING_FADE_HEIGHT 10.0 // Added by config.ini
#define DEFAULT_MAX_ACCELERATION { 3000, 3000, 100, 10000 } // Added by config.ini
#define DEFAULT_MAX_FEEDRATE { 300, 300, 5, 25 } // Added by config.ini
#define DEFAULT_NOMINAL_FILAMENT_DIA 1.75 // Added by config.ini
#define DEFAULT_RETRACT_ACCELERATION 3000 // Added by config.ini
#define DEFAULT_TRAVEL_ACCELERATION 3000 // Added by config.ini
#define DETECT_BROKEN_ENDSTOP          // Added by config.ini
#define DISABLE_REDUCED_ACCURACY_WARNING // Added by config.ini
#define DISABLE_X false                // Added by config.ini
#define DISABLE_Y false                // Added by config.ini
#define DISABLE_Z false                // Added by config.ini
#define DISPLAY_CHARSET_HD44780 JAPANESE // Added by config.ini
#define DUMMY_THERMISTOR_998_VALUE 25  // Added by config.ini
#define DUMMY_THERMISTOR_999_VALUE 100 // Added by config.ini
#define E0_DRIVER_TYPE TMC2209         // Added by config.ini
#define EEPROM_BOOT_SILENT             // Added by config.ini
#define EEPROM_CHITCHAT                // Added by config.ini
#define EEPROM_SETTINGS                // Added by config.ini
#define ENABLE_LEVELING_FADE_HEIGHT    // Added by config.ini
#define ENDSTOPPULLDOWN_ZMIN_PROBE     // Added by config.ini
#define ENDSTOPPULLUPS                 // Added by config.ini
#define EXTRUDERS 1                    // Added by config.ini
#define EXTRUDE_MAXLENGTH 200          // Added by config.ini
#define EXTRUDE_MINTEMP 170            // Added by config.ini
#define E_ENABLE_ON 0                  // Added by config.ini
#define FAN_SOFT_PWM                   // Added by config.ini
#define FILAMENT_RUNOUT_DISTANCE_MM 100 // Added by config.ini
#define FILAMENT_RUNOUT_SCRIPT "M600"  // Added by config.ini
#define FILAMENT_RUNOUT_SENSOR         // Added by config.ini
#define FIL_RUNOUT_ENABLED_DEFAULT true // Added by config.ini
#define FIL_RUNOUT_STATE LOW           // Added by config.ini
#define G26_MESH_VALIDATION            // Added by config.ini
#define G26_RETRACT_MULTIPLIER 1.0     // Added by config.ini
#define G26_XY_FEEDRATE 20             // Added by config.ini
#define G26_XY_FEEDRATE_TRAVEL 100     // Added by config.ini
#define GRID_MAX_POINTS_X 6            // Added by config.ini
#define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X // Added by config.ini
#define HEATER_0_MAXTEMP 300           // Added by config.ini
#define HEATER_0_MINTEMP 5             // Added by config.ini
#define HOMING_FEEDRATE_MM_M { (50*60), (50*60), (4*60) } // Added by config.ini
#define HOST_KEEPALIVE_FEATURE         // Added by config.ini
#define HOTEND_OVERSHOOT 15            // Added by config.ini
#define INDIVIDUAL_AXIS_HOMING_MENU    // Added by config.ini
#define INVERT_E0_DIR false            // Added by config.ini
#define INVERT_X_DIR true              // Added by config.ini
#define INVERT_Y_DIR true              // Added by config.ini
#define INVERT_Z_DIR false             // Added by config.ini
#define JD_HANDLE_SMALL_SEGMENTS       // Added by config.ini
#define JUNCTION_DEVIATION_MM 0.013    // Added by config.ini
#define LCD_BED_TRAMMING               // Added by config.ini
#define LCD_INFO_SCREEN_STYLE 0        // Added by config.ini
#define LCD_LANGUAGE en                // Added by config.ini
#define LEVELED_SEGMENT_LENGTH 5.0     // Added by config.ini
#define MANUAL_PROBE_START_Z 0.2       // Added by config.ini
#define MAX_BED_POWER 255              // Added by config.ini
#define MAX_CHAMBER_POWER 255          // Added by config.ini
#define MAX_SOFTWARE_ENDSTOPS          // Added by config.ini
#define MAX_SOFTWARE_ENDSTOP_X         // Added by config.ini
#define MAX_SOFTWARE_ENDSTOP_Y         // Added by config.ini
#define MAX_SOFTWARE_ENDSTOP_Z         // Added by config.ini
#define MESH_EDIT_GFX_OVERLAY          // Added by config.ini
#define MESH_INSET 1                   // Added by config.ini
#define MESH_TEST_BED_TEMP 60          // Added by config.ini
#define MESH_TEST_HOTEND_TEMP 205      // Added by config.ini
#define MESH_TEST_LAYER_HEIGHT 0.2     // Added by config.ini
#define MESH_TEST_NOZZLE_SIZE 0.4      // Added by config.ini
#define MIN_SOFTWARE_ENDSTOPS          // Added by config.ini
#define MIN_SOFTWARE_ENDSTOP_X         // Added by config.ini
#define MIN_SOFTWARE_ENDSTOP_Y         // Added by config.ini
#define MIN_SOFTWARE_ENDSTOP_Z         // Added by config.ini
#define MOTHERBOARD BOARD_BTT_OCTOPUS_V1_1 // Added by config.ini
#define MULTIPLE_PROBING 2             // Added by config.ini
#define NEOPIXEL_BRIGHTNESS 127        // Added by config.ini
#define NEOPIXEL_IS_SEQUENTIAL         // Added by config.ini
#define NEOPIXEL_LED                   // Added by config.ini
#define NEOPIXEL_PIXELS 144            // Added by config.ini
#define NEOPIXEL_TYPE NEO_GRB          // Added by config.ini
#define NOZZLE_PARK_FEATURE            // Added by config.ini
#define NOZZLE_PARK_MOVE 0             // Added by config.ini
#define NOZZLE_PARK_POINT { (X_MIN_POS + 10), (Y_MAX_POS - 10), 20 } // Added by config.ini
#define NOZZLE_PARK_XY_FEEDRATE 100    // Added by config.ini
#define NOZZLE_PARK_Z_FEEDRATE 5       // Added by config.ini
#define NOZZLE_PARK_Z_RAISE_MIN 2      // Added by config.ini
#define NOZZLE_TO_PROBE_OFFSET { -31.4, -40.1, 0 } // Added by config.ini
#define NUM_RUNOUT_SENSORS 1           // Added by config.ini
#define PIDTEMP                        // Added by config.ini
#define PID_AUTOTUNE_MENU              // Added by config.ini
#define PID_FUNCTIONAL_RANGE 10        // Added by config.ini
#define PID_K1 0.95                    // Added by config.ini
#define PID_MAX 255                    // Added by config.ini
#define PREHEAT_1_FAN_SPEED 0          // Added by config.ini
#define PREHEAT_1_LABEL "PLA"          // Added by config.ini
#define PREHEAT_1_TEMP_BED 70          // Added by config.ini
#define PREHEAT_1_TEMP_CHAMBER 35      // Added by config.ini
#define PREHEAT_1_TEMP_HOTEND 180      // Added by config.ini
#define PREHEAT_2_FAN_SPEED 0          // Added by config.ini
#define PREHEAT_2_LABEL "ABS"          // Added by config.ini
#define PREHEAT_2_TEMP_BED 110         // Added by config.ini
#define PREHEAT_2_TEMP_CHAMBER 35      // Added by config.ini
#define PREHEAT_2_TEMP_HOTEND 240      // Added by config.ini
#define PREVENT_COLD_EXTRUSION         // Added by config.ini
#define PREVENT_LENGTHY_EXTRUDE        // Added by config.ini
#define PRINTCOUNTER                   // Added by config.ini
#define PRINTCOUNTER_SAVE_INTERVAL 60  // Added by config.ini
#define PRINTER_EVENT_LEDS             // Added by config.ini
#define PRINTJOB_TIMER_AUTOSTART       // Added by config.ini
#define PROBE_ENABLE_DISABLE           // Added by config.ini
#define PROBING_MARGIN 10              // Added by config.ini
#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER // Added by config.ini
#define RESTORE_LEVELING_AFTER_G28     // Added by config.ini
#define SDSUPPORT                      // Added by config.ini
#define SD_CHECK_AND_RETRY             // Added by config.ini
#define SEGMENT_LEVELED_MOVES          // Added by config.ini
#define SERIAL_PORT 1                  // Added by config.ini
#define SERIAL_PORT_2 2                // Added by config.ini
#define SERIAL_PORT_3 -1               // Added by config.ini
#define SERVO_DELAY { 50 }             // Added by config.ini
#define SOFT_ENDSTOPS_MENU_ITEM        // Added by config.ini
#define SOFT_PWM_SCALE 0               // Added by config.ini
#define SPEAKER                        // Added by config.ini
#define STRING_CONFIG_H_AUTHOR "(Majik, octopus 1.1 config marlin bf2.1.2)" // Added by config.ini
#define S_CURVE_ACCELERATION           // Added by config.ini
#define TEMP_BED_HYSTERESIS 3          // Added by config.ini
#define TEMP_BED_RESIDENCY_TIME 10     // Added by config.ini
#define TEMP_BED_WINDOW 1              // Added by config.ini
#define TEMP_HYSTERESIS 3              // Added by config.ini
#define TEMP_RESIDENCY_TIME 10         // Added by config.ini
#define TEMP_SENSOR_0 1                // Added by config.ini
#define TEMP_SENSOR_1 0                // Added by config.ini
#define TEMP_SENSOR_2 0                // Added by config.ini
#define TEMP_SENSOR_3 0                // Added by config.ini
#define TEMP_SENSOR_4 0                // Added by config.ini
#define TEMP_SENSOR_5 0                // Added by config.ini
#define TEMP_SENSOR_6 0                // Added by config.ini
#define TEMP_SENSOR_7 0                // Added by config.ini
#define TEMP_SENSOR_BED 1              // Added by config.ini
#define TEMP_SENSOR_BOARD 0            // Added by config.ini
#define TEMP_SENSOR_CHAMBER 0          // Added by config.ini
#define TEMP_SENSOR_COOLER 0           // Added by config.ini
#define TEMP_SENSOR_PROBE 0            // Added by config.ini
#define TEMP_SENSOR_REDUNDANT 0        // Added by config.ini
#define TEMP_SENSOR_SOC 100            // Added by config.ini
#define TEMP_WINDOW 1                  // Added by config.ini
#define THERMAL_PROTECTION_BED         // Added by config.ini
#define THERMAL_PROTECTION_HOTENDS     // Added by config.ini
#define UBL_HILBERT_CURVE              // Added by config.ini
#define UBL_MESH_EDIT_MOVES_Z          // Added by config.ini
#define UBL_MESH_WIZARD                // Added by config.ini
#define UBL_SAVE_ACTIVE_ON_M500        // Added by config.ini
#define USE_PROBE_FOR_Z_HOMING         // Added by config.ini
#define VALIDATE_HOMING_ENDSTOPS       // Added by config.ini
#define XY_PROBE_FEEDRATE (133*60)     // Added by config.ini
#define X_BED_SIZE 300                 // Added by config.ini
#define X_DRIVER_TYPE TMC2209          // Added by config.ini
#define X_ENABLE_ON 0                  // Added by config.ini
#define X_HOME_DIR -1                  // Added by config.ini
#define X_MAX_ENDSTOP_HIT_STATE HIGH   // Added by config.ini
#define X_MAX_POS X_BED_SIZE           // Added by config.ini
#define X_MIN_ENDSTOP_HIT_STATE HIGH   // Added by config.ini
#define X_MIN_POS 0                    // Added by config.ini
#define Y_BED_SIZE 300                 // Added by config.ini
#define Y_DRIVER_TYPE TMC2209          // Added by config.ini
#define Y_ENABLE_ON 0                  // Added by config.ini
#define Y_HOME_DIR -1                  // Added by config.ini
#define Y_MAX_ENDSTOP_HIT_STATE HIGH   // Added by config.ini
#define Y_MAX_POS Y_BED_SIZE           // Added by config.ini
#define Y_MIN_ENDSTOP_HIT_STATE HIGH   // Added by config.ini
#define Y_MIN_POS 0                    // Added by config.ini
#define Z_AFTER_PROBING 5              // Added by config.ini
#define Z_CLEARANCE_BETWEEN_PROBES 5   // Added by config.ini
#define Z_CLEARANCE_DEPLOY_PROBE 10    // Added by config.ini
#define Z_CLEARANCE_MULTI_PROBE 5      // Added by config.ini
#define Z_DRIVER_TYPE TMC2209          // Added by config.ini
#define Z_ENABLE_ON 0                  // Added by config.ini
#define Z_HOME_DIR -1                  // Added by config.ini
#define Z_MAX_ENDSTOP_HIT_STATE HIGH   // Added by config.ini
#define Z_MAX_POS 300                  // Added by config.ini
#define Z_MIN_ENDSTOP_HIT_STATE HIGH   // Added by config.ini
#define Z_MIN_POS 0                    // Added by config.ini
#define Z_MIN_PROBE_ENDSTOP_HIT_STATE HIGH // Added by config.ini
#define Z_MIN_PROBE_REPEATABILITY_TEST // Added by config.ini
#define Z_PROBE_FEEDRATE_FAST (4*60)   // Added by config.ini
#define Z_PROBE_FEEDRATE_SLOW (Z_PROBE_FEEDRATE_FAST / 2) // Added by config.ini
#define Z_PROBE_LOW_POINT -2           // Added by config.ini
#define Z_PROBE_OFFSET_RANGE_MAX 20    // Added by config.ini
#define Z_PROBE_OFFSET_RANGE_MIN -20   // Added by config.ini
#define Z_SAFE_HOMING                  // Added by config.ini
#define Z_SAFE_HOMING_X_POINT X_CENTER // Added by config.ini
#define Z_SAFE_HOMING_Y_POINT Y_CENTER // Added by config.ini
#define ADAPTIVE_STEP_SMOOTHING        // Added by config.ini
#define ADVANCED_OK                    // Added by config.ini
#define ADVANCED_PAUSE_FEATURE         // Added by config.ini
#define ADVANCED_PAUSE_PURGE_FEEDRATE 3 // Added by config.ini
#define ADVANCED_PAUSE_PURGE_LENGTH 0  // Added by config.ini
#define ADVANCED_PAUSE_RESUME_PRIME 0  // Added by config.ini
#define ARC_SUPPORT                    // Added by config.ini
#define AUTOTEMP                       // Added by config.ini
#define AUTOTEMP_FACTOR 0.1f           // Added by config.ini
#define AUTOTEMP_MAX 250               // Added by config.ini
#define AUTOTEMP_MIN 210               // Added by config.ini
#define AUTOTEMP_OLDWEIGHT 0.98        // Added by config.ini
#define AUTO_REPORT_POSITION           // Added by config.ini
#define AUTO_REPORT_SD_STATUS          // Added by config.ini
#define AUTO_REPORT_TEMPERATURES       // Added by config.ini
#define AXIS_RELATIVE_MODES { false, false, false, false } // Added by config.ini
#define BABYSTEPPING                   // Added by config.ini
#define BABYSTEP_DISPLAY_TOTAL         // Added by config.ini
#define BABYSTEP_GFX_OVERLAY           // Added by config.ini
#define BABYSTEP_MULTIPLICATOR_XY 1    // Added by config.ini
#define BABYSTEP_MULTIPLICATOR_Z 1     // Added by config.ini
#define BABYSTEP_ZPROBE_OFFSET         // Added by config.ini
#define BED_CHECK_INTERVAL 5000        // Added by config.ini
#define BINARY_FILE_TRANSFER           // Added by config.ini
#define BLOCK_BUFFER_SIZE 16           // Added by config.ini
#define BLTOUCH_HS_EXTRA_CLEARANCE 7   // Added by config.ini
#define BLTOUCH_HS_MODE true           // Added by config.ini
#define BOOTSCREEN_TIMEOUT 4000        // Added by config.ini
#define BOOT_MARLIN_LOGO_ANIMATED      // Added by config.ini
#define BOOT_MARLIN_LOGO_SMALL         // Added by config.ini
#define BUFSIZE 4                      // Added by config.ini
#define CANCEL_OBJECTS                 // Added by config.ini
#define CANCEL_OBJECTS_REPORTING       // Added by config.ini
#define CHAMBER_AUTO_FAN_PIN -1        // Added by config.ini
#define CHAMBER_AUTO_FAN_SPEED 255     // Added by config.ini
#define CHAMBER_AUTO_FAN_TEMPERATURE 30 // Added by config.ini
#define CHAMBER_CHECK_INTERVAL 5000    // Added by config.ini
#define CHOPPER_TIMING CHOPPER_DEFAULT_24V // Added by config.ini
#define CONFIGURATION_EMBEDDING        // Added by config.ini
#define CONTROLLER_FAN_PIN -1          // Added by config.ini
#define COOLER_AUTO_FAN_PIN -1         // Added by config.ini
#define COOLER_AUTO_FAN_SPEED 255      // Added by config.ini
#define COOLER_AUTO_FAN_TEMPERATURE 18 // Added by config.ini
#define CURRENT_STEP_DOWN 50           // Added by config.ini
#define CUSTOM_FIRMWARE_UPLOAD         // Added by config.ini
#define DEFAULT_MINIMUMFEEDRATE 0.0    // Added by config.ini
#define DEFAULT_MINSEGMENTTIME 20000   // Added by config.ini
#define DEFAULT_MINTRAVELFEEDRATE 0.0  // Added by config.ini
#define DEFAULT_STEPPER_TIMEOUT_SEC 120 // Added by config.ini
#define DEFAULT_VOLUMETRIC_EXTRUDER_LIMIT 0.00 // Added by config.ini
#define DISABLE_IDLE_E                 // Added by config.ini
#define DISABLE_IDLE_X                 // Added by config.ini
#define DISABLE_IDLE_Y                 // Added by config.ini
#define DISABLE_IDLE_Z                 // Added by config.ini
#define DOUBLECLICK_FOR_Z_BABYSTEPPING // Added by config.ini
#define DOUBLECLICK_MAX_INTERVAL 1250  // Added by config.ini
#define E0_AUTO_FAN_PIN PE5            // Added by config.ini
#define E0_CHAIN_POS -1                // Added by config.ini
#define E0_CURRENT 800                 // Added by config.ini
#define E0_HYBRID_THRESHOLD 30         // Added by config.ini
#define E0_MICROSTEPS 16               // Added by config.ini
#define E0_RSENSE 0.11                 // Added by config.ini
#define E1_HYBRID_THRESHOLD 30         // Added by config.ini
#define E2_HYBRID_THRESHOLD 30         // Added by config.ini
#define E3_HYBRID_THRESHOLD 30         // Added by config.ini
#define E4_HYBRID_THRESHOLD 30         // Added by config.ini
#define E5_HYBRID_THRESHOLD 30         // Added by config.ini
#define E6_HYBRID_THRESHOLD 30         // Added by config.ini
#define E7_HYBRID_THRESHOLD 30         // Added by config.ini
#define EMERGENCY_PARSER               // Added by config.ini
#define ENCODER_100X_STEPS_PER_SEC 80  // Added by config.ini
#define ENCODER_10X_STEPS_PER_SEC 30   // Added by config.ini
#define ENCODER_RATE_MULTIPLIER        // Added by config.ini
#define EVENT_GCODE_SD_ABORT "G28XY"   // Added by config.ini
#define EXTENDED_CAPABILITIES_REPORT   // Added by config.ini
#define EXTRUDER_AUTO_FAN_SPEED 255    // Added by config.ini
#define EXTRUDER_AUTO_FAN_TEMPERATURE 50 // Added by config.ini
#define FANMUX0_PIN -1                 // Added by config.ini
#define FANMUX1_PIN -1                 // Added by config.ini
#define FANMUX2_PIN -1                 // Added by config.ini
#define FASTER_GCODE_PARSER            // Added by config.ini
#define FILAMENT_CHANGE_ALERT_BEEPS 3  // Added by config.ini
#define FILAMENT_CHANGE_FAST_LOAD_ACCEL 25 // Added by config.ini
#define FILAMENT_CHANGE_FAST_LOAD_FEEDRATE 6 // Added by config.ini
#define FILAMENT_CHANGE_FAST_LOAD_LENGTH 30 // Added by config.ini
#define FILAMENT_CHANGE_SLOW_LOAD_FEEDRATE 6 // Added by config.ini
#define FILAMENT_CHANGE_SLOW_LOAD_LENGTH 0 // Added by config.ini
#define FILAMENT_CHANGE_UNLOAD_ACCEL 25 // Added by config.ini
#define FILAMENT_CHANGE_UNLOAD_FEEDRATE 10 // Added by config.ini
#define FILAMENT_CHANGE_UNLOAD_LENGTH 30 // Added by config.ini
#define FILAMENT_LOAD_UNLOAD_GCODES    // Added by config.ini
#define FILAMENT_UNLOAD_PURGE_DELAY 5000 // Added by config.ini
#define FILAMENT_UNLOAD_PURGE_FEEDRATE 25 // Added by config.ini
#define FILAMENT_UNLOAD_PURGE_LENGTH 8 // Added by config.ini
#define FILAMENT_UNLOAD_PURGE_RETRACT 13 // Added by config.ini
#define FINE_MANUAL_MOVE 0.025         // Added by config.ini
#define GCODE_CASE_INSENSITIVE         // Added by config.ini
#define GCODE_QUOTED_STRINGS           // Added by config.ini
#define HOLD_MULTIPLIER 0.5            // Added by config.ini
#define HOMING_BUMP_DIVISOR { 2, 2, 4 } // Added by config.ini
#define HOMING_BUMP_MM { 5, 5, 2 }     // Added by config.ini
#define HOST_ACTION_COMMANDS           // Added by config.ini
#define HOST_PAUSE_M76                 // Added by config.ini
#define HOST_PROMPT_SUPPORT            // Added by config.ini
#define HOST_SHUTDOWN_MENU_ITEM        // Added by config.ini
#define HOST_START_MENU_ITEM           // Added by config.ini
#define HOST_STATUS_NOTIFICATIONS      // Added by config.ini
#define INTERPOLATE true               // Added by config.ini
#define I_HYBRID_THRESHOLD 3           // Added by config.ini
#define J_HYBRID_THRESHOLD 3           // Added by config.ini
#define K_HYBRID_THRESHOLD 3           // Added by config.ini
#define LCD_INFO_MENU                  // Added by config.ini
#define LED_COLOR_PRESETS              // Added by config.ini
#define LED_CONTROL_MENU               // Added by config.ini
#define LED_USER_PRESET_BLUE 0         // Added by config.ini
#define LED_USER_PRESET_BRIGHTNESS 255 // Added by config.ini
#define LED_USER_PRESET_GREEN 128      // Added by config.ini
#define LED_USER_PRESET_RED 255        // Added by config.ini
#define LED_USER_PRESET_WHITE 255      // Added by config.ini
#define LONG_FILENAME_HOST_SUPPORT     // Added by config.ini
#define LONG_FILENAME_WRITE_SUPPORT    // Added by config.ini
#define M114_DETAIL                    // Added by config.ini
#define M115_GEOMETRY_REPORT           // Added by config.ini
#define MANUAL_E_MOVES_RELATIVE        // Added by config.ini
#define MANUAL_FEEDRATE { 50*60, 50*60, 4*60, 2*60 } // Added by config.ini
#define MAX_ARC_SEGMENT_MM 1.0         // Added by config.ini
#define MAX_CMD_SIZE 96                // Added by config.ini
#define MENU_HOLLOW_FRAME              // Added by config.ini
#define MICROSTEP_MODES { 16, 16, 16, 16, 16, 16 } // Added by config.ini
#define MINIMUM_PLANNER_SPEED 0.05     // Added by config.ini
#define MIN_ARC_SEGMENT_MM 0.1         // Added by config.ini
#define MIN_CIRCLE_SEGMENTS 72         // Added by config.ini
#define MIN_STEPS_PER_SEGMENT 6        // Added by config.ini
#define MONITOR_DRIVER_STATUS          // Added by config.ini
#define MOVE_Z_IDLE_MULTIPLICATOR 1    // Added by config.ini
#define MOVE_Z_WHEN_IDLE               // Added by config.ini
#define MULTISTEPPING_LIMIT 16         // Added by config.ini
#define N_ARC_CORRECTION 25            // Added by config.ini
#define PAREN_COMMENTS                 // Added by config.ini
#define PAUSE_PARK_NOZZLE_TIMEOUT 45   // Added by config.ini
#define PAUSE_PARK_NO_STEPPER_TIMEOUT  // Added by config.ini
#define PAUSE_PARK_RETRACT_FEEDRATE 60 // Added by config.ini
#define PAUSE_PARK_RETRACT_LENGTH 2    // Added by config.ini
#define PE_LEDS_COMPLETED_TIME (30*60) // Added by config.ini
#define PROBE_DEPLOY_STOW_MENU         // Added by config.ini
#define PROPORTIONAL_FONT_RATIO 1.0    // Added by config.ini
#define REPORT_CURRENT_CHANGE          // Added by config.ini
#define REPORT_FAN_CHANGE              // Added by config.ini
#define SCROLL_LONG_FILENAMES          // Added by config.ini
#define SDCARD_CONNECTION ONBOARD      // Added by config.ini
#define SDCARD_RATHERRECENTFIRST       // Added by config.ini
#define SD_FINISHED_RELEASECOMMAND "M84" // Added by config.ini
#define SD_FINISHED_STEPPERRELEASE true // Added by config.ini
#define SD_MENU_CONFIRM_START          // Added by config.ini
#define SD_PROCEDURE_DEPTH 1           // Added by config.ini
#define SERIAL_FLOAT_PRECISION 4       // Added by config.ini
#define SERIAL_OVERRUN_PROTECTION      // Added by config.ini
#define SERVICE_WARNING_BUZZES 3       // Added by config.ini
#define SHOW_BOOTSCREEN                // Added by config.ini
#define SHOW_ELAPSED_TIME              // Added by config.ini
#define SHOW_PROGRESS_PERCENT          // Added by config.ini
#define SLOWDOWN                       // Added by config.ini
#define SLOWDOWN_DIVISOR 2             // Added by config.ini
#define SOC_MAXTEMP 85                 // Added by config.ini
#define SOFT_RESET_ON_KILL             // Added by config.ini
#define SOFT_RESET_VIA_SERIAL          // Added by config.ini
#define SOUND_ON_DEFAULT               // Added by config.ini
#define STATUS_BED_ANIM                // Added by config.ini
#define STATUS_CHAMBER_ANIM            // Added by config.ini
#define STATUS_HOTEND_ANIM             // Added by config.ini
#define STATUS_HOTEND_INVERTED         // Added by config.ini
#define STATUS_MESSAGE_SCROLLING       // Added by config.ini
#define STEALTHCHOP_E                  // Added by config.ini
#define STEALTHCHOP_XY                 // Added by config.ini
#define STEALTHCHOP_Z                  // Added by config.ini
#define STEP_STATE_E HIGH              // Added by config.ini
#define STEP_STATE_X HIGH              // Added by config.ini
#define STEP_STATE_Y HIGH              // Added by config.ini
#define STEP_STATE_Z HIGH              // Added by config.ini
#define STOP_ON_ERROR                  // Added by config.ini
#define TEMP_SENSOR_AD595_GAIN 1.0     // Added by config.ini
#define TEMP_SENSOR_AD595_OFFSET 0.0   // Added by config.ini
#define TEMP_SENSOR_AD8495_GAIN 1.0    // Added by config.ini
#define TEMP_SENSOR_AD8495_OFFSET 0.0  // Added by config.ini
#define THERMAL_PROTECTION_BED_HYSTERESIS 2 // Added by config.ini
#define THERMAL_PROTECTION_BED_PERIOD 20 // Added by config.ini
#define THERMAL_PROTECTION_CHAMBER_HYSTERESIS 2 // Added by config.ini
#define THERMAL_PROTECTION_CHAMBER_PERIOD 20 // Added by config.ini
#define THERMAL_PROTECTION_COOLER_HYSTERESIS 3 // Added by config.ini
#define THERMAL_PROTECTION_COOLER_PERIOD 10 // Added by config.ini
#define THERMAL_PROTECTION_HYSTERESIS 4 // Added by config.ini
#define THERMAL_PROTECTION_PERIOD 40   // Added by config.ini
#define THERMAL_PROTECTION_SOC         // Added by config.ini
#define THERMOCOUPLE_MAX_ERRORS 15     // Added by config.ini
#define TMC_DEBUG                      // Added by config.ini
#define TX_BUFFER_SIZE 0               // Added by config.ini
#define ULTIPANEL_FEEDMULTIPLY         // Added by config.ini
#define USE_WATCHDOG                   // Added by config.ini
#define UTF_FILENAME_SUPPORT           // Added by config.ini
#define U_HYBRID_THRESHOLD 3           // Added by config.ini
#define V_HYBRID_THRESHOLD 3           // Added by config.ini
#define WATCH_BED_TEMP_INCREASE 2      // Added by config.ini
#define WATCH_BED_TEMP_PERIOD 60       // Added by config.ini
#define WATCH_CHAMBER_TEMP_INCREASE 2  // Added by config.ini
#define WATCH_CHAMBER_TEMP_PERIOD 60   // Added by config.ini
#define WATCH_COOLER_TEMP_INCREASE 3   // Added by config.ini
#define WATCH_COOLER_TEMP_PERIOD 60    // Added by config.ini
#define WATCH_TEMP_INCREASE 2          // Added by config.ini
#define WATCH_TEMP_PERIOD 40           // Added by config.ini
#define W_HYBRID_THRESHOLD 3           // Added by config.ini
#define X2_HYBRID_THRESHOLD 100        // Added by config.ini
#define XYZ_HOLLOW_FRAME               // Added by config.ini
#define X_CHAIN_POS -1                 // Added by config.ini
#define X_CURRENT 800                  // Added by config.ini
#define X_CURRENT_HOME X_CURRENT       // Added by config.ini
#define X_HYBRID_THRESHOLD 100         // Added by config.ini
#define X_MICROSTEPS 16                // Added by config.ini
#define X_RSENSE 0.11                  // Added by config.ini
#define Y2_HYBRID_THRESHOLD 100        // Added by config.ini
#define Y_CHAIN_POS -1                 // Added by config.ini
#define Y_CURRENT 800                  // Added by config.ini
#define Y_CURRENT_HOME Y_CURRENT       // Added by config.ini
#define Y_HYBRID_THRESHOLD 100         // Added by config.ini
#define Y_MICROSTEPS 16                // Added by config.ini
#define Y_RSENSE 0.11                  // Added by config.ini
#define Z2_HYBRID_THRESHOLD 3          // Added by config.ini
#define Z3_HYBRID_THRESHOLD 3          // Added by config.ini
#define Z4_HYBRID_THRESHOLD 3          // Added by config.ini
#define Z_CHAIN_POS -1                 // Added by config.ini
#define Z_CURRENT 800                  // Added by config.ini
#define Z_CURRENT_HOME Z_CURRENT       // Added by config.ini
#define Z_HYBRID_THRESHOLD 3           // Added by config.ini
#define Z_MICROSTEPS 16                // Added by config.ini
#define Z_RSENSE 0.11                  // Added by config.ini
#define CONFIGURATION_H_VERSION 02010300 // Added by config.ini
#define CONFIGURATION_ADV_H_VERSION 02010300 // Added by config.ini
