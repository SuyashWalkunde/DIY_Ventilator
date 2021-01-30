CPAP_params continuous_positive_airway_pressure()
{
  CPAP_params parameters;
  int pressure_knob = get_pressure_knob(pot_pin);
  int oxygen_knob = get_oxygen_knob(oxygen_knob_pin);
  float oxygen_value = 0;
  oxygen_value = get_oxygen_value();
  oxygen_motor.write(oxygen_knob);
  Serial.print("Pressure: ");
  Serial.print(pressure_knob);
  Serial.print("  ");
  Serial.print("oxygen_knob: ");
  Serial.print(oxygen_knob);
  Serial.print("  ");
  motor.write(pressure_knob);
  parameters.pressure = get_AS21_Pressure_difference(AS21_pin);
  parameters.flow = get_flowrate_from_sfm();
  Serial.print("parameters.flow: ");
  Serial.print(parameters.flow);
  Serial.println();
  return parameters;

}
