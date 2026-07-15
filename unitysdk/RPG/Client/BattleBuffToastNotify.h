#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEBUFFTOASTNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0xBE4F9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleBuffToastNotify_TypeDefinitionIndex = 68311;

	class BattleBuffToastNotify : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::String* CustomUIModelAttachPointName; // 0x18
		::RPG::GameCore::FloatMessageType MessageType; // 0x20
		::System::Single DelayTime; // 0x24
		::RPG::Client::TextID TextID; // 0x28
		::System::Single InternalTime; // 0x38
		::System::Boolean ForceVisible; // 0x3C
		::System::Boolean UseFixedPosition; // 0x3D
		::System::Boolean ScreenSpaceFloatMsg; // 0x3E
		::System::Boolean IsShowUIMessageFromModel; // 0x3F
		::RPG::MVector3 CustomOffset; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEBUFFTOASTNOTIFY__CTOR_OFFSET))(this);
		}
	};
}
