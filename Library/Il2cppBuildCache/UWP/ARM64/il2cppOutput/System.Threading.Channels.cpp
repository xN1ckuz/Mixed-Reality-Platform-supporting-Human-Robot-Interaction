#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Threading.Channels.AsyncOperation`1<System.Boolean>
struct AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3;
// System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>
struct TaskCompletionSource_1_t2AD68620D4F75522376359B6E5D330A4200E4C43;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<System.VoidResult>
struct Task_1_t4A6ED4D7FB72DD722DD2881D384213D4B200E3DB;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Reflection.Assembly
struct Assembly_t;
// System.Threading.Channels.AsyncOperation
struct AsyncOperation_tC068933A96432781A9EBDDA477EC08F0204E366D;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.Channels.ChannelClosedException
struct ChannelClosedException_t2FDDA121452D562D4E29A33A284ABDEAFAA377FC;
// System.Threading.Channels.ChannelOptions
struct ChannelOptions_t3EA241A7A7399CCFADEAC46840C3261333C87C1F;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tD738FE6B83F63AC66FDD73BCD3193016FDEBFAB0;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.OperationCanceledException
struct OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB;
// System.Resources.ResourceManager
struct ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Type
struct Type_t;
// System.Threading.Channels.UnboundedChannelOptions
struct UnboundedChannelOptions_tBBA3DF6597E410CBEB8D566C90BE623026BF9951;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperation_tC068933A96432781A9EBDDA477EC08F0204E366D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelClosedException_t2FDDA121452D562D4E29A33A284ABDEAFAA377FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_tB1AE910EE577E5DE03393C715BFBDC8D6EC84167_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral6EDEF73EC6D81532DEF15142E4DAC84E34BD5B97;
IL2CPP_EXTERN_C String_t* _stringLiteral781E7C18C002A07F55D58B4D0D410C4C5C545604;
IL2CPP_EXTERN_C String_t* _stringLiteral811236D662946FF821D609D9CF1DA6224C9EA88B;
IL2CPP_EXTERN_C String_t* _stringLiteral86514F0AEEC5D2FF36516A683B5598E362F51466;
IL2CPP_EXTERN_C String_t* _stringLiteral9144EDAB6BB6DB5C0B53154036CBBB22077B4904;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1_TrySetException_m95B5507D7C3E836A3F2DFC9E162249F599E2F274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1_TrySetResult_mA91B0F337B953A11C15D7739343FA617C39039FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1_get_Next_mE316C48E144A00AE554E4C90EB5143E4468E8BB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1_get_ValueTaskOfT_mFA9F9B9AB802B424F5FA0D3343E1B68D1136D07D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1_set_Next_mDFA79D1261AA992DC962F36520A4B88448A2A15B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_AvailableSentinel_m33B25FCD01BCB0F8104079ECD7B9139EA4EBE74F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_CompletedSentinel_mF7831A6A636B51A38F2930FF86732A0474A64974_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_ThrowIncompleteOperationException_mD23BC87D36CB0EE8FEB2EE0B2BCF02AD8317DC59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_ThrowIncorrectCurrentIdException_m253A1D41B2DD00FA48992E4D3A08A9DB42BD77AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_ThrowMultipleContinuations_m14AE19D071DDA6DFCF23E278D54C187432EF9547_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetCanceled_m26F388E3019AE74E07CE86F8445F69DD3EF3CD93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetException_m87D05074387CB39F6069A807B7C30F7D1621B1E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_mEF2F3AA6471C8039589AE7300DE2F3FD157F6FF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mDE606EC551EE4EFD2B37546F0F3A5AA0C03CEC94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mE4CC5E12053AB2AF338DC99FD1DB37FB780C0F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SR_t6716B7DC452172CA4CFCE86F0002BCD2261D88B4_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE02413A2689695AA67062DA97430A0FA8B088A1B 
{
public:

public:
};


// System.Object


// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3, ___m_task_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>
struct TaskCompletionSource_1_t2AD68620D4F75522376359B6E5D330A4200E4C43  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t4A6ED4D7FB72DD722DD2881D384213D4B200E3DB * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t2AD68620D4F75522376359B6E5D330A4200E4C43, ___m_task_0)); }
	inline Task_1_t4A6ED4D7FB72DD722DD2881D384213D4B200E3DB * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t4A6ED4D7FB72DD722DD2881D384213D4B200E3DB ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t4A6ED4D7FB72DD722DD2881D384213D4B200E3DB * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Threading.Channels.AsyncOperation
struct AsyncOperation_tC068933A96432781A9EBDDA477EC08F0204E366D  : public RuntimeObject
{
public:

public:
};

struct AsyncOperation_tC068933A96432781A9EBDDA477EC08F0204E366D_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.Channels.AsyncOperation::s_availableSentinel
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_availableSentinel_0;
	// System.Action`1<System.Object> System.Threading.Channels.AsyncOperation::s_completedSentinel
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_completedSentinel_1;

public:
	inline static int32_t get_offset_of_s_availableSentinel_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tC068933A96432781A9EBDDA477EC08F0204E366D_StaticFields, ___s_availableSentinel_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_availableSentinel_0() const { return ___s_availableSentinel_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_availableSentinel_0() { return &___s_availableSentinel_0; }
	inline void set_s_availableSentinel_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_availableSentinel_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_availableSentinel_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedSentinel_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tC068933A96432781A9EBDDA477EC08F0204E366D_StaticFields, ___s_completedSentinel_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_completedSentinel_1() const { return ___s_completedSentinel_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_completedSentinel_1() { return &___s_completedSentinel_1; }
	inline void set_s_completedSentinel_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_completedSentinel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedSentinel_1), (void*)value);
	}
};


// System.Threading.Channels.Channel
struct Channel_t1490515399865D0A381DF2BA60863024494657EE  : public RuntimeObject
{
public:

public:
};


// System.Threading.Channels.ChannelOptions
struct ChannelOptions_t3EA241A7A7399CCFADEAC46840C3261333C87C1F  : public RuntimeObject
{
public:
	// System.Boolean System.Threading.Channels.ChannelOptions::<SingleWriter>k__BackingField
	bool ___U3CSingleWriterU3Ek__BackingField_0;
	// System.Boolean System.Threading.Channels.ChannelOptions::<SingleReader>k__BackingField
	bool ___U3CSingleReaderU3Ek__BackingField_1;
	// System.Boolean System.Threading.Channels.ChannelOptions::<AllowSynchronousContinuations>k__BackingField
	bool ___U3CAllowSynchronousContinuationsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CSingleWriterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ChannelOptions_t3EA241A7A7399CCFADEAC46840C3261333C87C1F, ___U3CSingleWriterU3Ek__BackingField_0)); }
	inline bool get_U3CSingleWriterU3Ek__BackingField_0() const { return ___U3CSingleWriterU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CSingleWriterU3Ek__BackingField_0() { return &___U3CSingleWriterU3Ek__BackingField_0; }
	inline void set_U3CSingleWriterU3Ek__BackingField_0(bool value)
	{
		___U3CSingleWriterU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSingleReaderU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChannelOptions_t3EA241A7A7399CCFADEAC46840C3261333C87C1F, ___U3CSingleReaderU3Ek__BackingField_1)); }
	inline bool get_U3CSingleReaderU3Ek__BackingField_1() const { return ___U3CSingleReaderU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CSingleReaderU3Ek__BackingField_1() { return &___U3CSingleReaderU3Ek__BackingField_1; }
	inline void set_U3CSingleReaderU3Ek__BackingField_1(bool value)
	{
		___U3CSingleReaderU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CAllowSynchronousContinuationsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChannelOptions_t3EA241A7A7399CCFADEAC46840C3261333C87C1F, ___U3CAllowSynchronousContinuationsU3Ek__BackingField_2)); }
	inline bool get_U3CAllowSynchronousContinuationsU3Ek__BackingField_2() const { return ___U3CAllowSynchronousContinuationsU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CAllowSynchronousContinuationsU3Ek__BackingField_2() { return &___U3CAllowSynchronousContinuationsU3Ek__BackingField_2; }
	inline void set_U3CAllowSynchronousContinuationsU3Ek__BackingField_2(bool value)
	{
		___U3CAllowSynchronousContinuationsU3Ek__BackingField_2 = value;
	}
};


// System.Threading.Channels.ChannelUtilities
struct ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6  : public RuntimeObject
{
public:

public:
};

