﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct ARTrackableManager_5_t781ED5020888538CF6FC3405034BBF27F05FA2C2;
// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct ARTrackable_2_t3FCE71296784BB45D99340B5EAD5E6F7740DFA47;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t325C602D999E964DB72210E493635E83F8D6CE68;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F;
// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>
struct HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB;
// System.Collections.Generic.IComparer`1<UnityEngine.XR.MeshInfo>
struct IComparer_1_t9DB412F089D09680B953E31880166C6A8FBCEB6D;
// System.Collections.Generic.IEqualityComparer`1<System.Guid>
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.MeshId>
struct IEqualityComparer_1_t491CBF36A24B05E9D27E005C32F9DFAB28BCA898;
// System.Collections.Generic.IReadOnlyDictionary`2<UnityEngine.XR.MeshId,UnityEngine.XR.MeshInfo>
struct IReadOnlyDictionary_2_tC8E316A4186EBBD2EB098E161B0EBE58EA0FA0A4;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>
struct List_1_t447913E715E9E298A8BBACADFBAA1CB629A73DD1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct List_1_t23F59D024DFD759F7295EBC6C25BD5F56992C950;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_t3903923EFB501C3A0672A0E60558673B85435D8E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC;
// UnityEngine.XR.ARSubsystems.SerializableDictionary`2<System.String,System.Byte[]>
struct SerializableDictionary_2_t43C5D129793FC3216489482F7A8B933128D7F0A8;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43;
// System.Collections.Generic.Dictionary`2/Entry<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>[]
struct EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.XR.MeshId>[]
struct SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1;
// UnityEngine.XR.ARFoundation.ARTrackedImage[]
struct ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.XR.MeshInfo[]
struct MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.XR.ARFoundation.ARPoseDriver
struct ARPoseDriver_t443CDE7DCB55B1BA8CCF1E0550F874293019EF16;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2;
// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2;
// UnityEngine.Cubemap
struct Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.XR.ARSubsystems.IReferenceImageLibrary
struct IReferenceImageLibrary_t2F76E7A6C336CA322762A89CA2B00CAEA09FC476;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.XR.ARFoundation.MeshInfoComparer
struct MeshInfoComparer_tA7DD60B18BD0A658E3C6C6CED1A76C07DC5323C4;
// UnityEngine.XR.ARFoundation.MeshQueue
struct MeshQueue_t26B4E176CCC12C4B59FB67D25E0926EA697E4FC8;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary
struct MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary
struct RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Texture3D
struct Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1;
// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor
struct XRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE;
// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076;
// UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36
struct U3CCheckAvailabilityU3Ed__36_t6F13C84826E9B464693DE3899DFB4A9B8D49E28F;
// UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__39
struct U3CInitializeU3Ed__39_tE965692A15A459123FDBE8ED7ACC2D1D74F1EF37;
// UnityEngine.XR.ARFoundation.ARSession/<Install>d__37
struct U3CInstallU3Ed__37_t0A68C1CB1C41C1957F770501E08FC18AD6398091;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider
struct Provider_t04088A6CFC6675A4655FFD62200BFA745A0F9DDA;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5;

IL2CPP_EXTERN_C RuntimeClass* ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_tC8E316A4186EBBD2EB098E161B0EBE58EA0FA0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEE09D0BD215A518344AF2985829C519B609B7B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshInfoComparer_tA7DD60B18BD0A658E3C6C6CED1A76C07DC5323C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral048338E5BA6A5BA9DAA0487ACD80A470818DD06F;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral4B5747F0389E776ABBE6C1BBC3C34BFB3756167D;
IL2CPP_EXTERN_C String_t* _stringLiteral51BB7D3F1F301CB676E1062A48735477519D5CDE;
IL2CPP_EXTERN_C String_t* _stringLiteral5A6927388BD875355A3644B8F7ED9EF454485186;
IL2CPP_EXTERN_C String_t* _stringLiteral65EBBA267634801A4C3D9713BCE54E91A80CB4C2;
IL2CPP_EXTERN_C String_t* _stringLiteral6D72F57B054B68EB330793D091E6EAA34B2AA5FC;
IL2CPP_EXTERN_C String_t* _stringLiteral6F83B52A66E5AE7AB6F80F1349AF3A70CC3F0D92;
IL2CPP_EXTERN_C String_t* _stringLiteral7DCC6569C2F6EC43635C15A4446068D2FE1897D5;
IL2CPP_EXTERN_C String_t* _stringLiteral909B5EE583AEAD2F304B5DB440E22A13D66EAEDE;
IL2CPP_EXTERN_C String_t* _stringLiteral95B5D77ED41BBF74119578D4FBAB0F8EAF55F9D4;
IL2CPP_EXTERN_C String_t* _stringLiteral99DA76DDF309E4C5B1B8487713C1FFD0A2C9193F;
IL2CPP_EXTERN_C String_t* _stringLiteral9FCD14BBE1F9D7FABE94DC59ADD48AF8C7161334;
IL2CPP_EXTERN_C String_t* _stringLiteralA464E0A1E89B417912348648967E1149E81D19BB;
IL2CPP_EXTERN_C String_t* _stringLiteralAE1B3CB371C9291D34EB334456EBC01AC8284947;
IL2CPP_EXTERN_C String_t* _stringLiteralAEA745F0EE1FE9E651B60D51291545515DF75DC8;
IL2CPP_EXTERN_C String_t* _stringLiteralBB6ACAF59A3A9C3CADB8052713C86DBB5C529FF7;
IL2CPP_EXTERN_C String_t* _stringLiteralBB6FE50C87568AA7A84BE3C0C08A3A7CF502EC55;
IL2CPP_EXTERN_C String_t* _stringLiteralBB8CCF339C3F0822915B0C143EC5EC0A626EDD3D;
IL2CPP_EXTERN_C String_t* _stringLiteralC3C20DC4582626068A7E282909B6A2A6FEA01135;
IL2CPP_EXTERN_C String_t* _stringLiteralEAF318A99F57C3C0FB955E318407C91A9432F19B;
IL2CPP_EXTERN_C String_t* _stringLiteralF05280C2A06356A5364FA85DE696CE3230E467C9;
IL2CPP_EXTERN_C String_t* _stringLiteralF91253628691187D0797EFFA7D0213F47B6182C1;
IL2CPP_EXTERN_C const RuntimeMethod* ARSessionOrigin_MakeContentAppearAt_mA98E9E8161E23E9BB7F4551A20DFFE16FBFF8E1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARSessionOrigin_MakeContentAppearAt_mAB793364B3161102E67707B7E2BB2B92C4BB96C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARSessionOrigin_OnBeforeRender_mD344697589F4A0A2576A1DC55CF0BDDA850BEDF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTextureInfo_GetUpdatedTextureInfo_m88B8391EEE756B9D4DD68A2C8B7CDB5468C319F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackableManager_5__ctor_m10BF0C50270ED4A36A140499ADB52D747DE428CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackable_2__ctor_mF2F7A3D938859507914B0842C348EC58E3F74BD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackable_2_get_sessionRelativeData_mEF23E94ECA29E4097BC709FF9B87566C0E03565B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackablesParentTransformChangedEventArgs__ctor_mD26567D31DA6E6A14F69F51972F2AA76B0EAFD8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackedImageManager_CreateRuntimeLibrary_m53343F2B04F48AE642735069B9348B0EAF009D1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackedImageManager_set_referenceLibrary_m826772B820572A41FE7B566E0F6E0C25024D0E5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPoseDriver_t443CDE7DCB55B1BA8CCF1E0550F874293019EF16_m39716667C0EEF17FF7C76150AB9A4924D6750843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mD66D58E941D95457A6D16D8674487EC5982E6293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m3388C15527891356A7EECDC797794290F3F8657D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mE87077C06D8613892171836919671124469E7406_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEF87A6EAD65CA0670F181318C58A651321468CAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m87585F5A842A0867532FDDE762235689DFCBE37A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mE900C9FCB26E90C930D45CB9B1F65869D4ED4AC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m77FC5DB22FE5492542CD8124700F1366FA7781DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m0D79EAECE46ED7F69840100B63E7DE7D2EE4BFEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_mFC2E552EC6875113775FF898EC084EA08CABC5A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m4321A942505EDE6B0C4A1E0C0F4AFBA5D04729B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_BinarySearch_m3E84EA1AA2BED6ADD38E009614AFB68F711690C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mA99B8E3DD8C23511060403982181C0FE607DFE6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m9E7C090D656D727A3B94A5D61857719BAB821CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mCBC998E1A90A850FD60CA51945C9BDAD153902FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m2BDAD1026A4B3AAA3772EC4395B848261A6DB76C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mCC0B89D4918E903BE44EDAEDD3D79F1731A64861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFDF935486215902087CEC650E2D6323DFEA062FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7004A506FB124A036B306D77A6C7A4F6721A628E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m1E18CE6DDF5DAE6A81CCFFAF52221377C5C72DA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m61C6F9C75B9E5A959A8CAB418B2B65F2774FF7CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC189CF9EC338F1F421B380788A6685D9041E5891_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_get_result_mAD006A2A6346FC6F9381181481B792E7F13BAAA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_get_result_mED5F07CD1ABAB5BC71C7821C8462EF53949C8DF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_EnsureSubsystemInstanceSet_mF63EB1FD077F06E205102073CEDD9ECA18511541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_get_descriptor_m723178E137A9DEE374BFBDF8F627506C8F1CE697_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_subsystemDescriptor_mF7CA6B57486377149C97D5CA6D59C0F1D8BCEB48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformExtensions_InverseTransformPose_m3705FF36F67498108EBA26FA116491ED4ECBB1DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformExtensions_InverseTransformRay_m3417C7D5AFC5CC8B2ADC0F6DCA4BFF3C7E539B3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckAvailabilityU3Ed__36_System_Collections_IEnumerator_Reset_m8826529D457D216C4F0D74058D9C41EB77713367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeU3Ed__39_System_Collections_IEnumerator_Reset_m8FC03158D4A30390C52890CE1CDA62916CF29114_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInstallU3Ed__37_MoveNext_m10883753BFAA6E6C97897C8C1009C7ED51270B16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInstallU3Ed__37_System_Collections_IEnumerator_Reset_m8DF442701056725A9816E886F188D86C31E29879_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t79B3F8B7459BC18C33A4ED91F9839171A7877ECB* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC97B3C92934B38E3221D0FAB4F1893EB4FEF183C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t84ACCFDFD0A0E6267AFAAD5E2B1E07C35F457A43* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>
struct HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t52BF91A508EE98B5D9CFEC7B1EA932AA2539E3C1* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.XR.ARFoundation.CameraModeExtensions
struct CameraModeExtensions_t24391CA59071E401430A9A07D5298146075C592E  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// UnityEngine.XR.ARFoundation.DebugAssert
struct DebugAssert_t9B1DA9F80CEC5138DB9E1B14EA7024A3FF5EEE72  : public RuntimeObject
{
};

// UnityEngine.XR.ARFoundation.DebugWarn
struct DebugWarn_t851CABC3BFC5A36A81B3C49D6626CBC90CD82484  : public RuntimeObject
{
};

// UnityEngine.XR.ARFoundation.HashCodeUtil
struct HashCodeUtil_t9F6D755C55C6203A1066F0104EAA5244CFEB25B0  : public RuntimeObject
{
};

// UnityEngine.XR.ARFoundation.LightEstimationExtensions
struct LightEstimationExtensions_tCEBD279E8D070FC93EC931F3E0007B8364F7BF7C  : public RuntimeObject
{
};

// UnityEngine.XR.ARFoundation.MeshInfoComparer
struct MeshInfoComparer_tA7DD60B18BD0A658E3C6C6CED1A76C07DC5323C4  : public RuntimeObject
{
};

// UnityEngine.XR.ARFoundation.MeshQueue
struct MeshQueue_t26B4E176CCC12C4B59FB67D25E0926EA697E4FC8  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> UnityEngine.XR.ARFoundation.MeshQueue::m_Queue
	List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* ___m_Queue_0;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId> UnityEngine.XR.ARFoundation.MeshQueue::m_MeshSet
	HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* ___m_MeshSet_1;
	// UnityEngine.XR.ARFoundation.MeshInfoComparer UnityEngine.XR.ARFoundation.MeshQueue::s_MeshInfoComparer
	MeshInfoComparer_tA7DD60B18BD0A658E3C6C6CED1A76C07DC5323C4* ___s_MeshInfoComparer_2;
};

// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary
struct RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
};

// UnityEngine.XR.ARFoundation.TrackingModeExtensions
struct TrackingModeExtensions_t7D5911F43387B9B479723E992B4D8F54DE3CCA5A  : public RuntimeObject
{
};

// UnityEngine.XR.ARFoundation.TransformExtensions
struct TransformExtensions_t8339EF8D894CE90819930A42281671CC47AE5AD0  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36
struct U3CCheckAvailabilityU3Ed__36_t6F13C84826E9B464693DE3899DFB4A9B8D49E28F  : public RuntimeObject
{
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.XR.ARSubsystems.XRSessionSubsystem UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36::<subsystem>5__2
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* ___U3CsubsystemU3E5__2_2;
	// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36::<availabilityPromise>5__3
	Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* ___U3CavailabilityPromiseU3E5__3_3;
};

// UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__39
struct U3CInitializeU3Ed__39_tE965692A15A459123FDBE8ED7ACC2D1D74F1EF37  : public RuntimeObject
{
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__39::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.XR.ARFoundation.ARSession UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__39::<>4__this
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___U3CU3E4__this_2;
};

// UnityEngine.XR.ARFoundation.ARSession/<Install>d__37
struct U3CInstallU3Ed__37_t0A68C1CB1C41C1957F770501E08FC18AD6398091  : public RuntimeObject
{
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession/<Install>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.ARFoundation.ARSession/<Install>d__37::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARFoundation.ARSession/<Install>d__37::<installPromise>5__2
	Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* ___U3CinstallPromiseU3E5__2_2;
};

// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;
};

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;
};

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t60CA0DEB6A3B5350137A04A33B9093FB74218845  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tFB624BCBD66F2375A53C5B17F42E131972D1E0D9  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct SubsystemWithProvider_3_tD731AAC554B5A386083FF524D97FBA7F2B61C61E  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t04088A6CFC6675A4655FFD62200BFA745A0F9DDA* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs
struct ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822 
{
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::<state>k__BackingField
	int32_t ___U3CstateU3Ek__BackingField_0;
};

// UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs
struct ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A 
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_0;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs
struct ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A_marshaled_pinvoke
{
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs
struct ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A_marshaled_com
{
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_1;
};

// UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F 
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<added>k__BackingField
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CaddedU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<updated>k__BackingField
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CupdatedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<removed>k__BackingField
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshaled_pinvoke
{
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CaddedU3Ek__BackingField_0;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CupdatedU3Ek__BackingField_1;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshaled_com
{
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CaddedU3Ek__BackingField_0;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CupdatedU3Ek__BackingField_1;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CremovedU3Ek__BackingField_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.XR.MeshId
struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC 
{
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId2
	uint64_t ___m_SubId2_2;
};

// UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary
struct MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8  : public RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.XR.ARSubsystems.ScopedProfiler
struct ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F 
{
	union
	{
		struct
		{
		};
		uint8_t ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F__padding[1];
	};
};

// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidLow
	uint64_t ___m_GuidLow_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidHigh
	uint64_t ___m_GuidHigh_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t48A12045FD3955C736D4AC5379EE6C4C5793DCF0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t48A12045FD3955C736D4AC5379EE6C4C5793DCF0__padding[24];
	};
};

// UnityEngine.XR.ARFoundation.DebugAssert/Message
struct Message_tBD1539BCA4AE5990D39E1CED497DCBB689CA124F 
{
	union
	{
		struct
		{
		};
		uint8_t Message_tBD1539BCA4AE5990D39E1CED497DCBB689CA124F__padding[1];
	};
};

// UnityEngine.XR.ARFoundation.DebugWarn/Message
struct Message_tBBCFE5D28A93F5B9DC0527B9D744F73929143408 
{
	union
	{
		struct
		{
		};
		uint8_t Message_tBBCFE5D28A93F5B9DC0527B9D744F73929143408__padding[1];
	};
};

// UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary/Enumerator
struct Enumerator_tF50B6A349DB9B6D1A9E5AD924A439A670F70E1ED 
{
	// UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary/Enumerator::m_Library
	MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8* ___m_Library_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary/Enumerator::m_Index
	int32_t ___m_Index_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary/Enumerator
struct Enumerator_tF50B6A349DB9B6D1A9E5AD924A439A670F70E1ED_marshaled_pinvoke
{
	MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8* ___m_Library_0;
	int32_t ___m_Index_1;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary/Enumerator
struct Enumerator_tF50B6A349DB9B6D1A9E5AD924A439A670F70E1ED_marshaled_com
{
	MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8* ___m_Library_0;
	int32_t ___m_Index_1;
};

// System.Nullable`1<UnityEngine.XR.InputDevice>
struct Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___value_1;
};

// System.Nullable`1<UnityEngine.XR.ARFoundation.DebugAssert/Message>
struct Nullable_1_tDECF3330B9FB53769123CDD8CD0189353648A8A8 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Message_tBD1539BCA4AE5990D39E1CED497DCBB689CA124F ___value_1;
};

// System.Nullable`1<UnityEngine.XR.ARFoundation.DebugWarn/Message>
struct Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Message_tBBCFE5D28A93F5B9DC0527B9D744F73929143408 ___value_1;
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct TrackingSubsystem_4_tB7FCF25CAC299E60D9488336C9CBC34A94E8AD78  : public SubsystemWithProvider_3_tD731AAC554B5A386083FF524D97FBA7F2B61C61E
{
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tBFE99C31626F2829DCB547DDCEDBCD0FAB9FDC27  : public RuntimeObject
{
};

// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.XR.MeshInfo
struct MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA 
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::<MeshId>k__BackingField
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::<ChangeState>k__BackingField
	int32_t ___U3CChangeStateU3Ek__BackingField_1;
	// System.Int32 UnityEngine.XR.MeshInfo::<PriorityHint>k__BackingField
	int32_t ___U3CPriorityHintU3Ek__BackingField_2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor
struct XRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE  : public SubsystemDescriptorWithProvider_2_t60CA0DEB6A3B5350137A04A33B9093FB74218845
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::<supportsMovingImages>k__BackingField
	bool ___U3CsupportsMovingImagesU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::<requiresPhysicalImageDimensions>k__BackingField
	bool ___U3CrequiresPhysicalImageDimensionsU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::<supportsMutableLibrary>k__BackingField
	bool ___U3CsupportsMutableLibraryU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::<supportsImageValidation>k__BackingField
	bool ___U3CsupportsImageValidationU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F 
{
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedGuid
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedTextureGuid
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SpecifySize
	bool ___m_SpecifySize_3;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Name
	String_t* ___m_Name_4;
	// UnityEngine.Texture2D UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_pinvoke
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	char* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_com
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	Il2CppChar* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076  : public SubsystemDescriptorWithProvider_2_tFB624BCBD66F2375A53C5B17F42E131972D1E0D9
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 
{
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.XR.ARSubsystems.Configuration
struct Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 
{
	// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::<descriptor>k__BackingField
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___U3CdescriptorU3Ek__BackingField_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::<features>k__BackingField
	uint64_t ___U3CfeaturesU3Ek__BackingField_1;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB  : public TrackingSubsystem_4_tB7FCF25CAC299E60D9488336C9CBC34A94E8AD78
{
	// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::m_ImageLibrary
	RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* ___m_ImageLibrary_4;
};

// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F  : public MulticastDelegate_t
{
};

// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>
struct Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___value_1;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Cubemap
struct Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture3D
struct Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_GuidLow
	uint64_t ___m_GuidLow_4;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_GuidHigh
	uint64_t ___m_GuidHigh_5;
	// UnityEngine.XR.ARSubsystems.SerializableDictionary`2<System.String,System.Byte[]> UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_DataStore
	SerializableDictionary_2_t43C5D129793FC3216489482F7A8B933128D7F0A8* ___m_DataStore_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceImage> UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_Images
	List_1_t23F59D024DFD759F7295EBC6C25BD5F56992C950* ___m_Images_7;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399  : public SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526
{
	// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::<currentConfiguration>k__BackingField
	Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D ___U3CcurrentConfigurationU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_DefaultConfigurationChooser
	ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* ___m_DefaultConfigurationChooser_5;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_ConfigurationChooser
	ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* ___m_ConfigurationChooser_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	RuntimeObject* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.ARPoseDriver
struct ARPoseDriver_t443CDE7DCB55B1BA8CCF1E0550F874293019EF16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::m_Device
	int32_t ___m_Device_4;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseSource
	int32_t ___m_PoseSource_5;
	// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseProviderComponent
	BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* ___m_PoseProviderComponent_6;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::m_TrackingType
	int32_t ___m_TrackingType_7;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::m_UpdateType
	int32_t ___m_UpdateType_8;
	// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::m_UseRelativeTransform
	bool ___m_UseRelativeTransform_9;
	// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::m_OriginPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_OriginPose_10;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5  : public SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2* ___m_PendingAdds_10;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct ARTrackable_2_t3FCE71296784BB45D99340B5EAD5E6F7740DFA47  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014  : public SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_VSyncCount
	int32_t ___m_VSyncCount_11;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_TargetFrameRate
	int32_t ___m_TargetFrameRate_12;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_WasFrameRateSet
	bool ___m_WasFrameRateSet_13;
};

// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2  : public ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A
{
	// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARFoundation.ARTrackedImage::<referenceImage>k__BackingField
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___U3CreferenceImageU3Ek__BackingField_7;
};

// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4  : public ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5
{
	// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_SerializedLibrary
	XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* ___m_SerializedLibrary_14;
	// System.Int32 UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_MaxNumberOfMovingImages
	int32_t ___m_MaxNumberOfMovingImages_15;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_TrackedImagePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_TrackedImagePrefab_16;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs> UnityEngine.XR.ARFoundation.ARTrackedImageManager::trackedImagesChanged
	Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___trackedImagesChanged_17;
	// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage> UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_ReferenceImages
	Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* ___m_ReferenceImages_18;
};

// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>

// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>

// System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>

// System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>

// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// UnityEngine.XR.ARFoundation.CameraModeExtensions

// UnityEngine.XR.ARFoundation.CameraModeExtensions

// UnityEngine.CustomYieldInstruction

// UnityEngine.CustomYieldInstruction

// UnityEngine.XR.ARFoundation.DebugAssert

// UnityEngine.XR.ARFoundation.DebugAssert

// UnityEngine.XR.ARFoundation.DebugWarn

// UnityEngine.XR.ARFoundation.DebugWarn

// UnityEngine.XR.ARFoundation.HashCodeUtil

// UnityEngine.XR.ARFoundation.HashCodeUtil

// UnityEngine.XR.ARFoundation.LightEstimationExtensions

// UnityEngine.XR.ARFoundation.LightEstimationExtensions

// UnityEngine.XR.ARFoundation.MeshInfoComparer

// UnityEngine.XR.ARFoundation.MeshInfoComparer

// UnityEngine.XR.ARFoundation.MeshQueue

// UnityEngine.XR.ARFoundation.MeshQueue

// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary

// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider

// UnityEngine.XR.ARFoundation.TrackingModeExtensions

// UnityEngine.XR.ARFoundation.TrackingModeExtensions

// UnityEngine.XR.ARFoundation.TransformExtensions

// UnityEngine.XR.ARFoundation.TransformExtensions

// System.ValueType

// System.ValueType

// UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36

// UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36

// UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__39

// UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__39

// UnityEngine.XR.ARFoundation.ARSession/<Install>d__37

// UnityEngine.XR.ARFoundation.ARSession/<Install>d__37

// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>

// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs

// UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs

// UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs

// UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs

// UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs

// UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache_0;
};

// UnityEngine.XR.InputDevice

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.XR.MeshId
struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_StaticFields
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshId::s_InvalidId
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___s_InvalidId_0;
};

// UnityEngine.XR.MeshId

// UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary

// UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.XR.ARSubsystems.ScopedProfiler

// UnityEngine.XR.ARSubsystems.ScopedProfiler

// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_StaticFields
{
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.SerializableGuid::k_Empty
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___k_Empty_0;
};

// UnityEngine.XR.ARSubsystems.SerializableGuid

// System.Single

// System.Single

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.XR.ARSubsystems.TrackableId

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// UnityEngine.XR.ARFoundation.DebugAssert/Message

// UnityEngine.XR.ARFoundation.DebugAssert/Message

// UnityEngine.XR.ARFoundation.DebugWarn/Message

// UnityEngine.XR.ARFoundation.DebugWarn/Message

// UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary/Enumerator

// UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary/Enumerator

// System.Nullable`1<UnityEngine.XR.InputDevice>

// System.Nullable`1<UnityEngine.XR.InputDevice>

// System.Nullable`1<UnityEngine.XR.ARFoundation.DebugAssert/Message>

// System.Nullable`1<UnityEngine.XR.ARFoundation.DebugAssert/Message>

// System.Nullable`1<UnityEngine.XR.ARFoundation.DebugWarn/Message>

// System.Nullable`1<UnityEngine.XR.ARFoundation.DebugWarn/Message>

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tBFE99C31626F2829DCB547DDCEDBCD0FAB9FDC27_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::FE78C65211DD0B56A97024FB61111E686EF1FE054AA132BA58E2891AC496F1EE
	__StaticArrayInitTypeSizeU3D24_t48A12045FD3955C736D4AC5379EE6C4C5793DCF0 ___FE78C65211DD0B56A97024FB61111E686EF1FE054AA132BA58E2891AC496F1EE_0;
};

// <PrivateImplementationDetails>

// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor

// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.XR.MeshInfo

// UnityEngine.XR.MeshInfo

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRReferenceImage

// UnityEngine.XR.ARSubsystems.XRReferenceImage

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor

// UnityEngine.XR.ARFoundation.ARTextureInfo

// UnityEngine.XR.ARFoundation.ARTextureInfo

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.XR.ARSubsystems.Configuration

// UnityEngine.XR.ARSubsystems.Configuration

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.SystemException

// System.SystemException

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem

// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem

// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRTrackedImage

// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>

// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>

// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>

// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>

// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>

// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>

// System.ArgumentException

// System.ArgumentException

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Cubemap

// UnityEngine.Cubemap

// System.InvalidOperationException

// System.InvalidOperationException

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Texture3D

// UnityEngine.Texture3D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary

// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary

// System.ArgumentNullException

// System.ArgumentNullException

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t447913E715E9E298A8BBACADFBAA1CB629A73DD1* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3903923EFB501C3A0672A0E60558673B85435D8E* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// UnityEngine.XR.ARFoundation.ARPoseDriver
struct ARPoseDriver_t443CDE7DCB55B1BA8CCF1E0550F874293019EF16_StaticFields
{
	// System.Nullable`1<UnityEngine.XR.InputDevice> UnityEngine.XR.ARFoundation.ARPoseDriver::s_InputTrackingDevice
	Nullable_1_tAFEE6800AACD9764EC689F42FB299F63BB3C50D4 ___s_InputTrackingDevice_4;
};

// UnityEngine.XR.ARFoundation.ARPoseDriver

// UnityEngine.XR.ARFoundation.ARSessionOrigin

// UnityEngine.XR.ARFoundation.ARSessionOrigin

// UnityEngine.XR.ARFoundation.ARTrackable

// UnityEngine.XR.ARFoundation.ARTrackable

// UnityEngine.SpatialTracking.TrackedPoseDriver

// UnityEngine.SpatialTracking.TrackedPoseDriver

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>

// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields
{
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_14;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_15;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_16;
};

// UnityEngine.XR.ARFoundation.ARSession

// UnityEngine.XR.ARFoundation.ARTrackedImage

// UnityEngine.XR.ARFoundation.ARTrackedImage

// UnityEngine.XR.ARFoundation.ARTrackedImageManager

// UnityEngine.XR.ARFoundation.ARTrackedImageManager
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.MeshInfo[]
struct MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA m_Items[1];

	inline MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::get_result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Promise_1_get_result_m4634736D415E9E466CD5D076771BDD5D37958382_gshared_inline (Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB* __this, const RuntimeMethod* method) ;
// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_subsystemDescriptor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_subsystemDescriptor_mB4052808D703DF75CA2D74A5801B59172E3F80C7_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m26A60EE2F51E3FC76A4A0F7DB375D2EF0AD89421_gshared_inline (Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* __this, ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARFoundation.DebugWarn/Message>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC189CF9EC338F1F421B380788A6685D9041E5891_gshared_inline (Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.ARFoundation.DebugWarn/Message>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Message_tBBCFE5D28A93F5B9DC0527B9D744F73929143408 Nullable_1_GetValueOrDefault_m61C6F9C75B9E5A959A8CAB418B2B65F2774FF7CF_gshared_inline (Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE* __this, const RuntimeMethod* method) ;
// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::get_sessionRelativeData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ARTrackable_2_get_sessionRelativeData_m9A72C2EBC2E33C261C8496A74D077912342BDF20_gshared_inline (ARTrackable_2_t3FCE71296784BB45D99340B5EAD5E6F7740DFA47* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable_2__ctor_m8D8C90F7A00B717E77AC5B1B268648B7F4CF5F21_gshared (ARTrackable_2_t3FCE71296784BB45D99340B5EAD5E6F7740DFA47* __this, const RuntimeMethod* method) ;
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>::get_subsystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline (SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>::EnsureSubsystemInstanceSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemLifecycleManager_3_EnsureSubsystemInstanceSet_m0C612BDD7130FEDC076B5671B9223C4F94CDF2A6_gshared (SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55* __this, const RuntimeMethod* method) ;
// TSubsystemDescriptor UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>::get_descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_3_get_descriptor_m55ACAFBB8D8273993E410BEFD978F09ABCF7CDA7_gshared (SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE87077C06D8613892171836919671124469E7406_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___0_key, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3388C15527891356A7EECDC797794290F3F8657D_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___0_key, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___1_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m7F975E253932510963884F11E84E7387808DBA8E_gshared_inline (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* __this, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m87585F5A842A0867532FDDE762235689DFCBE37A_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___0_key, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEF87A6EAD65CA0670F181318C58A651321468CAF_gshared (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_5__ctor_m6945E3DC8FA0F8D13D5A009A34AA8DBB04F0D11D_gshared (ARTrackableManager_5_t781ED5020888538CF6FC3405034BBF27F05FA2C2* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m0D79EAECE46ED7F69840100B63E7DE7D2EE4BFEE_gshared (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFDF935486215902087CEC650E2D6323DFEA062FC_gshared_inline (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA List_1_get_Item_m7004A506FB124A036B306D77A6C7A4F6721A628E_gshared (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mCBC998E1A90A850FD60CA51945C9BDAD153902FE_gshared (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mFC2E552EC6875113775FF898EC084EA08CABC5A1_gshared (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m3E84EA1AA2BED6ADD38E009614AFB68F711690C5_gshared (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA ___0_item, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9E7C090D656D727A3B94A5D61857719BAB821CE4_gshared (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, int32_t ___0_index, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA ___1_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mE900C9FCB26E90C930D45CB9B1F65869D4ED4AC0_gshared (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m1E18CE6DDF5DAE6A81CCFFAF52221377C5C72DA8_gshared (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, int32_t ___0_index, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m2BDAD1026A4B3AAA3772EC4395B848261A6DB76C_gshared (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mA99B8E3DD8C23511060403982181C0FE607DFE6F_gshared_inline (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m77FC5DB22FE5492542CD8124700F1366FA7781DB_gshared (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_gshared (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4321A942505EDE6B0C4A1E0C0F4AFBA5D04729B9_gshared (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem UnityEngine.XR.ARFoundation.ARSession::GetSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* ARSession_GetSubsystem_m31E4A8324A31B4844B6AA43797FE2C53A2BA3BEB (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARSession::set_state(UnityEngine.XR.ARFoundation.ARSessionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSession_set_state_m8C16FB66D3910F9079CD01CE9C98D2D6D46D7CD5 (int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::GetAvailabilityAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* XRSessionSubsystem_GetAvailabilityAsync_m30808B871A7C1BC1BAC7EE85B0F36DB4422769BF (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) ;
// T UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>::get_result()
inline int32_t Promise_1_get_result_mAD006A2A6346FC6F9381181481B792E7F13BAAA4_inline (Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274*, const RuntimeMethod*))Promise_1_get_result_m4634736D415E9E466CD5D076771BDD5D37958382_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions::IsSupported(UnityEngine.XR.ARSubsystems.SessionAvailability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SessionAvailabilityExtensions_IsSupported_m9105265F71A68B18269095FFE362CD24148F6E7C (int32_t ___0_availability, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions::IsInstalled(UnityEngine.XR.ARSubsystems.SessionAvailability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SessionAvailabilityExtensions_IsInstalled_m5AA4AE58BC0BA7C30E77B1B06038BED076ABFFDB (int32_t ___0_availability, const RuntimeMethod* method) ;
// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::get_subsystemDescriptor()
inline XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* SubsystemWithProvider_3_get_subsystemDescriptor_mF7CA6B57486377149C97D5CA6D59C0F1D8BCEB48_inline (SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526* __this, const RuntimeMethod* method)
{
	return ((  XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* (*) (SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526*, const RuntimeMethod*))SubsystemWithProvider_3_get_subsystemDescriptor_mB4052808D703DF75CA2D74A5801B59172E3F80C7_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::get_supportsInstall()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsInstall_m3EE93DA405D5C59B746B621FC30D4CC182BB1E53_inline (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::InstallAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* XRSessionSubsystem_InstallAsync_m7E278495740EB305D92109D0FFE0895B774D3DA7 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) ;
// T UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>::get_result()
inline int32_t Promise_1_get_result_mED5F07CD1ABAB5BC71C7821C8462EF53949C8DF1_inline (Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC*, const RuntimeMethod*))Promise_1_get_result_m4634736D415E9E466CD5D076771BDD5D37958382_gshared_inline)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.ARSession::CheckAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARSession_CheckAvailability_m7090FD96E8580EB3E6CAB97B8344BF845B254D0A (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARSession::get_attemptUpdate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ARSession_get_attemptUpdate_m0EAA239D17F9E81EA7B91E7F9264F25D3A21053A_inline (ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.ARSession::Install()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARSession_Install_m9C4DCECEA000E16F4992376B7E40DA0C95B58166 (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARSession::StartSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSession_StartSubsystem_mABE004B0E0CCB1E71F7A5B58D2DC8A71C2094E2D (ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::MakeContentAppearAt(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionOrigin_MakeContentAppearAt_mAB793364B3161102E67707B7E2BB2B92C4BB96C9 (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_content, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::MakeContentAppearAt(UnityEngine.Transform,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionOrigin_MakeContentAppearAt_mA98E9E8161E23E9BB7F4551A20DFFE16FBFF8E1B (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_content, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::get_contentOffsetTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARSessionOrigin_get_contentOffsetTransform_m9561E0324F993FC59B12FAA8A3BB64FA6BBF6BD9 (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::set_trackablesParent(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARSessionOrigin_set_trackablesParent_m84EC22E19380EDC8B0902DA77CB760D827EB342F_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::get_trackablesParent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::get_camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPoseDriver>()
inline ARPoseDriver_t443CDE7DCB55B1BA8CCF1E0550F874293019EF16* Component_GetComponent_TisARPoseDriver_t443CDE7DCB55B1BA8CCF1E0550F874293019EF16_m39716667C0EEF17FF7C76150AB9A4924D6750843 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPoseDriver_t443CDE7DCB55B1BA8CCF1E0550F874293019EF16* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.SpatialTracking.TrackedPoseDriver>()
inline TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* Component_GetComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mD66D58E941D95457A6D16D8674487EC5982E6293 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::get_UseRelativeTransform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackedPoseDriver_get_UseRelativeTransform_m364C0EC379CBD6898EA09712A3245B3D9E69114B_inline (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::get_originPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TrackedPoseDriver_get_originPose_mBE222A120504DAAF230CE41A3A8BAB847FE28D08_inline (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.XR.ARFoundation.TransformExtensions::TransformPose(UnityEngine.Transform,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TransformExtensions_TransformPose_m657A2F269CFE7ABD9E77029577861EA464E2364C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_onBeforeRender_mEE8925294C807AD08FA0FF35D4C663E098510394 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::remove_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_onBeforeRender_m9F54448ED4059A26C9972E5C9ED2F6DCD58B4E24 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARSessionOrigin::GetCameraOriginPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARSessionOrigin_GetCameraOriginPose_mA78AE0A9DDDFC1F986D58A8DB9E804F09625E942 (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Transform::get_hasChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs::.ctor(UnityEngine.XR.ARFoundation.ARSessionOrigin,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackablesParentTransformChangedEventArgs__ctor_mD26567D31DA6E6A14F69F51972F2AA76B0EAFD8A (ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* __this, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___0_sessionOrigin, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_trackablesParent, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>::Invoke(T)
inline void Action_1_Invoke_m26A60EE2F51E3FC76A4A0F7DB375D2EF0AD89421_inline (Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* __this, ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB*, ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A, const RuntimeMethod*))Action_1_Invoke_m26A60EE2F51E3FC76A4A0F7DB375D2EF0AD89421_gshared_inline)(__this, ___0_obj, method);
}
// System.Void UnityEngine.Transform::set_hasChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSessionStateChangedEventArgs_get_state_mC0A6FB4AF08C068BFD5D9730F60215BE662A950B_inline (ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::set_state(UnityEngine.XR.ARFoundation.ARSessionState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARSessionStateChangedEventArgs_set_state_mBEF6AA8214783D771EDF618B3E863D6DBC1FE8A7_inline (ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::.ctor(UnityEngine.XR.ARFoundation.ARSessionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionStateChangedEventArgs__ctor_m1C0C6E6FD7F83932D0780826124568FCC85C888A (ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* __this, int32_t ___0_state, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARSessionStateChangedEventArgs_GetHashCode_m58967DAA40E3E7088B23CB434E04B3BA745E3076 (ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::Equals(UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARSessionStateChangedEventArgs_Equals_mD7EC44B01E9572499F4888DED9885761FCBA47BF (ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* __this, ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARSessionStateChangedEventArgs_Equals_mDB8C22D91659F1BEA3417585A531A31661D56FD2 (ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARSessionStateChangedEventArgs_ToString_m1F84E487E601B1FB57C5E6F051262AA9264E66D5 (ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::get_descriptor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ARTextureInfo_get_descriptor_m42C04EE9D6B420EFFC6002A044CA8B2FB6E27FE2_inline (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::get_texture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ARTextureInfo_get_texture_m9A17329F68E159CC5C924956D4258BD26990C40A_inline (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::CreateTexture(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ARTextureInfo_CreateTexture_m6A095D54141ADC1B50174B6FE9CCBECFD1B4713C (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_descriptor, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTextureInfo::.ctor(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTextureInfo__ctor_mE3D6856CEA559DD33C81F5E993451608F7515AC1 (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_descriptor, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRTextureDescriptor_Reset_m1BE8024830BA7AFB94AAD01731FDB449DD12A01F (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTextureInfo::DestroyTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTextureInfo_DestroyTexture_m4A1489A030CA1E43E61CB7F3413AC97B5F5180F9 (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTextureInfo::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTextureInfo_Reset_m94C8E8348B77C4A7055ABFC20FA8E59632293A59 (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Equals(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_Equals_m4931F85C225CAC63EC71FBCE246204E244B6CA2B (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_get_valid_mBEE2CC268CC8773618BAB7794118746E235A6761 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_dimension()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.XR.ARFoundation.DebugWarn/Message> UnityEngine.XR.ARFoundation.DebugWarn::WhenFalse(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE DebugWarn_WhenFalse_mADECDEF90132C7730D282B7F39723E3C1223C760_inline (bool ___0_condition, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARFoundation.DebugWarn/Message>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC189CF9EC338F1F421B380788A6685D9041E5891_inline (Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE*, const RuntimeMethod*))Nullable_1_get_HasValue_mC189CF9EC338F1F421B380788A6685D9041E5891_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.XR.ARFoundation.DebugWarn/Message>::GetValueOrDefault()
inline Message_tBBCFE5D28A93F5B9DC0527B9D744F73929143408 Nullable_1_GetValueOrDefault_m61C6F9C75B9E5A959A8CAB418B2B65F2774FF7CF_inline (Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE* __this, const RuntimeMethod* method)
{
	return ((  Message_tBBCFE5D28A93F5B9DC0527B9D744F73929143408 (*) (Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m61C6F9C75B9E5A959A8CAB418B2B65F2774FF7CF_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARFoundation.DebugWarn/Message::WithMessage(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Message_WithMessage_m7331F24D7470335EC2EEF8FBA56A8D570ACC8FD3_inline (Message_tBBCFE5D28A93F5B9DC0527B9D744F73929143408* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::hasIdenticalTextureMetadata(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_hasIdenticalTextureMetadata_mB4DA1A4CFF4ABB66F8FF3AF1F310E60BA1B3F872 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_other, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_nativeTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRTextureDescriptor_get_nativeTexture_m1E27C0E1DC11DDC6139178509EE91B8DF54DBAD4_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture3D::UpdateExternalTexture(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture3D_UpdateExternalTexture_mDF4E8A634EC749B99E5AC5616F776BF42188A607 (Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* __this, intptr_t ___0_nativeTex, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::UpdateExternalTexture(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_UpdateExternalTexture_m73D80FDE0859F0E36D320A69317E04A3A2AD9986 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, intptr_t ___0_nativeTex, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cubemap::UpdateExternalTexture(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cubemap_UpdateExternalTexture_m6065B8D7B4B70C31AAA64DD142B96ADFAD74C53E (Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C* __this, intptr_t ___0_nativeTexture, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_width_m570472F03994BC63F21751414105A2E0C112DBF2_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_height_mC0B37241C24FA883E2594B9411080EDF654E3E01_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_depth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_depth_m5885EBF7D767C918B1483D63D1B11EE60D939E7D_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_format()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_format_mA745AA87046D4FE4846C11B8285B980FF6DDDD1A_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_mipmapCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_mipmapCount_m4B2ED0D6EBE06AD86E356203B4AB5DE3807C1D31_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture3D UnityEngine.Texture3D::CreateExternalTexture(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* Texture3D_CreateExternalTexture_mB59B1E1DE6F6291E93396C091ABE3FC15865DB2A (int32_t ___0_width, int32_t ___1_height, int32_t ___2_depth, int32_t ___3_format, bool ___4_mipChain, intptr_t ___5_nativeTex, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Texture2D::CreateExternalTexture(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Texture2D_CreateExternalTexture_mF821F07B386D19D124696C9A6F6EBEA84212B112 (int32_t ___0_width, int32_t ___1_height, int32_t ___2_format, bool ___3_mipChain, bool ___4_linear, intptr_t ___5_nativeTex, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Cubemap UnityEngine.Cubemap::CreateExternalTexture(System.Int32,UnityEngine.TextureFormat,System.Boolean,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C* Cubemap_CreateExternalTexture_m22D6FBF51B28F65E507FD3AB0A3BA98C6369BDD9 (int32_t ___0_width, int32_t ___1_format, bool ___2_mipmap, intptr_t ___3_nativeTex, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTextureInfo::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTextureInfo_Dispose_mF92A6E0C4D08205EDC7CF817BC866A9AB179632F (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_GetHashCode_mFEB456F0A0985232D0E342B8F10669149F190012 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARFoundation.ARTextureInfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTextureInfo_GetHashCode_m85504109E923E3CA1494548DD2C3261C1976E97A (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_Equals_m42127F01DF3CDEA1F38CF07E6057E8AD9E6F4570 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARTextureInfo::Equals(UnityEngine.XR.ARFoundation.ARTextureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTextureInfo_Equals_mFB1B9B103E90F76AE0EB4E2DED235BCF3DCBF034 (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARTextureInfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTextureInfo_Equals_m020839E8607BDF4DEFEDBB125778BEFE105F563D (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs::get_sessionOrigin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ARTrackablesParentTransformChangedEventArgs_get_sessionOrigin_m07C2F7C6A286B6AF4739C6618DA497C251325E24_inline (ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs::get_trackablesParent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARTrackablesParentTransformChangedEventArgs_get_trackablesParent_m2B845554A63A5CB63A6FBBB19C8C96F8E0F653D6_inline (ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs::Equals(UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackablesParentTransformChangedEventArgs_Equals_mF91B0B32830EACF99CFA2EB7C49455312BB793D0 (ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* __this, ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackablesParentTransformChangedEventArgs_Equals_m8D1863C5384CC73447D127048E9F57FB586843C0 (ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARFoundation.HashCodeUtil::ReferenceHash(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_ReferenceHash_mFDEB5485EAA482CF3FFD30D45BFFAF9D15CACED3 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARFoundation.HashCodeUtil::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m5CA91217A96CB1506F0A9C83ECC4ED11F4EDF39C (int32_t ___0_hash1, int32_t ___1_hash2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackablesParentTransformChangedEventArgs_GetHashCode_m3EC23E797F0790981B15C371D22E14E432052352 (ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* __this, const RuntimeMethod* method) ;
// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>::get_sessionRelativeData()
inline XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ARTrackable_2_get_sessionRelativeData_mEF23E94ECA29E4097BC709FF9B87566C0E03565B_inline (ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A* __this, const RuntimeMethod* method)
{
	return ((  XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD (*) (ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A*, const RuntimeMethod*))ARTrackable_2_get_sessionRelativeData_m9A72C2EBC2E33C261C8496A74D077912342BDF20_gshared_inline)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::get_size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRTrackedImage_get_size_m57847CD4307A9A560D358981700B8722D8A02438_inline (XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::get_nativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRTrackedImage_get_nativePtr_m2ECEAC93477008FB415D4A388ACAA4A9DB6E1892_inline (XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>::.ctor()
inline void ARTrackable_2__ctor_mF2F7A3D938859507914B0842C348EC58E3F74BD2 (ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A* __this, const RuntimeMethod* method)
{
	((  void (*) (ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A*, const RuntimeMethod*))ARTrackable_2__ctor_m8D8C90F7A00B717E77AC5B1B268648B7F4CF5F21_gshared)(__this, method);
}
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>::get_subsystem()
inline XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline (SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2* __this, const RuntimeMethod* method)
{
	return ((  XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* (*) (SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2*, const RuntimeMethod*))SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::get_imageLibrary()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* XRImageTrackingSubsystem_get_imageLibrary_mE8D15BAA0C750529680799A27597C4B5F61EBBC8_inline (XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::get_running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::CreateRuntimeLibrary(UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* XRImageTrackingSubsystem_CreateRuntimeLibrary_m1E7DAA2B60E911BFD4F9F27EABAC6FE44C617B9F (XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* __this, XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* ___0_serializedLibrary, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::set_imageLibrary(UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystem_set_imageLibrary_m43AB62E6D41F3AF16AF633843C190D35575EB97B (XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* __this, RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>::EnsureSubsystemInstanceSet()
inline void SubsystemLifecycleManager_3_EnsureSubsystemInstanceSet_mF63EB1FD077F06E205102073CEDD9ECA18511541 (SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2*, const RuntimeMethod*))SubsystemLifecycleManager_3_EnsureSubsystemInstanceSet_m0C612BDD7130FEDC076B5671B9223C4F94CDF2A6_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::UpdateReferenceImages(UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_UpdateReferenceImages_mFD7E9622A308CF5AB7005736FF1425FD9EDA6EFB (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* ___0_library, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::set_requestedMaxNumberOfMovingImages(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_set_requestedMaxNumberOfMovingImages_mD253ACF680396E6BDBEE194358093D84D7D3218A (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// TSubsystemDescriptor UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>::get_descriptor()
inline XRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE* SubsystemLifecycleManager_3_get_descriptor_m723178E137A9DEE374BFBDF8F627506C8F1CE697 (SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2* __this, const RuntimeMethod* method)
{
	return ((  XRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE* (*) (SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2*, const RuntimeMethod*))SubsystemLifecycleManager_3_get_descriptor_m55ACAFBB8D8273993E410BEFD978F09ABCF7CDA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::get_supportsMovingImages()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRImageTrackingSubsystemDescriptor_get_supportsMovingImages_m478CCC3CDCB620998AA0A2D7F27A72596BB9504E_inline (XRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackedImageManager::get_supportsMovingImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackedImageManager_get_supportsMovingImages_m9940C251AF671CDAB6517357F5A5C05563478203 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::get_requestedMaxNumberOfMovingImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRImageTrackingSubsystem_get_requestedMaxNumberOfMovingImages_m297CA442EB359393CD73A53ED4BB535376BB8A72 (XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::set_requestedMaxNumberOfMovingImages(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystem_set_requestedMaxNumberOfMovingImages_mE6898D8A250E46CD9CAE48EE63E3624AB7184F1D (XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::get_currentMaxNumberOfMovingImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRImageTrackingSubsystem_get_currentMaxNumberOfMovingImages_mF52B4940D32D6802A8B80EB4261B728D50C068EE (XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mE87077C06D8613892171836919671124469E7406 (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___0_key, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, Guid_t, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*, const RuntimeMethod*))Dictionary_2_TryGetValue_mE87077C06D8613892171836919671124469E7406_gshared)(__this, ___0_key, ___1_value, method);
}
// UnityEngine.XR.ARSubsystems.IReferenceImageLibrary UnityEngine.XR.ARFoundation.ARTrackedImageManager::get_referenceLibrary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARTrackedImageManager_get_referenceLibrary_mD811689B94E007CD8F708D91155C8DC575E948DD (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary/Enumerator UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF50B6A349DB9B6D1A9E5AD924A439A670F70E1ED MutableRuntimeReferenceImageLibrary_GetEnumerator_m12161C68A1C63E5F42F3F69E12DE6D8B24C6502B (MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F Enumerator_get_Current_mCAFA85FE5DFA6D3AF14AE3E0BD39A478B00D5F03 (Enumerator_tF50B6A349DB9B6D1A9E5AD924A439A670F70E1ED* __this, const RuntimeMethod* method) ;
// System.Guid UnityEngine.XR.ARSubsystems.XRReferenceImage::get_guid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Guid::Equals(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C (Guid_t* __this, Guid_t ___0_g, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>::Add(TKey,TValue)
inline void Dictionary_2_Add_m3388C15527891356A7EECDC797794290F3F8657D (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___0_key, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, Guid_t, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F, const RuntimeMethod*))Dictionary_2_Add_m3388C15527891356A7EECDC797794290F3F8657D_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF3DBBFA17313E104979A8A4F7CD5F111C352AF67 (Enumerator_tF50B6A349DB9B6D1A9E5AD924A439A670F70E1ED* __this, const RuntimeMethod* method) ;
// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::get_sourceImageId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t XRTrackedImage_get_sourceImageId_mAAAA675839747EA6AF8A903E461F0D198CFAFDBF_inline (XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackedImageManager::FindReferenceImage(System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackedImageManager_FindReferenceImage_m7B01D81D360921A7DCDFEAA4DDD7710146371ABD (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, Guid_t ___0_guid, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* ___1_referenceImage, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImage::set_referenceImage(UnityEngine.XR.ARSubsystems.XRReferenceImage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARTrackedImage_set_referenceImage_m1EA6089A5257113AC8141362107AA8CEA58EF38B_inline (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* __this, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler__ctor_m652B5689DE1A3C3EF7D12801DA27FA3B40E4412F (ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler_Dispose_m7B646405B4E52CC4677329D3B860BE9C17A9DAC4 (ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::.ctor(System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs__ctor_m22F5D20572E4D17270B7CFBA7F0EA9445DAEE8C3 (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___0_added, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___1_updated, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___2_removed, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>::Invoke(T)
inline void Action_1_Invoke_m7F975E253932510963884F11E84E7387808DBA8E_inline (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* __this, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F, const RuntimeMethod*))Action_1_Invoke_m7F975E253932510963884F11E84E7387808DBA8E_gshared_inline)(__this, ___0_obj, method);
}
// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F RuntimeReferenceImageLibrary_get_Item_m02C9E57C775AEC269FCDAA1F51CDC1142CF50ED7 (RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m87585F5A842A0867532FDDE762235689DFCBE37A (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, Guid_t ___0_key, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, Guid_t, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F, const RuntimeMethod*))Dictionary_2_set_Item_m87585F5A842A0867532FDDE762235689DFCBE37A_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>::.ctor()
inline void Dictionary_2__ctor_mEF87A6EAD65CA0670F181318C58A651321468CAF (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*, const RuntimeMethod*))Dictionary_2__ctor_mEF87A6EAD65CA0670F181318C58A651321468CAF_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>::.ctor()
inline void ARTrackableManager_5__ctor_m10BF0C50270ED4A36A140499ADB52D747DE428CD (ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5* __this, const RuntimeMethod* method)
{
	((  void (*) (ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5*, const RuntimeMethod*))ARTrackableManager_5__ctor_m6945E3DC8FA0F8D13D5A009A34AA8DBB04F0D11D_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::set_added(System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs_set_added_m4E298214A1144403A84E0AE63837F2941528F18F_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::set_updated(System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs_set_updated_mBFE8B2D25F10827CC95CA76E4C52D98EFC1131BE_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::set_removed(System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs_set_removed_mC7F5D25B8E4AD4CBBE6A43D50FAE0456BE3F928B_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARFoundation.HashCodeUtil::Combine(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m1FCE36175602D1544BF3DC515483B7B17A9C3356 (int32_t ___0_hash1, int32_t ___1_hash2, int32_t ___2_hash3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackedImagesChangedEventArgs_GetHashCode_mEFBDE822EC1AA6B0E388B86ACE4043D66E23A742 (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::Equals(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackedImagesChangedEventArgs_Equals_m25F0396D7AA82B5E488BEA4129EE00F355EA3919 (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackedImagesChangedEventArgs_Equals_m728C2C2B10BA8C4A625C3004C83730589C86C542 (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>::get_Count()
inline int32_t List_1_get_Count_mCC0B89D4918E903BE44EDAEDD3D79F1731A64861_inline (List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFA730335FF46512E4245B2F46892CA318B394FAE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARTrackedImagesChangedEventArgs_ToString_m949FF3EE96422AE2776C8FFBBD7CA342E56AE365 (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.DebugAssert/Message::WithMessage(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Message_WithMessage_m6D980DF1AD1190D26E45B88C3600AF4226FDD63C_inline (Message_tBD1539BCA4AE5990D39E1CED497DCBB689CA124F* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.FeatureExtensions::Cameras(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FeatureExtensions_Cameras_m726A6A7FE0A234C11F8FCF7DD3A4AA94E3ADBC44 (uint64_t ___0_self, const RuntimeMethod* method) ;
// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::get_ChangeState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshInfo_get_ChangeState_mF366492B8EF4A9FC8F677E01A6BA4C6C75D3BF68_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.MeshInfo::get_PriorityHint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshInfo_get_PriorityHint_mDBD3A096EC571EAAFB1E6CB93F4F309BD70F9231_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::get_MeshId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::Contains(T)
inline bool HashSet_1_Contains_m0D79EAECE46ED7F69840100B63E7DE7D2EE4BFEE (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB*, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC, const RuntimeMethod*))HashSet_1_Contains_m0D79EAECE46ED7F69840100B63E7DE7D2EE4BFEE_gshared)(__this, ___0_item, method);
}
// System.Void UnityEngine.XR.ARFoundation.MeshQueue::UpdateExisting(UnityEngine.XR.MeshInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshQueue_UpdateExisting_m0BF022171FB9EC99619552D30C85BA95B8301E60 (MeshQueue_t26B4E176CCC12C4B59FB67D25E0926EA697E4FC8* __this, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA ___0_meshInfo, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.MeshQueue::InsertNew(UnityEngine.XR.MeshInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshQueue_InsertNew_m9FCE96265CD46761953063618A3AC85B54DFCC9F (MeshQueue_t26B4E176CCC12C4B59FB67D25E0926EA697E4FC8* __this, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA ___0_meshInfo, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::get_Count()
inline int32_t List_1_get_Count_mFDF935486215902087CEC650E2D6323DFEA062FC_inline (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*, const RuntimeMethod*))List_1_get_Count_mFDF935486215902087CEC650E2D6323DFEA062FC_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::get_Item(System.Int32)
inline MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA List_1_get_Item_m7004A506FB124A036B306D77A6C7A4F6721A628E (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA (*) (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*, int32_t, const RuntimeMethod*))List_1_get_Item_m7004A506FB124A036B306D77A6C7A4F6721A628E_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mCBC998E1A90A850FD60CA51945C9BDAD153902FE (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mCBC998E1A90A850FD60CA51945C9BDAD153902FE_gshared)(__this, ___0_index, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::Remove(T)
inline bool HashSet_1_Remove_mFC2E552EC6875113775FF898EC084EA08CABC5A1 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB*, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC, const RuntimeMethod*))HashSet_1_Remove_mFC2E552EC6875113775FF898EC084EA08CABC5A1_gshared)(__this, ___0_item, method);
}
// System.Boolean UnityEngine.XR.MeshId::Equals(UnityEngine.XR.MeshId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshId_Equals_m3D0AC754FDC327819342797C38CF20C5F3D25818 (MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_other, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
inline int32_t List_1_BinarySearch_m3E84EA1AA2BED6ADD38E009614AFB68F711690C5 (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA ___0_item, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA, RuntimeObject*, const RuntimeMethod*))List_1_BinarySearch_m3E84EA1AA2BED6ADD38E009614AFB68F711690C5_gshared)(__this, ___0_item, ___1_comparer, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::Insert(System.Int32,T)
inline void List_1_Insert_m9E7C090D656D727A3B94A5D61857719BAB821CE4 (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, int32_t ___0_index, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*, int32_t, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA, const RuntimeMethod*))List_1_Insert_m9E7C090D656D727A3B94A5D61857719BAB821CE4_gshared)(__this, ___0_index, ___1_item, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::Add(T)
inline bool HashSet_1_Add_mE900C9FCB26E90C930D45CB9B1F65869D4ED4AC0 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB*, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC, const RuntimeMethod*))HashSet_1_Add_mE900C9FCB26E90C930D45CB9B1F65869D4ED4AC0_gshared)(__this, ___0_item, method);
}
// System.Void UnityEngine.XR.MeshInfo::set_PriorityHint(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshInfo_set_PriorityHint_mA0F4BB9543846770A082A85C721E16D16F664615_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::set_Item(System.Int32,T)
inline void List_1_set_Item_m1E18CE6DDF5DAE6A81CCFFAF52221377C5C72DA8 (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, int32_t ___0_index, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*, int32_t, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA, const RuntimeMethod*))List_1_set_Item_m1E18CE6DDF5DAE6A81CCFFAF52221377C5C72DA8_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::Sort(System.Collections.Generic.IComparer`1<T>)
inline void List_1_Sort_m2BDAD1026A4B3AAA3772EC4395B848261A6DB76C (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m2BDAD1026A4B3AAA3772EC4395B848261A6DB76C_gshared)(__this, ___0_comparer, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::Clear()
inline void List_1_Clear_mA99B8E3DD8C23511060403982181C0FE607DFE6F_inline (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*, const RuntimeMethod*))List_1_Clear_mA99B8E3DD8C23511060403982181C0FE607DFE6F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::Clear()
inline void HashSet_1_Clear_m77FC5DB22FE5492542CD8124700F1366FA7781DB (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB*, const RuntimeMethod*))HashSet_1_Clear_m77FC5DB22FE5492542CD8124700F1366FA7781DB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::.ctor()
inline void List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23 (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*, const RuntimeMethod*))List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::.ctor()
inline void HashSet_1__ctor_m4321A942505EDE6B0C4A1E0C0F4AFBA5D04729B9 (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB*, const RuntimeMethod*))HashSet_1__ctor_m4321A942505EDE6B0C4A1E0C0F4AFBA5D04729B9_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARFoundation.MeshInfoComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshInfoComparer__ctor_m3CA4B312F3F01D87ED687B402A1B2A6E99E21054 (MeshInfoComparer_tA7DD60B18BD0A658E3C6C6CED1A76C07DC5323C4* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.FeatureExtensions::TrackingModes(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FeatureExtensions_TrackingModes_m98FFB5EE942CA939B0F4F06A425673A4081287B7 (uint64_t ___0_self, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::GetTransformedBy(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_GetTransformedBy_mB4C9FECEC5701B761A0E8CB2A8BC76D8E2FFDFCF (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_lhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAvailabilityU3Ed__36__ctor_m735863EED119A94ECAEA97AA6163A7888BAAE407 (U3CCheckAvailabilityU3Ed__36_t6F13C84826E9B464693DE3899DFB4A9B8D49E28F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAvailabilityU3Ed__36_System_IDisposable_Dispose_mF0BC9EA254A4F2262928F6B7DED3DBAF2C124958 (U3CCheckAvailabilityU3Ed__36_t6F13C84826E9B464693DE3899DFB4A9B8D49E28F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckAvailabilityU3Ed__36_MoveNext_mF640DE420523AFC133818CAFBD896C139E041218 (U3CCheckAvailabilityU3Ed__36_t6F13C84826E9B464693DE3899DFB4A9B8D49E28F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_get_result_mAD006A2A6346FC6F9381181481B792E7F13BAAA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_subsystemDescriptor_mF7CA6B57486377149C97D5CA6D59C0F1D8BCEB48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B20_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_00a0;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_003b;
	}

IL_0024:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0034:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_003b:
	{
		// while (state == ARSessionState.CheckingAvailability)
		int32_t L_2;
		L_2 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		// if (state != ARSessionState.None)
		int32_t L_3;
		L_3 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_004c:
	{
		// var subsystem = GetSubsystem();
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_4;
		L_4 = ARSession_GetSubsystem_m31E4A8324A31B4844B6AA43797FE2C53A2BA3BEB(NULL);
		__this->___U3CsubsystemU3E5__2_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemU3E5__2_2), (void*)L_4);
		// if (subsystem == null)
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_5 = __this->___U3CsubsystemU3E5__2_2;
		if (L_5)
		{
			goto IL_006a;
		}
	}
	{
		// state = ARSessionState.Unsupported;
		ARSession_set_state_m8C16FB66D3910F9079CD01CE9C98D2D6D46D7CD5(1, NULL);
		goto IL_0119;
	}

IL_006a:
	{
		// else if (state == ARSessionState.None)
		int32_t L_6;
		L_6 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if (L_6)
		{
			goto IL_0119;
		}
	}
	{
		// state = ARSessionState.CheckingAvailability;
		ARSession_set_state_m8C16FB66D3910F9079CD01CE9C98D2D6D46D7CD5(2, NULL);
		// var availabilityPromise = subsystem.GetAvailabilityAsync();
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_7 = __this->___U3CsubsystemU3E5__2_2;
		NullCheck(L_7);
		Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* L_8;
		L_8 = XRSessionSubsystem_GetAvailabilityAsync_m30808B871A7C1BC1BAC7EE85B0F36DB4422769BF(L_7, NULL);
		__this->___U3CavailabilityPromiseU3E5__3_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CavailabilityPromiseU3E5__3_3), (void*)L_8);
		// yield return availabilityPromise;
		Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* L_9 = __this->___U3CavailabilityPromiseU3E5__3_3;
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00a0:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// s_Availability = availabilityPromise.result;
		Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* L_10 = __this->___U3CavailabilityPromiseU3E5__3_3;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Promise_1_get_result_mAD006A2A6346FC6F9381181481B792E7F13BAAA4_inline(L_10, Promise_1_get_result_mAD006A2A6346FC6F9381181481B792E7F13BAAA4_RuntimeMethod_var);
		((ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var))->___s_Availability_16 = L_11;
		// if (s_Availability.IsSupported() && s_Availability.IsInstalled())
		int32_t L_12 = ((ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var))->___s_Availability_16;
		bool L_13;
		L_13 = SessionAvailabilityExtensions_IsSupported_m9105265F71A68B18269095FFE362CD24148F6E7C(L_12, NULL);
		if (!L_13)
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_14 = ((ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var))->___s_Availability_16;
		bool L_15;
		L_15 = SessionAvailabilityExtensions_IsInstalled_m5AA4AE58BC0BA7C30E77B1B06038BED076ABFFDB(L_14, NULL);
		if (!L_15)
		{
			goto IL_00d7;
		}
	}
	{
		// state = ARSessionState.Ready;
		ARSession_set_state_m8C16FB66D3910F9079CD01CE9C98D2D6D46D7CD5(5, NULL);
		goto IL_0112;
	}

IL_00d7:
	{
		// else if (s_Availability.IsSupported() && !s_Availability.IsInstalled())
		int32_t L_16 = ((ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var))->___s_Availability_16;
		bool L_17;
		L_17 = SessionAvailabilityExtensions_IsSupported_m9105265F71A68B18269095FFE362CD24148F6E7C(L_16, NULL);
		if (!L_17)
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_18 = ((ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var))->___s_Availability_16;
		bool L_19;
		L_19 = SessionAvailabilityExtensions_IsInstalled_m5AA4AE58BC0BA7C30E77B1B06038BED076ABFFDB(L_18, NULL);
		if (L_19)
		{
			goto IL_010c;
		}
	}
	{
		// bool supportsInstall =
		//     subsystem.subsystemDescriptor.supportsInstall;
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_20 = __this->___U3CsubsystemU3E5__2_2;
		NullCheck(L_20);
		XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* L_21;
		L_21 = SubsystemWithProvider_3_get_subsystemDescriptor_mF7CA6B57486377149C97D5CA6D59C0F1D8BCEB48_inline(L_20, SubsystemWithProvider_3_get_subsystemDescriptor_mF7CA6B57486377149C97D5CA6D59C0F1D8BCEB48_RuntimeMethod_var);
		NullCheck(L_21);
		bool L_22;
		L_22 = XRSessionSubsystemDescriptor_get_supportsInstall_m3EE93DA405D5C59B746B621FC30D4CC182BB1E53_inline(L_21, NULL);
		// state = supportsInstall ? ARSessionState.NeedsInstall : ARSessionState.Unsupported;
		if (L_22)
		{
			goto IL_0104;
		}
	}
	{
		G_B20_0 = 1;
		goto IL_0105;
	}

IL_0104:
	{
		G_B20_0 = 3;
	}

IL_0105:
	{
		ARSession_set_state_m8C16FB66D3910F9079CD01CE9C98D2D6D46D7CD5(G_B20_0, NULL);
		goto IL_0112;
	}

IL_010c:
	{
		// state = ARSessionState.Unsupported;
		ARSession_set_state_m8C16FB66D3910F9079CD01CE9C98D2D6D46D7CD5(1, NULL);
	}

IL_0112:
	{
		// }
		__this->___U3CavailabilityPromiseU3E5__3_3 = (Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CavailabilityPromiseU3E5__3_3), (void*)(Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274*)NULL);
	}

IL_0119:
	{
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckAvailabilityU3Ed__36_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC6179916F8366120728FBC4A319199B5A33EA81F (U3CCheckAvailabilityU3Ed__36_t6F13C84826E9B464693DE3899DFB4A9B8D49E28F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAvailabilityU3Ed__36_System_Collections_IEnumerator_Reset_m8826529D457D216C4F0D74058D9C41EB77713367 (U3CCheckAvailabilityU3Ed__36_t6F13C84826E9B464693DE3899DFB4A9B8D49E28F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckAvailabilityU3Ed__36_System_Collections_IEnumerator_Reset_m8826529D457D216C4F0D74058D9C41EB77713367_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.XR.ARFoundation.ARSession/<CheckAvailability>d__36::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckAvailabilityU3Ed__36_System_Collections_IEnumerator_get_Current_m89D3BE7534710C9D3AAA093A4EC2BA45FFA4BE8E (U3CCheckAvailabilityU3Ed__36_t6F13C84826E9B464693DE3899DFB4A9B8D49E28F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARFoundation.ARSession/<Install>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstallU3Ed__37__ctor_mD9BA7D04DE9A0604D515EEEF6969A8833E6B69C0 (U3CInstallU3Ed__37_t0A68C1CB1C41C1957F770501E08FC18AD6398091* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession/<Install>d__37::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstallU3Ed__37_System_IDisposable_Dispose_mE976D780D3543F4D7E8131386463899493885C85 (U3CInstallU3Ed__37_t0A68C1CB1C41C1957F770501E08FC18AD6398091* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARSession/<Install>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInstallU3Ed__37_MoveNext_m10883753BFAA6E6C97897C8C1009C7ED51270B16 (U3CInstallU3Ed__37_t0A68C1CB1C41C1957F770501E08FC18AD6398091* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_get_result_mED5F07CD1ABAB5BC71C7821C8462EF53949C8DF1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_00cc;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_003b;
	}

IL_0024:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0034:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_003b:
	{
		// while ((state == ARSessionState.Installing) || (state == ARSessionState.CheckingAvailability))
		int32_t L_2;
		L_2 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_3;
		L_3 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		// switch (state)
		int32_t L_4;
		L_4 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		V_3 = L_4;
		int32_t L_5 = V_3;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0079;
			}
			case 1:
			{
				goto IL_0086;
			}
			case 2:
			{
				goto IL_0091;
			}
			case 3:
			{
				goto IL_0091;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_0084;
			}
			case 6:
			{
				goto IL_0084;
			}
			case 7:
			{
				goto IL_0084;
			}
		}
	}
	{
		goto IL_0091;
	}

IL_0079:
	{
		// throw new InvalidOperationException("Cannot install until availability has been determined. Have you called CheckAvailability()?");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB6FE50C87568AA7A84BE3C0C08A3A7CF502EC55)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInstallU3Ed__37_MoveNext_m10883753BFAA6E6C97897C8C1009C7ED51270B16_RuntimeMethod_var)));
	}

IL_0084:
	{
		// yield break;
		return (bool)0;
	}

IL_0086:
	{
		// throw new InvalidOperationException("Cannot install because XR is not supported on this platform.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB8CCF339C3F0822915B0C143EC5EC0A626EDD3D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInstallU3Ed__37_MoveNext_m10883753BFAA6E6C97897C8C1009C7ED51270B16_RuntimeMethod_var)));
	}

IL_0091:
	{
		// var subsystem = GetSubsystem();
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_8;
		L_8 = ARSession_GetSubsystem_m31E4A8324A31B4844B6AA43797FE2C53A2BA3BEB(NULL);
		V_1 = L_8;
		// if (subsystem == null)
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_9 = V_1;
		if (L_9)
		{
			goto IL_00a5;
		}
	}
	{
		// throw new InvalidOperationException("The subsystem was destroyed while attempting to install AR software.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D72F57B054B68EB330793D091E6EAA34B2AA5FC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInstallU3Ed__37_MoveNext_m10883753BFAA6E6C97897C8C1009C7ED51270B16_RuntimeMethod_var)));
	}

IL_00a5:
	{
		// state = ARSessionState.Installing;
		ARSession_set_state_m8C16FB66D3910F9079CD01CE9C98D2D6D46D7CD5(4, NULL);
		// var installPromise = subsystem.InstallAsync();
		XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* L_11 = V_1;
		NullCheck(L_11);
		Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* L_12;
		L_12 = XRSessionSubsystem_InstallAsync_m7E278495740EB305D92109D0FFE0895B774D3DA7(L_11, NULL);
		__this->___U3CinstallPromiseU3E5__2_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstallPromiseU3E5__2_2), (void*)L_12);
		// yield return installPromise;
		Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* L_13 = __this->___U3CinstallPromiseU3E5__2_2;
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00cc:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var installStatus = installPromise.result;
		Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* L_14 = __this->___U3CinstallPromiseU3E5__2_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Promise_1_get_result_mED5F07CD1ABAB5BC71C7821C8462EF53949C8DF1_inline(L_14, Promise_1_get_result_mED5F07CD1ABAB5BC71C7821C8462EF53949C8DF1_RuntimeMethod_var);
		V_2 = L_15;
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)1)))
		{
			goto IL_00e9;
		}
	}
	{
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)2)))
		{
			goto IL_00fd;
		}
	}
	{
		goto IL_0105;
	}

IL_00e9:
	{
		// state = ARSessionState.Ready;
		ARSession_set_state_m8C16FB66D3910F9079CD01CE9C98D2D6D46D7CD5(5, NULL);
		// s_Availability = (s_Availability | SessionAvailability.Installed);
		int32_t L_18 = ((ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var))->___s_Availability_16;
		((ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var))->___s_Availability_16 = ((int32_t)((int32_t)L_18|4));
		// break;
		goto IL_010b;
	}

IL_00fd:
	{
		// state = ARSessionState.NeedsInstall;
		ARSession_set_state_m8C16FB66D3910F9079CD01CE9C98D2D6D46D7CD5(3, NULL);
		// break;
		goto IL_010b;
	}

IL_0105:
	{
		// state = ARSessionState.Unsupported;
		ARSession_set_state_m8C16FB66D3910F9079CD01CE9C98D2D6D46D7CD5(1, NULL);
	}

IL_010b:
	{
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.XR.ARFoundation.ARSession/<Install>d__37::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInstallU3Ed__37_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD718DE0B0B711C9E9CD7FA45F56C4756DECA26DF (U3CInstallU3Ed__37_t0A68C1CB1C41C1957F770501E08FC18AD6398091* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession/<Install>d__37::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstallU3Ed__37_System_Collections_IEnumerator_Reset_m8DF442701056725A9816E886F188D86C31E29879 (U3CInstallU3Ed__37_t0A68C1CB1C41C1957F770501E08FC18AD6398091* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInstallU3Ed__37_System_Collections_IEnumerator_Reset_m8DF442701056725A9816E886F188D86C31E29879_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.XR.ARFoundation.ARSession/<Install>d__37::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInstallU3Ed__37_System_Collections_IEnumerator_get_Current_mC897BF06DE02727E24E1CA2BE07C0304EDBA8EE6 (U3CInstallU3Ed__37_t0A68C1CB1C41C1957F770501E08FC18AD6398091* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__39__ctor_mD9B6C69399849460F6186CA514C8C0C1E3E4A31F (U3CInitializeU3Ed__39_tE965692A15A459123FDBE8ED7ACC2D1D74F1EF37* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__39::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__39_System_IDisposable_Dispose_mAE3424C27A371EE887CF8C7268B5961CCFC99127 (U3CInitializeU3Ed__39_tE965692A15A459123FDBE8ED7ACC2D1D74F1EF37* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInitializeU3Ed__39_MoveNext_mEC7D94B4F821E5F112EE36C6D43C26E86E28F1C4 (U3CInitializeU3Ed__39_tE965692A15A459123FDBE8ED7ACC2D1D74F1EF37* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0045;
			}
			case 2:
			{
				goto IL_0082;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (state <= ARSessionState.CheckingAvailability)
		int32_t L_3;
		L_3 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_3) > ((int32_t)2)))
		{
			goto IL_004c;
		}
	}
	{
		// yield return CheckAvailability();
		RuntimeObject* L_4;
		L_4 = ARSession_CheckAvailability_m7090FD96E8580EB3E6CAB97B8344BF845B254D0A(NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0045:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_004c:
	{
		// if (!enabled)
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_5 = V_1;
		NullCheck(L_5);
		bool L_6;
		L_6 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_5, NULL);
		if (L_6)
		{
			goto IL_0056;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0056:
	{
		// if (((state == ARSessionState.NeedsInstall) && attemptUpdate) ||
		//     (state == ARSessionState.Installing))
		int32_t L_7;
		L_7 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)3))))
		{
			goto IL_0066;
		}
	}
	{
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = ARSession_get_attemptUpdate_m0EAA239D17F9E81EA7B91E7F9264F25D3A21053A_inline(L_8, NULL);
		if (L_9)
		{
			goto IL_006e;
		}
	}

IL_0066:
	{
		int32_t L_10;
		L_10 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)4))))
		{
			goto IL_0089;
		}
	}

IL_006e:
	{
		// yield return Install();
		RuntimeObject* L_11;
		L_11 = ARSession_Install_m9C4DCECEA000E16F4992376B7E40DA0C95B58166(NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0082:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0089:
	{
		// if (state == ARSessionState.Ready && enabled)
		int32_t L_12;
		L_12 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)5))))
		{
			goto IL_00a1;
		}
	}
	{
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_13 = V_1;
		NullCheck(L_13);
		bool L_14;
		L_14 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_13, NULL);
		if (!L_14)
		{
			goto IL_00a1;
		}
	}
	{
		// StartSubsystem();
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_15 = V_1;
		NullCheck(L_15);
		ARSession_StartSubsystem_mABE004B0E0CCB1E71F7A5B58D2DC8A71C2094E2D(L_15, NULL);
		goto IL_00a8;
	}

IL_00a1:
	{
		// enabled = false;
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_16 = V_1;
		NullCheck(L_16);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_16, (bool)0, NULL);
	}

IL_00a8:
	{
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__39::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInitializeU3Ed__39_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4EC9894037C15834354448A7CBA6F50EA660DA3E (U3CInitializeU3Ed__39_tE965692A15A459123FDBE8ED7ACC2D1D74F1EF37* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__39::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ed__39_System_Collections_IEnumerator_Reset_m8FC03158D4A30390C52890CE1CDA62916CF29114 (U3CInitializeU3Ed__39_tE965692A15A459123FDBE8ED7ACC2D1D74F1EF37* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitializeU3Ed__39_System_Collections_IEnumerator_Reset_m8FC03158D4A30390C52890CE1CDA62916CF29114_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.XR.ARFoundation.ARSession/<Initialize>d__39::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInitializeU3Ed__39_System_Collections_IEnumerator_get_Current_m7F70E4E5D3B7329FD234B87E00BC439DA70E4774 (U3CInitializeU3Ed__39_tE965692A15A459123FDBE8ED7ACC2D1D74F1EF37* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::get_camera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830 (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Camera; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_Camera_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::set_camera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionOrigin_set_camera_m67B450A0B2E571CE6B9785DE656ED32B41906239 (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_Camera = value; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___0_value;
		__this->___m_Camera_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Camera_4), (void*)L_0);
		// set { m_Camera = value; }
		return;
	}
}
// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::get_trackablesParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	{
		// public Transform trackablesParent { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CtrackablesParentU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::set_trackablesParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionOrigin_set_trackablesParent_m84EC22E19380EDC8B0902DA77CB760D827EB342F (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Transform trackablesParent { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___U3CtrackablesParentU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtrackablesParentU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::add_trackablesParentTransformChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionOrigin_add_trackablesParentTransformChanged_m8B8C5C69E226357AEF029402553CE5C62588189E (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* V_0 = NULL;
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* V_1 = NULL;
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* V_2 = NULL;
	{
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_0 = __this->___trackablesParentTransformChanged_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_1 = V_0;
		V_1 = L_1;
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_2 = V_1;
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB*)Castclass((RuntimeObject*)L_4, Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB_il2cpp_TypeInfo_var));
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB** L_5 = (&__this->___trackablesParentTransformChanged_6);
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_6 = V_2;
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_7 = V_1;
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_9 = V_0;
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB*)L_9) == ((RuntimeObject*)(Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::remove_trackablesParentTransformChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionOrigin_remove_trackablesParentTransformChanged_m1D0E4B774E4AFF63367F442D5333B0C59FBD7582 (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* V_0 = NULL;
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* V_1 = NULL;
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* V_2 = NULL;
	{
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_0 = __this->___trackablesParentTransformChanged_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_1 = V_0;
		V_1 = L_1;
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_2 = V_1;
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB*)Castclass((RuntimeObject*)L_4, Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB_il2cpp_TypeInfo_var));
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB** L_5 = (&__this->___trackablesParentTransformChanged_6);
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_6 = V_2;
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_7 = V_1;
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_9 = V_0;
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB*)L_9) == ((RuntimeObject*)(Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::get_contentOffsetTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARSessionOrigin_get_contentOffsetTransform_m9561E0324F993FC59B12FAA8A3BB64FA6BBF6BD9 (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF05280C2A06356A5364FA85DE696CE3230E467C9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	{
		// if (m_ContentOffsetGameObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_ContentOffsetGameObject_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0081;
		}
	}
	{
		// m_ContentOffsetGameObject = new GameObject("Content Placement Offset");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteralF05280C2A06356A5364FA85DE696CE3230E467C9, NULL);
		__this->___m_ContentOffsetGameObject_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ContentOffsetGameObject_7), (void*)L_2);
		// m_ContentOffsetGameObject.transform.SetParent(transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___m_ContentOffsetGameObject_7;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_4, L_5, (bool)0, NULL);
		// for (var i = 0; i < transform.childCount; ++i)
		V_0 = 0;
		goto IL_0073;
	}

IL_0039:
	{
		// var child = transform.GetChild(i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_6, L_7, NULL);
		V_1 = L_8;
		// if (child != m_ContentOffsetGameObject.transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___m_ContentOffsetGameObject_7;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// child.SetParent(m_ContentOffsetGameObject.transform, true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___m_ContentOffsetGameObject_7;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_13);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_13, L_15, (bool)1, NULL);
		// --i; // Decrement because childCount is also one less.
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_006f:
	{
		// for (var i = 0; i < transform.childCount; ++i)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0073:
	{
		// for (var i = 0; i < transform.childCount; ++i)
		int32_t L_18 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_19, NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0039;
		}
	}

IL_0081:
	{
		// return m_ContentOffsetGameObject.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___m_ContentOffsetGameObject_7;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		return L_22;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::MakeContentAppearAt(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionOrigin_MakeContentAppearAt_m1820213D5130A4831D01AA2085D7C23F28F0707D (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_content, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) 
{
	{
		// MakeContentAppearAt(content, position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_content;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_position;
		ARSessionOrigin_MakeContentAppearAt_mAB793364B3161102E67707B7E2BB2B92C4BB96C9(__this, L_0, L_1, NULL);
		// MakeContentAppearAt(content, rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_content;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___2_rotation;
		ARSessionOrigin_MakeContentAppearAt_mA98E9E8161E23E9BB7F4551A20DFFE16FBFF8E1B(__this, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::MakeContentAppearAt(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionOrigin_MakeContentAppearAt_mAB793364B3161102E67707B7E2BB2B92C4BB96C9 (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_content, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (content == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_content;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException("content");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE1B3CB371C9291D34EB334456EBC01AC8284947)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARSessionOrigin_MakeContentAppearAt_mAB793364B3161102E67707B7E2BB2B92C4BB96C9_RuntimeMethod_var)));
	}

IL_0014:
	{
		// contentOffsetTransform.position += transform.position - position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = ARSessionOrigin_get_contentOffsetTransform_m9561E0324F993FC59B12FAA8A3BB64FA6BBF6BD9(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_9, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_10, NULL);
		// transform.position = content.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___0_content;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::MakeContentAppearAt(UnityEngine.Transform,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionOrigin_MakeContentAppearAt_mA98E9E8161E23E9BB7F4551A20DFFE16FBFF8E1B (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_content, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (content == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_content;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException("content");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE1B3CB371C9291D34EB334456EBC01AC8284947)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARSessionOrigin_MakeContentAppearAt_mA98E9E8161E23E9BB7F4551A20DFFE16FBFF8E1B_RuntimeMethod_var)));
	}

IL_0014:
	{
		// transform.rotation = Quaternion.Inverse(rotation) * content.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___1_rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___0_content;
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_5, L_7, NULL);
		NullCheck(L_3);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_3, L_8, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionOrigin_Awake_m46F525057B6E1AE60E9DA45EEFC42A7A2F04007E (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPoseDriver_t443CDE7DCB55B1BA8CCF1E0550F874293019EF16_m39716667C0EEF17FF7C76150AB9A4924D6750843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mD66D58E941D95457A6D16D8674487EC5982E6293_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51BB7D3F1F301CB676E1062A48735477519D5CDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral909B5EE583AEAD2F304B5DB440E22A13D66EAEDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95B5D77ED41BBF74119578D4FBAB0F8EAF55F9D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99DA76DDF309E4C5B1B8487713C1FFD0A2C9193F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEA745F0EE1FE9E651B60D51291545515DF75DC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3C20DC4582626068A7E282909B6A2A6FEA01135);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAF318A99F57C3C0FB955E318407C91A9432F19B);
		s_Il2CppMethodInitialized = true;
	}
	TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	{
		// trackablesParent = (new GameObject("Trackables")).transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteralEAF318A99F57C3C0FB955E318407C91A9432F19B, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		ARSessionOrigin_set_trackablesParent_m84EC22E19380EDC8B0902DA77CB760D827EB342F_inline(__this, L_1, NULL);
		// trackablesParent.SetParent(transform, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_2, L_3, (bool)0, NULL);
		// trackablesParent.localPosition = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_5, NULL);
		// trackablesParent.localRotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_6);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_6, L_7, NULL);
		// trackablesParent.localScale = Vector3.one;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_8);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_8, L_9, NULL);
		// if (camera)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (!L_11)
		{
			goto IL_01dc;
		}
	}
	{
		// var arPoseDriver = camera.GetComponent<ARPoseDriver>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12;
		L_12 = ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline(__this, NULL);
		NullCheck(L_12);
		ARPoseDriver_t443CDE7DCB55B1BA8CCF1E0550F874293019EF16* L_13;
		L_13 = Component_GetComponent_TisARPoseDriver_t443CDE7DCB55B1BA8CCF1E0550F874293019EF16_m39716667C0EEF17FF7C76150AB9A4924D6750843(L_12, Component_GetComponent_TisARPoseDriver_t443CDE7DCB55B1BA8CCF1E0550F874293019EF16_m39716667C0EEF17FF7C76150AB9A4924D6750843_RuntimeMethod_var);
		// var trackedPoseDriver = camera.GetComponent<TrackedPoseDriver>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14;
		L_14 = ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline(__this, NULL);
		NullCheck(L_14);
		TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* L_15;
		L_15 = Component_GetComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mD66D58E941D95457A6D16D8674487EC5982E6293(L_14, Component_GetComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mD66D58E941D95457A6D16D8674487EC5982E6293_RuntimeMethod_var);
		V_0 = L_15;
		// if (arPoseDriver == null && trackedPoseDriver == null)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00af;
		}
	}
	{
		TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00af;
		}
	}
	{
		// Debug.LogWarning(
		//     $"Camera \"{camera.name}\" does not use a AR Pose Driver or a Tracked Pose Driver, " +
		//     "so its transform will not be updated by an XR device.  In order for this to be " +
		//     "updated, please add either an AR Pose Driver or a Tracked Pose Driver.");
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19;
		L_19 = ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline(__this, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_19, NULL);
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral99DA76DDF309E4C5B1B8487713C1FFD0A2C9193F, L_20, _stringLiteralAEA745F0EE1FE9E651B60D51291545515DF75DC8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_21, NULL);
		return;
	}

IL_00af:
	{
		// else if ((trackedPoseDriver != null && !trackedPoseDriver.UseRelativeTransform))
		TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_0153;
		}
	}
	{
		TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* L_24 = V_0;
		NullCheck(L_24);
		bool L_25;
		L_25 = TrackedPoseDriver_get_UseRelativeTransform_m364C0EC379CBD6898EA09712A3245B3D9E69114B_inline(L_24, NULL);
		if (L_25)
		{
			goto IL_0153;
		}
	}
	{
		// var cameraTransform = camera.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26;
		L_26 = ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline(__this, NULL);
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		V_1 = L_27;
		// if ((cameraTransform.localPosition != Vector3.zero) || (cameraTransform.localRotation != Quaternion.identity))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = V_1;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_31;
		L_31 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00f9;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = V_1;
		NullCheck(L_32);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_32, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		bool L_35;
		L_35 = Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline(L_33, L_34, NULL);
		if (!L_35)
		{
			goto IL_01dc;
		}
	}

IL_00f9:
	{
		// Debug.LogWarning(
		//     $"Camera \"{camera.name}\" has a non-identity transform " +
		//     $"(position = {cameraTransform.localPosition}, rotation = {cameraTransform.localRotation}). " +
		//     "The camera's local position and rotation will be overwritten by the XR device, " +
		//     "so this starting transform will have no effect. Tick the \"Make Relative\" " +
		//     "checkbox on the camera's Tracked Pose Driver to apply this starting transform.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral99DA76DDF309E4C5B1B8487713C1FFD0A2C9193F);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral99DA76DDF309E4C5B1B8487713C1FFD0A2C9193F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_39;
		L_39 = ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline(__this, NULL);
		NullCheck(L_39);
		String_t* L_40;
		L_40 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_39, NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_40);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_40);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_38;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteral909B5EE583AEAD2F304B5DB440E22A13D66EAEDE);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral909B5EE583AEAD2F304B5DB440E22A13D66EAEDE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = V_1;
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = L_44;
		RuntimeObject* L_46 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = V_1;
		NullCheck(L_47);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48;
		L_48 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_47, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49 = L_48;
		RuntimeObject* L_50 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_49);
		String_t* L_51;
		L_51 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral51BB7D3F1F301CB676E1062A48735477519D5CDE, L_46, L_50, NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_51);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_51);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_42;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteral95B5D77ED41BBF74119578D4FBAB0F8EAF55F9D4);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral95B5D77ED41BBF74119578D4FBAB0F8EAF55F9D4);
		String_t* L_53;
		L_53 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_52, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_53, NULL);
		return;
	}

IL_0153:
	{
		// var cameraTransform = camera.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_54;
		L_54 = ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline(__this, NULL);
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_54, NULL);
		V_2 = L_55;
		// if ((cameraTransform.localPosition != Vector3.zero) || (cameraTransform.localRotation != Quaternion.identity))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56 = V_2;
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_56, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_59;
		L_59 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_57, L_58, NULL);
		if (L_59)
		{
			goto IL_0183;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60 = V_2;
		NullCheck(L_60);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_61;
		L_61 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_60, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62;
		L_62 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		bool L_63;
		L_63 = Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline(L_61, L_62, NULL);
		if (!L_63)
		{
			goto IL_01dc;
		}
	}

IL_0183:
	{
		// Debug.LogWarning(
		//     $"Camera \"{camera.name}\" has a non-identity transform " +
		//     $"(position = {cameraTransform.localPosition}, rotation = {cameraTransform.localRotation}). " +
		//     "The camera's local position and rotation will be overwritten by the XR device.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_64;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, _stringLiteral99DA76DDF309E4C5B1B8487713C1FFD0A2C9193F);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral99DA76DDF309E4C5B1B8487713C1FFD0A2C9193F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_65;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_67;
		L_67 = ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline(__this, NULL);
		NullCheck(L_67);
		String_t* L_68;
		L_68 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_67, NULL);
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_68);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_68);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_69 = L_66;
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, _stringLiteral909B5EE583AEAD2F304B5DB440E22A13D66EAEDE);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral909B5EE583AEAD2F304B5DB440E22A13D66EAEDE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_70 = L_69;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71 = V_2;
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = L_72;
		RuntimeObject* L_74 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_73);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75 = V_2;
		NullCheck(L_75);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_76;
		L_76 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_75, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_77 = L_76;
		RuntimeObject* L_78 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_77);
		String_t* L_79;
		L_79 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral51BB7D3F1F301CB676E1062A48735477519D5CDE, L_74, L_78, NULL);
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_79);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_79);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = L_70;
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, _stringLiteralC3C20DC4582626068A7E282909B6A2A6FEA01135);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC3C20DC4582626068A7E282909B6A2A6FEA01135);
		String_t* L_81;
		L_81 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_80, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_81, NULL);
	}

IL_01dc:
	{
		// }
		return;
	}
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARSessionOrigin::GetCameraOriginPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARSessionOrigin_GetCameraOriginPose_mA78AE0A9DDDFC1F986D58A8DB9E804F09625E942 (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mD66D58E941D95457A6D16D8674487EC5982E6293_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* V_2 = NULL;
	{
		// var localOriginPose = Pose.identity;
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0;
		L_0 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		V_0 = L_0;
		// var parent = camera.transform.parent;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		V_1 = L_3;
		// var trackedPoseDriver = camera.GetComponent<TrackedPoseDriver>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline(__this, NULL);
		NullCheck(L_4);
		TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* L_5;
		L_5 = Component_GetComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mD66D58E941D95457A6D16D8674487EC5982E6293(L_4, Component_GetComponent_TisTrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD_mD66D58E941D95457A6D16D8674487EC5982E6293_RuntimeMethod_var);
		V_2 = L_5;
		// if (trackedPoseDriver)
		TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* L_6 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		// localOriginPose = trackedPoseDriver.originPose;
		TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* L_8 = V_2;
		NullCheck(L_8);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = TrackedPoseDriver_get_originPose_mBE222A120504DAAF230CE41A3A8BAB847FE28D08_inline(L_8, NULL);
		V_0 = L_9;
	}

IL_0032:
	{
		// return parent
		//     ? parent.TransformPose(localOriginPose)
		//     : localOriginPose;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (L_11)
		{
			goto IL_003c;
		}
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12 = V_0;
		return L_12;
	}

IL_003c:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_14 = V_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15;
		L_15 = TransformExtensions_TransformPose_m657A2F269CFE7ABD9E77029577861EA464E2364C(L_13, L_14, NULL);
		return L_15;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionOrigin_OnEnable_m29A1E3CEB6216C423090EEE451C95F8455A1111D (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionOrigin_OnBeforeRender_mD344697589F4A0A2576A1DC55CF0BDDA850BEDF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void OnEnable() => Application.onBeforeRender += OnBeforeRender;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_0, __this, (intptr_t)((void*)ARSessionOrigin_OnBeforeRender_mD344697589F4A0A2576A1DC55CF0BDDA850BEDF9_RuntimeMethod_var), NULL);
		Application_add_onBeforeRender_mEE8925294C807AD08FA0FF35D4C663E098510394(L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionOrigin_OnDisable_mA3F00B4A1C14C10C58E7D2C5FBAA466A86A28F8D (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionOrigin_OnBeforeRender_mD344697589F4A0A2576A1DC55CF0BDDA850BEDF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// void OnDisable() => Application.onBeforeRender -= OnBeforeRender;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_0, __this, (intptr_t)((void*)ARSessionOrigin_OnBeforeRender_mD344697589F4A0A2576A1DC55CF0BDDA850BEDF9_RuntimeMethod_var), NULL);
		Application_remove_onBeforeRender_m9F54448ED4059A26C9972E5C9ED2F6DCD58B4E24(L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::OnBeforeRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionOrigin_OnBeforeRender_mD344697589F4A0A2576A1DC55CF0BDDA850BEDF9 (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* G_B5_0 = NULL;
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* G_B4_0 = NULL;
	{
		// if (camera)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		// var pose = GetCameraOriginPose();
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = ARSessionOrigin_GetCameraOriginPose_mA78AE0A9DDDFC1F986D58A8DB9E804F09625E942(__this, NULL);
		V_0 = L_2;
		// trackablesParent.position = pose.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4.___position_0;
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_5, NULL);
		// trackablesParent.rotation = pose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = L_7.___rotation_1;
		NullCheck(L_6);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_6, L_8, NULL);
	}

IL_0036:
	{
		// if (trackablesParent.hasChanged)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(__this, NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = Transform_get_hasChanged_m570B3328E80AA338FF074A5C208500E98E440795(L_9, NULL);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		// trackablesParentTransformChanged?.Invoke(
		//     new ARTrackablesParentTransformChangedEventArgs(this, trackablesParent));
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_11 = __this->___trackablesParentTransformChanged_6;
		Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* L_12 = L_11;
		G_B4_0 = L_12;
		if (L_12)
		{
			G_B5_0 = L_12;
			goto IL_004f;
		}
	}
	{
		goto IL_0060;
	}

IL_004f:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(__this, NULL);
		ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A L_14;
		memset((&L_14), 0, sizeof(L_14));
		ARTrackablesParentTransformChangedEventArgs__ctor_mD26567D31DA6E6A14F69F51972F2AA76B0EAFD8A((&L_14), __this, L_13, /*hidden argument*/NULL);
		NullCheck(G_B5_0);
		Action_1_Invoke_m26A60EE2F51E3FC76A4A0F7DB375D2EF0AD89421_inline(G_B5_0, L_14, NULL);
	}

IL_0060:
	{
		// trackablesParent.hasChanged = false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline(__this, NULL);
		NullCheck(L_15);
		Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE(L_15, (bool)0, NULL);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionOrigin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionOrigin__ctor_m35D4BAAA2E6EEB818983F5AB4FEDEF27CCEDDDFB (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARSessionStateChangedEventArgs_get_state_mC0A6FB4AF08C068BFD5D9730F60215BE662A950B (ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* __this, const RuntimeMethod* method) 
{
	{
		// public ARSessionState state { get; private set; }
		int32_t L_0 = __this->___U3CstateU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ARSessionStateChangedEventArgs_get_state_mC0A6FB4AF08C068BFD5D9730F60215BE662A950B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ARSessionStateChangedEventArgs_get_state_mC0A6FB4AF08C068BFD5D9730F60215BE662A950B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::set_state(UnityEngine.XR.ARFoundation.ARSessionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionStateChangedEventArgs_set_state_mBEF6AA8214783D771EDF618B3E863D6DBC1FE8A7 (ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public ARSessionState state { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CstateU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void ARSessionStateChangedEventArgs_set_state_mBEF6AA8214783D771EDF618B3E863D6DBC1FE8A7_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822*>(__this + _offset);
	ARSessionStateChangedEventArgs_set_state_mBEF6AA8214783D771EDF618B3E863D6DBC1FE8A7_inline(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::.ctor(UnityEngine.XR.ARFoundation.ARSessionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSessionStateChangedEventArgs__ctor_m1C0C6E6FD7F83932D0780826124568FCC85C888A (ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* __this, int32_t ___0_state, const RuntimeMethod* method) 
{
	{
		// this.state = state;
		int32_t L_0 = ___0_state;
		ARSessionStateChangedEventArgs_set_state_mBEF6AA8214783D771EDF618B3E863D6DBC1FE8A7_inline(__this, L_0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ARSessionStateChangedEventArgs__ctor_m1C0C6E6FD7F83932D0780826124568FCC85C888A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_state, const RuntimeMethod* method)
{
	ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822*>(__this + _offset);
	ARSessionStateChangedEventArgs__ctor_m1C0C6E6FD7F83932D0780826124568FCC85C888A(_thisAdjusted, ___0_state, method);
}
// System.Int32 UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARSessionStateChangedEventArgs_GetHashCode_m58967DAA40E3E7088B23CB434E04B3BA745E3076 (ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// public override int GetHashCode() => ((int)state).GetHashCode();
		int32_t L_0;
		L_0 = ARSessionStateChangedEventArgs_get_state_mC0A6FB4AF08C068BFD5D9730F60215BE662A950B_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ARSessionStateChangedEventArgs_GetHashCode_m58967DAA40E3E7088B23CB434E04B3BA745E3076_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ARSessionStateChangedEventArgs_GetHashCode_m58967DAA40E3E7088B23CB434E04B3BA745E3076(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARSessionStateChangedEventArgs_Equals_mDB8C22D91659F1BEA3417585A531A31661D56FD2 (ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is ARSessionStateChangedEventArgs))
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((ARSessionStateChangedEventArgs)obj);
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ARSessionStateChangedEventArgs_Equals_mD7EC44B01E9572499F4888DED9885761FCBA47BF(__this, ((*(ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822*)((ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822*)(ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822*)UnBox(L_1, ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool ARSessionStateChangedEventArgs_Equals_mDB8C22D91659F1BEA3417585A531A31661D56FD2_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822*>(__this + _offset);
	bool _returnValue;
	_returnValue = ARSessionStateChangedEventArgs_Equals_mDB8C22D91659F1BEA3417585A531A31661D56FD2(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARSessionStateChangedEventArgs_ToString_m1F84E487E601B1FB57C5E6F051262AA9264E66D5 (ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public override string ToString() => state.ToString();
		int32_t L_0;
		L_0 = ARSessionStateChangedEventArgs_get_state_mC0A6FB4AF08C068BFD5D9730F60215BE662A950B_inline(__this, NULL);
		V_0 = L_0;
		Il2CppFakeBox<int32_t> L_1(ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* ARSessionStateChangedEventArgs_ToString_m1F84E487E601B1FB57C5E6F051262AA9264E66D5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ARSessionStateChangedEventArgs_ToString_m1F84E487E601B1FB57C5E6F051262AA9264E66D5(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::Equals(UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARSessionStateChangedEventArgs_Equals_mD7EC44B01E9572499F4888DED9885761FCBA47BF (ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* __this, ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822 ___0_other, const RuntimeMethod* method) 
{
	{
		// return state == other.state;
		int32_t L_0;
		L_0 = ARSessionStateChangedEventArgs_get_state_mC0A6FB4AF08C068BFD5D9730F60215BE662A950B_inline(__this, NULL);
		int32_t L_1;
		L_1 = ARSessionStateChangedEventArgs_get_state_mC0A6FB4AF08C068BFD5D9730F60215BE662A950B_inline((&___0_other), NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ARSessionStateChangedEventArgs_Equals_mD7EC44B01E9572499F4888DED9885761FCBA47BF_AdjustorThunk (RuntimeObject* __this, ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822 ___0_other, const RuntimeMethod* method)
{
	ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822*>(__this + _offset);
	bool _returnValue;
	_returnValue = ARSessionStateChangedEventArgs_Equals_mD7EC44B01E9572499F4888DED9885761FCBA47BF(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARFoundation.ARTextureInfo
IL2CPP_EXTERN_C void ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshal_pinvoke(const ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261& unmarshaled, ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Texture_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Texture' of type 'ARTextureInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Texture_2Exception, NULL);
}
IL2CPP_EXTERN_C void ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshal_pinvoke_back(const ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke& marshaled, ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261& unmarshaled)
{
	Exception_t* ___m_Texture_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Texture' of type 'ARTextureInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Texture_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARFoundation.ARTextureInfo
IL2CPP_EXTERN_C void ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshal_pinvoke_cleanup(ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARFoundation.ARTextureInfo
IL2CPP_EXTERN_C void ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshal_com(const ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261& unmarshaled, ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com& marshaled)
{
	Exception_t* ___m_Texture_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Texture' of type 'ARTextureInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Texture_2Exception, NULL);
}
IL2CPP_EXTERN_C void ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshal_com_back(const ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com& marshaled, ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261& unmarshaled)
{
	Exception_t* ___m_Texture_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Texture' of type 'ARTextureInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Texture_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARFoundation.ARTextureInfo
IL2CPP_EXTERN_C void ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshal_com_cleanup(ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com& marshaled)
{
}
// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::get_descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ARTextureInfo_get_descriptor_m42C04EE9D6B420EFFC6002A044CA8B2FB6E27FE2 (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Descriptor; }
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_0 = __this->___m_Descriptor_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ARTextureInfo_get_descriptor_m42C04EE9D6B420EFFC6002A044CA8B2FB6E27FE2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261*>(__this + _offset);
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 _returnValue;
	_returnValue = ARTextureInfo_get_descriptor_m42C04EE9D6B420EFFC6002A044CA8B2FB6E27FE2_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ARTextureInfo_get_texture_m9A17329F68E159CC5C924956D4258BD26990C40A (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Texture; }
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___m_Texture_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ARTextureInfo_get_texture_m9A17329F68E159CC5C924956D4258BD26990C40A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261*>(__this + _offset);
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* _returnValue;
	_returnValue = ARTextureInfo_get_texture_m9A17329F68E159CC5C924956D4258BD26990C40A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARFoundation.ARTextureInfo::.ctor(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTextureInfo__ctor_mE3D6856CEA559DD33C81F5E993451608F7515AC1 (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_descriptor, const RuntimeMethod* method) 
{
	{
		// m_Descriptor = descriptor;
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_0 = ___0_descriptor;
		__this->___m_Descriptor_1 = L_0;
		// m_Texture = CreateTexture(m_Descriptor);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_1 = __this->___m_Descriptor_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2;
		L_2 = ARTextureInfo_CreateTexture_m6A095D54141ADC1B50174B6FE9CCBECFD1B4713C(L_1, NULL);
		__this->___m_Texture_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Texture_2), (void*)L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ARTextureInfo__ctor_mE3D6856CEA559DD33C81F5E993451608F7515AC1_AdjustorThunk (RuntimeObject* __this, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_descriptor, const RuntimeMethod* method)
{
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261*>(__this + _offset);
	ARTextureInfo__ctor_mE3D6856CEA559DD33C81F5E993451608F7515AC1(_thisAdjusted, ___0_descriptor, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARTextureInfo::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTextureInfo_Reset_m94C8E8348B77C4A7055ABFC20FA8E59632293A59 (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, const RuntimeMethod* method) 
{
	{
		// m_Descriptor.Reset();
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* L_0 = (&__this->___m_Descriptor_1);
		XRTextureDescriptor_Reset_m1BE8024830BA7AFB94AAD01731FDB449DD12A01F(L_0, NULL);
		// DestroyTexture();
		ARTextureInfo_DestroyTexture_m4A1489A030CA1E43E61CB7F3413AC97B5F5180F9(__this, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ARTextureInfo_Reset_m94C8E8348B77C4A7055ABFC20FA8E59632293A59_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261*>(__this + _offset);
	ARTextureInfo_Reset_m94C8E8348B77C4A7055ABFC20FA8E59632293A59(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARTextureInfo::DestroyTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTextureInfo_DestroyTexture_m4A1489A030CA1E43E61CB7F3413AC97B5F5180F9 (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Texture != null)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___m_Texture_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// UnityEngine.Object.Destroy(m_Texture);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = __this->___m_Texture_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// m_Texture = null;
		__this->___m_Texture_2 = (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Texture_2), (void*)(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ARTextureInfo_DestroyTexture_m4A1489A030CA1E43E61CB7F3413AC97B5F5180F9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261*>(__this + _offset);
	ARTextureInfo_DestroyTexture_m4A1489A030CA1E43E61CB7F3413AC97B5F5180F9(_thisAdjusted, method);
}
// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.ARTextureInfo::GetUpdatedTextureInfo(UnityEngine.XR.ARFoundation.ARTextureInfo,UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ARTextureInfo_GetUpdatedTextureInfo_m88B8391EEE756B9D4DD68A2C8B7CDB5468C319F0 (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___0_textureInfo, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___1_descriptor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m61C6F9C75B9E5A959A8CAB418B2B65F2774FF7CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC189CF9EC338F1F421B380788A6685D9041E5891_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65EBBA267634801A4C3D9713BCE54E91A80CB4C2);
		s_Il2CppMethodInitialized = true;
	}
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE V_1;
	memset((&V_1), 0, sizeof(V_1));
	Message_tBBCFE5D28A93F5B9DC0527B9D744F73929143408 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B7_0 = 0;
	Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE* G_B9_0 = NULL;
	Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE* G_B8_0 = NULL;
	{
		// if (textureInfo.m_Descriptor.Equals(descriptor))
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* L_0 = (&(&___0_textureInfo)->___m_Descriptor_1);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_1 = ___1_descriptor;
		bool L_2;
		L_2 = XRTextureDescriptor_Equals_m4931F85C225CAC63EC71FBCE246204E244B6CA2B(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return textureInfo;
		ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 L_3 = ___0_textureInfo;
		return L_3;
	}

IL_0011:
	{
		// if (!descriptor.valid)
		bool L_4;
		L_4 = XRTextureDescriptor_get_valid_mBEE2CC268CC8773618BAB7794118746E235A6761((&___1_descriptor), NULL);
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		// textureInfo.DestroyTexture();
		ARTextureInfo_DestroyTexture_m4A1489A030CA1E43E61CB7F3413AC97B5F5180F9((&___0_textureInfo), NULL);
		// return default(ARTextureInfo);
		il2cpp_codegen_initobj((&V_0), sizeof(ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261));
		ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 L_5 = V_0;
		return L_5;
	}

IL_002b:
	{
		// DebugWarn.WhenFalse(textureInfo.m_Descriptor.dimension == TextureDimension.None || textureInfo.m_Descriptor.dimension == descriptor.dimension)?.
		//     WithMessage($"Texture descriptor dimension should not change from {textureInfo.m_Descriptor.dimension} to {descriptor.dimension}.");
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* L_6 = (&(&___0_textureInfo)->___m_Descriptor_1);
		int32_t L_7;
		L_7 = XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* L_8 = (&(&___0_textureInfo)->___m_Descriptor_1);
		int32_t L_9;
		L_9 = XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline(L_8, NULL);
		int32_t L_10;
		L_10 = XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline((&___1_descriptor), NULL);
		G_B7_0 = ((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0);
		goto IL_0051;
	}

IL_0050:
	{
		G_B7_0 = 1;
	}

IL_0051:
	{
		Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE L_11;
		L_11 = DebugWarn_WhenFalse_mADECDEF90132C7730D282B7F39723E3C1223C760_inline((bool)G_B7_0, NULL);
		V_1 = L_11;
		Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE* L_12 = (&V_1);
		bool L_13;
		L_13 = Nullable_1_get_HasValue_mC189CF9EC338F1F421B380788A6685D9041E5891_inline(L_12, Nullable_1_get_HasValue_mC189CF9EC338F1F421B380788A6685D9041E5891_RuntimeMethod_var);
		G_B8_0 = L_12;
		if (L_13)
		{
			G_B9_0 = L_12;
			goto IL_0064;
		}
	}
	{
		goto IL_0098;
	}

IL_0064:
	{
		Message_tBBCFE5D28A93F5B9DC0527B9D744F73929143408 L_14;
		L_14 = Nullable_1_GetValueOrDefault_m61C6F9C75B9E5A959A8CAB418B2B65F2774FF7CF_inline(G_B9_0, Nullable_1_GetValueOrDefault_m61C6F9C75B9E5A959A8CAB418B2B65F2774FF7CF_RuntimeMethod_var);
		V_2 = L_14;
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* L_15 = (&(&___0_textureInfo)->___m_Descriptor_1);
		int32_t L_16;
		L_16 = XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline(L_15, NULL);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_il2cpp_TypeInfo_var, &L_17);
		int32_t L_19;
		L_19 = XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline((&___1_descriptor), NULL);
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22;
		L_22 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral65EBBA267634801A4C3D9713BCE54E91A80CB4C2, L_18, L_21, NULL);
		Message_WithMessage_m7331F24D7470335EC2EEF8FBA56A8D570ACC8FD3_inline((&V_2), L_22, NULL);
	}

IL_0098:
	{
		// if ((textureInfo.m_Texture != null) && textureInfo.m_Descriptor.hasIdenticalTextureMetadata(descriptor))
		ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 L_23 = ___0_textureInfo;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_24 = L_23.___m_Texture_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_0169;
		}
	}
	{
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* L_26 = (&(&___0_textureInfo)->___m_Descriptor_1);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_27 = ___1_descriptor;
		bool L_28;
		L_28 = XRTextureDescriptor_hasIdenticalTextureMetadata_mB4DA1A4CFF4ABB66F8FF3AF1F310E60BA1B3F872(L_26, L_27, NULL);
		if (!L_28)
		{
			goto IL_0169;
		}
	}
	{
		// textureInfo.m_Descriptor = descriptor;
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_29 = ___1_descriptor;
		(&___0_textureInfo)->___m_Descriptor_1 = L_29;
		// switch(descriptor.dimension)
		int32_t L_30;
		L_30 = XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline((&___1_descriptor), NULL);
		V_3 = L_30;
		int32_t L_31 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_31, 2)))
		{
			case 0:
			{
				goto IL_0102;
			}
			case 1:
			{
				goto IL_00e1;
			}
			case 2:
			{
				goto IL_0120;
			}
		}
	}
	{
		goto IL_013e;
	}

IL_00e1:
	{
		// ((Texture3D)textureInfo.m_Texture).UpdateExternalTexture(textureInfo.m_Descriptor.nativeTexture);
		ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 L_32 = ___0_textureInfo;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_33 = L_32.___m_Texture_2;
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* L_34 = (&(&___0_textureInfo)->___m_Descriptor_1);
		intptr_t L_35;
		L_35 = XRTextureDescriptor_get_nativeTexture_m1E27C0E1DC11DDC6139178509EE91B8DF54DBAD4_inline(L_34, NULL);
		NullCheck(((Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1*)CastclassSealed((RuntimeObject*)L_33, Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var)));
		Texture3D_UpdateExternalTexture_mDF4E8A634EC749B99E5AC5616F776BF42188A607(((Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1*)CastclassSealed((RuntimeObject*)L_33, Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var)), L_35, NULL);
		// break;
		goto IL_018a;
	}

IL_0102:
	{
		// ((Texture2D)textureInfo.m_Texture).UpdateExternalTexture(textureInfo.m_Descriptor.nativeTexture);
		ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 L_36 = ___0_textureInfo;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_37 = L_36.___m_Texture_2;
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* L_38 = (&(&___0_textureInfo)->___m_Descriptor_1);
		intptr_t L_39;
		L_39 = XRTextureDescriptor_get_nativeTexture_m1E27C0E1DC11DDC6139178509EE91B8DF54DBAD4_inline(L_38, NULL);
		NullCheck(((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_37, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		Texture2D_UpdateExternalTexture_m73D80FDE0859F0E36D320A69317E04A3A2AD9986(((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_37, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)), L_39, NULL);
		// break;
		goto IL_018a;
	}

IL_0120:
	{
		// ((Cubemap)textureInfo.m_Texture).UpdateExternalTexture(textureInfo.m_Descriptor.nativeTexture);
		ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 L_40 = ___0_textureInfo;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_41 = L_40.___m_Texture_2;
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* L_42 = (&(&___0_textureInfo)->___m_Descriptor_1);
		intptr_t L_43;
		L_43 = XRTextureDescriptor_get_nativeTexture_m1E27C0E1DC11DDC6139178509EE91B8DF54DBAD4_inline(L_42, NULL);
		NullCheck(((Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C*)CastclassSealed((RuntimeObject*)L_41, Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C_il2cpp_TypeInfo_var)));
		Cubemap_UpdateExternalTexture_m6065B8D7B4B70C31AAA64DD142B96ADFAD74C53E(((Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C*)CastclassSealed((RuntimeObject*)L_41, Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C_il2cpp_TypeInfo_var)), L_43, NULL);
		// break;
		goto IL_018a;
	}

IL_013e:
	{
		// throw new NotSupportedException($"'{descriptor.dimension.ToString()}' is not a supported texture type.");
		int32_t L_44;
		L_44 = XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline((&___1_descriptor), NULL);
		V_4 = L_44;
		Il2CppFakeBox<int32_t> L_45(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_il2cpp_TypeInfo_var)), (&V_4));
		String_t* L_46;
		L_46 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_45), NULL);
		String_t* L_47;
		L_47 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), L_46, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF91253628691187D0797EFFA7D0213F47B6182C1)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_48 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_48);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_48, L_47, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARTextureInfo_GetUpdatedTextureInfo_m88B8391EEE756B9D4DD68A2C8B7CDB5468C319F0_RuntimeMethod_var)));
	}

IL_0169:
	{
		// textureInfo.m_Descriptor = descriptor;
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_49 = ___1_descriptor;
		(&___0_textureInfo)->___m_Descriptor_1 = L_49;
		// textureInfo.DestroyTexture();
		ARTextureInfo_DestroyTexture_m4A1489A030CA1E43E61CB7F3413AC97B5F5180F9((&___0_textureInfo), NULL);
		// textureInfo.m_Texture = CreateTexture(textureInfo.m_Descriptor);
		ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 L_50 = ___0_textureInfo;
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_51 = L_50.___m_Descriptor_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_52;
		L_52 = ARTextureInfo_CreateTexture_m6A095D54141ADC1B50174B6FE9CCBECFD1B4713C(L_51, NULL);
		(&___0_textureInfo)->___m_Texture_2 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&(&___0_textureInfo)->___m_Texture_2), (void*)L_52);
	}

IL_018a:
	{
		// return textureInfo;
		ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 L_53 = ___0_textureInfo;
		return L_53;
	}
}
// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::CreateTexture(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ARTextureInfo_CreateTexture_m6A095D54141ADC1B50174B6FE9CCBECFD1B4713C (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_descriptor, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (!descriptor.valid)
		bool L_0;
		L_0 = XRTextureDescriptor_get_valid_mBEE2CC268CC8773618BAB7794118746E235A6761((&___0_descriptor), NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL;
	}

IL_000b:
	{
		// switch(descriptor.dimension)
		int32_t L_1;
		L_1 = XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline((&___0_descriptor), NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 2)))
		{
			case 0:
			{
				goto IL_005f;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_00a2;
			}
		}
	}
	{
		goto IL_00c7;
	}

IL_002c:
	{
		// return Texture3D.CreateExternalTexture(descriptor.width, descriptor.height,
		//                                     descriptor.depth, descriptor.format,
		//                                     (descriptor.mipmapCount != 0), descriptor.nativeTexture);
		int32_t L_3;
		L_3 = XRTextureDescriptor_get_width_m570472F03994BC63F21751414105A2E0C112DBF2_inline((&___0_descriptor), NULL);
		int32_t L_4;
		L_4 = XRTextureDescriptor_get_height_mC0B37241C24FA883E2594B9411080EDF654E3E01_inline((&___0_descriptor), NULL);
		int32_t L_5;
		L_5 = XRTextureDescriptor_get_depth_m5885EBF7D767C918B1483D63D1B11EE60D939E7D_inline((&___0_descriptor), NULL);
		int32_t L_6;
		L_6 = XRTextureDescriptor_get_format_mA745AA87046D4FE4846C11B8285B980FF6DDDD1A_inline((&___0_descriptor), NULL);
		int32_t L_7;
		L_7 = XRTextureDescriptor_get_mipmapCount_m4B2ED0D6EBE06AD86E356203B4AB5DE3807C1D31_inline((&___0_descriptor), NULL);
		intptr_t L_8;
		L_8 = XRTextureDescriptor_get_nativeTexture_m1E27C0E1DC11DDC6139178509EE91B8DF54DBAD4_inline((&___0_descriptor), NULL);
		Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* L_9;
		L_9 = Texture3D_CreateExternalTexture_mB59B1E1DE6F6291E93396C091ABE3FC15865DB2A(L_3, L_4, L_5, L_6, (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0), L_8, NULL);
		return L_9;
	}

IL_005f:
	{
		// var texture = Texture2D.CreateExternalTexture(descriptor.width, descriptor.height,
		//                                     descriptor.format, (descriptor.mipmapCount != 0),
		//                                     k_TextureHasLinearColorSpace,
		//                                     descriptor.nativeTexture);
		int32_t L_10;
		L_10 = XRTextureDescriptor_get_width_m570472F03994BC63F21751414105A2E0C112DBF2_inline((&___0_descriptor), NULL);
		int32_t L_11;
		L_11 = XRTextureDescriptor_get_height_mC0B37241C24FA883E2594B9411080EDF654E3E01_inline((&___0_descriptor), NULL);
		int32_t L_12;
		L_12 = XRTextureDescriptor_get_format_mA745AA87046D4FE4846C11B8285B980FF6DDDD1A_inline((&___0_descriptor), NULL);
		int32_t L_13;
		L_13 = XRTextureDescriptor_get_mipmapCount_m4B2ED0D6EBE06AD86E356203B4AB5DE3807C1D31_inline((&___0_descriptor), NULL);
		intptr_t L_14;
		L_14 = XRTextureDescriptor_get_nativeTexture_m1E27C0E1DC11DDC6139178509EE91B8DF54DBAD4_inline((&___0_descriptor), NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15;
		L_15 = Texture2D_CreateExternalTexture_mF821F07B386D19D124696C9A6F6EBEA84212B112(L_10, L_11, L_12, (bool)((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0), (bool)0, L_14, NULL);
		// texture.wrapMode = TextureWrapMode.Clamp;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = L_15;
		NullCheck(L_16);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_16, 1, NULL);
		// texture.filterMode = FilterMode.Bilinear;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = L_16;
		NullCheck(L_17);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_17, 1, NULL);
		// texture.hideFlags = HideFlags.HideAndDontSave;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = L_17;
		NullCheck(L_18);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_18, ((int32_t)61), NULL);
		// return texture;
		return L_18;
	}

IL_00a2:
	{
		// return Cubemap.CreateExternalTexture(descriptor.width,
		//                                         descriptor.format,
		//                                         (descriptor.mipmapCount != 0),
		//                                         descriptor.nativeTexture);
		int32_t L_19;
		L_19 = XRTextureDescriptor_get_width_m570472F03994BC63F21751414105A2E0C112DBF2_inline((&___0_descriptor), NULL);
		int32_t L_20;
		L_20 = XRTextureDescriptor_get_format_mA745AA87046D4FE4846C11B8285B980FF6DDDD1A_inline((&___0_descriptor), NULL);
		int32_t L_21;
		L_21 = XRTextureDescriptor_get_mipmapCount_m4B2ED0D6EBE06AD86E356203B4AB5DE3807C1D31_inline((&___0_descriptor), NULL);
		intptr_t L_22;
		L_22 = XRTextureDescriptor_get_nativeTexture_m1E27C0E1DC11DDC6139178509EE91B8DF54DBAD4_inline((&___0_descriptor), NULL);
		Cubemap_t4F2DFF70696A5CB5C1695DF8947CC60D718C4A1C* L_23;
		L_23 = Cubemap_CreateExternalTexture_m22D6FBF51B28F65E507FD3AB0A3BA98C6369BDD9(L_19, L_20, (bool)((!(((uint32_t)L_21) <= ((uint32_t)0)))? 1 : 0), L_22, NULL);
		return L_23;
	}

IL_00c7:
	{
		// return null;
		return (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTextureInfo::IsSupported(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTextureInfo_IsSupported_m3DF7C6656B31ED56F557D0BD4DE78E40304E6B09 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_descriptor, const RuntimeMethod* method) 
{
	{
		// if(descriptor.dimension == TextureDimension.Tex3D)
		int32_t L_0;
		L_0 = XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline((&___0_descriptor), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_000c;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000c:
	{
		// else if(descriptor.dimension == TextureDimension.Tex2D)
		int32_t L_1;
		L_1 = XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline((&___0_descriptor), NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0018;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0018:
	{
		// else if(descriptor.dimension == TextureDimension.Cube)
		int32_t L_2;
		L_2 = XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline((&___0_descriptor), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0024;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0024:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTextureInfo::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTextureInfo_Dispose_mF92A6E0C4D08205EDC7CF817BC866A9AB179632F (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, const RuntimeMethod* method) 
{
	{
		// DestroyTexture();
		ARTextureInfo_DestroyTexture_m4A1489A030CA1E43E61CB7F3413AC97B5F5180F9(__this, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ARTextureInfo_Dispose_mF92A6E0C4D08205EDC7CF817BC866A9AB179632F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261*>(__this + _offset);
	ARTextureInfo_Dispose_mF92A6E0C4D08205EDC7CF817BC866A9AB179632F(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARFoundation.ARTextureInfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTextureInfo_GetHashCode_m85504109E923E3CA1494548DD2C3261C1976E97A (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// int hash = 486187739;
		// hash = hash * 486187739 + m_Descriptor.GetHashCode();
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* L_0 = (&__this->___m_Descriptor_1);
		int32_t L_1;
		L_1 = XRTextureDescriptor_GetHashCode_mFEB456F0A0985232D0E342B8F10669149F190012(L_0, NULL);
		// hash = hash * 486187739 + ((m_Texture == null) ? 0 : m_Texture.GetHashCode());
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = __this->___m_Texture_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)486187739), ((int32_t)486187739))), L_1)), ((int32_t)486187739)));
		if (L_3)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)486187739), ((int32_t)486187739))), L_1)), ((int32_t)486187739)));
			goto IL_003e;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = __this->___m_Texture_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_003f;
	}

IL_003e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_003f:
	{
		// return hash;
		return ((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0));
	}
}
IL2CPP_EXTERN_C  int32_t ARTextureInfo_GetHashCode_m85504109E923E3CA1494548DD2C3261C1976E97A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ARTextureInfo_GetHashCode_m85504109E923E3CA1494548DD2C3261C1976E97A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTextureInfo::Equals(UnityEngine.XR.ARFoundation.ARTextureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTextureInfo_Equals_mFB1B9B103E90F76AE0EB4E2DED235BCF3DCBF034 (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_Descriptor.Equals(other) && (m_Texture == other.m_Texture);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* L_0 = (&__this->___m_Descriptor_1);
		ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 L_1 = ___0_other;
		ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 L_2 = L_1;
		RuntimeObject* L_3 = Box(ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_il2cpp_TypeInfo_var, &L_2);
		bool L_4;
		L_4 = XRTextureDescriptor_Equals_m42127F01DF3CDEA1F38CF07E6057E8AD9E6F4570(L_0, L_3, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5 = __this->___m_Texture_2;
		ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 L_6 = ___0_other;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_7 = L_6.___m_Texture_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, L_7, NULL);
		return L_8;
	}

IL_002b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ARTextureInfo_Equals_mFB1B9B103E90F76AE0EB4E2DED235BCF3DCBF034_AdjustorThunk (RuntimeObject* __this, ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___0_other, const RuntimeMethod* method)
{
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261*>(__this + _offset);
	bool _returnValue;
	_returnValue = ARTextureInfo_Equals_mFB1B9B103E90F76AE0EB4E2DED235BCF3DCBF034(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTextureInfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTextureInfo_Equals_m020839E8607BDF4DEFEDBB125778BEFE105F563D (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((obj is ARTextureInfo) && Equals((ARTextureInfo)obj));
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ARTextureInfo_Equals_mFB1B9B103E90F76AE0EB4E2DED235BCF3DCBF034(__this, ((*(ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261*)((ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261*)(ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261*)UnBox(L_1, ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ARTextureInfo_Equals_m020839E8607BDF4DEFEDBB125778BEFE105F563D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261*>(__this + _offset);
	bool _returnValue;
	_returnValue = ARTextureInfo_Equals_m020839E8607BDF4DEFEDBB125778BEFE105F563D(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARFoundation.ARTrackable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackable__ctor_m8074A81414BDB3B30F9863C80B10EF90C99FFD8B (ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs
IL2CPP_EXTERN_C void ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A_marshal_pinvoke(const ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A& unmarshaled, ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CsessionOriginU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<sessionOrigin>k__BackingField' of type 'ARTrackablesParentTransformChangedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsessionOriginU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A_marshal_pinvoke_back(const ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A_marshaled_pinvoke& marshaled, ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A& unmarshaled)
{
	Exception_t* ___U3CsessionOriginU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<sessionOrigin>k__BackingField' of type 'ARTrackablesParentTransformChangedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsessionOriginU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs
IL2CPP_EXTERN_C void ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A_marshal_pinvoke_cleanup(ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs
IL2CPP_EXTERN_C void ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A_marshal_com(const ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A& unmarshaled, ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A_marshaled_com& marshaled)
{
	Exception_t* ___U3CsessionOriginU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<sessionOrigin>k__BackingField' of type 'ARTrackablesParentTransformChangedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsessionOriginU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A_marshal_com_back(const ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A_marshaled_com& marshaled, ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A& unmarshaled)
{
	Exception_t* ___U3CsessionOriginU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<sessionOrigin>k__BackingField' of type 'ARTrackablesParentTransformChangedEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsessionOriginU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs
IL2CPP_EXTERN_C void ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A_marshal_com_cleanup(ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A_marshaled_com& marshaled)
{
}
// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs::get_sessionOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ARTrackablesParentTransformChangedEventArgs_get_sessionOrigin_m07C2F7C6A286B6AF4739C6618DA497C251325E24 (ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* __this, const RuntimeMethod* method) 
{
	{
		// public ARSessionOrigin sessionOrigin { get; }
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = __this->___U3CsessionOriginU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ARTrackablesParentTransformChangedEventArgs_get_sessionOrigin_m07C2F7C6A286B6AF4739C6618DA497C251325E24_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A*>(__this + _offset);
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* _returnValue;
	_returnValue = ARTrackablesParentTransformChangedEventArgs_get_sessionOrigin_m07C2F7C6A286B6AF4739C6618DA497C251325E24_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs::get_trackablesParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARTrackablesParentTransformChangedEventArgs_get_trackablesParent_m2B845554A63A5CB63A6FBBB19C8C96F8E0F653D6 (ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* __this, const RuntimeMethod* method) 
{
	{
		// public Transform trackablesParent { get; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CtrackablesParentU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARTrackablesParentTransformChangedEventArgs_get_trackablesParent_m2B845554A63A5CB63A6FBBB19C8C96F8E0F653D6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A*>(__this + _offset);
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* _returnValue;
	_returnValue = ARTrackablesParentTransformChangedEventArgs_get_trackablesParent_m2B845554A63A5CB63A6FBBB19C8C96F8E0F653D6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs::.ctor(UnityEngine.XR.ARFoundation.ARSessionOrigin,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackablesParentTransformChangedEventArgs__ctor_mD26567D31DA6E6A14F69F51972F2AA76B0EAFD8A (ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* __this, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___0_sessionOrigin, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_trackablesParent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sessionOrigin == null)
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = ___0_sessionOrigin;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException(nameof(sessionOrigin));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA464E0A1E89B417912348648967E1149E81D19BB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARTrackablesParentTransformChangedEventArgs__ctor_mD26567D31DA6E6A14F69F51972F2AA76B0EAFD8A_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (trackablesParent == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___1_trackablesParent;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		// throw new ArgumentNullException(nameof(trackablesParent));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB6ACAF59A3A9C3CADB8052713C86DBB5C529FF7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARTrackablesParentTransformChangedEventArgs__ctor_mD26567D31DA6E6A14F69F51972F2AA76B0EAFD8A_RuntimeMethod_var)));
	}

IL_0028:
	{
		// this.sessionOrigin = sessionOrigin;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_6 = ___0_sessionOrigin;
		__this->___U3CsessionOriginU3Ek__BackingField_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsessionOriginU3Ek__BackingField_0), (void*)L_6);
		// this.trackablesParent = trackablesParent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___1_trackablesParent;
		__this->___U3CtrackablesParentU3Ek__BackingField_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtrackablesParentU3Ek__BackingField_1), (void*)L_7);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ARTrackablesParentTransformChangedEventArgs__ctor_mD26567D31DA6E6A14F69F51972F2AA76B0EAFD8A_AdjustorThunk (RuntimeObject* __this, ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___0_sessionOrigin, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_trackablesParent, const RuntimeMethod* method)
{
	ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A*>(__this + _offset);
	ARTrackablesParentTransformChangedEventArgs__ctor_mD26567D31DA6E6A14F69F51972F2AA76B0EAFD8A(_thisAdjusted, ___0_sessionOrigin, ___1_trackablesParent, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs::Equals(UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackablesParentTransformChangedEventArgs_Equals_mF91B0B32830EACF99CFA2EB7C49455312BB793D0 (ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* __this, ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sessionOrigin == other.sessionOrigin &&
		// trackablesParent == other.trackablesParent;
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0;
		L_0 = ARTrackablesParentTransformChangedEventArgs_get_sessionOrigin_m07C2F7C6A286B6AF4739C6618DA497C251325E24_inline(__this, NULL);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_1;
		L_1 = ARTrackablesParentTransformChangedEventArgs_get_sessionOrigin_m07C2F7C6A286B6AF4739C6618DA497C251325E24_inline((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = ARTrackablesParentTransformChangedEventArgs_get_trackablesParent_m2B845554A63A5CB63A6FBBB19C8C96F8E0F653D6_inline(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = ARTrackablesParentTransformChangedEventArgs_get_trackablesParent_m2B845554A63A5CB63A6FBBB19C8C96F8E0F653D6_inline((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, L_4, NULL);
		return L_5;
	}

IL_0027:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ARTrackablesParentTransformChangedEventArgs_Equals_mF91B0B32830EACF99CFA2EB7C49455312BB793D0_AdjustorThunk (RuntimeObject* __this, ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A ___0_other, const RuntimeMethod* method)
{
	ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ARTrackablesParentTransformChangedEventArgs_Equals_mF91B0B32830EACF99CFA2EB7C49455312BB793D0(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackablesParentTransformChangedEventArgs_Equals_m8D1863C5384CC73447D127048E9F57FB586843C0 (ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// obj is ARTrackablesParentTransformChangedEventArgs other && Equals(other);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A*)((ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A*)(ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A*)UnBox(L_1, ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A_il2cpp_TypeInfo_var))));
		ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A L_2 = V_0;
		bool L_3;
		L_3 = ARTrackablesParentTransformChangedEventArgs_Equals_mF91B0B32830EACF99CFA2EB7C49455312BB793D0(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ARTrackablesParentTransformChangedEventArgs_Equals_m8D1863C5384CC73447D127048E9F57FB586843C0_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ARTrackablesParentTransformChangedEventArgs_Equals_m8D1863C5384CC73447D127048E9F57FB586843C0(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackablesParentTransformChangedEventArgs_GetHashCode_m3EC23E797F0790981B15C371D22E14E432052352 (ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* __this, const RuntimeMethod* method) 
{
	{
		// public override int GetHashCode() => HashCodeUtil.Combine(
		//     HashCodeUtil.ReferenceHash(sessionOrigin),
		//     HashCodeUtil.ReferenceHash(trackablesParent));
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0;
		L_0 = ARTrackablesParentTransformChangedEventArgs_get_sessionOrigin_m07C2F7C6A286B6AF4739C6618DA497C251325E24_inline(__this, NULL);
		int32_t L_1;
		L_1 = HashCodeUtil_ReferenceHash_mFDEB5485EAA482CF3FFD30D45BFFAF9D15CACED3(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = ARTrackablesParentTransformChangedEventArgs_get_trackablesParent_m2B845554A63A5CB63A6FBBB19C8C96F8E0F653D6_inline(__this, NULL);
		int32_t L_3;
		L_3 = HashCodeUtil_ReferenceHash_mFDEB5485EAA482CF3FFD30D45BFFAF9D15CACED3(L_2, NULL);
		int32_t L_4;
		L_4 = HashCodeUtil_Combine_m5CA91217A96CB1506F0A9C83ECC4ED11F4EDF39C(L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t ARTrackablesParentTransformChangedEventArgs_GetHashCode_m3EC23E797F0790981B15C371D22E14E432052352_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ARTrackablesParentTransformChangedEventArgs_GetHashCode_m3EC23E797F0790981B15C371D22E14E432052352(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 UnityEngine.XR.ARFoundation.ARTrackedImage::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ARTrackedImage_get_extents_m3201758E786A2532D340FE93EEF73B6AA2D055DB (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_sessionRelativeData_mEF23E94ECA29E4097BC709FF9B87566C0E03565B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return sessionRelativeData.size * 0.5f; }
		XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD L_0;
		L_0 = ARTrackable_2_get_sessionRelativeData_mEF23E94ECA29E4097BC709FF9B87566C0E03565B_inline(__this, ARTrackable_2_get_sessionRelativeData_mEF23E94ECA29E4097BC709FF9B87566C0E03565B_RuntimeMethod_var);
		V_0 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = XRTrackedImage_get_size_m57847CD4307A9A560D358981700B8722D8A02438_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_1, (0.5f), NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.XR.ARFoundation.ARTrackedImage::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ARTrackedImage_get_size_mAC20A0ECB99C7502138BA134686286B3C126D6F9 (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_sessionRelativeData_mEF23E94ECA29E4097BC709FF9B87566C0E03565B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return sessionRelativeData.size; }
		XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD L_0;
		L_0 = ARTrackable_2_get_sessionRelativeData_mEF23E94ECA29E4097BC709FF9B87566C0E03565B_inline(__this, ARTrackable_2_get_sessionRelativeData_mEF23E94ECA29E4097BC709FF9B87566C0E03565B_RuntimeMethod_var);
		V_0 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = XRTrackedImage_get_size_m57847CD4307A9A560D358981700B8722D8A02438_inline((&V_0), NULL);
		return L_1;
	}
}
// System.IntPtr UnityEngine.XR.ARFoundation.ARTrackedImage::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARTrackedImage_get_nativePtr_mE99C5B4BF589443B6C342B22C99AC02D7DED3E10 (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_sessionRelativeData_mEF23E94ECA29E4097BC709FF9B87566C0E03565B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return sessionRelativeData.nativePtr; }
		XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD L_0;
		L_0 = ARTrackable_2_get_sessionRelativeData_mEF23E94ECA29E4097BC709FF9B87566C0E03565B_inline(__this, ARTrackable_2_get_sessionRelativeData_mEF23E94ECA29E4097BC709FF9B87566C0E03565B_RuntimeMethod_var);
		V_0 = L_0;
		intptr_t L_1;
		L_1 = XRTrackedImage_get_nativePtr_m2ECEAC93477008FB415D4A388ACAA4A9DB6E1892_inline((&V_0), NULL);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARFoundation.ARTrackedImage::get_referenceImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* __this, const RuntimeMethod* method) 
{
	{
		// public XRReferenceImage referenceImage { get; internal set; }
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_0 = __this->___U3CreferenceImageU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImage::set_referenceImage(UnityEngine.XR.ARSubsystems.XRReferenceImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImage_set_referenceImage_m1EA6089A5257113AC8141362107AA8CEA58EF38B (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* __this, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___0_value, const RuntimeMethod* method) 
{
	{
		// public XRReferenceImage referenceImage { get; internal set; }
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_0 = ___0_value;
		__this->___U3CreferenceImageU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CreferenceImageU3Ek__BackingField_7))->___m_Name_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CreferenceImageU3Ek__BackingField_7))->___m_Texture_5), (void*)NULL);
		#endif
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImage__ctor_mE6C1F2FA91A2B6F58665058A2550EFC07C7CCDA8 (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2__ctor_mF2F7A3D938859507914B0842C348EC58E3F74BD2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ARTrackable_2__ctor_mF2F7A3D938859507914B0842C348EC58E3F74BD2(__this, ARTrackable_2__ctor_mF2F7A3D938859507914B0842C348EC58E3F74BD2_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.IReferenceImageLibrary UnityEngine.XR.ARFoundation.ARTrackedImageManager::get_referenceLibrary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARTrackedImageManager_get_referenceLibrary_mD811689B94E007CD8F708D91155C8DC575E948DD (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (subsystem != null)
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_0;
		L_0 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return subsystem.imageLibrary;
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_1;
		L_1 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		NullCheck(L_1);
		RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* L_2;
		L_2 = XRImageTrackingSubsystem_get_imageLibrary_mE8D15BAA0C750529680799A27597C4B5F61EBBC8_inline(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		// return m_SerializedLibrary;
		XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* L_3 = __this->___m_SerializedLibrary_14;
		return L_3;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::set_referenceLibrary(UnityEngine.XR.ARSubsystems.IReferenceImageLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_set_referenceLibrary_m826772B820572A41FE7B566E0F6E0C25024D0E5E (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_EnsureSubsystemInstanceSet_mF63EB1FD077F06E205102073CEDD9ECA18511541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* V_0 = NULL;
	RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* V_1 = NULL;
	{
		// if (value == null && subsystem != null && subsystem.running)
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_1;
		L_1 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_2;
		L_2 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3;
		L_3 = SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// throw new InvalidOperationException("Cannot set a null reference library while image tracking is enabled.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4B5747F0389E776ABBE6C1BBC3C34BFB3756167D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARTrackedImageManager_set_referenceLibrary_m826772B820572A41FE7B566E0F6E0C25024D0E5E_RuntimeMethod_var)));
	}

IL_0023:
	{
		// if (value is XRReferenceImageLibrary serializedLibrary)
		RuntimeObject* L_5 = ___0_value;
		V_0 = ((XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42*)IsInstClass((RuntimeObject*)L_5, XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42_il2cpp_TypeInfo_var));
		XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		// m_SerializedLibrary = serializedLibrary;
		XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* L_7 = V_0;
		__this->___m_SerializedLibrary_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SerializedLibrary_14), (void*)L_7);
		// if (subsystem != null)
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_8;
		L_8 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0080;
		}
	}
	{
		// subsystem.imageLibrary = subsystem.CreateRuntimeLibrary(serializedLibrary);
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_9;
		L_9 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_10;
		L_10 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* L_11 = V_0;
		NullCheck(L_10);
		RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* L_12;
		L_12 = XRImageTrackingSubsystem_CreateRuntimeLibrary_m1E7DAA2B60E911BFD4F9F27EABAC6FE44C617B9F(L_10, L_11, NULL);
		NullCheck(L_9);
		XRImageTrackingSubsystem_set_imageLibrary_m43AB62E6D41F3AF16AF633843C190D35575EB97B(L_9, L_12, NULL);
		goto IL_0080;
	}

IL_0055:
	{
		// else if (value is RuntimeReferenceImageLibrary runtimeLibrary)
		RuntimeObject* L_13 = ___0_value;
		V_1 = ((RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF*)IsInstClass((RuntimeObject*)L_13, RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF_il2cpp_TypeInfo_var));
		RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* L_14 = V_1;
		if (!L_14)
		{
			goto IL_0080;
		}
	}
	{
		// m_SerializedLibrary = null;
		__this->___m_SerializedLibrary_14 = (XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SerializedLibrary_14), (void*)(XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42*)NULL);
		// EnsureSubsystemInstanceSet();
		SubsystemLifecycleManager_3_EnsureSubsystemInstanceSet_mF63EB1FD077F06E205102073CEDD9ECA18511541(__this, SubsystemLifecycleManager_3_EnsureSubsystemInstanceSet_mF63EB1FD077F06E205102073CEDD9ECA18511541_RuntimeMethod_var);
		// if (subsystem != null)
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_15;
		L_15 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_0080;
		}
	}
	{
		// subsystem.imageLibrary = runtimeLibrary;
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_16;
		L_16 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* L_17 = V_1;
		NullCheck(L_16);
		XRImageTrackingSubsystem_set_imageLibrary_m43AB62E6D41F3AF16AF633843C190D35575EB97B(L_16, L_17, NULL);
	}

IL_0080:
	{
		// if (subsystem != null)
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_18;
		L_18 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		if (!L_18)
		{
			goto IL_0099;
		}
	}
	{
		// UpdateReferenceImages(subsystem.imageLibrary);
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_19;
		L_19 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		NullCheck(L_19);
		RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* L_20;
		L_20 = XRImageTrackingSubsystem_get_imageLibrary_mE8D15BAA0C750529680799A27597C4B5F61EBBC8_inline(L_19, NULL);
		ARTrackedImageManager_UpdateReferenceImages_mFD7E9622A308CF5AB7005736FF1425FD9EDA6EFB(__this, L_20, NULL);
	}

IL_0099:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary UnityEngine.XR.ARFoundation.ARTrackedImageManager::CreateRuntimeLibrary(UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* ARTrackedImageManager_CreateRuntimeLibrary_m53343F2B04F48AE642735069B9348B0EAF009D1E (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* ___0_serializedLibrary, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_EnsureSubsystemInstanceSet_mF63EB1FD077F06E205102073CEDD9ECA18511541_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EnsureSubsystemInstanceSet();
		SubsystemLifecycleManager_3_EnsureSubsystemInstanceSet_mF63EB1FD077F06E205102073CEDD9ECA18511541(__this, SubsystemLifecycleManager_3_EnsureSubsystemInstanceSet_mF63EB1FD077F06E205102073CEDD9ECA18511541_RuntimeMethod_var);
		// if (subsystem == null)
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_0;
		L_0 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// throw new NotSupportedException("No image tracking subsystem found. This usually means image tracking is not supported.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A6927388BD875355A3644B8F7ED9EF454485186)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARTrackedImageManager_CreateRuntimeLibrary_m53343F2B04F48AE642735069B9348B0EAF009D1E_RuntimeMethod_var)));
	}

IL_0019:
	{
		// return subsystem.CreateRuntimeLibrary(serializedLibrary);
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_2;
		L_2 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* L_3 = ___0_serializedLibrary;
		NullCheck(L_2);
		RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* L_4;
		L_4 = XRImageTrackingSubsystem_CreateRuntimeLibrary_m1E7DAA2B60E911BFD4F9F27EABAC6FE44C617B9F(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Int32 UnityEngine.XR.ARFoundation.ARTrackedImageManager::get_maxNumberOfMovingImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackedImageManager_get_maxNumberOfMovingImages_m54630EFA22CCADFA120FD908E0714E7297AEB215 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxNumberOfMovingImages;
		int32_t L_0 = __this->___m_MaxNumberOfMovingImages_15;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::set_maxNumberOfMovingImages(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_set_maxNumberOfMovingImages_m4D867796B5E6C507243D2C43680BDDFF5AEC0CD8 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => requestedMaxNumberOfMovingImages = value;
		int32_t L_0 = ___0_value;
		ARTrackedImageManager_set_requestedMaxNumberOfMovingImages_mD253ACF680396E6BDBEE194358093D84D7D3218A(__this, L_0, NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackedImageManager::get_supportsMovingImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackedImageManager_get_supportsMovingImages_m9940C251AF671CDAB6517357F5A5C05563478203 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_descriptor_m723178E137A9DEE374BFBDF8F627506C8F1CE697_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE* G_B2_0 = NULL;
	XRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE* G_B1_0 = NULL;
	{
		// bool supportsMovingImages => descriptor?.supportsMovingImages == true;
		XRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE* L_0;
		L_0 = SubsystemLifecycleManager_3_get_descriptor_m723178E137A9DEE374BFBDF8F627506C8F1CE697(__this, SubsystemLifecycleManager_3_get_descriptor_m723178E137A9DEE374BFBDF8F627506C8F1CE697_RuntimeMethod_var);
		XRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = XRImageTrackingSubsystemDescriptor_get_supportsMovingImages_m478CCC3CDCB620998AA0A2D7F27A72596BB9504E_inline(G_B2_0, NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.ARFoundation.ARTrackedImageManager::get_requestedMaxNumberOfMovingImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackedImageManager_get_requestedMaxNumberOfMovingImages_m1FC9793915B2DE5361B432DC12F137210C832BF0 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => supportsMovingImages ? subsystem.requestedMaxNumberOfMovingImages : m_MaxNumberOfMovingImages;
		bool L_0;
		L_0 = ARTrackedImageManager_get_supportsMovingImages_m9940C251AF671CDAB6517357F5A5C05563478203(__this, NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = __this->___m_MaxNumberOfMovingImages_15;
		return L_1;
	}

IL_000f:
	{
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_2;
		L_2 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = XRImageTrackingSubsystem_get_requestedMaxNumberOfMovingImages_m297CA442EB359393CD73A53ED4BB535376BB8A72(L_2, NULL);
		return L_3;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::set_requestedMaxNumberOfMovingImages(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_set_requestedMaxNumberOfMovingImages_mD253ACF680396E6BDBEE194358093D84D7D3218A (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_descriptor_m723178E137A9DEE374BFBDF8F627506C8F1CE697_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE* G_B3_0 = NULL;
	XRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	{
		// m_MaxNumberOfMovingImages = value;
		int32_t L_0 = ___0_value;
		__this->___m_MaxNumberOfMovingImages_15 = L_0;
		// if (enabled && (descriptor?.supportsMovingImages == true))
		bool L_1;
		L_1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		XRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE* L_2;
		L_2 = SubsystemLifecycleManager_3_get_descriptor_m723178E137A9DEE374BFBDF8F627506C8F1CE697(__this, SubsystemLifecycleManager_3_get_descriptor_m723178E137A9DEE374BFBDF8F627506C8F1CE697_RuntimeMethod_var);
		XRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_001c;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0021;
	}

IL_001c:
	{
		NullCheck(G_B3_0);
		bool L_4;
		L_4 = XRImageTrackingSubsystemDescriptor_get_supportsMovingImages_m478CCC3CDCB620998AA0A2D7F27A72596BB9504E_inline(G_B3_0, NULL);
		G_B4_0 = ((int32_t)(L_4));
	}

IL_0021:
	{
		if (!G_B4_0)
		{
			goto IL_002f;
		}
	}
	{
		// subsystem.requestedMaxNumberOfMovingImages = value;
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_5;
		L_5 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		int32_t L_6 = ___0_value;
		NullCheck(L_5);
		XRImageTrackingSubsystem_set_requestedMaxNumberOfMovingImages_mE6898D8A250E46CD9CAE48EE63E3624AB7184F1D(L_5, L_6, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Int32 UnityEngine.XR.ARFoundation.ARTrackedImageManager::get_currentMaxNumberOfMovingImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackedImageManager_get_currentMaxNumberOfMovingImages_mB131CA9A3525418C91945D1CC075D00C59D70F1C (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int currentMaxNumberOfMovingImages => supportsMovingImages ? subsystem.currentMaxNumberOfMovingImages : 0;
		bool L_0;
		L_0 = ARTrackedImageManager_get_supportsMovingImages_m9940C251AF671CDAB6517357F5A5C05563478203(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_1;
		L_1 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = XRImageTrackingSubsystem_get_currentMaxNumberOfMovingImages_mF52B4940D32D6802A8B80EB4261B728D50C068EE(L_1, NULL);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackedImageManager::get_trackedImagePrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARTrackedImageManager_get_trackedImagePrefab_mC698D56D9B539242437FA40F1DDC6E4FE959DE2A (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TrackedImagePrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_TrackedImagePrefab_16;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::set_trackedImagePrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_set_trackedImagePrefab_mAAE136140F485320C96A4E30F244CEED525395A9 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_TrackedImagePrefab = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___m_TrackedImagePrefab_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TrackedImagePrefab_16), (void*)L_0);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackedImageManager::GetPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARTrackedImageManager_GetPrefab_mE7358EBC36EAFF6F7CECA248BAB004DDEA8B1DA9 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, const RuntimeMethod* method) 
{
	{
		// protected override GameObject GetPrefab() => m_TrackedImagePrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_TrackedImagePrefab_16;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::add_trackedImagesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_add_trackedImagesChanged_mB190015342B225144729100E0E38745CAFA7F438 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* V_0 = NULL;
	Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* V_1 = NULL;
	Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* V_2 = NULL;
	{
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_0 = __this->___trackedImagesChanged_17;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_1 = V_0;
		V_1 = L_1;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_2 = V_1;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)Castclass((RuntimeObject*)L_4, Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var));
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F** L_5 = (&__this->___trackedImagesChanged_17);
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_6 = V_2;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_7 = V_1;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_9 = V_0;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)L_9) == ((RuntimeObject*)(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::remove_trackedImagesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_remove_trackedImagesChanged_mA754FAB732F3D5D803FA3A58A51E6487E75CCF34 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* V_0 = NULL;
	Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* V_1 = NULL;
	Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* V_2 = NULL;
	{
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_0 = __this->___trackedImagesChanged_17;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_1 = V_0;
		V_1 = L_1;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_2 = V_1;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)Castclass((RuntimeObject*)L_4, Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var));
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F** L_5 = (&__this->___trackedImagesChanged_17);
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_6 = V_2;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_7 = V_1;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_9 = V_0;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)L_9) == ((RuntimeObject*)(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.String UnityEngine.XR.ARFoundation.ARTrackedImageManager::get_gameObjectName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARTrackedImageManager_get_gameObjectName_m0E49CC1FC7F70A3355F7E78BB7A5253A0740C991 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral048338E5BA6A5BA9DAA0487ACD80A470818DD06F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string gameObjectName => nameof(ARTrackedImage);
		return _stringLiteral048338E5BA6A5BA9DAA0487ACD80A470818DD06F;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::OnBeforeStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_OnBeforeStart_mB9877EAD9A54B82012E04BA3BAFA72F0843F906C (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (subsystem.imageLibrary == null && m_SerializedLibrary != null)
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_0;
		L_0 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		NullCheck(L_0);
		RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* L_1;
		L_1 = XRImageTrackingSubsystem_get_imageLibrary_mE8D15BAA0C750529680799A27597C4B5F61EBBC8_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_003e;
		}
	}
	{
		XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* L_2 = __this->___m_SerializedLibrary_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		// subsystem.imageLibrary = subsystem.CreateRuntimeLibrary(m_SerializedLibrary);
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_4;
		L_4 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_5;
		L_5 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* L_6 = __this->___m_SerializedLibrary_14;
		NullCheck(L_5);
		RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* L_7;
		L_7 = XRImageTrackingSubsystem_CreateRuntimeLibrary_m1E7DAA2B60E911BFD4F9F27EABAC6FE44C617B9F(L_5, L_6, NULL);
		NullCheck(L_4);
		XRImageTrackingSubsystem_set_imageLibrary_m43AB62E6D41F3AF16AF633843C190D35575EB97B(L_4, L_7, NULL);
		// m_SerializedLibrary = null;
		__this->___m_SerializedLibrary_14 = (XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SerializedLibrary_14), (void*)(XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42*)NULL);
	}

IL_003e:
	{
		// UpdateReferenceImages(subsystem.imageLibrary);
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_8;
		L_8 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		NullCheck(L_8);
		RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* L_9;
		L_9 = XRImageTrackingSubsystem_get_imageLibrary_mE8D15BAA0C750529680799A27597C4B5F61EBBC8_inline(L_8, NULL);
		ARTrackedImageManager_UpdateReferenceImages_mFD7E9622A308CF5AB7005736FF1425FD9EDA6EFB(__this, L_9, NULL);
		// if (supportsMovingImages)
		bool L_10;
		L_10 = ARTrackedImageManager_get_supportsMovingImages_m9940C251AF671CDAB6517357F5A5C05563478203(__this, NULL);
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		// subsystem.requestedMaxNumberOfMovingImages = m_MaxNumberOfMovingImages;
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_11;
		L_11 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		int32_t L_12 = __this->___m_MaxNumberOfMovingImages_15;
		NullCheck(L_11);
		XRImageTrackingSubsystem_set_requestedMaxNumberOfMovingImages_mE6898D8A250E46CD9CAE48EE63E3624AB7184F1D(L_11, L_12, NULL);
	}

IL_0068:
	{
		// enabled = (subsystem.imageLibrary != null);
		XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* L_13;
		L_13 = SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_inline(__this, SubsystemLifecycleManager_3_get_subsystem_m40BB98FE352ACB48428FB3A4864D0CC5320F3223_RuntimeMethod_var);
		NullCheck(L_13);
		RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* L_14;
		L_14 = XRImageTrackingSubsystem_get_imageLibrary_mE8D15BAA0C750529680799A27597C4B5F61EBBC8_inline(L_13, NULL);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)((!(((RuntimeObject*)(RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF*)L_14) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackedImageManager::FindReferenceImage(System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackedImageManager_FindReferenceImage_m7B01D81D360921A7DCDFEAA4DDD7710146371ABD (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, Guid_t ___0_guid, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* ___1_referenceImage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m3388C15527891356A7EECDC797794290F3F8657D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE87077C06D8613892171836919671124469E7406_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8* V_0 = NULL;
	Enumerator_tF50B6A349DB9B6D1A9E5AD924A439A670F70E1ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (m_ReferenceImages.TryGetValue(guid, out referenceImage))
		Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* L_0 = __this->___m_ReferenceImages_18;
		Guid_t L_1 = ___0_guid;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* L_2 = ___1_referenceImage;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mE87077C06D8613892171836919671124469E7406(L_0, L_1, L_2, Dictionary_2_TryGetValue_mE87077C06D8613892171836919671124469E7406_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0011:
	{
		// if (referenceLibrary is MutableRuntimeReferenceImageLibrary mutableLibrary)
		RuntimeObject* L_4;
		L_4 = ARTrackedImageManager_get_referenceLibrary_mD811689B94E007CD8F708D91155C8DC575E948DD(__this, NULL);
		V_0 = ((MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8*)IsInstClass((RuntimeObject*)L_4, MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8_il2cpp_TypeInfo_var));
		MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8* L_5 = V_0;
		if (!L_5)
		{
			goto IL_006c;
		}
	}
	{
		// foreach (var candidateImage in mutableLibrary)
		MutableRuntimeReferenceImageLibrary_t51AE6E77B281FCE9DF42C7E905A11935708A53F8* L_6 = V_0;
		NullCheck(L_6);
		Enumerator_tF50B6A349DB9B6D1A9E5AD924A439A670F70E1ED L_7;
		L_7 = MutableRuntimeReferenceImageLibrary_GetEnumerator_m12161C68A1C63E5F42F3F69E12DE6D8B24C6502B(L_6, NULL);
		V_1 = L_7;
		goto IL_0063;
	}

IL_0029:
	{
		// foreach (var candidateImage in mutableLibrary)
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_8;
		L_8 = Enumerator_get_Current_mCAFA85FE5DFA6D3AF14AE3E0BD39A478B00D5F03((&V_1), NULL);
		V_2 = L_8;
		// if (candidateImage.guid.Equals(guid))
		Guid_t L_9;
		L_9 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
		V_3 = L_9;
		Guid_t L_10 = ___0_guid;
		bool L_11;
		L_11 = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C((&V_3), L_10, NULL);
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		// referenceImage = candidateImage;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* L_12 = ___1_referenceImage;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_13 = V_2;
		*(XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)L_12 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)L_12)->___m_Name_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)L_12)->___m_Texture_5), (void*)NULL);
		#endif
		// m_ReferenceImages.Add(referenceImage.guid, referenceImage);
		Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* L_14 = __this->___m_ReferenceImages_18;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* L_15 = ___1_referenceImage;
		Guid_t L_16;
		L_16 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE(L_15, NULL);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* L_17 = ___1_referenceImage;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_18 = (*(XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)L_17);
		NullCheck(L_14);
		Dictionary_2_Add_m3388C15527891356A7EECDC797794290F3F8657D(L_14, L_16, L_18, Dictionary_2_Add_m3388C15527891356A7EECDC797794290F3F8657D_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_0063:
	{
		// foreach (var candidateImage in mutableLibrary)
		bool L_19;
		L_19 = Enumerator_MoveNext_mF3DBBFA17313E104979A8A4F7CD5F111C352AF67((&V_1), NULL);
		if (L_19)
		{
			goto IL_0029;
		}
	}

IL_006c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::OnAfterSetSessionRelativeData(UnityEngine.XR.ARFoundation.ARTrackedImage,UnityEngine.XR.ARSubsystems.XRTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_OnAfterSetSessionRelativeData_m4B0BEBB19A6073F8CFF940C974643B3241539FE5 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___0_image, XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___1_sessionRelativeData, const RuntimeMethod* method) 
{
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (FindReferenceImage(sessionRelativeData.sourceImageId, out XRReferenceImage referenceImage))
		Guid_t L_0;
		L_0 = XRTrackedImage_get_sourceImageId_mAAAA675839747EA6AF8A903E461F0D198CFAFDBF_inline((&___1_sessionRelativeData), NULL);
		bool L_1;
		L_1 = ARTrackedImageManager_FindReferenceImage_m7B01D81D360921A7DCDFEAA4DDD7710146371ABD(__this, L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// image.referenceImage = referenceImage;
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_2 = ___0_image;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_3 = V_0;
		NullCheck(L_2);
		ARTrackedImage_set_referenceImage_m1EA6089A5257113AC8141362107AA8CEA58EF38B_inline(L_2, L_3, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::OnTrackablesChanged(System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_OnTrackablesChanged_mCD020C973B99D2842BDCC4723B49DAC2BAD34EF0 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___0_added, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___1_updated, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___2_removed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F83B52A66E5AE7AB6F80F1349AF3A70CC3F0D92);
		s_Il2CppMethodInitialized = true;
	}
	ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (trackedImagesChanged != null)
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_0 = __this->___trackedImagesChanged_17;
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		// using (new ScopedProfiler("OnTrackedImagesChanged"))
		ScopedProfiler__ctor_m652B5689DE1A3C3EF7D12801DA27FA3B40E4412F((&V_0), _stringLiteral6F83B52A66E5AE7AB6F80F1349AF3A70CC3F0D92, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{// begin finally (depth: 1)
				ScopedProfiler_Dispose_m7B646405B4E52CC4677329D3B860BE9C17A9DAC4((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// trackedImagesChanged(
			//     new ARTrackedImagesChangedEventArgs(
			//         added,
			//         updated,
			//         removed));
			Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_1 = __this->___trackedImagesChanged_17;
			List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_2 = ___0_added;
			List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_3 = ___1_updated;
			List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_4 = ___2_removed;
			ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F L_5;
			memset((&L_5), 0, sizeof(L_5));
			ARTrackedImagesChangedEventArgs__ctor_m22F5D20572E4D17270B7CFBA7F0EA9445DAEE8C3((&L_5), L_2, L_3, L_4, /*hidden argument*/NULL);
			NullCheck(L_1);
			Action_1_Invoke_m7F975E253932510963884F11E84E7387808DBA8E_inline(L_1, L_5, NULL);
			goto IL_0037;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::UpdateReferenceImages(UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_UpdateReferenceImages_mFD7E9622A308CF5AB7005736FF1425FD9EDA6EFB (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* ___0_library, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m87585F5A842A0867532FDDE762235689DFCBE37A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (library == null)
		RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* L_0 = ___0_library;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// int count = library.count;
		RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* L_1 = ___0_library;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.XR.ARSubsystems.RuntimeReferenceImageLibrary::get_count() */, L_1);
		V_0 = L_2;
		// for (int i = 0; i < count; ++i)
		V_1 = 0;
		goto IL_002e;
	}

IL_000f:
	{
		// var referenceImage = library[i];
		RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* L_3 = ___0_library;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_5;
		L_5 = RuntimeReferenceImageLibrary_get_Item_m02C9E57C775AEC269FCDAA1F51CDC1142CF50ED7(L_3, L_4, NULL);
		V_2 = L_5;
		// m_ReferenceImages[referenceImage.guid] = referenceImage;
		Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* L_6 = __this->___m_ReferenceImages_18;
		Guid_t L_7;
		L_7 = XRReferenceImage_get_guid_m6BEA9888191B7528B60F98EE03C9DBB2B9B8ADEE((&V_2), NULL);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_8 = V_2;
		NullCheck(L_6);
		Dictionary_2_set_Item_m87585F5A842A0867532FDDE762235689DFCBE37A(L_6, L_7, L_8, Dictionary_2_set_Item_m87585F5A842A0867532FDDE762235689DFCBE37A_RuntimeMethod_var);
		// for (int i = 0; i < count; ++i)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002e:
	{
		// for (int i = 0; i < count; ++i)
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager__ctor_m1F381872541A32AA65A40BDC401754F8C817DB4A (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackableManager_5__ctor_m10BF0C50270ED4A36A140499ADB52D747DE428CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEF87A6EAD65CA0670F181318C58A651321468CAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dictionary<Guid, XRReferenceImage> m_ReferenceImages = new Dictionary<Guid, XRReferenceImage>();
		Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* L_0 = (Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49*)il2cpp_codegen_object_new(Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mEF87A6EAD65CA0670F181318C58A651321468CAF(L_0, Dictionary_2__ctor_mEF87A6EAD65CA0670F181318C58A651321468CAF_RuntimeMethod_var);
		__this->___m_ReferenceImages_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReferenceImages_18), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5_il2cpp_TypeInfo_var);
		ARTrackableManager_5__ctor_m10BF0C50270ED4A36A140499ADB52D747DE428CD(__this, ARTrackableManager_5__ctor_m10BF0C50270ED4A36A140499ADB52D747DE428CD_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
IL2CPP_EXTERN_C void ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshal_pinvoke(const ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F& unmarshaled, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CaddedU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<added>k__BackingField' of type 'ARTrackedImagesChangedEventArgs'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CaddedU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshal_pinvoke_back(const ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshaled_pinvoke& marshaled, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F& unmarshaled)
{
	Exception_t* ___U3CaddedU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<added>k__BackingField' of type 'ARTrackedImagesChangedEventArgs'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CaddedU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
IL2CPP_EXTERN_C void ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshal_pinvoke_cleanup(ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
IL2CPP_EXTERN_C void ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshal_com(const ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F& unmarshaled, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshaled_com& marshaled)
{
	Exception_t* ___U3CaddedU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<added>k__BackingField' of type 'ARTrackedImagesChangedEventArgs'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CaddedU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshal_com_back(const ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshaled_com& marshaled, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F& unmarshaled)
{
	Exception_t* ___U3CaddedU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<added>k__BackingField' of type 'ARTrackedImagesChangedEventArgs'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CaddedU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
IL2CPP_EXTERN_C void ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshal_com_cleanup(ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshaled_com& marshaled)
{
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35 (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> added { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CaddedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F*>(__this + _offset);
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* _returnValue;
	_returnValue = ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::set_added(System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs_set_added_m4E298214A1144403A84E0AE63837F2941528F18F (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> added { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = ___0_value;
		__this->___U3CaddedU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaddedU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ARTrackedImagesChangedEventArgs_set_added_m4E298214A1144403A84E0AE63837F2941528F18F_AdjustorThunk (RuntimeObject* __this, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___0_value, const RuntimeMethod* method)
{
	ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F*>(__this + _offset);
	ARTrackedImagesChangedEventArgs_set_added_m4E298214A1144403A84E0AE63837F2941528F18F_inline(_thisAdjusted, ___0_value, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1 (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> updated { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CupdatedU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F*>(__this + _offset);
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* _returnValue;
	_returnValue = ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::set_updated(System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs_set_updated_mBFE8B2D25F10827CC95CA76E4C52D98EFC1131BE (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> updated { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = ___0_value;
		__this->___U3CupdatedU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CupdatedU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ARTrackedImagesChangedEventArgs_set_updated_mBFE8B2D25F10827CC95CA76E4C52D98EFC1131BE_AdjustorThunk (RuntimeObject* __this, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___0_value, const RuntimeMethod* method)
{
	ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F*>(__this + _offset);
	ARTrackedImagesChangedEventArgs_set_updated_mBFE8B2D25F10827CC95CA76E4C52D98EFC1131BE_inline(_thisAdjusted, ___0_value, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185 (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> removed { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CremovedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F*>(__this + _offset);
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* _returnValue;
	_returnValue = ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::set_removed(System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs_set_removed_mC7F5D25B8E4AD4CBBE6A43D50FAE0456BE3F928B (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> removed { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = ___0_value;
		__this->___U3CremovedU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CremovedU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ARTrackedImagesChangedEventArgs_set_removed_mC7F5D25B8E4AD4CBBE6A43D50FAE0456BE3F928B_AdjustorThunk (RuntimeObject* __this, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___0_value, const RuntimeMethod* method)
{
	ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F*>(__this + _offset);
	ARTrackedImagesChangedEventArgs_set_removed_mC7F5D25B8E4AD4CBBE6A43D50FAE0456BE3F928B_inline(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::.ctor(System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs__ctor_m22F5D20572E4D17270B7CFBA7F0EA9445DAEE8C3 (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___0_added, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___1_updated, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___2_removed, const RuntimeMethod* method) 
{
	{
		// this.added = added;
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = ___0_added;
		ARTrackedImagesChangedEventArgs_set_added_m4E298214A1144403A84E0AE63837F2941528F18F_inline(__this, L_0, NULL);
		// this.updated = updated;
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_1 = ___1_updated;
		ARTrackedImagesChangedEventArgs_set_updated_mBFE8B2D25F10827CC95CA76E4C52D98EFC1131BE_inline(__this, L_1, NULL);
		// this.removed = removed;
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_2 = ___2_removed;
		ARTrackedImagesChangedEventArgs_set_removed_mC7F5D25B8E4AD4CBBE6A43D50FAE0456BE3F928B_inline(__this, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ARTrackedImagesChangedEventArgs__ctor_m22F5D20572E4D17270B7CFBA7F0EA9445DAEE8C3_AdjustorThunk (RuntimeObject* __this, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___0_added, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___1_updated, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___2_removed, const RuntimeMethod* method)
{
	ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F*>(__this + _offset);
	ARTrackedImagesChangedEventArgs__ctor_m22F5D20572E4D17270B7CFBA7F0EA9445DAEE8C3(_thisAdjusted, ___0_added, ___1_updated, ___2_removed, method);
}
// System.Int32 UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackedImagesChangedEventArgs_GetHashCode_mEFBDE822EC1AA6B0E388B86ACE4043D66E23A742 (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public override int GetHashCode() => HashCodeUtil.Combine(
		//     HashCodeUtil.ReferenceHash(added),
		//     HashCodeUtil.ReferenceHash(updated),
		//     HashCodeUtil.ReferenceHash(removed));
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0;
		L_0 = ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline(__this, NULL);
		int32_t L_1;
		L_1 = HashCodeUtil_ReferenceHash_mFDEB5485EAA482CF3FFD30D45BFFAF9D15CACED3(L_0, NULL);
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_2;
		L_2 = ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline(__this, NULL);
		int32_t L_3;
		L_3 = HashCodeUtil_ReferenceHash_mFDEB5485EAA482CF3FFD30D45BFFAF9D15CACED3(L_2, NULL);
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_4;
		L_4 = ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline(__this, NULL);
		int32_t L_5;
		L_5 = HashCodeUtil_ReferenceHash_mFDEB5485EAA482CF3FFD30D45BFFAF9D15CACED3(L_4, NULL);
		int32_t L_6;
		L_6 = HashCodeUtil_Combine_m1FCE36175602D1544BF3DC515483B7B17A9C3356(L_1, L_3, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  int32_t ARTrackedImagesChangedEventArgs_GetHashCode_mEFBDE822EC1AA6B0E388B86ACE4043D66E23A742_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ARTrackedImagesChangedEventArgs_GetHashCode_mEFBDE822EC1AA6B0E388B86ACE4043D66E23A742(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackedImagesChangedEventArgs_Equals_m728C2C2B10BA8C4A625C3004C83730589C86C542 (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is ARTrackedImagesChangedEventArgs))
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((ARTrackedImagesChangedEventArgs)obj);
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = ARTrackedImagesChangedEventArgs_Equals_m25F0396D7AA82B5E488BEA4129EE00F355EA3919(__this, ((*(ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F*)((ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F*)(ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F*)UnBox(L_1, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool ARTrackedImagesChangedEventArgs_Equals_m728C2C2B10BA8C4A625C3004C83730589C86C542_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F*>(__this + _offset);
	bool _returnValue;
	_returnValue = ARTrackedImagesChangedEventArgs_Equals_m728C2C2B10BA8C4A625C3004C83730589C86C542(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARTrackedImagesChangedEventArgs_ToString_m949FF3EE96422AE2776C8FFBBD7CA342E56AE365 (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCC0B89D4918E903BE44EDAEDD3D79F1731A64861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FCD14BBE1F9D7FABE94DC59ADD48AF8C7161334);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	String_t* G_B8_2 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	String_t* G_B7_2 = NULL;
	int32_t G_B9_0 = 0;
	RuntimeObject* G_B9_1 = NULL;
	RuntimeObject* G_B9_2 = NULL;
	String_t* G_B9_3 = NULL;
	{
		// return string.Format("Added: {0}, Updated: {1}, Removed: {2}",
		//     added == null ? 0 : added.Count,
		//     updated == null ? 0 : updated.Count,
		//     removed == null ? 0 : removed.Count);
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0;
		L_0 = ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline(__this, NULL);
		G_B1_0 = _stringLiteral9FCD14BBE1F9D7FABE94DC59ADD48AF8C7161334;
		if (!L_0)
		{
			G_B2_0 = _stringLiteral9FCD14BBE1F9D7FABE94DC59ADD48AF8C7161334;
			goto IL_001a;
		}
	}
	{
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_1;
		L_1 = ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mCC0B89D4918E903BE44EDAEDD3D79F1731A64861_inline(L_1, List_1_get_Count_mCC0B89D4918E903BE44EDAEDD3D79F1731A64861_RuntimeMethod_var);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		int32_t L_3 = G_B3_0;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_5;
		L_5 = ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline(__this, NULL);
		G_B4_0 = L_4;
		G_B4_1 = G_B3_1;
		if (!L_5)
		{
			G_B5_0 = L_4;
			G_B5_1 = G_B3_1;
			goto IL_0035;
		}
	}
	{
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_6;
		L_6 = ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mCC0B89D4918E903BE44EDAEDD3D79F1731A64861_inline(L_6, List_1_get_Count_mCC0B89D4918E903BE44EDAEDD3D79F1731A64861_RuntimeMethod_var);
		G_B6_0 = L_7;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0036;
	}

IL_0035:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0036:
	{
		int32_t L_8 = G_B6_0;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_10;
		L_10 = ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline(__this, NULL);
		G_B7_0 = L_9;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		if (!L_10)
		{
			G_B8_0 = L_9;
			G_B8_1 = G_B6_1;
			G_B8_2 = G_B6_2;
			goto IL_0050;
		}
	}
	{
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_11;
		L_11 = ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline(__this, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_mCC0B89D4918E903BE44EDAEDD3D79F1731A64861_inline(L_11, List_1_get_Count_mCC0B89D4918E903BE44EDAEDD3D79F1731A64861_RuntimeMethod_var);
		G_B9_0 = L_12;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0051;
	}

IL_0050:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0051:
	{
		int32_t L_13 = G_B9_0;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15;
		L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(G_B9_3, G_B9_2, G_B9_1, L_14, NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C  String_t* ARTrackedImagesChangedEventArgs_ToString_m949FF3EE96422AE2776C8FFBBD7CA342E56AE365_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ARTrackedImagesChangedEventArgs_ToString_m949FF3EE96422AE2776C8FFBBD7CA342E56AE365(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::Equals(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackedImagesChangedEventArgs_Equals_m25F0396D7AA82B5E488BEA4129EE00F355EA3919 (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F ___0_other, const RuntimeMethod* method) 
{
	{
		// return
		//     (added == other.added) &&
		//     (updated == other.updated) &&
		//     (removed == other.removed);
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0;
		L_0 = ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline(__this, NULL);
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_1;
		L_1 = ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(List_1_tFA730335FF46512E4245B2F46892CA318B394FAE*)L_0) == ((RuntimeObject*)(List_1_tFA730335FF46512E4245B2F46892CA318B394FAE*)L_1))))
		{
			goto IL_002e;
		}
	}
	{
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_2;
		L_2 = ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline(__this, NULL);
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_3;
		L_3 = ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(List_1_tFA730335FF46512E4245B2F46892CA318B394FAE*)L_2) == ((RuntimeObject*)(List_1_tFA730335FF46512E4245B2F46892CA318B394FAE*)L_3))))
		{
			goto IL_002e;
		}
	}
	{
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_4;
		L_4 = ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline(__this, NULL);
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_5;
		L_5 = ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline((&___0_other), NULL);
		return (bool)((((RuntimeObject*)(List_1_tFA730335FF46512E4245B2F46892CA318B394FAE*)L_4) == ((RuntimeObject*)(List_1_tFA730335FF46512E4245B2F46892CA318B394FAE*)L_5))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ARTrackedImagesChangedEventArgs_Equals_m25F0396D7AA82B5E488BEA4129EE00F355EA3919_AdjustorThunk (RuntimeObject* __this, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F ___0_other, const RuntimeMethod* method)
{
	ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F*>(__this + _offset);
	bool _returnValue;
	_returnValue = ARTrackedImagesChangedEventArgs_Equals_m25F0396D7AA82B5E488BEA4129EE00F355EA3919(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Nullable`1<UnityEngine.XR.ARFoundation.DebugAssert/Message> UnityEngine.XR.ARFoundation.DebugAssert::That(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tDECF3330B9FB53769123CDD8CD0189353648A8A8 DebugAssert_That_m8F3B14DDB5DC184A9E5E5E239499CC6F2F7D1FF7 (bool ___0_condition, const RuntimeMethod* method) 
{
	Nullable_1_tDECF3330B9FB53769123CDD8CD0189353648A8A8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tDECF3330B9FB53769123CDD8CD0189353648A8A8));
		Nullable_1_tDECF3330B9FB53769123CDD8CD0189353648A8A8 L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARFoundation.DebugAssert/Message::WithMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_WithMessage_m6D980DF1AD1190D26E45B88C3600AF4226FDD63C (Message_tBD1539BCA4AE5990D39E1CED497DCBB689CA124F* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Message_WithMessage_m6D980DF1AD1190D26E45B88C3600AF4226FDD63C_AdjustorThunk (RuntimeObject* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	Message_tBD1539BCA4AE5990D39E1CED497DCBB689CA124F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Message_tBD1539BCA4AE5990D39E1CED497DCBB689CA124F*>(__this + _offset);
	Message_WithMessage_m6D980DF1AD1190D26E45B88C3600AF4226FDD63C_inline(_thisAdjusted, ___0_message, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Nullable`1<UnityEngine.XR.ARFoundation.DebugWarn/Message> UnityEngine.XR.ARFoundation.DebugWarn::WhenFalse(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE DebugWarn_WhenFalse_mADECDEF90132C7730D282B7F39723E3C1223C760 (bool ___0_condition, const RuntimeMethod* method) 
{
	Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE));
		Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARFoundation.DebugWarn/Message::WithMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message_WithMessage_m7331F24D7470335EC2EEF8FBA56A8D570ACC8FD3 (Message_tBBCFE5D28A93F5B9DC0527B9D744F73929143408* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning(message);
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Message_WithMessage_m7331F24D7470335EC2EEF8FBA56A8D570ACC8FD3_AdjustorThunk (RuntimeObject* __this, String_t* ___0_message, const RuntimeMethod* method)
{
	Message_tBBCFE5D28A93F5B9DC0527B9D744F73929143408* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Message_tBBCFE5D28A93F5B9DC0527B9D744F73929143408*>(__this + _offset);
	Message_WithMessage_m7331F24D7470335EC2EEF8FBA56A8D570ACC8FD3_inline(_thisAdjusted, ___0_message, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARFoundation.CameraFacingDirection UnityEngine.XR.ARFoundation.CameraModeExtensions::ToCameraFacingDirection(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraModeExtensions_ToCameraFacingDirection_mE8BDA09B71E726FF7E363A71628B7AF7CD44E715 (uint64_t ___0_self, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// var cameraModes = self.Cameras();
		uint64_t L_0 = ___0_self;
		uint64_t L_1;
		L_1 = FeatureExtensions_Cameras_m726A6A7FE0A234C11F8FCF7DD3A4AA94E3ADBC44(L_0, NULL);
		V_0 = L_1;
		uint64_t L_2 = V_0;
		if ((((int64_t)L_2) == ((int64_t)((int64_t)1))))
		{
			goto IL_0013;
		}
	}
	{
		uint64_t L_3 = V_0;
		if ((!(((uint64_t)L_3) == ((uint64_t)((int64_t)2)))))
		{
			goto IL_0015;
		}
	}
	{
		// case Feature.UserFacingCamera: return CameraFacingDirection.User;
		return (int32_t)(2);
	}

IL_0013:
	{
		// case Feature.WorldFacingCamera: return CameraFacingDirection.World;
		return (int32_t)(1);
	}

IL_0015:
	{
		// default: return CameraFacingDirection.None;
		return (int32_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARFoundation.CameraModeExtensions::ToFeature(UnityEngine.XR.ARFoundation.CameraFacingDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CameraModeExtensions_ToFeature_m43AE9A005CAA4089C520C0A622F1006759B38C6C (int32_t ___0_self, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_self;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___0_self;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0010;
	}

IL_000a:
	{
		// case CameraFacingDirection.World: return Feature.WorldFacingCamera;
		return (uint64_t)(((int64_t)1));
	}

IL_000d:
	{
		// case CameraFacingDirection.User: return Feature.UserFacingCamera;
		return (uint64_t)(((int64_t)2));
	}

IL_0010:
	{
		// default: return Feature.None;
		return (uint64_t)(((int64_t)0));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.XR.ARFoundation.HashCodeUtil::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m5CA91217A96CB1506F0A9C83ECC4ED11F4EDF39C (int32_t ___0_hash1, int32_t ___1_hash2, const RuntimeMethod* method) 
{
	{
		// return hash1 * 486187739 + hash2;
		int32_t L_0 = ___0_hash1;
		int32_t L_1 = ___1_hash2;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)486187739))), L_1));
	}
}
// System.Int32 UnityEngine.XR.ARFoundation.HashCodeUtil::ReferenceHash(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_ReferenceHash_mFDEB5485EAA482CF3FFD30D45BFFAF9D15CACED3 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		// public static int ReferenceHash(object obj) => obj != null ? obj.GetHashCode() : 0;
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_obj;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.ARFoundation.HashCodeUtil::Combine(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m1FCE36175602D1544BF3DC515483B7B17A9C3356 (int32_t ___0_hash1, int32_t ___1_hash2, int32_t ___2_hash3, const RuntimeMethod* method) 
{
	{
		// public static int Combine(int hash1, int hash2, int hash3) => Combine(Combine(hash1, hash2), hash3);
		int32_t L_0 = ___0_hash1;
		int32_t L_1 = ___1_hash2;
		int32_t L_2;
		L_2 = HashCodeUtil_Combine_m5CA91217A96CB1506F0A9C83ECC4ED11F4EDF39C(L_0, L_1, NULL);
		int32_t L_3 = ___2_hash3;
		int32_t L_4;
		L_4 = HashCodeUtil_Combine_m5CA91217A96CB1506F0A9C83ECC4ED11F4EDF39C(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Int32 UnityEngine.XR.ARFoundation.HashCodeUtil::Combine(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m4C8CAD427BA28472BA6AA92D62A2D03C5778D4AC (int32_t ___0_hash1, int32_t ___1_hash2, int32_t ___2_hash3, int32_t ___3_hash4, const RuntimeMethod* method) 
{
	{
		// public static int Combine(int hash1, int hash2, int hash3, int hash4) => Combine(Combine(hash1, hash2, hash3), hash4);
		int32_t L_0 = ___0_hash1;
		int32_t L_1 = ___1_hash2;
		int32_t L_2 = ___2_hash3;
		int32_t L_3;
		L_3 = HashCodeUtil_Combine_m1FCE36175602D1544BF3DC515483B7B17A9C3356(L_0, L_1, L_2, NULL);
		int32_t L_4 = ___3_hash4;
		int32_t L_5;
		L_5 = HashCodeUtil_Combine_m5CA91217A96CB1506F0A9C83ECC4ED11F4EDF39C(L_3, L_4, NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARFoundation.LightEstimationExtensions::ToFeature(UnityEngine.XR.ARFoundation.LightEstimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t LightEstimationExtensions_ToFeature_m0D9030625B25390EADA9BA2A0ABB9E1FD135A0B2 (int32_t ___0_self, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// var feature = Feature.None;
		V_0 = ((int64_t)0);
		// if ((self & LightEstimation.AmbientIntensity) != LightEstimation.None)
		int32_t L_0 = ___0_self;
		if (!((int32_t)((int32_t)L_0&1)))
		{
			goto IL_0011;
		}
	}
	{
		// feature |= Feature.LightEstimationAmbientIntensity;
		uint64_t L_1 = V_0;
		V_0 = ((int64_t)((int64_t)L_1|((int64_t)((int32_t)65536))));
	}

IL_0011:
	{
		// if ((self & LightEstimation.AmbientColor) != LightEstimation.None)
		int32_t L_2 = ___0_self;
		if (!((int32_t)((int32_t)L_2&2)))
		{
			goto IL_001f;
		}
	}
	{
		// feature |= Feature.LightEstimationAmbientColor;
		uint64_t L_3 = V_0;
		V_0 = ((int64_t)((int64_t)L_3|((int64_t)((int32_t)131072))));
	}

IL_001f:
	{
		// if ((self & LightEstimation.AmbientSphericalHarmonics) != LightEstimation.None)
		int32_t L_4 = ___0_self;
		if (!((int32_t)((int32_t)L_4&4)))
		{
			goto IL_002d;
		}
	}
	{
		// feature |= Feature.LightEstimationAmbientSphericalHarmonics;
		uint64_t L_5 = V_0;
		V_0 = ((int64_t)((int64_t)L_5|((int64_t)((int32_t)262144))));
	}

IL_002d:
	{
		// if ((self & LightEstimation.MainLightDirection) != LightEstimation.None)
		int32_t L_6 = ___0_self;
		if (!((int32_t)((int32_t)L_6&8)))
		{
			goto IL_003b;
		}
	}
	{
		// feature |= Feature.LightEstimationMainLightDirection;
		uint64_t L_7 = V_0;
		V_0 = ((int64_t)((int64_t)L_7|((int64_t)((int32_t)524288))));
	}

IL_003b:
	{
		// if ((self & LightEstimation.MainLightIntensity) != LightEstimation.None)
		int32_t L_8 = ___0_self;
		if (!((int32_t)((int32_t)L_8&((int32_t)16))))
		{
			goto IL_004a;
		}
	}
	{
		// feature |= Feature.LightEstimationMainLightIntensity;
		uint64_t L_9 = V_0;
		V_0 = ((int64_t)((int64_t)L_9|((int64_t)((int32_t)1048576))));
	}

IL_004a:
	{
		// return feature;
		uint64_t L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.LightEstimationExtensions::ToLightEstimation(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LightEstimationExtensions_ToLightEstimation_m99E4653A9A25AF86F23C159949952A9B607C61A5 (uint64_t ___0_self, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var lightEstimation = LightEstimation.None;
		V_0 = 0;
		// if ((self & Feature.LightEstimationAmbientIntensity) != Feature.None)
		uint64_t L_0 = ___0_self;
		if (!((int64_t)((int64_t)L_0&((int64_t)((int32_t)65536)))))
		{
			goto IL_0010;
		}
	}
	{
		// lightEstimation |= LightEstimation.AmbientIntensity;
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1|1));
	}

IL_0010:
	{
		// if ((self & Feature.LightEstimationAmbientColor) != Feature.None)
		uint64_t L_2 = ___0_self;
		if (!((int64_t)((int64_t)L_2&((int64_t)((int32_t)131072)))))
		{
			goto IL_001e;
		}
	}
	{
		// lightEstimation |= LightEstimation.AmbientColor;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3|2));
	}

IL_001e:
	{
		// if ((self & Feature.LightEstimationAmbientSphericalHarmonics) != Feature.None)
		uint64_t L_4 = ___0_self;
		if (!((int64_t)((int64_t)L_4&((int64_t)((int32_t)262144)))))
		{
			goto IL_002c;
		}
	}
	{
		// lightEstimation |= LightEstimation.AmbientSphericalHarmonics;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5|4));
	}

IL_002c:
	{
		// if ((self & Feature.LightEstimationMainLightDirection) != Feature.None)
		uint64_t L_6 = ___0_self;
		if (!((int64_t)((int64_t)L_6&((int64_t)((int32_t)524288)))))
		{
			goto IL_003a;
		}
	}
	{
		// lightEstimation |= LightEstimation.MainLightDirection;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7|8));
	}

IL_003a:
	{
		// if ((self & Feature.LightEstimationMainLightIntensity) != Feature.None)
		uint64_t L_8 = ___0_self;
		if (!((int64_t)((int64_t)L_8&((int64_t)((int32_t)1048576)))))
		{
			goto IL_0049;
		}
	}
	{
		// lightEstimation |= LightEstimation.MainLightIntensity;
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9|((int32_t)16)));
	}

IL_0049:
	{
		// return lightEstimation;
		int32_t L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.LightEstimationExtensions::ToLightEstimation(UnityEngine.XR.ARSubsystems.LightEstimationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LightEstimationExtensions_ToLightEstimation_m23C075B15237696ED895A71F5DD990F28FD0571E (int32_t ___0_mode, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_mode;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___0_mode;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_000c;
		}
	}
	{
		goto IL_000f;
	}

IL_000a:
	{
		// return LightEstimation.AmbientIntensity
		//      | LightEstimation.AmbientColor;
		return (int32_t)(3);
	}

IL_000c:
	{
		// return LightEstimation.AmbientSphericalHarmonics
		//      | LightEstimation.MainLightIntensity
		//      | LightEstimation.MainLightDirection;
		return (int32_t)(((int32_t)28));
	}

IL_000f:
	{
		// return LightEstimation.None;
		return (int32_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARFoundation.LightEstimationExtensions::ToLightEstimationMode(UnityEngine.XR.ARFoundation.LightEstimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LightEstimationExtensions_ToLightEstimationMode_m73F6397FE2A4534E42DE104592CAD83B178831C5 (int32_t ___0_self, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_self;
		if ((((int32_t)L_0) > ((int32_t)4)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___0_self;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1))) > ((uint32_t)1))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = ___0_self;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_001d;
		}
	}
	{
		goto IL_001f;
	}

IL_0010:
	{
		int32_t L_3 = ___0_self;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_4 = ___0_self;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)16))))
		{
			goto IL_001d;
		}
	}
	{
		goto IL_001f;
	}

IL_001b:
	{
		// return LightEstimationMode.AmbientIntensity;
		return (int32_t)(1);
	}

IL_001d:
	{
		// return LightEstimationMode.EnvironmentalHDR;
		return (int32_t)(2);
	}

IL_001f:
	{
		// return LightEstimationMode.Disabled;
		return (int32_t)(0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.XR.ARFoundation.MeshInfoComparer::Compare(UnityEngine.XR.MeshInfo,UnityEngine.XR.MeshInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshInfoComparer_Compare_m1A84A2B187F6AF909D794B1F6E2084B91CB6BA84 (MeshInfoComparer_tA7DD60B18BD0A658E3C6C6CED1A76C07DC5323C4* __this, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA ___0_infoA, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA ___1_infoB, const RuntimeMethod* method) 
{
	{
		// if (infoA.ChangeState < infoB.ChangeState)
		int32_t L_0;
		L_0 = MeshInfo_get_ChangeState_mF366492B8EF4A9FC8F677E01A6BA4C6C75D3BF68_inline((&___0_infoA), NULL);
		int32_t L_1;
		L_1 = MeshInfo_get_ChangeState_mF366492B8EF4A9FC8F677E01A6BA4C6C75D3BF68_inline((&___1_infoB), NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0012:
	{
		// else if (infoB.ChangeState < infoA.ChangeState)
		int32_t L_2;
		L_2 = MeshInfo_get_ChangeState_mF366492B8EF4A9FC8F677E01A6BA4C6C75D3BF68_inline((&___1_infoB), NULL);
		int32_t L_3;
		L_3 = MeshInfo_get_ChangeState_mF366492B8EF4A9FC8F677E01A6BA4C6C75D3BF68_inline((&___0_infoA), NULL);
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0024:
	{
		// return (infoA.PriorityHint - infoB.PriorityHint);
		int32_t L_4;
		L_4 = MeshInfo_get_PriorityHint_mDBD3A096EC571EAAFB1E6CB93F4F309BD70F9231_inline((&___0_infoA), NULL);
		int32_t L_5;
		L_5 = MeshInfo_get_PriorityHint_mDBD3A096EC571EAAFB1E6CB93F4F309BD70F9231_inline((&___1_infoB), NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
	}
}
// System.Void UnityEngine.XR.ARFoundation.MeshInfoComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshInfoComparer__ctor_m3CA4B312F3F01D87ED687B402A1B2A6E99E21054 (MeshInfoComparer_tA7DD60B18BD0A658E3C6C6CED1A76C07DC5323C4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARFoundation.MeshQueue::EnqueueUnique(UnityEngine.XR.MeshInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshQueue_EnqueueUnique_m0A135283E10EC5C7EB0BABD7F828838309F76DCF (MeshQueue_t26B4E176CCC12C4B59FB67D25E0926EA697E4FC8* __this, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA ___0_meshInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m0D79EAECE46ED7F69840100B63E7DE7D2EE4BFEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_MeshSet.Contains(meshInfo.MeshId))
		HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* L_0 = __this->___m_MeshSet_1;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_1;
		L_1 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline((&___0_meshInfo), NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_m0D79EAECE46ED7F69840100B63E7DE7D2EE4BFEE(L_0, L_1, HashSet_1_Contains_m0D79EAECE46ED7F69840100B63E7DE7D2EE4BFEE_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// UpdateExisting(meshInfo);
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA L_3 = ___0_meshInfo;
		MeshQueue_UpdateExisting_m0BF022171FB9EC99619552D30C85BA95B8301E60(__this, L_3, NULL);
		return;
	}

IL_001c:
	{
		// InsertNew(meshInfo);
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA L_4 = ___0_meshInfo;
		MeshQueue_InsertNew_m9FCE96265CD46761953063618A3AC85B54DFCC9F(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.MeshQueue::TryDequeue(System.Collections.Generic.IReadOnlyDictionary`2<UnityEngine.XR.MeshId,UnityEngine.XR.MeshInfo>,UnityEngine.XR.MeshInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshQueue_TryDequeue_m4BEA797ABC13CC2A5BC105CBE82492EE213057BB (MeshQueue_t26B4E176CCC12C4B59FB67D25E0926EA697E4FC8* __this, RuntimeObject* ___0_generating, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* ___1_meshInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_mFC2E552EC6875113775FF898EC084EA08CABC5A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_tC8E316A4186EBBD2EB098E161B0EBE58EA0FA0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mCBC998E1A90A850FD60CA51945C9BDAD153902FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFDF935486215902087CEC650E2D6323DFEA062FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7004A506FB124A036B306D77A6C7A4F6721A628E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = m_Queue.Count - 1; i >= 0; --i)
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_0 = __this->___m_Queue_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mFDF935486215902087CEC650E2D6323DFEA062FC_inline(L_0, List_1_get_Count_mFDF935486215902087CEC650E2D6323DFEA062FC_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0054;
	}

IL_0010:
	{
		// meshInfo = m_Queue[i];
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* L_2 = ___1_meshInfo;
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_3 = __this->___m_Queue_0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA L_5;
		L_5 = List_1_get_Item_m7004A506FB124A036B306D77A6C7A4F6721A628E(L_3, L_4, List_1_get_Item_m7004A506FB124A036B306D77A6C7A4F6721A628E_RuntimeMethod_var);
		*(MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA*)L_2 = L_5;
		// if (!generating.ContainsKey(meshInfo.MeshId))
		RuntimeObject* L_6 = ___0_generating;
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* L_7 = ___1_meshInfo;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_8;
		L_8 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline(L_7, NULL);
		NullCheck(L_6);
		bool L_9;
		L_9 = InterfaceFuncInvoker1< bool, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<UnityEngine.XR.MeshId,UnityEngine.XR.MeshInfo>::ContainsKey(TKey) */, IReadOnlyDictionary_2_tC8E316A4186EBBD2EB098E161B0EBE58EA0FA0A4_il2cpp_TypeInfo_var, L_6, L_8);
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		// m_Queue.RemoveAt(i);
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_10 = __this->___m_Queue_0;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		List_1_RemoveAt_mCBC998E1A90A850FD60CA51945C9BDAD153902FE(L_10, L_11, List_1_RemoveAt_mCBC998E1A90A850FD60CA51945C9BDAD153902FE_RuntimeMethod_var);
		// m_MeshSet.Remove(meshInfo.MeshId);
		HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* L_12 = __this->___m_MeshSet_1;
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* L_13 = ___1_meshInfo;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_14;
		L_14 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline(L_13, NULL);
		NullCheck(L_12);
		bool L_15;
		L_15 = HashSet_1_Remove_mFC2E552EC6875113775FF898EC084EA08CABC5A1(L_12, L_14, HashSet_1_Remove_mFC2E552EC6875113775FF898EC084EA08CABC5A1_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_0050:
	{
		// for (int i = m_Queue.Count - 1; i >= 0; --i)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0054:
	{
		// for (int i = m_Queue.Count - 1; i >= 0; --i)
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// meshInfo = default;
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* L_18 = ___1_meshInfo;
		il2cpp_codegen_initobj(L_18, sizeof(MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA));
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.MeshQueue::Remove(UnityEngine.XR.MeshId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshQueue_Remove_mDF7E634D6EED310E75A70E9DACB7FDC968AE0837 (MeshQueue_t26B4E176CCC12C4B59FB67D25E0926EA697E4FC8* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___0_meshId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_mFC2E552EC6875113775FF898EC084EA08CABC5A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mCBC998E1A90A850FD60CA51945C9BDAD153902FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFDF935486215902087CEC650E2D6323DFEA062FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7004A506FB124A036B306D77A6C7A4F6721A628E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA V_1;
	memset((&V_1), 0, sizeof(V_1));
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!m_MeshSet.Remove(meshId))
		HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* L_0 = __this->___m_MeshSet_1;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_1 = ___0_meshId;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Remove_mFC2E552EC6875113775FF898EC084EA08CABC5A1(L_0, L_1, HashSet_1_Remove_mFC2E552EC6875113775FF898EC084EA08CABC5A1_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// for (int i = 0; i < m_Queue.Count; ++i)
		V_0 = 0;
		goto IL_0045;
	}

IL_0014:
	{
		// if (m_Queue[i].MeshId.Equals(meshId))
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_3 = __this->___m_Queue_0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA L_5;
		L_5 = List_1_get_Item_m7004A506FB124A036B306D77A6C7A4F6721A628E(L_3, L_4, List_1_get_Item_m7004A506FB124A036B306D77A6C7A4F6721A628E_RuntimeMethod_var);
		V_1 = L_5;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_6;
		L_6 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline((&V_1), NULL);
		V_2 = L_6;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_7 = ___0_meshId;
		bool L_8;
		L_8 = MeshId_Equals_m3D0AC754FDC327819342797C38CF20C5F3D25818((&V_2), L_7, NULL);
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		// m_Queue.RemoveAt(i);
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_9 = __this->___m_Queue_0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		List_1_RemoveAt_mCBC998E1A90A850FD60CA51945C9BDAD153902FE(L_9, L_10, List_1_RemoveAt_mCBC998E1A90A850FD60CA51945C9BDAD153902FE_RuntimeMethod_var);
		// break;
		goto IL_0053;
	}

IL_0041:
	{
		// for (int i = 0; i < m_Queue.Count; ++i)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0045:
	{
		// for (int i = 0; i < m_Queue.Count; ++i)
		int32_t L_12 = V_0;
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_13 = __this->___m_Queue_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mFDF935486215902087CEC650E2D6323DFEA062FC_inline(L_13, List_1_get_Count_mFDF935486215902087CEC650E2D6323DFEA062FC_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0014;
		}
	}

IL_0053:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.XR.ARFoundation.MeshQueue::InsertNew(UnityEngine.XR.MeshInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshQueue_InsertNew_m9FCE96265CD46761953063618A3AC85B54DFCC9F (MeshQueue_t26B4E176CCC12C4B59FB67D25E0926EA697E4FC8* __this, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA ___0_meshInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mE900C9FCB26E90C930D45CB9B1F65869D4ED4AC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_BinarySearch_m3E84EA1AA2BED6ADD38E009614AFB68F711690C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m9E7C090D656D727A3B94A5D61857719BAB821CE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = m_Queue.BinarySearch(meshInfo, s_MeshInfoComparer);
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_0 = __this->___m_Queue_0;
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA L_1 = ___0_meshInfo;
		MeshInfoComparer_tA7DD60B18BD0A658E3C6C6CED1A76C07DC5323C4* L_2 = __this->___s_MeshInfoComparer_2;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = List_1_BinarySearch_m3E84EA1AA2BED6ADD38E009614AFB68F711690C5(L_0, L_1, L_2, List_1_BinarySearch_m3E84EA1AA2BED6ADD38E009614AFB68F711690C5_RuntimeMethod_var);
		V_0 = L_3;
		// if (index < 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		// index = ~index;
		int32_t L_5 = V_0;
		V_0 = ((~L_5));
	}

IL_001a:
	{
		// m_Queue.Insert(index, meshInfo);
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_6 = __this->___m_Queue_0;
		int32_t L_7 = V_0;
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA L_8 = ___0_meshInfo;
		NullCheck(L_6);
		List_1_Insert_m9E7C090D656D727A3B94A5D61857719BAB821CE4(L_6, L_7, L_8, List_1_Insert_m9E7C090D656D727A3B94A5D61857719BAB821CE4_RuntimeMethod_var);
		// m_MeshSet.Add(meshInfo.MeshId);
		HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* L_9 = __this->___m_MeshSet_1;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_10;
		L_10 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline((&___0_meshInfo), NULL);
		NullCheck(L_9);
		bool L_11;
		L_11 = HashSet_1_Add_mE900C9FCB26E90C930D45CB9B1F65869D4ED4AC0(L_9, L_10, HashSet_1_Add_mE900C9FCB26E90C930D45CB9B1F65869D4ED4AC0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.MeshQueue::UpdateExisting(UnityEngine.XR.MeshInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshQueue_UpdateExisting_m0BF022171FB9EC99619552D30C85BA95B8301E60 (MeshQueue_t26B4E176CCC12C4B59FB67D25E0926EA697E4FC8* __this, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA ___0_meshInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m2BDAD1026A4B3AAA3772EC4395B848261A6DB76C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFDF935486215902087CEC650E2D6323DFEA062FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7004A506FB124A036B306D77A6C7A4F6721A628E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m1E18CE6DDF5DAE6A81CCFFAF52221377C5C72DA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA V_1;
	memset((&V_1), 0, sizeof(V_1));
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// for (int i = 0; i < m_Queue.Count; ++i)
		V_0 = 0;
		goto IL_006a;
	}

IL_0004:
	{
		// var existing = m_Queue[i];
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_0 = __this->___m_Queue_0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA L_2;
		L_2 = List_1_get_Item_m7004A506FB124A036B306D77A6C7A4F6721A628E(L_0, L_1, List_1_get_Item_m7004A506FB124A036B306D77A6C7A4F6721A628E_RuntimeMethod_var);
		V_1 = L_2;
		// if (existing.MeshId.Equals(meshInfo.MeshId))
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_3;
		L_3 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline((&V_1), NULL);
		V_2 = L_3;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_4;
		L_4 = MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline((&___0_meshInfo), NULL);
		bool L_5;
		L_5 = MeshId_Equals_m3D0AC754FDC327819342797C38CF20C5F3D25818((&V_2), L_4, NULL);
		if (!L_5)
		{
			goto IL_0066;
		}
	}
	{
		// if (existing.PriorityHint != meshInfo.PriorityHint)
		int32_t L_6;
		L_6 = MeshInfo_get_PriorityHint_mDBD3A096EC571EAAFB1E6CB93F4F309BD70F9231_inline((&V_1), NULL);
		int32_t L_7;
		L_7 = MeshInfo_get_PriorityHint_mDBD3A096EC571EAAFB1E6CB93F4F309BD70F9231_inline((&___0_meshInfo), NULL);
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0078;
		}
	}
	{
		// existing.PriorityHint = meshInfo.PriorityHint;
		int32_t L_8;
		L_8 = MeshInfo_get_PriorityHint_mDBD3A096EC571EAAFB1E6CB93F4F309BD70F9231_inline((&___0_meshInfo), NULL);
		MeshInfo_set_PriorityHint_mA0F4BB9543846770A082A85C721E16D16F664615_inline((&V_1), L_8, NULL);
		// m_Queue[i] = existing;
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_9 = __this->___m_Queue_0;
		int32_t L_10 = V_0;
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA L_11 = V_1;
		NullCheck(L_9);
		List_1_set_Item_m1E18CE6DDF5DAE6A81CCFFAF52221377C5C72DA8(L_9, L_10, L_11, List_1_set_Item_m1E18CE6DDF5DAE6A81CCFFAF52221377C5C72DA8_RuntimeMethod_var);
		// m_Queue.Sort(s_MeshInfoComparer);
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_12 = __this->___m_Queue_0;
		MeshInfoComparer_tA7DD60B18BD0A658E3C6C6CED1A76C07DC5323C4* L_13 = __this->___s_MeshInfoComparer_2;
		NullCheck(L_12);
		List_1_Sort_m2BDAD1026A4B3AAA3772EC4395B848261A6DB76C(L_12, L_13, List_1_Sort_m2BDAD1026A4B3AAA3772EC4395B848261A6DB76C_RuntimeMethod_var);
		// break;
		return;
	}

IL_0066:
	{
		// for (int i = 0; i < m_Queue.Count; ++i)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_006a:
	{
		// for (int i = 0; i < m_Queue.Count; ++i)
		int32_t L_15 = V_0;
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_16 = __this->___m_Queue_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mFDF935486215902087CEC650E2D6323DFEA062FC_inline(L_16, List_1_get_Count_mFDF935486215902087CEC650E2D6323DFEA062FC_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.MeshQueue::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshQueue_Clear_mB28172C35E681281DC31ADBED3023D10DB288057 (MeshQueue_t26B4E176CCC12C4B59FB67D25E0926EA697E4FC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m77FC5DB22FE5492542CD8124700F1366FA7781DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mA99B8E3DD8C23511060403982181C0FE607DFE6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Queue.Clear();
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_0 = __this->___m_Queue_0;
		NullCheck(L_0);
		List_1_Clear_mA99B8E3DD8C23511060403982181C0FE607DFE6F_inline(L_0, List_1_Clear_mA99B8E3DD8C23511060403982181C0FE607DFE6F_RuntimeMethod_var);
		// m_MeshSet.Clear();
		HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* L_1 = __this->___m_MeshSet_1;
		NullCheck(L_1);
		HashSet_1_Clear_m77FC5DB22FE5492542CD8124700F1366FA7781DB(L_1, HashSet_1_Clear_m77FC5DB22FE5492542CD8124700F1366FA7781DB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.MeshQueue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshQueue__ctor_m5D8C8E3CC97C1A6590AA3BF954829CE44F5407C5 (MeshQueue_t26B4E176CCC12C4B59FB67D25E0926EA697E4FC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m4321A942505EDE6B0C4A1E0C0F4AFBA5D04729B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEE09D0BD215A518344AF2985829C519B609B7B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshInfoComparer_tA7DD60B18BD0A658E3C6C6CED1A76C07DC5323C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<MeshInfo> m_Queue = new List<MeshInfo>();
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_0 = (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17*)il2cpp_codegen_object_new(List_1_tEE09D0BD215A518344AF2985829C519B609B7B17_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23(L_0, List_1__ctor_mA2DD2929DEFD0FB15C436C1FEC952D5B092CBA23_RuntimeMethod_var);
		__this->___m_Queue_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Queue_0), (void*)L_0);
		// HashSet<LegacyMeshId> m_MeshSet = new HashSet<LegacyMeshId>();
		HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB* L_1 = (HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB*)il2cpp_codegen_object_new(HashSet_1_tA5C14BCEF5F693F5FE58BE82E38E014A8BB366CB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_m4321A942505EDE6B0C4A1E0C0F4AFBA5D04729B9(L_1, HashSet_1__ctor_m4321A942505EDE6B0C4A1E0C0F4AFBA5D04729B9_RuntimeMethod_var);
		__this->___m_MeshSet_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MeshSet_1), (void*)L_1);
		// MeshInfoComparer s_MeshInfoComparer = new MeshInfoComparer();
		MeshInfoComparer_tA7DD60B18BD0A658E3C6C6CED1A76C07DC5323C4* L_2 = (MeshInfoComparer_tA7DD60B18BD0A658E3C6C6CED1A76C07DC5323C4*)il2cpp_codegen_object_new(MeshInfoComparer_tA7DD60B18BD0A658E3C6C6CED1A76C07DC5323C4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MeshInfoComparer__ctor_m3CA4B312F3F01D87ED687B402A1B2A6E99E21054(L_2, NULL);
		__this->___s_MeshInfoComparer_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___s_MeshInfoComparer_2), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARFoundation.TrackingModeExtensions::ToFeature(UnityEngine.XR.ARFoundation.TrackingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TrackingModeExtensions_ToFeature_m683FFDDC9DDC2DA86001B1CCF0C12D8961639041 (int32_t ___0_self, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_self;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___0_self;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0010;
	}

IL_000a:
	{
		// case TrackingMode.RotationOnly: return Feature.RotationOnly;
		return (uint64_t)(((int64_t)4));
	}

IL_000d:
	{
		// case TrackingMode.PositionAndRotation: return Feature.PositionAndRotation;
		return (uint64_t)(((int64_t)8));
	}

IL_0010:
	{
		// default: return Feature.None;
		return (uint64_t)(((int64_t)0));
	}
}
// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.TrackingModeExtensions::ToTrackingMode(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackingModeExtensions_ToTrackingMode_m4896FC7865A6619FB20F1028CF585126F4B3D6A2 (uint64_t ___0_self, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// switch(self.TrackingModes())
		uint64_t L_0 = ___0_self;
		uint64_t L_1;
		L_1 = FeatureExtensions_TrackingModes_m98FFB5EE942CA939B0F4F06A425673A4081287B7(L_0, NULL);
		V_0 = L_1;
		uint64_t L_2 = V_0;
		if ((((int64_t)L_2) == ((int64_t)((int64_t)4))))
		{
			goto IL_0013;
		}
	}
	{
		uint64_t L_3 = V_0;
		if ((((int64_t)L_3) == ((int64_t)((int64_t)8))))
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0017;
	}

IL_0013:
	{
		// case Feature.RotationOnly: return TrackingMode.RotationOnly;
		return (int32_t)(1);
	}

IL_0015:
	{
		// case Feature.PositionAndRotation: return TrackingMode.PositionAndRotation;
		return (int32_t)(2);
	}

IL_0017:
	{
		// default: return TrackingMode.DontCare;
		return (int32_t)(0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Ray UnityEngine.XR.ARFoundation.TransformExtensions::InverseTransformRay(UnityEngine.Transform,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 TransformExtensions_InverseTransformRay_m3417C7D5AFC5CC8B2ADC0F6DCA4BFF3C7E539B3C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___1_ray, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException(nameof(transform));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7DCC6569C2F6EC43635C15A4446068D2FE1897D5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformExtensions_InverseTransformRay_m3417C7D5AFC5CC8B2ADC0F6DCA4BFF3C7E539B3C_RuntimeMethod_var)));
	}

IL_0014:
	{
		// return new Ray(
		//     transform.InverseTransformPoint(ray.origin),
		//     transform.InverseTransformDirection(ray.direction));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&___1_ray), NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_3, L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___0_transform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&___1_ray), NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_6, L_7, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_9), L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.TransformExtensions::TransformPose(UnityEngine.Transform,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TransformExtensions_TransformPose_m657A2F269CFE7ABD9E77029577861EA464E2364C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, const RuntimeMethod* method) 
{
	{
		// return pose.GetTransformedBy(transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_GetTransformedBy_mB4C9FECEC5701B761A0E8CB2A8BC76D8E2FFDFCF((&___1_pose), L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.TransformExtensions::InverseTransformPose(UnityEngine.Transform,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TransformExtensions_InverseTransformPose_m3705FF36F67498108EBA26FA116491ED4ECBB1DE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (transform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException(nameof(transform));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7DCC6569C2F6EC43635C15A4446068D2FE1897D5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TransformExtensions_InverseTransformPose_m3705FF36F67498108EBA26FA116491ED4ECBB1DE_RuntimeMethod_var)));
	}

IL_0014:
	{
		// return new Pose
		// {
		//     position = transform.InverseTransformPoint(pose.position),
		//     rotation = Quaternion.Inverse(transform.rotation) * pose.rotation
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_transform;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = ___1_pose;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4.___position_0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_3, L_5, NULL);
		(&V_0)->___position_0 = L_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___0_transform;
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(L_8, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10 = ___1_pose;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_9, L_11, NULL);
		(&V_0)->___rotation_1 = L_12;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13 = V_0;
		return L_13;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => s_State;
		int32_t L_0 = ((ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var))->___s_State_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsInstall_m3EE93DA405D5C59B746B621FC30D4CC182BB1E53_inline (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = __this->___U3CsupportsInstallU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ARSession_get_attemptUpdate_m0EAA239D17F9E81EA7B91E7F9264F25D3A21053A_inline (ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AttemptUpdate;
		bool L_0 = __this->___m_AttemptUpdate_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARSessionOrigin_set_trackablesParent_m84EC22E19380EDC8B0902DA77CB760D827EB342F_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Transform trackablesParent { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->___U3CtrackablesParentU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtrackablesParentU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARSessionOrigin_get_trackablesParent_mF42C34E0B09B58DEE52CF3CC13563BE541C14F9F_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	{
		// public Transform trackablesParent { get; private set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CtrackablesParentU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ARSessionOrigin_get_camera_m5D908BC3C882C5BA0E21A07E4BB5093AF0AD5830_inline (ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Camera; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_Camera_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackedPoseDriver_get_UseRelativeTransform_m364C0EC379CBD6898EA09712A3245B3D9E69114B_inline (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_UseRelativeTransform; }
		bool L_0 = __this->___m_UseRelativeTransform_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TrackedPoseDriver_get_originPose_mBE222A120504DAAF230CE41A3A8BAB847FE28D08_inline (TrackedPoseDriver_t5A2DEE7957ED76932DB7460383BF09AB1CB4CCCD* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OriginPose; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_OriginPose_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSessionStateChangedEventArgs_get_state_mC0A6FB4AF08C068BFD5D9730F60215BE662A950B_inline (ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* __this, const RuntimeMethod* method) 
{
	{
		// public ARSessionState state { get; private set; }
		int32_t L_0 = __this->___U3CstateU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARSessionStateChangedEventArgs_set_state_mBEF6AA8214783D771EDF618B3E863D6DBC1FE8A7_inline (ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public ARSessionState state { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CstateU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ARTextureInfo_get_descriptor_m42C04EE9D6B420EFFC6002A044CA8B2FB6E27FE2_inline (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Descriptor; }
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_0 = __this->___m_Descriptor_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ARTextureInfo_get_texture_m9A17329F68E159CC5C924956D4258BD26990C40A_inline (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Texture; }
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___m_Texture_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Dimension;
		int32_t L_0 = __this->___m_Dimension_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE DebugWarn_WhenFalse_mADECDEF90132C7730D282B7F39723E3C1223C760_inline (bool ___0_condition, const RuntimeMethod* method) 
{
	Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE));
		Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Message_WithMessage_m7331F24D7470335EC2EEF8FBA56A8D570ACC8FD3_inline (Message_tBBCFE5D28A93F5B9DC0527B9D744F73929143408* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning(message);
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_0, NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRTextureDescriptor_get_nativeTexture_m1E27C0E1DC11DDC6139178509EE91B8DF54DBAD4_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_NativeTexture; }
		intptr_t L_0 = __this->___m_NativeTexture_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_width_m570472F03994BC63F21751414105A2E0C112DBF2_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Width; }
		int32_t L_0 = __this->___m_Width_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_height_mC0B37241C24FA883E2594B9411080EDF654E3E01_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Height; }
		int32_t L_0 = __this->___m_Height_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_depth_m5885EBF7D767C918B1483D63D1B11EE60D939E7D_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Depth;
		int32_t L_0 = __this->___m_Depth_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_format_mA745AA87046D4FE4846C11B8285B980FF6DDDD1A_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Format; }
		int32_t L_0 = __this->___m_Format_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_mipmapCount_m4B2ED0D6EBE06AD86E356203B4AB5DE3807C1D31_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_MipmapCount; }
		int32_t L_0 = __this->___m_MipmapCount_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ARTrackablesParentTransformChangedEventArgs_get_sessionOrigin_m07C2F7C6A286B6AF4739C6618DA497C251325E24_inline (ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* __this, const RuntimeMethod* method) 
{
	{
		// public ARSessionOrigin sessionOrigin { get; }
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = __this->___U3CsessionOriginU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ARTrackablesParentTransformChangedEventArgs_get_trackablesParent_m2B845554A63A5CB63A6FBBB19C8C96F8E0F653D6_inline (ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A* __this, const RuntimeMethod* method) 
{
	{
		// public Transform trackablesParent { get; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CtrackablesParentU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRTrackedImage_get_size_m57847CD4307A9A560D358981700B8722D8A02438_inline (XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 size => m_Size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_Size_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRTrackedImage_get_nativePtr_m2ECEAC93477008FB415D4A388ACAA4A9DB6E1892_inline (XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->___m_NativePtr_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* XRImageTrackingSubsystem_get_imageLibrary_mE8D15BAA0C750529680799A27597C4B5F61EBBC8_inline (XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ImageLibrary;
		RuntimeReferenceImageLibrary_tBAE57A7BC9A82E302D6DC78EB9D90EC36F5995BF* L_0 = __this->___m_ImageLibrary_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemWithProvider_get_running_m6BF31FC3BDA38C56C0F60FEA37767A4151B22C44_inline (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrunningU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRImageTrackingSubsystemDescriptor_get_supportsMovingImages_m478CCC3CDCB620998AA0A2D7F27A72596BB9504E_inline (XRImageTrackingSubsystemDescriptor_t6D3883C9B0005F09FE2ECE410BF3A8E64A4A5CBE* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsMovingImages { get; }
		bool L_0 = __this->___U3CsupportsMovingImagesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t XRTrackedImage_get_sourceImageId_mAAAA675839747EA6AF8A903E461F0D198CFAFDBF_inline (XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD* __this, const RuntimeMethod* method) 
{
	{
		// public Guid sourceImageId => m_SourceImageId;
		Guid_t L_0 = __this->___m_SourceImageId_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARTrackedImage_set_referenceImage_m1EA6089A5257113AC8141362107AA8CEA58EF38B_inline (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* __this, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___0_value, const RuntimeMethod* method) 
{
	{
		// public XRReferenceImage referenceImage { get; internal set; }
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_0 = ___0_value;
		__this->___U3CreferenceImageU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CreferenceImageU3Ek__BackingField_7))->___m_Name_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CreferenceImageU3Ek__BackingField_7))->___m_Texture_5), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> added { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CaddedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs_set_added_m4E298214A1144403A84E0AE63837F2941528F18F_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> added { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = ___0_value;
		__this->___U3CaddedU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaddedU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> updated { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CupdatedU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs_set_updated_mBFE8B2D25F10827CC95CA76E4C52D98EFC1131BE_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> updated { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = ___0_value;
		__this->___U3CupdatedU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CupdatedU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> removed { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CremovedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs_set_removed_mC7F5D25B8E4AD4CBBE6A43D50FAE0456BE3F928B_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> removed { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = ___0_value;
		__this->___U3CremovedU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CremovedU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Message_WithMessage_m6D980DF1AD1190D26E45B88C3600AF4226FDD63C_inline (Message_tBD1539BCA4AE5990D39E1CED497DCBB689CA124F* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshInfo_get_ChangeState_mF366492B8EF4A9FC8F677E01A6BA4C6C75D3BF68_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CChangeStateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshInfo_get_PriorityHint_mDBD3A096EC571EAAFB1E6CB93F4F309BD70F9231_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPriorityHintU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC MeshInfo_get_MeshId_m96D69F5BA60A596D7C9FAAF0931940452E3D8846_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, const RuntimeMethod* method) 
{
	{
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_0 = __this->___U3CMeshIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshInfo_set_PriorityHint_mA0F4BB9543846770A082A85C721E16D16F664615_inline (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CPriorityHintU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Promise_1_get_result_m4634736D415E9E466CD5D076771BDD5D37958382_gshared_inline (Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB* __this, const RuntimeMethod* method) 
{
	{
		// public T result { get; private set; }
		int32_t L_0 = (int32_t)__this->___U3CresultU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_subsystemDescriptor_mB4052808D703DF75CA2D74A5801B59172E3F80C7_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CsubsystemDescriptorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m26A60EE2F51E3FC76A4A0F7DB375D2EF0AD89421_gshared_inline (Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* __this, ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ARTrackablesParentTransformChangedEventArgs_tEF673BCB9382697300AE683ED29F0BF96E4A9C8A, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC189CF9EC338F1F421B380788A6685D9041E5891_gshared_inline (Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Message_tBBCFE5D28A93F5B9DC0527B9D744F73929143408 Nullable_1_GetValueOrDefault_m61C6F9C75B9E5A959A8CAB418B2B65F2774FF7CF_gshared_inline (Nullable_1_t0FDF1AE96AAA72E62D8F54DD9A50F81E767B4AFE* __this, const RuntimeMethod* method) 
{
	{
		Message_tBBCFE5D28A93F5B9DC0527B9D744F73929143408 L_0 = (Message_tBBCFE5D28A93F5B9DC0527B9D744F73929143408)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ARTrackable_2_get_sessionRelativeData_m9A72C2EBC2E33C261C8496A74D077912342BDF20_gshared_inline (ARTrackable_2_t3FCE71296784BB45D99340B5EAD5E6F7740DFA47* __this, const RuntimeMethod* method) 
{
	{
		// protected TSessionRelativeData sessionRelativeData { get; private set; }
		XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD L_0 = (XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD)__this->___U3CsessionRelativeDataU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline (SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55* __this, const RuntimeMethod* method) 
{
	{
		// public TSubsystem subsystem { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CsubsystemU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m7F975E253932510963884F11E84E7387808DBA8E_gshared_inline (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* __this, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFDF935486215902087CEC650E2D6323DFEA062FC_gshared_inline (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mA99B8E3DD8C23511060403982181C0FE607DFE6F_gshared_inline (List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030* L_3 = (MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rhs;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		bool L_3;
		L_3 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_a;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_b;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_a;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_b;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___0_dot;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
