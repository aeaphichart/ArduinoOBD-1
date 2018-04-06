 #include "ECUGroups.h"
 
 Field ECUGroups[NUM_GROUPS][FIELDS_PER_GROUP] = {
  {FIELD_RPM, FIELD_COOLANT_TEMP, FIELD_L_VOLTAGE, FIELD_BITFIELD_8},
  {FIELD_RPM, FIELD_NA, FIELD_SPEED, FIELD_BITFIELD_4},
  {FIELD_RPM, FIELD_NA, FIELD_THROTTLE_ANGLE, FIELD_THROTTLE_ADJ_POS},
  {FIELD_RPM, FIELD_NA, FIELD_INJ_TIME, FIELD_NA},
  {FIELD_RPM, FIELD_BATT_VOLTAGE, FIELD_COOLANT_TEMP, FIELD_AIR_TEMP},
  {FIELD_RPM, FIELD_NA, FIELD_THROTTLE_ANGLE, FIELD_ALTITUDE_COEFF},
  {FIELD_THROTTLE_ANGLE, FIELD_L_VALUE, FIELD_L_VALUE, FIELD_BITFIELD_4},
  {FIELD_RPM, FIELD_RPM, FIELD_CONTROL_PERCENT, FIELD_NA},
  {FIELD_CONTROL_PERCENT, FIELD_BITFIELD_4, FIELD_COOLANT_TEMP, FIELD_RPM},
  {FIELD_CONTROL_PERCENT, FIELD_L_VOLTAGE, FIELD_PERCENT, FIELD_CONTROL_PERCENT},
  {FIELD_INJ_TIME, FIELD_L_IDLE, FIELD_L_VALUE, FIELD_BITFIELD_8},
  {FIELD_RPM, FIELD_NA, FIELD_PERCENT, FIELD_L_VOLTAGE},

  {FIELD_RPM, FIELD_NA, FIELD_SPEED, FIELD_FUEL_RATE},
  {FIELD_IGN_ANGLE, FIELD_IGN_ANGLE, FIELD_IGN_ANGLE, FIELD_IGN_ANGLE},
  {FIELD_RPM, FIELD_NA, FIELD_IGN_ANGLE, FIELD_IGN_ANGLE},
  {FIELD_RPM, FIELD_NA, FIELD_IGN_ANGLE, FIELD_IGN_ANGLE},
  {FIELD_L_VOLTAGE, FIELD_L_VOLTAGE, FIELD_L_VOLTAGE, FIELD_L_VOLTAGE},
  {FIELD_RPM, FIELD_NA, FIELD_IGN_ANGLE, FIELD_IGN_ANGLE},
  {FIELD_RPM, FIELD_BIT, FIELD_BIT, FIELD_BIT},
  
  {FIELD_RPM, FIELD_NA, FIELD_COOLANT_TEMP, FIELD_BITFIELD_8},
  {FIELD_BITFIELD_4, FIELD_THROTTLE_ADJ_POS, FIELD_THROTTLE_ADJ_POS, FIELD_THROTTLE_ADJ_POS}
};
