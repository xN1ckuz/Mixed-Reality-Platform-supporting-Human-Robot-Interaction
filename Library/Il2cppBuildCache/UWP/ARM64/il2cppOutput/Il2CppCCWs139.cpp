#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Serialization.JsonProperty>
struct Dictionary_2_t7ADF0977437EEF3B033402A3870614FBF42A31E6;
// Newtonsoft.Json.IArrayPool`1<System.Char>
struct IArrayPool_1_t33191685B2C03308FF830A5D322D06B7C530F102;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_tC2FE0CCB1735C5C816DA50BFA741D6CC100BA869;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.JsonProperty>
struct IList_1_tBD6F4A82E5E96D8D6778A1E4C5FA599E2713EAF0;
// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler>
struct List_1_t4ACD1DD41E60CC6A1D6F597706710F112BB37C92;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t6DACBE605004C53E8318856EB2DE9594F643737D;
// System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.JsonProperty>
struct List_1_t1ACA73DA08F692B585FC58BC857EF79E6B12BC8B;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.KeyDownEvent>
struct ObjectPool_1_t3D63FBEB271DB47DEDEA73B4059751D3ECD87EAA;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.KeyUpEvent>
struct ObjectPool_1_t956FF0B2B6601BFD7966788CE94E02557B7A38B3;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// Newtonsoft.Json.Utilities.Base64Encoder
struct Base64Encoder_t116CFC4CA26BB1B1DC2C3DE3BB4DAD22CD39BC78;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t001D97000AA0178942D19FC52942472140472E5E;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.UIElements.IEventHandler
struct IEventHandler_tF2F9D9635A3932E24843C5F557F6080A2C9F7F95;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_tF1E8AAA822A4BC884BC20CAB4B84F5826BBE282C;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527;
// Newtonsoft.Json.Linq.JToken
struct JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5;
// Newtonsoft.Json.Linq.JValue
struct JValue_tAC32114DAAD0302C91FE726A0075D16F75250E96;
// Newtonsoft.Json.JsonNameTable
struct JsonNameTable_tCFEAB3ABD51FD3735D5FE2A4C8899C474E63F8EF;
// System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899;
// UnityEngine.UIElements.PropagationPaths
struct PropagationPaths_tB85C101114BB2AA54407B8F7768B403121914E99;
// System.String
struct String_t;
// System.Security.Cryptography.TailStream
struct TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Security.Cryptography.TripleDES
struct TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89;
// System.Collections.ListDictionaryInternal/DictionaryNode
struct DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C;
// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
struct PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
struct IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4;
struct IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Collections.IEnumerable>>
struct NOVTABLE IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mF0BA207F535079B4CF417B98FF907B2721500E72(IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct NOVTABLE IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mFB6DD1A93003C24E9A3D336F11E42A6D9F32DF73(IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m238EA078B19FA3DD20192EC8510D23EB98ED73D8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mCDADB37348616291D935F887419B63B2A71C33C7(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Object>
struct NOVTABLE IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m0B91EE91DEF45B972A0D9955BCBF16BEB326C1DE(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1C93E3E162F97E4913EE486B30CA28758E638923(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m2BCD5412D5BA04AE766FF7657BC4A62CDCF4BD16(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() = 0;
};
// Windows.UI.Xaml.Interop.IBindableVectorView
struct NOVTABLE IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_GetAt_mB119DB25AF57A337D2C7112063778434CE0F5CF5(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_get_Size_m4F48139B27CB215D7E728F77E748FA6573F7DA09(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_IndexOf_mD85EC41D34BC2E450FA0133CC802906157D765F2(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};

// System.Object


// System.Collections.ObjectModel.Collection`1<Newtonsoft.Json.JsonConverter>
struct Collection_1_t33F1E86CDC8360DB31BCEF0BE130AF6A73E16FA0  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::items
	RuntimeObject* ___items_0;
	// System.Object System.Collections.ObjectModel.Collection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Collection_1_t33F1E86CDC8360DB31BCEF0BE130AF6A73E16FA0, ___items_0)); }
	inline RuntimeObject* get_items_0() const { return ___items_0; }
	inline RuntimeObject** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(RuntimeObject* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(Collection_1_t33F1E86CDC8360DB31BCEF0BE130AF6A73E16FA0, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Collections.ObjectModel.Collection`1<Newtonsoft.Json.Serialization.JsonProperty>
struct Collection_1_t54C328CA2C8346A8FD2B891ABADB9243552C8459  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::items
	RuntimeObject* ___items_0;
	// System.Object System.Collections.ObjectModel.Collection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Collection_1_t54C328CA2C8346A8FD2B891ABADB9243552C8459, ___items_0)); }
	inline RuntimeObject* get_items_0() const { return ___items_0; }
	inline RuntimeObject** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(RuntimeObject* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(Collection_1_t54C328CA2C8346A8FD2B891ABADB9243552C8459, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_0;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___HashValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::m_bDisposed
	bool ___m_bDisposed_3;

public:
	inline static int32_t get_offset_of_HashSizeValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashSizeValue_0)); }
	inline int32_t get_HashSizeValue_0() const { return ___HashSizeValue_0; }
	inline int32_t* get_address_of_HashSizeValue_0() { return &___HashSizeValue_0; }
	inline void set_HashSizeValue_0(int32_t value)
	{
		___HashSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_HashValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___HashValue_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_HashValue_1() const { return ___HashValue_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_HashValue_1() { return &___HashValue_1; }
	inline void set_HashValue_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___HashValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HashValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_m_bDisposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31, ___m_bDisposed_3)); }
	inline bool get_m_bDisposed_3() const { return ___m_bDisposed_3; }
	inline bool* get_address_of_m_bDisposed_3() { return &___m_bDisposed_3; }
	inline void set_m_bDisposed_3(bool value)
	{
		___m_bDisposed_3 = value;
	}
};


// Newtonsoft.Json.Linq.JToken
struct JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * ____parent_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ____previous_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ____next_2;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_3;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5, ____parent_0)); }
	inline JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * get__parent_0() const { return ____parent_0; }
	inline JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__previous_1() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5, ____previous_1)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get__previous_1() const { return ____previous_1; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of__previous_1() { return &____previous_1; }
	inline void set__previous_1(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		____previous_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5, ____next_2)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get__next_2() const { return ____next_2; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_3() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5, ____annotations_3)); }
	inline RuntimeObject * get__annotations_3() const { return ____annotations_3; }
	inline RuntimeObject ** get_address_of__annotations_3() { return &____annotations_3; }
	inline void set__annotations_3(RuntimeObject * value)
	{
		____annotations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_3), (void*)value);
	}
};

struct JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___BooleanTypes_4;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___NumberTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___BigIntegerTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of_BooleanTypes_4() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___BooleanTypes_4)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_BooleanTypes_4() const { return ___BooleanTypes_4; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_BooleanTypes_4() { return &___BooleanTypes_4; }
	inline void set_BooleanTypes_4(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___BooleanTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_5() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___NumberTypes_5)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_NumberTypes_5() const { return ___NumberTypes_5; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_NumberTypes_5() { return &___NumberTypes_5; }
	inline void set_NumberTypes_5(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___NumberTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_BigIntegerTypes_6() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___BigIntegerTypes_6)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_BigIntegerTypes_6() const { return ___BigIntegerTypes_6; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_BigIntegerTypes_6() { return &___BigIntegerTypes_6; }
	inline void set_BigIntegerTypes_6(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___BigIntegerTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BigIntegerTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_13), (void*)value);
	}
};


// System.Collections.Specialized.ListDictionary
struct ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * ___head_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;
	// System.Object System.Collections.Specialized.ListDictionary::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B, ___head_0)); }
	inline DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * get_head_0() const { return ___head_0; }
	inline DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(DictionaryNode_tFA6C0EBFE9BB44B7C933A9FB0A0F18C4746FEC89 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_3), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.ListDictionaryInternal
struct ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A  : public RuntimeObject
{
public:
	// System.Collections.ListDictionaryInternal/DictionaryNode System.Collections.ListDictionaryInternal::head
	DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * ___head_0;
	// System.Int32 System.Collections.ListDictionaryInternal::version
	int32_t ___version_1;
	// System.Int32 System.Collections.ListDictionaryInternal::count
	int32_t ___count_2;
	// System.Object System.Collections.ListDictionaryInternal::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ___head_0)); }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * get_head_0() const { return ___head_0; }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899  : public RuntimeObject
{
public:
	// System.Collections.IList System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::_list
	RuntimeObject* ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899, ____list_0)); }
	inline RuntimeObject* get__list_0() const { return ____list_0; }
	inline RuntimeObject** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(RuntimeObject* value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_0), (void*)value);
	}
};


// System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MessageDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MessageDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MessageDictionary::_methodKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MessageDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____internalProperties_0), (void*)value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_1), (void*)value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____methodKeys_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____methodKeys_2), (void*)value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Collections.ObjectModel.KeyedCollection`2<System.String,Newtonsoft.Json.Serialization.JsonProperty>
struct KeyedCollection_2_t96D9F8C1749C12D2275FD1702312608F9DC060AB  : public Collection_1_t54C328CA2C8346A8FD2B891ABADB9243552C8459
{
public:
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.ObjectModel.KeyedCollection`2::comparer
	RuntimeObject* ___comparer_2;
	// System.Collections.Generic.Dictionary`2<TKey,TItem> System.Collections.ObjectModel.KeyedCollection`2::dict
	Dictionary_2_t7ADF0977437EEF3B033402A3870614FBF42A31E6 * ___dict_3;
	// System.Int32 System.Collections.ObjectModel.KeyedCollection`2::keyCount
	int32_t ___keyCount_4;
	// System.Int32 System.Collections.ObjectModel.KeyedCollection`2::threshold
	int32_t ___threshold_5;

public:
	inline static int32_t get_offset_of_comparer_2() { return static_cast<int32_t>(offsetof(KeyedCollection_2_t96D9F8C1749C12D2275FD1702312608F9DC060AB, ___comparer_2)); }
	inline RuntimeObject* get_comparer_2() const { return ___comparer_2; }
	inline RuntimeObject** get_address_of_comparer_2() { return &___comparer_2; }
	inline void set_comparer_2(RuntimeObject* value)
	{
		___comparer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_2), (void*)value);
	}

	inline static int32_t get_offset_of_dict_3() { return static_cast<int32_t>(offsetof(KeyedCollection_2_t96D9F8C1749C12D2275FD1702312608F9DC060AB, ___dict_3)); }
	inline Dictionary_2_t7ADF0977437EEF3B033402A3870614FBF42A31E6 * get_dict_3() const { return ___dict_3; }
	inline Dictionary_2_t7ADF0977437EEF3B033402A3870614FBF42A31E6 ** get_address_of_dict_3() { return &___dict_3; }
	inline void set_dict_3(Dictionary_2_t7ADF0977437EEF3B033402A3870614FBF42A31E6 * value)
	{
		___dict_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dict_3), (void*)value);
	}

	inline static int32_t get_offset_of_keyCount_4() { return static_cast<int32_t>(offsetof(KeyedCollection_2_t96D9F8C1749C12D2275FD1702312608F9DC060AB, ___keyCount_4)); }
	inline int32_t get_keyCount_4() const { return ___keyCount_4; }
	inline int32_t* get_address_of_keyCount_4() { return &___keyCount_4; }
	inline void set_keyCount_4(int32_t value)
	{
		___keyCount_4 = value;
	}

	inline static int32_t get_offset_of_threshold_5() { return static_cast<int32_t>(offsetof(KeyedCollection_2_t96D9F8C1749C12D2275FD1702312608F9DC060AB, ___threshold_5)); }
	inline int32_t get_threshold_5() const { return ___threshold_5; }
	inline int32_t* get_address_of_threshold_5() { return &___threshold_5; }
	inline void set_threshold_5(int32_t value)
	{
		___threshold_5 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_tBC657EE757E9DCB303371710D65BAE9B58BF84EC  : public Collection_1_t33F1E86CDC8360DB31BCEF0BE130AF6A73E16FA0
{
public:

public:
};


// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t681B59FF58ABCA45D1694A36390AF83AAE2F7F08  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t681B59FF58ABCA45D1694A36390AF83AAE2F7F08, ___KeyValue_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyValue_4), (void*)value);
	}
};


// System.Runtime.Remoting.Messaging.MCMDictionary
struct MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF  : public MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE
{
public:

public:
};

struct MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MCMDictionary::InternalKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalKeys_4;

public:
	inline static int32_t get_offset_of_InternalKeys_4() { return static_cast<int32_t>(offsetof(MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_StaticFields, ___InternalKeys_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalKeys_4() const { return ___InternalKeys_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalKeys_4() { return &___InternalKeys_4; }
	inline void set_InternalKeys_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalKeys_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalKeys_4), (void*)value);
	}
};


// Mono.Security.Cryptography.MD2
struct MD2_t9D20CEB2C863922737CE4F279D80B0D4E7AEEB50  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// Mono.Security.Cryptography.MD2
struct MD2_tD2ECFF2E7CD137AF136BC822DA2A7ECEAF3B0E7B  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// Mono.Security.Cryptography.MD4
struct MD4_t80647CC3422D7B2C41A8EE3E8772B523AEE3B478  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// Mono.Security.Cryptography.MD4
struct MD4_tFCEEF148AD7E7BAF7744F6FFEE57A9B95F4EE0FD  : public HashAlgorithm_t7F831BEF35F9D0AF5016FFB0E474AF9F93908F31
{
public:

public:
};


// Newtonsoft.Json.Utilities.StringBuffer
struct StringBuffer_tB83673E85769C96B8F940472DC605952E659C166 
{
public:
	// System.Char[] Newtonsoft.Json.Utilities.StringBuffer::_buffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____buffer_0;
	// System.Int32 Newtonsoft.Json.Utilities.StringBuffer::_position
	int32_t ____position_1;

public:
	inline static int32_t get_offset_of__buffer_0() { return static_cast<int32_t>(offsetof(StringBuffer_tB83673E85769C96B8F940472DC605952E659C166, ____buffer_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__buffer_0() const { return ____buffer_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__buffer_0() { return &____buffer_0; }
	inline void set__buffer_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of__position_1() { return static_cast<int32_t>(offsetof(StringBuffer_tB83673E85769C96B8F940472DC605952E659C166, ____position_1)); }
	inline int32_t get__position_1() const { return ____position_1; }
	inline int32_t* get_address_of__position_1() { return &____position_1; }
	inline void set__position_1(int32_t value)
	{
		____position_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.StringBuffer
struct StringBuffer_tB83673E85769C96B8F940472DC605952E659C166_marshaled_pinvoke
{
	uint8_t* ____buffer_0;
	int32_t ____position_1;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.StringBuffer
struct StringBuffer_tB83673E85769C96B8F940472DC605952E659C166_marshaled_com
{
	uint8_t* ____buffer_0;
	int32_t ____position_1;
};

// Newtonsoft.Json.Utilities.StringReference
struct StringReference_t80124660104372A4DBED107A750068E4A0442B35 
{
public:
	// System.Char[] Newtonsoft.Json.Utilities.StringReference::_chars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____chars_0;
	// System.Int32 Newtonsoft.Json.Utilities.StringReference::_startIndex
	int32_t ____startIndex_1;
	// System.Int32 Newtonsoft.Json.Utilities.StringReference::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__chars_0() { return static_cast<int32_t>(offsetof(StringReference_t80124660104372A4DBED107A750068E4A0442B35, ____chars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__chars_0() const { return ____chars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__chars_0() { return &____chars_0; }
	inline void set__chars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____chars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____chars_0), (void*)value);
	}

	inline static int32_t get_offset_of__startIndex_1() { return static_cast<int32_t>(offsetof(StringReference_t80124660104372A4DBED107A750068E4A0442B35, ____startIndex_1)); }
	inline int32_t get__startIndex_1() const { return ____startIndex_1; }
	inline int32_t* get_address_of__startIndex_1() { return &____startIndex_1; }
	inline void set__startIndex_1(int32_t value)
	{
		____startIndex_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(StringReference_t80124660104372A4DBED107A750068E4A0442B35, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.StringReference
struct StringReference_t80124660104372A4DBED107A750068E4A0442B35_marshaled_pinvoke
{
	uint8_t* ____chars_0;
	int32_t ____startIndex_1;
	int32_t ____length_2;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.StringReference
struct StringReference_t80124660104372A4DBED107A750068E4A0442B35_marshaled_com
{
	uint8_t* ____chars_0;
	int32_t ____startIndex_1;
	int32_t ____length_2;
};

// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// Newtonsoft.Json.DateFormatHandling
struct DateFormatHandling_t0BE6490BB962DA6F33291FCAF8D761BEC311FC0D 
{
public:
	// System.Int32 Newtonsoft.Json.DateFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateFormatHandling_t0BE6490BB962DA6F33291FCAF8D761BEC311FC0D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateParseHandling
struct DateParseHandling_t3B6347A36EBE6EE30C3E70CD2C7DD2DC60F1A1C8 
{
public:
	// System.Int32 Newtonsoft.Json.DateParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateParseHandling_t3B6347A36EBE6EE30C3E70CD2C7DD2DC60F1A1C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateTimeZoneHandling
struct DateTimeZoneHandling_t378EC3338071932E6E28BFA91B87DAC26A982800 
{
public:
	// System.Int32 Newtonsoft.Json.DateTimeZoneHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeZoneHandling_t378EC3338071932E6E28BFA91B87DAC26A982800, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventModifiers
struct EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA 
{
public:
	// System.Int32 UnityEngine.EventModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventModifiers_t74E579DA08774C9BED20643F03DA610285143BFA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.FloatFormatHandling
struct FloatFormatHandling_t06A9A06B4CCA8445A22004BED764457FB598D952 
{
public:
	// System.Int32 Newtonsoft.Json.FloatFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatFormatHandling_t06A9A06B4CCA8445A22004BED764457FB598D952, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.FloatParseHandling
struct FloatParseHandling_t79D8CC938444E41BF7E3C782E4D608A70E7B6D71 
{
public:
	// System.Int32 Newtonsoft.Json.FloatParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatParseHandling_t79D8CC938444E41BF7E3C782E4D608A70E7B6D71, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Formatting
struct Formatting_tA7EA33F352E3220F87DA20E2EA034496787BA45C 
{
public:
	// System.Int32 Newtonsoft.Json.Formatting::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Formatting_tA7EA33F352E3220F87DA20E2EA034496787BA45C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Linq.JTokenType
struct JTokenType_t15451C2A5A68B5DBA25E61D38A5BDCA8BF150AB6 
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JTokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JTokenType_t15451C2A5A68B5DBA25E61D38A5BDCA8BF150AB6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonContainerType
struct JsonContainerType_tAF8EFC2035025B382174101866B3D0AB96F2C550 
{
public:
	// System.Int32 Newtonsoft.Json.JsonContainerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonContainerType_tAF8EFC2035025B382174101866B3D0AB96F2C550, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Serialization.JsonPropertyCollection
struct JsonPropertyCollection_tBC0D13C5E41B9E47173FD28BB45B817309C17347  : public KeyedCollection_2_t96D9F8C1749C12D2275FD1702312608F9DC060AB
{
public:
	// System.Type Newtonsoft.Json.Serialization.JsonPropertyCollection::_type
	Type_t * ____type_6;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.JsonProperty> Newtonsoft.Json.Serialization.JsonPropertyCollection::_list
	List_1_t1ACA73DA08F692B585FC58BC857EF79E6B12BC8B * ____list_7;

public:
	inline static int32_t get_offset_of__type_6() { return static_cast<int32_t>(offsetof(JsonPropertyCollection_tBC0D13C5E41B9E47173FD28BB45B817309C17347, ____type_6)); }
	inline Type_t * get__type_6() const { return ____type_6; }
	inline Type_t ** get_address_of__type_6() { return &____type_6; }
	inline void set__type_6(Type_t * value)
	{
		____type_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____type_6), (void*)value);
	}

	inline static int32_t get_offset_of__list_7() { return static_cast<int32_t>(offsetof(JsonPropertyCollection_tBC0D13C5E41B9E47173FD28BB45B817309C17347, ____list_7)); }
	inline List_1_t1ACA73DA08F692B585FC58BC857EF79E6B12BC8B * get__list_7() const { return ____list_7; }
	inline List_1_t1ACA73DA08F692B585FC58BC857EF79E6B12BC8B ** get_address_of__list_7() { return &____list_7; }
	inline void set__list_7(List_1_t1ACA73DA08F692B585FC58BC857EF79E6B12BC8B * value)
	{
		____list_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_7), (void*)value);
	}
};


// Newtonsoft.Json.JsonToken
struct JsonToken_t3F2E74D2189D826EDCC84DEB75C1968CB8673D72 
{
public:
	// System.Int32 Newtonsoft.Json.JsonToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonToken_t3F2E74D2189D826EDCC84DEB75C1968CB8673D72, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Cryptography.MACTripleDES
struct MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776  : public KeyedHashAlgorithm_t681B59FF58ABCA45D1694A36390AF83AAE2F7F08
{
public:
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.MACTripleDES::m_encryptor
	RuntimeObject* ___m_encryptor_5;
	// System.Security.Cryptography.CryptoStream System.Security.Cryptography.MACTripleDES::_cs
	CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66 * ____cs_6;
	// System.Security.Cryptography.TailStream System.Security.Cryptography.MACTripleDES::_ts
	TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C * ____ts_7;
	// System.Int32 System.Security.Cryptography.MACTripleDES::m_bytesPerBlock
	int32_t ___m_bytesPerBlock_8;
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::des
	TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136 * ___des_9;

public:
	inline static int32_t get_offset_of_m_encryptor_5() { return static_cast<int32_t>(offsetof(MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776, ___m_encryptor_5)); }
	inline RuntimeObject* get_m_encryptor_5() const { return ___m_encryptor_5; }
	inline RuntimeObject** get_address_of_m_encryptor_5() { return &___m_encryptor_5; }
	inline void set_m_encryptor_5(RuntimeObject* value)
	{
		___m_encryptor_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encryptor_5), (void*)value);
	}

	inline static int32_t get_offset_of__cs_6() { return static_cast<int32_t>(offsetof(MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776, ____cs_6)); }
	inline CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66 * get__cs_6() const { return ____cs_6; }
	inline CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66 ** get_address_of__cs_6() { return &____cs_6; }
	inline void set__cs_6(CryptoStream_tF66A4175F53BDFFC4936AF7FD02BD54C5B024B66 * value)
	{
		____cs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cs_6), (void*)value);
	}

	inline static int32_t get_offset_of__ts_7() { return static_cast<int32_t>(offsetof(MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776, ____ts_7)); }
	inline TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C * get__ts_7() const { return ____ts_7; }
	inline TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C ** get_address_of__ts_7() { return &____ts_7; }
	inline void set__ts_7(TailStream_t1BE44991F378586CE124EB44E5D0533AD6298B8C * value)
	{
		____ts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_bytesPerBlock_8() { return static_cast<int32_t>(offsetof(MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776, ___m_bytesPerBlock_8)); }
	inline int32_t get_m_bytesPerBlock_8() const { return ___m_bytesPerBlock_8; }
	inline int32_t* get_address_of_m_bytesPerBlock_8() { return &___m_bytesPerBlock_8; }
	inline void set_m_bytesPerBlock_8(int32_t value)
	{
		___m_bytesPerBlock_8 = value;
	}

	inline static int32_t get_offset_of_des_9() { return static_cast<int32_t>(offsetof(MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776, ___des_9)); }
	inline TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136 * get_des_9() const { return ___des_9; }
	inline TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136 ** get_address_of_des_9() { return &___des_9; }
	inline void set_des_9(TripleDES_t41D78B2309C83223C73DFC80B18216BA8917B136 * value)
	{
		___des_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___des_9), (void*)value);
	}
};


// Mono.Security.Cryptography.MD2Managed
struct MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1  : public MD2_t9D20CEB2C863922737CE4F279D80B0D4E7AEEB50
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___x_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1, ___state_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_4), (void*)value);
	}

	inline static int32_t get_offset_of_checksum_5() { return static_cast<int32_t>(offsetof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1, ___checksum_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_checksum_5() const { return ___checksum_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_checksum_5() { return &___checksum_5; }
	inline void set_checksum_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___checksum_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checksum_5), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1, ___buffer_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_6), (void*)value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1, ___x_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_x_8() const { return ___x_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_8), (void*)value);
	}
};

struct MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___PI_SUBST_9;

public:
	inline static int32_t get_offset_of_PI_SUBST_9() { return static_cast<int32_t>(offsetof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_StaticFields, ___PI_SUBST_9)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_PI_SUBST_9() const { return ___PI_SUBST_9; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_PI_SUBST_9() { return &___PI_SUBST_9; }
	inline void set_PI_SUBST_9(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___PI_SUBST_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PI_SUBST_9), (void*)value);
	}
};


// Mono.Security.Cryptography.MD2Managed
struct MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE  : public MD2_tD2ECFF2E7CD137AF136BC822DA2A7ECEAF3B0E7B
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___x_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE, ___state_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_4), (void*)value);
	}

	inline static int32_t get_offset_of_checksum_5() { return static_cast<int32_t>(offsetof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE, ___checksum_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_checksum_5() const { return ___checksum_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_checksum_5() { return &___checksum_5; }
	inline void set_checksum_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___checksum_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checksum_5), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE, ___buffer_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_6), (void*)value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE, ___x_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_x_8() const { return ___x_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_8), (void*)value);
	}
};

struct MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___PI_SUBST_9;

public:
	inline static int32_t get_offset_of_PI_SUBST_9() { return static_cast<int32_t>(offsetof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_StaticFields, ___PI_SUBST_9)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_PI_SUBST_9() const { return ___PI_SUBST_9; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_PI_SUBST_9() { return &___PI_SUBST_9; }
	inline void set_PI_SUBST_9(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___PI_SUBST_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PI_SUBST_9), (void*)value);
	}
};


// Mono.Security.Cryptography.MD4Managed
struct MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8  : public MD4_t80647CC3422D7B2C41A8EE3E8772B523AEE3B478
{
public:
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___digest_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8, ___state_4)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_state_4() const { return ___state_4; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_4), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8, ___buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8, ___count_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_count_6() const { return ___count_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___count_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___count_6), (void*)value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8, ___x_7)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_x_7() const { return ___x_7; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_7), (void*)value);
	}

	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8, ___digest_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_digest_8() const { return ___digest_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___digest_8), (void*)value);
	}
};


