install( FILES 

juk_aruco_module_action.h
juk_aruco_module_data.h
juk_control_dji_msg.h
juk_dji_camera_control_msg.h
juk_dji_device_status_msg.h
juk_dji_gps_msg.h
juk_navigation_actions_msg.h
juk_position_data_msg.h
juk_set_target_data_msg.h
reach_msg.h
DESTINATION include/juk_msg )
install(FILES juk_msgConfig.cmake DESTINATION "/usr/local/lib/cmake/juk_msg")
