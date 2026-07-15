#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_3.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76.h"
#include "unitysdk/Enum_3_DB663931210BBC27_9.h"
#include "unitysdk/RPG/Client/ChatContactData.h"
#include "unitysdk/RPG/Client/ChatContactPam_ChatState.h"
#include "unitysdk/RPG/Client/ChatContactPam_Mode.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"

class Class_1_21DCD4640D389503_11;
class Class_1_49483B21E0D64326;
class Class_1_93B622FDBEA47D71;
class Class_1_98274A1A3981A020;
namespace RPG::Client { class ChatContactPam_SendBlockData; }
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class PamChatData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATCONTACTPAM_CREATENEWCHAT_OFFSET UNITYSDK_OFFSET(0xC02D780)
#define RPG_CLIENT_CHATCONTACTPAM_CREATE_OFFSET UNITYSDK_OFFSET(0xC02C8B0)
#define RPG_CLIENT_CHATCONTACTPAM_GETAIPAMQUICKFUNCTIONTYPE_OFFSET UNITYSDK_OFFSET(0xC02FFD0)
#define RPG_CLIENT_CHATCONTACTPAM_GETLLMCHATROLETYPE_OFFSET UNITYSDK_OFFSET(0xC02C980)
#define RPG_CLIENT_CHATCONTACTPAM_GETRESPONSEID_OFFSET UNITYSDK_OFFSET(0xC02FBC0)
#define RPG_CLIENT_CHATCONTACTPAM_GETSERVERPROXY_OFFSET UNITYSDK_OFFSET(0xC02CA20)
#define RPG_CLIENT_CHATCONTACTPAM_GET_CANVIEWHISTORY_OFFSET UNITYSDK_OFFSET(0xC030150)
#define RPG_CLIENT_CHATCONTACTPAM_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0xC030070)
#define RPG_CLIENT_CHATCONTACTPAM_GET_ISLLMENABLED_OFFSET UNITYSDK_OFFSET(0xC02FF40)
#define RPG_CLIENT_CHATCONTACTPAM_GET_ISWAITINGFORRESPONSE_OFFSET UNITYSDK_OFFSET(0xC030020)
#define RPG_CLIENT_CHATCONTACTPAM_LLMROLEIDTOMODE_OFFSET UNITYSDK_OFFSET(0xC02C930)
#define RPG_CLIENT_CHATCONTACTPAM_MARKHISTORYINITIALIZED_OFFSET UNITYSDK_OFFSET(0xC02CC40)
#define RPG_CLIENT_CHATCONTACTPAM_ONLLMCHATEVENT_OFFSET UNITYSDK_OFFSET(0xC02D400)
#define RPG_CLIENT_CHATCONTACTPAM_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC02CA60)
#define RPG_CLIENT_CHATCONTACTPAM_ONRESPONSEFAILED_OFFSET UNITYSDK_OFFSET(0xC02D720)
#define RPG_CLIENT_CHATCONTACTPAM_ONSENDMESSAGESUCCESS_OFFSET UNITYSDK_OFFSET(0xC02F900)
#define RPG_CLIENT_CHATCONTACTPAM_ONSUGGESTIONSRECEIVED_OFFSET UNITYSDK_OFFSET(0xC02F5A0)
#define RPG_CLIENT_CHATCONTACTPAM_REQUESTFEEDBACK_OFFSET UNITYSDK_OFFSET(0xC02E9E0)
#define RPG_CLIENT_CHATCONTACTPAM_REQUESTGREETING_OFFSET UNITYSDK_OFFSET(0xC02D8C0)
#define RPG_CLIENT_CHATCONTACTPAM_REQUESTHISTORY_OFFSET UNITYSDK_OFFSET(0xC02E6F0)
#define RPG_CLIENT_CHATCONTACTPAM_REQUESTREGENERATE_OFFSET UNITYSDK_OFFSET(0xC02E7C0)
#define RPG_CLIENT_CHATCONTACTPAM_RESETCHATSTATE_OFFSET UNITYSDK_OFFSET(0xC02CBF0)
#define RPG_CLIENT_CHATCONTACTPAM_RESTORELATESTRESPONSE_OFFSET UNITYSDK_OFFSET(0xC02CC80)
#define RPG_CLIENT_CHATCONTACTPAM_SENDFUNCTIONMESSAGE_OFFSET UNITYSDK_OFFSET(0xC02E120)
#define RPG_CLIENT_CHATCONTACTPAM_SENDMESSAGE__OFFSET UNITYSDK_OFFSET(0xC02D930)
#define RPG_CLIENT_CHATCONTACTPAM_SENDSUGGESTIONMESSAGE_OFFSET UNITYSDK_OFFSET(0xC02E430)
#define RPG_CLIENT_CHATCONTACTPAM_SENDTOUCHMESSAGE_OFFSET UNITYSDK_OFFSET(0xC02E1C0)
#define RPG_CLIENT_CHATCONTACTPAM_SETFEEDBACK_OFFSET UNITYSDK_OFFSET(0xC02F950)
#define RPG_CLIENT_CHATCONTACTPAM_SETSERVERPROXY_OFFSET UNITYSDK_OFFSET(0xC02C9D0)
#define RPG_CLIENT_CHATCONTACTPAM__APPENDFAILEDMESSAGE_OFFSET UNITYSDK_OFFSET(0xC02F250)
#define RPG_CLIENT_CHATCONTACTPAM__APPENDFEEDBACKBLOCKTOLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0xC02F410)
#define RPG_CLIENT_CHATCONTACTPAM__APPENDSUGGESTIONSTOLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0xC02F6E0)
#define RPG_CLIENT_CHATCONTACTPAM__APPENDTYPINGMESSAGE_OFFSET UNITYSDK_OFFSET(0xC02EBA0)
#define RPG_CLIENT_CHATCONTACTPAM__CLEARPREVIOUSSENDBLOCK_OFFSET UNITYSDK_OFFSET(0xC02D3B0)
#define RPG_CLIENT_CHATCONTACTPAM__CLEARRESPONSEID_OFFSET UNITYSDK_OFFSET(0xC02FC00)
#define RPG_CLIENT_CHATCONTACTPAM__CTOR_OFFSET UNITYSDK_OFFSET(0xC02C790)
#define RPG_CLIENT_CHATCONTACTPAM__DOSENDMESSAGE_OFFSET UNITYSDK_OFFSET(0xC02DB80)
#define RPG_CLIENT_CHATCONTACTPAM__HASPREVIOUSSENDBLOCK_OFFSET UNITYSDK_OFFSET(0xC02F860)
#define RPG_CLIENT_CHATCONTACTPAM__ISRESPONSEUPTODATE_OFFSET UNITYSDK_OFFSET(0xC02D330)
#define RPG_CLIENT_CHATCONTACTPAM__LASTMESSAGE_OFFSET UNITYSDK_OFFSET(0xC02FAF0)
#define RPG_CLIENT_CHATCONTACTPAM__ONCLEARMESSAGES_OFFSET UNITYSDK_OFFSET(0xC02E270)
#define RPG_CLIENT_CHATCONTACTPAM__ONSYNCHISTORY_OFFSET UNITYSDK_OFFSET(0xC02E320)
#define RPG_CLIENT_CHATCONTACTPAM__RECALLPAMMESSAGES_OFFSET UNITYSDK_OFFSET(0xC02E850)
#define RPG_CLIENT_CHATCONTACTPAM__RECORDCOMPLETEDRESPONSEID_OFFSET UNITYSDK_OFFSET(0xC02F8B0)
#define RPG_CLIENT_CHATCONTACTPAM__RECORDLASTCOMPLETEDMESSAGEINDEX_OFFSET UNITYSDK_OFFSET(0xC02E3D0)
#define RPG_CLIENT_CHATCONTACTPAM__RECORDSENDMESSAGEDATA_OFFSET UNITYSDK_OFFSET(0xC02E080)
#define RPG_CLIENT_CHATCONTACTPAM__REMOVEINCOMPLETEMESSAGES_OFFSET UNITYSDK_OFFSET(0xC02D2B0)
#define RPG_CLIENT_CHATCONTACTPAM__REMOVETYPINGMESSAGE_OFFSET UNITYSDK_OFFSET(0xC02ECE0)
#define RPG_CLIENT_CHATCONTACTPAM__REQUESTGENERATESUGGESTIONS_OFFSET UNITYSDK_OFFSET(0xC02F180)
#define RPG_CLIENT_CHATCONTACTPAM__RESETALL_OFFSET UNITYSDK_OFFSET(0xC02CAF0)
#define RPG_CLIENT_CHATCONTACTPAM__RESETLASTCOMPLETEDMESSAGEINDEX_OFFSET UNITYSDK_OFFSET(0xC02E2D0)
#define RPG_CLIENT_CHATCONTACTPAM__RESETPAMTOUCHIFNEEDED_OFFSET UNITYSDK_OFFSET(0xC02DAF0)
#define RPG_CLIENT_CHATCONTACTPAM__SENDPREVIOUSMESSAGE_OFFSET UNITYSDK_OFFSET(0xC02E980)
#define RPG_CLIENT_CHATCONTACTPAM__TRYREQUESTHELPERGREETING_OFFSET UNITYSDK_OFFSET(0xC02E490)
#define RPG_CLIENT_CHATCONTACTPAM__TRYREQUESTQUESTIONERGREETING_OFFSET UNITYSDK_OFFSET(0xC02E5D0)
#define RPG_CLIENT_CHATCONTACTPAM__TRYRESPONSEFUNCTIONCALL_OFFSET UNITYSDK_OFFSET(0xC02EF70)
#define RPG_CLIENT_CHATCONTACTPAM__UPDATECHATQUESTPROGRESS_OFFSET UNITYSDK_OFFSET(0xC02DAA0)
#define RPG_CLIENT_CHATCONTACTPAM__UPDATERESPONSEID_OFFSET UNITYSDK_OFFSET(0xC02EAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatContactPam_TypeDefinitionIndex = 60429;

	class ChatContactPam : public ::RPG::Client::ChatContactData
	{
	public:
		// static const ::System::Int32 _InitialHistoryPage = 0xFFFFFFFF; // 0x0
		::RPG::Client::ChatContactPam_SendBlockData* _PreviousSendBlock; // 0x28
		::System::String* _CompletedResponseID; // 0x30
		::Class_1_93B622FDBEA47D71* _PamChatGreetingService; // 0x38
		::Class_1_98274A1A3981A020* _ServerProxy; // 0x40
		::Class_1_49483B21E0D64326* _FunctionCallService; // 0x48
		::RPG::Client::PamChatData* _PamChat; // 0x50
		::System::String* _CurrentResponseID; // 0x58
		::System::Int32 _SyncedHistoryPage; // 0x60
		::RPG::Client::ChatContactPam_ChatState _ChatState; // 0x64
		::System::Int32 _LastCompletedMessageIndex; // 0x68
		::RPG::Client::ChatContactPam_Mode _PamMode; // 0x6C

		::System::Void _ctor(::RPG::Client::ChatContactPam_Mode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatContactPam_Mode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChatContactPam* Create(::RPG::Client::PamChatData* a1, ::RPG::Client::ChatContactPam_Mode a2)
		{
			return ((::RPG::Client::ChatContactPam*(*)(::RPG::Client::PamChatData*, ::RPG::Client::ChatContactPam_Mode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ChatContactPam_Mode LLMRoleIDToMode(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChatContactPam_Mode(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_LLMROLEIDTOMODE_OFFSET))(a1);
		}

		::Enum_3_0A3761FE34514D6C_3 GetLLMChatRoleType()
		{
			return ((::Enum_3_0A3761FE34514D6C_3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GETLLMCHATROLETYPE_OFFSET))(this);
		}

		::System::Void SetServerProxy(::Class_1_98274A1A3981A020* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_98274A1A3981A020*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SETSERVERPROXY_OFFSET))(this, a1);
		}

		::Class_1_98274A1A3981A020* GetServerProxy()
		{
			return ((::Class_1_98274A1A3981A020*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GETSERVERPROXY_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_ONRECONNECT_OFFSET))(this);
		}

		::System::Void MarkHistoryInitialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_MARKHISTORYINITIALIZED_OFFSET))(this);
		}

		::System::Void RestoreLatestResponse(::System::String* a1, ::System::Collections::Generic::IList_1<::Class_1_21DCD4640D389503_11*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IList_1<::Class_1_21DCD4640D389503_11*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_RESTORELATESTRESPONSE_OFFSET))(this, a1, a2);
		}

		::System::Void ResetChatState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_RESETCHATSTATE_OFFSET))(this);
		}

		::System::Void OnResponseFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_ONRESPONSEFAILED_OFFSET))(this);
		}

		::System::Void CreateNewChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_CREATENEWCHAT_OFFSET))(this);
		}

		::System::Void SendMessage_(::RPG::Client::MessageContentBlock_BlockType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SENDMESSAGE__OFFSET))(this, a1, a2);
		}

		::System::Void SendFunctionMessage(::RPG::Client::PamChatQuickFunctionType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatQuickFunctionType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SENDFUNCTIONMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void SendTouchMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SENDTOUCHMESSAGE_OFFSET))(this);
		}

		::System::Void _OnClearMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__ONCLEARMESSAGES_OFFSET))(this);
		}

		::System::Void _OnSyncHistory(::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__ONSYNCHISTORY_OFFSET))(this, a1, a2);
		}

		::System::Void SendSuggestionMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SENDSUGGESTIONMESSAGE_OFFSET))(this, a1);
		}

		::System::Void RequestGreeting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_REQUESTGREETING_OFFSET))(this);
		}

		::System::Void RequestHistory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_REQUESTHISTORY_OFFSET))(this);
		}

		::System::Void RequestRegenerate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_REQUESTREGENERATE_OFFSET))(this);
		}

		::System::Void RequestFeedback(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_REQUESTFEEDBACK_OFFSET))(this, a1, a2);
		}

		::System::Void OnLLMChatEvent(::Class_1_21DCD4640D389503_11* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_ONLLMCHATEVENT_OFFSET))(this, a1);
		}

		::System::Void OnSuggestionsReceived(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_ONSUGGESTIONSRECEIVED_OFFSET))(this, a1);
		}

		::System::Void OnSendMessageSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_ONSENDMESSAGESUCCESS_OFFSET))(this);
		}

		::System::Void SetFeedback(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SETFEEDBACK_OFFSET))(this, a1, a2);
		}

		::System::String* GetResponseID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GETRESPONSEID_OFFSET))(this);
		}

		::System::Void _TryRequestHelperGreeting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__TRYREQUESTHELPERGREETING_OFFSET))(this);
		}

		::System::Void _TryRequestQuestionerGreeting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__TRYREQUESTQUESTIONERGREETING_OFFSET))(this);
		}

		::System::Void _RequestGenerateSuggestions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__REQUESTGENERATESUGGESTIONS_OFFSET))(this);
		}

		::System::Void _UpdateResponseID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__UPDATERESPONSEID_OFFSET))(this, a1);
		}

		::System::Void _ResetAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RESETALL_OFFSET))(this);
		}

		::System::Boolean _IsResponseUpToDate(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__ISRESPONSEUPTODATE_OFFSET))(this, a1);
		}

		::System::Void _ClearResponseID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__CLEARRESPONSEID_OFFSET))(this);
		}

		::System::Void _RecordCompletedResponseID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RECORDCOMPLETEDRESPONSEID_OFFSET))(this);
		}

		::System::Void _RecordLastCompletedMessageIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RECORDLASTCOMPLETEDMESSAGEINDEX_OFFSET))(this);
		}

		::System::Void _ResetLastCompletedMessageIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RESETLASTCOMPLETEDMESSAGEINDEX_OFFSET))(this);
		}

		::System::Boolean _HasPreviousSendBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__HASPREVIOUSSENDBLOCK_OFFSET))(this);
		}

		::System::Void _ClearPreviousSendBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__CLEARPREVIOUSSENDBLOCK_OFFSET))(this);
		}

		::System::Void _AppendTypingMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__APPENDTYPINGMESSAGE_OFFSET))(this);
		}

		::System::Void _AppendSuggestionsToLastMessage(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__APPENDSUGGESTIONSTOLASTMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _AppendFeedbackBlockToLastMessage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__APPENDFEEDBACKBLOCKTOLASTMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _AppendFailedMessage(::Enum_3_DB663931210BBC27_9 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_9))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__APPENDFAILEDMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _RemoveTypingMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__REMOVETYPINGMESSAGE_OFFSET))(this);
		}

		::RPG::Client::ChatMessageData* _LastMessage()
		{
			return ((::RPG::Client::ChatMessageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__LASTMESSAGE_OFFSET))(this);
		}

		::System::Void _RemoveIncompleteMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__REMOVEINCOMPLETEMESSAGES_OFFSET))(this);
		}

		::System::Void _RecallPamMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RECALLPAMMESSAGES_OFFSET))(this);
		}

		::System::Void _ResetPamTouchIfNeeded(::RPG::Client::MessageContentBlock_BlockType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RESETPAMTOUCHIFNEEDED_OFFSET))(this, a1);
		}

		::System::Void _SendPreviousMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__SENDPREVIOUSMESSAGE_OFFSET))(this);
		}

		::System::Void _DoSendMessage(::RPG::Client::MessageContentBlock_BlockType a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__DOSENDMESSAGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RecordSendMessageData(::RPG::Client::MessageContentBlock_BlockType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RECORDSENDMESSAGEDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _TryResponseFunctionCall(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__TRYRESPONSEFUNCTIONCALL_OFFSET))(this, a1);
		}

		::System::Void _UpdateChatQuestProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__UPDATECHATQUESTPROGRESS_OFFSET))(this);
		}

		static ::Enum_3_A35B38E5F9115A76 GetAiPamQuickFunctionType(::RPG::Client::PamChatQuickFunctionType a1)
		{
			return ((::Enum_3_A35B38E5F9115A76(*)(::RPG::Client::PamChatQuickFunctionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GETAIPAMQUICKFUNCTIONTYPE_OFFSET))(a1);
		}

		::System::Boolean get_IsWaitingForResponse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GET_ISWAITINGFORRESPONSE_OFFSET))(this);
		}

		::System::Boolean get_IsLLMEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GET_ISLLMENABLED_OFFSET))(this);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GET_HEADICON_OFFSET))(this);
		}

		::System::Boolean get_CanViewHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GET_CANVIEWHISTORY_OFFSET))(this);
		}
	};
}
