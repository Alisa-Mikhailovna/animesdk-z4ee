#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/GameCore/CharacterVOType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class AkCallbackInfo;
class Class_0_16E4307DCC419505_425;
namespace RPG::Client { class GameObjectAudio; }
namespace RPG::GameCore { class AutoFightVORow; }
namespace RPG::GameCore { class AvatarVORow; }
namespace RPG::GameCore { class GridFightRoleOverrideVOConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C33B4E1136A08D50_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1477D430)
#define CLASS_2_C33B4E1136A08D50_GET_HEALTHLOWPLAYED_OFFSET UNITYSDK_OFFSET(0x1477F2E0)
#define CLASS_2_C33B4E1136A08D50_GET_SKILLREADYPLAYED_OFFSET UNITYSDK_OFFSET(0x1477F2C0)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x1477E960)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_1485D2E561262682_OFFSET UNITYSDK_OFFSET(0x1477E8E0)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_24CFA0BD01CD3E33_OFFSET UNITYSDK_OFFSET(0x1477DC30)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_4A3FC5B2985E26C8_OFFSET UNITYSDK_OFFSET(0x1477EC90)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_6D50DE64A8D3B5FE_OFFSET UNITYSDK_OFFSET(0x1477E3B0)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_6FA91C84727B1F32_OFFSET UNITYSDK_OFFSET(0x1477E020)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_799DACEAB56FE8EF_OFFSET UNITYSDK_OFFSET(0x1477EDE0)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x1477E6B0)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_96C88D5424560008_OFFSET UNITYSDK_OFFSET(0x1477F0A0)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x1477D670)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_9B3E928DD44EEB3D_OFFSET UNITYSDK_OFFSET(0x1477D990)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_AE9C00908C91A033_OFFSET UNITYSDK_OFFSET(0x1477E1A0)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_C47A6EBDAFAB8B19_OFFSET UNITYSDK_OFFSET(0x1477F230)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_E64359669D8372F3_OFFSET UNITYSDK_OFFSET(0x1477EB70)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_EAA92E508F834FB8_OFFSET UNITYSDK_OFFSET(0x1477EF00)
#define CLASS_2_C33B4E1136A08D50_METHOD_2_EDB0D8DA4A269034_OFFSET UNITYSDK_OFFSET(0x1477E9F0)
#define CLASS_2_C33B4E1136A08D50_SET_HEALTHLOWPLAYED_OFFSET UNITYSDK_OFFSET(0x1477F2F0)
#define CLASS_2_C33B4E1136A08D50_SET_SKILLREADYPLAYED_OFFSET UNITYSDK_OFFSET(0x1477F2D0)
#define CLASS_2_C33B4E1136A08D50__CTOR_OFFSET UNITYSDK_OFFSET(0x1477F300)

inline static constexpr unsigned int Class_2_C33B4E1136A08D50_TypeDefinitionIndex = 54657;

class Class_2_C33B4E1136A08D50 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CharacterVOType>* Field_2_0; // 0x18
	::System::String* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::CharacterVOType>* Field_2_2; // 0x28
	::RPG::Client::GameObjectAudio* Field_2_3; // 0x30
	::System::String* Field_2_4; // 0x38
	::RPG::GameCore::GridFightRoleOverrideVOConfigRow* Field_2_5; // 0x40
	::RPG::GameCore::CharacterVOType Field_2_6; // 0x48
	::System::Boolean Field_2_7; // 0x4C
	::System::Boolean _HealthLowPlayed_k__BackingField; // 0x4D
	::System::Boolean _SkillReadyPlayed_k__BackingField; // 0x4E
	::System::UInt32 Field_2_10; // 0x50
	::System::UInt32 Field_2_11; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_2_9B3E928DD44EEB3D(::RPG::GameCore::CharacterVOType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_9B3E928DD44EEB3D_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE9C00908C91A033(::Il2CppArray<::RPG::GameCore::CharacterVOType>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::CharacterVOType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_AE9C00908C91A033_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6D50DE64A8D3B5FE(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_6D50DE64A8D3B5FE_OFFSET))(this, a1);
	}

	::System::Void Method_2_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDB0D8DA4A269034(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_EDB0D8DA4A269034_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_24CFA0BD01CD3E33(::RPG::GameCore::CharacterVOType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_24CFA0BD01CD3E33_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4A3FC5B2985E26C8(::RPG::GameCore::CharacterVOType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_4A3FC5B2985E26C8_OFFSET))(this, a1);
	}

	::System::String* Method_2_6FA91C84727B1F32(::RPG::GameCore::CharacterVOType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_6FA91C84727B1F32_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8F059A365E90744C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_8F059A365E90744C_OFFSET))(this);
	}

	::System::Boolean Method_2_1485D2E561262682()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_1485D2E561262682_OFFSET))(this);
	}

	::System::UInt32 Method_2_799DACEAB56FE8EF(::RPG::GameCore::AvatarVORow* a1, ::RPG::GameCore::CharacterVOType a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarVORow*, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_799DACEAB56FE8EF_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_E64359669D8372F3(::RPG::GameCore::AutoFightVORow* a1, ::RPG::GameCore::CharacterVOType a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AutoFightVORow*, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_E64359669D8372F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EAA92E508F834FB8(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_EAA92E508F834FB8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_96C88D5424560008(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_96C88D5424560008_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C47A6EBDAFAB8B19(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_METHOD_2_C47A6EBDAFAB8B19_OFFSET))(this, a1);
	}

	::System::Boolean get_SkillReadyPlayed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_GET_SKILLREADYPLAYED_OFFSET))(this);
	}

	::System::Void set_SkillReadyPlayed(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_SET_SKILLREADYPLAYED_OFFSET))(this, a1);
	}

	::System::Boolean get_HealthLowPlayed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_GET_HEALTHLOWPLAYED_OFFSET))(this);
	}

	::System::Void set_HealthLowPlayed(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C33B4E1136A08D50_SET_HEALTHLOWPLAYED_OFFSET))(this, a1);
	}
};