// Mono.Security.Cryptography.MD4Managed
struct MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9  : public MD4_tFCEEF148AD7E7BAF7744F6FFEE57A9B95F4EE0FD
{
public:
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___digest_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9, ___state_4)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_state_4() const { return ___state_4; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_4), (void*)value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9, ___buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9, ___count_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_count_6() const { return ___count_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___count_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___count_6), (void*)value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9, ___x_7)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_x_7() const { return ___x_7; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_7), (void*)value);
	}

	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9, ___digest_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_digest_8() const { return ___digest_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___digest_8), (void*)value);
	}
};


// UnityEngine.Windows.Speech.PhraseRecognizer
struct PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Windows.Speech.PhraseRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate UnityEngine.Windows.Speech.PhraseRecognizer::OnPhraseRecognized
	PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * ___OnPhraseRecognized_1;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_OnPhraseRecognized_1() { return static_cast<int32_t>(offsetof(PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2, ___OnPhraseRecognized_1)); }
	inline PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * get_OnPhraseRecognized_1() const { return ___OnPhraseRecognized_1; }
	inline PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F ** get_address_of_OnPhraseRecognized_1() { return &___OnPhraseRecognized_1; }
	inline void set_OnPhraseRecognized_1(PhraseRecognizedDelegate_t13C88401D803DCE6F7A0250C3C86F0FF1FD8662F * value)
	{
		___OnPhraseRecognized_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPhraseRecognized_1), (void*)value);
	}
};


