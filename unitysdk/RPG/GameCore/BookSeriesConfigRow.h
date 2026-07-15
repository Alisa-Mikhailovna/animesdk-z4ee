#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKSERIESCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B20E690)
#define RPG_GAMECORE_BOOKSERIESCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B20EDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BookSeriesConfigRow_TypeDefinitionIndex = 12408;

	class BookSeriesConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 BookSeriesWorld; // 0x10
		::System::Boolean IsShowInBookshelf; // 0x14
		::RPG::Client::TextID BookSeries; // 0x18
		::System::UInt32 BookSeriesNum; // 0x28
		::System::UInt32 BookSeriesID; // 0x2C
		::RPG::Client::TextID BookSeriesComments; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BookSeriesConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BookSeriesConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
