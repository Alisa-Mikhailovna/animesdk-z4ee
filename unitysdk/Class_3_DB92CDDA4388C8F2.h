#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_DB92CDDA4388C8F2_METHOD_3_185002BAD0CDE98D_OFFSET UNITYSDK_OFFSET(0x1ABE0800)
#define CLASS_3_DB92CDDA4388C8F2_METHOD_3_F73DE1E21818E48C_OFFSET UNITYSDK_OFFSET(0x1ABE07C0)
#define CLASS_3_DB92CDDA4388C8F2__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE07F0)

inline static constexpr unsigned int Class_3_DB92CDDA4388C8F2_TypeDefinitionIndex = 22048;

class Class_3_DB92CDDA4388C8F2 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x28
	::RPG::MVector3 Field_3_3; // 0x30
	::System::Single Field_3_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F73DE1E21818E48C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB92CDDA4388C8F2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB92CDDA4388C8F2*&))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2_METHOD_3_F73DE1E21818E48C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_185002BAD0CDE98D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB92CDDA4388C8F2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB92CDDA4388C8F2*))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2_METHOD_3_185002BAD0CDE98D_OFFSET))(a1, a2);
	}
};
