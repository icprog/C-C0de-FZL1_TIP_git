// File: PlanAgentStateUpdate_MessageTypes.h
// Created: 12/04/2006 4:13:33 PM
// This file is automatically generated from 9999D02170001-TransActive_CORBA_Messages_Register.xls
// Reference: 9999-D02-17-0001, Version: 34.06, Status: Draft, Dated: 06 Apr 06
//
// * DO NOT MODIFY! *

#ifndef PLANAGENTSTATEUPDATE_MESSAGETYPES_H
#define PLANAGENTSTATEUPDATE_MESSAGETYPES_H

#include "MessageTypes.h"

namespace TA_Base_Core
{
	namespace PlanAgentStateUpdate
	{
		// Root context
		static MessageContext Context("StateUpdate", "PlanAgentStateUpdate", StateUpdateMessage);

		// Message Types for context PlanAgentStateUpdate
		static const MessageType PlanAgentStateUpdate(Context, "10056");
		static const MessageType PlanAgentStateUpdateRequest(Context, "10057");
	};
};

#endif // PLANAGENTSTATEUPDATE_MESSAGETYPES_H
