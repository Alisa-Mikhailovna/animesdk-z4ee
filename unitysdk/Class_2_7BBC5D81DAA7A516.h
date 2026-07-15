#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_7BBC5D81DAA7A516_GET_IMAGECOLOR_OFFSET UNITYSDK_OFFSET(0x1558CEB0)
#define CLASS_2_7BBC5D81DAA7A516_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1558CEF0)
#define CLASS_2_7BBC5D81DAA7A516_METHOD_2_0D72A17472D55D78_OFFSET UNITYSDK_OFFSET(0x1558CC10)
#define CLASS_2_7BBC5D81DAA7A516_METHOD_2_4D92CAACEA159BBF_OFFSET UNITYSDK_OFFSET(0x1558C2E0)
#define CLASS_2_7BBC5D81DAA7A516_METHOD_2_60DC879ACE99CF48_OFFSET UNITYSDK_OFFSET(0x1558C170)
#define CLASS_2_7BBC5D81DAA7A516_METHOD_2_7FBAA229ED524F8E_1_OFFSET UNITYSDK_OFFSET(0x1558CCA0)
#define CLASS_2_7BBC5D81DAA7A516_METHOD_2_7FBAA229ED524F8E_2_OFFSET UNITYSDK_OFFSET(0x1558CD50)
#define CLASS_2_7BBC5D81DAA7A516_METHOD_2_7FBAA229ED524F8E_3_OFFSET UNITYSDK_OFFSET(0x1558CE00)
#define CLASS_2_7BBC5D81DAA7A516_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x1558CB60)
#define CLASS_2_7BBC5D81DAA7A516_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x1558BE80)
#define CLASS_2_7BBC5D81DAA7A516_METHOD_2_DED3E167738C4041_OFFSET UNITYSDK_OFFSET(0x1558C480)
#define CLASS_2_7BBC5D81DAA7A516_METHOD_2_EAD9091329518CE0_OFFSET UNITYSDK_OFFSET(0x1558C1E0)
#define CLASS_2_7BBC5D81DAA7A516_SET_IMAGECOLOR_OFFSET UNITYSDK_OFFSET(0x1558CED0)
#define CLASS_2_7BBC5D81DAA7A516_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1558CF00)
#define CLASS_2_7BBC5D81DAA7A516__CTOR_OFFSET UNITYSDK_OFFSET(0x1558CF10)
#define CLASS_2_7BBC5D81DAA7A516__ONBIND_OFFSET UNITYSDK_OFFSET(0x1558BEE0)

inline static constexpr unsigned int Class_2_7BBC5D81DAA7A516_TypeDefinitionIndex = 68381;

class Class_2_7BBC5D81DAA7A516 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Image* Field_2_0; // 0x60
	::System::String* _PrefabPath_k__BackingField; // 0x68
	::UnityEngine::UI::Image* Field_2_2; // 0x70
	::UnityEngine::Animation* Field_2_3; // 0x78
	::UnityEngine::UI::Image* Field_2_4; // 0x80
	::UnityEngine::UI::Image* Field_2_5; // 0x88
	::UnityEngine::UI::Image* Field_2_6; // 0x90
	::UnityEngine::Transform* Field_2_7; // 0x98
	::UnityEngine::Transform* Field_2_8; // 0xA0
	::UnityEngine::UI::Image* Field_2_9; // 0xA8
	::UnityEngine::UI::Image* Field_2_10; // 0xB0
	::System::Nullable_1<::UnityEngine::Color> _ImageColor_k__BackingField; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BBC5D81DAA7A516__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7BBC5D81DAA7A516_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BBC5D81DAA7A516__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_60DC879ACE99CF48(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7BBC5D81DAA7A516_METHOD_2_60DC879ACE99CF48_OFFSET))(this, a1);
	}

	::System::Void Method_2_EAD9091329518CE0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7BBC5D81DAA7A516_METHOD_2_EAD9091329518CE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D92CAACEA159BBF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7BBC5D81DAA7A516_METHOD_2_4D92CAACEA159BBF_OFFSET))(this, a1);
	}

	::System::Void Method_2_DED3E167738C4041(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_7BBC5D81DAA7A516_METHOD_2_DED3E167738C4041_OFFSET))(this, a1);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BBC5D81DAA7A516_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_7FBAA229ED524F8E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BBC5D81DAA7A516_METHOD_2_7FBAA229ED524F8E_1_OFFSET))(this);
	}

	::System::Void Method_2_7FBAA229ED524F8E_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BBC5D81DAA7A516_METHOD_2_7FBAA229ED524F8E_2_OFFSET))(this);
	}

	::System::Void Method_2_7FBAA229ED524F8E_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BBC5D81DAA7A516_METHOD_2_7FBAA229ED524F8E_3_OFFSET))(this);
	}

	::System::Void Method_2_0D72A17472D55D78(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7BBC5D81DAA7A516_METHOD_2_0D72A17472D55D78_OFFSET))(this, a1, a2, a3);
	}

	::System::Nullable_1<::UnityEngine::Color> get_ImageColor()
	{
		return ((::System::Nullable_1<::UnityEngine::Color>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BBC5D81DAA7A516_GET_IMAGECOLOR_OFFSET))(this);
	}

	::System::Void set_ImageColor(::System::Nullable_1<::UnityEngine::Color> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + CLASS_2_7BBC5D81DAA7A516_SET_IMAGECOLOR_OFFSET))(this, a1);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BBC5D81DAA7A516_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Void set_PrefabPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7BBC5D81DAA7A516_SET_PREFABPATH_OFFSET))(this, a1);
	}
};
