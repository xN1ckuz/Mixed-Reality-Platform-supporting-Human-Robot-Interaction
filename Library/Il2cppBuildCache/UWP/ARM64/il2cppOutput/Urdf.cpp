#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// RosSharp.Urdf.Joint
struct Joint_t67C561CC050586B8FEA7D163C1900620EF7FB157;
// RosSharp.Urdf.Origin
struct Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225;
// RosSharp.Urdf.Plugin
struct Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67;
// System.String
struct String_t;
// RosSharp.Urdf.Joint/Axis
struct Axis_t235EF5AC5185E9D2E7CD684A1A238AE29CDC7E7F;
// RosSharp.Urdf.Joint/Calibration
struct Calibration_t93EF0030AD2CCF7F0FA8BD1A39349C8E3631F802;
// RosSharp.Urdf.Joint/Dynamics
struct Dynamics_t6E80B7CE729FCED3C5B13F5A60B41E57F35BE105;
// RosSharp.Urdf.Joint/Limit
struct Limit_t810AA189102BE74F166C575297D60A3C3AAD3150;
// RosSharp.Urdf.Joint/Mimic
struct Mimic_t1783BB54AE04028F04EC26ACF395E2BE1B2DDAA5;
// RosSharp.Urdf.Joint/SafetyController
struct SafetyController_t92A62ABEAA306CEEEBABBAE1E7ED709BAEE9F6B6;
// RosSharp.Urdf.Link/Inertial
struct Inertial_tABE22D6CEB22CD671B4A4C81225FCAC8E47D51F5;
// RosSharp.Urdf.Link/Inertial/Inertia
struct Inertia_tBB3E9E5825EEAB6291E73FB058E50BAA3E9B0EA5;


struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9EAF00CF586600E385C886D09252A1674D139EE6 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// RosSharp.Urdf.Joint
struct Joint_t67C561CC050586B8FEA7D163C1900620EF7FB157  : public RuntimeObject
{
public:
	// System.String RosSharp.Urdf.Joint::name
	String_t* ___name_0;
	// System.String RosSharp.Urdf.Joint::type
	String_t* ___type_1;
	// RosSharp.Urdf.Origin RosSharp.Urdf.Joint::origin
	Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * ___origin_2;
	// System.String RosSharp.Urdf.Joint::parent
	String_t* ___parent_3;
	// System.String RosSharp.Urdf.Joint::child
	String_t* ___child_4;
	// RosSharp.Urdf.Joint/Axis RosSharp.Urdf.Joint::axis
	Axis_t235EF5AC5185E9D2E7CD684A1A238AE29CDC7E7F * ___axis_5;
	// RosSharp.Urdf.Joint/Calibration RosSharp.Urdf.Joint::calibration
	Calibration_t93EF0030AD2CCF7F0FA8BD1A39349C8E3631F802 * ___calibration_6;
	// RosSharp.Urdf.Joint/Dynamics RosSharp.Urdf.Joint::dynamics
	Dynamics_t6E80B7CE729FCED3C5B13F5A60B41E57F35BE105 * ___dynamics_7;
	// RosSharp.Urdf.Joint/Limit RosSharp.Urdf.Joint::limit
	Limit_t810AA189102BE74F166C575297D60A3C3AAD3150 * ___limit_8;
	// RosSharp.Urdf.Joint/Mimic RosSharp.Urdf.Joint::mimic
	Mimic_t1783BB54AE04028F04EC26ACF395E2BE1B2DDAA5 * ___mimic_9;
	// RosSharp.Urdf.Joint/SafetyController RosSharp.Urdf.Joint::safetyController
	SafetyController_t92A62ABEAA306CEEEBABBAE1E7ED709BAEE9F6B6 * ___safetyController_10;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Joint_t67C561CC050586B8FEA7D163C1900620EF7FB157, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Joint_t67C561CC050586B8FEA7D163C1900620EF7FB157, ___type_1)); }
	inline String_t* get_type_1() const { return ___type_1; }
	inline String_t** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(String_t* value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_1), (void*)value);
	}

	inline static int32_t get_offset_of_origin_2() { return static_cast<int32_t>(offsetof(Joint_t67C561CC050586B8FEA7D163C1900620EF7FB157, ___origin_2)); }
	inline Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * get_origin_2() const { return ___origin_2; }
	inline Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 ** get_address_of_origin_2() { return &___origin_2; }
	inline void set_origin_2(Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * value)
	{
		___origin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___origin_2), (void*)value);
	}

	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(Joint_t67C561CC050586B8FEA7D163C1900620EF7FB157, ___parent_3)); }
	inline String_t* get_parent_3() const { return ___parent_3; }
	inline String_t** get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(String_t* value)
	{
		___parent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_3), (void*)value);
	}

	inline static int32_t get_offset_of_child_4() { return static_cast<int32_t>(offsetof(Joint_t67C561CC050586B8FEA7D163C1900620EF7FB157, ___child_4)); }
	inline String_t* get_child_4() const { return ___child_4; }
	inline String_t** get_address_of_child_4() { return &___child_4; }
	inline void set_child_4(String_t* value)
	{
		___child_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___child_4), (void*)value);
	}

	inline static int32_t get_offset_of_axis_5() { return static_cast<int32_t>(offsetof(Joint_t67C561CC050586B8FEA7D163C1900620EF7FB157, ___axis_5)); }
	inline Axis_t235EF5AC5185E9D2E7CD684A1A238AE29CDC7E7F * get_axis_5() const { return ___axis_5; }
	inline Axis_t235EF5AC5185E9D2E7CD684A1A238AE29CDC7E7F ** get_address_of_axis_5() { return &___axis_5; }
	inline void set_axis_5(Axis_t235EF5AC5185E9D2E7CD684A1A238AE29CDC7E7F * value)
	{
		___axis_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axis_5), (void*)value);
	}

	inline static int32_t get_offset_of_calibration_6() { return static_cast<int32_t>(offsetof(Joint_t67C561CC050586B8FEA7D163C1900620EF7FB157, ___calibration_6)); }
	inline Calibration_t93EF0030AD2CCF7F0FA8BD1A39349C8E3631F802 * get_calibration_6() const { return ___calibration_6; }
	inline Calibration_t93EF0030AD2CCF7F0FA8BD1A39349C8E3631F802 ** get_address_of_calibration_6() { return &___calibration_6; }
	inline void set_calibration_6(Calibration_t93EF0030AD2CCF7F0FA8BD1A39349C8E3631F802 * value)
	{
		___calibration_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibration_6), (void*)value);
	}

	inline static int32_t get_offset_of_dynamics_7() { return static_cast<int32_t>(offsetof(Joint_t67C561CC050586B8FEA7D163C1900620EF7FB157, ___dynamics_7)); }
	inline Dynamics_t6E80B7CE729FCED3C5B13F5A60B41E57F35BE105 * get_dynamics_7() const { return ___dynamics_7; }
	inline Dynamics_t6E80B7CE729FCED3C5B13F5A60B41E57F35BE105 ** get_address_of_dynamics_7() { return &___dynamics_7; }
	inline void set_dynamics_7(Dynamics_t6E80B7CE729FCED3C5B13F5A60B41E57F35BE105 * value)
	{
		___dynamics_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dynamics_7), (void*)value);
	}

	inline static int32_t get_offset_of_limit_8() { return static_cast<int32_t>(offsetof(Joint_t67C561CC050586B8FEA7D163C1900620EF7FB157, ___limit_8)); }
	inline Limit_t810AA189102BE74F166C575297D60A3C3AAD3150 * get_limit_8() const { return ___limit_8; }
	inline Limit_t810AA189102BE74F166C575297D60A3C3AAD3150 ** get_address_of_limit_8() { return &___limit_8; }
	inline void set_limit_8(Limit_t810AA189102BE74F166C575297D60A3C3AAD3150 * value)
	{
		___limit_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___limit_8), (void*)value);
	}

	inline static int32_t get_offset_of_mimic_9() { return static_cast<int32_t>(offsetof(Joint_t67C561CC050586B8FEA7D163C1900620EF7FB157, ___mimic_9)); }
	inline Mimic_t1783BB54AE04028F04EC26ACF395E2BE1B2DDAA5 * get_mimic_9() const { return ___mimic_9; }
	inline Mimic_t1783BB54AE04028F04EC26ACF395E2BE1B2DDAA5 ** get_address_of_mimic_9() { return &___mimic_9; }
	inline void set_mimic_9(Mimic_t1783BB54AE04028F04EC26ACF395E2BE1B2DDAA5 * value)
	{
		___mimic_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mimic_9), (void*)value);
	}

	inline static int32_t get_offset_of_safetyController_10() { return static_cast<int32_t>(offsetof(Joint_t67C561CC050586B8FEA7D163C1900620EF7FB157, ___safetyController_10)); }
	inline SafetyController_t92A62ABEAA306CEEEBABBAE1E7ED709BAEE9F6B6 * get_safetyController_10() const { return ___safetyController_10; }
	inline SafetyController_t92A62ABEAA306CEEEBABBAE1E7ED709BAEE9F6B6 ** get_address_of_safetyController_10() { return &___safetyController_10; }
	inline void set_safetyController_10(SafetyController_t92A62ABEAA306CEEEBABBAE1E7ED709BAEE9F6B6 * value)
	{
		___safetyController_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safetyController_10), (void*)value);
	}
};


