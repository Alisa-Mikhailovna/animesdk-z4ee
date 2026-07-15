#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define MIHOYO_SDK_NOTIFICATIONMANAGER_CREATENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x19D59690)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_HIDESDKDIALOG_OFFSET UNITYSDK_OFFSET(0x19D59770)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_ISENABLELOGINFLOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x19D59FF0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDANTIADDICTION_OFFSET UNITYSDK_OFFSET(0x19D59EE0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDBINDACCOUNT_OFFSET UNITYSDK_OFFSET(0x19D59EB0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDBINDMOBILEACCOUNT_OFFSET UNITYSDK_OFFSET(0x19D59C60)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDFATIGUEREMINDER_OFFSET UNITYSDK_OFFSET(0x19D59F60)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWCHANNELERROR_OFFSET UNITYSDK_OFFSET(0x19D5A1E0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWCLIENTERROR_OFFSET UNITYSDK_OFFSET(0x19D48630)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWHTTPERROR_OFFSET UNITYSDK_OFFSET(0x19D5A7A0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWSERVERRESPONSEERROR_OFFSET UNITYSDK_OFFSET(0x19D5A520)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGOUT_OFFSET UNITYSDK_OFFSET(0x19D59E80)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x19D3EE50)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDPOPIMAGESHOW_OFFSET UNITYSDK_OFFSET(0x19D59F90)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDREALNAMEACCOUNT_OFFSET UNITYSDK_OFFSET(0x19D59C90)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDREDPOINTINFO_OFFSET UNITYSDK_OFFSET(0x19D59C30)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDUNIWEBVIEW_OFFSET UNITYSDK_OFFSET(0x19D597A0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWBEFORELOGINNOTICEREDPOINT_OFFSET UNITYSDK_OFFSET(0x19D59BE0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWCUSTOMNOTICEIMPORTANTREDPOINT_OFFSET UNITYSDK_OFFSET(0x19D59D10)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWCUSTOMNOTICEREDPOINT_OFFSET UNITYSDK_OFFSET(0x19D59940)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWCUSTOMPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x19D59800)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWNOTICEIMPORTANTREDPOINT_OFFSET UNITYSDK_OFFSET(0x19D59CC0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWNOTICEREDPOINTTEXT_OFFSET UNITYSDK_OFFSET(0x19D59AB0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWNOTICEREDPOINT_OFFSET UNITYSDK_OFFSET(0x19D598F0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x19D597D0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWSDKDIALOG_OFFSET UNITYSDK_OFFSET(0x19D59660)
#define MIHOYO_SDK_NOTIFICATIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D5A940)
#define MIHOYO_SDK_NOTIFICATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D5A930)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NotificationManager_TypeDefinitionIndex = 8019;

	class NotificationManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::NotificationManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::NotificationManager**)Il2CppClass::FromTypeDefinitionIndex(NotificationManager_TypeDefinitionIndex)->GetStaticField(0xF370);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER__CCTOR_OFFSET))();
		}

		::System::Void SendNotification(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDNOTIFICATION_OFFSET))(this, a1);
		}

		::System::Void ShowSDKDialog(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWSDKDIALOG_OFFSET))(this, a1);
		}

		::System::Void HideSDKDialog(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_HIDESDKDIALOG_OFFSET))(this, a1);
		}

		::System::Void SendUniWebView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDUNIWEBVIEW_OFFSET))(this, a1);
		}

		::System::Void ShowPopNotice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWPOPNOTICE_OFFSET))(this);
		}

		::System::Void ShowCustomPopNotice(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWCUSTOMPOPNOTICE_OFFSET))(this, a1);
		}

		::System::Void ShowNoticeRedPoint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWNOTICEREDPOINT_OFFSET))(this, a1);
		}

		::System::Void ShowCustomNoticeRedPoint(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWCUSTOMNOTICEREDPOINT_OFFSET))(this, a1, a2);
		}

		::System::Void ShowNoticeRedPointText(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWNOTICEREDPOINTTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void ShowBeforeLoginNoticeRedPoint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWBEFORELOGINNOTICEREDPOINT_OFFSET))(this, a1);
		}

		::System::Void SendRedPointInfo(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDREDPOINTINFO_OFFSET))(this, a1);
		}

		::System::Void SendBindMobileAccount(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDBINDMOBILEACCOUNT_OFFSET))(this, a1);
		}

		::System::Void SendRealNameAccount(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDREALNAMEACCOUNT_OFFSET))(this, a1);
		}

		::System::Void ShowNoticeImportantRedPoint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWNOTICEIMPORTANTREDPOINT_OFFSET))(this, a1);
		}

		::System::Void ShowCustomNoticeImportantRedPoint(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWCUSTOMNOTICEIMPORTANTREDPOINT_OFFSET))(this, a1, a2);
		}

		::System::Void SendLogout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGOUT_OFFSET))(this);
		}

		::System::Void SendBindAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDBINDACCOUNT_OFFSET))(this);
		}

		::System::Void SendAntiAddiction(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDANTIADDICTION_OFFSET))(this, a1);
		}

		::System::Void SendFatigueReminder(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDFATIGUEREMINDER_OFFSET))(this, a1);
		}

		::System::Void SendPopImageShow(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDPOPIMAGESHOW_OFFSET))(this, a1);
		}

		::System::Boolean IsEnableLoginFlowNotification()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_ISENABLELOGINFLOWNOTIFICATION_OFFSET))(this);
		}

		::System::Void SendLoginFlowChannelError(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWCHANNELERROR_OFFSET))(this, a1, a2);
		}

		::System::Void SendLoginFlowServerResponseError(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWSERVERRESPONSEERROR_OFFSET))(this, a1, a2);
		}

		::System::Void SendLoginFlowHttpError(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWHTTPERROR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendLoginFlowClientError(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWCLIENTERROR_OFFSET))(this, a1, a2);
		}

		::System::String* CreateNotification(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_CREATENOTIFICATION_OFFSET))(this, a1, a2);
		}
	};
}
