#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY32_BITAND_OFFSET UNITYSDK_OFFSET(0x3A1ECF0)
#define UNITYENGINE_RENDERING_BITARRAY32_BITNOT_OFFSET UNITYSDK_OFFSET(0x3A1EE70)
#define UNITYENGINE_RENDERING_BITARRAY32_BITOR_OFFSET UNITYSDK_OFFSET(0x3A1EDB0)
#define UNITYENGINE_RENDERING_BITARRAY32_EQUALS_OFFSET UNITYSDK_OFFSET(0x3A1EEC0)
#define UNITYENGINE_RENDERING_BITARRAY32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3A1EF20)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x156070)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x3A1EBA0)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x3A1EB90)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x3A1EC50)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_HUMANIZEDVERSION_OFFSET UNITYSDK_OFFSET(0x3A1EBB0)
#define UNITYENGINE_RENDERING_BITARRAY32_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x2D5A090)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1CED8A20)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1CED8AF0)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CED8B60)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1CED8B70)
#define UNITYENGINE_RENDERING_BITARRAY32_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1CED8B50)
#define UNITYENGINE_RENDERING_BITARRAY32_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3A1EC60)
#define UNITYENGINE_RENDERING_BITARRAY32__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3A1EC80)
#define UNITYENGINE_RENDERING_BITARRAY32__CTOR_OFFSET UNITYSDK_OFFSET(0x2CAC0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray32_TypeDefinitionIndex = 34155;

	struct alignas(4) BitArray32
	{
		::System::UInt32 data; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt32 get_capacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_CAPACITY_OFFSET))(this);
		}

		::System::Boolean get_allFalse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_ALLFALSE_OFFSET))(this);
		}

		::System::Boolean get_allTrue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_ALLTRUE_OFFSET))(this);
		}

		::System::String* get_humanizedVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_HUMANIZEDVERSION_OFFSET))(this);
		}

		::System::String* get_humanizedData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_HUMANIZEDDATA_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* a1)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_BITAND_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* a1)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_BITOR_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_BITNOT_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::BitArray32 op_OnesComplement(::UnityEngine::Rendering::BitArray32 a1)
		{
			return ((::UnityEngine::Rendering::BitArray32(*)(::UnityEngine::Rendering::BitArray32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_ONESCOMPLEMENT_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::BitArray32 op_BitwiseOr(::UnityEngine::Rendering::BitArray32 a1, ::UnityEngine::Rendering::BitArray32 a2)
		{
			return ((::UnityEngine::Rendering::BitArray32(*)(::UnityEngine::Rendering::BitArray32, ::UnityEngine::Rendering::BitArray32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_BITWISEOR_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rendering::BitArray32 op_BitwiseAnd(::UnityEngine::Rendering::BitArray32 a1, ::UnityEngine::Rendering::BitArray32 a2)
		{
			return ((::UnityEngine::Rendering::BitArray32(*)(::UnityEngine::Rendering::BitArray32, ::UnityEngine::Rendering::BitArray32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_BITWISEAND_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray32 a1, ::UnityEngine::Rendering::BitArray32 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray32, ::UnityEngine::Rendering::BitArray32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray32 a1, ::UnityEngine::Rendering::BitArray32 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray32, ::UnityEngine::Rendering::BitArray32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY32_GETHASHCODE_OFFSET))(this);
		}
	};
}
