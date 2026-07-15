#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8EC4BF90D2664829;
namespace RPG::GameCore { class MarbleRandomBuffRow; }

#define CLASS_1_5F4E83900A3DADCA_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1A7FB680)
#define CLASS_1_5F4E83900A3DADCA_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1A7FB660)
#define CLASS_1_5F4E83900A3DADCA_GET_TECHID_OFFSET UNITYSDK_OFFSET(0x1A7FB640)
#define CLASS_1_5F4E83900A3DADCA_METHOD_1_1BD63EC50F3374F5_OFFSET UNITYSDK_OFFSET(0x1A7FB590)
#define CLASS_1_5F4E83900A3DADCA_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1A7FB430)
#define CLASS_1_5F4E83900A3DADCA_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1A7FB690)
#define CLASS_1_5F4E83900A3DADCA_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1A7FB670)
#define CLASS_1_5F4E83900A3DADCA_SET_TECHID_OFFSET UNITYSDK_OFFSET(0x1A7FB650)
#define CLASS_1_5F4E83900A3DADCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7FB400)

inline static constexpr unsigned int Class_1_5F4E83900A3DADCA_TypeDefinitionIndex = 40589;

class Class_1_5F4E83900A3DADCA : public ::System::Object
{
public:
	::RPG::GameCore::MarbleRandomBuffRow* Field_1_0; // 0x10
	::Class_1_8EC4BF90D2664829* Field_1_1; // 0x18
	::System::UInt32 _TechId_k__BackingField; // 0x20
	::System::Boolean _IsActive_k__BackingField; // 0x24
	::System::Boolean _IsSelected_k__BackingField; // 0x25

	::System::Void _ctor(::Class_1_8EC4BF90D2664829* a1, ::RPG::GameCore::MarbleRandomBuffRow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8EC4BF90D2664829*, ::RPG::GameCore::MarbleRandomBuffRow*))((::PBYTE)hIl2Cpp + CLASS_1_5F4E83900A3DADCA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnSelect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F4E83900A3DADCA_ONSELECT_OFFSET))(this);
	}

	::System::Void Method_1_1BD63EC50F3374F5(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F4E83900A3DADCA_METHOD_1_1BD63EC50F3374F5_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_TechId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F4E83900A3DADCA_GET_TECHID_OFFSET))(this);
	}

	::System::Void set_TechId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5F4E83900A3DADCA_SET_TECHID_OFFSET))(this, a1);
	}

	::System::Boolean get_IsSelected()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F4E83900A3DADCA_GET_ISSELECTED_OFFSET))(this);
	}

	::System::Void set_IsSelected(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F4E83900A3DADCA_SET_ISSELECTED_OFFSET))(this, a1);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F4E83900A3DADCA_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F4E83900A3DADCA_SET_ISACTIVE_OFFSET))(this, a1);
	}
};
