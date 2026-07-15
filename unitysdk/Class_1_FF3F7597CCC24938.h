#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimatorOverrideController; }

#define CLASS_1_FF3F7597CCC24938_DISPOSE_OFFSET UNITYSDK_OFFSET(0x151B9BD0)
#define CLASS_1_FF3F7597CCC24938_GET_CLIP0NAMEHASH_OFFSET UNITYSDK_OFFSET(0x151B8CC0)
#define CLASS_1_FF3F7597CCC24938_GET_CLIP0NAME_OFFSET UNITYSDK_OFFSET(0x151B8C80)
#define CLASS_1_FF3F7597CCC24938_GET_CLIP1NAMEHASH_OFFSET UNITYSDK_OFFSET(0x151B8CE0)
#define CLASS_1_FF3F7597CCC24938_GET_CLIP1NAME_OFFSET UNITYSDK_OFFSET(0x151B8CA0)
#define CLASS_1_FF3F7597CCC24938_GET_DISABLEANIMEVENT_OFFSET UNITYSDK_OFFSET(0x151B8BA0)
#define CLASS_1_FF3F7597CCC24938_GET_FREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x151B8B60)
#define CLASS_1_FF3F7597CCC24938_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0x151B8B50)
#define CLASS_1_FF3F7597CCC24938_GET_PRELOADFREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x151B8B80)
#define CLASS_1_FF3F7597CCC24938_GET_RIBBONCLIP0NAMEHASH_OFFSET UNITYSDK_OFFSET(0x151B8D00)
#define CLASS_1_FF3F7597CCC24938_GET_RIBBONCLIP1NAMEHASH_OFFSET UNITYSDK_OFFSET(0x151B8D20)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_0552BEF80A6A3BAA_1_OFFSET UNITYSDK_OFFSET(0x151B8AE0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_0552BEF80A6A3BAA_OFFSET UNITYSDK_OFFSET(0x151B8830)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_08CCBB9E689D6A81_OFFSET UNITYSDK_OFFSET(0x151B8D40)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_102192C05CB5CDCB_OFFSET UNITYSDK_OFFSET(0x151B86F0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_2950A42D31005822_OFFSET UNITYSDK_OFFSET(0x151B92E0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_4A6695F863A75568_OFFSET UNITYSDK_OFFSET(0x151B9930)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_4B6DEDB9FF4B740B_OFFSET UNITYSDK_OFFSET(0x151B9C20)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_6011AA7C1E79F305_OFFSET UNITYSDK_OFFSET(0x151B9C80)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_6A5926614A3A36F5_OFFSET UNITYSDK_OFFSET(0x151B9DF0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_78A1456A6DBF4558_OFFSET UNITYSDK_OFFSET(0x151B8600)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_86EDAAEABA959F35_OFFSET UNITYSDK_OFFSET(0x151B88A0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_954EB24DA065442A_1_OFFSET UNITYSDK_OFFSET(0x151B9E60)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_954EB24DA065442A_2_OFFSET UNITYSDK_OFFSET(0x151B9EC0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_954EB24DA065442A_OFFSET UNITYSDK_OFFSET(0x151B9CF0)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_A00EAD174EF85E42_OFFSET UNITYSDK_OFFSET(0x151B9080)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_A37026F5FDBACF68_OFFSET UNITYSDK_OFFSET(0x151B9D60)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_AE51354F9458E8B7_OFFSET UNITYSDK_OFFSET(0x151B9100)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_C86F0349DCEC0A70_1_OFFSET UNITYSDK_OFFSET(0x151B8C20)
#define CLASS_1_FF3F7597CCC24938_METHOD_1_C86F0349DCEC0A70_OFFSET UNITYSDK_OFFSET(0x151B8BC0)
#define CLASS_1_FF3F7597CCC24938_SET_CLIP0NAMEHASH_OFFSET UNITYSDK_OFFSET(0x151B8CD0)
#define CLASS_1_FF3F7597CCC24938_SET_CLIP0NAME_OFFSET UNITYSDK_OFFSET(0x151B8C90)
#define CLASS_1_FF3F7597CCC24938_SET_CLIP1NAMEHASH_OFFSET UNITYSDK_OFFSET(0x151B8CF0)
#define CLASS_1_FF3F7597CCC24938_SET_CLIP1NAME_OFFSET UNITYSDK_OFFSET(0x151B8CB0)
#define CLASS_1_FF3F7597CCC24938_SET_DISABLEANIMEVENT_OFFSET UNITYSDK_OFFSET(0x151B8BB0)
#define CLASS_1_FF3F7597CCC24938_SET_FREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x151B8B70)
#define CLASS_1_FF3F7597CCC24938_SET_PRELOADFREESTYLEMOTIONID_OFFSET UNITYSDK_OFFSET(0x151B8B90)
#define CLASS_1_FF3F7597CCC24938_SET_RIBBONCLIP0NAMEHASH_OFFSET UNITYSDK_OFFSET(0x151B8D10)
#define CLASS_1_FF3F7597CCC24938_SET_RIBBONCLIP1NAMEHASH_OFFSET UNITYSDK_OFFSET(0x151B8D30)
#define CLASS_1_FF3F7597CCC24938__CCTOR_OFFSET UNITYSDK_OFFSET(0x151B9F20)
#define CLASS_1_FF3F7597CCC24938__CTOR_OFFSET UNITYSDK_OFFSET(0x151B8D50)

