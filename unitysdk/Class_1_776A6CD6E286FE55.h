#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CB66E39D32BF42FF_2;
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_776A6CD6E286FE55_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14CCA260)
#define CLASS_1_776A6CD6E286FE55_METHOD_1_6D71CC7A9DF62322_OFFSET UNITYSDK_OFFSET(0x14CC9F40)
#define CLASS_1_776A6CD6E286FE55_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x14CCA0D0)
#define CLASS_1_776A6CD6E286FE55_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14CCA270)
#define CLASS_1_776A6CD6E286FE55__CTOR_OFFSET UNITYSDK_OFFSET(0x14CC9980)

inline static constexpr unsigned int Class_1_776A6CD6E286FE55_TypeDefinitionIndex = 71223;

class Class_1_776A6CD6E286FE55 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_CB66E39D32BF42FF_2*>* Field_1_0; // 0x10
	::RPG::Client::NavMap::FiveDim::CartographyFiveDim* Field_1_1; // 0x18
	::System::Int32 _Current_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + CLASS_1_776A6CD6E286FE55__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D71CC7A9DF62322()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776A6CD6E286FE55_METHOD_1_6D71CC7A9DF62322_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776A6CD6E286FE55_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 get_Current()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776A6CD6E286FE55_GET_CURRENT_OFFSET))(this);
	}

	::System::Void set_Current(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_776A6CD6E286FE55_SET_CURRENT_OFFSET))(this, a1);
	}
};
