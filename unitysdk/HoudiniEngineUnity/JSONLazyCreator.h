#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode.h"
#include "unitysdk/HoudiniEngineUnity/JSONNodeType.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_Enumerator.h"
#include "unitysdk/HoudiniEngineUnity/JSONTextMode.h"

namespace HoudiniEngineUnity { class JSONArray; }
namespace HoudiniEngineUnity { class JSONObject; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_ADD_1_OFFSET UNITYSDK_OFFSET(0x19914DC0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_ADD_OFFSET UNITYSDK_OFFSET(0x19914CA0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x19914EE0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19914970)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19914F00)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x19915320)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x19915280)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x19915090)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x19914FD0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x19914F10)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x19915150)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x199153B0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x19914B90)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x199149A0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_TAG_OFFSET UNITYSDK_OFFSET(0x19914960)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19914EA0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19914EC0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x199152D0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x199150F0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x19915030)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x19914F70)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0x199151E0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x19914BC0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x199149D0)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x19915470)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19914990)
#define HOUDINIENGINEUNITY_JSONLAZYCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19913700)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONLazyCreator_TypeDefinitionIndex = 38529;

	class JSONLazyCreator : public ::HoudiniEngineUnity::JSONNode
	{
	public:
		::HoudiniEngineUnity::JSONNode* m_Node; // 0x10
		::System::String* m_Key; // 0x18

		::System::Void _ctor(::HoudiniEngineUnity::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::HoudiniEngineUnity::JSONNode* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR__CTOR_1_OFFSET))(this, a1, a2);
		}

		::HoudiniEngineUnity::JSONNodeType get_Tag()
		{
			return ((::HoudiniEngineUnity::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_TAG_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode_Enumerator GetEnumerator()
		{
			return ((::HoudiniEngineUnity::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GETENUMERATOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* get_Item(::System::Int32 a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::HoudiniEngineUnity::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::HoudiniEngineUnity::JSONNode* get_Item_1(::System::String* a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::String* a1, ::HoudiniEngineUnity::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Void Add(::HoudiniEngineUnity::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_ADD_OFFSET))(this, a1);
		}

		::System::Void Add_1(::System::String* a1, ::HoudiniEngineUnity::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_ADD_1_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean op_Equality(::HoudiniEngineUnity::JSONLazyCreator* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::HoudiniEngineUnity::JSONLazyCreator* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::JSONLazyCreator*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASINT_OFFSET))(this);
		}

		::System::Void set_AsInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASINT_OFFSET))(this, a1);
		}

		::System::Single get_AsFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASFLOAT_OFFSET))(this);
		}

		::System::Void set_AsFloat(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASFLOAT_OFFSET))(this, a1);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASDOUBLE_OFFSET))(this, a1);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASLONG_OFFSET))(this);
		}

		::System::Void set_AsLong(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASLONG_OFFSET))(this, a1);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_SET_ASBOOL_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::JSONArray* get_AsArray()
		{
			return ((::HoudiniEngineUnity::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASARRAY_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONObject* get_AsObject()
		{
			return ((::HoudiniEngineUnity::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_GET_ASOBJECT_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::HoudiniEngineUnity::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::JSONTextMode))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONLAZYCREATOR_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