// UnityEngine.UIElements.PropagationPhase
struct PropagationPhase_tDAF453F45C8A7EC36F0ADFDF89D406305FBFAFB8 
{
public:
	// System.Int32 UnityEngine.UIElements.PropagationPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropagationPhase_tDAF453F45C8A7EC36F0ADFDF89D406305FBFAFB8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.StringEscapeHandling
struct StringEscapeHandling_t66E490FCCDB73A8D9A892CC3E20BAAFE14D0B383 
{
public:
	// System.Int32 Newtonsoft.Json.StringEscapeHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringEscapeHandling_t66E490FCCDB73A8D9A892CC3E20BAAFE14D0B383, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.EventBase/EventPropagation
struct EventPropagation_t9A8C835BE25DB3F80F1A3B7C5A2D20319578DFB0 
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase/EventPropagation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventPropagation_t9A8C835BE25DB3F80F1A3B7C5A2D20319578DFB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.EventBase/LifeCycleStatus
struct LifeCycleStatus_t05EC3A0D5AE0E801FE6B611D51023B1F4D093B0F 
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase/LifeCycleStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LifeCycleStatus_t05EC3A0D5AE0E801FE6B611D51023B1F4D093B0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonReader/State
struct State_t1465C7F4C454D13A5E15B524FC6A84A88A19FCE0 
{
public:
	// System.Int32 Newtonsoft.Json.JsonReader/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t1465C7F4C454D13A5E15B524FC6A84A88A19FCE0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonWriter/State
struct State_tCF094629522A5FD69F108494074FAAEB9C66C091 
{
public:
	// System.Int32 Newtonsoft.Json.JsonWriter/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_tCF094629522A5FD69F108494074FAAEB9C66C091, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.EventBase
struct EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967  : public RuntimeObject
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase::<timestamp>k__BackingField
	int64_t ___U3CtimestampU3Ek__BackingField_2;
	// System.UInt64 UnityEngine.UIElements.EventBase::<eventId>k__BackingField
	uint64_t ___U3CeventIdU3Ek__BackingField_3;
	// System.UInt64 UnityEngine.UIElements.EventBase::<triggerEventId>k__BackingField
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField_4;
	// UnityEngine.UIElements.EventBase/EventPropagation UnityEngine.UIElements.EventBase::<propagation>k__BackingField
	int32_t ___U3CpropagationU3Ek__BackingField_5;
	// UnityEngine.UIElements.PropagationPaths UnityEngine.UIElements.EventBase::m_Path
	PropagationPaths_tB85C101114BB2AA54407B8F7768B403121914E99 * ___m_Path_6;
	// UnityEngine.UIElements.EventBase/LifeCycleStatus UnityEngine.UIElements.EventBase::<lifeCycleStatus>k__BackingField
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField_7;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::<leafTarget>k__BackingField
	RuntimeObject* ___U3CleafTargetU3Ek__BackingField_8;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_Target
	RuntimeObject* ___m_Target_9;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler> UnityEngine.UIElements.EventBase::<skipElements>k__BackingField
	List_1_t4ACD1DD41E60CC6A1D6F597706710F112BB37C92 * ___U3CskipElementsU3Ek__BackingField_10;
	// UnityEngine.UIElements.PropagationPhase UnityEngine.UIElements.EventBase::<propagationPhase>k__BackingField
	int32_t ___U3CpropagationPhaseU3Ek__BackingField_11;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_CurrentTarget
	RuntimeObject* ___m_CurrentTarget_12;
	// UnityEngine.Event UnityEngine.UIElements.EventBase::m_ImguiEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ImguiEvent_13;
	// UnityEngine.Vector2 UnityEngine.UIElements.EventBase::<originalMousePosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CoriginalMousePositionU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CtimestampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CtimestampU3Ek__BackingField_2)); }
	inline int64_t get_U3CtimestampU3Ek__BackingField_2() const { return ___U3CtimestampU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CtimestampU3Ek__BackingField_2() { return &___U3CtimestampU3Ek__BackingField_2; }
	inline void set_U3CtimestampU3Ek__BackingField_2(int64_t value)
	{
		___U3CtimestampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CeventIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CeventIdU3Ek__BackingField_3)); }
	inline uint64_t get_U3CeventIdU3Ek__BackingField_3() const { return ___U3CeventIdU3Ek__BackingField_3; }
	inline uint64_t* get_address_of_U3CeventIdU3Ek__BackingField_3() { return &___U3CeventIdU3Ek__BackingField_3; }
	inline void set_U3CeventIdU3Ek__BackingField_3(uint64_t value)
	{
		___U3CeventIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtriggerEventIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CtriggerEventIdU3Ek__BackingField_4)); }
	inline uint64_t get_U3CtriggerEventIdU3Ek__BackingField_4() const { return ___U3CtriggerEventIdU3Ek__BackingField_4; }
	inline uint64_t* get_address_of_U3CtriggerEventIdU3Ek__BackingField_4() { return &___U3CtriggerEventIdU3Ek__BackingField_4; }
	inline void set_U3CtriggerEventIdU3Ek__BackingField_4(uint64_t value)
	{
		___U3CtriggerEventIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CpropagationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CpropagationU3Ek__BackingField_5)); }
	inline int32_t get_U3CpropagationU3Ek__BackingField_5() const { return ___U3CpropagationU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CpropagationU3Ek__BackingField_5() { return &___U3CpropagationU3Ek__BackingField_5; }
	inline void set_U3CpropagationU3Ek__BackingField_5(int32_t value)
	{
		___U3CpropagationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_m_Path_6() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___m_Path_6)); }
	inline PropagationPaths_tB85C101114BB2AA54407B8F7768B403121914E99 * get_m_Path_6() const { return ___m_Path_6; }
	inline PropagationPaths_tB85C101114BB2AA54407B8F7768B403121914E99 ** get_address_of_m_Path_6() { return &___m_Path_6; }
	inline void set_m_Path_6(PropagationPaths_tB85C101114BB2AA54407B8F7768B403121914E99 * value)
	{
		___m_Path_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClifeCycleStatusU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3ClifeCycleStatusU3Ek__BackingField_7)); }
	inline int32_t get_U3ClifeCycleStatusU3Ek__BackingField_7() const { return ___U3ClifeCycleStatusU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3ClifeCycleStatusU3Ek__BackingField_7() { return &___U3ClifeCycleStatusU3Ek__BackingField_7; }
	inline void set_U3ClifeCycleStatusU3Ek__BackingField_7(int32_t value)
	{
		___U3ClifeCycleStatusU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CleafTargetU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CleafTargetU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CleafTargetU3Ek__BackingField_8() const { return ___U3CleafTargetU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CleafTargetU3Ek__BackingField_8() { return &___U3CleafTargetU3Ek__BackingField_8; }
	inline void set_U3CleafTargetU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CleafTargetU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleafTargetU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Target_9() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___m_Target_9)); }
	inline RuntimeObject* get_m_Target_9() const { return ___m_Target_9; }
	inline RuntimeObject** get_address_of_m_Target_9() { return &___m_Target_9; }
	inline void set_m_Target_9(RuntimeObject* value)
	{
		___m_Target_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CskipElementsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CskipElementsU3Ek__BackingField_10)); }
	inline List_1_t4ACD1DD41E60CC6A1D6F597706710F112BB37C92 * get_U3CskipElementsU3Ek__BackingField_10() const { return ___U3CskipElementsU3Ek__BackingField_10; }
	inline List_1_t4ACD1DD41E60CC6A1D6F597706710F112BB37C92 ** get_address_of_U3CskipElementsU3Ek__BackingField_10() { return &___U3CskipElementsU3Ek__BackingField_10; }
	inline void set_U3CskipElementsU3Ek__BackingField_10(List_1_t4ACD1DD41E60CC6A1D6F597706710F112BB37C92 * value)
	{
		___U3CskipElementsU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CskipElementsU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropagationPhaseU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CpropagationPhaseU3Ek__BackingField_11)); }
	inline int32_t get_U3CpropagationPhaseU3Ek__BackingField_11() const { return ___U3CpropagationPhaseU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpropagationPhaseU3Ek__BackingField_11() { return &___U3CpropagationPhaseU3Ek__BackingField_11; }
	inline void set_U3CpropagationPhaseU3Ek__BackingField_11(int32_t value)
	{
		___U3CpropagationPhaseU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentTarget_12() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___m_CurrentTarget_12)); }
	inline RuntimeObject* get_m_CurrentTarget_12() const { return ___m_CurrentTarget_12; }
	inline RuntimeObject** get_address_of_m_CurrentTarget_12() { return &___m_CurrentTarget_12; }
	inline void set_m_CurrentTarget_12(RuntimeObject* value)
	{
		___m_CurrentTarget_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentTarget_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ImguiEvent_13() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___m_ImguiEvent_13)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ImguiEvent_13() const { return ___m_ImguiEvent_13; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ImguiEvent_13() { return &___m_ImguiEvent_13; }
	inline void set_m_ImguiEvent_13(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ImguiEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ImguiEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginalMousePositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967, ___U3CoriginalMousePositionU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CoriginalMousePositionU3Ek__BackingField_14() const { return ___U3CoriginalMousePositionU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CoriginalMousePositionU3Ek__BackingField_14() { return &___U3CoriginalMousePositionU3Ek__BackingField_14; }
	inline void set_U3CoriginalMousePositionU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CoriginalMousePositionU3Ek__BackingField_14 = value;
	}
};

struct EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase::s_LastTypeId
	int64_t ___s_LastTypeId_0;
	// System.UInt64 UnityEngine.UIElements.EventBase::s_NextEventId
	uint64_t ___s_NextEventId_1;

public:
	inline static int32_t get_offset_of_s_LastTypeId_0() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967_StaticFields, ___s_LastTypeId_0)); }
	inline int64_t get_s_LastTypeId_0() const { return ___s_LastTypeId_0; }
	inline int64_t* get_address_of_s_LastTypeId_0() { return &___s_LastTypeId_0; }
	inline void set_s_LastTypeId_0(int64_t value)
	{
		___s_LastTypeId_0 = value;
	}

	inline static int32_t get_offset_of_s_NextEventId_1() { return static_cast<int32_t>(offsetof(EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967_StaticFields, ___s_NextEventId_1)); }
	inline uint64_t get_s_NextEventId_1() const { return ___s_NextEventId_1; }
	inline uint64_t* get_address_of_s_NextEventId_1() { return &___s_NextEventId_1; }
	inline void set_s_NextEventId_1(uint64_t value)
	{
		___s_NextEventId_1 = value;
	}
};


