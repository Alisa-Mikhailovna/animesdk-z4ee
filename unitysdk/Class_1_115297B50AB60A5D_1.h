#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_115297B50AB60A5D_1_GET_ENDLESSSTAGEIDLIST_OFFSET UNITYSDK_OFFSET(0xB50D430)
#define CLASS_1_115297B50AB60A5D_1_GET_MAXENDLESSWAVECOUNT_OFFSET UNITYSDK_OFFSET(0xB50D440)
#define CLASS_1_115297B50AB60A5D_1_GET_RACEFIRSTPASSREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0xB50D480)
#define CLASS_1_115297B50AB60A5D_1_GET_RACESTAGEID_OFFSET UNITYSDK_OFFSET(0xB50D410)
#define CLASS_1_115297B50AB60A5D_1_GET_SURVIVALFIRSTPASSREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0xB50D460)
#define CLASS_1_115297B50AB60A5D_1_GET_SURVIVALSTAGEID_OFFSET UNITYSDK_OFFSET(0xB50D3F0)
#define CLASS_1_115297B50AB60A5D_1_SET_MAXENDLESSWAVECOUNT_OFFSET UNITYSDK_OFFSET(0xB50D450)
#define CLASS_1_115297B50AB60A5D_1_SET_RACEFIRSTPASSREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0xB50D490)
#define CLASS_1_115297B50AB60A5D_1_SET_RACESTAGEID_OFFSET UNITYSDK_OFFSET(0xB50D420)
#define CLASS_1_115297B50AB60A5D_1_SET_SURVIVALFIRSTPASSREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0xB50D470)
#define CLASS_1_115297B50AB60A5D_1_SET_SURVIVALSTAGEID_OFFSET UNITYSDK_OFFSET(0xB50D400)
#define CLASS_1_115297B50AB60A5D_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB50D4A0)

inline static constexpr unsigned int Class_1_115297B50AB60A5D_1_TypeDefinitionIndex = 75057;

class Class_1_115297B50AB60A5D_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _EndlessStageIDList_k__BackingField; // 0x10
	::System::UInt32 _RaceFirstPassRewardQuestID_k__BackingField; // 0x18
	::System::UInt32 _SurvivalStageID_k__BackingField; // 0x1C
	::System::UInt32 _MaxEndlessWaveCount_k__BackingField; // 0x20
	::System::UInt32 _SurvivalFirstPassRewardQuestID_k__BackingField; // 0x24
	::System::UInt32 _RaceStageID_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_SurvivalStageID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_GET_SURVIVALSTAGEID_OFFSET))(this);
	}

	::System::Void set_SurvivalStageID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_SET_SURVIVALSTAGEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_RaceStageID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_GET_RACESTAGEID_OFFSET))(this);
	}

	::System::Void set_RaceStageID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_SET_RACESTAGEID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_EndlessStageIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_GET_ENDLESSSTAGEIDLIST_OFFSET))(this);
	}

	::System::UInt32 get_MaxEndlessWaveCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_GET_MAXENDLESSWAVECOUNT_OFFSET))(this);
	}

	::System::Void set_MaxEndlessWaveCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_SET_MAXENDLESSWAVECOUNT_OFFSET))(this, a1);
	}

	::System::UInt32 get_SurvivalFirstPassRewardQuestID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_GET_SURVIVALFIRSTPASSREWARDQUESTID_OFFSET))(this);
	}

	::System::Void set_SurvivalFirstPassRewardQuestID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_SET_SURVIVALFIRSTPASSREWARDQUESTID_OFFSET))(this, a1);
	}

	::System::UInt32 get_RaceFirstPassRewardQuestID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_GET_RACEFIRSTPASSREWARDQUESTID_OFFSET))(this);
	}

	::System::Void set_RaceFirstPassRewardQuestID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_1_SET_RACEFIRSTPASSREWARDQUESTID_OFFSET))(this, a1);
	}
};