// RosSharp.Urdf.Link
struct Link_t9D6DC0EAEAD68060C8909EAC8B0F34190FE32ECA  : public RuntimeObject
{
public:

public:
};


// RosSharp.Urdf.Origin
struct Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225  : public RuntimeObject
{
public:
	// System.Double[] RosSharp.Urdf.Origin::Xyz
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___Xyz_0;
	// System.Double[] RosSharp.Urdf.Origin::Rpy
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___Rpy_1;

public:
	inline static int32_t get_offset_of_Xyz_0() { return static_cast<int32_t>(offsetof(Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225, ___Xyz_0)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_Xyz_0() const { return ___Xyz_0; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_Xyz_0() { return &___Xyz_0; }
	inline void set_Xyz_0(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___Xyz_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Xyz_0), (void*)value);
	}

	inline static int32_t get_offset_of_Rpy_1() { return static_cast<int32_t>(offsetof(Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225, ___Rpy_1)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_Rpy_1() const { return ___Rpy_1; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_Rpy_1() { return &___Rpy_1; }
	inline void set_Rpy_1(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___Rpy_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Rpy_1), (void*)value);
	}
};


// RosSharp.Urdf.Plugin
struct Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67  : public RuntimeObject
{
public:
	// System.String RosSharp.Urdf.Plugin::text
	String_t* ___text_0;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_0), (void*)value);
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

// RosSharp.Urdf.Joint/Axis
struct Axis_t235EF5AC5185E9D2E7CD684A1A238AE29CDC7E7F  : public RuntimeObject
{
public:
	// System.Double[] RosSharp.Urdf.Joint/Axis::xyz
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___xyz_0;

public:
	inline static int32_t get_offset_of_xyz_0() { return static_cast<int32_t>(offsetof(Axis_t235EF5AC5185E9D2E7CD684A1A238AE29CDC7E7F, ___xyz_0)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_xyz_0() const { return ___xyz_0; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_xyz_0() { return &___xyz_0; }
	inline void set_xyz_0(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___xyz_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xyz_0), (void*)value);
	}
};


// RosSharp.Urdf.Joint/Calibration
struct Calibration_t93EF0030AD2CCF7F0FA8BD1A39349C8E3631F802  : public RuntimeObject
{
public:

public:
};


// RosSharp.Urdf.Joint/Dynamics
struct Dynamics_t6E80B7CE729FCED3C5B13F5A60B41E57F35BE105  : public RuntimeObject
{
public:
	// System.Double RosSharp.Urdf.Joint/Dynamics::damping
	double ___damping_0;
	// System.Double RosSharp.Urdf.Joint/Dynamics::friction
	double ___friction_1;

public:
	inline static int32_t get_offset_of_damping_0() { return static_cast<int32_t>(offsetof(Dynamics_t6E80B7CE729FCED3C5B13F5A60B41E57F35BE105, ___damping_0)); }
	inline double get_damping_0() const { return ___damping_0; }
	inline double* get_address_of_damping_0() { return &___damping_0; }
	inline void set_damping_0(double value)
	{
		___damping_0 = value;
	}