struct ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_StaticFields
{
public:
	// System.Exception System.Threading.Channels.ChannelUtilities::s_doneWritingSentinel
	Exception_t * ___s_doneWritingSentinel_0;
	// System.Threading.Tasks.Task`1<System.Boolean> System.Threading.Channels.ChannelUtilities::s_trueTask
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___s_trueTask_1;
	// System.Threading.Tasks.Task`1<System.Boolean> System.Threading.Channels.ChannelUtilities::s_falseTask
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___s_falseTask_2;
	// System.Threading.Tasks.Task System.Threading.Channels.ChannelUtilities::s_neverCompletingTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_neverCompletingTask_3;

public:
	inline static int32_t get_offset_of_s_doneWritingSentinel_0() { return static_cast<int32_t>(offsetof(ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_StaticFields, ___s_doneWritingSentinel_0)); }
	inline Exception_t * get_s_doneWritingSentinel_0() const { return ___s_doneWritingSentinel_0; }
	inline Exception_t ** get_address_of_s_doneWritingSentinel_0() { return &___s_doneWritingSentinel_0; }
	inline void set_s_doneWritingSentinel_0(Exception_t * value)
	{
		___s_doneWritingSentinel_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_doneWritingSentinel_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_trueTask_1() { return static_cast<int32_t>(offsetof(ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_StaticFields, ___s_trueTask_1)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_s_trueTask_1() const { return ___s_trueTask_1; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_s_trueTask_1() { return &___s_trueTask_1; }
	inline void set_s_trueTask_1(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___s_trueTask_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_trueTask_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_falseTask_2() { return static_cast<int32_t>(offsetof(ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_StaticFields, ___s_falseTask_2)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_s_falseTask_2() const { return ___s_falseTask_2; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_s_falseTask_2() { return &___s_falseTask_2; }
	inline void set_s_falseTask_2(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___s_falseTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_falseTask_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_neverCompletingTask_3() { return static_cast<int32_t>(offsetof(ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_StaticFields, ___s_neverCompletingTask_3)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_neverCompletingTask_3() const { return ___s_neverCompletingTask_3; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_neverCompletingTask_3() { return &___s_neverCompletingTask_3; }
	inline void set_s_neverCompletingTask_3(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_neverCompletingTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_neverCompletingTask_3), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// FxResources.System.Threading.Channels.SR
struct SR_t6716B7DC452172CA4CFCE86F0002BCD2261D88B4  : public RuntimeObject
{
public:

public:
};


// System.SR
struct SR_tB1AE910EE577E5DE03393C715BFBDC8D6EC84167  : public RuntimeObject
{
public:

public:
};

struct SR_tB1AE910EE577E5DE03393C715BFBDC8D6EC84167_StaticFields
{
public:
	// System.Resources.ResourceManager System.SR::s_resourceManager
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * ___s_resourceManager_0;

public:
	inline static int32_t get_offset_of_s_resourceManager_0() { return static_cast<int32_t>(offsetof(SR_tB1AE910EE577E5DE03393C715BFBDC8D6EC84167_StaticFields, ___s_resourceManager_0)); }
	inline ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * get_s_resourceManager_0() const { return ___s_resourceManager_0; }
	inline ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A ** get_address_of_s_resourceManager_0() { return &___s_resourceManager_0; }
	inline void set_s_resourceManager_0(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * value)
	{
		___s_resourceManager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_resourceManager_0), (void*)value);
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

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};


// System.Threading.Tasks.ValueTask`1<System.Boolean>
struct ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC 
{
public:
	// System.Object System.Threading.Tasks.ValueTask`1::_obj
	RuntimeObject * ____obj_0;
	// TResult System.Threading.Tasks.ValueTask`1::_result
	bool ____result_1;
	// System.Int16 System.Threading.Tasks.ValueTask`1::_token
	int16_t ____token_2;
	// System.Boolean System.Threading.Tasks.ValueTask`1::_continueOnCapturedContext
	bool ____continueOnCapturedContext_3;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC, ____obj_0)); }
	inline RuntimeObject * get__obj_0() const { return ____obj_0; }
	inline RuntimeObject ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(RuntimeObject * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}

	inline static int32_t get_offset_of__result_1() { return static_cast<int32_t>(offsetof(ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC, ____result_1)); }
	inline bool get__result_1() const { return ____result_1; }
	inline bool* get_address_of__result_1() { return &____result_1; }
	inline void set__result_1(bool value)
	{
		____result_1 = value;
	}

	inline static int32_t get_offset_of__token_2() { return static_cast<int32_t>(offsetof(ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC, ____token_2)); }
	inline int16_t get__token_2() const { return ____token_2; }
	inline int16_t* get_address_of__token_2() { return &____token_2; }
	inline void set__token_2(int16_t value)
	{
		____token_2 = value;
	}

	inline static int32_t get_offset_of__continueOnCapturedContext_3() { return static_cast<int32_t>(offsetof(ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC, ____continueOnCapturedContext_3)); }
	inline bool get__continueOnCapturedContext_3() const { return ____continueOnCapturedContext_3; }
	inline bool* get_address_of__continueOnCapturedContext_3() { return &____continueOnCapturedContext_3; }
	inline void set__continueOnCapturedContext_3(bool value)
	{
		____continueOnCapturedContext_3 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
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

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
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


// Internal.PaddingFor32
struct PaddingFor32_t19F7BCEEB4CB6A5A380A169D5B1D352734C741D4 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t PaddingFor32_t19F7BCEEB4CB6A5A380A169D5B1D352734C741D4__padding[124];
	};

public:
};


// System.Threading.Channels.UnboundedChannelOptions
struct UnboundedChannelOptions_tBBA3DF6597E410CBEB8D566C90BE623026BF9951  : public ChannelOptions_t3EA241A7A7399CCFADEAC46840C3261333C87C1F
{
public:

public:
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.VoidResult
struct VoidResult_tFCC59E726D7462E308A9E79CF15E7B4BBEF399D9 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidResult_tFCC59E726D7462E308A9E79CF15E7B4BBEF399D9__padding[1];
	};

public:
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_pinvoke
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_com
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Resources.UltimateResourceFallbackLocation
struct UltimateResourceFallbackLocation_tA4EBEA627CD0C386314EBB60D7A4225C435D0F0B 
{
public:
	// System.Int32 System.Resources.UltimateResourceFallbackLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UltimateResourceFallbackLocation_tA4EBEA627CD0C386314EBB60D7A4225C435D0F0B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Channels.AsyncOperation`1<System.Boolean>
struct AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC  : public AsyncOperation_tC068933A96432781A9EBDDA477EC08F0204E366D
{
public:
	// System.Threading.CancellationTokenRegistration System.Threading.Channels.AsyncOperation`1::_registration
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ____registration_2;
	// System.Boolean System.Threading.Channels.AsyncOperation`1::_pooled
	bool ____pooled_3;
	// System.Boolean System.Threading.Channels.AsyncOperation`1::_runContinuationsAsynchronously
	bool ____runContinuationsAsynchronously_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Channels.AsyncOperation`1::_completionReserved
	int32_t ____completionReserved_5;
	// TResult System.Threading.Channels.AsyncOperation`1::_result
	bool ____result_6;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Threading.Channels.AsyncOperation`1::_error
	ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ____error_7;
	// System.Action`1<System.Object> System.Threading.Channels.AsyncOperation`1::_continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____continuation_8;
	// System.Object System.Threading.Channels.AsyncOperation`1::_continuationState
	RuntimeObject * ____continuationState_9;
	// System.Object System.Threading.Channels.AsyncOperation`1::_schedulingContext
	RuntimeObject * ____schedulingContext_10;
	// System.Threading.ExecutionContext System.Threading.Channels.AsyncOperation`1::_executionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ____executionContext_11;
	// System.Int16 System.Threading.Channels.AsyncOperation`1::_currentId
	int16_t ____currentId_12;
	// System.Threading.Channels.AsyncOperation`1<TResult> System.Threading.Channels.AsyncOperation`1::<Next>k__BackingField
	AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * ___U3CNextU3Ek__BackingField_13;
	// System.Threading.CancellationToken System.Threading.Channels.AsyncOperation`1::<CancellationToken>k__BackingField
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___U3CCancellationTokenU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of__registration_2() { return static_cast<int32_t>(offsetof(AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC, ____registration_2)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get__registration_2() const { return ____registration_2; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of__registration_2() { return &____registration_2; }
	inline void set__registration_2(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		____registration_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____registration_2))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&____registration_2))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__pooled_3() { return static_cast<int32_t>(offsetof(AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC, ____pooled_3)); }
	inline bool get__pooled_3() const { return ____pooled_3; }
	inline bool* get_address_of__pooled_3() { return &____pooled_3; }
	inline void set__pooled_3(bool value)
	{
		____pooled_3 = value;
	}

	inline static int32_t get_offset_of__runContinuationsAsynchronously_4() { return static_cast<int32_t>(offsetof(AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC, ____runContinuationsAsynchronously_4)); }
	inline bool get__runContinuationsAsynchronously_4() const { return ____runContinuationsAsynchronously_4; }
	inline bool* get_address_of__runContinuationsAsynchronously_4() { return &____runContinuationsAsynchronously_4; }
	inline void set__runContinuationsAsynchronously_4(bool value)
	{
		____runContinuationsAsynchronously_4 = value;
	}

	inline static int32_t get_offset_of__completionReserved_5() { return static_cast<int32_t>(offsetof(AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC, ____completionReserved_5)); }
	inline int32_t get__completionReserved_5() const { return ____completionReserved_5; }
	inline int32_t* get_address_of__completionReserved_5() { return &____completionReserved_5; }
	inline void set__completionReserved_5(int32_t value)
	{
		____completionReserved_5 = value;
	}

	inline static int32_t get_offset_of__result_6() { return static_cast<int32_t>(offsetof(AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC, ____result_6)); }
	inline bool get__result_6() const { return ____result_6; }
	inline bool* get_address_of__result_6() { return &____result_6; }
	inline void set__result_6(bool value)
	{
		____result_6 = value;
	}

	inline static int32_t get_offset_of__error_7() { return static_cast<int32_t>(offsetof(AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC, ____error_7)); }
	inline ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * get__error_7() const { return ____error_7; }
	inline ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 ** get_address_of__error_7() { return &____error_7; }
	inline void set__error_7(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * value)
	{
		____error_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____error_7), (void*)value);
	}

	inline static int32_t get_offset_of__continuation_8() { return static_cast<int32_t>(offsetof(AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC, ____continuation_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__continuation_8() const { return ____continuation_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__continuation_8() { return &____continuation_8; }
	inline void set__continuation_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____continuation_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____continuation_8), (void*)value);
	}

	inline static int32_t get_offset_of__continuationState_9() { return static_cast<int32_t>(offsetof(AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC, ____continuationState_9)); }
	inline RuntimeObject * get__continuationState_9() const { return ____continuationState_9; }
	inline RuntimeObject ** get_address_of__continuationState_9() { return &____continuationState_9; }
	inline void set__continuationState_9(RuntimeObject * value)
	{
		____continuationState_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____continuationState_9), (void*)value);
	}

	inline static int32_t get_offset_of__schedulingContext_10() { return static_cast<int32_t>(offsetof(AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC, ____schedulingContext_10)); }
	inline RuntimeObject * get__schedulingContext_10() const { return ____schedulingContext_10; }
	inline RuntimeObject ** get_address_of__schedulingContext_10() { return &____schedulingContext_10; }
	inline void set__schedulingContext_10(RuntimeObject * value)
	{
		____schedulingContext_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____schedulingContext_10), (void*)value);
	}

	inline static int32_t get_offset_of__executionContext_11() { return static_cast<int32_t>(offsetof(AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC, ____executionContext_11)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get__executionContext_11() const { return ____executionContext_11; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of__executionContext_11() { return &____executionContext_11; }
	inline void set__executionContext_11(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		____executionContext_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____executionContext_11), (void*)value);
	}

	inline static int32_t get_offset_of__currentId_12() { return static_cast<int32_t>(offsetof(AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC, ____currentId_12)); }
	inline int16_t get__currentId_12() const { return ____currentId_12; }
	inline int16_t* get_address_of__currentId_12() { return &____currentId_12; }
	inline void set__currentId_12(int16_t value)
	{
		____currentId_12 = value;
	}

	inline static int32_t get_offset_of_U3CNextU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC, ___U3CNextU3Ek__BackingField_13)); }
	inline AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * get_U3CNextU3Ek__BackingField_13() const { return ___U3CNextU3Ek__BackingField_13; }
	inline AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC ** get_address_of_U3CNextU3Ek__BackingField_13() { return &___U3CNextU3Ek__BackingField_13; }
	inline void set_U3CNextU3Ek__BackingField_13(AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * value)
	{
		___U3CNextU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNextU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCancellationTokenU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC, ___U3CCancellationTokenU3Ek__BackingField_14)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_U3CCancellationTokenU3Ek__BackingField_14() const { return ___U3CCancellationTokenU3Ek__BackingField_14; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_U3CCancellationTokenU3Ek__BackingField_14() { return &___U3CCancellationTokenU3Ek__BackingField_14; }
	inline void set_U3CCancellationTokenU3Ek__BackingField_14(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___U3CCancellationTokenU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CCancellationTokenU3Ek__BackingField_14))->___m_source_0), (void*)NULL);
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_40)); }
	inline bool get_m_result_40() const { return ___m_result_40; }
	inline bool* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(bool value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Resources.ResourceManager
struct ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A  : public RuntimeObject
{
public:
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___ResourceSets_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E * ____resourceSets_2;
	// System.String System.Resources.ResourceManager::moduleDir
	String_t* ___moduleDir_3;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t * ___MainAssembly_4;
	// System.Type System.Resources.ResourceManager::_locationInfo
	Type_t * ____locationInfo_5;
	// System.Type System.Resources.ResourceManager::_userResourceSet
	Type_t * ____userResourceSet_6;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____neutralResourcesCulture_7;
	// System.Resources.ResourceManager/CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 * ____lastUsedResourceCache_8;
	// System.Boolean System.Resources.ResourceManager::_ignoreCase
	bool ____ignoreCase_9;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_10;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_11;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_12;
	// System.Version System.Resources.ResourceManager::_satelliteContractVersion
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ____satelliteContractVersion_13;
	// System.Boolean System.Resources.ResourceManager::_lookedForSatelliteContractVersion
	bool ____lookedForSatelliteContractVersion_14;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t * ____callingAssembly_15;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 * ___m_callingAssembly_16;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_17;

public:
	inline static int32_t get_offset_of_BaseNameField_0() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___BaseNameField_0)); }
	inline String_t* get_BaseNameField_0() const { return ___BaseNameField_0; }
	inline String_t** get_address_of_BaseNameField_0() { return &___BaseNameField_0; }
	inline void set_BaseNameField_0(String_t* value)
	{
		___BaseNameField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BaseNameField_0), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceSets_1() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___ResourceSets_1)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_ResourceSets_1() const { return ___ResourceSets_1; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_ResourceSets_1() { return &___ResourceSets_1; }
	inline void set_ResourceSets_1(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___ResourceSets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceSets_1), (void*)value);
	}

	inline static int32_t get_offset_of__resourceSets_2() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____resourceSets_2)); }
	inline Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E * get__resourceSets_2() const { return ____resourceSets_2; }
	inline Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E ** get_address_of__resourceSets_2() { return &____resourceSets_2; }
	inline void set__resourceSets_2(Dictionary_2_tF591ED968D904B93A92B04B711C65E797B9D6E5E * value)
	{
		____resourceSets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____resourceSets_2), (void*)value);
	}

	inline static int32_t get_offset_of_moduleDir_3() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___moduleDir_3)); }
	inline String_t* get_moduleDir_3() const { return ___moduleDir_3; }
	inline String_t** get_address_of_moduleDir_3() { return &___moduleDir_3; }
	inline void set_moduleDir_3(String_t* value)
	{
		___moduleDir_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moduleDir_3), (void*)value);
	}

	inline static int32_t get_offset_of_MainAssembly_4() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___MainAssembly_4)); }
	inline Assembly_t * get_MainAssembly_4() const { return ___MainAssembly_4; }
	inline Assembly_t ** get_address_of_MainAssembly_4() { return &___MainAssembly_4; }
	inline void set_MainAssembly_4(Assembly_t * value)
	{
		___MainAssembly_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MainAssembly_4), (void*)value);
	}

	inline static int32_t get_offset_of__locationInfo_5() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____locationInfo_5)); }
	inline Type_t * get__locationInfo_5() const { return ____locationInfo_5; }
	inline Type_t ** get_address_of__locationInfo_5() { return &____locationInfo_5; }
	inline void set__locationInfo_5(Type_t * value)
	{
		____locationInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____locationInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of__userResourceSet_6() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____userResourceSet_6)); }
	inline Type_t * get__userResourceSet_6() const { return ____userResourceSet_6; }
	inline Type_t ** get_address_of__userResourceSet_6() { return &____userResourceSet_6; }
	inline void set__userResourceSet_6(Type_t * value)
	{
		____userResourceSet_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userResourceSet_6), (void*)value);
	}

	inline static int32_t get_offset_of__neutralResourcesCulture_7() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____neutralResourcesCulture_7)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__neutralResourcesCulture_7() const { return ____neutralResourcesCulture_7; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__neutralResourcesCulture_7() { return &____neutralResourcesCulture_7; }
	inline void set__neutralResourcesCulture_7(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____neutralResourcesCulture_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____neutralResourcesCulture_7), (void*)value);
	}

	inline static int32_t get_offset_of__lastUsedResourceCache_8() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____lastUsedResourceCache_8)); }
	inline CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 * get__lastUsedResourceCache_8() const { return ____lastUsedResourceCache_8; }
	inline CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 ** get_address_of__lastUsedResourceCache_8() { return &____lastUsedResourceCache_8; }
	inline void set__lastUsedResourceCache_8(CultureNameResourceSetPair_t7DF2947B0015A29C8148DB0F32695ECB59369A84 * value)
	{
		____lastUsedResourceCache_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastUsedResourceCache_8), (void*)value);
	}

	inline static int32_t get_offset_of__ignoreCase_9() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____ignoreCase_9)); }
	inline bool get__ignoreCase_9() const { return ____ignoreCase_9; }
	inline bool* get_address_of__ignoreCase_9() { return &____ignoreCase_9; }
	inline void set__ignoreCase_9(bool value)
	{
		____ignoreCase_9 = value;
	}

	inline static int32_t get_offset_of_UseManifest_10() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___UseManifest_10)); }
	inline bool get_UseManifest_10() const { return ___UseManifest_10; }
	inline bool* get_address_of_UseManifest_10() { return &___UseManifest_10; }
	inline void set_UseManifest_10(bool value)
	{
		___UseManifest_10 = value;
	}

	inline static int32_t get_offset_of_UseSatelliteAssem_11() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___UseSatelliteAssem_11)); }
	inline bool get_UseSatelliteAssem_11() const { return ___UseSatelliteAssem_11; }
	inline bool* get_address_of_UseSatelliteAssem_11() { return &___UseSatelliteAssem_11; }
	inline void set_UseSatelliteAssem_11(bool value)
	{
		___UseSatelliteAssem_11 = value;
	}

	inline static int32_t get_offset_of__fallbackLoc_12() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____fallbackLoc_12)); }
	inline int32_t get__fallbackLoc_12() const { return ____fallbackLoc_12; }
	inline int32_t* get_address_of__fallbackLoc_12() { return &____fallbackLoc_12; }
	inline void set__fallbackLoc_12(int32_t value)
	{
		____fallbackLoc_12 = value;
	}

	inline static int32_t get_offset_of__satelliteContractVersion_13() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____satelliteContractVersion_13)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get__satelliteContractVersion_13() const { return ____satelliteContractVersion_13; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of__satelliteContractVersion_13() { return &____satelliteContractVersion_13; }
	inline void set__satelliteContractVersion_13(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		____satelliteContractVersion_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____satelliteContractVersion_13), (void*)value);
	}

	inline static int32_t get_offset_of__lookedForSatelliteContractVersion_14() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____lookedForSatelliteContractVersion_14)); }
	inline bool get__lookedForSatelliteContractVersion_14() const { return ____lookedForSatelliteContractVersion_14; }
	inline bool* get_address_of__lookedForSatelliteContractVersion_14() { return &____lookedForSatelliteContractVersion_14; }
	inline void set__lookedForSatelliteContractVersion_14(bool value)
	{
		____lookedForSatelliteContractVersion_14 = value;
	}

	inline static int32_t get_offset_of__callingAssembly_15() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ____callingAssembly_15)); }
	inline Assembly_t * get__callingAssembly_15() const { return ____callingAssembly_15; }
	inline Assembly_t ** get_address_of__callingAssembly_15() { return &____callingAssembly_15; }
	inline void set__callingAssembly_15(Assembly_t * value)
	{
		____callingAssembly_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____callingAssembly_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_callingAssembly_16() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___m_callingAssembly_16)); }
	inline RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 * get_m_callingAssembly_16() const { return ___m_callingAssembly_16; }
	inline RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 ** get_address_of_m_callingAssembly_16() { return &___m_callingAssembly_16; }
	inline void set_m_callingAssembly_16(RuntimeAssembly_t799877C849878A70E10D25C690D7B0476DAF0B56 * value)
	{
		___m_callingAssembly_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callingAssembly_16), (void*)value);
	}

	inline static int32_t get_offset_of_resourceGroveler_17() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A, ___resourceGroveler_17)); }
	inline RuntimeObject* get_resourceGroveler_17() const { return ___resourceGroveler_17; }
	inline RuntimeObject** get_address_of_resourceGroveler_17() { return &___resourceGroveler_17; }
	inline void set_resourceGroveler_17(RuntimeObject* value)
	{
		___resourceGroveler_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceGroveler_17), (void*)value);
	}
};

