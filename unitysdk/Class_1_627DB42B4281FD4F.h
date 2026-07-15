#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleBlockType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_16CA124888A687A8;

#define CLASS_1_627DB42B4281FD4F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD1B930)
#define CLASS_1_627DB42B4281FD4F_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xAD1B9B0)
#define CLASS_1_627DB42B4281FD4F__CTOR_OFFSET UNITYSDK_OFFSET(0xAD1BA70)

inline static constexpr unsigned int Class_1_627DB42B4281FD4F_TypeDefinitionIndex = 74595;

class Class_1_627DB42B4281FD4F : public ::System::Object
{
public:
	::Class_1_16CA124888A687A8* Field_1_0; // 0x10
	::UnityEngine::Vector2Int Field_1_1; // 0x18
	::UnityEngine::Vector2Int Field_1_2; // 0x20
	::RPG::Client::Prop::DestroyRootPuzzleBlockType Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_627DB42B4281FD4F__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_627DB42B4281FD4F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_627DB42B4281FD4F_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}
};