// Newtonsoft.Json.Linq.JValue
struct JValue_tAC32114DAAD0302C91FE726A0075D16F75250E96  : public JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5
{
public:
	// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JValue::_valueType
	int32_t ____valueType_14;
	// System.Object Newtonsoft.Json.Linq.JValue::_value
	RuntimeObject * ____value_15;

public:
	inline static int32_t get_offset_of__valueType_14() { return static_cast<int32_t>(offsetof(JValue_tAC32114DAAD0302C91FE726A0075D16F75250E96, ____valueType_14)); }
	inline int32_t get__valueType_14() const { return ____valueType_14; }
	inline int32_t* get_address_of__valueType_14() { return &____valueType_14; }
	inline void set__valueType_14(int32_t value)
	{
		____valueType_14 = value;
	}

	inline static int32_t get_offset_of__value_15() { return static_cast<int32_t>(offsetof(JValue_tAC32114DAAD0302C91FE726A0075D16F75250E96, ____value_15)); }
	inline RuntimeObject * get__value_15() const { return ____value_15; }
	inline RuntimeObject ** get_address_of__value_15() { return &____value_15; }
	inline void set__value_15(RuntimeObject * value)
	{
		____value_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_15), (void*)value);
	}
};


// Newtonsoft.Json.JsonPosition
struct JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE 
{
public:
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;

public:
	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE, ___Position_2)); }
	inline int32_t get_Position_2() const { return ___Position_2; }
	inline int32_t* get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(int32_t value)
	{
		___Position_2 = value;
	}

	inline static int32_t get_offset_of_PropertyName_3() { return static_cast<int32_t>(offsetof(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE, ___PropertyName_3)); }
	inline String_t* get_PropertyName_3() const { return ___PropertyName_3; }
	inline String_t** get_address_of_PropertyName_3() { return &___PropertyName_3; }
	inline void set_PropertyName_3(String_t* value)
	{
		___PropertyName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyName_3), (void*)value);
	}

	inline static int32_t get_offset_of_HasIndex_4() { return static_cast<int32_t>(offsetof(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE, ___HasIndex_4)); }
	inline bool get_HasIndex_4() const { return ___HasIndex_4; }
	inline bool* get_address_of_HasIndex_4() { return &___HasIndex_4; }
	inline void set_HasIndex_4(bool value)
	{
		___HasIndex_4 = value;
	}
};

