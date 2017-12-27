// File: IncidentAudit_MessageTypes.h
// Created: 12/04/2006 4:13:31 PM
// This file is automatically generated from 9999D02170001-TransActive_CORBA_Messages_Register.xls
// Reference: 9999-D02-17-0001, Version: 34.06, Status: Draft, Dated: 06 Apr 06
//
// * DO NOT MODIFY! *

#ifndef INCIDENTAUDIT_MESSAGETYPES_H
#define INCIDENTAUDIT_MESSAGETYPES_H

#include "MessageTypes.h"

namespace TA_Base_Core
{
	namespace IncidentAudit
	{
		// Root context
		static MessageContext Context("Audit", "IncidentAudit", AuditMessage);

		// Message Types for context IncidentAudit
		static const MessageType IncidentActivatedAudit(Context, "30134");
		static const MessageType IncidentAttributeValueChangedAudit(Context, "30135");
		static const MessageType IncidentClosedAudit(Context, "30136");
		static const MessageType IncidentControlRequestAudit(Context, "30137");
		static const MessageType IncidentCreatedAudit(Context, "30138");
		static const MessageType IncidentCreatedFromAlarmAudit(Context, "30139");
		static const MessageType IncidentCreatedFromEventAudit(Context, "30140");
		static const MessageType IncidentLinkAudit(Context, "30141");
		static const MessageType IncidentManuallyCreatedAudit(Context, "30142");
		static const MessageType IncidentOverrideControlAudit(Context, "30143");
		static const MessageType IncidentPausedAudit(Context, "30144");
		static const MessageType IncidentPropertyChangedAudit(Context, "30145");
		static const MessageType IncidentPurgedAudit(Context, "30146");
		static const MessageType IncidentClosed (Context, "30147");
		static const MessageType IncidentCreated(Context, "30148");
		static const MessageType IncidentDeleted(Context, "30149");
		static const MessageType IncidentEdit(Context, "30150");
		static const MessageType IncidentPropertyAddedAudit(Context, "30151");
		static const MessageType IncidentPropertyRemovedAudit(Context, "30152");
		static const MessageType IncidentReOpened(Context, "30153");
		static const MessageType IncidentStationEdit (Context, "30154");
	};
};

#endif // INCIDENTAUDIT_MESSAGETYPES_H