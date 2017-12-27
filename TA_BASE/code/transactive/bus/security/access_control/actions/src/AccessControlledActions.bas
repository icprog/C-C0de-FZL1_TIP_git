' File: AccessControlledActions.bas
' Created: 31/05/2006 2:05:54 PM
'
' This file is automatically generated from 9999D02170002-Access_Controlled_Actions_Register.xls
' Version: 14.01, Status: Draft, Dated: 04 May 06
'
' DO NOT MODIFY
'
Attribute VB_Name = "AccessControlledActions"
Option Explicit

Public Enum ActionType
  aca_AID_SET_CONTROLLER_FUNCTION = 1
  aca_ACKNOWLEDGE_ALARM = 2
  aca_ADD_COMMENT_TO_ALARM = 3
  aca_CLOSE_ALARM = 4
  aca_ADD_ALARM_RULE = 5
  aca_ALARM_ATTACHMENT_ADD = 6
  aca_ALARM_ATTACHMENT_DELETE = 7
  aca_ALARM_ATTACHMENT_VIEW = 8
  aca_REMOVE_ALARM_RULE = 9
  aca_SHOW_ALL_SYSTEM_ALARM_INHIBITION = 10
  aca_SUPER_REMOVE_ALARM_RULE = 11
  aca_RUN_APPLICATION  = 12
  aca_ARCHIVE_DELETE = 13
  aca_ARCHIVE_MANUAL = 14
  aca_ARCHIVE_RESTORE = 15
  aca_ARCHIVE_TRANSFER = 16
  aca_CONTROL_CAMERA = 17
  aca_VI_OVERRIDE_SWITCH_CODEC_LOCK = 18
  aca_CE_CONFIGURE_ACTION_GROUPS = 19
  aca_CE_CONFIGURE_AGENTS = 20
  aca_CE_CONFIGURE_ALARM_PLAN_ASSOCIATIONS = 21
  aca_CE_CONFIGURE_ALARM_RULES = 22
  aca_CE_CONFIGURE_ALARM_SEVERITIES = 23
  aca_CE_CONFIGURE_ALARM_TYPES = 24
  aca_CE_CONFIGURE_APID_ALGORITHMS = 25
  aca_CE_CONFIGURE_APPLICATIONS = 26
  aca_CE_CONFIGURE_ATS_BRANCH_TRACKS = 27
  aca_CE_CONFIGURE_ATS_FIXED_BLOCK_MAP = 28
  aca_CE_CONFIGURE_ATS_MSS_ZONE = 29
  aca_CE_CONFIGURE_ATS_PLATFORM = 30
  aca_CE_CONFIGURE_ATS_POWER_ENTITY_MAP = 31
  aca_CE_CONFIGURE_ATS_PSD_ENTITY_MAP = 32
  aca_CE_CONFIGURE_ATS_TWP_ENTITY_MAP = 33
  aca_CE_CONFIGURE_BANNER = 34
  aca_CE_CONFIGURE_CAMERAS = 35
  aca_CE_CONFIGURE_CONGESTION_PROFILES = 36
  aca_CE_CONFIGURE_CONGESTION_SCHEDULES = 37
  aca_CE_CONFIGURE_CONGESTION_ZONES = 38
  aca_CE_CONFIGURE_CONTROL_STATION = 39
  aca_CE_CONFIGURE_ECS_MASTER_MODES = 40
  aca_CE_CONFIGURE_ECS_STATION_MODES = 41
  aca_CE_CONFIGURE_ECS_ZONES = 42
  aca_CE_CONFIGURE_ENTITIES = 43
  aca_CE_CONFIGURE_EVENT_COLOURS = 44
  aca_CE_CONFIGURE_EVENT_PLAN_ASSOCIATIONS = 45
  aca_CE_CONFIGURE_EXPONENTIAL_ALGORITHMS = 46
  aca_CE_CONFIGURE_INCIDENT_DETECTION_ZONES = 47
  aca_CE_CONFIGURE_ITRANSPORT_IOR = 48
  aca_CE_CONFIGURE_LOCATIONS = 49
  aca_CE_CONFIGURE_MESSAGE_TYPES = 50
  aca_CE_CONFIGURE_MMS_SCHEDULING = 51
  aca_CE_CONFIGURE_MOVING_AVERAGE_ALGORITHMS = 52
  aca_CE_CONFIGURE_ONLINE_PRINTERS = 53
  aca_CE_CONFIGURE_OPERATORS = 54
  aca_CE_CONFIGURE_EVENT_TRIGGERING = 55
  aca_CE_CONFIGURE_PA_STATION_DVA_MESSAGES = 56
  aca_CE_CONFIGURE_PA_STATIONS = 57
  aca_CE_CONFIGURE_PA_TRAIN_DVA_MESSAGES = 58
  aca_CE_CONFIGURE_PA_ZONE_GROUPS = 59
  aca_CE_CONFIGURE_PA_ZONES = 60
  aca_CE_CONFIGURE_PROFILES = 61
  aca_CE_CONFIGURE_RECORDING_UNITS = 62
  aca_CE_CONFIGURE_REGION = 63
  aca_CE_CONFIGURE_RIGHTS = 64
  aca_CE_CONFIGURE_SCADA = 65
  aca_CE_CONFIGURE_SCADA_DISPLAYS = 66
  aca_CE_CONFIGURE_SEQUENCES = 67
  aca_CE_CONFIGURE_SERVER = 68
  aca_CE_CONFIGURE_SOUNDFILE = 69
  aca_CE_CONFIGURE_STD_NRML_DEVIATE_ALGORITHMS = 70
  aca_CE_CONFIGURE_SUBSYSTEMS = 71
  aca_CE_CONFIGURE_SYSTEM_CONTROLLER_GROUPS = 72
  aca_CE_CONFIGURE_SYSTEM_CONTROLLERS = 73
  aca_CE_CONFIGURE_TEXT_MESSAGING = 74
  aca_CE_CONFIGURE_TIS_RATIS_DESTINATIONS = 75
  aca_CE_CONFIGURE_TIS_RATIS_TAGS  = 76
  aca_CE_CONFIGURE_TRAFFIC_DETECTORS = 77
  aca_CE_CONFIGURE_TRAVEL_TIME_PROFILES = 78
  aca_CE_CONFIGURE_TRAVEL_TIME_ROUTES = 79
  aca_CE_CONFIGURE_TRAVEL_TIME_SCHEDULES = 80
  aca_CE_CONFIGURE_TRAVEL_TIME_SEGMENTS = 81
  aca_CE_CONFIGURE_TRENDS = 82
  aca_CE_CONFIGURE_VI_STATIONS = 83
  aca_CE_CONFIGURE_VI_TRIGGERING_EVENTS = 84
  aca_CE_CONFIGURE_VIDEO_OUTPUT_GROUPS = 85
  aca_CE_MODIFY_EVENT_PLAN_ASSOCIATIONS = 86
  aca_CONGESTION_ZONE_RESET_MANUAL_LEVEL = 87
  aca_CONGESTION_ZONE_SET_LEVEL = 88
  aca_QUICK_TOOLS = 89
  aca_DISPLAY_LOCATION = 90
  aca_DISPLAY_NAME_LOCATION = 91
  aca_SELECT_LOCATION = 92
  aca_CONTROL_STATION_CHANGE_OPERATOR = 93
  aca_CONTROL_STATION_CHANGE_PASSWORD = 94
  aca_CONTROL_STATION_CHANGE_PROFILE = 95
  aca_CONTROL_STATION_EXIT = 96
  aca_CONTROL_STATION_OVERRIDE = 97
  aca_CONTROL_STATION_RESTART = 98
  aca_DATA_NODE_MMS_INHIBIT = 99
  aca_DATA_NODE_MMS_UNINHIBIT = 100
  aca_DATA_NODE_NOTES = 101
  aca_DATA_NODE_RAISE_JOB_REQUEST = 102
  aca_DATA_NODE_TAG = 103
  aca_DATA_NODE_TAG_PTW = 104
  aca_DATA_POINT_ALARM_INHIBIT = 105
  aca_DATA_POINT_ALARM_UNINHIBIT = 106
  aca_DATA_POINT_CONTROL_INHIBIT = 107
  aca_DATA_POINT_CONTROL_UNINHIBIT = 108
  aca_DATA_POINT_METER_ADJUST = 109
  aca_DATA_POINT_MMS_INHIBIT = 110
  aca_DATA_POINT_MMS_UNINHIBIT = 111
  aca_DATA_POINT_RESET_FORCED_STATE = 112
  aca_DATA_POINT_SCAN_INHIBIT = 113
  aca_DATA_POINT_SCAN_UNINHIBIT = 114
  aca_DATA_POINT_SET_FORCED_STATE = 115
  aca_DATA_POINT_WRITE = 116
  aca_DUTY_DEGRADE_SUBSYSTEMS = 117
  aca_DUTY_TRANSFER_REGION = 118
  aca_DUTY_TRANSFER_SUBSYSTEM = 119
  aca_SET_MODE_ECS = 120
  aca_SET_PARAMETER_ECS = 121
  aca_SET_STATION_TIMETABLE_ECS = 122
  aca_PRINT_EXPORT_ESV = 123
  aca_REPORT_CONFIGURATION_ESV = 124
  aca_VIEW_ALL_REPORTS_ESV = 125
  aca_EML_DELETE_LOG_SHEET = 126
  aca_CHANGE_EVENT_LEVEL = 127
  aca_SHOW_ALL_EVENTS = 128
  aca_IN_CANCEL_INCIDENT = 129
  aca_IN_CLOSE_INCIDENT = 130
  aca_IN_CONTROL_INCIDENT = 131
  aca_IN_CREATE_INCIDENT = 132
  aca_IN_OVERRIDE_CANCEL = 133
  aca_IN_OVERRIDE_CONTROL = 134
  aca_IN_PUBLISH_INCIDENT = 135
  aca_IN_SET_CATEGORY = 136
  aca_IN_VIEW_ALL_INCIDENTS = 137
  aca_IP_LIMITS_TAB_ACCESS = 138
  aca_ITRANSPORT_EXCHANGE_ALL_DATA = 139
  aca_MV_EDIT_LAYERS = 140
  aca_MV_EXPORT_PRESET_VIEW = 141
  aca_MV_IMPORT_PRESET_VIEW = 142
  aca_MV_LOAD_GLOBAL_PRESET_VIEW = 143
  aca_MV_LOAD_PERSONAL_PRESET_VIEW = 144
  aca_MV_REMOVE_GLOBAL_PRESET_VIEW = 145
  aca_MV_REMOVE_PERSONAL_PRESET_VIEW = 146
  aca_MV_SAVE_GLOBAL_DEFAULT_PRESET_VIEW = 147
  aca_MV_SAVE_GLOBAL_PRESET_VIEW = 148
  aca_MV_SAVE_PERSONAL_PRESET_VIEW = 149
  aca_MMS_GLOBAL_INHIBIT = 150
  aca_MMS_SUBSYSTEM_INHIBIT = 151
  aca_CONTROL_MONITOR_VIDEO_ASSIGNMENT = 152
  aca_PA_BROADCAST_STATION_DVA = 153
  aca_PA_BROADCAST_STATION_LIVE = 154
  aca_PA_BROADCAST_STATION_MUSIC = 155
  aca_PA_BROADCAST_TRAIN_DVA = 156
  aca_PA_BROADCAST_TRAIN_LIVE = 157
  aca_PA_BROADCAST_WARNING_TONES = 158
  aca_PA_DISPLAY_LOCAL_BROADCAST = 159
  aca_PA_MODIFY_ADHOC_MESSAGE = 160
  aca_PA_MODIFY_ZONE_GROUPS = 161
  aca_PA_RECORD_ADHOC_MESSAGE = 162
  aca_PA_RETRY_LOCAL_BROADCASTS = 163
  aca_PA_TERMINATE_LOCAL_BROADCASTS = 164
  aca_PA_RRB_ADD_MESSAGE = 165
  aca_PA_RRB_DELETE_MESSAGE = 166
  aca_PA_RRB_MODIFY_MESSAGE = 167
  aca_PA_RRB_PLAY_LIVE_TO_AIR_MESSAGE = 168
  aca_PA_RRB_PLAY_MESSAGE = 169
  aca_PA_RRB_PREVIEW_MESSAGE = 170
  aca_PA_RRB_PREVIEW_STORED_LIVE_MESSAGE = 171
  aca_PA_RRB_RECORD_MESSAGE = 172
  aca_PA_RRB_STOP_MESSAGE = 173
  aca_STATION_PA_ZONE_SELECT = 174
  aca_PLAN_APPROVE_PLAN = 175
  aca_PLAN_CHANGE_PLAN_OWNER = 176
  aca_PLAN_CONTROL_PLAN = 177
  aca_PLAN_CUSTOMISE_PLAN = 178
  aca_PLAN_EDIT_CATEGORY = 179
  aca_PLAN_EDIT_PLAN = 180
  aca_PLAN_SCHEDULE_PLAN = 181
  aca_PLAN_VIEW_ACTIVE_ALL_LOCATIONS = 182
  aca_CONTROL_QUAD_VIDEO_ASSIGNMENTS = 183
  aca_RADIO_ACTIVATE_CCTV = 184
  aca_RADIO_ANSWER_CALL = 185
  aca_RADIO_ANSWER_PEC_CALL = 186
  aca_RADIO_AUTHORISE_CALL = 187
  aca_RADIO_CONFIGURE_CALL_FORWARD = 188
  aca_RADIO_DYNAMIC_GROUP = 189
  aca_RADIO_DYNAMICREGROUP = 190
  aca_RADIO_EDIT_TEXT = 191
  aca_RADIO_HOLD_CALL = 192
  aca_RADIO_INCLUDE_CALL = 193
  aca_RADIO_INCOMING_EMERGENCY_CALL = 194
  aca_RADIO_INCOMING_VOICE_CALL = 195
  aca_RADIO_MAKE_EMERGENCY_CALL = 196
  aca_RADIO_MAKE_TRAIN_CALL = 197
  aca_RADIO_MAKE_VOICE_CALL = 198
  aca_RADIO_MANAGE_TRAIN_SELECTIONS = 199
  aca_RADIO_MONITOR_CALLS = 200
  aca_RADIO_MONITOR_JOIN = 201
  aca_RADIO_MONITOR_LISTEN = 202
  aca_RADIO_MONITOR_OPERATOR_BTN = 203
  aca_RADIO_MONITOR_PROFILE_BTN = 204
  aca_RADIO_MONITOR_TERMINATE = 205
  aca_RADIO_MULTISELECT = 206
  aca_RADIO_MULTISITE = 207
  aca_RADIO_OUTGOING_EMERGENCY_CALL = 208
  aca_RADIO_OUTGOING_VOICE_CALL = 209
  aca_RADIO_PATCHGROUP = 210
  aca_RADIO_SDS_ADD_PREDEFINED = 211
  aca_RADIO_SDS_EDIT_ADHOC = 212
  aca_RADIO_SDS_MODIFY_PREDEFINED = 213
  aca_RADIO_SDS_SEND = 214
  aca_RADIO_SEND_TEXT = 215
  aca_RADIO_TERMINATE_CALL = 216
  aca_RADIO_CONFIGURE_PATCH_GROUPS = 217
  aca_RADIO_CONFIGURE_SHARED_DIRECT_LINE = 218
  aca_RADIO_CONFIGURE_USER_DIRECT_LINE = 219
  aca_RADIO_OTHER_CALL_STACK = 220
  aca_RADIO_SEARCH_DIRECTORY = 221
  aca_RADIO_ADD_PREDEFINED_TEXT = 222
  aca_RADIO_MODIFY_PREDEFINED_TEXT = 223
  aca_VI_CONTROL_RECORDING_UNIT = 224
  aca_REPORTING_LAUNCH_DESIGNER = 225
  aca_REPORTING_LAUNCH_VIEWER = 226
  aca_REPORTING_ON_DEMAND = 227
  aca_REPORTING_SCHEDULE = 228
  aca_SCHEDULE_ADD = 229
  aca_SCHEDULE_DELETE = 230
  aca_SCHEDULE_ENABLEDISABLE = 231
  aca_SCHEDULE_MODIFY = 232
  aca_USE_TRANSACTIVE_SUPER_PROFILE = 233
  aca_VI_CONTROL_SEQUENCE = 234
  aca_SIGNS_CHANGE_SCENE = 235
  aca_SIGNS_MODIFY_SCHEDULE = 236
  aca_SIGNS_RESET = 237
  aca_SIGNS_RESTORE_SCHEDULE = 238
  aca_SIGNS_SET_BRIGHTNESS = 239
  aca_SIGNS_SET_ENABLE_STATE = 240
  aca_SIGNS_SET_FLASH_RATE = 241
  aca_SIGNS_SET_SERVICE_STATE = 242
  aca_SIGNS_TEST_CONTROLLER = 243
  aca_STATION_MODIFY_AD_HOC = 244
  aca_STATION_TIS_AD_HOC = 245
  aca_STATION_TIS_FREE_TEXT = 246
  aca_STATION_TIS_PID_CONTROL = 247
  aca_STATION_TIS_PID_LED_SELECT = 248
  aca_STATION_TIS_PID_LOCK = 249
  aca_STATION_TIS_PRE_DEFINED = 250
  aca_STATION_TIS_RESET = 251
  aca_SIGNS_ADD_IMAGE = 252
  aca_SIGNS_ADD_PAGE = 253
  aca_SIGNS_ADD_SCENE = 254
  aca_SIGNS_ADD_SCHEDULE = 255
  aca_SIGNS_EXPORT_IMAGE = 256
  aca_SIGNS_MODIFY_PAGE = 257
  aca_SIGNS_MODIFY_SCENE = 258
  aca_SIGNS_REMOVE_IMAGE = 259
  aca_SIGNS_REMOVE_PAGE = 260
  aca_SIGNS_REMOVE_SCENE = 261
  aca_SIGNS_REMOVE_SCHEDULE = 262
  aca_SIGNS_REPLACE_IMAGE = 263
  aca_SIGNS_SET_SIGN_CONTROLLER_POLL_CYCLE = 264
  aca_CONTROL_TRAINBORNE_CCTV = 265
  aca_SET_PROCESS_OPERATING_MODE = 266
  aca_SET_PROCESS_RUNTIME_PARAMETER = 267
  aca_SHUTDOWN_SYSTEM_CONTROLLER = 268
  aca_START_PROCESS = 269
  aca_STOP_PROCESS = 270
  aca_SYSTEM_MANAGER_OPTIONS = 271
  aca_TELEPHONE_ANSWER_CALL = 272
  aca_TELEPHONE_ANSWER_EMERGENCY_CALL = 273
  aca_TELEPHONE_CALLBACK_CALL = 274
  aca_TELEPHONE_CONFIGURE_CALL_FORWARD = 275
  aca_TELEPHONE_CONFIGURE_DIRECTORY = 276
  aca_TELEPHONE_CONFIGURE_HOT_LINE = 277
  aca_TELEPHONE_CONFIGURE_SHARED_DIRECT_LINE = 278
  aca_TELEPHONE_CONFIGURE_USER_DIRECT_LINE = 279
  aca_TELEPHONE_HOLD_CALL = 280
  aca_TELEPHONE_INCLUDE_CALL = 281
  aca_TELEPHONE_MAKE_VOICE_CALL = 282
  aca_TELEPHONE_OVERRIDE_CALL = 283
  aca_TELEPHONE_SEARCH_DIRECTORY = 284
  aca_TELEPHONE_TRANSFER_CALL = 285
  aca_TELEPHONE_UPLOAD_DIRECTORY = 286
  aca_STATION_TIS_ISCS_LIBRARY_UPGRADE = 287
  aca_STATION_TIS_PID_GROUPS = 288
  aca_STATION_TIS_RATIS_APPROVE = 289
  aca_STATION_TIS_RATIS_PRIORITY_SET = 290
  aca_STATION_TIS_RATIS_SUBMIT = 291
  aca_STATION_TIS_RATIS_VETTING_SET = 292
  aca_TRAIN_TIS_ISCS_LIBRARY_UPGRADE = 293
  aca_TRAIN_TIS_TIME_SCHEDULE_SET_CURRENT = 294
  aca_DEPOT_LINE_ACCESS = 295
  aca_ORANGE_LINE_ACCESS = 296
  aca_RED_LINE_ACCESS = 297
  aca_TRAIN_CCTV = 298
  aca_TRAIN_INFO_MODIFY_SELECTION_LIST = 299
  aca_TRAIN_PA_CYCLIC_ANNOUNCEMENT = 300
  aca_TRAIN_PA_LIVE_ANNOUNCEMENT = 301
  aca_TRAIN_PA_PRERECORDED_ANNOUNCEMENT = 302
  aca_TRAIN_TIS_DOWNLOAD_LIBRARY = 303
  aca_TRAIN_TIS_DOWNLOAD_SCHEDULE = 304
  aca_TRAIN_TIS_FREETEXT_MESSAGE = 305
  aca_TRAIN_TIS_RESET_MESSAGE = 306
  aca_TRAIN_TIS_STORED_MESSAGE = 307
  aca_TREND_EXPORT = 308
  aca_TREND_PRINT = 309
  aca_TRAIN_TIS_TIME_SCHEDULE_EDIT = 310
  aca_CONTROL_VIDEO_INPUT = 311
  aca_VI_OVERRIDE_INPUT_LOCK = 312
  aca_EDIT_SEQUENCES = 313
  aca_VW_APPLICATION_CONTROL = 314
  aca_VW_DISPLAY_OBJECT_CONTROL = 315
  aca_VW_LAYOUT_DISPLAY = 316
  aca_START_DVR_RECORDING = 317
  aca_STOP_DVR_RECORDING = 318
  aca_VI_DISPLAY_LARGE_SCREEN_PROJECTOR = 319
  aca_CE_CONFIGURE_INCIDENT_RIGHTS = 320
  aca_CE_CONFIGURE_OPC_TAG_ALIAS = 321
  aca_DLTS_OUTGOING_CALL = 322
  aca_DLTS_ANSWER_CALL = 323
  aca_DLTS_HOLD_CALL = 324
  aca_DLTS_MAKE_CONFERENCE = 325
  aca_DLTS_INCLUDE_CALL = 326
  aca_DLTS_PATCH_CALL = 327
  aca_DLTS_FORWARD_CALL = 328
  aca_MMS_SYSTEM_ALARM_INHIBIT = 329
  aca_TRAIN_TRN_SET = 330
  aca_ACTIVATE_DP_MODE  = 331
  aca_DUTY_TRANSFER_ALL_SUBSYSTEM = 332
  aca_TRAIN_MANUAL_TAKE_CONTROL = 333
  aca_CE_CONFIGURE_TRAIN_TALKGROUPS = 334
  aca_PA_CONFIGURE_PA_MESSAGE_DESCRIPTION = 335
  aca_PA_BROADCAST_OCC_DVA = 336
  aca_PA_BROADCAST_OCC_LIVE = 337
  aca_PA_BROADCAST_OCC_BACKGROUND_MUSIC = 338
  aca_PA_BROADCAST_STN_BACKGROUND_MUSIC = 339
  aca_PA_BROADCAST_OCC_MONITOR = 340
  aca_PA_BROADCAST_STN_MONITOR = 341

  aca_EVENT_VIEW_ApplicationChangeModeRequest = 2001
  aca_EVENT_VIEW_ApplicationDebugLevelChange = 2002
  aca_EVENT_VIEW_ApplicationStartRequest = 2003
  aca_EVENT_VIEW_ApplicationStopRequest = 2004
  aca_EVENT_VIEW_OperatorAdminLogIn = 2005
  aca_EVENT_VIEW_OperatorAdminLogOut = 2006
  aca_EVENT_VIEW_SystemControllerShutdown = 2007
  aca_EVENT_VIEW_AlarmAcknowledged = 2013
  aca_EVENT_VIEW_AlarmClosed = 2016
  aca_EVENT_VIEW_AlarmCommentsUpdated = 2017
  aca_EVENT_VIEW_AlarmIsAvalancheChild = 2018
  aca_EVENT_VIEW_AlarmIsAvalancheHead = 2019
  aca_EVENT_VIEW_AlarmMmsStateUpdated = 2020
  aca_EVENT_VIEW_AlarmPlanStateUpdated = 2021
  aca_EVENT_VIEW_AlarmSubmitted = 2022
  aca_EVENT_VIEW_AlarmSupressed = 2023
  aca_EVENT_VIEW_MsgBoxInteractionAudit = 2025
  aca_EVENT_VIEW_ArchiveCopied = 2026
  aca_EVENT_VIEW_ArchiveDeleted = 2027
  aca_EVENT_VIEW_ArchiveRestored = 2028
  aca_EVENT_VIEW_ChangeDeletionDateCancelled = 2029
  aca_EVENT_VIEW_ChangeDeletionDateFailed = 2030
  aca_EVENT_VIEW_ChangeDeletionDateRequest = 2031
  aca_EVENT_VIEW_CopyArchiveCancelled = 2032
  aca_EVENT_VIEW_CopyArchiveFailed = 2033
  aca_EVENT_VIEW_CopyArchiveRequest = 2034
  aca_EVENT_VIEW_DeleteArchiveCancelled = 2035
  aca_EVENT_VIEW_DeleteArchiveFailed = 2036
  aca_EVENT_VIEW_DeleteArchiveRequest = 2037
  aca_EVENT_VIEW_DeletionDateChanged = 2038
  aca_EVENT_VIEW_RestoreArchiveCancelled = 2039
  aca_EVENT_VIEW_RestoreArchiveFailed = 2040
  aca_EVENT_VIEW_RestoreArchiveRequest = 2041
  aca_EVENT_VIEW_AuthenticationRequestDenied = 2042
  aca_EVENT_VIEW_OverrideDenied = 2043
  aca_EVENT_VIEW_OverrideEnded = 2044
  aca_EVENT_VIEW_OverrideStarted = 2045
  aca_EVENT_VIEW_PasswordChanged = 2046
  aca_EVENT_VIEW_SessionEnded = 2047
  aca_EVENT_VIEW_SessionStarted = 2048
  aca_EVENT_VIEW_ConfigurationItemAdded = 2052
  aca_EVENT_VIEW_ConfigurationItemDeleted = 2053
  aca_EVENT_VIEW_ConfigurationItemUpdated = 2054
  aca_EVENT_VIEW_ApplicationNotFound = 2055
  aca_EVENT_VIEW_ControlStationChangeProfile = 2056
  aca_EVENT_VIEW_ControlStationClose = 2057
  aca_EVENT_VIEW_ControlStationExit = 2058
  aca_EVENT_VIEW_ControlStationLogin = 2059
  aca_EVENT_VIEW_ControlStationLogout = 2060
  aca_EVENT_VIEW_ControlStationStart = 2061
  aca_EVENT_VIEW_MFTRestart = 2062
  aca_EVENT_VIEW_UnknownApplication = 2063
  aca_EVENT_VIEW_DataNodeNotesAdd = 2071
  aca_EVENT_VIEW_DataNodeNotesRemove = 2072
  aca_EVENT_VIEW_DataNodePTWAdd = 2073
  aca_EVENT_VIEW_DataNodePTWRemove = 2074
  aca_EVENT_VIEW_DataNodeTagAdd = 2075
  aca_EVENT_VIEW_DataNodeTagRemove = 2076
  aca_EVENT_VIEW_AlarmInhibitionPermissionDenied = 2077
  aca_EVENT_VIEW_AlarmInhibitionPersistenceFailed = 2078
  aca_EVENT_VIEW_AlarmInhibitionSucceeded = 2079
  aca_EVENT_VIEW_AnswerBackCheckingResult = 2080
  aca_EVENT_VIEW_ControlInhibitionPermissionDenied = 2081
  aca_EVENT_VIEW_ControlInhibitionPersistenceFailed = 2082
  aca_EVENT_VIEW_ControlInhibitionSucceeded = 2083
  aca_EVENT_VIEW_DataPointLimitsAdd = 2084
  aca_EVENT_VIEW_DataPointLimitsChanged = 2085
  aca_EVENT_VIEW_DataPointLimitsPermissionDenied = 2086
  aca_EVENT_VIEW_DataPointLimitsPersistenceFailed = 2087
  aca_EVENT_VIEW_DataPointLimitsRemove = 2088
  aca_EVENT_VIEW_ForcedStatePermissionDenied = 2089
  aca_EVENT_VIEW_ForcedStatePersistenceFailed = 2090
  aca_EVENT_VIEW_ForcedStateSucceeded = 2091
  aca_EVENT_VIEW_MeteringAdjustmentPermissionDenied = 2092
  aca_EVENT_VIEW_MeteringAdjustmentPersistenceFailed = 2093
  aca_EVENT_VIEW_MeteringAdjustmentSucceeded = 2094
  aca_EVENT_VIEW_MMSInhibitPermissionDenied = 2095
  aca_EVENT_VIEW_MMSInhibitPersistenceFailed = 2096
  aca_EVENT_VIEW_MMSInhibitSucceeded = 2097
  aca_EVENT_VIEW_ScanInhibitionPermissionDenied = 2098
  aca_EVENT_VIEW_ScanInhibitionPersistenceFailed = 2099
  aca_EVENT_VIEW_ScanInhibitionSucceeded = 2100
  aca_EVENT_VIEW_SetForcedValueFailedPermissionDenied = 2101
  aca_EVENT_VIEW_SetForcedValueFailedPersistence = 2102
  aca_EVENT_VIEW_SetForcedValueSucceeded = 2103
  aca_EVENT_VIEW_SetValueFailedControlInhibited = 2104
  aca_EVENT_VIEW_SetValueFailedPermissionDenied = 2105
  aca_EVENT_VIEW_SetValueLCCFailed = 2106
  aca_EVENT_VIEW_SetValueSucceeded = 2107
  aca_EVENT_VIEW_ValueInAlarmButAlarmInhibited = 2108
  aca_EVENT_VIEW_ValueOutOfAlarmButAlarmInhibited = 2109
  aca_EVENT_VIEW_EcsAgentExecutionState = 2116
  aca_EVENT_VIEW_EcsAgentOnlineUpdate = 2117
  aca_EVENT_VIEW_EcsMasterModeResult = 2119
  aca_EVENT_VIEW_EcsStationModeResult = 2121
  aca_EVENT_VIEW_ECSCongestionParameterChange = 2122
  aca_EVENT_VIEW_ECSStationTimetableChange = 2123
  aca_EVENT_VIEW_CreateReportLog = 2124
  aca_EVENT_VIEW_DeleteReportLog = 2125
  aca_EVENT_VIEW_ModifyReportLog = 2126
  aca_EVENT_VIEW_PrintReportLog = 2127
  aca_EVENT_VIEW_AgentChangeToControl = 2128
  aca_EVENT_VIEW_AgentChangeToMonitor = 2129
  aca_EVENT_VIEW_AgentShutdown = 2130
  aca_EVENT_VIEW_ApplicationExit = 2131
  aca_EVENT_VIEW_ApplicationLaunchFailure = 2132
  aca_EVENT_VIEW_ApplicationStart = 2133
  aca_EVENT_VIEW_IncidentClosed  = 2147
  aca_EVENT_VIEW_IncidentCreated = 2148
  aca_EVENT_VIEW_IncidentDeleted = 2149
  aca_EVENT_VIEW_IncidentEdit = 2150
  aca_EVENT_VIEW_IncidentReOpened = 2153
  aca_EVENT_VIEW_IncidentStationEdit  = 2154
  aca_EVENT_VIEW_InterlockingRuleCreated = 2162
  aca_EVENT_VIEW_InterlockingRuleDeleted = 2163
  aca_EVENT_VIEW_InterlockingRuleUpdated = 2164
  aca_EVENT_VIEW_JobRequestDenial = 2172
  aca_EVENT_VIEW_JobRequestFailure = 2173
  aca_EVENT_VIEW_JobRequestSubmitted = 2174
  aca_EVENT_VIEW_OpcServerTagUpdate = 2175
  aca_EVENT_VIEW_MMSGlobalInhibitApplied = 2176
  aca_EVENT_VIEW_MMSGlobalInhibitFailed = 2177
  aca_EVENT_VIEW_MMSGlobalInhibitRemoved = 2178
  aca_EVENT_VIEW_MMSSubsystemInhibitApplied = 2179
  aca_EVENT_VIEW_MMSSubsystemInhibitFailed = 2180
  aca_EVENT_VIEW_MMSSubsystemInhibitRemoved = 2181
  aca_EVENT_VIEW_PaAgentBroadcastState = 2182
  aca_EVENT_VIEW_PaAgentBroadcastStateFailure = 2183
  aca_EVENT_VIEW_PaAgentDependencyFailure = 2184
  aca_EVENT_VIEW_PaAgentDVAMessageUpdate = 2185
  aca_EVENT_VIEW_PAAgentOnlineUpdate = 2186
  aca_EVENT_VIEW_PaBroadcastEventTriggeredStationDvaForAreaRequest = 2187
  aca_EVENT_VIEW_PaBroadcastEventTriggeredStationDvaForGroupRequest = 2188
  aca_EVENT_VIEW_PaBroadcastEventTriggeredStationDvaForStationRequest = 2189
  aca_EVENT_VIEW_PaBroadcastEventTriggeredStationDvaRequest = 2190
  aca_EVENT_VIEW_PaBroadcastStationDvaRequest = 2191
  aca_EVENT_VIEW_PaBroadcastStationLiveRequest = 2192
  aca_EVENT_VIEW_PaBroadcastStationMusicRequest = 2193
  aca_EVENT_VIEW_PaChangeBroadcastId = 2194
  aca_EVENT_VIEW_PaFEPCNotResponding = 2195
  aca_EVENT_VIEW_PaRecordAdhocRequest = 2196
  aca_EVENT_VIEW_PaRemoveBroadcast = 2197
  aca_EVENT_VIEW_PaRetryStationBroadcastRequest = 2198
  aca_EVENT_VIEW_PaSetAdhocLabel = 2199
  aca_EVENT_VIEW_PaSetAdhocType = 2200
  aca_EVENT_VIEW_PaStationBroadcastResult = 2201
  aca_EVENT_VIEW_PaTerminateBroadcast = 2202
  aca_EVENT_VIEW_PaTrainBroadcastFailure = 2203
  aca_EVENT_VIEW_PaZoneBroadcastFailure = 2204
  aca_EVENT_VIEW_TrainPAContinueLiveAnnouncement = 2205
  aca_EVENT_VIEW_TrainPACyclic = 2206
  aca_EVENT_VIEW_TrainPAEndLiveAnnouncement = 2207
  aca_EVENT_VIEW_TrainPAPrerecorded = 2208
  aca_EVENT_VIEW_TrainPASetupLiveAnnouncement = 2209
  aca_EVENT_VIEW_PaZoneGroupModification = 2210
  aca_EVENT_VIEW_PIDSDisplayRequest = 2225
  aca_EVENT_VIEW_PIDSLibraryReceived = 2226
  aca_EVENT_VIEW_PIDSPidGroupCreated = 2227
  aca_EVENT_VIEW_PIDSPidGroupDeleted = 2228
  aca_EVENT_VIEW_PIDSPidGroupModified = 2229
  aca_EVENT_VIEW_PIDSPidStatusChanged = 2230
  aca_EVENT_VIEW_PlanApproval = 2231
  aca_EVENT_VIEW_PlanAutoGRCBadLaunch = 2232
  aca_EVENT_VIEW_PlanAutoGRCBadReturn = 2233
  aca_EVENT_VIEW_PlanAutoGRCStarted = 2234
  aca_EVENT_VIEW_PlanAutoGRCSuccessful = 2235
  aca_EVENT_VIEW_PlanAutoGRCUnsuccessful = 2236
  aca_EVENT_VIEW_PlanBRCStepBadLaunch = 2237
  aca_EVENT_VIEW_PlanBRCStepBadReturn = 2238
  aca_EVENT_VIEW_PlanBRCStepSuccessful = 2239
  aca_EVENT_VIEW_PlanCategoryDelete = 2240
  aca_EVENT_VIEW_PlanCategoryInsert = 2241
  aca_EVENT_VIEW_PlanCategoryUpdate = 2242
  aca_EVENT_VIEW_PlanComplete = 2243
  aca_EVENT_VIEW_PlanCompletedWithFailedSteps = 2244
  aca_EVENT_VIEW_PlanControlAcquire = 2245
  aca_EVENT_VIEW_PlanCopy = 2246
  aca_EVENT_VIEW_PlanDelete = 2247
  aca_EVENT_VIEW_PlanEditLockAcquire = 2248
  aca_EVENT_VIEW_PlanEditLockRelease = 2249
  aca_EVENT_VIEW_PlanExecution = 2250
  aca_EVENT_VIEW_PlanGeneral = 2251
  aca_EVENT_VIEW_PlanInsert = 2252
  aca_EVENT_VIEW_PlanManualGRCBadLaunch = 2253
  aca_EVENT_VIEW_PlanManualGRCBadReturn = 2254
  aca_EVENT_VIEW_PlanManualGRCStarted = 2255
  aca_EVENT_VIEW_PlanManualGRCSuccessful = 2256
  aca_EVENT_VIEW_PlanManualGRCUnsuccessful = 2257
  aca_EVENT_VIEW_PlanMove = 2259
  aca_EVENT_VIEW_PlanOperatorsLog = 2260
  aca_EVENT_VIEW_PlanPause = 2261
  aca_EVENT_VIEW_PlanPending = 2262
  aca_EVENT_VIEW_PlanResume = 2263
  aca_EVENT_VIEW_PlanStepCustomisation = 2264
  aca_EVENT_VIEW_PlanStop = 2265
  aca_EVENT_VIEW_PlanUnapproval = 2266
  aca_EVENT_VIEW_PlanUpdate = 2267
  aca_EVENT_VIEW_DataPointStateChange = 2268
  aca_EVENT_VIEW_CommandToResetFailed = 2269
  aca_EVENT_VIEW_CommandToResetSucceeded = 2270
  aca_EVENT_VIEW_CommandToRTUFailed = 2271
  aca_EVENT_VIEW_CommandToRTUSucceeded = 2272
  aca_EVENT_VIEW_CommandToSwitchToPrimaryFailed = 2273
  aca_EVENT_VIEW_CommandToSwitchToPrimarySucceeded = 2274
  aca_EVENT_VIEW_CommandToSwitchToStandbyFailed = 2275
  aca_EVENT_VIEW_CommandToSwitchToStandbySucceeded = 2276
  aca_EVENT_VIEW_DoublePrimaryRTUDetected = 2277
  aca_EVENT_VIEW_DoubleStandbyRTUDetected = 2278
  aca_EVENT_VIEW_SwitchToPrimaryFailed = 2279
  aca_EVENT_VIEW_SwitchToPrimaryFailedTryOtherRTU = 2280
  aca_EVENT_VIEW_SwitchToPrimarySucceeded = 2281
  aca_EVENT_VIEW_SwitchToStandbyFailed = 2282
  aca_EVENT_VIEW_SwitchToStandbySucceeded = 2283
  aca_EVENT_VIEW_RadioAdjustCallVolume = 2284
  aca_EVENT_VIEW_RadioAnswerCall = 2285
  aca_EVENT_VIEW_RadioAuthoriseCall = 2286
  aca_EVENT_VIEW_RadioCeaseTX = 2287
  aca_EVENT_VIEW_RadioCreatePatch = 2288
  aca_EVENT_VIEW_RadioDeletePatch = 2289
  aca_EVENT_VIEW_RadioDemandTX = 2290
  aca_EVENT_VIEW_RadioDeselectCall = 2291
  aca_EVENT_VIEW_RadioDynamicGroupCreated = 2292
  aca_EVENT_VIEW_RadioDynamicGroupReleased = 2293
  aca_EVENT_VIEW_RadioHoldCall = 2294
  aca_EVENT_VIEW_RadioIncludeCall = 2295
  aca_EVENT_VIEW_RadioMonitorEndCall = 2296
  aca_EVENT_VIEW_RadioMonitorJoinCall = 2297
  aca_EVENT_VIEW_RadioMonitorOneShot = 2298
  aca_EVENT_VIEW_RadioMonitorStartListening = 2299
  aca_EVENT_VIEW_RadioMonitorStartMonitoring = 2300
  aca_EVENT_VIEW_RadioMonitorStopListening = 2301
  aca_EVENT_VIEW_RadioMonitorStopMonitoring = 2302
  aca_EVENT_VIEW_RadioReadTextMessage = 2303
  aca_EVENT_VIEW_RadioReleaseCall = 2304
  aca_EVENT_VIEW_RadioResumeCall = 2305
  aca_EVENT_VIEW_RadioSelectCall = 2306
  aca_EVENT_VIEW_RadioSendTextMessage = 2307
  aca_EVENT_VIEW_RadioSetCallForwarding = 2308
  aca_EVENT_VIEW_RadioTerminateCall = 2309
  aca_EVENT_VIEW_RadioVoiceCall = 2310
  aca_EVENT_VIEW_RadioAmbienceListeningActivated = 2311
  aca_EVENT_VIEW_RadioAmbienceListeningTerminated = 2312
  aca_EVENT_VIEW_RadioDynamicRegroupConnect = 2313
  aca_EVENT_VIEW_RadioDynamicRegroupRelease = 2314
  aca_EVENT_VIEW_RadioEndPrivateCall = 2315
  aca_EVENT_VIEW_RadioGroupMonitored = 2316
  aca_EVENT_VIEW_RadioGroupSelect = 2317
  aca_EVENT_VIEW_RadioGroupUnmonitored = 2318
  aca_EVENT_VIEW_RadioGroupUnselect = 2319
  aca_EVENT_VIEW_RadioIncomingPrivateCall = 2320
  aca_EVENT_VIEW_RadioMakePrivateCall = 2321
  aca_EVENT_VIEW_RadioMultiselectConnect = 2322
  aca_EVENT_VIEW_RadioMultiSiteConnect = 2323
  aca_EVENT_VIEW_RadioPatchEstablished = 2324
  aca_EVENT_VIEW_RadioPatchGroupConnect = 2325
  aca_EVENT_VIEW_RadioPatchGroupRelease = 2326
  aca_EVENT_VIEW_RadioPatchTerminated = 2327
  aca_EVENT_VIEW_RadioPredefinedMessageAdd = 2328
  aca_EVENT_VIEW_RadioPredefinedMessageCreated = 2329
  aca_EVENT_VIEW_RadioPredefinedMessageDeleted = 2330
  aca_EVENT_VIEW_RadioPredefinedMessageModify = 2331
  aca_EVENT_VIEW_RadioPredefinedMessageRemove = 2332
  aca_EVENT_VIEW_RadioPredefinedMessageUpdated = 2333
  aca_EVENT_VIEW_RadioPrivateCallAnswered = 2334
  aca_EVENT_VIEW_RadioSessionLogin = 2335
  aca_EVENT_VIEW_RadioSessionLogout = 2336
  aca_EVENT_VIEW_RadioSiteConnect = 2337
  aca_EVENT_VIEW_RadioTextMessageRead = 2338
  aca_EVENT_VIEW_RadioTextMessageReceive = 2339
  aca_EVENT_VIEW_RadioTextMessageSend = 2340
  aca_EVENT_VIEW_SchedulingAddJob = 2345
  aca_EVENT_VIEW_SchedulingDeleteJob = 2346
  aca_EVENT_VIEW_SchedulingDisableJob = 2347
  aca_EVENT_VIEW_SchedulingEnableJob = 2348
  aca_EVENT_VIEW_SchedulingJobCompleted = 2349
  aca_EVENT_VIEW_SchedulingJobStarting = 2350
  aca_EVENT_VIEW_SchedulingModifyJob = 2351
  aca_EVENT_VIEW_DLTSAnswerCall = 2436
  aca_EVENT_VIEW_DLTSEndCall = 2437
  aca_EVENT_VIEW_DLTSEndConferenceCall = 2438
  aca_EVENT_VIEW_DLTSForwardCall = 2439
  aca_EVENT_VIEW_DLTSHoldCall = 2440
  aca_EVENT_VIEW_DLTSIncludeInConference = 2441
  aca_EVENT_VIEW_DLTSMakeConferenceCall = 2442
  aca_EVENT_VIEW_DLTSMonitored = 2443
  aca_EVENT_VIEW_DLTSOutgoingCall = 2444
  aca_EVENT_VIEW_DLTSPatchRadio = 2445
  aca_EVENT_VIEW_DLTSResumeCall = 2446
  aca_EVENT_VIEW_DLTSUnmonitored = 2447
  aca_EVENT_VIEW_TeleContactAdded = 2448
  aca_EVENT_VIEW_TeleContactDeleted = 2449
  aca_EVENT_VIEW_TeleContactModified = 2450
  aca_EVENT_VIEW_TeleDirectLineConfigModified = 2451
  aca_EVENT_VIEW_TeleDirectoryUploaded = 2452
  aca_EVENT_VIEW_TeleSubdirectoryAdded = 2453
  aca_EVENT_VIEW_TeleSubdirectoryDeleted = 2454
  aca_EVENT_VIEW_TeleSubdirectoryModified = 2455
  aca_EVENT_VIEW_STISFreeTextMessage = 2456
  aca_EVENT_VIEW_STISISCSLibraryUpgrade = 2457
  aca_EVENT_VIEW_STISLibraryReceived = 2458
  aca_EVENT_VIEW_STISLibrarySynchronised = 2459
  aca_EVENT_VIEW_STISPidGroupCreated = 2460
  aca_EVENT_VIEW_STISPidGroupDeleted = 2461
  aca_EVENT_VIEW_STISPidGroupModified = 2462
  aca_EVENT_VIEW_STISPidStatusChanged = 2463
  aca_EVENT_VIEW_STISPredefinedMessage = 2464
  aca_EVENT_VIEW_STISRatisProcessed = 2465
  aca_EVENT_VIEW_STISRatisSubmitted = 2466
  aca_EVENT_VIEW_STISRatisVetting = 2467
  aca_EVENT_VIEW_STISResetMessage = 2468
  aca_EVENT_VIEW_TTISFreeTextMessage = 2469
  aca_EVENT_VIEW_TTISISCSLibraryUpgrade = 2470
  aca_EVENT_VIEW_TTISLibraryDownloadFinished = 2471
  aca_EVENT_VIEW_TTISLibraryDownloadStarted = 2472
  aca_EVENT_VIEW_TTISLibraryReceived = 2473
  aca_EVENT_VIEW_TTISLibrarySynchronised = 2474
  aca_EVENT_VIEW_TTISPredefinedMessage = 2475
  aca_EVENT_VIEW_TTISResetMessage = 2476
  aca_EVENT_VIEW_TTISScheduleDownloadFinished = 2477
  aca_EVENT_VIEW_TTISScheduleDownloadStarted = 2478
  aca_EVENT_VIEW_TTISScheduleUpgrade = 2479
  aca_EVENT_VIEW_TTISSetCurrentTimeSchedule = 2480
  aca_EVENT_VIEW_TTISTimeScheduleCreated = 2481
  aca_EVENT_VIEW_TTISTimeScheduleDeleted = 2482
  aca_EVENT_VIEW_TTISTimeScheduleModified = 2483
  aca_EVENT_VIEW_TTISTrainLibraryUpgrade = 2484
  aca_EVENT_VIEW_TrainCallDriverEndCall = 2485
  aca_EVENT_VIEW_TrainCallDriverSetupCall = 2486
  aca_EVENT_VIEW_TrainCCTVCarrier = 2487
  aca_EVENT_VIEW_TrainCCTVScreen = 2488
  aca_EVENT_VIEW_TrainInfoDeleteSelection = 2489
  aca_EVENT_VIEW_TrainInfoSaveSelection = 2490
  aca_EVENT_VIEW_TrainPaLiveBroadcastBegin = 2491
  aca_EVENT_VIEW_TrainPaLiveBroadcastEnd = 2492
  aca_EVENT_VIEW_TrainPaPidsPrerecordedMessage = 2493
  aca_EVENT_VIEW_TrainPECActivated = 2494
  aca_EVENT_VIEW_TrainPECAllReset = 2495
  aca_EVENT_VIEW_TrainPECAnswerCall = 2496
  aca_EVENT_VIEW_TrainPECCallInvalid = 2497
  aca_EVENT_VIEW_TrainPECCallNotAnswered = 2498
  aca_EVENT_VIEW_TrainPECCCTVActivate = 2499
  aca_EVENT_VIEW_TrainPECContinueCall = 2500
  aca_EVENT_VIEW_TrainPECEndCall = 2501
  aca_EVENT_VIEW_TrainPECResetByTIMS = 2502
  aca_EVENT_VIEW_TrainPECResetCall = 2503
  aca_EVENT_VIEW_TrainPECResetWIthoutAnswer = 2504
  aca_EVENT_VIEW_TrainPidsFreeTextDisplay = 2505
  aca_EVENT_VIEW_TrainTimeoutAuditEvent = 2506
  aca_EVENT_VIEW_TrainTISStoredMessage = 2513
  aca_EVENT_VIEW_PaPrioritySchemeUpdate = 2562
  aca_EVENT_VIEW_TrainCCTVConflict = 2563
  aca_EVENT_VIEW_SubsystemDutyRequest = 2564
  aca_EVENT_VIEW_SubsystemDutyRequestReceived = 2565
  aca_EVENT_VIEW_SubsystemDutyRequestAccept = 2566
  aca_EVENT_VIEW_SubsystemDutyRequestAcceptReceived = 2567
  aca_EVENT_VIEW_SubsystemDutyRequestRejected = 2568
  aca_EVENT_VIEW_SubsystemDutyRequestRejectedReceived = 2569
  aca_EVENT_VIEW_SubsystemDutyRequestTimeout = 2570
  aca_EVENT_VIEW_SubsystemDutyRequestTimeoutReceived = 2571
  aca_EVENT_VIEW_SubsystemDutyGain = 2572
  aca_EVENT_VIEW_SubsystemDutyLost = 2573
  aca_EVENT_VIEW_SubsystemDutyAllRequest = 2574
  aca_EVENT_VIEW_SubsystemDutyAllRequestReceived = 2575
  aca_EVENT_VIEW_SubsystemDutyAllRequestAccept = 2576
  aca_EVENT_VIEW_SubsystemDutyAllRequestAcceptReceived = 2577
  aca_EVENT_VIEW_SubsystemDutyAllRequestRejected = 2578
  aca_EVENT_VIEW_SubsystemDutyAllRequestRejectedReceived = 2579
  aca_EVENT_VIEW_SubsystemDutyAllRequestTimeout = 2580
  aca_EVENT_VIEW_SubsystemDutyAllRequestTimeoutReceived = 2581
  aca_EVENT_VIEW_SubsystemDutyAllGain = 2582
  aca_EVENT_VIEW_SubsystemDutyAllLost = 2583
  aca_EVENT_VIEW_RegionDutyTransfer = 2584
  aca_EVENT_VIEW_RegionDutyTransferReceived = 2585
  aca_EVENT_VIEW_SystemWideDelegation = 2586
  aca_EVENT_VIEW_AutomaticDelegation = 2587
  aca_EVENT_VIEW_SubsystemDegraded = 2588
  aca_EVENT_VIEW_PlanCopyFailure = 2589
  aca_EVENT_VIEW_PlanApprovalFailure = 2590
  aca_EVENT_VIEW_PlanDeleteFailure = 2591
  aca_EVENT_VIEW_PlanPauseFailure = 2592
  aca_EVENT_VIEW_PlanResumeFailure = 2593
  aca_EVENT_VIEW_PlanStopFailure = 2594
  aca_EVENT_VIEW_PlanUnApprovalFailure = 2595
  aca_EVENT_VIEW_PlanStepExecFailure = 2596
  aca_EVENT_VIEW_AutoAlarmAcknowledged = 2597
  aca_EVENT_VIEW_AutoAlarmClosed = 2598
  aca_EVENT_VIEW_CommandToSetDownloadCompletedFailed = 2599
  aca_EVENT_VIEW_CommandToSetDownloadCompletedSucceeded = 2600
  aca_EVENT_VIEW_MMSSystemAlarmInhibitApplied = 2601
  aca_EVENT_VIEW_MMSSystemAlarmInhibitRemoved = 2602
  aca_EVENT_VIEW_MMSSystemAlarmInhibitFailed = 2603
  aca_EVENT_VIEW_AutomatedArchiveCreated = 2604
  aca_EVENT_VIEW_STISRatisOutgoing = 2605
  aca_EVENT_VIEW_TrainTrnChanged = 2606
  aca_EVENT_VIEW_TrainTpisMessage = 2607
  aca_EVENT_VIEW_TrainPaLiveAnnouncementSetup = 2608
  aca_EVENT_VIEW_TrainPaLiveAnnouncementBegin = 2609
  aca_EVENT_VIEW_TrainPaLiveAnnouncementEnd = 2610
  aca_EVENT_VIEW_TrainIncomingCallRequest = 2611
  aca_EVENT_VIEW_TrainAnswerCallRequest = 2612
  aca_EVENT_VIEW_TrainEndOfOccCall = 2613
  aca_EVENT_VIEW_TrainEndOfTrainCall = 2614
  aca_EVENT_VIEW_TrainCallTrain = 2615
  aca_EVENT_VIEW_TrainPicuActivated = 2616
  aca_EVENT_VIEW_TrainPicuAnswered = 2617
  aca_EVENT_VIEW_TrainPicuReset = 2618
  aca_EVENT_VIEW_VisualEditSequence = 2619
  aca_EVENT_VIEW_RadioEmergencyReceived = 2620
  aca_EVENT_VIEW_RadioEmergencyAcknowledged = 2621
  aca_EVENT_VIEW_RadioEmergencyEnded = 2622
  aca_EVENT_VIEW_TTISFreeTextMessageSaved = 2623
  aca_EVENT_VIEW_STISFreeTextMessageSaved = 2624
  aca_EVENT_VIEW_DLTSIncomingCall = 2625
  aca_EVENT_VIEW_STISISCSVersionUpgradeBegin = 2626
  aca_EVENT_VIEW_OperatorTakeTrainControl = 2627
  aca_EVENT_VIEW_NonRevenueCoupledTrain = 2628
End Enum