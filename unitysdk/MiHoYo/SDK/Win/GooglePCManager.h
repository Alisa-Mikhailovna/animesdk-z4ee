#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class GoogleOAuthServer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_AUTOCHECKENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x19EBE890)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_CHECKCHANNEL_OFFSET UNITYSDK_OFFSET(0x19E9F620)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_CHECKOAUTHRESULT_OFFSET UNITYSDK_OFFSET(0x19EBABB0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_CHECKOUTENTITLEMENTS_OFFSET UNITYSDK_OFFSET(0x19EBD9E0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_DETECTPAY_OFFSET UNITYSDK_OFFSET(0x19EBDDA0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_GETPRODUCTLIST_OFFSET UNITYSDK_OFFSET(0x19EBBC90)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x19EBA7E0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_LOGINAUTHSUCCESS_OFFSET UNITYSDK_OFFSET(0x19EBB020)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_LOGINCHECKOAUTH_OFFSET UNITYSDK_OFFSET(0x19EBA820)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONAUTHCALLBACKFAILED_OFFSET UNITYSDK_OFFSET(0x19EBBBB0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONBACKAUTH_OFFSET UNITYSDK_OFFSET(0x19EBB350)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONFINISHAUTH_OFFSET UNITYSDK_OFFSET(0x19EBB540)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONGETPRODUCTLISTERROR_OFFSET UNITYSDK_OFFSET(0x19EBC340)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONGOOGLEPCTOKENERROR_OFFSET UNITYSDK_OFFSET(0x19EBCBB0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONPAYCALLBACKCANCEL_OFFSET UNITYSDK_OFFSET(0x19EBE3A0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONPAYCALLBACKFAIL_OFFSET UNITYSDK_OFFSET(0x19EBCE00)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONPAYCALLBACKSUCCESS_OFFSET UNITYSDK_OFFSET(0x19EBE690)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONSTARTAUTH_OFFSET UNITYSDK_OFFSET(0x19EBB320)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_PAY_1_OFFSET UNITYSDK_OFFSET(0x19EBD380)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_PAY_OFFSET UNITYSDK_OFFSET(0x19E9F680)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_REQUESTGOOGLEQUERYGOODS_OFFSET UNITYSDK_OFFSET(0x19EBC5A0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_REQUESTOAUTHINFO_OFFSET UNITYSDK_OFFSET(0x19EBA8B0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_REQUESTOAUTHRESULT_OFFSET UNITYSDK_OFFSET(0x19EBAC70)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_SHOWAUTHERROR_OFFSET UNITYSDK_OFFSET(0x19EBBA20)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_SHOWGOOGLEWEBPAY_OFFSET UNITYSDK_OFFSET(0x19EBD790)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER_SHOWTIPS_OFFSET UNITYSDK_OFFSET(0x19EBB9C0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EBE8B0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER__CHECKOAUTHRESULT_B__14_0_OFFSET UNITYSDK_OFFSET(0x19EBEFA0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19EBE8A0)
#define MIHOYO_SDK_WIN_GOOGLEPCMANAGER__LOGINCHECKOAUTH_B__13_0_OFFSET UNITYSDK_OFFSET(0x19EBE8E0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GooglePCManager_TypeDefinitionIndex = 9006;

	class GooglePCManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::GooglePCManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::GooglePCManager**)Il2CppClass::FromTypeDefinitionIndex(GooglePCManager_TypeDefinitionIndex)->GetStaticField(0x21470);
		}
		::MiHoYo::SDK::AccountModel* accountModel; // 0x10
		::System::Action_1<::System::String*>* OnAuthFailed; // 0x18
		::System::Action_1<::System::String*>* payCallback; // 0x20
		::System::Action* OnBack; // 0x28
		::MiHoYo::SDK::JSONNode* gamePayInfo; // 0x30
		::System::Action* OnAuthSuccess; // 0x38
		::MiHoYo::SDK::Win::GoogleOAuthServer* server; // 0x40
		::System::String* payDeepLink; // 0x48
		::System::String* oauthDeepLink; // 0x50
		::System::Boolean isPaying; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_INIT_OFFSET))(this);
		}

		static ::System::Boolean CheckChannel()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_CHECKCHANNEL_OFFSET))();
		}

		::System::Void LoginCheckOAuth(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_LOGINCHECKOAUTH_OFFSET))(this, a1);
		}

		::System::Void CheckOAuthResult(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_CHECKOAUTHRESULT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LoginAuthSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_LOGINAUTHSUCCESS_OFFSET))(this);
		}

		::System::Void OnStartAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONSTARTAUTH_OFFSET))(this);
		}

		::System::Void OnBackAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONBACKAUTH_OFFSET))(this);
		}

		::System::Void OnFinishAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONFINISHAUTH_OFFSET))(this);
		}

		::System::Void ShowAuthError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_SHOWAUTHERROR_OFFSET))(this, a1);
		}

		::System::Void OnAuthCallbackFailed(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONAUTHCALLBACKFAILED_OFFSET))(this, a1);
		}

		::System::Void GetProductList(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_GETPRODUCTLIST_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetProductListError(::System::Action_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONGETPRODUCTLISTERROR_OFFSET))(this, a1, a2);
		}

		::System::Void OnGooglePCTokenError(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONGOOGLEPCTOKENERROR_OFFSET))(this, a1);
		}

		::System::Void Pay(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_PAY_OFFSET))(this, a1, a2);
		}

		::System::Void Pay_1(::MiHoYo::SDK::JSONNode* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_PAY_1_OFFSET))(this, a1, a2);
		}

		::System::Void ShowGoogleWebPay(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_SHOWGOOGLEWEBPAY_OFFSET))(this, a1, a2);
		}

		::System::Void CheckoutEntitlements(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_CHECKOUTENTITLEMENTS_OFFSET))(this, a1);
		}

		::System::Void RequestOAuthInfo(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_REQUESTOAUTHINFO_OFFSET))(this, a1, a2);
		}

		::System::Void RequestOAuthResult(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_REQUESTOAUTHRESULT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void RequestGoogleQueryGoods(::System::String* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_REQUESTGOOGLEQUERYGOODS_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void DetectPay(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a9)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_DETECTPAY_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void OnPayCallbackFail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONPAYCALLBACKFAIL_OFFSET))(this, a1);
		}

		::System::Void OnPayCallbackCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONPAYCALLBACKCANCEL_OFFSET))(this);
		}

		::System::Void OnPayCallbackSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_ONPAYCALLBACKSUCCESS_OFFSET))(this);
		}

		::System::Void ShowTips(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_SHOWTIPS_OFFSET))(this, a1);
		}

		::System::Void AutoCheckEntitlements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER_AUTOCHECKENTITLEMENTS_OFFSET))(this);
		}

		::System::Void _LoginCheckOAuth_b__13_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER__LOGINCHECKOAUTH_B__13_0_OFFSET))(this, a1);
		}

		::System::Void _CheckOAuthResult_b__14_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCMANAGER__CHECKOAUTHRESULT_B__14_0_OFFSET))(this, a1);
		}
	};
}