struct ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields
{
public:
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_18;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_19;
	// System.Type System.Resources.ResourceManager::_minResourceSet
	Type_t * ____minResourceSet_20;
	// System.String System.Resources.ResourceManager::ResReaderTypeName
	String_t* ___ResReaderTypeName_21;
	// System.String System.Resources.ResourceManager::ResSetTypeName
	String_t* ___ResSetTypeName_22;
	// System.String System.Resources.ResourceManager::MscorlibName
	String_t* ___MscorlibName_23;
	// System.Int32 System.Resources.ResourceManager::DEBUG
	int32_t ___DEBUG_24;

public:
	inline static int32_t get_offset_of_MagicNumber_18() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___MagicNumber_18)); }
	inline int32_t get_MagicNumber_18() const { return ___MagicNumber_18; }
	inline int32_t* get_address_of_MagicNumber_18() { return &___MagicNumber_18; }
	inline void set_MagicNumber_18(int32_t value)
	{
		___MagicNumber_18 = value;
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_19() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___HeaderVersionNumber_19)); }
	inline int32_t get_HeaderVersionNumber_19() const { return ___HeaderVersionNumber_19; }
	inline int32_t* get_address_of_HeaderVersionNumber_19() { return &___HeaderVersionNumber_19; }
	inline void set_HeaderVersionNumber_19(int32_t value)
	{
		___HeaderVersionNumber_19 = value;
	}

	inline static int32_t get_offset_of__minResourceSet_20() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ____minResourceSet_20)); }
	inline Type_t * get__minResourceSet_20() const { return ____minResourceSet_20; }
	inline Type_t ** get_address_of__minResourceSet_20() { return &____minResourceSet_20; }
	inline void set__minResourceSet_20(Type_t * value)
	{
		____minResourceSet_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minResourceSet_20), (void*)value);
	}

	inline static int32_t get_offset_of_ResReaderTypeName_21() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___ResReaderTypeName_21)); }
	inline String_t* get_ResReaderTypeName_21() const { return ___ResReaderTypeName_21; }
	inline String_t** get_address_of_ResReaderTypeName_21() { return &___ResReaderTypeName_21; }
	inline void set_ResReaderTypeName_21(String_t* value)
	{
		___ResReaderTypeName_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResReaderTypeName_21), (void*)value);
	}

	inline static int32_t get_offset_of_ResSetTypeName_22() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___ResSetTypeName_22)); }
	inline String_t* get_ResSetTypeName_22() const { return ___ResSetTypeName_22; }
	inline String_t** get_address_of_ResSetTypeName_22() { return &___ResSetTypeName_22; }
	inline void set_ResSetTypeName_22(String_t* value)
	{
		___ResSetTypeName_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResSetTypeName_22), (void*)value);
	}

	inline static int32_t get_offset_of_MscorlibName_23() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___MscorlibName_23)); }
	inline String_t* get_MscorlibName_23() const { return ___MscorlibName_23; }
	inline String_t** get_address_of_MscorlibName_23() { return &___MscorlibName_23; }
	inline void set_MscorlibName_23(String_t* value)
	{
		___MscorlibName_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MscorlibName_23), (void*)value);
	}

	inline static int32_t get_offset_of_DEBUG_24() { return static_cast<int32_t>(offsetof(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_StaticFields, ___DEBUG_24)); }
	inline int32_t get_DEBUG_24() const { return ___DEBUG_24; }
	inline int32_t* get_address_of_DEBUG_24() { return &___DEBUG_24; }
	inline void set_DEBUG_24(int32_t value)
	{
		___DEBUG_24 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.OperationCanceledException
struct OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ____cancellationToken_17;

public:
	inline static int32_t get_offset_of__cancellationToken_17() { return static_cast<int32_t>(offsetof(OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB, ____cancellationToken_17)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get__cancellationToken_17() const { return ____cancellationToken_17; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of__cancellationToken_17() { return &____cancellationToken_17; }
	inline void set__cancellationToken_17(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		____cancellationToken_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____cancellationToken_17))->___m_source_0), (void*)NULL);
	}
};


