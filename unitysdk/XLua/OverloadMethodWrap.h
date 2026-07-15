#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodBase; }
namespace XLua { class ObjectCast; }
namespace XLua { class ObjectCasters; }
namespace XLua { class ObjectCheck; }
namespace XLua { class ObjectCheckers; }
namespace XLua { class ObjectTranslator; }

#define XLUA_OVERLOADMETHODWRAP_CALL_OFFSET UNITYSDK_OFFSET(0x1429BCA0)
#define XLUA_OVERLOADMETHODWRAP_CHECK_OFFSET UNITYSDK_OFFSET(0x1429BAE0)
#define XLUA_OVERLOADMETHODWRAP_GET_HASDEFALUTVALUE_OFFSET UNITYSDK_OFFSET(0x14299C60)
#define XLUA_OVERLOADMETHODWRAP_INIT_OFFSET UNITYSDK_OFFSET(0x14299CA0)
#define XLUA_OVERLOADMETHODWRAP_SET_HASDEFALUTVALUE_OFFSET UNITYSDK_OFFSET(0x14299C70)
#define XLUA_OVERLOADMETHODWRAP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1429C680)
#define XLUA_OVERLOADMETHODWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0x14299C80)

namespace XLua
{
	inline static constexpr unsigned int OverloadMethodWrap_TypeDefinitionIndex = 47962;

	class OverloadMethodWrap : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::XLua::ObjectCast*>** StaticGet_paramsCasts()
		{
			return (::System::Collections::Generic::List_1<::XLua::ObjectCast*>**)Il2CppClass::FromTypeDefinitionIndex(OverloadMethodWrap_TypeDefinitionIndex)->GetStaticField(0x1DE90);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_inPosList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OverloadMethodWrap_TypeDefinitionIndex)->GetStaticField(0x1DE98);
		}
		static ::System::Collections::Generic::List_1<::System::Boolean>** StaticGet_isOptionalList()
		{
			return (::System::Collections::Generic::List_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OverloadMethodWrap_TypeDefinitionIndex)->GetStaticField(0x1DEA0);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_outPosList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OverloadMethodWrap_TypeDefinitionIndex)->GetStaticField(0x1DEA8);
		}
		static ::System::Collections::Generic::List_1<::XLua::ObjectCheck*>** StaticGet_paramsChecks()
		{
			return (::System::Collections::Generic::List_1<::XLua::ObjectCheck*>**)Il2CppClass::FromTypeDefinitionIndex(OverloadMethodWrap_TypeDefinitionIndex)->GetStaticField(0x1DEB0);
		}
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_defaultValueList()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(OverloadMethodWrap_TypeDefinitionIndex)->GetStaticField(0x1DEB8);
		}
		::Il2CppArray<::XLua::ObjectCheck*>* checkArray; // 0x10
		::Il2CppArray<::XLua::ObjectCast*>* castArray; // 0x18
		::System::Type* targetType; // 0x20
		::Il2CppArray<::System::Object*>* defaultValueArray; // 0x28
		::System::Reflection::MethodBase* method; // 0x30
		::XLua::ObjectTranslator* translator; // 0x38
		::Il2CppArray<::System::Int32>* refPos; // 0x40
		::Il2CppArray<::System::Int32>* inPosArray; // 0x48
		::System::Type* paramsType; // 0x50
		::Il2CppArray<::System::Object*>* args; // 0x58
		::Il2CppArray<::System::Boolean>* isOptionalArray; // 0x60
		::Il2CppArray<::System::Int32>* outPosArray; // 0x68
		::System::Int32 luaStackPosStart; // 0x70
		::System::Boolean isVoid; // 0x74
		::System::Boolean targetNeeded; // 0x75
		::System::Boolean _HasDefalutValue_k__BackingField; // 0x76

		::System::Void _ctor(::XLua::ObjectTranslator* a1, ::System::Type* a2, ::System::Reflection::MethodBase* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP__CCTOR_OFFSET))();
		}

		::System::Boolean get_HasDefalutValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_GET_HASDEFALUTVALUE_OFFSET))(this);
		}

		::System::Void set_HasDefalutValue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_SET_HASDEFALUTVALUE_OFFSET))(this, a1);
		}

		::System::Void Init(::XLua::ObjectCheckers* a1, ::XLua::ObjectCasters* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::ObjectCheckers*, ::XLua::ObjectCasters*))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean Check(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_CHECK_OFFSET))(this, a1);
		}

		::System::Int32 Call(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_CALL_OFFSET))(this, a1);
		}
	};
}
