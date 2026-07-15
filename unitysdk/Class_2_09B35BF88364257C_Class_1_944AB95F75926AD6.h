#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2C2DA62D5BBB20B1_PreloadType.h"
#include "unitysdk/System/Object.h"

namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace RPG::Client { class BattleAssetPreload_CharacterPreloadGroupBase; }
namespace System { class String; }

#define CLASS_2_09B35BF88364257C_CLASS_1_944AB95F75926AD6_CLEAR_OFFSET UNITYSDK_OFFSET(0xAE33A80)
#define CLASS_2_09B35BF88364257C_CLASS_1_944AB95F75926AD6_METHOD_1_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xAE33320)
#define CLASS_2_09B35BF88364257C_CLASS_1_944AB95F75926AD6_METHOD_1_6CEB13E5CE1E4BCD_OFFSET UNITYSDK_OFFSET(0xAE32D10)
#define CLASS_2_09B35BF88364257C_CLASS_1_944AB95F75926AD6__CTOR_OFFSET UNITYSDK_OFFSET(0xAE33B60)

inline static constexpr unsigned int Class_2_09B35BF88364257C_Class_1_944AB95F75926AD6_TypeDefinitionIndex = 57058;

class Class_2_09B35BF88364257C_Class_1_944AB95F75926AD6 : public ::System::Object
{
public:
	::Collections::Pooled::PooledDictionary_2<::System::String*, ::Class_1_2C2DA62D5BBB20B1_PreloadType>* Field_1_0; // 0x10
	::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* Field_1_1; // 0x18
	::Collections::Pooled::PooledDictionary_2<::System::String*, ::Class_1_2C2DA62D5BBB20B1_PreloadType>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09B35BF88364257C_CLASS_1_944AB95F75926AD6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09B35BF88364257C_CLASS_1_944AB95F75926AD6_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_6CEB13E5CE1E4BCD(::System::String* a1, ::Class_1_2C2DA62D5BBB20B1_PreloadType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_2C2DA62D5BBB20B1_PreloadType))((::PBYTE)hIl2Cpp + CLASS_2_09B35BF88364257C_CLASS_1_944AB95F75926AD6_METHOD_1_6CEB13E5CE1E4BCD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_66CC9828DB1F478F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09B35BF88364257C_CLASS_1_944AB95F75926AD6_METHOD_1_66CC9828DB1F478F_OFFSET))(this);
	}
};
