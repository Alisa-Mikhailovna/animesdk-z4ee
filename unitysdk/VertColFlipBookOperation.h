#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDRIMatStateOperation.h"
#include "unitysdk/VertColFlipBookMode.h"

class FiveDimRenderingItem;

#define VERTCOLFLIPBOOKOPERATION_METHOD_3_2760FD3615174BA2_OFFSET UNITYSDK_OFFSET(0xDDC7760)
#define VERTCOLFLIPBOOKOPERATION_METHOD_3_6454AD7212B2C6DE_OFFSET UNITYSDK_OFFSET(0xDDC7B50)
#define VERTCOLFLIPBOOKOPERATION_METHOD_3_A0C1C05C5CFB7EEC_OFFSET UNITYSDK_OFFSET(0xDDC76D0)
#define VERTCOLFLIPBOOKOPERATION_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xDDC7E20)
#define VERTCOLFLIPBOOKOPERATION_METHOD_3_B1C134C2EF0F4EA1_OFFSET UNITYSDK_OFFSET(0xDDC7370)
#define VERTCOLFLIPBOOKOPERATION_METHOD_3_CD5DDE3898917E36_1_OFFSET UNITYSDK_OFFSET(0xDDC79F0)
#define VERTCOLFLIPBOOKOPERATION_METHOD_3_CD5DDE3898917E36_OFFSET UNITYSDK_OFFSET(0xDDC7890)
#define VERTCOLFLIPBOOKOPERATION__CCTOR_OFFSET UNITYSDK_OFFSET(0xDDC7E80)
#define VERTCOLFLIPBOOKOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0xDDC7E70)

inline static constexpr unsigned int VertColFlipBookOperation_TypeDefinitionIndex = 45337;

class VertColFlipBookOperation : public ::FDRIMatStateOperation
{
public:
	static ::System::Int32* StaticGet__FlipBookUseCustomData()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VertColFlipBookOperation_TypeDefinitionIndex)->GetStaticField(0x14A40);
	}
	::VertColFlipBookMode Mode; // 0x20
	::System::Int32 FrameID0; // 0x24
	::System::Int32 FrameID1; // 0x28
	::System::Int32 FrameID2; // 0x2C
	::System::Int32 FrameID3; // 0x30
	::System::Int32 FrameID4; // 0x34
	::System::Int32 FrameID5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION__CCTOR_OFFSET))();
	}

	::System::Void Method_3_B1C134C2EF0F4EA1(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_METHOD_3_B1C134C2EF0F4EA1_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A0C1C05C5CFB7EEC(::FiveDimRenderingItem* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_METHOD_3_A0C1C05C5CFB7EEC_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_CD5DDE3898917E36(::FiveDimRenderingItem* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_METHOD_3_CD5DDE3898917E36_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_CD5DDE3898917E36_1(::FiveDimRenderingItem* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_METHOD_3_CD5DDE3898917E36_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_2760FD3615174BA2(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_METHOD_3_2760FD3615174BA2_OFFSET))(this, a1);
	}

	::System::Void Method_3_6454AD7212B2C6DE(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_METHOD_3_6454AD7212B2C6DE_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + VERTCOLFLIPBOOKOPERATION_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
