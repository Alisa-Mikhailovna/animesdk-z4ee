#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
class Class_1_E4CB20B056222958;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class Transform; }

#define CLASS_3_4D01A2E7B479D8DE_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0xAD33C00)
#define CLASS_3_4D01A2E7B479D8DE_GET_LIGHTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xAD33B50)
#define CLASS_3_4D01A2E7B479D8DE_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xAD34210)
#define CLASS_3_4D01A2E7B479D8DE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAD341D0)
#define CLASS_3_4D01A2E7B479D8DE_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xAD33EE0)
#define CLASS_3_4D01A2E7B479D8DE_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0xAD33FF0)
#define CLASS_3_4D01A2E7B479D8DE_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xAD33F30)
#define CLASS_3_4D01A2E7B479D8DE_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0xAD34050)
#define CLASS_3_4D01A2E7B479D8DE_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0xAD33D20)
#define CLASS_3_4D01A2E7B479D8DE_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0xAD33C50)
#define CLASS_3_4D01A2E7B479D8DE_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0xAD33CA0)
#define CLASS_3_4D01A2E7B479D8DE_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0xAD34190)
#define CLASS_3_4D01A2E7B479D8DE_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xAD34140)
#define CLASS_3_4D01A2E7B479D8DE_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0xAD33CE0)
#define CLASS_3_4D01A2E7B479D8DE_ONRELEASE_OFFSET UNITYSDK_OFFSET(0xAD33D70)
#define CLASS_3_4D01A2E7B479D8DE_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xAD33E80)
#define CLASS_3_4D01A2E7B479D8DE_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0xAD33F80)
#define CLASS_3_4D01A2E7B479D8DE_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0xAD340B0)
#define CLASS_3_4D01A2E7B479D8DE_ONTURNOFF_OFFSET UNITYSDK_OFFSET(0xAD33E40)
#define CLASS_3_4D01A2E7B479D8DE_ONTURNON_OFFSET UNITYSDK_OFFSET(0xAD33E00)
#define CLASS_3_4D01A2E7B479D8DE_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0xAD34100)
#define CLASS_3_4D01A2E7B479D8DE_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0xAD33DB0)
#define CLASS_3_4D01A2E7B479D8DE__CTOR_OFFSET UNITYSDK_OFFSET(0xAD34260)

inline static constexpr unsigned int Class_3_4D01A2E7B479D8DE_TypeDefinitionIndex = 47217;

class Class_3_4D01A2E7B479D8DE : public ::RPG::Client::TABehaviorBase
{
public:
	::Class_1_E4CB20B056222958* Field_3_0; // 0x38
	::System::Boolean Field_3_1; // 0x40
	::System::Boolean Field_3_2; // 0x41

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* get_lightTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_GET_LIGHTTRANSFORM_OFFSET))(this);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Void OnPutToPool()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONPUTTOPOOL_OFFSET))(this);
	}

	::System::Void OnGetFromPoolAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONRELEASE_OFFSET))(this);
	}

	::System::Void SetHostManagedLight(::Class_1_E4CB20B056222958* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4CB20B056222958*))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
	}

	::System::Void OnTurnOn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONTURNON_OFFSET))(this);
	}

	::System::Void OnTurnOff()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONTURNOFF_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}

	::System::Void OnUnserializeFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONUNSERIALIZEFINISH_OFFSET))(this);
	}

	::System::Void OnPreUnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4D01A2E7B479D8DE_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