	inline static int32_t get_offset_of_friction_1() { return static_cast<int32_t>(offsetof(Dynamics_t6E80B7CE729FCED3C5B13F5A60B41E57F35BE105, ___friction_1)); }
	inline double get_friction_1() const { return ___friction_1; }
	inline double* get_address_of_friction_1() { return &___friction_1; }
	inline void set_friction_1(double value)
	{
		___friction_1 = value;
	}
};


// RosSharp.Urdf.Joint/Limit
struct Limit_t810AA189102BE74F166C575297D60A3C3AAD3150  : public RuntimeObject
{
public:
	// System.Double RosSharp.Urdf.Joint/Limit::lower
	double ___lower_0;
	// System.Double RosSharp.Urdf.Joint/Limit::upper
	double ___upper_1;
	// System.Double RosSharp.Urdf.Joint/Limit::effort
	double ___effort_2;
	// System.Double RosSharp.Urdf.Joint/Limit::velocity
	double ___velocity_3;

public:
	inline static int32_t get_offset_of_lower_0() { return static_cast<int32_t>(offsetof(Limit_t810AA189102BE74F166C575297D60A3C3AAD3150, ___lower_0)); }
	inline double get_lower_0() const { return ___lower_0; }
	inline double* get_address_of_lower_0() { return &___lower_0; }
	inline void set_lower_0(double value)
	{
		___lower_0 = value;
	}

	inline static int32_t get_offset_of_upper_1() { return static_cast<int32_t>(offsetof(Limit_t810AA189102BE74F166C575297D60A3C3AAD3150, ___upper_1)); }
	inline double get_upper_1() const { return ___upper_1; }
	inline double* get_address_of_upper_1() { return &___upper_1; }
	inline void set_upper_1(double value)
	{
		___upper_1 = value;
	}

	inline static int32_t get_offset_of_effort_2() { return static_cast<int32_t>(offsetof(Limit_t810AA189102BE74F166C575297D60A3C3AAD3150, ___effort_2)); }
	inline double get_effort_2() const { return ___effort_2; }
	inline double* get_address_of_effort_2() { return &___effort_2; }
	inline void set_effort_2(double value)
	{
		___effort_2 = value;
	}

	inline static int32_t get_offset_of_velocity_3() { return static_cast<int32_t>(offsetof(Limit_t810AA189102BE74F166C575297D60A3C3AAD3150, ___velocity_3)); }
	inline double get_velocity_3() const { return ___velocity_3; }
	inline double* get_address_of_velocity_3() { return &___velocity_3; }
	inline void set_velocity_3(double value)
	{
		___velocity_3 = value;
	}
};


// RosSharp.Urdf.Joint/Mimic
struct Mimic_t1783BB54AE04028F04EC26ACF395E2BE1B2DDAA5  : public RuntimeObject
{
public:

public:
};


// RosSharp.Urdf.Joint/SafetyController
struct SafetyController_t92A62ABEAA306CEEEBABBAE1E7ED709BAEE9F6B6  : public RuntimeObject
{
public:

public:
};


// RosSharp.Urdf.Link/Inertial
struct Inertial_tABE22D6CEB22CD671B4A4C81225FCAC8E47D51F5  : public RuntimeObject
{
public:
	// System.Double RosSharp.Urdf.Link/Inertial::mass
	double ___mass_0;
	// RosSharp.Urdf.Origin RosSharp.Urdf.Link/Inertial::origin
	Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * ___origin_1;
	// RosSharp.Urdf.Link/Inertial/Inertia RosSharp.Urdf.Link/Inertial::inertia
	Inertia_tBB3E9E5825EEAB6291E73FB058E50BAA3E9B0EA5 * ___inertia_2;

public:
	inline static int32_t get_offset_of_mass_0() { return static_cast<int32_t>(offsetof(Inertial_tABE22D6CEB22CD671B4A4C81225FCAC8E47D51F5, ___mass_0)); }
	inline double get_mass_0() const { return ___mass_0; }
	inline double* get_address_of_mass_0() { return &___mass_0; }
	inline void set_mass_0(double value)
	{
		___mass_0 = value;
	}