struct JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE_StaticFields
{
public:
	// System.Char[] Newtonsoft.Json.JsonPosition::SpecialCharacters
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___SpecialCharacters_0;

public:
	inline static int32_t get_offset_of_SpecialCharacters_0() { return static_cast<int32_t>(offsetof(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE_StaticFields, ___SpecialCharacters_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_SpecialCharacters_0() const { return ___SpecialCharacters_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_SpecialCharacters_0() { return &___SpecialCharacters_0; }
	inline void set_SpecialCharacters_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___SpecialCharacters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpecialCharacters_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
};

// UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F  : public PhraseRecognizer_tAEE2BD008F73D7A1F4A1426757C81D04057CFFE2
{
public:
	// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.Windows.Speech.KeywordRecognizer::<Keywords>k__BackingField
	RuntimeObject* ___U3CKeywordsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F, ___U3CKeywordsU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CKeywordsU3Ek__BackingField_2() const { return ___U3CKeywordsU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CKeywordsU3Ek__BackingField_2() { return &___U3CKeywordsU3Ek__BackingField_2; }
	inline void set_U3CKeywordsU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CKeywordsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.KeyDownEvent>
struct EventBase_1_tBA8129392E6E2DCB3EC1808A169AB5915BD4D41E  : public EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_tBA8129392E6E2DCB3EC1808A169AB5915BD4D41E, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_tBA8129392E6E2DCB3EC1808A169AB5915BD4D41E_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_t3D63FBEB271DB47DEDEA73B4059751D3ECD87EAA * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_tBA8129392E6E2DCB3EC1808A169AB5915BD4D41E_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_tBA8129392E6E2DCB3EC1808A169AB5915BD4D41E_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_t3D63FBEB271DB47DEDEA73B4059751D3ECD87EAA * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_t3D63FBEB271DB47DEDEA73B4059751D3ECD87EAA ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_t3D63FBEB271DB47DEDEA73B4059751D3ECD87EAA * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.UIElements.EventBase`1<UnityEngine.UIElements.KeyUpEvent>
struct EventBase_1_t934C843651C0CE40A5EE026FE64520962C69B522  : public EventBase_tADF8D0ADA92BAF80F76865BAC2E9D85A118D1967
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_t934C843651C0CE40A5EE026FE64520962C69B522, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_t934C843651C0CE40A5EE026FE64520962C69B522_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_t956FF0B2B6601BFD7966788CE94E02557B7A38B3 * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_t934C843651C0CE40A5EE026FE64520962C69B522_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_t934C843651C0CE40A5EE026FE64520962C69B522_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_t956FF0B2B6601BFD7966788CE94E02557B7A38B3 * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_t956FF0B2B6601BFD7966788CE94E02557B7A38B3 ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_t956FF0B2B6601BFD7966788CE94E02557B7A38B3 * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// Newtonsoft.Json.JsonReader
struct JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE  : public RuntimeObject
{
public:
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject * ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE  ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t6DACBE605004C53E8318856EB2DE9594F643737D * ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of__tokenType_0() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____tokenType_0)); }
	inline int32_t get__tokenType_0() const { return ____tokenType_0; }
	inline int32_t* get_address_of__tokenType_0() { return &____tokenType_0; }
	inline void set__tokenType_0(int32_t value)
	{
		____tokenType_0 = value;
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}

	inline static int32_t get_offset_of__quoteChar_2() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____quoteChar_2)); }
	inline Il2CppChar get__quoteChar_2() const { return ____quoteChar_2; }
	inline Il2CppChar* get_address_of__quoteChar_2() { return &____quoteChar_2; }
	inline void set__quoteChar_2(Il2CppChar value)
	{
		____quoteChar_2 = value;
	}

	inline static int32_t get_offset_of__currentState_3() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____currentState_3)); }
	inline int32_t get__currentState_3() const { return ____currentState_3; }
	inline int32_t* get_address_of__currentState_3() { return &____currentState_3; }
	inline void set__currentState_3(int32_t value)
	{
		____currentState_3 = value;
	}

	inline static int32_t get_offset_of__currentPosition_4() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____currentPosition_4)); }
	inline JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE  get__currentPosition_4() const { return ____currentPosition_4; }
	inline JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE * get_address_of__currentPosition_4() { return &____currentPosition_4; }
	inline void set__currentPosition_4(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE  value)
	{
		____currentPosition_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____currentPosition_4))->___PropertyName_3), (void*)NULL);
	}

	inline static int32_t get_offset_of__culture_5() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____culture_5)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_5() const { return ____culture_5; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_5() { return &____culture_5; }
	inline void set__culture_5(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_5), (void*)value);
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_6() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____dateTimeZoneHandling_6)); }
	inline int32_t get__dateTimeZoneHandling_6() const { return ____dateTimeZoneHandling_6; }
	inline int32_t* get_address_of__dateTimeZoneHandling_6() { return &____dateTimeZoneHandling_6; }
	inline void set__dateTimeZoneHandling_6(int32_t value)
	{
		____dateTimeZoneHandling_6 = value;
	}

	inline static int32_t get_offset_of__maxDepth_7() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____maxDepth_7)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get__maxDepth_7() const { return ____maxDepth_7; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of__maxDepth_7() { return &____maxDepth_7; }
	inline void set__maxDepth_7(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		____maxDepth_7 = value;
	}

	inline static int32_t get_offset_of__hasExceededMaxDepth_8() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____hasExceededMaxDepth_8)); }
	inline bool get__hasExceededMaxDepth_8() const { return ____hasExceededMaxDepth_8; }
	inline bool* get_address_of__hasExceededMaxDepth_8() { return &____hasExceededMaxDepth_8; }
	inline void set__hasExceededMaxDepth_8(bool value)
	{
		____hasExceededMaxDepth_8 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_9() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____dateParseHandling_9)); }
	inline int32_t get__dateParseHandling_9() const { return ____dateParseHandling_9; }
	inline int32_t* get_address_of__dateParseHandling_9() { return &____dateParseHandling_9; }
	inline void set__dateParseHandling_9(int32_t value)
	{
		____dateParseHandling_9 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_10() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____floatParseHandling_10)); }
	inline int32_t get__floatParseHandling_10() const { return ____floatParseHandling_10; }
	inline int32_t* get_address_of__floatParseHandling_10() { return &____floatParseHandling_10; }
	inline void set__floatParseHandling_10(int32_t value)
	{
		____floatParseHandling_10 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_11() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____dateFormatString_11)); }
	inline String_t* get__dateFormatString_11() const { return ____dateFormatString_11; }
	inline String_t** get_address_of__dateFormatString_11() { return &____dateFormatString_11; }
	inline void set__dateFormatString_11(String_t* value)
	{
		____dateFormatString_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_11), (void*)value);
	}

	inline static int32_t get_offset_of__stack_12() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____stack_12)); }
	inline List_1_t6DACBE605004C53E8318856EB2DE9594F643737D * get__stack_12() const { return ____stack_12; }
	inline List_1_t6DACBE605004C53E8318856EB2DE9594F643737D ** get_address_of__stack_12() { return &____stack_12; }
	inline void set__stack_12(List_1_t6DACBE605004C53E8318856EB2DE9594F643737D * value)
	{
		____stack_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloseInputU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ___U3CCloseInputU3Ek__BackingField_13)); }
	inline bool get_U3CCloseInputU3Ek__BackingField_13() const { return ___U3CCloseInputU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CCloseInputU3Ek__BackingField_13() { return &___U3CCloseInputU3Ek__BackingField_13; }
	inline void set_U3CCloseInputU3Ek__BackingField_13(bool value)
	{
		___U3CCloseInputU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ___U3CSupportMultipleContentU3Ek__BackingField_14)); }
	inline bool get_U3CSupportMultipleContentU3Ek__BackingField_14() const { return ___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return &___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline void set_U3CSupportMultipleContentU3Ek__BackingField_14(bool value)
	{
		___U3CSupportMultipleContentU3Ek__BackingField_14 = value;
	}
};


// Newtonsoft.Json.JsonWriter
struct JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t6DACBE605004C53E8318856EB2DE9594F643737D * ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE  ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.JsonWriter::<AutoCompleteOnClose>k__BackingField
	bool ___U3CAutoCompleteOnCloseU3Ek__BackingField_7;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_8;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_9;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_10;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_11;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_12;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_13;

public:
	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____stack_2)); }
	inline List_1_t6DACBE605004C53E8318856EB2DE9594F643737D * get__stack_2() const { return ____stack_2; }
	inline List_1_t6DACBE605004C53E8318856EB2DE9594F643737D ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(List_1_t6DACBE605004C53E8318856EB2DE9594F643737D * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_2), (void*)value);
	}

	inline static int32_t get_offset_of__currentPosition_3() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____currentPosition_3)); }
	inline JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE  get__currentPosition_3() const { return ____currentPosition_3; }
	inline JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE * get_address_of__currentPosition_3() { return &____currentPosition_3; }
	inline void set__currentPosition_3(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE  value)
	{
		____currentPosition_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____currentPosition_3))->___PropertyName_3), (void*)NULL);
	}

	inline static int32_t get_offset_of__currentState_4() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____currentState_4)); }
	inline int32_t get__currentState_4() const { return ____currentState_4; }
	inline int32_t* get_address_of__currentState_4() { return &____currentState_4; }
	inline void set__currentState_4(int32_t value)
	{
		____currentState_4 = value;
	}

	inline static int32_t get_offset_of__formatting_5() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____formatting_5)); }
	inline int32_t get__formatting_5() const { return ____formatting_5; }
	inline int32_t* get_address_of__formatting_5() { return &____formatting_5; }
	inline void set__formatting_5(int32_t value)
	{
		____formatting_5 = value;
	}

	inline static int32_t get_offset_of_U3CCloseOutputU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ___U3CCloseOutputU3Ek__BackingField_6)); }
	inline bool get_U3CCloseOutputU3Ek__BackingField_6() const { return ___U3CCloseOutputU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CCloseOutputU3Ek__BackingField_6() { return &___U3CCloseOutputU3Ek__BackingField_6; }
	inline void set_U3CCloseOutputU3Ek__BackingField_6(bool value)
	{
		___U3CCloseOutputU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CAutoCompleteOnCloseU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ___U3CAutoCompleteOnCloseU3Ek__BackingField_7)); }
	inline bool get_U3CAutoCompleteOnCloseU3Ek__BackingField_7() const { return ___U3CAutoCompleteOnCloseU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CAutoCompleteOnCloseU3Ek__BackingField_7() { return &___U3CAutoCompleteOnCloseU3Ek__BackingField_7; }
	inline void set_U3CAutoCompleteOnCloseU3Ek__BackingField_7(bool value)
	{
		___U3CAutoCompleteOnCloseU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_8() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____dateFormatHandling_8)); }
	inline int32_t get__dateFormatHandling_8() const { return ____dateFormatHandling_8; }
	inline int32_t* get_address_of__dateFormatHandling_8() { return &____dateFormatHandling_8; }
	inline void set__dateFormatHandling_8(int32_t value)
	{
		____dateFormatHandling_8 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_9() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____dateTimeZoneHandling_9)); }
	inline int32_t get__dateTimeZoneHandling_9() const { return ____dateTimeZoneHandling_9; }
	inline int32_t* get_address_of__dateTimeZoneHandling_9() { return &____dateTimeZoneHandling_9; }
	inline void set__dateTimeZoneHandling_9(int32_t value)
	{
		____dateTimeZoneHandling_9 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_10() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____stringEscapeHandling_10)); }
	inline int32_t get__stringEscapeHandling_10() const { return ____stringEscapeHandling_10; }
	inline int32_t* get_address_of__stringEscapeHandling_10() { return &____stringEscapeHandling_10; }
	inline void set__stringEscapeHandling_10(int32_t value)
	{
		____stringEscapeHandling_10 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_11() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____floatFormatHandling_11)); }
	inline int32_t get__floatFormatHandling_11() const { return ____floatFormatHandling_11; }
	inline int32_t* get_address_of__floatFormatHandling_11() { return &____floatFormatHandling_11; }
	inline void set__floatFormatHandling_11(int32_t value)
	{
		____floatFormatHandling_11 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_12() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____dateFormatString_12)); }
	inline String_t* get__dateFormatString_12() const { return ____dateFormatString_12; }
	inline String_t** get_address_of__dateFormatString_12() { return &____dateFormatString_12; }
	inline void set__dateFormatString_12(String_t* value)
	{
		____dateFormatString_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_12), (void*)value);
	}

	inline static int32_t get_offset_of__culture_13() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____culture_13)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_13() const { return ____culture_13; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_13() { return &____culture_13; }
	inline void set__culture_13(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_13), (void*)value);
	}
};

struct JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837_StaticFields
{
public:
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTempate
	StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B* ___StateArrayTempate_1;

public:
	inline static int32_t get_offset_of_StateArray_0() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837_StaticFields, ___StateArray_0)); }
	inline StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B* get_StateArray_0() const { return ___StateArray_0; }
	inline StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B** get_address_of_StateArray_0() { return &___StateArray_0; }
	inline void set_StateArray_0(StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B* value)
	{
		___StateArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateArray_0), (void*)value);
	}

	inline static int32_t get_offset_of_StateArrayTempate_1() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837_StaticFields, ___StateArrayTempate_1)); }
	inline StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B* get_StateArrayTempate_1() const { return ___StateArrayTempate_1; }
	inline StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B** get_address_of_StateArrayTempate_1() { return &___StateArrayTempate_1; }
	inline void set_StateArrayTempate_1(StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B* value)
	{
		___StateArrayTempate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateArrayTempate_1), (void*)value);
	}
};


// UnityEngine.UIElements.KeyboardEventBase`1<UnityEngine.UIElements.KeyDownEvent>
struct KeyboardEventBase_1_t241DE9277CA8B10D5E950EC6995711467412743E  : public EventBase_1_tBA8129392E6E2DCB3EC1808A169AB5915BD4D41E
{
public:
	// UnityEngine.EventModifiers UnityEngine.UIElements.KeyboardEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_18;
	// System.Char UnityEngine.UIElements.KeyboardEventBase`1::<character>k__BackingField
	Il2CppChar ___U3CcharacterU3Ek__BackingField_19;
	// UnityEngine.KeyCode UnityEngine.UIElements.KeyboardEventBase`1::<keyCode>k__BackingField
	int32_t ___U3CkeyCodeU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(KeyboardEventBase_1_t241DE9277CA8B10D5E950EC6995711467412743E, ___U3CmodifiersU3Ek__BackingField_18)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_18() const { return ___U3CmodifiersU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_18() { return &___U3CmodifiersU3Ek__BackingField_18; }
	inline void set_U3CmodifiersU3Ek__BackingField_18(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CcharacterU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(KeyboardEventBase_1_t241DE9277CA8B10D5E950EC6995711467412743E, ___U3CcharacterU3Ek__BackingField_19)); }
	inline Il2CppChar get_U3CcharacterU3Ek__BackingField_19() const { return ___U3CcharacterU3Ek__BackingField_19; }
	inline Il2CppChar* get_address_of_U3CcharacterU3Ek__BackingField_19() { return &___U3CcharacterU3Ek__BackingField_19; }
	inline void set_U3CcharacterU3Ek__BackingField_19(Il2CppChar value)
	{
		___U3CcharacterU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CkeyCodeU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(KeyboardEventBase_1_t241DE9277CA8B10D5E950EC6995711467412743E, ___U3CkeyCodeU3Ek__BackingField_20)); }
	inline int32_t get_U3CkeyCodeU3Ek__BackingField_20() const { return ___U3CkeyCodeU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CkeyCodeU3Ek__BackingField_20() { return &___U3CkeyCodeU3Ek__BackingField_20; }
	inline void set_U3CkeyCodeU3Ek__BackingField_20(int32_t value)
	{
		___U3CkeyCodeU3Ek__BackingField_20 = value;
	}
};


// UnityEngine.UIElements.KeyboardEventBase`1<UnityEngine.UIElements.KeyUpEvent>
struct KeyboardEventBase_1_t470115110F914E0A4BC09D581661B1E92C85588E  : public EventBase_1_t934C843651C0CE40A5EE026FE64520962C69B522
{
public:
	// UnityEngine.EventModifiers UnityEngine.UIElements.KeyboardEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_18;
	// System.Char UnityEngine.UIElements.KeyboardEventBase`1::<character>k__BackingField
	Il2CppChar ___U3CcharacterU3Ek__BackingField_19;
	// UnityEngine.KeyCode UnityEngine.UIElements.KeyboardEventBase`1::<keyCode>k__BackingField
	int32_t ___U3CkeyCodeU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(KeyboardEventBase_1_t470115110F914E0A4BC09D581661B1E92C85588E, ___U3CmodifiersU3Ek__BackingField_18)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_18() const { return ___U3CmodifiersU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_18() { return &___U3CmodifiersU3Ek__BackingField_18; }
	inline void set_U3CmodifiersU3Ek__BackingField_18(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CcharacterU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(KeyboardEventBase_1_t470115110F914E0A4BC09D581661B1E92C85588E, ___U3CcharacterU3Ek__BackingField_19)); }
	inline Il2CppChar get_U3CcharacterU3Ek__BackingField_19() const { return ___U3CcharacterU3Ek__BackingField_19; }
	inline Il2CppChar* get_address_of_U3CcharacterU3Ek__BackingField_19() { return &___U3CcharacterU3Ek__BackingField_19; }
	inline void set_U3CcharacterU3Ek__BackingField_19(Il2CppChar value)
	{
		___U3CcharacterU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CkeyCodeU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(KeyboardEventBase_1_t470115110F914E0A4BC09D581661B1E92C85588E, ___U3CkeyCodeU3Ek__BackingField_20)); }
	inline int32_t get_U3CkeyCodeU3Ek__BackingField_20() const { return ___U3CkeyCodeU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CkeyCodeU3Ek__BackingField_20() { return &___U3CkeyCodeU3Ek__BackingField_20; }
	inline void set_U3CkeyCodeU3Ek__BackingField_20(int32_t value)
	{
		___U3CkeyCodeU3Ek__BackingField_20 = value;
	}
};


// Newtonsoft.Json.Linq.JTokenWriter
struct JTokenWriter_tE85DB62D1DAA4AB2A04389BB708AC60A4A59C659  : public JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JTokenWriter::_token
	JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * ____token_14;
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JTokenWriter::_parent
	JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * ____parent_15;
	// Newtonsoft.Json.Linq.JValue Newtonsoft.Json.Linq.JTokenWriter::_value
	JValue_tAC32114DAAD0302C91FE726A0075D16F75250E96 * ____value_16;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenWriter::_current
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ____current_17;

public:
	inline static int32_t get_offset_of__token_14() { return static_cast<int32_t>(offsetof(JTokenWriter_tE85DB62D1DAA4AB2A04389BB708AC60A4A59C659, ____token_14)); }
	inline JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * get__token_14() const { return ____token_14; }
	inline JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 ** get_address_of__token_14() { return &____token_14; }
	inline void set__token_14(JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * value)
	{
		____token_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____token_14), (void*)value);
	}

	inline static int32_t get_offset_of__parent_15() { return static_cast<int32_t>(offsetof(JTokenWriter_tE85DB62D1DAA4AB2A04389BB708AC60A4A59C659, ____parent_15)); }
	inline JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * get__parent_15() const { return ____parent_15; }
	inline JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 ** get_address_of__parent_15() { return &____parent_15; }
	inline void set__parent_15(JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * value)
	{
		____parent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_15), (void*)value);
	}

	inline static int32_t get_offset_of__value_16() { return static_cast<int32_t>(offsetof(JTokenWriter_tE85DB62D1DAA4AB2A04389BB708AC60A4A59C659, ____value_16)); }
	inline JValue_tAC32114DAAD0302C91FE726A0075D16F75250E96 * get__value_16() const { return ____value_16; }
	inline JValue_tAC32114DAAD0302C91FE726A0075D16F75250E96 ** get_address_of__value_16() { return &____value_16; }
	inline void set__value_16(JValue_tAC32114DAAD0302C91FE726A0075D16F75250E96 * value)
	{
		____value_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_16), (void*)value);
	}

	inline static int32_t get_offset_of__current_17() { return static_cast<int32_t>(offsetof(JTokenWriter_tE85DB62D1DAA4AB2A04389BB708AC60A4A59C659, ____current_17)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get__current_17() const { return ____current_17; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of__current_17() { return &____current_17; }
	inline void set__current_17(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		____current_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_17), (void*)value);
	}
};


