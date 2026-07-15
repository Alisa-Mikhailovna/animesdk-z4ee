#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_CAPSULEAOPASS_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA553F0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CapsuleAOPass_ShaderIDs_TypeDefinitionIndex = 36004;

	class CapsuleAOPass_ShaderIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__OccluderListPitch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11680);
		}
		static ::System::Int32* StaticGet__OccluderListBufferRW()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11684);
		}
		static ::System::Int32* StaticGet__CapsuleAOColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11688);
		}
		static ::System::Int32* StaticGet__HizMinTex_TexelSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1168C);
		}
		static ::System::Int32* StaticGet__InvProjectMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11690);
		}
		static ::System::Int32* StaticGet__ConeOcclusionTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11694);
		}
		static ::System::Int32* StaticGet__DynamicOccluderBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x11698);
		}
		static ::System::Int32* StaticGet__NumDynamicOccluders()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x1169C);
		}
		static ::System::Int32* StaticGet__HiZMipLevel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x116A0);
		}
		static ::System::Int32* StaticGet__OccluderListLookupTextureRW()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x116A4);
		}
		static ::System::Int32* StaticGet__TileSizeInHiZMipN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x116A8);
		}
		static ::System::Int32* StaticGet__Tile_Size()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x116AC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS_SHADERIDS__CCTOR_OFFSET))();
		}
	};
}
