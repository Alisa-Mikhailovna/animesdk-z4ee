#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/ABTestManager_ABTestKind.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Base::ABTestPlatform::Const { class ABTestRequestParam; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_GETABTESTKEY_OFFSET UNITYSDK_OFFSET(0x19D60C60)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_GETABTESTREQUESTPARAM_OFFSET UNITYSDK_OFFSET(0x19D62750)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_GETHOYOPASSABMODEL_OFFSET UNITYSDK_OFFSET(0x19D616D0)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_GETRENDERMETHODABMODEL_OFFSET UNITYSDK_OFFSET(0x19D61AA0)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_LOADALLABTESTRESULT_OFFSET UNITYSDK_OFFSET(0x19D63800)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_ONCOMBOINITFAILED_OFFSET UNITYSDK_OFFSET(0x19D632F0)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_ONCOMBOINITSUCCESS_OFFSET UNITYSDK_OFFSET(0x19D634C0)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_REQUESTALLACCOUNTABTEST_OFFSET UNITYSDK_OFFSET(0x19D62810)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_REQUESTLEGACYABTEST_OFFSET UNITYSDK_OFFSET(0x19D62110)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER_REQUESTWEBVIEWRENDERMETHODABTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x19D621A0)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D63820)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D63810)
#define MIHOYO_SDK_PC_OS_ABTESTMANAGER__REQUESTWEBVIEWRENDERMETHODABTESTCONFIG_B__11_0_OFFSET UNITYSDK_OFFSET(0x19D63850)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int ABTestManager_TypeDefinitionIndex = 8420;

	class ABTestManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::ABTestManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::ABTestManager**)Il2CppClass::FromTypeDefinitionIndex(ABTestManager_TypeDefinitionIndex)->GetStaticField(0x23EF0);
		}
		// static const ::System::String* MODULE_NAME; // 0x0
		// static const ::System::String* HOYOPASS_ENABLE; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER__CCTOR_OFFSET))();
		}

		::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam* GetHoYoPassABModel()
		{
			return ((::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_GETHOYOPASSABMODEL_OFFSET))(this);
		}

		::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam* GetRenderMethodABModel()
		{
			return ((::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_GETRENDERMETHODABMODEL_OFFSET))(this);
		}

		::System::Void RequestLegacyABTest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_REQUESTLEGACYABTEST_OFFSET))(this);
		}

		::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam* GetABTestRequestParam(::MiHoYo::SDK::PC::OS::ABTestManager_ABTestKind a1)
		{
			return ((::MiHoYo::SDK::Base::ABTestPlatform::Const::ABTestRequestParam*(*)(::PVOID, ::MiHoYo::SDK::PC::OS::ABTestManager_ABTestKind))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_GETABTESTREQUESTPARAM_OFFSET))(this, a1);
		}

		::System::Void RequestAllAccountABTest(::System::Collections::Generic::List_1<::MiHoYo::SDK::PC::OS::ABTestManager_ABTestKind>* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PC::OS::ABTestManager_ABTestKind>*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_REQUESTALLACCOUNTABTEST_OFFSET))(this, a1, a2);
		}

		::System::Void OnComboInitSuccess(::System::Action_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_ONCOMBOINITSUCCESS_OFFSET))(this, a1, a2);
		}

		::System::Void OnComboInitFailed(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_ONCOMBOINITFAILED_OFFSET))(this, a1);
		}

		::System::Void RequestWebViewRenderMethodABTestConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_REQUESTWEBVIEWRENDERMETHODABTESTCONFIG_OFFSET))(this);
		}

		::System::Void LoadAllABTestResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_LOADALLABTESTRESULT_OFFSET))(this);
		}

		::System::String* GetABTestKey(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER_GETABTESTKEY_OFFSET))(this, a1, a2);
		}

		::System::Void _RequestWebViewRenderMethodABTestConfig_b__11_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_ABTESTMANAGER__REQUESTWEBVIEWRENDERMETHODABTESTCONFIG_B__11_0_OFFSET))(this, a1);
		}
	};
}
