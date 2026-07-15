#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AK/Wwise/BaseType.h"
#include "unitysdk/WwiseObjectType.h"

class AkCallbackManager_BankCallback;
class WwiseBankReference;
class WwiseObjectReference;

#define AK_WWISE_BANK_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1D199580)
#define AK_WWISE_BANK_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1D199600)
#define AK_WWISE_BANK_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x1D199C80)
#define AK_WWISE_BANK_LOAD_OFFSET UNITYSDK_OFFSET(0x1D199610)
#define AK_WWISE_BANK_SET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1D199590)
#define AK_WWISE_BANK_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1D19A090)
#define AK_WWISE_BANK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D19A340)

namespace AK::Wwise
{
	inline static constexpr unsigned int Bank_TypeDefinitionIndex = 42174;

	class Bank : public ::AK::Wwise::BaseType
	{
	public:
		::WwiseBankReference* WwiseObjectReference; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BANK__CTOR_OFFSET))(this);
		}

		::WwiseObjectReference* get_ObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BANK_GET_OBJECTREFERENCE_OFFSET))(this);
		}

		::System::Void set_ObjectReference(::WwiseObjectReference* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WwiseObjectReference*))((::PBYTE)hIl2Cpp + AK_WWISE_BANK_SET_OBJECTREFERENCE_OFFSET))(this, a1);
		}

		::WwiseObjectType get_WwiseObjectType()
		{
			return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BANK_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

		::System::Void Load(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AK_WWISE_BANK_LOAD_OFFSET))(this, a1, a2);
		}

		::System::Void LoadAsync(::AkCallbackManager_BankCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AkCallbackManager_BankCallback*))((::PBYTE)hIl2Cpp + AK_WWISE_BANK_LOADASYNC_OFFSET))(this, a1);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BANK_UNLOAD_OFFSET))(this);
		}
	};
}