inline static constexpr unsigned int Class_1_FF3F7597CCC24938_TypeDefinitionIndex = 54730;

class Class_1_FF3F7597CCC24938 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF3F7597CCC24938_TypeDefinitionIndex)->GetStaticField(0x6810);
	}
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	::System::String* Field_1_3; // 0x10
	::UnityEngine::AnimationClip* Field_1_4; // 0x18
	::System::String* Field_1_5; // 0x20
	::System::String* Field_1_6; // 0x28
	::System::String* _Clip1Name_k__BackingField; // 0x30
	::System::String* Field_1_8; // 0x38
	::UnityEngine::AnimationClip* Field_1_9; // 0x40
	::UnityEngine::AnimationClip* Field_1_10; // 0x48
	::Il2CppArray<::Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF>* Field_1_11; // 0x50
	::System::String* _Clip0Name_k__BackingField; // 0x58
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* Field_1_13; // 0x60
	::UnityEngine::AnimationClip* Field_1_14; // 0x68
	::System::Int32 _RibbonClip1NameHash_k__BackingField; // 0x70
	::System::Int32 _RibbonClip0NameHash_k__BackingField; // 0x74
	::System::Int32 Field_1_17; // 0x78
	::System::Int32 _Clip0NameHash_k__BackingField; // 0x7C
	::System::Boolean _DisableAnimEvent_k__BackingField; // 0x80
	::System::Boolean Field_1_20; // 0x81
	::System::Boolean Field_1_21; // 0x82
	::System::Boolean Field_1_22; // 0x83
	::System::Int32 Field_1_23; // 0x84
	::System::Int32 _Clip1NameHash_k__BackingField; // 0x88
	::System::Int32 Field_1_25; // 0x8C
	::System::Int32 Field_1_26; // 0x90
	::System::Int32 Field_1_27; // 0x94
	::System::Int32 Field_1_28; // 0x98
	::System::UInt32 _FreeStyleMotionID_k__BackingField; // 0x9C
	::System::UInt32 _PreloadFreeStyleMotionID_k__BackingField; // 0xA0
	::System::Int32 Field_1_31; // 0xA4
	::System::Int32 Field_1_32; // 0xA8
	::System::Int32 Field_1_33; // 0xAC
	::System::Int32 _GroupIndex_k__BackingField; // 0xB0

	::System::Void _ctor(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>*&))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_78A1456A6DBF4558(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_78A1456A6DBF4558_OFFSET))(a1);
	}

	static ::System::Void Method_1_102192C05CB5CDCB(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_102192C05CB5CDCB_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_0552BEF80A6A3BAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_0552BEF80A6A3BAA_OFFSET))(this);
	}

	::System::Boolean Method_1_0552BEF80A6A3BAA_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_0552BEF80A6A3BAA_1_OFFSET))(this);
	}

	static ::System::Boolean Method_1_86EDAAEABA959F35(::UnityEngine::AnimationClip* a1, ::UnityEngine::AnimationClip* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_86EDAAEABA959F35_OFFSET))(a1, a2);
	}

	::System::Int32 get_GroupIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_GROUPINDEX_OFFSET))(this);
	}

	::System::UInt32 get_FreeStyleMotionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_FREESTYLEMOTIONID_OFFSET))(this);
	}

	::System::Void set_FreeStyleMotionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_FREESTYLEMOTIONID_OFFSET))(this, a1);
	}

	::System::UInt32 get_PreloadFreeStyleMotionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_PRELOADFREESTYLEMOTIONID_OFFSET))(this);
	}

	::System::Void set_PreloadFreeStyleMotionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_PRELOADFREESTYLEMOTIONID_OFFSET))(this, a1);
	}

	::System::Boolean get_DisableAnimEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_DISABLEANIMEVENT_OFFSET))(this);
	}

	::System::Void set_DisableAnimEvent(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_DISABLEANIMEVENT_OFFSET))(this, a1);
	}

	::Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF Method_1_C86F0349DCEC0A70()
	{
		return ((::Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_C86F0349DCEC0A70_OFFSET))(this);
	}

	::Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF Method_1_C86F0349DCEC0A70_1()
	{
		return ((::Class_1_FF3F7597CCC24938_Struct_2_1447C0841AEA19EF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_C86F0349DCEC0A70_1_OFFSET))(this);
	}

	::System::String* get_Clip0Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_CLIP0NAME_OFFSET))(this);
	}

	::System::Void set_Clip0Name(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_CLIP0NAME_OFFSET))(this, a1);
	}

	::System::String* get_Clip1Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_CLIP1NAME_OFFSET))(this);
	}

	::System::Void set_Clip1Name(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_CLIP1NAME_OFFSET))(this, a1);
	}

	::System::Int32 get_Clip0NameHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_CLIP0NAMEHASH_OFFSET))(this);
	}

	::System::Void set_Clip0NameHash(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_CLIP0NAMEHASH_OFFSET))(this, a1);
	}

	::System::Int32 get_Clip1NameHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_CLIP1NAMEHASH_OFFSET))(this);
	}

	::System::Void set_Clip1NameHash(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_CLIP1NAMEHASH_OFFSET))(this, a1);
	}

	::System::Int32 get_RibbonClip0NameHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_RIBBONCLIP0NAMEHASH_OFFSET))(this);
	}

	::System::Void set_RibbonClip0NameHash(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_RIBBONCLIP0NAMEHASH_OFFSET))(this, a1);
	}

	::System::Int32 get_RibbonClip1NameHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_GET_RIBBONCLIP1NAMEHASH_OFFSET))(this);
	}

	::System::Void set_RibbonClip1NameHash(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_SET_RIBBONCLIP1NAMEHASH_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>* Method_1_08CCBB9E689D6A81()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_08CCBB9E689D6A81_OFFSET))(this);
	}

	::System::Boolean Method_1_A00EAD174EF85E42(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_A00EAD174EF85E42_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE51354F9458E8B7(::UnityEngine::AnimatorOverrideController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_AE51354F9458E8B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_2950A42D31005822(::System::UInt32 a1, ::UnityEngine::AnimatorOverrideController* a2, ::UnityEngine::AnimationClip* a3, ::UnityEngine::AnimationClip* a4, ::UnityEngine::AnimationClip* a5, ::UnityEngine::AnimationClip* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::AnimatorOverrideController*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_2950A42D31005822_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_4A6695F863A75568(::UnityEngine::AnimatorOverrideController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorOverrideController*))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_4A6695F863A75568_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_4B6DEDB9FF4B740B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_4B6DEDB9FF4B740B_OFFSET))(this, a1);
	}

	::System::String* Method_1_6011AA7C1E79F305(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_6011AA7C1E79F305_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_954EB24DA065442A(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_954EB24DA065442A_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A37026F5FDBACF68(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_A37026F5FDBACF68_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6A5926614A3A36F5(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_6A5926614A3A36F5_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_954EB24DA065442A_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_954EB24DA065442A_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_954EB24DA065442A_2(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF3F7597CCC24938_METHOD_1_954EB24DA065442A_2_OFFSET))(this, a1);
	}
};
