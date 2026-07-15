#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/JSONContainerType.h"
#include "unitysdk/HoudiniEngineUnity/JSONNodeType.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_Enumerator.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_KeyEnumerator.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_ValueEnumerator.h"
#include "unitysdk/HoudiniEngineUnity/JSONTextMode.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace HoudiniEngineUnity { class JSONArray; }
namespace HoudiniEngineUnity { class JSONObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class RectOffset; }

#define HOUDINIENGINEUNITY_JSONNODE_ADD_1_OFFSET UNITYSDK_OFFSET(0x19914AF0)
#define HOUDINIENGINEUNITY_JSONNODE_ADD_OFFSET UNITYSDK_OFFSET(0x19915590)
#define HOUDINIENGINEUNITY_JSONNODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x199166B0)
#define HOUDINIENGINEUNITY_JSONNODE_ESCAPE_OFFSET UNITYSDK_OFFSET(0x19916800)
#define HOUDINIENGINEUNITY_JSONNODE_GETCONTAINER_OFFSET UNITYSDK_OFFSET(0x19916DF0)
#define HOUDINIENGINEUNITY_JSONNODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x199166C0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x19916180)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x19915E50)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x19915AA0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x19915D30)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x19915C20)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x19916030)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x199161F0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x199155D0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19915500)
#define HOUDINIENGINEUNITY_JSONNODE_GET_DEEPCHILDREN_OFFSET UNITYSDK_OFFSET(0x19915640)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ESCAPEBUILDER_OFFSET UNITYSDK_OFFSET(0x199166D0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x19915570)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x19915550)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x19915530)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x19915540)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ISNUMBER_OFFSET UNITYSDK_OFFSET(0x19915510)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x19915560)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x19915520)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x199154C0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x199154A0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x19915920)
#define HOUDINIENGINEUNITY_JSONNODE_GET_LINQ_OFFSET UNITYSDK_OFFSET(0x199158D0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x199159E0)
#define HOUDINIENGINEUNITY_JSONNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x199154E0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x199138A0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_10_OFFSET UNITYSDK_OFFSET(0x199165C0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_11_OFFSET UNITYSDK_OFFSET(0x19916600)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_12_OFFSET UNITYSDK_OFFSET(0x199166A0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_13_OFFSET UNITYSDK_OFFSET(0x19916EF0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_14_OFFSET UNITYSDK_OFFSET(0x19917500)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_15_OFFSET UNITYSDK_OFFSET(0x19917D40)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_16_OFFSET UNITYSDK_OFFSET(0x19918780)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_17_OFFSET UNITYSDK_OFFSET(0x199191C0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_18_OFFSET UNITYSDK_OFFSET(0x19919C00)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_19_OFFSET UNITYSDK_OFFSET(0x1991A690)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x198F9320)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_20_OFFSET UNITYSDK_OFFSET(0x1991A6C0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_21_OFFSET UNITYSDK_OFFSET(0x1991A760)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_22_OFFSET UNITYSDK_OFFSET(0x1991A7E0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_23_OFFSET UNITYSDK_OFFSET(0x1991A860)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_24_OFFSET UNITYSDK_OFFSET(0x1991A8D0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x19916250)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x19916280)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x19916320)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x19916350)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x199163F0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x19916420)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0x199164C0)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_9_OFFSET UNITYSDK_OFFSET(0x19916520)
#define HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x19916230)
#define HOUDINIENGINEUNITY_JSONNODE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x198F9310)
#define HOUDINIENGINEUNITY_JSONNODE_PARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x19916BC0)
#define HOUDINIENGINEUNITY_JSONNODE_PARSE_OFFSET UNITYSDK_OFFSET(0x19912300)
#define HOUDINIENGINEUNITY_JSONNODE_READMATRIX_OFFSET UNITYSDK_OFFSET(0x1991E040)
#define HOUDINIENGINEUNITY_JSONNODE_READQUATERNION_1_OFFSET UNITYSDK_OFFSET(0x1991A820)
#define HOUDINIENGINEUNITY_JSONNODE_READQUATERNION_OFFSET UNITYSDK_OFFSET(0x1991C4D0)
#define HOUDINIENGINEUNITY_JSONNODE_READRECTOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1991A910)
#define HOUDINIENGINEUNITY_JSONNODE_READRECTOFFSET_OFFSET UNITYSDK_OFFSET(0x1991D6F0)
#define HOUDINIENGINEUNITY_JSONNODE_READRECT_1_OFFSET UNITYSDK_OFFSET(0x1991A8A0)
#define HOUDINIENGINEUNITY_JSONNODE_READRECT_OFFSET UNITYSDK_OFFSET(0x1991CDE0)
#define HOUDINIENGINEUNITY_JSONNODE_READVECTOR2_1_OFFSET UNITYSDK_OFFSET(0x1991AE10)
#define HOUDINIENGINEUNITY_JSONNODE_READVECTOR2_2_OFFSET UNITYSDK_OFFSET(0x1991A6B0)
#define HOUDINIENGINEUNITY_JSONNODE_READVECTOR2_OFFSET UNITYSDK_OFFSET(0x1991A950)
#define HOUDINIENGINEUNITY_JSONNODE_READVECTOR3_1_OFFSET UNITYSDK_OFFSET(0x1991B7C0)
#define HOUDINIENGINEUNITY_JSONNODE_READVECTOR3_2_OFFSET UNITYSDK_OFFSET(0x1991A710)
#define HOUDINIENGINEUNITY_JSONNODE_READVECTOR3_OFFSET UNITYSDK_OFFSET(0x1991B0D0)
#define HOUDINIENGINEUNITY_JSONNODE_READVECTOR4_1_OFFSET UNITYSDK_OFFSET(0x1991A7A0)
#define HOUDINIENGINEUNITY_JSONNODE_READVECTOR4_OFFSET UNITYSDK_OFFSET(0x1991BBC0)
#define HOUDINIENGINEUNITY_JSONNODE_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x199155B0)
#define HOUDINIENGINEUNITY_JSONNODE_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x199155C0)
#define HOUDINIENGINEUNITY_JSONNODE_REMOVE_OFFSET UNITYSDK_OFFSET(0x199155A0)
#define HOUDINIENGINEUNITY_JSONNODE_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x19915F80)
#define HOUDINIENGINEUNITY_JSONNODE_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x19915B60)
#define HOUDINIENGINEUNITY_JSONNODE_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x19915DB0)
#define HOUDINIENGINEUNITY_JSONNODE_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x19915CA0)
#define HOUDINIENGINEUNITY_JSONNODE_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0x199160E0)
#define HOUDINIENGINEUNITY_JSONNODE_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x19915580)
#define HOUDINIENGINEUNITY_JSONNODE_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x199154D0)
#define HOUDINIENGINEUNITY_JSONNODE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x199154B0)
#define HOUDINIENGINEUNITY_JSONNODE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x199154F0)
#define HOUDINIENGINEUNITY_JSONNODE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x199157C0)
#define HOUDINIENGINEUNITY_JSONNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x199156C0)
#define HOUDINIENGINEUNITY_JSONNODE_WRITEMATRIX_OFFSET UNITYSDK_OFFSET(0x1991E250)
#define HOUDINIENGINEUNITY_JSONNODE_WRITEQUATERNION_OFFSET UNITYSDK_OFFSET(0x199187D0)
#define HOUDINIENGINEUNITY_JSONNODE_WRITERECTOFFSET_OFFSET UNITYSDK_OFFSET(0x19919C30)
#define HOUDINIENGINEUNITY_JSONNODE_WRITERECT_OFFSET UNITYSDK_OFFSET(0x19919210)
#define HOUDINIENGINEUNITY_JSONNODE_WRITEVECTOR2_OFFSET UNITYSDK_OFFSET(0x19916F30)
#define HOUDINIENGINEUNITY_JSONNODE_WRITEVECTOR3_OFFSET UNITYSDK_OFFSET(0x19917570)
#define HOUDINIENGINEUNITY_JSONNODE_WRITEVECTOR4_OFFSET UNITYSDK_OFFSET(0x19917D90)
#define HOUDINIENGINEUNITY_JSONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19914490)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONNode_TypeDefinitionIndex = 38512;

	class JSONNode : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::JSONContainerType* StaticGet_QuaternionContainerType()
		{
			return (::HoudiniEngineUnity::JSONContainerType*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x5DB0);
		}
		static ::HoudiniEngineUnity::JSONContainerType* StaticGet_RectContainerType()
		{
			return (::HoudiniEngineUnity::JSONContainerType*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x5DB4);
		}
		static ::System::Boolean* StaticGet_forceASCII()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x5DB8);
		}
		static ::System::Boolean* StaticGet_longAsString()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x5DB9);
		}
		static ::HoudiniEngineUnity::JSONContainerType* StaticGet_VectorContainerType()
		{
			return (::HoudiniEngineUnity::JSONContainerType*)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x5DBC);
		}
		static ::System::Text::StringBuilder** StaticGet_m_EscapeBuilder()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* get_Item(::System::Int32 a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::HoudiniEngineUnity::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::HoudiniEngineUnity::JSONNode* get_Item_1(::System::String* a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::String* a1, ::HoudiniEngineUnity::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsNumber()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ISNUMBER_OFFSET))(this);
		}

		::System::Boolean get_IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ISSTRING_OFFSET))(this);
		}

		::System::Boolean get_IsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ISBOOLEAN_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ISNULL_OFFSET))(this);
		}

		::System::Boolean get_IsArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ISARRAY_OFFSET))(this);
		}

		::System::Boolean get_IsObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ISOBJECT_OFFSET))(this);
		}

		::System::Boolean get_Inline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_INLINE_OFFSET))(this);
		}

		::System::Void set_Inline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_SET_INLINE_OFFSET))(this, a1);
		}

		::System::Void Add(::System::String* a1, ::HoudiniEngineUnity::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_ADD_OFFSET))(this, a1, a2);
		}

		::System::Void Add_1(::HoudiniEngineUnity::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_ADD_1_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::JSONNode* Remove(::System::String* a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_REMOVE_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::JSONNode* Remove_1(::System::Int32 a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_REMOVE_1_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::JSONNode* Remove_2(::HoudiniEngineUnity::JSONNode* a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_REMOVE_2_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_CHILDREN_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* get_DeepChildren()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_DEEPCHILDREN_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::HoudiniEngineUnity::JSONNode*>>* get_Linq()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::HoudiniEngineUnity::JSONNode*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_LINQ_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode_KeyEnumerator get_Keys()
		{
			return ((::HoudiniEngineUnity::JSONNode_KeyEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_KEYS_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode_ValueEnumerator get_Values()
		{
			return ((::HoudiniEngineUnity::JSONNode_ValueEnumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_VALUES_OFFSET))(this);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_SET_ASDOUBLE_OFFSET))(this, a1);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_SET_ASINT_OFFSET))(this, a1);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_SET_ASFLOAT_OFFSET))(this, a1);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_SET_ASBOOL_OFFSET))(this, a1);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ASLONG_OFFSET))(this);
		}

		::System::Void set_AsLong(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_SET_ASLONG_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::JSONArray* get_AsArray()
		{
			return ((::HoudiniEngineUnity::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ASARRAY_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONObject* get_AsObject()
		{
			return ((::HoudiniEngineUnity::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ASOBJECT_OFFSET))(this);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit(::System::String* a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::String* op_Implicit_1(::HoudiniEngineUnity::JSONNode* a1)
		{
			return ((::System::String*(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_2(::System::Double a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::Double))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_2_OFFSET))(a1);
		}

		static ::System::Double op_Implicit_3(::HoudiniEngineUnity::JSONNode* a1)
		{
			return ((::System::Double(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_3_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_4(::System::Single a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_4_OFFSET))(a1);
		}

		static ::System::Single op_Implicit_5(::HoudiniEngineUnity::JSONNode* a1)
		{
			return ((::System::Single(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_5_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_6(::System::Int32 a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_6_OFFSET))(a1);
		}

		static ::System::Int32 op_Implicit_7(::HoudiniEngineUnity::JSONNode* a1)
		{
			return ((::System::Int32(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_7_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_8(::System::Int64 a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::Int64))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_8_OFFSET))(a1);
		}

		static ::System::Int64 op_Implicit_9(::HoudiniEngineUnity::JSONNode* a1)
		{
			return ((::System::Int64(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_9_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_10(::System::Boolean a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_10_OFFSET))(a1);
		}

		static ::System::Boolean op_Implicit_11(::HoudiniEngineUnity::JSONNode* a1)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_11_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_12(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::HoudiniEngineUnity::JSONNode*> a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::HoudiniEngineUnity::JSONNode*>))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_12_OFFSET))(a1);
		}

		static ::System::Boolean op_Equality(::HoudiniEngineUnity::JSONNode* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::HoudiniEngineUnity::JSONNode* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::JSONNode*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Text::StringBuilder* get_EscapeBuilder()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GET_ESCAPEBUILDER_OFFSET))();
		}

		static ::System::String* Escape(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_ESCAPE_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::JSONNode* ParseElement(::System::String* a1, ::System::Boolean a2)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_PARSEELEMENT_OFFSET))(a1, a2);
		}

		static ::HoudiniEngineUnity::JSONNode* Parse(::System::String* a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_PARSE_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::JSONNode* GetContainer(::HoudiniEngineUnity::JSONContainerType a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::HoudiniEngineUnity::JSONContainerType))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_GETCONTAINER_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_13(::UnityEngine::Vector2 a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_13_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_14(::UnityEngine::Vector3 a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_14_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_15(::UnityEngine::Vector4 a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_15_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_16(::UnityEngine::Quaternion a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_16_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_17(::UnityEngine::Rect a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_17_OFFSET))(a1);
		}

		static ::HoudiniEngineUnity::JSONNode* op_Implicit_18(::UnityEngine::RectOffset* a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_18_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 op_Implicit_19(::HoudiniEngineUnity::JSONNode* a1)
		{
			return ((::UnityEngine::Vector2(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_19_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 op_Implicit_20(::HoudiniEngineUnity::JSONNode* a1)
		{
			return ((::UnityEngine::Vector3(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_20_OFFSET))(a1);
		}

		static ::UnityEngine::Vector4 op_Implicit_21(::HoudiniEngineUnity::JSONNode* a1)
		{
			return ((::UnityEngine::Vector4(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_21_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion op_Implicit_22(::HoudiniEngineUnity::JSONNode* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_22_OFFSET))(a1);
		}

		static ::UnityEngine::Rect op_Implicit_23(::HoudiniEngineUnity::JSONNode* a1)
		{
			return ((::UnityEngine::Rect(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_23_OFFSET))(a1);
		}

		static ::UnityEngine::RectOffset* op_Implicit_24(::HoudiniEngineUnity::JSONNode* a1)
		{
			return ((::UnityEngine::RectOffset*(*)(::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_OP_IMPLICIT_24_OFFSET))(a1);
		}

		::UnityEngine::Vector2 ReadVector2(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READVECTOR2_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 ReadVector2_1(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READVECTOR2_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 ReadVector2_2()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READVECTOR2_2_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* WriteVector2(::UnityEngine::Vector2 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::UnityEngine::Vector2, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_WRITEVECTOR2_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 ReadVector3(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READVECTOR3_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ReadVector3_1(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READVECTOR3_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 ReadVector3_2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READVECTOR3_2_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* WriteVector3(::UnityEngine::Vector3 a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::UnityEngine::Vector3, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_WRITEVECTOR3_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector4 ReadVector4(::UnityEngine::Vector4 a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READVECTOR4_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 ReadVector4_1()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READVECTOR4_1_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* WriteVector4(::UnityEngine::Vector4 a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_WRITEVECTOR4_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion ReadQuaternion(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READQUATERNION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion ReadQuaternion_1()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READQUATERNION_1_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* WriteQuaternion(::UnityEngine::Quaternion a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_WRITEQUATERNION_OFFSET))(this, a1);
		}

		::UnityEngine::Rect ReadRect(::UnityEngine::Rect a1)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READRECT_OFFSET))(this, a1);
		}

		::UnityEngine::Rect ReadRect_1()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READRECT_1_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* WriteRect(::UnityEngine::Rect a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_WRITERECT_OFFSET))(this, a1);
		}

		::UnityEngine::RectOffset* ReadRectOffset(::UnityEngine::RectOffset* a1)
		{
			return ((::UnityEngine::RectOffset*(*)(::PVOID, ::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READRECTOFFSET_OFFSET))(this, a1);
		}

		::UnityEngine::RectOffset* ReadRectOffset_1()
		{
			return ((::UnityEngine::RectOffset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READRECTOFFSET_1_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* WriteRectOffset(::UnityEngine::RectOffset* a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::UnityEngine::RectOffset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_WRITERECTOFFSET_OFFSET))(this, a1);
		}

		::UnityEngine::Matrix4x4 ReadMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_READMATRIX_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* WriteMatrix(::UnityEngine::Matrix4x4 a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONNODE_WRITEMATRIX_OFFSET))(this, a1);
		}
	};
}
