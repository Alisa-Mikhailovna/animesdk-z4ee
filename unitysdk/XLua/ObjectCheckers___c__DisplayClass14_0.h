#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace XLua { class ObjectCheck; }
namespace XLua { class ObjectCheckers; }

#define XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13DB2040)
#define XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__0_OFFSET UNITYSDK_OFFSET(0x13DB2340)
#define XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__1_OFFSET UNITYSDK_OFFSET(0x13DB2560)
#define XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__2_OFFSET UNITYSDK_OFFSET(0x13DB2690)
#define XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__3_OFFSET UNITYSDK_OFFSET(0x13DB27C0)
#define XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__4_OFFSET UNITYSDK_OFFSET(0x13DB28F0)
#define XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__5_OFFSET UNITYSDK_OFFSET(0x13DB29B0)
#define XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__6_OFFSET UNITYSDK_OFFSET(0x13DB2AE0)

namespace XLua
{
	inline static constexpr unsigned int ObjectCheckers___c__DisplayClass14_0_TypeDefinitionIndex = 47982;

	class ObjectCheckers___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::XLua::ObjectCheck* fixTypeCheck; // 0x10
		::XLua::ObjectCheckers* __4__this; // 0x18
		::System::Type* type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _genChecker_b__0(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _genChecker_b__1(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__1_OFFSET))(this, a1, a2);
		}

		::System::Boolean _genChecker_b__2(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__2_OFFSET))(this, a1, a2);
		}

		::System::Boolean _genChecker_b__3(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__3_OFFSET))(this, a1, a2);
		}

		::System::Boolean _genChecker_b__4(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__4_OFFSET))(this, a1, a2);
		}

		::System::Boolean _genChecker_b__5(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__5_OFFSET))(this, a1, a2);
		}

		::System::Boolean _genChecker_b__6(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS___C__DISPLAYCLASS14_0__GENCHECKER_B__6_OFFSET))(this, a1, a2);
		}
	};
}