	inline static int32_t get_offset_of_origin_1() { return static_cast<int32_t>(offsetof(Inertial_tABE22D6CEB22CD671B4A4C81225FCAC8E47D51F5, ___origin_1)); }
	inline Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * get_origin_1() const { return ___origin_1; }
	inline Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 ** get_address_of_origin_1() { return &___origin_1; }
	inline void set_origin_1(Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * value)
	{
		___origin_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___origin_1), (void*)value);
	}

	inline static int32_t get_offset_of_inertia_2() { return static_cast<int32_t>(offsetof(Inertial_tABE22D6CEB22CD671B4A4C81225FCAC8E47D51F5, ___inertia_2)); }
	inline Inertia_tBB3E9E5825EEAB6291E73FB058E50BAA3E9B0EA5 * get_inertia_2() const { return ___inertia_2; }
	inline Inertia_tBB3E9E5825EEAB6291E73FB058E50BAA3E9B0EA5 ** get_address_of_inertia_2() { return &___inertia_2; }
	inline void set_inertia_2(Inertia_tBB3E9E5825EEAB6291E73FB058E50BAA3E9B0EA5 * value)
	{
		___inertia_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inertia_2), (void*)value);
	}
};


// RosSharp.Urdf.Link/Inertial/Inertia
struct Inertia_tBB3E9E5825EEAB6291E73FB058E50BAA3E9B0EA5  : public RuntimeObject
{
public:
	// System.Double RosSharp.Urdf.Link/Inertial/Inertia::ixx
	double ___ixx_0;
	// System.Double RosSharp.Urdf.Link/Inertial/Inertia::ixy
	double ___ixy_1;
	// System.Double RosSharp.Urdf.Link/Inertial/Inertia::ixz
	double ___ixz_2;
	// System.Double RosSharp.Urdf.Link/Inertial/Inertia::iyy
	double ___iyy_3;
	// System.Double RosSharp.Urdf.Link/Inertial/Inertia::iyz
	double ___iyz_4;
	// System.Double RosSharp.Urdf.Link/Inertial/Inertia::izz
	double ___izz_5;

public:
	inline static int32_t get_offset_of_ixx_0() { return static_cast<int32_t>(offsetof(Inertia_tBB3E9E5825EEAB6291E73FB058E50BAA3E9B0EA5, ___ixx_0)); }
	inline double get_ixx_0() const { return ___ixx_0; }
	inline double* get_address_of_ixx_0() { return &___ixx_0; }
	inline void set_ixx_0(double value)
	{
		___ixx_0 = value;
	}

	inline static int32_t get_offset_of_ixy_1() { return static_cast<int32_t>(offsetof(Inertia_tBB3E9E5825EEAB6291E73FB058E50BAA3E9B0EA5, ___ixy_1)); }
	inline double get_ixy_1() const { return ___ixy_1; }
	inline double* get_address_of_ixy_1() { return &___ixy_1; }
	inline void set_ixy_1(double value)
	{
		___ixy_1 = value;
	}

	inline static int32_t get_offset_of_ixz_2() { return static_cast<int32_t>(offsetof(Inertia_tBB3E9E5825EEAB6291E73FB058E50BAA3E9B0EA5, ___ixz_2)); }
	inline double get_ixz_2() const { return ___ixz_2; }
	inline double* get_address_of_ixz_2() { return &___ixz_2; }
	inline void set_ixz_2(double value)
	{
		___ixz_2 = value;
	}

