#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournGameLevel; }
namespace RPG::Client { class IRogueTournGameLevelLayerLinear; }
namespace RPG::Client { class IRogueTournGameLevelLinear; }
namespace RPG::Client { class IRogueTournGameLevelRoom; }
namespace RPG::Client { class IRogueTournGameLevelRoomCardLevel; }
namespace RPG::Client { class IRogueTournGameLevelRoomLinear; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_COMPOSITIONTYPEID_OFFSET UNITYSDK_OFFSET(0xD43AA30)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_CURLAYERLINEAR_OFFSET UNITYSDK_OFFSET(0xD439050)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_CURROOMLINEAR_OFFSET UNITYSDK_OFFSET(0xD43A770)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_CURROOM_OFFSET UNITYSDK_OFFSET(0xD438B40)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETCURLAYERPROGRESS_OFFSET UNITYSDK_OFFSET(0xD439310)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETCURROOMPROGRESS_1_OFFSET UNITYSDK_OFFSET(0xD4399C0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETCURROOMPROGRESS_OFFSET UNITYSDK_OFFSET(0xD439540)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETROOMBYPROGRESS_OFFSET UNITYSDK_OFFSET(0xD439BF0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_LAYERSLINEAR_OFFSET UNITYSDK_OFFSET(0xD4391B0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_ROOMCOUNT_OFFSET UNITYSDK_OFFSET(0xD438D60)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT_ROOMSLINEAR_OFFSET UNITYSDK_OFFSET(0xD43A8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameLevelExt_TypeDefinitionIndex = 64645;

	class RogueTournGameLevelExt : public ::System::Object
	{
	public:
		static ::RPG::Client::IRogueTournGameLevelRoom* CurRoom(::RPG::Client::IRogueTournGameLevel* a1)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoom*(*)(::RPG::Client::IRogueTournGameLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_CURROOM_OFFSET))(a1);
		}

		static ::System::UInt32 RoomCount(::RPG::Client::IRogueTournGameLevel* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournGameLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_ROOMCOUNT_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueTournGameLevelLayerLinear* CurLayerLinear(::RPG::Client::IRogueTournGameLevelLinear* a1)
		{
			return ((::RPG::Client::IRogueTournGameLevelLayerLinear*(*)(::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_CURLAYERLINEAR_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayerLinear*>* LayersLinear(::RPG::Client::IRogueTournGameLevelLinear* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelLayerLinear*>*(*)(::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_LAYERSLINEAR_OFFSET))(a1);
		}

		static ::System::UInt32 GetCurLayerProgress(::RPG::Client::IRogueTournGameLevelLinear* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETCURLAYERPROGRESS_OFFSET))(a1);
		}

		static ::System::UInt32 GetCurRoomProgress(::RPG::Client::IRogueTournGameLevelLinear* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournGameLevelLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETCURROOMPROGRESS_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueTournGameLevelRoom* GetRoomByProgress(::RPG::Client::IRogueTournGameLevelLinear* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoom*(*)(::RPG::Client::IRogueTournGameLevelLinear*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETROOMBYPROGRESS_OFFSET))(a1, a2);
		}

		static ::RPG::Client::IRogueTournGameLevelRoomLinear* CurRoomLinear(::RPG::Client::IRogueTournGameLevelLayerLinear* a1)
		{
			return ((::RPG::Client::IRogueTournGameLevelRoomLinear*(*)(::RPG::Client::IRogueTournGameLevelLayerLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_CURROOMLINEAR_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelRoomLinear*>* RoomsLinear(::RPG::Client::IRogueTournGameLevelLayerLinear* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournGameLevelRoomLinear*>*(*)(::RPG::Client::IRogueTournGameLevelLayerLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_ROOMSLINEAR_OFFSET))(a1);
		}

		static ::System::UInt32 GetCurRoomProgress_1(::RPG::Client::IRogueTournGameLevelLayerLinear* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournGameLevelLayerLinear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_GETCURROOMPROGRESS_1_OFFSET))(a1);
		}

		static ::System::UInt32 CompositionTypeID(::RPG::Client::IRogueTournGameLevelRoomCardLevel* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournGameLevelRoomCardLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT_COMPOSITIONTYPEID_OFFSET))(a1);
		}
	};
}
