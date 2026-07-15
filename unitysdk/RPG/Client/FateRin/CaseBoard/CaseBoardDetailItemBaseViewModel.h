#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/CaseBoard/DetailType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILITEMBASEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC4C01B0)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardDetailItemBaseViewModel_TypeDefinitionIndex = 75839;

	class CaseBoardDetailItemBaseViewModel : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDDETAILITEMBASEVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
