#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleChessType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define CLASS_1_16CA124888A687A8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB133310)
#define CLASS_1_16CA124888A687A8_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xB133350)
#define CLASS_1_16CA124888A687A8_GET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0xB133370)
#define CLASS_1_16CA124888A687A8_METHOD_1_060403F76B36B325_OFFSET UNITYSDK_OFFSET(0xB133290)
#define CLASS_1_16CA124888A687A8_METHOD_1_AD91E5F8037967A4_OFFSET UNITYSDK_OFFSET(0xB1331A0)
#define CLASS_1_16CA124888A687A8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB133240)
#define CLASS_1_16CA124888A687A8_METHOD_1_E0A5B223E73AFEE5_OFFSET UNITYSDK_OFFSET(0xB1331E0)
#define CLASS_1_16CA124888A687A8_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xB133360)
#define CLASS_1_16CA124888A687A8_SET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0xB133380)
#define CLASS_1_16CA124888A687A8__CTOR_OFFSET UNITYSDK_OFFSET(0xB133390)

inline static constexpr unsigned int Class_1_16CA124888A687A8_TypeDefinitionIndex = 74596;

class Class_1_16CA124888A687A8 : public ::System::Object
{
public:
	::UnityEngine::Vector2Int _InitPosition_k__BackingField; // 0x10
	::RPG::Client::Prop::ChessDirection _Direction_k__BackingField; // 0x18
	::RPG::Client::Prop::ChessDirection Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16CA124888A687A8__CTOR_OFFSET))(this);
	}

	::RPG::Client::Prop::DestroyRootPuzzleChessType Method_1_AD91E5F8037967A4()
	{
		return ((::RPG::Client::Prop::DestroyRootPuzzleChessType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16CA124888A687A8_METHOD_1_AD91E5F8037967A4_OFFSET))(this);
	}

	::System::Void Method_1_E0A5B223E73AFEE5(::RPG::Client::Prop::ChessDirection a1, ::UnityEngine::Vector2Int a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChessDirection, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_16CA124888A687A8_METHOD_1_E0A5B223E73AFEE5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16CA124888A687A8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::Prop::ChessDirection Method_1_060403F76B36B325(::System::Boolean a1)
	{
		return ((::RPG::Client::Prop::ChessDirection(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_16CA124888A687A8_METHOD_1_060403F76B36B325_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16CA124888A687A8_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::Prop::ChessDirection get_Direction()
	{
		return ((::RPG::Client::Prop::ChessDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16CA124888A687A8_GET_DIRECTION_OFFSET))(this);
	}

	::System::Void set_Direction(::RPG::Client::Prop::ChessDirection a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + CLASS_1_16CA124888A687A8_SET_DIRECTION_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2Int get_InitPosition()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16CA124888A687A8_GET_INITPOSITION_OFFSET))(this);
	}

	::System::Void set_InitPosition(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_16CA124888A687A8_SET_INITPOSITION_OFFSET))(this, a1);
	}
};
