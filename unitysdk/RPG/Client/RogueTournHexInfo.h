#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_104;
class Class_1_075C34D03AFA1215_87;
namespace RPG::Client { class IRogueTournHex; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNHEXINFO_ADDHEX_OFFSET UNITYSDK_OFFSET(0xD445DF0)
#define RPG_CLIENT_ROGUETOURNHEXINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xD445CC0)
#define RPG_CLIENT_ROGUETOURNHEXINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD445D60)
#define RPG_CLIENT_ROGUETOURNHEXINFO_GETACHIVEDHEXES_OFFSET UNITYSDK_OFFSET(0xD445FA0)
#define RPG_CLIENT_ROGUETOURNHEXINFO_GET_ACHIVEDHEXIDS_OFFSET UNITYSDK_OFFSET(0xD445C80)
#define RPG_CLIENT_ROGUETOURNHEXINFO_ISHEXACHIEVED_OFFSET UNITYSDK_OFFSET(0xD446160)
#define RPG_CLIENT_ROGUETOURNHEXINFO_REMOVEHEX_OFFSET UNITYSDK_OFFSET(0xD445EB0)
#define RPG_CLIENT_ROGUETOURNHEXINFO_SYNCEQUIPMENT_OFFSET UNITYSDK_OFFSET(0xD446730)
#define RPG_CLIENT_ROGUETOURNHEXINFO_SYNCFULL_OFFSET UNITYSDK_OFFSET(0xD4461C0)
#define RPG_CLIENT_ROGUETOURNHEXINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD445D30)
#define RPG_CLIENT_ROGUETOURNHEXINFO__SYNCHEXES_OFFSET UNITYSDK_OFFSET(0xD446230)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHexInfo_TypeDefinitionIndex = 64677;

	class RogueTournHexInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _AchivedHexIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_AchivedHexIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_GET_ACHIVEDHEXIDS_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournHexInfo* Create()
		{
			return ((::RPG::Client::RogueTournHexInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean AddHex(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_ADDHEX_OFFSET))(this, a1);
		}

		::System::Boolean RemoveHex(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_REMOVEHEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournHex*>* GetAchivedHexes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournHex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_GETACHIVEDHEXES_OFFSET))(this);
		}

		::System::Boolean IsHexAchieved(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_ISHEXACHIEVED_OFFSET))(this, a1);
		}

		::System::Void SyncFull(::Class_1_075C34D03AFA1215_104* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_104*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_SYNCFULL_OFFSET))(this, a1);
		}

		::System::Void SyncEquipment(::Class_1_075C34D03AFA1215_87* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_87*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO_SYNCEQUIPMENT_OFFSET))(this, a1);
		}

		::System::Void _SyncHexes(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHEXINFO__SYNCHEXES_OFFSET))(this, a1);
		}
	};
}