	inline static int32_t get_offset_of_iyy_3() { return static_cast<int32_t>(offsetof(Inertia_tBB3E9E5825EEAB6291E73FB058E50BAA3E9B0EA5, ___iyy_3)); }
	inline double get_iyy_3() const { return ___iyy_3; }
	inline double* get_address_of_iyy_3() { return &___iyy_3; }
	inline void set_iyy_3(double value)
	{
		___iyy_3 = value;
	}

	inline static int32_t get_offset_of_iyz_4() { return static_cast<int32_t>(offsetof(Inertia_tBB3E9E5825EEAB6291E73FB058E50BAA3E9B0EA5, ___iyz_4)); }
	inline double get_iyz_4() const { return ___iyz_4; }
	inline double* get_address_of_iyz_4() { return &___iyz_4; }
	inline void set_iyz_4(double value)
	{
		___iyz_4 = value;
	}

	inline static int32_t get_offset_of_izz_5() { return static_cast<int32_t>(offsetof(Inertia_tBB3E9E5825EEAB6291E73FB058E50BAA3E9B0EA5, ___izz_5)); }
	inline double get_izz_5() const { return ___izz_5; }
	inline double* get_address_of_izz_5() { return &___izz_5; }
	inline void set_izz_5(double value)
	{
		___izz_5 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
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
// System.Void RosSharp.Urdf.Joint::.ctor(System.String,System.String,System.String,System.String,RosSharp.Urdf.Origin,RosSharp.Urdf.Joint/Axis,RosSharp.Urdf.Joint/Calibration,RosSharp.Urdf.Joint/Dynamics,RosSharp.Urdf.Joint/Limit,RosSharp.Urdf.Joint/Mimic,RosSharp.Urdf.Joint/SafetyController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint__ctor_mB7737A8C3F5AB0ECB768719627933554D4846F66 (Joint_t67C561CC050586B8FEA7D163C1900620EF7FB157 * __this, String_t* ___name0, String_t* ___type1, String_t* ___parent2, String_t* ___child3, Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * ___origin4, Axis_t235EF5AC5185E9D2E7CD684A1A238AE29CDC7E7F * ___axis5, Calibration_t93EF0030AD2CCF7F0FA8BD1A39349C8E3631F802 * ___calibration6, Dynamics_t6E80B7CE729FCED3C5B13F5A60B41E57F35BE105 * ___dynamics7, Limit_t810AA189102BE74F166C575297D60A3C3AAD3150 * ___limit8, Mimic_t1783BB54AE04028F04EC26ACF395E2BE1B2DDAA5 * ___mimic9, SafetyController_t92A62ABEAA306CEEEBABBAE1E7ED709BAEE9F6B6 * ___safetyController10, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_name_0(L_0);
		String_t* L_1 = ___type1;
		__this->set_type_1(L_1);
		String_t* L_2 = ___parent2;
		__this->set_parent_3(L_2);
		String_t* L_3 = ___child3;
		__this->set_child_4(L_3);
		Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * L_4 = ___origin4;
		__this->set_origin_2(L_4);
		Axis_t235EF5AC5185E9D2E7CD684A1A238AE29CDC7E7F * L_5 = ___axis5;
		__this->set_axis_5(L_5);
		Calibration_t93EF0030AD2CCF7F0FA8BD1A39349C8E3631F802 * L_6 = ___calibration6;
		__this->set_calibration_6(L_6);
		Dynamics_t6E80B7CE729FCED3C5B13F5A60B41E57F35BE105 * L_7 = ___dynamics7;
		__this->set_dynamics_7(L_7);
		Limit_t810AA189102BE74F166C575297D60A3C3AAD3150 * L_8 = ___limit8;
		__this->set_limit_8(L_8);
		Mimic_t1783BB54AE04028F04EC26ACF395E2BE1B2DDAA5 * L_9 = ___mimic9;
		__this->set_mimic_9(L_9);
		SafetyController_t92A62ABEAA306CEEEBABBAE1E7ED709BAEE9F6B6 * L_10 = ___safetyController10;
		__this->set_safetyController_10(L_10);
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
// System.Void RosSharp.Urdf.Origin::.ctor(System.Double[],System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Origin__ctor_mAE2771A99D2B46447CA8A0E9D2A62988E3BE5728 (Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___xyz0, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___rpy1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___xyz0;
		__this->set_Xyz_0(L_0);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = ___rpy1;
		__this->set_Rpy_1(L_1);
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
// System.Void RosSharp.Urdf.Plugin::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin__ctor_mD86641846880020FFFD7360B8058CEAE934F9D3C (Plugin_t269455CC6FF76038399ED2E022EF65D16F407D67 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___text0;
		__this->set_text_0(L_0);
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
// System.Void RosSharp.Urdf.Joint/Axis::.ctor(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Axis__ctor_m4DFD388C5C8A346C70978118A298359F8712D145 (Axis_t235EF5AC5185E9D2E7CD684A1A238AE29CDC7E7F * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___xyz0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___xyz0;
		__this->set_xyz_0(L_0);
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
// System.Void RosSharp.Urdf.Joint/Dynamics::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dynamics__ctor_m72A80E8343371C8FB2D5F272C17994F19A89AF0D (Dynamics_t6E80B7CE729FCED3C5B13F5A60B41E57F35BE105 * __this, double ___damping0, double ___friction1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		double L_0 = ___damping0;
		__this->set_damping_0(L_0);
		double L_1 = ___friction1;
		__this->set_friction_1(L_1);
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
// System.Void RosSharp.Urdf.Joint/Limit::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Limit__ctor_m92A149DBE7483ED298ADFD2F5D01735981DA24D4 (Limit_t810AA189102BE74F166C575297D60A3C3AAD3150 * __this, double ___lower0, double ___upper1, double ___effort2, double ___velocity3, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		double L_0 = ___lower0;
		__this->set_lower_0(L_0);
		double L_1 = ___upper1;
		__this->set_upper_1(L_1);
		double L_2 = ___effort2;
		__this->set_effort_2(L_2);
		double L_3 = ___velocity3;
		__this->set_velocity_3(L_3);
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
// System.Void RosSharp.Urdf.Link/Inertial::.ctor(System.Double,RosSharp.Urdf.Origin,RosSharp.Urdf.Link/Inertial/Inertia)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inertial__ctor_m96F8BAB91A542E4583ABB9AC80513C2A99C53F0D (Inertial_tABE22D6CEB22CD671B4A4C81225FCAC8E47D51F5 * __this, double ___mass0, Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * ___origin1, Inertia_tBB3E9E5825EEAB6291E73FB058E50BAA3E9B0EA5 * ___inertia2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		double L_0 = ___mass0;
		__this->set_mass_0(L_0);
		Origin_t0ABA5C6D234EEBA44ADE14915112BDC597811225 * L_1 = ___origin1;
		__this->set_origin_1(L_1);
		Inertia_tBB3E9E5825EEAB6291E73FB058E50BAA3E9B0EA5 * L_2 = ___inertia2;
		__this->set_inertia_2(L_2);
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
// System.Void RosSharp.Urdf.Link/Inertial/Inertia::.ctor(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inertia__ctor_mD30D098D659E14059D23137FDB653DD34CF1B085 (Inertia_tBB3E9E5825EEAB6291E73FB058E50BAA3E9B0EA5 * __this, double ___ixx0, double ___ixy1, double ___ixz2, double ___iyy3, double ___iyz4, double ___izz5, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		double L_0 = ___ixx0;
		__this->set_ixx_0(L_0);
		double L_1 = ___ixy1;
		__this->set_ixy_1(L_1);
		double L_2 = ___ixz2;
		__this->set_ixz_2(L_2);
		double L_3 = ___iyy3;
		__this->set_iyy_3(L_3);
		double L_4 = ___iyz4;
		__this->set_iyz_4(L_4);
		double L_5 = ___izz5;
		__this->set_izz_5(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
