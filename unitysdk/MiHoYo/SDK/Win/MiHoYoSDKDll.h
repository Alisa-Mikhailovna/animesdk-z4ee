#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ChannelType.h"
#include "unitysdk/MiHoYo/SDK/SubChannelType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ADDINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x19F09240)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_GET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x19F0EBB0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x19F0E660)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET UNITYSDK_OFFSET(0x19F0AE70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET UNITYSDK_OFFSET(0x19F0ADB0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x19F0E800)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x19F0B220)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_AWAKE_OFFSET UNITYSDK_OFFSET(0x19F085C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CAMERA_SET_UI_CAMERA_OFFSET UNITYSDK_OFFSET(0x19F11E00)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CHECKBLACKINVOKELIST_OFFSET UNITYSDK_OFFSET(0x19F092E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_CHECKINIT_OFFSET UNITYSDK_OFFSET(0x19F0B880)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ENABLENATIVEDELEGATE_OFFSET UNITYSDK_OFFSET(0x19C45CD0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_GETDEFERREDDEEPLINK_OFFSET UNITYSDK_OFFSET(0x19F086C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_DISK_TYPE_OFFSET UNITYSDK_OFFSET(0x19F11CB0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_MEMORY_SIZE_OFFSET UNITYSDK_OFFSET(0x19F11A80)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_THREAD_COUNT_OFFSET UNITYSDK_OFFSET(0x19F119E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_CLEAR_DEFERRED_DEEPLINK_OFFSET UNITYSDK_OFFSET(0x19C45A40)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x19F0EDE0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CLIENT_TYPE_OFFSET UNITYSDK_OFFSET(0x19C47620)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CPS_OFFSET UNITYSDK_OFFSET(0x19F114D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEFERRED_DEEPLINK_OFFSET UNITYSDK_OFFSET(0x19C45A10)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEVICE_FINGERPRINT_OFFSET UNITYSDK_OFFSET(0x19F0E760)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x19F0E710)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_REGION_MULTIPLE_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x19F0EE40)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_SUB_CHANNEL_ID_OFFSET UNITYSDK_OFFSET(0x19F11120)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_UAPC_OFFSET UNITYSDK_OFFSET(0x19F11590)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_CHANNEL_CONFIG_OFFSET UNITYSDK_OFFSET(0x19F0C420)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_COMBO_CONFIG_OFFSET UNITYSDK_OFFSET(0x19F0BE00)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_DOMAIN_PREFIX_OFFSET UNITYSDK_OFFSET(0x19F117A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x19F10230)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_VERSION_OFFSET UNITYSDK_OFFSET(0x19F10FC0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_VOLUME_OFFSET UNITYSDK_OFFSET(0x19F0B280)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_STEAM_ID_OFFSET UNITYSDK_OFFSET(0x19F0CA80)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_WEB_VIEW_ANIMATION_ENABLE_OFFSET UNITYSDK_OFFSET(0x19F11CE0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_WEB_VIEW_JOYPAD_CLOSE_ENABLE_OFFSET UNITYSDK_OFFSET(0x19F11D70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INITAUTHPARAMETER_OFFSET UNITYSDK_OFFSET(0x19F08630)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INIT_OFFSET UNITYSDK_OFFSET(0x19F09E30)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_ENV_OFFSET UNITYSDK_OFFSET(0x19C47210)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_GAMEBIZ_OFFSET UNITYSDK_OFFSET(0x19C47100)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_LANG_OFFSET UNITYSDK_OFFSET(0x19C47010)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_REGION_OFFSET UNITYSDK_OFFSET(0x19C471C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_USER_ID_OFFSET UNITYSDK_OFFSET(0x19C470B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_REPORT_EVENT_OFFSET UNITYSDK_OFFSET(0x19C464F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_CLOSE_ALL_UI_OFFSET UNITYSDK_OFFSET(0x19C45A80)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_ENABLE_AUTO_TEST_OFFSET UNITYSDK_OFFSET(0x19F117B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_ENABLE_UI_AUTO_TEST_OFFSET UNITYSDK_OFFSET(0x19F11830)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_GET_DISK_FREE_SPACE_OFFSET UNITYSDK_OFFSET(0x19F11250)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_OPEN_URL_OFFSET UNITYSDK_OFFSET(0x19F10CC0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_OFFSET UNITYSDK_OFFSET(0x19F11650)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_WITH_PARAMETERS_COMPLIANCE_OFFSET UNITYSDK_OFFSET(0x19F11730)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_WITH_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x19F116B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_EMAIL_OFFSET UNITYSDK_OFFSET(0x19F10790)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_MOBILE_OFFSET UNITYSDK_OFFSET(0x19F10810)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_OFFSET UNITYSDK_OFFSET(0x19F0CB20)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_REAL_NAME_OFFSET UNITYSDK_OFFSET(0x19F10890)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CHECK_DEVICE_LIMIT_OFFSET UNITYSDK_OFFSET(0x19C472B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_OFFSET UNITYSDK_OFFSET(0x19F109F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_PAY_OFFSET UNITYSDK_OFFSET(0x19F0F120)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x19F0E3A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CREATE_ROLE_OFFSET UNITYSDK_OFFSET(0x19F0DD50)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x19F0CB80)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_EXIT_OFFSET UNITYSDK_OFFSET(0x19F0BDA0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_ACCOUNT_NAME_OFFSET UNITYSDK_OFFSET(0x19F0E7F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_ASTERISK_NAME_OFFSET UNITYSDK_OFFSET(0x19F10B00)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_BIND_STATE_OFFSET UNITYSDK_OFFSET(0x19F104A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_PRICE_TIER_OFFSET UNITYSDK_OFFSET(0x19F0FB00)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_PRODUCT_LIST_OFFSET UNITYSDK_OFFSET(0x19F0FB90)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_CUSTOMER_SERVICE_OFFSET UNITYSDK_OFFSET(0x19F0E640)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_FORUM_OFFSET UNITYSDK_OFFSET(0x19F0DE50)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_SCAN_FUNC_OFFSET UNITYSDK_OFFSET(0x19F0F5D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x19F0DE90)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_BIND_MOBILE_OFFSET UNITYSDK_OFFSET(0x19F10370)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_REAL_NAME_OFFSET UNITYSDK_OFFSET(0x19F10400)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LEVEL_UP_OFFSET UNITYSDK_OFFSET(0x19F0DD60)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LIST_GOODS_OFFSET UNITYSDK_OFFSET(0x19F101C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGIN_OFFSET UNITYSDK_OFFSET(0x19F0B5C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGOUT_OFFSET UNITYSDK_OFFSET(0x19F0BAE0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGOUT_WITHOUT_CONFIRM_OFFSET UNITYSDK_OFFSET(0x19F0BC10)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_FORUM_OFFSET UNITYSDK_OFFSET(0x19F0DE70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_PROTOCOL_WEBVIEW_OFFSET UNITYSDK_OFFSET(0x19F10C60)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_USER_CENTER_OFFSET UNITYSDK_OFFSET(0x19F0E130)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_PAY_OFFSET UNITYSDK_OFFSET(0x19F0EEA0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_ACCOUNT_OFFSET UNITYSDK_OFFSET(0x19F10990)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_AUTO_TEST_ACCOUNT_OFFSET UNITYSDK_OFFSET(0x19F10A70)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_GUEST_FUNC_OFFSET UNITYSDK_OFFSET(0x19F0EC00)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_SERVER_ID_OFFSET UNITYSDK_OFFSET(0x19F0C8E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_SHOW_CLOSE_BTN_OFFSET UNITYSDK_OFFSET(0x19F0ECF0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SWITCH_ROLE_OFFSET UNITYSDK_OFFSET(0x19F0BD40)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_VERIFY_EMAIL_OFFSET UNITYSDK_OFFSET(0x19F10910)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET UNITYSDK_OFFSET(0x19F0D6F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NET_GET_HTTPDNS_CONFIG_OFFSET UNITYSDK_OFFSET(0x19F11C00)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CHECK_CUSTOM_POP_NOTICE_AND_RED_POINT_OFFSET UNITYSDK_OFFSET(0x19F0FAA0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CLOSE_CUSTOM_NOTICE_OFFSET UNITYSDK_OFFSET(0x19F0F8B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CLOSE_NOTICE_OFFSET UNITYSDK_OFFSET(0x19F0F660)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SET_NOTICE_URL_OFFSET UNITYSDK_OFFSET(0x19F10F10)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_CUSTOM_NOTICE_OFFSET UNITYSDK_OFFSET(0x19F0F840)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_CUSTOM_POP_NOTICE_OFFSET UNITYSDK_OFFSET(0x19F0F910)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_NOTICE_OFFSET UNITYSDK_OFFSET(0x19F0F5F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_POP_IMAGE_OFFSET UNITYSDK_OFFSET(0x19F10E30)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_POP_NOTICE_OFFSET UNITYSDK_OFFSET(0x19F0F6C0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x19F089F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x19F08D00)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19F09190)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONDOWNLOADNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x19F09210)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONNOTIFICATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x19F091E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_REPORT_SET_INFO_OFFSET UNITYSDK_OFFSET(0x19F110A0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_SDKINVOKE_OFFSET UNITYSDK_OFFSET(0x19F094B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_SETHTTPSERVERENABLE_OFFSET UNITYSDK_OFFSET(0x19F09270)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_START_OFFSET UNITYSDK_OFFSET(0x19F09140)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SET_TOKEN_OFFSET UNITYSDK_OFFSET(0x19C45B80)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SHOW_BBS_AGREEMENT_OFFSET UNITYSDK_OFFSET(0x19C46030)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SHOW_UGC_PROTOCOL_OFFSET UNITYSDK_OFFSET(0x19C46290)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_DO_ACTION_OFFSET UNITYSDK_OFFSET(0x19F0B960)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_MANUALLY_SHOW_OFFSET UNITYSDK_OFFSET(0x19F0BA60)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_REGISTER_OFFSET UNITYSDK_OFFSET(0x19F0B9E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x19F11BA0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x19F11B40)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_GET_APP_AVAILABLE_MEM_OFFSET UNITYSDK_OFFSET(0x19F11EB0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_MEM_ALLOC_OFFSET UNITYSDK_OFFSET(0x19F11EC0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_MEM_RELEASE_OFFSET UNITYSDK_OFFSET(0x19F11ED0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_GET_RUNTIME_MEM_OFFSET UNITYSDK_OFFSET(0x19F11EA0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_LOAD_URL_OFFSET UNITYSDK_OFFSET(0x19F11190)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_CLOSE_BUTTON_TYPE_OFFSET UNITYSDK_OFFSET(0x19F11470)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_ENABLE_OFFSET UNITYSDK_OFFSET(0x19F112D0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_EXCHANGE_OFFSET UNITYSDK_OFFSET(0x19F113F0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_TYPE_OFFSET UNITYSDK_OFFSET(0x19F11370)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_LINEAR_OFFSET UNITYSDK_OFFSET(0x19F11280)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_USERAGENT_OFFSET UNITYSDK_OFFSET(0x19F11210)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C476E0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL__CTOR_OFFSET UNITYSDK_OFFSET(0x19C476D0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int MiHoYoSDKDll_TypeDefinitionIndex = 9099;

	class MiHoYoSDKDll : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_authTicket()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xEB40);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters1()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xEB48);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters0()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xEB50);
		}
		static ::System::Type** StaticGet_miHoYoDll()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xEB58);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_parameters2()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xEB60);
		}
		static ::System::String** StaticGet_deferredDeepLink()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xEB68);
		}
		static ::System::String** StaticGet_traceId()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xEB70);
		}
		static ::System::String** StaticGet_thirdpartyType()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0xEB78);
		}
		static ::MiHoYo::SDK::SubChannelType* StaticGet_subChannel()
		{
			return (::MiHoYo::SDK::SubChannelType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x50C0);
		}
		static ::System::Boolean* StaticGet_sm_bNeedUpdateNativeConfig()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x50C4);
		}
		static ::System::Boolean* StaticGet_isSetEnv()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x50C5);
		}
		static ::System::Boolean* StaticGet_sm_bNeedSyncConfig()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x50C6);
		}
		static ::System::Boolean* StaticGet_isInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x50C7);
		}
		static ::System::Boolean* StaticGet_couldLogin()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x50C8);
		}
		static ::MiHoYo::SDK::ChannelType* StaticGet_channel()
		{
			return (::MiHoYo::SDK::ChannelType*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_TypeDefinitionIndex)->GetStaticField(0x50CC);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_AWAKE_OFFSET))(this);
		}

		static ::System::Void InitAuthParameter()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INITAUTHPARAMETER_OFFSET))();
		}

		static ::System::String* GetDeferredDeeplink()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_GETDEFERREDDEEPLINK_OFFSET))();
		}

		::System::Void OnApplicationFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONAPPLICATIONFOCUS_OFFSET))(this, a1);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnNotificationCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONNOTIFICATIONCALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnDownloadNotification(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ONDOWNLOADNOTIFICATION_OFFSET))(this, a1);
		}

		::System::Void AddInputField(::UnityEngine::UI::InputField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ADDINPUTFIELD_OFFSET))(this, a1);
		}

		static ::System::Void SetHttpServerEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_SETHTTPSERVERENABLE_OFFSET))(a1);
		}

		static ::System::Boolean CheckBlackInvokeList(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CHECKBLACKINVOKELIST_OFFSET))(a1);
		}

		static ::System::String* SDKInvoke(::System::String* a1, ::System::String* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_SDKINVOKE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Init(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INIT_OFFSET))(a1);
		}

		static ::System::String* all_set_env(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_ENV_OFFSET))(a1);
		}

		static ::System::String* all_set_env_and_gamebiz(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_ENV_AND_GAMEBIZ_OFFSET))(a1);
		}

		static ::System::String* all_set_volume(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_VOLUME_OFFSET))(a1);
		}

		static ::System::String* info_set_game_volume(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_VOLUME_OFFSET))(a1);
		}

		static ::System::String* login_login(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGIN_OFFSET))(a1);
		}

		static ::System::Void ui_plugin_do_action(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_DO_ACTION_OFFSET))(a1, a2);
		}

		static ::System::Void ui_plugin_register(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_REGISTER_OFFSET))(a1);
		}

		static ::System::Void ui_plugin_manually_show(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UI_PLUGIN_MANUALLY_SHOW_OFFSET))(a1, a2);
		}

		static ::System::String* login_logout(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGOUT_OFFSET))(a1);
		}

		static ::System::String* login_logout_without_confirm(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LOGOUT_WITHOUT_CONFIRM_OFFSET))(a1);
		}

		static ::System::String* login_switch_role(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SWITCH_ROLE_OFFSET))(a1);
		}

		static ::System::String* login_exit(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_EXIT_OFFSET))(a1);
		}

		static ::System::String* info_set_combo_config(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_COMBO_CONFIG_OFFSET))(a1);
		}

		static ::System::String* info_set_channel_config(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_CHANNEL_CONFIG_OFFSET))(a1);
		}

		static ::System::String* login_set_server_id(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_SERVER_ID_OFFSET))(a1);
		}

		static ::System::String* info_set_steam_id(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_STEAM_ID_OFFSET))(a1);
		}

		static ::System::String* login_bind(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_OFFSET))(a1);
		}

		static ::System::String* login_enter_game(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_ENTER_GAME_OFFSET))(a1);
		}

		static ::System::String* login_will_enter_game(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_WILL_ENTER_GAME_OFFSET))(a1, a2);
		}

		static ::System::String* login_create_role(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CREATE_ROLE_OFFSET))(a1);
		}

		static ::System::String* login_level_up(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LEVEL_UP_OFFSET))(a1);
		}

		static ::System::String* login_has_forum()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_FORUM_OFFSET))();
		}

		static ::System::String* login_open_forum()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_FORUM_OFFSET))();
		}

		static ::System::String* login_has_user_center()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_USER_CENTER_OFFSET))();
		}

		static ::System::String* login_open_user_center(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_USER_CENTER_OFFSET))(a1);
		}

		static ::System::String* login_close_user_center()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_USER_CENTER_OFFSET))();
		}

		static ::System::String* login_has_customer_service()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_CUSTOMER_SERVICE_OFFSET))();
		}

		static ::System::String* all_set_device_id(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_DEVICE_ID_OFFSET))(a1);
		}

		static ::System::String* info_get_device_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEVICE_ID_OFFSET))();
		}

		static ::System::String* info_get_device_fingerprint()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEVICE_FINGERPRINT_OFFSET))();
		}

		static ::System::String* login_get_account_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_ACCOUNT_NAME_OFFSET))();
		}

		static ::System::String* all_set_language(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_SET_LANGUAGE_OFFSET))(a1);
		}

		static ::System::String* all_get_language()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ALL_GET_LANGUAGE_OFFSET))();
		}

		static ::System::String* login_set_guest_func(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_GUEST_FUNC_OFFSET))(a1);
		}

		static ::System::String* login_set_show_close_btn(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_SHOW_CLOSE_BTN_OFFSET))(a1);
		}

		static ::System::String* info_get_channel_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CHANNEL_ID_OFFSET))();
		}

		static ::System::String* info_get_region_multiple_language(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_REGION_MULTIPLE_LANGUAGE_OFFSET))(a1);
		}

		static ::System::String* login_pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_PAY_OFFSET))(a1, a2);
		}

		static ::System::String* login_close_pay()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_PAY_OFFSET))();
		}

		static ::System::String* login_has_scan_func()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_HAS_SCAN_FUNC_OFFSET))();
		}

		static ::System::String* notice_show_notice(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_NOTICE_OFFSET))(a1, a2);
		}

		static ::System::String* notice_close_notice()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CLOSE_NOTICE_OFFSET))();
		}

		static ::System::String* notice_show_pop_notice()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_POP_NOTICE_OFFSET))();
		}

		static ::System::String* notice_show_custom_notice(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_CUSTOM_NOTICE_OFFSET))(a1, a2);
		}

		static ::System::String* notice_close_custom_notice()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CLOSE_CUSTOM_NOTICE_OFFSET))();
		}

		static ::System::String* notice_show_custom_pop_notice(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_CUSTOM_POP_NOTICE_OFFSET))(a1, a2);
		}

		static ::System::String* notice_check_custom_pop_notice_and_red_point(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_CHECK_CUSTOM_POP_NOTICE_AND_RED_POINT_OFFSET))(a1, a2);
		}

		static ::System::String* login_get_price_tier(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_PRICE_TIER_OFFSET))(a1, a2);
		}

		static ::System::String* login_get_product_list(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_PRODUCT_LIST_OFFSET))(a1, a2);
		}

		static ::System::String* login_list_goods(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_LIST_GOODS_OFFSET))(a1, a2);
		}

		static ::System::String* info_set_game_parameters(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_PARAMETERS_OFFSET))(a1);
		}

		static ::System::String* login_is_account_bind_mobile()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_BIND_MOBILE_OFFSET))();
		}

		static ::System::String* login_is_account_real_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_IS_ACCOUNT_REAL_NAME_OFFSET))();
		}

		static ::System::String* login_get_bind_state()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_BIND_STATE_OFFSET))();
		}

		static ::System::Void login_bind_email(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_EMAIL_OFFSET))(a1);
		}

		static ::System::Void login_bind_mobile(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_MOBILE_OFFSET))(a1);
		}

		static ::System::Void login_bind_real_name(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_BIND_REAL_NAME_OFFSET))(a1);
		}

		static ::System::Void login_verify_email(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_VERIFY_EMAIL_OFFSET))(a1);
		}

		static ::System::String* login_set_account(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_ACCOUNT_OFFSET))(a1);
		}

		static ::System::String* login_close()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CLOSE_OFFSET))();
		}

		static ::System::String* login_set_auto_test_account(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_SET_AUTO_TEST_ACCOUNT_OFFSET))(a1);
		}

		static ::System::String* login_get_asterisk_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_GET_ASTERISK_NAME_OFFSET))();
		}

		static ::System::String* login_open_protocol_webview(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_OPEN_PROTOCOL_WEBVIEW_OFFSET))(a1);
		}

		static ::System::String* launch_open_url(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_OPEN_URL_OFFSET))(a1);
		}

		static ::System::String* notice_show_pop_image(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SHOW_POP_IMAGE_OFFSET))(a1);
		}

		static ::System::String* notice_set_notice_url(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NOTICE_SET_NOTICE_URL_OFFSET))(a1);
		}

		static ::System::String* info_set_game_version(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_GAME_VERSION_OFFSET))(a1);
		}

		static ::System::String* report_set_info(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_REPORT_SET_INFO_OFFSET))(a1);
		}

		static ::System::String* info_get_sub_channel_id()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_SUB_CHANNEL_ID_OFFSET))();
		}

		static ::System::String* web_load_url(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_LOAD_URL_OFFSET))(a1);
		}

		static ::System::String* web_set_useragent(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_USERAGENT_OFFSET))(a1);
		}

		static ::System::String* launch_get_disk_free_space()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_GET_DISK_FREE_SPACE_OFFSET))();
		}

		static ::System::String* web_set_linear(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_LINEAR_OFFSET))(a1);
		}

		static ::System::String* web_set_joypad_enable(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_ENABLE_OFFSET))(a1);
		}

		static ::System::String* web_set_joypad_type(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_TYPE_OFFSET))(a1);
		}

		static ::System::String* web_set_joypad_exchange(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_EXCHANGE_OFFSET))(a1);
		}

		static ::System::String* web_set_joypad_close_button_type(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_SET_JOYPAD_CLOSE_BUTTON_TYPE_OFFSET))(a1);
		}

		static ::System::String* info_get_cps()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CPS_OFFSET))();
		}

		static ::System::String* info_get_uapc()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_UAPC_OFFSET))();
		}

		static ::System::String* launch_show_user_agreement(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_OFFSET))(a1);
		}

		static ::System::String* launch_show_user_agreement_with_parameters(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_WITH_PARAMETERS_OFFSET))(a1, a2);
		}

		static ::System::String* launch_show_user_agreement_with_parameters_compliance(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_SHOW_USER_AGREEMENT_WITH_PARAMETERS_COMPLIANCE_OFFSET))(a1, a2);
		}

		static ::System::String* info_set_domain_prefix(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_SET_DOMAIN_PREFIX_OFFSET))(a1);
		}

		static ::System::String* launch_enable_auto_test(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_ENABLE_AUTO_TEST_OFFSET))(a1);
		}

		static ::System::String* launch_enable_ui_auto_test(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_ENABLE_UI_AUTO_TEST_OFFSET))(a1);
		}

		static ::System::Boolean CheckInit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CHECKINIT_OFFSET))();
		}

		static ::System::String* get_thread_count(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_THREAD_COUNT_OFFSET))(a1);
		}

		static ::System::String* get_memory_size(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_MEMORY_SIZE_OFFSET))(a1);
		}

		static ::System::String* watermark_set_enable(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WATERMARK_SET_ENABLE_OFFSET))(a1);
		}

		static ::System::String* watermark_set_config(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WATERMARK_SET_CONFIG_OFFSET))(a1);
		}

		static ::System::String* net_get_httpdns_config(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_NET_GET_HTTPDNS_CONFIG_OFFSET))(a1);
		}

		static ::System::String* get_disk_type(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_GET_DISK_TYPE_OFFSET))(a1);
		}

		static ::System::Void info_web_view_animation_enable(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_WEB_VIEW_ANIMATION_ENABLE_OFFSET))(a1);
		}

		static ::System::Void info_web_view_joypad_close_enable(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_WEB_VIEW_JOYPAD_CLOSE_ENABLE_OFFSET))(a1);
		}

		static ::System::String* camera_set_ui_camera(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_CAMERA_SET_UI_CAMERA_OFFSET))(a1);
		}

		static ::System::String* web_get_runtime_mem(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEB_GET_RUNTIME_MEM_OFFSET))(a1);
		}

		static ::System::String* webview_get_app_available_mem(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_GET_APP_AVAILABLE_MEM_OFFSET))(a1);
		}

		static ::System::Void webview_mem_alloc(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_MEM_ALLOC_OFFSET))(a1);
		}

		static ::System::Void webview_mem_release(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_WEBVIEW_MEM_RELEASE_OFFSET))(a1);
		}

		static ::System::String* info_get_deferred_deeplink()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_DEFERRED_DEEPLINK_OFFSET))();
		}

		static ::System::Void info_clear_deferred_deeplink()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_CLEAR_DEFERRED_DEEPLINK_OFFSET))();
		}

		static ::System::String* launch_close_all_ui(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LAUNCH_CLOSE_ALL_UI_OFFSET))(a1, a2);
		}

		static ::System::String* ugc_set_token(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SET_TOKEN_OFFSET))(a1, a2);
		}

		static ::System::String* ugc_show_bbs_agreement(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SHOW_BBS_AGREEMENT_OFFSET))(a1, a2);
		}

		static ::System::String* ugc_show_ugc_protocol(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_UGC_SHOW_UGC_PROTOCOL_OFFSET))(a1, a2);
		}

		static ::System::Void inner_sdk_inner_report_event(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_REPORT_EVENT_OFFSET))(a1);
		}

		static ::System::String* inner_sdk_inner_get_lang(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_LANG_OFFSET))(a1);
		}

		static ::System::String* inner_sdk_inner_get_user_id(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_USER_ID_OFFSET))(a1);
		}

		static ::System::String* inner_sdk_inner_get_gamebiz(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_GAMEBIZ_OFFSET))(a1);
		}

		static ::System::String* inner_sdk_inner_get_region(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_REGION_OFFSET))(a1);
		}

		static ::System::String* inner_sdk_inner_get_env(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INNER_SDK_INNER_GET_ENV_OFFSET))(a1);
		}

		static ::System::String* login_check_device_limit(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_LOGIN_CHECK_DEVICE_LIMIT_OFFSET))(a1, a2);
		}

		static ::System::String* info_get_client_type()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_INFO_GET_CLIENT_TYPE_OFFSET))();
		}

		static ::System::Boolean EnableNativeDelegate(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_ENABLENATIVEDELEGATE_OFFSET))(a1);
		}
	};
}
