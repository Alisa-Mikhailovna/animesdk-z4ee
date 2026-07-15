#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4B703F2764047929;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPGTools { class MonoTimelineEffect; }
namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0xB572FA0)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_0B52F2DF5119EE9C_OFFSET UNITYSDK_OFFSET(0xB572970)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_130CFB61EF066AEC_OFFSET UNITYSDK_OFFSET(0xB572370)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_1C62453C3F38D037_OFFSET UNITYSDK_OFFSET(0xB5727E0)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_1CC4F6DB6780B6F9_OFFSET UNITYSDK_OFFSET(0xB573180)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_2A6AEF91C7092C97_OFFSET UNITYSDK_OFFSET(0xB572EA0)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_2F69830808EBC78F_OFFSET UNITYSDK_OFFSET(0xB571EB0)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_4DFAC2FFB6CD6806_OFFSET UNITYSDK_OFFSET(0xB572570)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0xB5725F0)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0xB5724A0)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_84EAB34EABC7F508_OFFSET UNITYSDK_OFFSET(0xB572080)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0xB572200)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB5727A0)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xB572510)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB572760)
#define CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_E523145A68B8EA84_OFFSET UNITYSDK_OFFSET(0xB572A40)
#define CLASS_1_4BA5BF6D6AE6A5EC__CTOR_OFFSET UNITYSDK_OFFSET(0xB5733A0)

inline static constexpr unsigned int Class_1_4BA5BF6D6AE6A5EC_TypeDefinitionIndex = 46296;

class Class_1_4BA5BF6D6AE6A5EC : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::RPG::Client::MonoEffectPluginFollow* Field_1_2; // 0x20
	::Class_1_4B703F2764047929* Field_1_3; // 0x28
	::UnityEngine::Transform* Field_1_4; // 0x30
	::System::String* Field_1_5; // 0x38
	::RPGTools::MonoTimelineEffect* Field_1_6; // 0x40
	::UnityEngine::Object* Field_1_7; // 0x48
	::RPG::Client::MonoEffect* Field_1_8; // 0x50
	::System::String* Field_1_9; // 0x58
	::UnityEngine::Vector3 Field_1_10; // 0x60
	::System::Boolean Field_1_11; // 0x6C
	::UnityEngine::Vector3 Field_1_12; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2F69830808EBC78F(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_2F69830808EBC78F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_130CFB61EF066AEC(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_130CFB61EF066AEC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4DFAC2FFB6CD6806(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_4DFAC2FFB6CD6806_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_595E641DF1B4387D_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_84EAB34EABC7F508()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_84EAB34EABC7F508_OFFSET))(this);
	}

	::System::Void Method_1_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_B235E757922104A8_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_1C62453C3F38D037()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_1C62453C3F38D037_OFFSET))(this);
	}

	::System::Void Method_1_E523145A68B8EA84(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_E523145A68B8EA84_OFFSET))(this, a1);
	}

	::System::Void Method_1_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_1_2A6AEF91C7092C97(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_2A6AEF91C7092C97_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B52F2DF5119EE9C(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_0B52F2DF5119EE9C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1CC4F6DB6780B6F9(::UnityEngine::Component* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_1CC4F6DB6780B6F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BA5BF6D6AE6A5EC_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}
};
