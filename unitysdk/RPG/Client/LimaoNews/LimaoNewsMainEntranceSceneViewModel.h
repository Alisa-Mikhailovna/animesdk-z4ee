#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_4780C96744815F8D;
class Class_1_895FB63906FAA27E;
namespace RPG::Client::LimaoNews { class LimaoNewsLimaoData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETCURPHASEDESKS_OFFSET UNITYSDK_OFFSET(0xC93DEA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETCURPHASEPOINTIDS_OFFSET UNITYSDK_OFFSET(0xC93DF50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETSHOWLIMAODATAS_OFFSET UNITYSDK_OFFSET(0xC93E000)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC93E270)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMainEntranceSceneViewModel_TypeDefinitionIndex = 75516;

	class LimaoNewsMainEntranceSceneViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Class_1_895FB63906FAA27E* _EventService; // 0x20
		::Class_1_4780C96744815F8D* _LimaoService; // 0x28

		::System::Void _ctor(::Class_1_4780C96744815F8D* a1, ::Class_1_895FB63906FAA27E* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4780C96744815F8D*, ::Class_1_895FB63906FAA27E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::UInt32>* GetCurPhaseDesks()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETCURPHASEDESKS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetCurPhasePointIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETCURPHASEPOINTIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsLimaoData*>* GetShowLimaoDatas(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsLimaoData*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINENTRANCESCENEVIEWMODEL_GETSHOWLIMAODATAS_OFFSET))(this, a1);
		}
	};
}