// Newtonsoft.Json.JsonTextReader
struct JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67  : public JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE
{
public:
	// System.Boolean Newtonsoft.Json.JsonTextReader::_safeAsync
	bool ____safeAsync_15;
	// System.IO.TextReader Newtonsoft.Json.JsonTextReader::_reader
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ____reader_16;
	// System.Char[] Newtonsoft.Json.JsonTextReader::_chars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____chars_17;
	// System.Int32 Newtonsoft.Json.JsonTextReader::_charsUsed
	int32_t ____charsUsed_18;
	// System.Int32 Newtonsoft.Json.JsonTextReader::_charPos
	int32_t ____charPos_19;
	// System.Int32 Newtonsoft.Json.JsonTextReader::_lineStartPos
	int32_t ____lineStartPos_20;
	// System.Int32 Newtonsoft.Json.JsonTextReader::_lineNumber
	int32_t ____lineNumber_21;
	// System.Boolean Newtonsoft.Json.JsonTextReader::_isEndOfFile
	bool ____isEndOfFile_22;
	// Newtonsoft.Json.Utilities.StringBuffer Newtonsoft.Json.JsonTextReader::_stringBuffer
	StringBuffer_tB83673E85769C96B8F940472DC605952E659C166  ____stringBuffer_23;
	// Newtonsoft.Json.Utilities.StringReference Newtonsoft.Json.JsonTextReader::_stringReference
	StringReference_t80124660104372A4DBED107A750068E4A0442B35  ____stringReference_24;
	// Newtonsoft.Json.IArrayPool`1<System.Char> Newtonsoft.Json.JsonTextReader::_arrayPool
	RuntimeObject* ____arrayPool_25;
	// Newtonsoft.Json.JsonNameTable Newtonsoft.Json.JsonTextReader::<PropertyNameTable>k__BackingField
	JsonNameTable_tCFEAB3ABD51FD3735D5FE2A4C8899C474E63F8EF * ___U3CPropertyNameTableU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of__safeAsync_15() { return static_cast<int32_t>(offsetof(JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67, ____safeAsync_15)); }
	inline bool get__safeAsync_15() const { return ____safeAsync_15; }
	inline bool* get_address_of__safeAsync_15() { return &____safeAsync_15; }
	inline void set__safeAsync_15(bool value)
	{
		____safeAsync_15 = value;
	}

