#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D90D29A0DA06B4F8.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"

class Class_0_16E4307DCC419505_425;
class Class_2_C4BCD569548B7F3E;
namespace RPG::GameCore { class BattleRogueMagicData_Scepter; }
namespace RPG::GameCore { class PVEGameStatistics; }

#define CLASS_2_24494BDE5FAFD197_DISPOSE_OFFSET UNITYSDK_OFFSET(0x151B47B0)
#define CLASS_2_24494BDE5FAFD197_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x151B4330)
#define CLASS_2_24494BDE5FAFD197_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x151B3D50)
#define CLASS_2_24494BDE5FAFD197_METHOD_2_6A729C7D378F1951_OFFSET UNITYSDK_OFFSET(0x151B4030)
#define CLASS_2_24494BDE5FAFD197_METHOD_2_E52C357E96F7A058_OFFSET UNITYSDK_OFFSET(0x151B4850)
#define CLASS_2_24494BDE5FAFD197_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0x151B3D60)
#define CLASS_2_24494BDE5FAFD197__CTOR_OFFSET UNITYSDK_OFFSET(0x151B48F0)

inline static constexpr unsigned int Class_2_24494BDE5FAFD197_TypeDefinitionIndex = 53487;

class Class_2_24494BDE5FAFD197 : public ::Class_1_D90D29A0DA06B4F8
{
public:
	::Class_2_C4BCD569548B7F3E* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24494BDE5FAFD197__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24494BDE5FAFD197_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void OnMazeBuffBinding()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24494BDE5FAFD197_ONMAZEBUFFBINDING_OFFSET))(this);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_24494BDE5FAFD197_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24494BDE5FAFD197_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E52C357E96F7A058(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_24494BDE5FAFD197_METHOD_2_E52C357E96F7A058_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6A729C7D378F1951(::RPG::GameCore::BattleRogueMagicData_Scepter* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleRogueMagicData_Scepter*))((::PBYTE)hIl2Cpp + CLASS_2_24494BDE5FAFD197_METHOD_2_6A729C7D378F1951_OFFSET))(this, a1);
	}
};
