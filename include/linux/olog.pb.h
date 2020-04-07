// Generated by the protocol buffer compiler for perflog!!  DO NOT EDIT!
#ifndef _OLOG_PROTOCOL_BUFFER_H_
#define _OLOG_PROTOCOL_BUFFER_H_

//EnumGenerator::GenerateDefinition in perflog_enum.cc
enum OlogTestEnum_Type {
  PERFLOG_DEF = 0,
  PERFLOG_LOG = 1,
  PERFLOG_EVT = 2,
  PERFLOG_WRN = 3,
  PERFLOG_CRI = 4
};
#if defined(KPERFMON_KERNEL)
int OlogTestEnum_Type_maxnum = 5;
char * OlogTestEnum_Type_strings[5] = {
  "DEF",
  "LOG",
  "EVT",
  "WRN",
  "CRI"
};
#endif //KPERFMON_KERNEL
//EnumGenerator::GenerateDefinition in perflog_enum.cc
enum OlogTestEnum_ID {
  PERFLOG_UNKNOWN = 0,
  PERFLOG_LCDV = 2,
  PERFLOG_ARGOS = 3,
  PERFLOG_APPLAUNCH = 4,
  PERFLOG_LOADAPK = 5,
  PERFLOG_MAINLOOPER = 6,
  PERFLOG_ACTIVITYSERVICE = 7,
  PERFLOG_ACTIVITYSLOW = 8,
  PERFLOG_BROADCAST = 9,
  PERFLOG_STORE = 10,
  PERFLOG_AUTOBRIGHT = 11,
  PERFLOG_LCD = 12,
  PERFLOG_CPU = 13,
  PERFLOG_LOCKCONTENTION = 14,
  PERFLOG_CPUFREQ = 15,
  PERFLOG_MEMPRESSURE = 16,
  PERFLOG_INPUTD = 17,
  PERFLOG_AMPSS = 18,
  PERFLOG_SERVICEMANAGERSLOW = 19,
  PERFLOG_IPCSTARVE = 20,
  PERFLOG_SCREENSHOT = 21,
  PERFLOG_MUTEX = 22
};
#if defined(KPERFMON_KERNEL)
int OlogTestEnum_ID_maxnum = 23;
char * OlogTestEnum_ID_strings[23] = {
  "UNKNOWN",
  " ",
  "LCDV",
  "ARGOS",
  "APPLAUNCH",
  "LOADAPK",
  "MAINLOOPER",
  "ACTIVITYSERVICE",
  "ACTIVITYSLOW",
  "BROADCAST",
  "STORE",
  "AUTOBRIGHT",
  "LCD",
  "CPU",
  "LOCKCONTENTION",
  "CPUFREQ",
  "MEMPRESSURE",
  "INPUTD",
  "AMPSS",
  "SERVICEMANAGERSLOW",
  "IPCSTARVE",
  "SCREENSHOT",
  "MUTEX"
};
#endif //KPERFMON_KERNEL

#endif //_OLOG_PROTOCOL_BUFFER_H_

