#ifndef __DATA_STRUCT_INFO_H_
#define __DATA_STRUCT_INFO_H_
 

#include "./AlarmAPI.h"

namespace I_ALARM_PROVIDER
{
	enum AlarmCommandType
	{
		ACKCommand,
		MMSJobCommand
	};


	struct AlarmACKCommand
	{
		std::string alarmId; 		// max 38 characters.
	    std::string alarmAcknowledgeBy;  // operatorId, max 10 characters.
	    unsigned long ackTime;
	};


	struct AlarmMmsJobCommand
	{
		std::string assetName;
		std::string alarmId;
		std::string operatorId; // “Requestor”
		unsigned long targetDate; // 0 if no target completion date.
		std::string problemReport;
	};

	struct ExtProfileInfo
	{
		ExtProfileInfo():updateTime(0),operatorId(""),profileId(""),loginLocation(""),ID(1),displayOnly(false)
		{
		}
		unsigned long ID;
		time_t updateTime; // the timestamp when ISCS trigger login/logout/change profile actions 
		std::string operatorId; // login operatorId max 10 characters.
		std::string profileId; // login operatorId max 10 characters.
		std::string loginLocation; // Refer to Section D.5 Station Name Code, max 4 characters
		bool displayOnly;
	};

	struct ISCSProfileInfo
	{
		ISCSProfileInfo():updateTime(0),operatorId(""),profileId(""),loginLocation(""),ID(1),displayOnly(false)
		{
		}
		unsigned long ID;
		time_t updateTime; // the timestamp when ISCS trigger login/logout/change profile actions 
		std::string operatorId; // login operatorId max 10 characters.
		std::string profileId; // login operatorId max 10 characters.
		std::string loginLocation; // Refer to Section D.5 Station Name Code, max 4 characters
		bool displayOnly;
	};
}
using namespace I_ALARM_PROVIDER;


class ISCSAlarmQueueItem;
class MmsQueueItem;
class AckQueueItem;

template<typename ITEM>
class ShmemQueue;

typedef ShmemQueue<ISCSAlarmQueueItem> ISCS_ALARM_QUEUE;
typedef ShmemQueue<MmsQueueItem> MMS_QUEUE;
typedef ShmemQueue<AckQueueItem> ACK_QUEUE;
 

const int ALARM_ID_SIZE = 64;
const int ASSERT_NAME_SIZE = 40;
const int ALARM_DESCRIPTION_SIZE = 200;
const int ALARM_ACKNOWLEDGE_BY_SIZE = 10;
const int LOCATION_ID_SIZE = 6;
const int ALARM_VALUE_SIZE = 16;
const int OPERATOR_ID_SIZE = 10;
const int PROFILE_ID_SIZE = 10;
const int LOGIN_LOCATION_SIZE = 6;
const int OPERATION_MODE_SIZE=1;
const int PROBLEM_REPORT_SIZE=200;
const int ALARM_TYPE_SIZE=100;
const int SUBSYSTEM_KEY_SIZE=100;
const int SYSTEM_KEY_SIZE=100;
 



#endif //__DATA_STRUCT_INFO_H_