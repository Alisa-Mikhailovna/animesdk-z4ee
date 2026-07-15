#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDRIMatStateOperation.h"

class FiveDimRenderingItem;

#define FDRIDISSOLVEOPERATION_METHOD_3_4E6960335B200E06_OFFSET UNITYSDK_OFFSET(0x145A95A0)
#define FDRIDISSOLVEOPERATION_METHOD_3_78BAA4A40C1D8211_1_OFFSET UNITYSDK_OFFSET(0x145A9690)
#define FDRIDISSOLVEOPERATION_METHOD_3_78BAA4A40C1D8211_OFFSET UNITYSDK_OFFSET(0x145A9200)
#define FDRIDISSOLVEOPERATION_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x145A99B0)
#define FDRIDISSOLVEOPERATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x145A9A20)
#define FDRIDISSOLVEOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x145A9A00)

inline static constexpr unsigned int FDRIDissolveOperation_TypeDefinitionIndex = 45339;

class FDRIDissolveOperation : public ::FDRIMatStateOperation
{
public:
	static ::System::Int32* StaticGet__DissolveUseCustomData()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FDRIDissolveOperation_TypeDefinitionIndex)->GetStaticField(0xAD30);
	}
	::System::Single DissolveRate; // 0x20
	::System::Single DissolveScale; // 0x24
	::System::Boolean DissolveON; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION__CCTOR_OFFSET))();
	}

	::System::Void Method_3_78BAA4A40C1D8211(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_METHOD_3_78BAA4A40C1D8211_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E6960335B200E06(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_METHOD_3_4E6960335B200E06_OFFSET))(this, a1);
	}

	::System::Void Method_3_78BAA4A40C1D8211_1(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_METHOD_3_78BAA4A40C1D8211_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