	inline static int32_t get_offset_of__reader_16() { return static_cast<int32_t>(offsetof(JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67, ____reader_16)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get__reader_16() const { return ____reader_16; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of__reader_16() { return &____reader_16; }
	inline void set__reader_16(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		____reader_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____reader_16), (void*)value);
	}

	inline static int32_t get_offset_of__chars_17() { return static_cast<int32_t>(offsetof(JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67, ____chars_17)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__chars_17() const { return ____chars_17; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__chars_17() { return &____chars_17; }
	inline void set__chars_17(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____chars_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____chars_17), (void*)value);
	}

	inline static int32_t get_offset_of__charsUsed_18() { return static_cast<int32_t>(offsetof(JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67, ____charsUsed_18)); }
	inline int32_t get__charsUsed_18() const { return ____charsUsed_18; }
	inline int32_t* get_address_of__charsUsed_18() { return &____charsUsed_18; }
	inline void set__charsUsed_18(int32_t value)
	{
		____charsUsed_18 = value;
	}

	inline static int32_t get_offset_of__charPos_19() { return static_cast<int32_t>(offsetof(JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67, ____charPos_19)); }
	inline int32_t get__charPos_19() const { return ____charPos_19; }
	inline int32_t* get_address_of__charPos_19() { return &____charPos_19; }
	inline void set__charPos_19(int32_t value)
	{
		____charPos_19 = value;
	}

	inline static int32_t get_offset_of__lineStartPos_20() { return static_cast<int32_t>(offsetof(JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67, ____lineStartPos_20)); }
	inline int32_t get__lineStartPos_20() const { return ____lineStartPos_20; }
	inline int32_t* get_address_of__lineStartPos_20() { return &____lineStartPos_20; }
	inline void set__lineStartPos_20(int32_t value)
	{
		____lineStartPos_20 = value;
	}

	inline static int32_t get_offset_of__lineNumber_21() { return static_cast<int32_t>(offsetof(JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67, ____lineNumber_21)); }
	inline int32_t get__lineNumber_21() const { return ____lineNumber_21; }
	inline int32_t* get_address_of__lineNumber_21() { return &____lineNumber_21; }
	inline void set__lineNumber_21(int32_t value)
	{
		____lineNumber_21 = value;
	}

	inline static int32_t get_offset_of__isEndOfFile_22() { return static_cast<int32_t>(offsetof(JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67, ____isEndOfFile_22)); }
	inline bool get__isEndOfFile_22() const { return ____isEndOfFile_22; }
	inline bool* get_address_of__isEndOfFile_22() { return &____isEndOfFile_22; }
	inline void set__isEndOfFile_22(bool value)
	{
		____isEndOfFile_22 = value;
	}

	inline static int32_t get_offset_of__stringBuffer_23() { return static_cast<int32_t>(offsetof(JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67, ____stringBuffer_23)); }
	inline StringBuffer_tB83673E85769C96B8F940472DC605952E659C166  get__stringBuffer_23() const { return ____stringBuffer_23; }
	inline StringBuffer_tB83673E85769C96B8F940472DC605952E659C166 * get_address_of__stringBuffer_23() { return &____stringBuffer_23; }
	inline void set__stringBuffer_23(StringBuffer_tB83673E85769C96B8F940472DC605952E659C166  value)
	{
		____stringBuffer_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____stringBuffer_23))->____buffer_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__stringReference_24() { return static_cast<int32_t>(offsetof(JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67, ____stringReference_24)); }
	inline StringReference_t80124660104372A4DBED107A750068E4A0442B35  get__stringReference_24() const { return ____stringReference_24; }
	inline StringReference_t80124660104372A4DBED107A750068E4A0442B35 * get_address_of__stringReference_24() { return &____stringReference_24; }
	inline void set__stringReference_24(StringReference_t80124660104372A4DBED107A750068E4A0442B35  value)
	{
		____stringReference_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____stringReference_24))->____chars_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__arrayPool_25() { return static_cast<int32_t>(offsetof(JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67, ____arrayPool_25)); }
	inline RuntimeObject* get__arrayPool_25() const { return ____arrayPool_25; }
	inline RuntimeObject** get_address_of__arrayPool_25() { return &____arrayPool_25; }
	inline void set__arrayPool_25(RuntimeObject* value)
	{
		____arrayPool_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arrayPool_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertyNameTableU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67, ___U3CPropertyNameTableU3Ek__BackingField_26)); }
	inline JsonNameTable_tCFEAB3ABD51FD3735D5FE2A4C8899C474E63F8EF * get_U3CPropertyNameTableU3Ek__BackingField_26() const { return ___U3CPropertyNameTableU3Ek__BackingField_26; }
	inline JsonNameTable_tCFEAB3ABD51FD3735D5FE2A4C8899C474E63F8EF ** get_address_of_U3CPropertyNameTableU3Ek__BackingField_26() { return &___U3CPropertyNameTableU3Ek__BackingField_26; }
	inline void set_U3CPropertyNameTableU3Ek__BackingField_26(JsonNameTable_tCFEAB3ABD51FD3735D5FE2A4C8899C474E63F8EF * value)
	{
		___U3CPropertyNameTableU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertyNameTableU3Ek__BackingField_26), (void*)value);
	}
};


// Newtonsoft.Json.JsonTextWriter
struct JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C  : public JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837
{
public:
	// System.Boolean Newtonsoft.Json.JsonTextWriter::_safeAsync
	bool ____safeAsync_14;
	// System.IO.TextWriter Newtonsoft.Json.JsonTextWriter::_writer
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ____writer_15;
	// Newtonsoft.Json.Utilities.Base64Encoder Newtonsoft.Json.JsonTextWriter::_base64Encoder
	Base64Encoder_t116CFC4CA26BB1B1DC2C3DE3BB4DAD22CD39BC78 * ____base64Encoder_16;
	// System.Char Newtonsoft.Json.JsonTextWriter::_indentChar
	Il2CppChar ____indentChar_17;
	// System.Int32 Newtonsoft.Json.JsonTextWriter::_indentation
	int32_t ____indentation_18;
	// System.Char Newtonsoft.Json.JsonTextWriter::_quoteChar
	Il2CppChar ____quoteChar_19;
	// System.Boolean Newtonsoft.Json.JsonTextWriter::_quoteName
	bool ____quoteName_20;
	// System.Boolean[] Newtonsoft.Json.JsonTextWriter::_charEscapeFlags
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____charEscapeFlags_21;
	// System.Char[] Newtonsoft.Json.JsonTextWriter::_writeBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____writeBuffer_22;
	// Newtonsoft.Json.IArrayPool`1<System.Char> Newtonsoft.Json.JsonTextWriter::_arrayPool
	RuntimeObject* ____arrayPool_23;
	// System.Char[] Newtonsoft.Json.JsonTextWriter::_indentChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____indentChars_24;

public:
	inline static int32_t get_offset_of__safeAsync_14() { return static_cast<int32_t>(offsetof(JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C, ____safeAsync_14)); }
	inline bool get__safeAsync_14() const { return ____safeAsync_14; }
	inline bool* get_address_of__safeAsync_14() { return &____safeAsync_14; }
	inline void set__safeAsync_14(bool value)
	{
		____safeAsync_14 = value;
	}

	inline static int32_t get_offset_of__writer_15() { return static_cast<int32_t>(offsetof(JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C, ____writer_15)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get__writer_15() const { return ____writer_15; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of__writer_15() { return &____writer_15; }
	inline void set__writer_15(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		____writer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____writer_15), (void*)value);
	}

	inline static int32_t get_offset_of__base64Encoder_16() { return static_cast<int32_t>(offsetof(JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C, ____base64Encoder_16)); }
	inline Base64Encoder_t116CFC4CA26BB1B1DC2C3DE3BB4DAD22CD39BC78 * get__base64Encoder_16() const { return ____base64Encoder_16; }
	inline Base64Encoder_t116CFC4CA26BB1B1DC2C3DE3BB4DAD22CD39BC78 ** get_address_of__base64Encoder_16() { return &____base64Encoder_16; }
	inline void set__base64Encoder_16(Base64Encoder_t116CFC4CA26BB1B1DC2C3DE3BB4DAD22CD39BC78 * value)
	{
		____base64Encoder_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____base64Encoder_16), (void*)value);
	}

	inline static int32_t get_offset_of__indentChar_17() { return static_cast<int32_t>(offsetof(JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C, ____indentChar_17)); }
	inline Il2CppChar get__indentChar_17() const { return ____indentChar_17; }
	inline Il2CppChar* get_address_of__indentChar_17() { return &____indentChar_17; }
	inline void set__indentChar_17(Il2CppChar value)
	{
		____indentChar_17 = value;
	}

	inline static int32_t get_offset_of__indentation_18() { return static_cast<int32_t>(offsetof(JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C, ____indentation_18)); }
	inline int32_t get__indentation_18() const { return ____indentation_18; }
	inline int32_t* get_address_of__indentation_18() { return &____indentation_18; }
	inline void set__indentation_18(int32_t value)
	{
		____indentation_18 = value;
	}

	inline static int32_t get_offset_of__quoteChar_19() { return static_cast<int32_t>(offsetof(JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C, ____quoteChar_19)); }
	inline Il2CppChar get__quoteChar_19() const { return ____quoteChar_19; }
	inline Il2CppChar* get_address_of__quoteChar_19() { return &____quoteChar_19; }
	inline void set__quoteChar_19(Il2CppChar value)
	{
		____quoteChar_19 = value;
	}

	inline static int32_t get_offset_of__quoteName_20() { return static_cast<int32_t>(offsetof(JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C, ____quoteName_20)); }
	inline bool get__quoteName_20() const { return ____quoteName_20; }
	inline bool* get_address_of__quoteName_20() { return &____quoteName_20; }
	inline void set__quoteName_20(bool value)
	{
		____quoteName_20 = value;
	}

	inline static int32_t get_offset_of__charEscapeFlags_21() { return static_cast<int32_t>(offsetof(JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C, ____charEscapeFlags_21)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__charEscapeFlags_21() const { return ____charEscapeFlags_21; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__charEscapeFlags_21() { return &____charEscapeFlags_21; }
	inline void set__charEscapeFlags_21(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____charEscapeFlags_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____charEscapeFlags_21), (void*)value);
	}

	inline static int32_t get_offset_of__writeBuffer_22() { return static_cast<int32_t>(offsetof(JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C, ____writeBuffer_22)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__writeBuffer_22() const { return ____writeBuffer_22; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__writeBuffer_22() { return &____writeBuffer_22; }
	inline void set__writeBuffer_22(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____writeBuffer_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____writeBuffer_22), (void*)value);
	}

	inline static int32_t get_offset_of__arrayPool_23() { return static_cast<int32_t>(offsetof(JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C, ____arrayPool_23)); }
	inline RuntimeObject* get__arrayPool_23() const { return ____arrayPool_23; }
	inline RuntimeObject** get_address_of__arrayPool_23() { return &____arrayPool_23; }
	inline void set__arrayPool_23(RuntimeObject* value)
	{
		____arrayPool_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arrayPool_23), (void*)value);
	}

	inline static int32_t get_offset_of__indentChars_24() { return static_cast<int32_t>(offsetof(JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C, ____indentChars_24)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__indentChars_24() const { return ____indentChars_24; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__indentChars_24() { return &____indentChars_24; }
	inline void set__indentChars_24(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____indentChars_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____indentChars_24), (void*)value);
	}
};


