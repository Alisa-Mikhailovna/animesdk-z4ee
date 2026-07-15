#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class Test_Terrain; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class Terrain; }

#define HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x199298F0)
#define HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19929930)
#define HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x19929940)
#define HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x19929980)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Terrain_Extensions___c_TypeDefinitionIndex = 38609;

	class Test_Terrain_Extensions___c : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_Terrain_Extensions___c** StaticGet___9()
		{
			return (::HoudiniEngineUnity::Test_Terrain_Extensions___c**)Il2CppClass::FromTypeDefinitionIndex(Test_Terrain_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x1AC70);
		}
		static ::System::Converter_2<::UnityEngine::Terrain*, ::HoudiniEngineUnity::Test_Terrain*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::Terrain*, ::HoudiniEngineUnity::Test_Terrain*>**)Il2CppClass::FromTypeDefinitionIndex(Test_Terrain_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x1AC78);
		}
		static ::System::Converter_2<::UnityEngine::Terrain*, ::HoudiniEngineUnity::Test_Terrain*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::Terrain*, ::HoudiniEngineUnity::Test_Terrain*>**)Il2CppClass::FromTypeDefinitionIndex(Test_Terrain_Extensions___c_TypeDefinitionIndex)->GetStaticField(0x1AC80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_Terrain* _ToTestObject_b__1_0(::UnityEngine::Terrain* a1)
		{
			return ((::HoudiniEngineUnity::Test_Terrain*(*)(::PVOID, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_Terrain* _ToTestObject_b__2_0(::UnityEngine::Terrain* a1)
		{
			return ((::HoudiniEngineUnity::Test_Terrain*(*)(::PVOID, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}
	};
}
