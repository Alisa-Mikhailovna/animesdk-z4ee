#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_803;
class Class_1_8844A4E6AE686D5C_3;
class Class_1_D17272E82AE804C2_430;
class Class_1_D17272E82AE804C2_457;
class Class_1_E223664CCFC59063;
namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::Client { class GridFightOrbServerData_OrbSummarizer; }
namespace RPG::Client { class GridFightOrbTypeData; }
namespace RPG::Client { class GridFightPresentEntity; }
namespace Sofa::Core { template <typename T1, typename T2> class ObservableDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_CLEARORB_OFFSET UNITYSDK_OFFSET(0xC7A1F20)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETANDCREATEORBPOSITION_OFFSET UNITYSDK_OFFSET(0xC79E9E0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETORBBYUID_OFFSET UNITYSDK_OFFSET(0xC7A1A70)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETORBCOUNTBYTYPE_OFFSET UNITYSDK_OFFSET(0xC7A1870)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETORBTYPEDATA_OFFSET UNITYSDK_OFFSET(0xC7A1B60)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETORB_OFFSET UNITYSDK_OFFSET(0xC7A17B0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_HASORB_OFFSET UNITYSDK_OFFSET(0xC7A2080)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_ORBDICT_OFFSET UNITYSDK_OFFSET(0xC7A2360)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_ORBLISTWITHOUTBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xC7A21F0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_ORBLIST_OFFSET UNITYSDK_OFFSET(0xC7A2110)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_ORBPOSBYID_OFFSET UNITYSDK_OFFSET(0xC7A2380)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_PRESENTDICT_OFFSET UNITYSDK_OFFSET(0xC7A23A0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_PRESENTS_OFFSET UNITYSDK_OFFSET(0xC7A2160)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_HANDLEREMOVEDORB_OFFSET UNITYSDK_OFFSET(0xC7A1660)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_HANDLEREMOVEPRESENT_OFFSET UNITYSDK_OFFSET(0xC7A1710)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xC79FD90)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SET_ORBDICT_OFFSET UNITYSDK_OFFSET(0xC7A2370)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SET_ORBPOSBYID_OFFSET UNITYSDK_OFFSET(0xC7A2390)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SET_PRESENTDICT_OFFSET UNITYSDK_OFFSET(0xC7A23B0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SYNC_1_OFFSET UNITYSDK_OFFSET(0xC7A0C40)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC7A0360)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA_UPDATEPRESENT_OFFSET UNITYSDK_OFFSET(0xC7A0510)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC7A23C0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA__GETORBLIST_OFFSET UNITYSDK_OFFSET(0xC7A1D40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbServerData_TypeDefinitionIndex = 61517;

	class GridFightOrbServerData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E223664CCFC59063*>* _OrbPosByID_k__BackingField; // 0x10
		::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightPresentEntity*>* _PresentDict_k__BackingField; // 0x18
		::RPG::Client::GridFightOrbServerData_OrbSummarizer* _Summarizer; // 0x20
		::Class_0_16E4307DCC419505_803* _Collector; // 0x28
		::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightOrbEntityData*>* _OrbDict_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA__CTOR_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_803* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_803*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_D17272E82AE804C2_457* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_457*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void UpdatePresent(::Class_1_D17272E82AE804C2_430* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_430*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_UPDATEPRESENT_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::Class_1_8844A4E6AE686D5C_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void HandleRemovedOrb(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_HANDLEREMOVEDORB_OFFSET))(this, a1);
		}

		::System::Void HandleRemovePresent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_HANDLEREMOVEPRESENT_OFFSET))(this, a1);
		}

		::System::Void GetOrb(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETORB_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetOrbCountByType(::RPG::GameCore::GridFightOrbType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETORBCOUNTBYTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightOrbEntityData* GetOrbByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightOrbEntityData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETORBBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightOrbTypeData* GetOrbTypeData(::RPG::GameCore::GridFightOrbType a1)
		{
			return ((::RPG::Client::GridFightOrbTypeData*(*)(::PVOID, ::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETORBTYPEDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbEntityData*>* _GetOrbList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbEntityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA__GETORBLIST_OFFSET))(this);
		}

		::System::Void ClearOrb()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_CLEARORB_OFFSET))(this);
		}

		::Class_1_E223664CCFC59063* GetAndCreateOrbPosition(::System::UInt32 a1, ::System::Double a2, ::System::Double a3, ::System::Double a4, ::System::Collections::Generic::List_1<::Class_1_E223664CCFC59063*>* a5)
		{
			return ((::Class_1_E223664CCFC59063*(*)(::PVOID, ::System::UInt32, ::System::Double, ::System::Double, ::System::Double, ::System::Collections::Generic::List_1<::Class_1_E223664CCFC59063*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GETANDCREATEORBPOSITION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean get_HasOrb()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_HASORB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbEntityData*>* get_OrbList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbEntityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_ORBLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightPresentEntity*>* get_Presents()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightPresentEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_PRESENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbEntityData*>* get_OrbListWithoutBattleResult()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbEntityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_ORBLISTWITHOUTBATTLERESULT_OFFSET))(this);
		}

		::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightOrbEntityData*>* get_OrbDict()
		{
			return ((::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightOrbEntityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_ORBDICT_OFFSET))(this);
		}

		::System::Void set_OrbDict(::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightOrbEntityData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightOrbEntityData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SET_ORBDICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E223664CCFC59063*>* get_OrbPosByID()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E223664CCFC59063*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_ORBPOSBYID_OFFSET))(this);
		}

		::System::Void set_OrbPosByID(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E223664CCFC59063*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E223664CCFC59063*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SET_ORBPOSBYID_OFFSET))(this, a1);
		}

		::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightPresentEntity*>* get_PresentDict()
		{
			return ((::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightPresentEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_GET_PRESENTDICT_OFFSET))(this);
		}

		::System::Void set_PresentDict(::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightPresentEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightPresentEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA_SET_PRESENTDICT_OFFSET))(this, a1);
		}
	};
}