// UnityEngine.UIElements.KeyDownEvent
struct KeyDownEvent_t6E6B858C52C2EB50613406F1351553A16EC1A12E  : public KeyboardEventBase_1_t241DE9277CA8B10D5E950EC6995711467412743E
{
public:

public:
};


// UnityEngine.UIElements.KeyUpEvent
struct KeyUpEvent_t296156EABD1A71AE270142AAC66BCC5A2C8D4D9A  : public KeyboardEventBase_1_t470115110F914E0A4BC09D581661B1E92C85588E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mCDADB37348616291D935F887419B63B2A71C33C7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mFB6DD1A93003C24E9A3D336F11E42A6D9F32DF73_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mF0BA207F535079B4CF417B98FF907B2721500E72_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m238EA078B19FA3DD20192EC8510D23EB98ED73D8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVectorView_1_GetAt_m0B91EE91DEF45B972A0D9955BCBF16BEB326C1DE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m1C93E3E162F97E4913EE486B30CA28758E638923_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m2BCD5412D5BA04AE766FF7657BC4A62CDCF4BD16_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue);


// System.Object System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::GetAt(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ListToBindableVectorViewAdapter_GetAt_m4B138FEE3A71058B2D8B39DF8BCE91EF18E317C2 (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, uint32_t ___index0, const RuntimeMethod* method);
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ListToBindableVectorViewAdapter_get_Size_m639607FFD5260E793DE3C653992EEE933C570826 (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::IndexOf(System.Object,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListToBindableVectorViewAdapter_IndexOf_m1C9D9F10213594BA4538F263EE5EA9B27A13BAAD (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, RuntimeObject * ___value0, uint32_t* ___index1, const RuntimeMethod* method);

// COM Callable Wrapper for Newtonsoft.Json.Linq.JTokenWriter
struct JTokenWriter_tE85DB62D1DAA4AB2A04389BB708AC60A4A59C659_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<JTokenWriter_tE85DB62D1DAA4AB2A04389BB708AC60A4A59C659_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline JTokenWriter_tE85DB62D1DAA4AB2A04389BB708AC60A4A59C659_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<JTokenWriter_tE85DB62D1DAA4AB2A04389BB708AC60A4A59C659_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_JTokenWriter_tE85DB62D1DAA4AB2A04389BB708AC60A4A59C659(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(JTokenWriter_tE85DB62D1DAA4AB2A04389BB708AC60A4A59C659_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) JTokenWriter_tE85DB62D1DAA4AB2A04389BB708AC60A4A59C659_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Linq.JValue
struct JValue_tAC32114DAAD0302C91FE726A0075D16F75250E96_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<JValue_tAC32114DAAD0302C91FE726A0075D16F75250E96_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113, IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline JValue_tAC32114DAAD0302C91FE726A0075D16F75250E96_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<JValue_tAC32114DAAD0302C91FE726A0075D16F75250E96_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(5);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID;
		interfaceIds[2] = IIterable_1_t68030302F5F045341EA18D5793D2982A0229A0C9::IID;
		interfaceIds[3] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 5;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mCDADB37348616291D935F887419B63B2A71C33C7(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mCDADB37348616291D935F887419B63B2A71C33C7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mFB6DD1A93003C24E9A3D336F11E42A6D9F32DF73(IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mFB6DD1A93003C24E9A3D336F11E42A6D9F32DF73_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mF0BA207F535079B4CF417B98FF907B2721500E72(IIterator_1_t9BD98BF640DD88139F4CE1EEFF81DE452E2AFFB6** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mF0BA207F535079B4CF417B98FF907B2721500E72_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m238EA078B19FA3DD20192EC8510D23EB98ED73D8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m238EA078B19FA3DD20192EC8510D23EB98ED73D8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_JValue_tAC32114DAAD0302C91FE726A0075D16F75250E96(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(JValue_tAC32114DAAD0302C91FE726A0075D16F75250E96_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) JValue_tAC32114DAAD0302C91FE726A0075D16F75250E96_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_tBC657EE757E9DCB303371710D65BAE9B58BF84EC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<JsonConverterCollection_tBC657EE757E9DCB303371710D65BAE9B58BF84EC_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A
{
	inline JsonConverterCollection_tBC657EE757E9DCB303371710D65BAE9B58BF84EC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<JsonConverterCollection_tBC657EE757E9DCB303371710D65BAE9B58BF84EC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[3] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mCDADB37348616291D935F887419B63B2A71C33C7(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mCDADB37348616291D935F887419B63B2A71C33C7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m0B91EE91DEF45B972A0D9955BCBF16BEB326C1DE(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m0B91EE91DEF45B972A0D9955BCBF16BEB326C1DE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1C93E3E162F97E4913EE486B30CA28758E638923(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m1C93E3E162F97E4913EE486B30CA28758E638923_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m2BCD5412D5BA04AE766FF7657BC4A62CDCF4BD16(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m2BCD5412D5BA04AE766FF7657BC4A62CDCF4BD16_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_JsonConverterCollection_tBC657EE757E9DCB303371710D65BAE9B58BF84EC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(JsonConverterCollection_tBC657EE757E9DCB303371710D65BAE9B58BF84EC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) JsonConverterCollection_tBC657EE757E9DCB303371710D65BAE9B58BF84EC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.Serialization.JsonPropertyCollection
struct JsonPropertyCollection_tBC0D13C5E41B9E47173FD28BB45B817309C17347_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<JsonPropertyCollection_tBC0D13C5E41B9E47173FD28BB45B817309C17347_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC
{
	inline JsonPropertyCollection_tBC0D13C5E41B9E47173FD28BB45B817309C17347_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<JsonPropertyCollection_tBC0D13C5E41B9E47173FD28BB45B817309C17347_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_JsonPropertyCollection_tBC0D13C5E41B9E47173FD28BB45B817309C17347(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(JsonPropertyCollection_tBC0D13C5E41B9E47173FD28BB45B817309C17347_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) JsonPropertyCollection_tBC0D13C5E41B9E47173FD28BB45B817309C17347_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.JsonTextReader
struct JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) JsonTextReader_t9776228AA709525B476553B74487353ADCCABF67_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Newtonsoft.Json.JsonTextWriter
struct JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) JsonTextWriter_t987C10D936412CF5A0D7B1F121A3C8BAA8E8700C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.KeyDownEvent
struct KeyDownEvent_t6E6B858C52C2EB50613406F1351553A16EC1A12E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyDownEvent_t6E6B858C52C2EB50613406F1351553A16EC1A12E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyDownEvent_t6E6B858C52C2EB50613406F1351553A16EC1A12E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyDownEvent_t6E6B858C52C2EB50613406F1351553A16EC1A12E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyDownEvent_t6E6B858C52C2EB50613406F1351553A16EC1A12E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyDownEvent_t6E6B858C52C2EB50613406F1351553A16EC1A12E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyDownEvent_t6E6B858C52C2EB50613406F1351553A16EC1A12E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.KeyUpEvent
struct KeyUpEvent_t296156EABD1A71AE270142AAC66BCC5A2C8D4D9A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyUpEvent_t296156EABD1A71AE270142AAC66BCC5A2C8D4D9A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeyUpEvent_t296156EABD1A71AE270142AAC66BCC5A2C8D4D9A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyUpEvent_t296156EABD1A71AE270142AAC66BCC5A2C8D4D9A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyUpEvent_t296156EABD1A71AE270142AAC66BCC5A2C8D4D9A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyUpEvent_t296156EABD1A71AE270142AAC66BCC5A2C8D4D9A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyUpEvent_t296156EABD1A71AE270142AAC66BCC5A2C8D4D9A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeywordRecognizer_t118BF0FCD4DEE469BD742508DBB9AA9BDED9A15F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Specialized.ListDictionary
struct ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ListDictionaryInternal
struct ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper>, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVectorView_GetAt_mB119DB25AF57A337D2C7112063778434CE0F5CF5(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject * returnValue;
		try
		{
			ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __thisValue = (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 *)GetManagedObjectInline();
			returnValue = ListToBindableVectorViewAdapter_GetAt_m4B138FEE3A71058B2D8B39DF8BCE91EF18E317C2(__thisValue, ___index0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		Il2CppIInspectable* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBindableVectorView_get_Size_m4F48139B27CB215D7E728F77E748FA6573F7DA09(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __thisValue = (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 *)GetManagedObjectInline();
			returnValue = ListToBindableVectorViewAdapter_get_Size_m639607FFD5260E793DE3C653992EEE933C570826(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBindableVectorView_IndexOf_mD85EC41D34BC2E450FA0133CC802906157D765F2(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___value0' to managed representation
		RuntimeObject * ____value0_unmarshaled = NULL;
		if (___value0 != NULL)
		{
			____value0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____value0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____value0_unmarshaled), Il2CppIInspectable::IID, ___value0);
			}
		}
		else
		{
			____value0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___index1' to managed representation
		uint32_t ____index1_empty = 0;

		// Managed method invocation
		bool returnValue;
		try
		{
			ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __thisValue = (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 *)GetManagedObjectInline();
			returnValue = ListToBindableVectorViewAdapter_IndexOf_m1C9D9F10213594BA4538F263EE5EA9B27A13BAAD(__thisValue, ____value0_unmarshaled, (&____index1_empty), NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of parameter '___index1' back from managed representation
		*___index1 = ____index1_empty;

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.MACTripleDES
struct MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MACTripleDES_tBAEDFA72C3F34B7904A376FBBB78654994F56776_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MCMDictionary
struct MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MCMDictionary_tEA8C1F89F5B3783040584C2C390C758B1420CCDF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.Cryptography.MD2Managed
struct MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MD2Managed_t1514C013791257F8B06AE1C9A207C45D987353F1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.Cryptography.MD2Managed
struct MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MD2Managed_tC7D599C24FA4B485FD7C8823FCF89DAADC133BBE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.Cryptography.MD4Managed
struct MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MD4Managed_tBCFD5443E11A113593CE6525F51680180E118FF8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Mono.Security.Cryptography.MD4Managed
struct MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MD4Managed_tBCB8C0D6B2F2DC3ABAB71FBFB97EA2EC2550F6D9_ComCallableWrapper(obj));
}
