void synchronized_intermittent_mandatory_ventilation_vc()
{
  
//  timer_init((float)inspiration_trigger_window);
//  while(!trigger_window_elasped)
//  {
//     Serial.println("SIMV-CV");
//  }
  uint32_t inspiration_flow = get_flowrate_from_sfm();
  Serial.print("inspiration_flow: ");
  Serial.print(inspiration_flow);
  Serial.println();
  
}
