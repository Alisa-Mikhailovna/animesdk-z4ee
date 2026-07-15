#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPUZZLECHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B443960)
#define RPG_GAMECORE_FIVEDIMPUZZLECHALLENGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B444010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPuzzleChallengeRow_TypeDefinitionIndex = 13587;

	class FiveDimPuzzleChallengeRow : public ::System::Object
	{
	public:
		::System::String* UIActiveGP; // 0x10
		::Il2CppArray<::System::String*>* ProgressGPList; // 0x18
		::Il2CppArray<::System::UInt32>* RelatedMissionIDList; // 0x20
		::System::String* PuzzleStateGP; // 0x28
		::RPG::Client::TextID FinishDescText; // 0x30
		::RPG::Client::TextID NameText; // 0x40
		::RPG::Client::TextID ActiveNameText; // 0x50
		::System::UInt32 InstanceID; // 0x60
		::System::UInt32 PuzzleID; // 0x64
		::RPG::Client::TextID FinishNameText; // 0x68
		::RPG::Client::TextID ActiveDescText; // 0x78
		::System::Int16 ProgressLimit; // 0x88
		::RPG::Client::TextID DescText; // 0x90
		::System::UInt32 FloorID; // 0xA0
		::System::UInt32 GroupID; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUZZLECHALLENGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPuzzleChallengeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPuzzleChallengeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPUZZLECHALLENGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
