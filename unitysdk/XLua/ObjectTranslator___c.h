#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }
namespace XLua { class DelegateBridgeBase; }

#define XLUA_OBJECTTRANSLATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x142348E0)
#define XLUA_OBJECTTRANSLATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14234910)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6798_0_OFFSET UNITYSDK_OFFSET(0x14234BC0)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6798_1_OFFSET UNITYSDK_OFFSET(0x14234920)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6798_2_OFFSET UNITYSDK_OFFSET(0x142349E0)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6798_3_OFFSET UNITYSDK_OFFSET(0x14234A70)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6798_4_OFFSET UNITYSDK_OFFSET(0x14234B30)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6798_5_OFFSET UNITYSDK_OFFSET(0x14234BD0)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6798_6_OFFSET UNITYSDK_OFFSET(0x14234BE0)
#define XLUA_OBJECTTRANSLATOR___C__GETDELEGATE_B__6799_0_OFFSET UNITYSDK_OFFSET(0x14234C70)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator___c_TypeDefinitionIndex = 47868;

	class ObjectTranslator___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>** StaticGet___9__6798_0()
		{
			return (::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x5640);
		}
		static ::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>** StaticGet___9__6798_5()
		{
			return (::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x5648);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___9__6798_4()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x5650);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___9__6798_2()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x5658);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__6799_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x5660);
		}
		static ::XLua::ObjectTranslator___c** StaticGet___9()
		{
			return (::XLua::ObjectTranslator___c**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x5668);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__6798_3()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x5670);
		}
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___9__6798_6()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x5678);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__6798_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x5680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _getCreatorUsingGeneric_b__6798_1(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6798_1_OFFSET))(this, a1);
		}

		::System::Int32 _getCreatorUsingGeneric_b__6798_2(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6798_2_OFFSET))(this, a1);
		}

		::System::Boolean _getCreatorUsingGeneric_b__6798_3(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6798_3_OFFSET))(this, a1);
		}

		::System::Int32 _getCreatorUsingGeneric_b__6798_4(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6798_4_OFFSET))(this, a1);
		}

		::System::Delegate* _getCreatorUsingGeneric_b__6798_0(::XLua::DelegateBridgeBase* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6798_0_OFFSET))(this, a1);
		}

		::System::Delegate* _getCreatorUsingGeneric_b__6798_5(::XLua::DelegateBridgeBase* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6798_5_OFFSET))(this, a1);
		}

		::System::Type* _getCreatorUsingGeneric_b__6798_6(::System::Reflection::ParameterInfo* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6798_6_OFFSET))(this, a1);
		}

		::System::Boolean _getDelegate_b__6799_0(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETDELEGATE_B__6799_0_OFFSET))(this, a1);
		}
	};
}
