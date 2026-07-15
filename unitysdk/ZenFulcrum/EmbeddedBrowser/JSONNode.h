#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/JSONNode_NodeType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_ADD_OFFSET UNITYSDK_OFFSET(0x1D28C200)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_CHECK_OFFSET UNITYSDK_OFFSET(0x1D28BA80)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ASJSON_OFFSET UNITYSDK_OFFSET(0x1D28C4F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D28C2D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x1D28C320)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1D28BA70)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1D28BF10)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D28BCF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D28BA60)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D28C3A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1D28BC10)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1D28BBE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1D28BB10)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1D28BB60)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1D28BB90)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x1D28BC70)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_5_OFFSET UNITYSDK_OFFSET(0x1D28BCA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_6_OFFSET UNITYSDK_OFFSET(0x1D28BEE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_7_OFFSET UNITYSDK_OFFSET(0x1D28C1D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_8_OFFSET UNITYSDK_OFFSET(0x1D28C330)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_9_OFFSET UNITYSDK_OFFSET(0x1D28C360)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D28BAE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_PARSE_OFFSET UNITYSDK_OFFSET(0x1D26B1F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1D28BFB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D28BDD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D28C660)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D26E8A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D28BA20)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D28BA30)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D28BA40)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1D28BA50)
#define ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D28B950)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int JSONNode_TypeDefinitionIndex = 37352;

	class JSONNode : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::JSONNode** StaticGet_NullNode()
		{
			return (::ZenFulcrum::EmbeddedBrowser::JSONNode**)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x650E0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::JSONNode** StaticGet_InvalidNode()
		{
			return (::ZenFulcrum::EmbeddedBrowser::JSONNode**)Il2CppClass::FromTypeDefinitionIndex(JSONNode_TypeDefinitionIndex)->GetStaticField(0x650E8);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>* _objectValue; // 0x10
		::System::String* _stringValue; // 0x18
		::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* _arrayValue; // 0x20
		::System::Double _numberValue; // 0x28
		::ZenFulcrum::EmbeddedBrowser::JSONNode_NodeType _type; // 0x30
		::System::Boolean _boolValue; // 0x34

		::System::Void _ctor(::ZenFulcrum::EmbeddedBrowser::JSONNode_NodeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode_NodeType))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::Collections::Generic::Dictionary_2<::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4(::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_4_OFFSET))(this, a1);
		}

		::System::Void _ctor_5(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CTOR_5_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE__CCTOR_OFFSET))();
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* Parse(::System::String* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_PARSE_OFFSET))(a1);
		}

		::ZenFulcrum::EmbeddedBrowser::JSONNode_NodeType get_Type()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode_NodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ISVALID_OFFSET))(this);
		}

		::ZenFulcrum::EmbeddedBrowser::JSONNode* Check()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_CHECK_OFFSET))(this);
		}

		static ::System::String* op_Implicit(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::String*(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* op_Implicit_1(::System::String* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::System::Int32 op_Implicit_2(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Int32(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_2_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* op_Implicit_3(::System::Int32 a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_3_OFFSET))(a1);
		}

		static ::System::Single op_Explicit(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Single(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_EXPLICIT_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* op_Explicit_1(::System::Single a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_EXPLICIT_1_OFFSET))(a1);
		}

		static ::System::Double op_Implicit_4(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Double(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_4_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* op_Implicit_5(::System::Double a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::Double))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_5_OFFSET))(a1);
		}

		::ZenFulcrum::EmbeddedBrowser::JSONNode* get_Item(::System::String* a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::String* a1, ::ZenFulcrum::EmbeddedBrowser::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_SET_ITEM_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>* op_Implicit_6(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_6_OFFSET))(a1);
		}

		::ZenFulcrum::EmbeddedBrowser::JSONNode* get_Item_1(::System::Int32 a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::Int32 a1, ::ZenFulcrum::EmbeddedBrowser::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>* op_Implicit_7(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Collections::Generic::List_1<::ZenFulcrum::EmbeddedBrowser::JSONNode*>*(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_7_OFFSET))(a1);
		}

		::System::Void Add(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_ADD_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ISNULL_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit_8(::ZenFulcrum::EmbeddedBrowser::JSONNode* a1)
		{
			return ((::System::Boolean(*)(::ZenFulcrum::EmbeddedBrowser::JSONNode*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_8_OFFSET))(a1);
		}

		static ::ZenFulcrum::EmbeddedBrowser::JSONNode* op_Implicit_9(::System::Boolean a1)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::JSONNode*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_OP_IMPLICIT_9_OFFSET))(a1);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_VALUE_OFFSET))(this);
		}

		::System::String* get_AsJSON()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_JSONNODE_GET_ASJSON_OFFSET))(this);
		}
	};
}
