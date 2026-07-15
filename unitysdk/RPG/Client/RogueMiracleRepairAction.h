#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_77;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xD3DAD80)
#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0xD3DAE10)
#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GET_HINTID_OFFSET UNITYSDK_OFFSET(0xD3DACE0)
#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xD3DACA0)
#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GET_SELECTMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xD3DACC0)
#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_SET_HINTID_OFFSET UNITYSDK_OFFSET(0xD3DACF0)
#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0xD3DACB0)
#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_SET_SELECTMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0xD3DACD0)
#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xD3DADC0)
#define RPG_CLIENT_ROGUEMIRACLEREPAIRACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xD3DAD00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleRepairAction_TypeDefinitionIndex = 64033;

	class RogueMiracleRepairAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectMiracleIDs_k__BackingField; // 0x10
		::System::UInt32 _HintID_k__BackingField; // 0x18
		::System::UInt32 _RogueActionID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::Class_1_45BB92167AED63A0_77* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_45BB92167AED63A0_77*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_SET_ROGUEACTIONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectMiracleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GET_SELECTMIRACLEIDS_OFFSET))(this);
		}

		::System::Void set_SelectMiracleIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_SET_SELECTMIRACLEIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_HintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GET_HINTID_OFFSET))(this);
		}

		::System::Void set_HintID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_SET_HINTID_OFFSET))(this, a1);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEREPAIRACTION_GETUIPATH_OFFSET))(this);
		}
	};
}
