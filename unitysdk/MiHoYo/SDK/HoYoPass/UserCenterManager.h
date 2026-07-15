#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::HoYoPass { class UserCenterManager_UserCenterJsBridge; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_CANOPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x19D1DB40)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_MANUALLYCLOSE_OFFSET UNITYSDK_OFFSET(0x19D1DF60)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_NOTIFYNORMALCLOSE_OFFSET UNITYSDK_OFFSET(0x19D1EC30)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_NOTIFYOPENERROR_OFFSET UNITYSDK_OFFSET(0x19D1DF50)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_NOTIFYUSERCENTERRESULT_OFFSET UNITYSDK_OFFSET(0x19D1ECA0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_ONGETTHIRDTOKENINVOKED_OFFSET UNITYSDK_OFFSET(0x19D1E0C0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_ONLOGOUT_OFFSET UNITYSDK_OFFSET(0x19D1EC40)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_ONUSERCENTERRESULT_OFFSET UNITYSDK_OFFSET(0x19D1E910)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_OPEN_OFFSET UNITYSDK_OFFSET(0x19D1DC00)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_REGISTERRESULTHANDLER_OFFSET UNITYSDK_OFFSET(0x19D1D8C0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D1EFC0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1D810)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_0_OFFSET UNITYSDK_OFFSET(0x19D1F0F0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_1_OFFSET UNITYSDK_OFFSET(0x19D1F220)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_3_OFFSET UNITYSDK_OFFSET(0x19D1F1C0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_4_OFFSET UNITYSDK_OFFSET(0x19D1F2F0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int UserCenterManager_TypeDefinitionIndex = 8224;

	class UserCenterManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_CURRENT_USER_INVALID_MSG()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UserCenterManager_TypeDefinitionIndex)->GetStaticField(0x21A80);
		}
		static ::System::String** StaticGet_COOKIE_TOKEN_INVALID_MSG()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UserCenterManager_TypeDefinitionIndex)->GetStaticField(0x21A88);
		}
		static ::System::String** StaticGet_USER_CENTER_NOMALLY_CLOSE_MSG()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UserCenterManager_TypeDefinitionIndex)->GetStaticField(0x21A90);
		}
		static ::MiHoYo::SDK::HoYoPass::UserCenterManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::HoYoPass::UserCenterManager**)Il2CppClass::FromTypeDefinitionIndex(UserCenterManager_TypeDefinitionIndex)->GetStaticField(0x21A98);
		}
		// static const ::System::String* MODULE_NAME; // 0x0
		::System::Action_1<::System::String*>* userCenterCallback; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::HoYoPass::UserCenterManager_UserCenterJsBridge*>* resultHandlerMap; // 0x18
		::System::Int32 NOTICE_ERROR_CODE; // 0x20
		::System::Int32 TOKEN_INVALID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean CanOpenUserCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_CANOPENUSERCENTER_OFFSET))(this);
		}

		::System::Void Open(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_OPEN_OFFSET))(this, a1);
		}

		::System::Void ManuallyClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_MANUALLYCLOSE_OFFSET))(this);
		}

		::System::Void RegisterResultHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_REGISTERRESULTHANDLER_OFFSET))(this);
		}

		::System::Void OnGetThirdTokenInvoked(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_ONGETTHIRDTOKENINVOKED_OFFSET))(this, a1, a2);
		}

		::System::Void OnUserCenterResult(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::JSONNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_ONUSERCENTERRESULT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void onLogout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_ONLOGOUT_OFFSET))(this);
		}

		::System::Void NotifyOpenError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_NOTIFYOPENERROR_OFFSET))(this, a1);
		}

		::System::Void NotifyNormalClose(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_NOTIFYNORMALCLOSE_OFFSET))(this, a1);
		}

		::System::Void NotifyUserCenterResult(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_NOTIFYUSERCENTERRESULT_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterResultHandler_b__15_0(::System::Int32 a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_0_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterResultHandler_b__15_3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_3_OFFSET))(this, a1);
		}

		::System::Void _RegisterResultHandler_b__15_1(::System::Int32 a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_1_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterResultHandler_b__15_4(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER__REGISTERRESULTHANDLER_B__15_4_OFFSET))(this, a1);
		}
	};
}