// System.Threading.Channels.ChannelClosedException
struct ChannelClosedException_t2FDDA121452D562D4E29A33A284ABDEAFAA377FC  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetCanceled_m26F388E3019AE74E07CE86F8445F69DD3EF3CD93_gshared (TaskCompletionSource_1_t2AD68620D4F75522376359B6E5D330A4200E4C43 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetException_m87D05074387CB39F6069A807B7C30F7D1621B1E4_gshared (TaskCompletionSource_1_t2AD68620D4F75522376359B6E5D330A4200E4C43 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_mEF2F3AA6471C8039589AE7300DE2F3FD157F6FF1_gshared (TaskCompletionSource_1_t2AD68620D4F75522376359B6E5D330A4200E4C43 * __this, VoidResult_tFCC59E726D7462E308A9E79CF15E7B4BBEF399D9  ___result0, const RuntimeMethod* method);
// System.Void System.Threading.Channels.AsyncOperation`1<System.Boolean>::set_Next(System.Threading.Channels.AsyncOperation`1<TResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_1_set_Next_mDFA79D1261AA992DC962F36520A4B88448A2A15B_gshared_inline (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * __this, AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * ___value0, const RuntimeMethod* method);
// System.Threading.Channels.AsyncOperation`1<TResult> System.Threading.Channels.AsyncOperation`1<System.Boolean>::get_Next()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * AsyncOperation_1_get_Next_mE316C48E144A00AE554E4C90EB5143E4468E8BB3_gshared_inline (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * __this, const RuntimeMethod* method);
// System.Threading.Tasks.ValueTask`1<TResult> System.Threading.Channels.AsyncOperation`1<System.Boolean>::get_ValueTaskOfT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  AsyncOperation_1_get_ValueTaskOfT_mFA9F9B9AB802B424F5FA0D3343E1B68D1136D07D_gshared (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Channels.AsyncOperation`1<System.Boolean>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_1_TrySetResult_mA91B0F337B953A11C15D7739343FA617C39039FF_gshared (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * __this, bool ___item0, const RuntimeMethod* method);
// System.Boolean System.Threading.Channels.AsyncOperation`1<System.Boolean>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_1_TrySetException_m95B5507D7C3E836A3F2DFC9E162249F599E2F274_gshared (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::FromResult<System.Boolean>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * Task_FromResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mE4CC5E12053AB2AF338DC99FD1DB37FB780C0F4B_gshared (bool ___result0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD_gshared (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * TaskCompletionSource_1_get_Task_mDE606EC551EE4EFD2B37546F0F3A5AA0C03CEC94_gshared_inline (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method);

// System.String System.SR::get_InvalidOperation_IncompleteAsyncOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_IncompleteAsyncOperation_m409625150F64EB9D0CCA3976253CA5E2CEBA70BA (const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.SR::get_InvalidOperation_MultipleContinuations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_MultipleContinuations_m6961FDBF7743565A21760760DD1C57CDE49BDE66 (const RuntimeMethod* method);
// System.String System.SR::get_InvalidOperation_IncorrectToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_IncorrectToken_m6BBAB55E6F9AE5F4B288A791D402A00049F9C78D (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.String System.SR::get_ChannelClosedException_DefaultMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_ChannelClosedException_DefaultMessage_m6DBD1933AC61D43D928A24E4ACE3AFB95FF1E362 (const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Threading.CancellationToken System.OperationCanceledException::get_CancellationToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  OperationCanceledException_get_CancellationToken_m1755384EF3D1F01B524D2B545723709D5B3487DA_inline (OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetCanceled(System.Threading.CancellationToken)
inline bool TaskCompletionSource_1_TrySetCanceled_m26F388E3019AE74E07CE86F8445F69DD3EF3CD93 (TaskCompletionSource_1_t2AD68620D4F75522376359B6E5D330A4200E4C43 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t2AD68620D4F75522376359B6E5D330A4200E4C43 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))TaskCompletionSource_1_TrySetCanceled_m26F388E3019AE74E07CE86F8445F69DD3EF3CD93_gshared)(__this, ___cancellationToken0, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetException(System.Exception)
inline bool TaskCompletionSource_1_TrySetException_m87D05074387CB39F6069A807B7C30F7D1621B1E4 (TaskCompletionSource_1_t2AD68620D4F75522376359B6E5D330A4200E4C43 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t2AD68620D4F75522376359B6E5D330A4200E4C43 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_TrySetException_m87D05074387CB39F6069A807B7C30F7D1621B1E4_gshared)(__this, ___exception0, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetResult(!0)
inline bool TaskCompletionSource_1_TrySetResult_mEF2F3AA6471C8039589AE7300DE2F3FD157F6FF1 (TaskCompletionSource_1_t2AD68620D4F75522376359B6E5D330A4200E4C43 * __this, VoidResult_tFCC59E726D7462E308A9E79CF15E7B4BBEF399D9  ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t2AD68620D4F75522376359B6E5D330A4200E4C43 *, VoidResult_tFCC59E726D7462E308A9E79CF15E7B4BBEF399D9 , const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_mEF2F3AA6471C8039589AE7300DE2F3FD157F6FF1_gshared)(__this, ___result0, method);
}
// System.Void System.Threading.Channels.AsyncOperation`1<System.Boolean>::set_Next(System.Threading.Channels.AsyncOperation`1<TResult>)
inline void AsyncOperation_1_set_Next_mDFA79D1261AA992DC962F36520A4B88448A2A15B_inline (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * __this, AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * ___value0, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC *, AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC *, const RuntimeMethod*))AsyncOperation_1_set_Next_mDFA79D1261AA992DC962F36520A4B88448A2A15B_gshared_inline)(__this, ___value0, method);
}
// System.Threading.Channels.AsyncOperation`1<TResult> System.Threading.Channels.AsyncOperation`1<System.Boolean>::get_Next()
inline AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * AsyncOperation_1_get_Next_mE316C48E144A00AE554E4C90EB5143E4468E8BB3_inline (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * __this, const RuntimeMethod* method)
{
	return ((  AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * (*) (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC *, const RuntimeMethod*))AsyncOperation_1_get_Next_mE316C48E144A00AE554E4C90EB5143E4468E8BB3_gshared_inline)(__this, method);
}
// System.Threading.Tasks.ValueTask`1<TResult> System.Threading.Channels.AsyncOperation`1<System.Boolean>::get_ValueTaskOfT()
inline ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  AsyncOperation_1_get_ValueTaskOfT_mFA9F9B9AB802B424F5FA0D3343E1B68D1136D07D (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * __this, const RuntimeMethod* method)
{
	return ((  ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  (*) (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC *, const RuntimeMethod*))AsyncOperation_1_get_ValueTaskOfT_mFA9F9B9AB802B424F5FA0D3343E1B68D1136D07D_gshared)(__this, method);
}
// System.Boolean System.Threading.Channels.AsyncOperation`1<System.Boolean>::TrySetResult(TResult)
inline bool AsyncOperation_1_TrySetResult_mA91B0F337B953A11C15D7739343FA617C39039FF (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * __this, bool ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC *, bool, const RuntimeMethod*))AsyncOperation_1_TrySetResult_mA91B0F337B953A11C15D7739343FA617C39039FF_gshared)(__this, ___item0, method);
}
// System.Boolean System.Threading.Channels.AsyncOperation`1<System.Boolean>::TrySetException(System.Exception)
inline bool AsyncOperation_1_TrySetException_m95B5507D7C3E836A3F2DFC9E162249F599E2F274 (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	return ((  bool (*) (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC *, Exception_t *, const RuntimeMethod*))AsyncOperation_1_TrySetException_m95B5507D7C3E836A3F2DFC9E162249F599E2F274_gshared)(__this, ___exception0, method);
}
// System.Void System.Threading.Channels.ChannelClosedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_m13187B1795D8299E9407089952501C4C677229E3 (ChannelClosedException_t2FDDA121452D562D4E29A33A284ABDEAFAA377FC * __this, const RuntimeMethod* method);
// System.Void System.Threading.Channels.ChannelClosedException::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_mE9E1729C887DB7A49EB5840BCAE18B437D95AAA2 (ChannelClosedException_t2FDDA121452D562D4E29A33A284ABDEAFAA377FC * __this, Exception_t * ___innerException0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::FromResult<System.Boolean>(!!0)
inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * Task_FromResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mE4CC5E12053AB2AF338DC99FD1DB37FB780C0F4B (bool ___result0, const RuntimeMethod* method)
{
	return ((  Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * (*) (bool, const RuntimeMethod*))Task_FromResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mE4CC5E12053AB2AF338DC99FD1DB37FB780C0F4B_gshared)(___result0, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
inline void TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * TaskCompletionSource_1_get_Task_mDE606EC551EE4EFD2B37546F0F3A5AA0C03CEC94_inline (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * (*) (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mDE606EC551EE4EFD2B37546F0F3A5AA0C03CEC94_gshared_inline)(__this, method);
}
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m3B36E5A9CD8604FC6772834E652078A184A3A44F (const RuntimeMethod* method);
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * SR_get_ResourceManager_mBEA96E28F9AD788E0DEA5EB0F7825E426749C54B (const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void System.Resources.ResourceManager::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC8A203D5697A2FAD2B336CF3534C21276918BD25 (ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * __this, Type_t * ___resourceSource0, const RuntimeMethod* method);
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m4D7C1AD7406651B7527792EA8CCEFC2FC5389741 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method);
// System.Void System.Threading.Channels.ChannelOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions__ctor_m36B20E2A398422DB2270F15E1DD3EAD40D0C9514 (ChannelOptions_t3EA241A7A7399CCFADEAC46840C3261333C87C1F * __this, const RuntimeMethod* method);
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
// System.Void System.Threading.Channels.AsyncOperation::AvailableSentinel(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_AvailableSentinel_m33B25FCD01BCB0F8104079ECD7B9139EA4EBE74F (RuntimeObject * ___s0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.Threading.Channels.AsyncOperation::CompletedSentinel(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_CompletedSentinel_mF7831A6A636B51A38F2930FF86732A0474A64974 (RuntimeObject * ___s0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.Threading.Channels.AsyncOperation::ThrowIncompleteOperationException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_ThrowIncompleteOperationException_mD23BC87D36CB0EE8FEB2EE0B2BCF02AD8317DC59 (const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = SR_get_InvalidOperation_IncompleteAsyncOperation_m409625150F64EB9D0CCA3976253CA5E2CEBA70BA(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncOperation_ThrowIncompleteOperationException_mD23BC87D36CB0EE8FEB2EE0B2BCF02AD8317DC59_RuntimeMethod_var)));
	}
}
// System.Void System.Threading.Channels.AsyncOperation::ThrowMultipleContinuations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_ThrowMultipleContinuations_m14AE19D071DDA6DFCF23E278D54C187432EF9547 (const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = SR_get_InvalidOperation_MultipleContinuations_m6961FDBF7743565A21760760DD1C57CDE49BDE66(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncOperation_ThrowMultipleContinuations_m14AE19D071DDA6DFCF23E278D54C187432EF9547_RuntimeMethod_var)));
	}
}
// System.Void System.Threading.Channels.AsyncOperation::ThrowIncorrectCurrentIdException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_ThrowIncorrectCurrentIdException_m253A1D41B2DD00FA48992E4D3A08A9DB42BD77AC (const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = SR_get_InvalidOperation_IncorrectToken_m6BBAB55E6F9AE5F4B288A791D402A00049F9C78D(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncOperation_ThrowIncorrectCurrentIdException_m253A1D41B2DD00FA48992E4D3A08A9DB42BD77AC_RuntimeMethod_var)));
	}
}
// System.Void System.Threading.Channels.AsyncOperation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation__ctor_mD47E35ED69B1B42B25F04B240D4B155FE56A442D (AsyncOperation_tC068933A96432781A9EBDDA477EC08F0204E366D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Channels.AsyncOperation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation__cctor_m562B5D2A74990EC9C2F33A8E07E7B6F6A6EA23B3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_AvailableSentinel_m33B25FCD01BCB0F8104079ECD7B9139EA4EBE74F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_CompletedSentinel_mF7831A6A636B51A38F2930FF86732A0474A64974_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_tC068933A96432781A9EBDDA477EC08F0204E366D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_0, NULL, (intptr_t)((intptr_t)AsyncOperation_AvailableSentinel_m33B25FCD01BCB0F8104079ECD7B9139EA4EBE74F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		((AsyncOperation_tC068933A96432781A9EBDDA477EC08F0204E366D_StaticFields*)il2cpp_codegen_static_fields_for(AsyncOperation_tC068933A96432781A9EBDDA477EC08F0204E366D_il2cpp_TypeInfo_var))->set_s_availableSentinel_0(L_0);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_1 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_1, NULL, (intptr_t)((intptr_t)AsyncOperation_CompletedSentinel_mF7831A6A636B51A38F2930FF86732A0474A64974_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		((AsyncOperation_tC068933A96432781A9EBDDA477EC08F0204E366D_StaticFields*)il2cpp_codegen_static_fields_for(AsyncOperation_tC068933A96432781A9EBDDA477EC08F0204E366D_il2cpp_TypeInfo_var))->set_s_completedSentinel_1(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Channels.ChannelClosedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_m13187B1795D8299E9407089952501C4C677229E3 (ChannelClosedException_t2FDDA121452D562D4E29A33A284ABDEAFAA377FC * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = SR_get_ChannelClosedException_DefaultMessage_m6DBD1933AC61D43D928A24E4ACE3AFB95FF1E362(/*hidden argument*/NULL);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Channels.ChannelClosedException::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_mE9E1729C887DB7A49EB5840BCAE18B437D95AAA2 (ChannelClosedException_t2FDDA121452D562D4E29A33A284ABDEAFAA377FC * __this, Exception_t * ___innerException0, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = SR_get_ChannelClosedException_DefaultMessage_m6DBD1933AC61D43D928A24E4ACE3AFB95FF1E362(/*hidden argument*/NULL);
		Exception_t * L_1 = ___innerException0;
		InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.Threading.Channels.ChannelOptions::set_SingleWriter(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions_set_SingleWriter_m27F01A5D4A32212249013DC2B45FA86954244105 (ChannelOptions_t3EA241A7A7399CCFADEAC46840C3261333C87C1F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CSingleWriterU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean System.Threading.Channels.ChannelOptions::get_SingleReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChannelOptions_get_SingleReader_m2C79211B8ACB187E8A080218CCE05ACEF48E5189 (ChannelOptions_t3EA241A7A7399CCFADEAC46840C3261333C87C1F * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CSingleReaderU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void System.Threading.Channels.ChannelOptions::set_SingleReader(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions_set_SingleReader_m418653D19D41B211C99AF936B1770028FF4FA73A (ChannelOptions_t3EA241A7A7399CCFADEAC46840C3261333C87C1F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CSingleReaderU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean System.Threading.Channels.ChannelOptions::get_AllowSynchronousContinuations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChannelOptions_get_AllowSynchronousContinuations_m377D57475EF1067FBCFF305D1D692AFE79874F2D (ChannelOptions_t3EA241A7A7399CCFADEAC46840C3261333C87C1F * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAllowSynchronousContinuationsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void System.Threading.Channels.ChannelOptions::set_AllowSynchronousContinuations(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions_set_AllowSynchronousContinuations_mB68E02D8D9A69057F49B3B2E944FC8D5AD653C2B (ChannelOptions_t3EA241A7A7399CCFADEAC46840C3261333C87C1F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CAllowSynchronousContinuationsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void System.Threading.Channels.ChannelOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions__ctor_m36B20E2A398422DB2270F15E1DD3EAD40D0C9514 (ChannelOptions_t3EA241A7A7399CCFADEAC46840C3261333C87C1F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void System.Threading.Channels.ChannelUtilities::Complete(System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelUtilities_Complete_m3A082789422201D96BD653B325F2E9F9344E7AAC (TaskCompletionSource_1_t2AD68620D4F75522376359B6E5D330A4200E4C43 * ___tcs0, Exception_t * ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetCanceled_m26F388E3019AE74E07CE86F8445F69DD3EF3CD93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetException_m87D05074387CB39F6069A807B7C30F7D1621B1E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_mEF2F3AA6471C8039589AE7300DE2F3FD157F6FF1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * V_0 = NULL;
	VoidResult_tFCC59E726D7462E308A9E79CF15E7B4BBEF399D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Exception_t * L_0 = ___error1;
		V_0 = ((OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB *)IsInstClass((RuntimeObject*)L_0, OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var));
		OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskCompletionSource_1_t2AD68620D4F75522376359B6E5D330A4200E4C43 * L_2 = ___tcs0;
		OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * L_3 = V_0;
		NullCheck(L_3);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4;
		L_4 = OperationCanceledException_get_CancellationToken_m1755384EF3D1F01B524D2B545723709D5B3487DA_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = TaskCompletionSource_1_TrySetCanceled_m26F388E3019AE74E07CE86F8445F69DD3EF3CD93(L_2, L_4, /*hidden argument*/TaskCompletionSource_1_TrySetCanceled_m26F388E3019AE74E07CE86F8445F69DD3EF3CD93_RuntimeMethod_var);
		return;
	}

IL_0018:
	{
		Exception_t * L_6 = ___error1;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		Exception_t * L_7 = ___error1;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_il2cpp_TypeInfo_var);
		Exception_t * L_8 = ((ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_il2cpp_TypeInfo_var))->get_s_doneWritingSentinel_0();
		if ((((RuntimeObject*)(Exception_t *)L_7) == ((RuntimeObject*)(Exception_t *)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		TaskCompletionSource_1_t2AD68620D4F75522376359B6E5D330A4200E4C43 * L_9 = ___tcs0;
		Exception_t * L_10 = ___error1;
		NullCheck(L_9);
		bool L_11;
		L_11 = TaskCompletionSource_1_TrySetException_m87D05074387CB39F6069A807B7C30F7D1621B1E4(L_9, L_10, /*hidden argument*/TaskCompletionSource_1_TrySetException_m87D05074387CB39F6069A807B7C30F7D1621B1E4_RuntimeMethod_var);
		return;
	}

IL_002c:
	{
		TaskCompletionSource_1_t2AD68620D4F75522376359B6E5D330A4200E4C43 * L_12 = ___tcs0;
		il2cpp_codegen_initobj((&V_1), sizeof(VoidResult_tFCC59E726D7462E308A9E79CF15E7B4BBEF399D9 ));
		VoidResult_tFCC59E726D7462E308A9E79CF15E7B4BBEF399D9  L_13 = V_1;
		NullCheck(L_12);
		bool L_14;
		L_14 = TaskCompletionSource_1_TrySetResult_mEF2F3AA6471C8039589AE7300DE2F3FD157F6FF1(L_12, L_13, /*hidden argument*/TaskCompletionSource_1_TrySetResult_mEF2F3AA6471C8039589AE7300DE2F3FD157F6FF1_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.ValueTask`1<System.Boolean> System.Threading.Channels.ChannelUtilities::QueueWaiter(System.Threading.Channels.AsyncOperation`1<System.Boolean>&,System.Threading.Channels.AsyncOperation`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  ChannelUtilities_QueueWaiter_mDFDB1F7DA8BCFED63871925E1172423458039C8C (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC ** ___tail0, AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * ___waiter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_get_Next_mE316C48E144A00AE554E4C90EB5143E4468E8BB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_get_ValueTaskOfT_mFA9F9B9AB802B424F5FA0D3343E1B68D1136D07D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_set_Next_mDFA79D1261AA992DC962F36520A4B88448A2A15B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * V_0 = NULL;
	{
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC ** L_0 = ___tail0;
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_1 = *((AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC **)L_0);
		V_0 = L_1;
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_2 = V_0;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_3 = ___waiter1;
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_4 = ___waiter1;
		NullCheck(L_3);
		AsyncOperation_1_set_Next_mDFA79D1261AA992DC962F36520A4B88448A2A15B_inline(L_3, L_4, /*hidden argument*/AsyncOperation_1_set_Next_mDFA79D1261AA992DC962F36520A4B88448A2A15B_RuntimeMethod_var);
		goto IL_0022;
	}

IL_000f:
	{
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_5 = ___waiter1;
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_6 = V_0;
		NullCheck(L_6);
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_7;
		L_7 = AsyncOperation_1_get_Next_mE316C48E144A00AE554E4C90EB5143E4468E8BB3_inline(L_6, /*hidden argument*/AsyncOperation_1_get_Next_mE316C48E144A00AE554E4C90EB5143E4468E8BB3_RuntimeMethod_var);
		NullCheck(L_5);
		AsyncOperation_1_set_Next_mDFA79D1261AA992DC962F36520A4B88448A2A15B_inline(L_5, L_7, /*hidden argument*/AsyncOperation_1_set_Next_mDFA79D1261AA992DC962F36520A4B88448A2A15B_RuntimeMethod_var);
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_8 = V_0;
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_9 = ___waiter1;
		NullCheck(L_8);
		AsyncOperation_1_set_Next_mDFA79D1261AA992DC962F36520A4B88448A2A15B_inline(L_8, L_9, /*hidden argument*/AsyncOperation_1_set_Next_mDFA79D1261AA992DC962F36520A4B88448A2A15B_RuntimeMethod_var);
	}

IL_0022:
	{
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC ** L_10 = ___tail0;
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_11 = ___waiter1;
		*((RuntimeObject **)L_10) = (RuntimeObject *)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_10, (void*)(RuntimeObject *)L_11);
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_12 = ___waiter1;
		NullCheck(L_12);
		ValueTask_1_t4598265FFCC7D3502A16B1B6E0B5BA0ED46227EC  L_13;
		L_13 = AsyncOperation_1_get_ValueTaskOfT_mFA9F9B9AB802B424F5FA0D3343E1B68D1136D07D(L_12, /*hidden argument*/AsyncOperation_1_get_ValueTaskOfT_mFA9F9B9AB802B424F5FA0D3343E1B68D1136D07D_RuntimeMethod_var);
		return L_13;
	}
}
// System.Void System.Threading.Channels.ChannelUtilities::WakeUpWaiters(System.Threading.Channels.AsyncOperation`1<System.Boolean>&,System.Boolean,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelUtilities_WakeUpWaiters_m7A33ED0CF46FBF6D9E36501DCBB522D2DC82FDA0 (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC ** ___listTail0, bool ___result1, Exception_t * ___error2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_TrySetException_m95B5507D7C3E836A3F2DFC9E162249F599E2F274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_TrySetResult_mA91B0F337B953A11C15D7739343FA617C39039FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_get_Next_mE316C48E144A00AE554E4C90EB5143E4468E8BB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_set_Next_mDFA79D1261AA992DC962F36520A4B88448A2A15B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * V_0 = NULL;
	AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * V_1 = NULL;
	AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * V_2 = NULL;
	AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * V_3 = NULL;
	bool V_4 = false;
	bool G_B5_0 = false;
	{
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC ** L_0 = ___listTail0;
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_1 = *((AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC **)L_0);
		V_0 = L_1;
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_2 = V_0;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC ** L_3 = ___listTail0;
		*((RuntimeObject **)L_3) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)NULL);
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_4 = V_0;
		NullCheck(L_4);
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_5;
		L_5 = AsyncOperation_1_get_Next_mE316C48E144A00AE554E4C90EB5143E4468E8BB3_inline(L_4, /*hidden argument*/AsyncOperation_1_get_Next_mE316C48E144A00AE554E4C90EB5143E4468E8BB3_RuntimeMethod_var);
		V_1 = L_5;
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_6 = V_1;
		V_2 = L_6;
	}

IL_0012:
	{
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_7 = V_2;
		NullCheck(L_7);
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_8;
		L_8 = AsyncOperation_1_get_Next_mE316C48E144A00AE554E4C90EB5143E4468E8BB3_inline(L_7, /*hidden argument*/AsyncOperation_1_get_Next_mE316C48E144A00AE554E4C90EB5143E4468E8BB3_RuntimeMethod_var);
		V_3 = L_8;
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_9 = V_2;
		NullCheck(L_9);
		AsyncOperation_1_set_Next_mDFA79D1261AA992DC962F36520A4B88448A2A15B_inline(L_9, (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC *)NULL, /*hidden argument*/AsyncOperation_1_set_Next_mDFA79D1261AA992DC962F36520A4B88448A2A15B_RuntimeMethod_var);
		Exception_t * L_10 = ___error2;
		if (L_10)
		{
			goto IL_002c;
		}
	}
	{
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_11 = V_2;
		bool L_12 = ___result1;
		NullCheck(L_11);
		bool L_13;
		L_13 = AsyncOperation_1_TrySetResult_mA91B0F337B953A11C15D7739343FA617C39039FF(L_11, L_12, /*hidden argument*/AsyncOperation_1_TrySetResult_mA91B0F337B953A11C15D7739343FA617C39039FF_RuntimeMethod_var);
		G_B5_0 = L_13;
		goto IL_0033;
	}

IL_002c:
	{
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_14 = V_2;
		Exception_t * L_15 = ___error2;
		NullCheck(L_14);
		bool L_16;
		L_16 = AsyncOperation_1_TrySetException_m95B5507D7C3E836A3F2DFC9E162249F599E2F274(L_14, L_15, /*hidden argument*/AsyncOperation_1_TrySetException_m95B5507D7C3E836A3F2DFC9E162249F599E2F274_RuntimeMethod_var);
		G_B5_0 = L_16;
	}

IL_0033:
	{
		V_4 = G_B5_0;
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_17 = V_3;
		V_2 = L_17;
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_18 = V_2;
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_19 = V_1;
		if ((!(((RuntimeObject*)(AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC *)L_18) == ((RuntimeObject*)(AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC *)L_19))))
		{
			goto IL_0012;
		}
	}

IL_003b:
	{
		return;
	}
}
// System.Exception System.Threading.Channels.ChannelUtilities::CreateInvalidCompletionException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ChannelUtilities_CreateInvalidCompletionException_m674845C6DA85A1A70D723AB67623FCCB9A584FF0 (Exception_t * ___inner0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelClosedException_t2FDDA121452D562D4E29A33A284ABDEAFAA377FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = ___inner0;
		if (((OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB *)IsInstClass((RuntimeObject*)L_0, OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var)))
		{
			goto IL_0020;
		}
	}
	{
		Exception_t * L_1 = ___inner0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Exception_t * L_2 = ___inner0;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_il2cpp_TypeInfo_var);
		Exception_t * L_3 = ((ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_il2cpp_TypeInfo_var))->get_s_doneWritingSentinel_0();
		if ((!(((RuntimeObject*)(Exception_t *)L_2) == ((RuntimeObject*)(Exception_t *)L_3))))
		{
			goto IL_0019;
		}
	}

IL_0013:
	{
		ChannelClosedException_t2FDDA121452D562D4E29A33A284ABDEAFAA377FC * L_4 = (ChannelClosedException_t2FDDA121452D562D4E29A33A284ABDEAFAA377FC *)il2cpp_codegen_object_new(ChannelClosedException_t2FDDA121452D562D4E29A33A284ABDEAFAA377FC_il2cpp_TypeInfo_var);
		ChannelClosedException__ctor_m13187B1795D8299E9407089952501C4C677229E3(L_4, /*hidden argument*/NULL);
		return L_4;
	}

IL_0019:
	{
		Exception_t * L_5 = ___inner0;
		ChannelClosedException_t2FDDA121452D562D4E29A33A284ABDEAFAA377FC * L_6 = (ChannelClosedException_t2FDDA121452D562D4E29A33A284ABDEAFAA377FC *)il2cpp_codegen_object_new(ChannelClosedException_t2FDDA121452D562D4E29A33A284ABDEAFAA377FC_il2cpp_TypeInfo_var);
		ChannelClosedException__ctor_mE9E1729C887DB7A49EB5840BCAE18B437D95AAA2(L_6, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0020:
	{
		Exception_t * L_7 = ___inner0;
		return L_7;
	}
}
// System.Void System.Threading.Channels.ChannelUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelUtilities__cctor_m61758464CFF0D3CC68F54A059A70CC0E12D9ADC7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mDE606EC551EE4EFD2B37546F0F3A5AA0C03CEC94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mE4CC5E12053AB2AF338DC99FD1DB37FB780C0F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9144EDAB6BB6DB5C0B53154036CBBB22077B4904);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_0, _stringLiteral9144EDAB6BB6DB5C0B53154036CBBB22077B4904, /*hidden argument*/NULL);
		((ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_il2cpp_TypeInfo_var))->set_s_doneWritingSentinel_0(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_1;
		L_1 = Task_FromResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mE4CC5E12053AB2AF338DC99FD1DB37FB780C0F4B((bool)1, /*hidden argument*/Task_FromResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mE4CC5E12053AB2AF338DC99FD1DB37FB780C0F4B_RuntimeMethod_var);
		((ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_il2cpp_TypeInfo_var))->set_s_trueTask_1(L_1);
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_2;
		L_2 = Task_FromResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mE4CC5E12053AB2AF338DC99FD1DB37FB780C0F4B((bool)0, /*hidden argument*/Task_FromResult_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mE4CC5E12053AB2AF338DC99FD1DB37FB780C0F4B_RuntimeMethod_var);
		((ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_il2cpp_TypeInfo_var))->set_s_falseTask_2(L_2);
		TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * L_3 = (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD(L_3, /*hidden argument*/TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD_RuntimeMethod_var);
		NullCheck(L_3);
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_4;
		L_4 = TaskCompletionSource_1_get_Task_mDE606EC551EE4EFD2B37546F0F3A5AA0C03CEC94_inline(L_3, /*hidden argument*/TaskCompletionSource_1_get_Task_mDE606EC551EE4EFD2B37546F0F3A5AA0C03CEC94_RuntimeMethod_var);
		((ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t4AB40953E1BE8118E4EBAAD30C021635E4168EC6_il2cpp_TypeInfo_var))->set_s_neverCompletingTask_3(L_4);
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
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m3B36E5A9CD8604FC6772834E652078A184A3A44F (const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m4D7C1AD7406651B7527792EA8CCEFC2FC5389741 (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		bool L_0;
		L_0 = SR_UsingResourceKeys_m3B36E5A9CD8604FC6772834E652078A184A3A44F(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ___defaultString1;
		String_t* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_000d;
		}
	}
	{
		String_t* L_3 = ___resourceKey0;
		G_B3_0 = L_3;
	}

IL_000d:
	{
		return G_B3_0;
	}

IL_000e:
	{
		V_0 = (String_t*)NULL;
	}

IL_0010:
	try
	{// begin try (depth: 1)
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_4;
		L_4 = SR_get_ResourceManager_mBEA96E28F9AD788E0DEA5EB0F7825E426749C54B(/*hidden argument*/NULL);
		String_t* L_5 = ___resourceKey0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(8 /* System.String System.Resources.ResourceManager::GetString(System.String) */, L_4, L_5);
		V_0 = L_6;
		goto IL_0021;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingManifestResourceException_tAC74F21ADC46CCB2BCC710464434E3B97F72FACB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001e;
		}
		throw e;
	}

CATCH_001e:
	{// begin catch(System.Resources.MissingManifestResourceException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0021;
	}// end catch (depth: 1)

IL_0021:
	{
		String_t* L_7 = ___defaultString1;
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_8 = ___resourceKey0;
		String_t* L_9 = V_0;
		NullCheck(L_8);
		bool L_10;
		L_10 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_11 = ___defaultString1;
		return L_11;
	}

IL_002f:
	{
		String_t* L_12 = V_0;
		return L_12;
	}
}
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * SR_get_ResourceManager_mBEA96E28F9AD788E0DEA5EB0F7825E426749C54B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t6716B7DC452172CA4CFCE86F0002BCD2261D88B4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tB1AE910EE577E5DE03393C715BFBDC8D6EC84167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * G_B2_0 = NULL;
	ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * G_B1_0 = NULL;
	{
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_0 = ((SR_tB1AE910EE577E5DE03393C715BFBDC8D6EC84167_StaticFields*)il2cpp_codegen_static_fields_for(SR_tB1AE910EE577E5DE03393C715BFBDC8D6EC84167_il2cpp_TypeInfo_var))->get_s_resourceManager_0();
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (SR_t6716B7DC452172CA4CFCE86F0002BCD2261D88B4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_4 = (ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A *)il2cpp_codegen_object_new(ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A_il2cpp_TypeInfo_var);
		ResourceManager__ctor_mC8A203D5697A2FAD2B336CF3534C21276918BD25(L_4, L_3, /*hidden argument*/NULL);
		ResourceManager_t015B887ECBCB2AEE41F774C390F25EB507B06B8A * L_5 = L_4;
		((SR_tB1AE910EE577E5DE03393C715BFBDC8D6EC84167_StaticFields*)il2cpp_codegen_static_fields_for(SR_tB1AE910EE577E5DE03393C715BFBDC8D6EC84167_il2cpp_TypeInfo_var))->set_s_resourceManager_0(L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// System.String System.SR::get_ChannelClosedException_DefaultMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_ChannelClosedException_DefaultMessage_m6DBD1933AC61D43D928A24E4ACE3AFB95FF1E362 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral811236D662946FF821D609D9CF1DA6224C9EA88B);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m4D7C1AD7406651B7527792EA8CCEFC2FC5389741(_stringLiteral811236D662946FF821D609D9CF1DA6224C9EA88B, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_InvalidOperation_IncompleteAsyncOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_IncompleteAsyncOperation_m409625150F64EB9D0CCA3976253CA5E2CEBA70BA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EDEF73EC6D81532DEF15142E4DAC84E34BD5B97);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m4D7C1AD7406651B7527792EA8CCEFC2FC5389741(_stringLiteral6EDEF73EC6D81532DEF15142E4DAC84E34BD5B97, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_InvalidOperation_MultipleContinuations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_MultipleContinuations_m6961FDBF7743565A21760760DD1C57CDE49BDE66 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86514F0AEEC5D2FF36516A683B5598E362F51466);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m4D7C1AD7406651B7527792EA8CCEFC2FC5389741(_stringLiteral86514F0AEEC5D2FF36516A683B5598E362F51466, (String_t*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.SR::get_InvalidOperation_IncorrectToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_IncorrectToken_m6BBAB55E6F9AE5F4B288A791D402A00049F9C78D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral781E7C18C002A07F55D58B4D0D410C4C5C545604);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m4D7C1AD7406651B7527792EA8CCEFC2FC5389741(_stringLiteral781E7C18C002A07F55D58B4D0D410C4C5C545604, (String_t*)NULL, /*hidden argument*/NULL);
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
// System.Void System.Threading.Channels.UnboundedChannelOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnboundedChannelOptions__ctor_m661A1C460496787BED0240B70A1B0CBD2C849A2E (UnboundedChannelOptions_tBBA3DF6597E410CBEB8D566C90BE623026BF9951 * __this, const RuntimeMethod* method)
{
	{
		ChannelOptions__ctor_m36B20E2A398422DB2270F15E1DD3EAD40D0C9514(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  OperationCanceledException_get_CancellationToken_m1755384EF3D1F01B524D2B545723709D5B3487DA_inline (OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * __this, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = __this->get__cancellationToken_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_1_set_Next_mDFA79D1261AA992DC962F36520A4B88448A2A15B_gshared_inline (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * __this, AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * ___value0, const RuntimeMethod* method)
{
	{
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_0 = ___value0;
		__this->set_U3CNextU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * AsyncOperation_1_get_Next_mE316C48E144A00AE554E4C90EB5143E4468E8BB3_gshared_inline (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * __this, const RuntimeMethod* method)
{
	{
		AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC * L_0 = (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC *)__this->get_U3CNextU3Ek__BackingField_13();
		return (AsyncOperation_1_t22C84F39DAD8646F48D1DD20E4F25AC7F6999CAC *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * TaskCompletionSource_1_get_Task_mDE606EC551EE4EFD2B37546F0F3A5AA0C03CEC94_gshared_inline (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method)
{
	{
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_0 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this->get_m_task_0();
		return (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_0;
	}
}
