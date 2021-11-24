/* Include files */

#include "robot_system_toolbox_sfun.h"
#include "c1_robot_system_toolbox.h"
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c1_emlrtMCI = { 27, /* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\eml\\lib\\matlab\\lang\\error.m"/* pName */
};

static emlrtRSInfo c1_emlrtRSI = { 1,  /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\coder\\coder\\+coder\\+internal\\matlabCodegenHandle.p"/* pathName */
};

static emlrtRSInfo c1_b_emlrtRSI = { 173,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometry.m"/* pathName */
};

static emlrtRSInfo c1_c_emlrtRSI = { 3,/* lineNo */
  "MATLAB Function1",                  /* fcnName */
  "#robot_system_toolbox:77"           /* pathName */
};

static emlrtRSInfo c1_d_emlrtRSI = { 1,/* lineNo */
  "InternalAccess",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo c1_e_emlrtRSI = { 140,/* lineNo */
  "rigidBodyJoint",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pathName */
};

static emlrtRSInfo c1_f_emlrtRSI = { 1,/* lineNo */
  "InternalAccess",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\shared\\robotics\\robotutils\\+robotics\\+core\\+internal\\InternalAccess.m"/* pathName */
};

static emlrtRSInfo c1_g_emlrtRSI = { 146,/* lineNo */
  "loadrobot",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\loadrobot.m"/* pathName */
};

static emlrtRSInfo c1_h_emlrtRSI = { 149,/* lineNo */
  "loadrobot",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\loadrobot.m"/* pathName */
};

static emlrtRSInfo c1_i_emlrtRSI = { 154,/* lineNo */
  "loadrobot",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\loadrobot.m"/* pathName */
};

static emlrtRSInfo c1_j_emlrtRSI = { 111,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c1_k_emlrtRSI = { 167,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c1_l_emlrtRSI = { 162,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c1_m_emlrtRSI = { 176,/* lineNo */
  "RigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c1_n_emlrtRSI = { 71,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c1_o_emlrtRSI = { 145,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c1_p_emlrtRSI = { 163,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c1_q_emlrtRSI = { 172,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c1_r_emlrtRSI = { 176,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c1_s_emlrtRSI = { 175,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c1_t_emlrtRSI = { 27,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo c1_u_emlrtRSI = { 45,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo c1_v_emlrtRSI = { 52,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo c1_w_emlrtRSI = { 35,/* lineNo */
  "CollisionGeometry",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometry.m"/* pathName */
};

static emlrtRSInfo c1_x_emlrtRSI = { 63,/* lineNo */
  "CollisionGeomStruct",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeomStruct.m"/* pathName */
};

static emlrtRSInfo c1_y_emlrtRSI = { 66,/* lineNo */
  "CollisionGeomStruct",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeomStruct.m"/* pathName */
};

static emlrtRSInfo c1_ab_emlrtRSI = { 69,/* lineNo */
  "CollisionGeomStruct",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeomStruct.m"/* pathName */
};

static emlrtRSInfo c1_bb_emlrtRSI = { 72,/* lineNo */
  "CollisionGeomStruct",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeomStruct.m"/* pathName */
};

static emlrtRSInfo c1_cb_emlrtRSI = { 54,/* lineNo */
  "CollisionGeometryFactory",          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometryFactory.m"/* pathName */
};

static emlrtRSInfo c1_db_emlrtRSI = { 141,/* lineNo */
  "CollisionGeometryFactory",          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometryFactory.m"/* pathName */
};

static emlrtRSInfo c1_eb_emlrtRSI = { 74,/* lineNo */
  "CollisionGeometryFactory",          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometryFactory.m"/* pathName */
};

static emlrtRSInfo c1_fb_emlrtRSI = { 65,/* lineNo */
  "CollisionGeometryFactory",          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometryFactory.m"/* pathName */
};

static emlrtRSInfo c1_gb_emlrtRSI = { 125,/* lineNo */
  "CollisionGeometryFactory",          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometryFactory.m"/* pathName */
};

static emlrtRSInfo c1_hb_emlrtRSI = { 133,/* lineNo */
  "CollisionGeometryFactory",          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionGeometryFactory.m"/* pathName */
};

static emlrtRSInfo c1_ib_emlrtRSI = { 68,/* lineNo */
  "CollisionSet",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pathName */
};

static emlrtRSInfo c1_jb_emlrtRSI = { 158,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c1_kb_emlrtRSI = { 145,/* lineNo */
  "rigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyTree.m"/* pathName */
};

static emlrtRSInfo c1_lb_emlrtRSI = { 1277,/* lineNo */
  "rigidBodyTree",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyTree.m"/* pathName */
};

static emlrtRTEInfo c1_emlrtRTEI = { 122,/* lineNo */
  17,                                  /* colNo */
  "RigidBody",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pName */
};

static emlrtRTEInfo c1_b_emlrtRTEI = { 125,/* lineNo */
  17,                                  /* colNo */
  "RigidBody",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pName */
};

static emlrtRTEInfo c1_c_emlrtRTEI = { 150,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c1_d_emlrtRTEI = { 151,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c1_e_emlrtRTEI = { 155,/* lineNo */
  17,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c1_f_emlrtRTEI = { 162,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c1_g_emlrtRTEI = { 168,/* lineNo */
  20,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c1_h_emlrtRTEI = { 184,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c1_i_emlrtRTEI = { 170,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c1_j_emlrtRTEI = { 177,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c1_k_emlrtRTEI = { 185,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c1_l_emlrtRTEI = { 171,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c1_m_emlrtRTEI = { 178,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c1_n_emlrtRTEI = { 186,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c1_o_emlrtRTEI = { 172,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c1_p_emlrtRTEI = { 179,/* lineNo */
  21,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c1_q_emlrtRTEI = { 192,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c1_r_emlrtRTEI = { 193,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c1_s_emlrtRTEI = { 194,/* lineNo */
  13,                                  /* colNo */
  "rigidBodyJoint",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\rigidBodyJoint.m"/* pName */
};

static emlrtRTEInfo c1_t_emlrtRTEI = { 149,/* lineNo */
  21,                                  /* colNo */
  "RigidBody",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pName */
};

static emlrtRTEInfo c1_u_emlrtRTEI = { 152,/* lineNo */
  21,                                  /* colNo */
  "RigidBody",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pName */
};

static emlrtRTEInfo c1_v_emlrtRTEI = { 154,/* lineNo */
  21,                                  /* colNo */
  "RigidBody",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pName */
};

static emlrtRTEInfo c1_w_emlrtRTEI = { 157,/* lineNo */
  21,                                  /* colNo */
  "RigidBody",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pName */
};

static emlrtRTEInfo c1_x_emlrtRTEI = { 95,/* lineNo */
  17,                                  /* colNo */
  "RigidBody",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pName */
};

static emlrtRTEInfo c1_y_emlrtRTEI = { 27,/* lineNo */
  24,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtRTEInfo c1_ab_emlrtRTEI = { 33,/* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtRTEInfo c1_bb_emlrtRTEI = { 51,/* lineNo */
  25,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m"/* pName */
};

static emlrtDCInfo c1_emlrtDCI = { 33, /* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c1_b_emlrtDCI = { 33,/* lineNo */
  61,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c1_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_c_emlrtDCI = { 61,/* lineNo */
  41,                                  /* colNo */
  "CollisionSet",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\CollisionSet.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRSInfo c1_mb_emlrtRSI = { 125,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c1_nb_emlrtRSI = { 152,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static emlrtRSInfo c1_ob_emlrtRSI = { 149,/* lineNo */
  "RigidBody",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\robotics\\robotmanip\\+robotics\\+manip\\+internal\\RigidBody.m"/* pathName */
};

static real_T c1_dv[6] = { 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

static real_T c1_dv1[3] = { 0.0, 0.0, 1.0 };

static real_T c1_dv2[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
  1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

static real_T c1_dv3[6] = { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0 };

static char_T c1_cv[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

static real_T c1_dv4[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
  1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

static real_T c1_dv5[6] = { 0.0, 1.0, 0.0, 0.0, 0.0, 0.0 };

static real_T c1_dv6[3] = { 0.0, 1.0, 0.0 };

static real_T c1_dv7[9] = { 0.111172755531, 0.0, 0.0, 0.0, 0.111172755531, 0.0,
  0.0, 0.0, 0.21942 };

static real_T c1_dv8[36] = { 0.111172755531, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0,
  0.111172755531, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.21942, -0.0, 0.0, 0.0, 0.0,
  0.0, -0.0, 1.219, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 1.219, 0.0, 0.0, -0.0, 0.0,
  0.0, 0.0, 1.219 };

/* Function Declarations */
static void initialize_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance);
static void initialize_params_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance);
static void enable_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance);
static void disable_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance);
static void c1_update_jit_animation_state_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance);
static void c1_do_animation_call_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance);
static void ext_mode_exec_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance);
static void set_sim_state_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const mxArray *c1_st);
static void sf_gateway_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance);
static void mdl_start_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance);
static void mdl_terminate_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance);
static void initSimStructsc1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance);
static void c1_handle_matlabCodegenDestructor
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_CollisionGeometry *c1_obj);
static c1_robotics_manip_internal_RigidBodyTree *c1_RigidBodyTree_RigidBodyTree
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBodyTree *c1_obj);
static c1_robotics_manip_internal_RigidBody *c1_RigidBody_RigidBody
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_obj,
   c1_robotics_manip_internal_CollisionGeometry *c1_iobj_0,
   c1_robotics_manip_internal_CollisionSet *c1_iobj_1);
static c1_robotics_manip_internal_CollisionSet *c1_CollisionSet_CollisionSet
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_CollisionSet *c1_obj, real_T
   c1_maxElements);
static c1_robotics_manip_internal_CollisionGeometry
  *c1_CollisionGeomStruct_populateCollisionGeomFromStruct
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance,
   c1_sH0VcwdyJUgJDvK7I0stYa *c1_collisionGeomStruct,
   c1_robotics_manip_internal_CollisionGeometry *c1_iobj_0);
static void c1_CollisionSet_add(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, const emlrtStack *c1_sp,
  c1_robotics_manip_internal_CollisionSet *c1_obj,
  c1_robotics_manip_internal_CollisionGeometry *c1_collisionGeometry);
static c1_robotics_manip_internal_RigidBody *c1_b_RigidBody_RigidBody
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_obj,
   c1_robotics_manip_internal_CollisionGeometry *c1_iobj_0,
   c1_robotics_manip_internal_CollisionSet *c1_iobj_1);
static c1_robotics_manip_internal_RigidBody *c1_c_RigidBody_RigidBody
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_obj,
   c1_robotics_manip_internal_CollisionGeometry *c1_iobj_0,
   c1_robotics_manip_internal_CollisionSet *c1_iobj_1);
static c1_robotics_manip_internal_RigidBody *c1_d_RigidBody_RigidBody
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_obj,
   c1_robotics_manip_internal_CollisionGeometry *c1_iobj_0,
   c1_robotics_manip_internal_CollisionSet *c1_iobj_1);
static c1_robotics_manip_internal_RigidBody *c1_e_RigidBody_RigidBody
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_obj,
   c1_robotics_manip_internal_CollisionGeometry *c1_iobj_0,
   c1_robotics_manip_internal_CollisionSet *c1_iobj_1);
static c1_robotics_manip_internal_RigidBody *c1_f_RigidBody_RigidBody
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_obj,
   c1_robotics_manip_internal_CollisionGeometry *c1_iobj_0,
   c1_robotics_manip_internal_CollisionSet *c1_iobj_1);
static c1_robotics_manip_internal_RigidBody *c1_g_RigidBody_RigidBody
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_obj,
   c1_robotics_manip_internal_CollisionGeometry *c1_iobj_0,
   c1_robotics_manip_internal_CollisionSet *c1_iobj_1);
static c1_robotics_manip_internal_RigidBody *c1_h_RigidBody_RigidBody
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_obj,
   c1_robotics_manip_internal_CollisionGeometry *c1_iobj_0,
   c1_robotics_manip_internal_CollisionSet *c1_iobj_1);
static c1_robotics_manip_internal_RigidBody *c1_i_RigidBody_RigidBody
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_obj,
   c1_robotics_manip_internal_CollisionSet *c1_iobj_0);
static uint8_T c1_emlrt_marshallIn(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_robot_system_toolbox, const
  char_T *c1_identifier);
static uint8_T c1_b_emlrt_marshallIn(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_slStringInitializeDynamicBuffers
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance);
static const mxArray *c1_chart_data_browse_helper
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance);
static void c1_emxInitStruct_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBodyTree *c1_pStruct, const
   emlrtRTEInfo *c1_srcLocation);
static void c1_b_emxInitStruct_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_pStruct, const emlrtRTEInfo *
   c1_srcLocation);
static void c1_emxInit_char_T(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_char_T **c1_pEmxArray,
  int32_T c1_numDimensions, const emlrtRTEInfo *c1_srcLocation);
static void c1_emxInitStruct_rigidBodyJoint
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_rigidBodyJoint *c1_pStruct, const emlrtRTEInfo *c1_srcLocation);
static void c1_emxInit_real_T(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T **c1_pEmxArray,
  int32_T c1_numDimensions, const emlrtRTEInfo *c1_srcLocation);
static void c1_emxInit_real_T1(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T **c1_pEmxArray,
  int32_T c1_numDimensions, const emlrtRTEInfo *c1_srcLocation);
static void c1_emxInitMatrix_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_CollisionSet c1_pMatrix[19], const
   emlrtRTEInfo *c1_srcLocation);
static void c1_c_emxInitStruct_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_CollisionSet *c1_pStruct, const
   emlrtRTEInfo *c1_srcLocation);
static void c1_emxInit_unnamed_struct(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_unnamed_struct
  **c1_pEmxArray, int32_T c1_numDimensions, const emlrtRTEInfo *c1_srcLocation);
static void c1_b_emxInitMatrix_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody c1_pMatrix[10], const
   emlrtRTEInfo *c1_srcLocation);
static void c1_emxFree_char_T(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, c1_emxArray_char_T **c1_pEmxArray);
static void c1_emxFreeStruct_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance,
   c1_robotics_manip_internal_RigidBody *c1_pStruct);
static void c1_emxFreeStruct_rigidBodyJoint
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, c1_rigidBodyJoint
   *c1_pStruct);
static void c1_emxFree_real_T(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, c1_emxArray_real_T **c1_pEmxArray);
static void c1_b_emxFreeStruct_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance,
   c1_robotics_manip_internal_RigidBodyTree *c1_pStruct);
static void c1_emxFreeMatrix_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance,
   c1_robotics_manip_internal_CollisionSet c1_pMatrix[19]);
static void c1_emxFree_unnamed_struct(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, c1_emxArray_unnamed_struct **c1_pEmxArray);
static void c1_c_emxFreeStruct_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance,
   c1_robotics_manip_internal_CollisionSet *c1_pStruct);
static void c1_b_emxFreeMatrix_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance,
   c1_robotics_manip_internal_RigidBody c1_pMatrix[10]);
static void c1_emxEnsureCapacity_char_T(SFc1_robot_system_toolboxInstanceStruct *
  chartInstance, const emlrtStack *c1_sp, c1_emxArray_char_T *c1_emxArray,
  int32_T c1_oldNumel, const emlrtRTEInfo *c1_srcLocation);
static void c1_emxEnsureCapacity_real_T(SFc1_robot_system_toolboxInstanceStruct *
  chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T *c1_emxArray,
  int32_T c1_oldNumel, const emlrtRTEInfo *c1_srcLocation);
static void c1_emxEnsureCapacity_real_T1(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T *c1_emxArray,
  int32_T c1_oldNumel, const emlrtRTEInfo *c1_srcLocation);
static void c1_emxEnsureCapacity_unnamed_struc
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_emxArray_unnamed_struct *c1_emxArray, int32_T c1_oldNumel, const
   emlrtRTEInfo *c1_srcLocation);
static void init_dsm_address_info(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance)
{
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  emlrtLicenseCheckR2012b(&c1_st, (const char_T *)"robotics_system_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_is_active_c1_robot_system_toolbox = 0U;
}

static void initialize_params_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c1_update_jit_animation_state_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_do_animation_call_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance)
{
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_st = NULL;
  const mxArray *c1_y = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(1, 1), false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y",
    &chartInstance->c1_is_active_c1_robot_system_toolbox, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  sf_mex_assign(&c1_st, c1_y, false);
  return c1_st;
}

static void set_sim_state_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  chartInstance->c1_doneDoubleBufferReInit = true;
  c1_u = sf_mex_dup(c1_st);
  chartInstance->c1_is_active_c1_robot_system_toolbox = c1_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 0)),
     "is_active_c1_robot_system_toolbox");
  sf_mex_destroy(&c1_u);
  sf_mex_destroy(&c1_st);
}

static void sf_gateway_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance)
{
  static real_T c1_b_dv[3] = { 0.0, 0.0, -9.81 };

  c1_rigidBodyTree c1_robot;
  c1_rigidBodyTree *c1_b_obj;
  c1_rigidBodyTree *c1_c_obj;
  c1_rigidBodyTree *c1_d_obj;
  c1_rigidBodyTree *c1_obj;
  c1_rigidBodyTree *c1_this;
  c1_robotics_manip_internal_RigidBodyTree c1_lobj_1;
  c1_robotics_manip_internal_RigidBodyTree *c1_e_obj;
  c1_robotics_manip_internal_RigidBodyTree *c1_varargin_1;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_d_st;
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  c1_d_st.prev = &c1_c_st;
  c1_d_st.tls = c1_c_st.tls;
  c1_emxInitStruct_robotics_manip_in(chartInstance, &c1_st, &c1_lobj_1,
    (emlrtRTEInfo *)NULL);
  chartInstance->c1_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c1_covrtInstance, 4U, 0, 0);
  c1_b_st.site = &c1_c_emlrtRSI;
  emlrtHeapReferenceStackEnterFcnR2012b(&c1_b_st);
  for (c1_i = 0; c1_i < 19; c1_i++) {
    emlrtPushHeapReferenceStackR2021a(&c1_b_st, true, &c1_lobj_1._pobj1[c1_i].
      _pobj0, (void *)&c1_handle_matlabCodegenDestructor, chartInstance, NULL,
      NULL);
  }

  for (c1_i1 = 0; c1_i1 < 19; c1_i1++) {
    c1_lobj_1._pobj1[c1_i1]._pobj0.matlabCodegenIsDeleted = true;
  }

  for (c1_i2 = 0; c1_i2 < 40; c1_i2++) {
    emlrtPushHeapReferenceStackR2021a(&c1_b_st, true, &c1_lobj_1._pobj0[c1_i2],
      (void *)&c1_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  }

  for (c1_i3 = 0; c1_i3 < 40; c1_i3++) {
    c1_lobj_1._pobj0[c1_i3].matlabCodegenIsDeleted = true;
  }

  c1_c_st.site = &c1_g_emlrtRSI;
  c1_obj = &c1_robot;
  c1_d_st.site = &c1_g_emlrtRSI;
  c1_varargin_1 = c1_RigidBodyTree_RigidBodyTree(chartInstance, &c1_d_st,
    &c1_lobj_1);
  c1_b_obj = c1_obj;
  c1_d_st.site = &c1_kb_emlrtRSI;
  c1_c_obj = c1_b_obj;
  c1_b_obj = c1_c_obj;
  c1_this = c1_b_obj;
  c1_b_obj = c1_this;
  c1_b_obj->TreeInternal = c1_varargin_1;
  c1_c_st.site = &c1_h_emlrtRSI;
  c1_d_obj = &c1_robot;
  c1_d_st.site = &c1_lb_emlrtRSI;
  c1_e_obj = c1_d_obj->TreeInternal;
  for (c1_i4 = 0; c1_i4 < 3; c1_i4++) {
    c1_e_obj->Gravity[c1_i4] = c1_b_dv[c1_i4];
  }

  for (c1_i5 = 0; c1_i5 < 40; c1_i5++) {
    c1_c_st.site = &c1_i_emlrtRSI;
    c1_handle_matlabCodegenDestructor(chartInstance, &c1_c_st,
      &c1_lobj_1._pobj0[c1_i5]);
  }

  for (c1_i6 = 0; c1_i6 < 19; c1_i6++) {
    c1_c_st.site = &c1_i_emlrtRSI;
    c1_handle_matlabCodegenDestructor(chartInstance, &c1_c_st,
      &c1_lobj_1._pobj1[c1_i6]._pobj0);
  }

  c1_b_emxFreeStruct_robotics_manip_in(chartInstance, &c1_lobj_1);
  emlrtHeapReferenceStackLeaveFcnR2012b(&c1_b_st);
  c1_do_animation_call_c1_robot_system_toolbox(chartInstance);
}

static void mdl_start_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance)
{
  static const uint32_T c1_decisionTxtEndIdx = 0U;
  static const uint32_T c1_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c1_chart_data_browse_helper);
  chartInstance->c1_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c1_RuntimeVar,
    &chartInstance->c1_IsDebuggerActive,
    &chartInstance->c1_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c1_mlFcnLineNumber, &chartInstance->c1_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c1_covrtInstance, 1U, 0U, 1U,
    3U);
  covrtChartInitFcn(chartInstance->c1_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c1_decisionTxtStartIdx, &c1_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 109);
}

static void mdl_cleanup_runtime_resources_c1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c1_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c1_covrtInstance);
}

static void initSimStructsc1_robot_system_toolbox
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_handle_matlabCodegenDestructor
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_CollisionGeometry *c1_obj)
{
  void* c1_geometryInternal;
  c1_robotics_manip_internal_CollisionGeometry *c1_b_obj;
  (void)chartInstance;
  if (!c1_obj->matlabCodegenIsDeleted) {
    c1_obj->matlabCodegenIsDeleted = true;
    c1_b_obj = c1_obj;
    c1_geometryInternal = c1_b_obj->CollisionPrimitive;
    collisioncodegen_destructGeometry(&c1_geometryInternal);
  }
}

const mxArray *sf_c1_robot_system_toolbox_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c1_nameCaptureInfo;
}

static c1_robotics_manip_internal_RigidBodyTree *c1_RigidBodyTree_RigidBodyTree
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBodyTree *c1_obj)
{
  static real_T c1_b_dv[20] = { 0.0, 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 0.0, 0.0,
    -1.0, -1.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, -1.0, -1.0 };

  static real_T c1_b_dv1[16] = { -1.0, 2.0682310711021444E-13, -0.0, 0.0,
    -2.0682310711021444E-13, -1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    1.0 };

  static real_T c1_b_dv2[10] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0 };

  static char_T c1_jname[26] = { 'b', 'a', 's', 'e', '_', 'l', 'i', 'n', 'k',
    '-', 'b', 'a', 's', 'e', '_', 'f', 'i', 'x', 'e', 'd', '_', 'j', 'o', 'i',
    'n', 't' };

  static char_T c1_cv2[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c1_cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static char_T c1_cv3[5] = { 'w', 'o', 'r', 'l', 'd' };

  static char_T c1_b_cv[4] = { 'b', 'a', 's', 'e' };

  static char_T c1_cv4[4] = { '_', 'j', 'n', 't' };

  c1_emxArray_char_T *c1_b_jname;
  c1_rigidBodyJoint *c1_c_this;
  c1_rigidBodyJoint *c1_e_this;
  c1_rigidBodyJoint *c1_g_obj;
  c1_rigidBodyJoint *c1_h_obj;
  c1_rigidBodyJoint *c1_m_obj;
  c1_rigidBodyJoint *c1_n_obj;
  c1_robotics_manip_internal_CollisionSet *c1_b_iobj_0;
  c1_robotics_manip_internal_CollisionSet *c1_iobj_0;
  c1_robotics_manip_internal_RigidBody *c1_b_this;
  c1_robotics_manip_internal_RigidBody *c1_d_obj;
  c1_robotics_manip_internal_RigidBody *c1_d_this;
  c1_robotics_manip_internal_RigidBody *c1_e_obj;
  c1_robotics_manip_internal_RigidBody *c1_f_obj;
  c1_robotics_manip_internal_RigidBody *c1_j_obj;
  c1_robotics_manip_internal_RigidBody *c1_k_obj;
  c1_robotics_manip_internal_RigidBody *c1_l_obj;
  c1_robotics_manip_internal_RigidBodyTree *c1_b_obj;
  c1_robotics_manip_internal_RigidBodyTree *c1_c_obj;
  c1_robotics_manip_internal_RigidBodyTree *c1_i_obj;
  c1_robotics_manip_internal_RigidBodyTree *c1_this;
  c1_s_fi96xN8J0TyRz73zholQFH c1_r;
  emlrtStack c1_b_st;
  emlrtStack c1_st;
  real_T c1_msubspace_data[36];
  real_T c1_poslim_data[12];
  real_T c1_homepos_data[6];
  real_T c1_b_index;
  real_T c1_index;
  int32_T c1_bodyName_size[2];
  int32_T c1_jointtype_size[2];
  int32_T c1_msubspace_size[2];
  int32_T c1_poslim_size[2];
  int32_T c1_homepos_size[1];
  int32_T c1_b_kstr;
  int32_T c1_b_loop_ub;
  int32_T c1_b_remainingDimsA;
  int32_T c1_c_kstr;
  int32_T c1_c_loop_ub;
  int32_T c1_c_remainingDimsA;
  int32_T c1_d_kstr;
  int32_T c1_d_loop_ub;
  int32_T c1_d_remainingDimsA;
  int32_T c1_e_kstr;
  int32_T c1_e_loop_ub;
  int32_T c1_exitg1;
  int32_T c1_f_kstr;
  int32_T c1_f_loop_ub;
  int32_T c1_g_kstr;
  int32_T c1_g_loop_ub;
  int32_T c1_h_kstr;
  int32_T c1_h_loop_ub;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i3;
  int32_T c1_i30;
  int32_T c1_i31;
  int32_T c1_i32;
  int32_T c1_i33;
  int32_T c1_i34;
  int32_T c1_i35;
  int32_T c1_i36;
  int32_T c1_i37;
  int32_T c1_i38;
  int32_T c1_i39;
  int32_T c1_i4;
  int32_T c1_i40;
  int32_T c1_i41;
  int32_T c1_i42;
  int32_T c1_i43;
  int32_T c1_i44;
  int32_T c1_i45;
  int32_T c1_i46;
  int32_T c1_i47;
  int32_T c1_i48;
  int32_T c1_i49;
  int32_T c1_i5;
  int32_T c1_i50;
  int32_T c1_i51;
  int32_T c1_i52;
  int32_T c1_i53;
  int32_T c1_i54;
  int32_T c1_i55;
  int32_T c1_i56;
  int32_T c1_i57;
  int32_T c1_i58;
  int32_T c1_i59;
  int32_T c1_i6;
  int32_T c1_i60;
  int32_T c1_i61;
  int32_T c1_i62;
  int32_T c1_i63;
  int32_T c1_i64;
  int32_T c1_i65;
  int32_T c1_i66;
  int32_T c1_i67;
  int32_T c1_i68;
  int32_T c1_i69;
  int32_T c1_i7;
  int32_T c1_i70;
  int32_T c1_i71;
  int32_T c1_i72;
  int32_T c1_i73;
  int32_T c1_i74;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_i_loop_ub;
  int32_T c1_j_loop_ub;
  int32_T c1_k_loop_ub;
  int32_T c1_kstr;
  int32_T c1_l_loop_ub;
  int32_T c1_loop_ub;
  int32_T c1_m_loop_ub;
  int32_T c1_n_loop_ub;
  int32_T c1_remainingDimsA;
  char_T c1_bodyName_data[256];
  char_T c1_jointname_data[26];
  char_T c1_jointtype_data[20];
  boolean_T c1_b_bool;
  boolean_T c1_b_result;
  boolean_T c1_bool;
  boolean_T c1_c_bool;
  boolean_T c1_c_result;
  boolean_T c1_d_bool;
  boolean_T c1_d_result;
  boolean_T c1_result;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_b_obj = c1_obj;
  c1_st.site = &c1_j_emlrtRSI;
  c1_c_obj = c1_b_obj;
  c1_b_obj = c1_c_obj;
  c1_b_st.site = &c1_d_emlrtRSI;
  c1_this = c1_b_obj;
  c1_b_obj = c1_this;
  for (c1_i = 0; c1_i < 20; c1_i++) {
    c1_r.PositionDoFMap[c1_i] = c1_b_dv[c1_i];
  }

  for (c1_i1 = 0; c1_i1 < 20; c1_i1++) {
    c1_r.VelocityDoFMap[c1_i1] = c1_b_dv[c1_i1];
  }

  c1_st.site = &c1_l_emlrtRSI;
  c1_b_obj->Bodies[0] = c1_RigidBody_RigidBody(chartInstance, &c1_st,
    &c1_b_obj->_pobj2[0], &c1_b_obj->_pobj0[0], &c1_b_obj->_pobj1[0]);
  c1_b_obj->Bodies[0]->Index = 1.0;
  c1_st.site = &c1_l_emlrtRSI;
  c1_d_obj = &c1_b_obj->_pobj2[1];
  c1_iobj_0 = &c1_b_obj->_pobj1[2];
  c1_e_obj = c1_d_obj;
  c1_b_st.site = &c1_n_emlrtRSI;
  c1_f_obj = c1_e_obj;
  c1_e_obj = c1_f_obj;
  c1_b_this = c1_e_obj;
  c1_e_obj = c1_b_this;
  c1_bodyName_size[0] = 1;
  c1_bodyName_size[1] = 4;
  for (c1_i2 = 0; c1_i2 < 4; c1_i2++) {
    c1_bodyName_data[c1_i2] = c1_b_cv[c1_i2];
  }

  c1_i3 = c1_e_obj->NameInternal->size[0] * c1_e_obj->NameInternal->size[1];
  c1_e_obj->NameInternal->size[0] = 1;
  c1_e_obj->NameInternal->size[1] = c1_bodyName_size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->NameInternal,
    c1_i3, &c1_b_emlrtRTEI);
  c1_loop_ub = c1_bodyName_size[0] * c1_bodyName_size[1] - 1;
  for (c1_i4 = 0; c1_i4 <= c1_loop_ub; c1_i4++) {
    c1_e_obj->NameInternal->data[c1_i4] = c1_bodyName_data[c1_i4];
  }

  c1_e_obj->ParentIndex = 1.0;
  for (c1_i5 = 0; c1_i5 < 10; c1_i5++) {
    c1_e_obj->ChildrenIndices[c1_i5] = 0.0;
  }

  c1_e_obj->MassInternal = 0.0;
  for (c1_i6 = 0; c1_i6 < 3; c1_i6++) {
    c1_e_obj->CenterOfMassInternal[c1_i6] = 0.0;
  }

  for (c1_i7 = 0; c1_i7 < 9; c1_i7++) {
    c1_e_obj->InertiaInternal[c1_i7] = 0.0;
  }

  for (c1_i8 = 0; c1_i8 < 36; c1_i8++) {
    c1_e_obj->SpatialInertia[c1_i8] = 0.0;
  }

  c1_b_st.site = &c1_o_emlrtRSI;
  c1_g_obj = &c1_e_obj->JointInternal;
  c1_h_obj = c1_g_obj;
  for (c1_i9 = 0; c1_i9 < 26; c1_i9++) {
    c1_jointname_data[c1_i9] = c1_jname[c1_i9];
  }

  c1_c_this = c1_h_obj;
  c1_h_obj = c1_c_this;
  c1_i10 = c1_h_obj->NameInternal->size[0] * c1_h_obj->NameInternal->size[1];
  c1_h_obj->NameInternal->size[0] = 1;
  c1_h_obj->NameInternal->size[1] = 26;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_b_st, c1_h_obj->NameInternal,
    c1_i10, &c1_d_emlrtRTEI);
  for (c1_i11 = 0; c1_i11 < 26; c1_i11++) {
    c1_h_obj->NameInternal->data[c1_i11] = c1_jointname_data[c1_i11];
  }

  c1_jointtype_size[0] = 1;
  c1_jointtype_size[1] = 5;
  for (c1_i12 = 0; c1_i12 < 5; c1_i12++) {
    c1_jointtype_data[c1_i12] = c1_cv1[c1_i12];
  }

  c1_i13 = c1_h_obj->Type->size[0] * c1_h_obj->Type->size[1];
  c1_h_obj->Type->size[0] = 1;
  c1_h_obj->Type->size[1] = c1_jointtype_size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_b_st, c1_h_obj->Type, c1_i13,
    &c1_f_emlrtRTEI);
  c1_b_loop_ub = c1_jointtype_size[0] * c1_jointtype_size[1] - 1;
  for (c1_i14 = 0; c1_i14 <= c1_b_loop_ub; c1_i14++) {
    c1_h_obj->Type->data[c1_i14] = c1_jointtype_data[c1_i14];
  }

  c1_emxInit_char_T(chartInstance, &c1_b_st, &c1_b_jname, 2, &c1_x_emlrtRTEI);
  c1_i15 = c1_b_jname->size[0] * c1_b_jname->size[1];
  c1_b_jname->size[0] = 1;
  c1_b_jname->size[1] = c1_h_obj->Type->size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_b_st, c1_b_jname, c1_i15,
    &c1_g_emlrtRTEI);
  c1_c_loop_ub = c1_h_obj->Type->size[0] * c1_h_obj->Type->size[1] - 1;
  for (c1_i16 = 0; c1_i16 <= c1_c_loop_ub; c1_i16++) {
    c1_b_jname->data[c1_i16] = c1_h_obj->Type->data[c1_i16];
  }

  c1_bool = false;
  c1_remainingDimsA = c1_b_jname->size[1];
  if (c1_remainingDimsA != 8) {
  } else {
    c1_kstr = 1;
    do {
      c1_exitg1 = 0;
      if (c1_kstr - 1 < 8) {
        c1_b_kstr = c1_kstr - 1;
        if (c1_b_jname->data[c1_b_kstr] != c1_cv2[c1_b_kstr]) {
          c1_exitg1 = 1;
        } else {
          c1_kstr++;
        }
      } else {
        c1_bool = true;
        c1_exitg1 = 1;
      }
    } while (c1_exitg1 == 0);
  }

  if (c1_bool) {
    c1_result = true;
  } else {
    c1_result = false;
  }

  if (c1_result) {
    c1_index = 0.0;
  } else {
    c1_b_bool = false;
    c1_b_remainingDimsA = c1_b_jname->size[1];
    if (c1_b_remainingDimsA != 9) {
    } else {
      c1_c_kstr = 1;
      do {
        c1_exitg1 = 0;
        if (c1_c_kstr - 1 < 9) {
          c1_d_kstr = c1_c_kstr - 1;
          if (c1_b_jname->data[c1_d_kstr] != c1_cv[c1_d_kstr]) {
            c1_exitg1 = 1;
          } else {
            c1_c_kstr++;
          }
        } else {
          c1_b_bool = true;
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);
    }

    if (c1_b_bool) {
      c1_b_result = true;
    } else {
      c1_b_result = false;
    }

    if (c1_b_result) {
      c1_index = 1.0;
    } else {
      c1_index = -1.0;
    }
  }

  switch ((int32_T)c1_index) {
   case 0:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i18 = 0; c1_i18 < 6; c1_i18++) {
      c1_msubspace_data[c1_i18] = c1_dv3[c1_i18];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i21 = 0; c1_i21 < 2; c1_i21++) {
      c1_poslim_data[c1_i21] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c1_i21;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_h_obj->VelocityNumber = 1.0;
    c1_h_obj->PositionNumber = 1.0;
    for (c1_i24 = 0; c1_i24 < 3; c1_i24++) {
      c1_h_obj->JointAxisInternal[c1_i24] = c1_dv1[c1_i24];
    }
    break;

   case 1:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i19 = 0; c1_i19 < 6; c1_i19++) {
      c1_msubspace_data[c1_i19] = c1_dv[c1_i19];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i22 = 0; c1_i22 < 2; c1_i22++) {
      c1_poslim_data[c1_i22] = -0.5 + (real_T)c1_i22;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_h_obj->VelocityNumber = 1.0;
    c1_h_obj->PositionNumber = 1.0;
    for (c1_i25 = 0; c1_i25 < 3; c1_i25++) {
      c1_h_obj->JointAxisInternal[c1_i25] = c1_dv1[c1_i25];
    }
    break;

   default:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i17 = 0; c1_i17 < 6; c1_i17++) {
      c1_msubspace_data[c1_i17] = 0.0;
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i20 = 0; c1_i20 < 2; c1_i20++) {
      c1_poslim_data[c1_i20] = 0.0;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_h_obj->VelocityNumber = 0.0;
    c1_h_obj->PositionNumber = 0.0;
    for (c1_i23 = 0; c1_i23 < 3; c1_i23++) {
      c1_h_obj->JointAxisInternal[c1_i23] = 0.0;
    }
    break;
  }

  c1_i26 = c1_h_obj->MotionSubspace->size[0] * c1_h_obj->MotionSubspace->size[1];
  c1_h_obj->MotionSubspace->size[0] = 6;
  c1_h_obj->MotionSubspace->size[1] = c1_msubspace_size[1];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st, c1_h_obj->MotionSubspace,
    c1_i26, &c1_q_emlrtRTEI);
  c1_d_loop_ub = c1_msubspace_size[0] * c1_msubspace_size[1] - 1;
  for (c1_i27 = 0; c1_i27 <= c1_d_loop_ub; c1_i27++) {
    c1_h_obj->MotionSubspace->data[c1_i27] = c1_msubspace_data[c1_i27];
  }

  c1_i28 = c1_h_obj->PositionLimitsInternal->size[0] *
    c1_h_obj->PositionLimitsInternal->size[1];
  c1_h_obj->PositionLimitsInternal->size[0] = c1_poslim_size[0];
  c1_h_obj->PositionLimitsInternal->size[1] = 2;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st,
    c1_h_obj->PositionLimitsInternal, c1_i28, &c1_r_emlrtRTEI);
  c1_e_loop_ub = c1_poslim_size[0] * c1_poslim_size[1] - 1;
  for (c1_i29 = 0; c1_i29 <= c1_e_loop_ub; c1_i29++) {
    c1_h_obj->PositionLimitsInternal->data[c1_i29] = c1_poslim_data[c1_i29];
  }

  c1_i30 = c1_h_obj->HomePositionInternal->size[0];
  c1_h_obj->HomePositionInternal->size[0] = c1_homepos_size[0];
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_b_st,
    c1_h_obj->HomePositionInternal, c1_i30, &c1_s_emlrtRTEI);
  c1_f_loop_ub = c1_homepos_size[0] - 1;
  for (c1_i31 = 0; c1_i31 <= c1_f_loop_ub; c1_i31++) {
    c1_h_obj->HomePositionInternal->data[c1_i31] = c1_homepos_data[c1_i31];
  }

  for (c1_i32 = 0; c1_i32 < 16; c1_i32++) {
    c1_e_obj->JointInternal.JointToParentTransform[c1_i32] = c1_b_dv1[c1_i32];
  }

  for (c1_i33 = 0; c1_i33 < 16; c1_i33++) {
    c1_e_obj->JointInternal.ChildToJointTransform[c1_i33] = c1_dv2[c1_i33];
  }

  c1_i34 = c1_e_obj->JointInternal.MotionSubspace->size[0] *
    c1_e_obj->JointInternal.MotionSubspace->size[1];
  c1_e_obj->JointInternal.MotionSubspace->size[0] = 6;
  c1_e_obj->JointInternal.MotionSubspace->size[1] = 1;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_e_obj->JointInternal.MotionSubspace, c1_i34, &c1_t_emlrtRTEI);
  for (c1_i35 = 0; c1_i35 < 6; c1_i35++) {
    c1_e_obj->JointInternal.MotionSubspace->data[c1_i35] = 0.0;
  }

  c1_e_obj->JointInternal.InTree = true;
  c1_i36 = c1_e_obj->JointInternal.PositionLimitsInternal->size[0] *
    c1_e_obj->JointInternal.PositionLimitsInternal->size[1];
  c1_e_obj->JointInternal.PositionLimitsInternal->size[0] = 1;
  c1_e_obj->JointInternal.PositionLimitsInternal->size[1] = 2;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_e_obj->JointInternal.PositionLimitsInternal, c1_i36, &c1_u_emlrtRTEI);
  for (c1_i37 = 0; c1_i37 < 2; c1_i37++) {
    c1_e_obj->JointInternal.PositionLimitsInternal->data[c1_i37] = 0.0;
  }

  for (c1_i38 = 0; c1_i38 < 3; c1_i38++) {
    c1_e_obj->JointInternal.JointAxisInternal[c1_i38] = 0.0;
  }

  c1_i39 = c1_e_obj->JointInternal.HomePositionInternal->size[0];
  c1_e_obj->JointInternal.HomePositionInternal->size[0] = 1;
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st,
    c1_e_obj->JointInternal.HomePositionInternal, c1_i39, &c1_v_emlrtRTEI);
  c1_e_obj->JointInternal.HomePositionInternal->data[0] = 0.0;
  c1_b_st.site = &c1_p_emlrtRSI;
  c1_e_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_b_st, c1_iobj_0, 0.0);
  c1_b_obj->Bodies[1] = c1_e_obj;
  c1_b_obj->Bodies[1]->Index = 2.0;
  c1_st.site = &c1_l_emlrtRSI;
  c1_b_obj->Bodies[2] = c1_b_RigidBody_RigidBody(chartInstance, &c1_st,
    &c1_b_obj->_pobj2[2], &c1_b_obj->_pobj0[5], &c1_b_obj->_pobj1[3]);
  c1_b_obj->Bodies[2]->Index = 3.0;
  c1_st.site = &c1_l_emlrtRSI;
  c1_b_obj->Bodies[3] = c1_c_RigidBody_RigidBody(chartInstance, &c1_st,
    &c1_b_obj->_pobj2[3], &c1_b_obj->_pobj0[10], &c1_b_obj->_pobj1[5]);
  c1_b_obj->Bodies[3]->Index = 4.0;
  c1_st.site = &c1_l_emlrtRSI;
  c1_b_obj->Bodies[4] = c1_d_RigidBody_RigidBody(chartInstance, &c1_st,
    &c1_b_obj->_pobj2[4], &c1_b_obj->_pobj0[15], &c1_b_obj->_pobj1[7]);
  c1_b_obj->Bodies[4]->Index = 5.0;
  c1_st.site = &c1_l_emlrtRSI;
  c1_b_obj->Bodies[5] = c1_e_RigidBody_RigidBody(chartInstance, &c1_st,
    &c1_b_obj->_pobj2[5], &c1_b_obj->_pobj0[20], &c1_b_obj->_pobj1[9]);
  c1_b_obj->Bodies[5]->Index = 6.0;
  c1_st.site = &c1_l_emlrtRSI;
  c1_b_obj->Bodies[6] = c1_f_RigidBody_RigidBody(chartInstance, &c1_st,
    &c1_b_obj->_pobj2[6], &c1_b_obj->_pobj0[25], &c1_b_obj->_pobj1[11]);
  c1_b_obj->Bodies[6]->Index = 7.0;
  c1_st.site = &c1_l_emlrtRSI;
  c1_b_obj->Bodies[7] = c1_g_RigidBody_RigidBody(chartInstance, &c1_st,
    &c1_b_obj->_pobj2[7], &c1_b_obj->_pobj0[30], &c1_b_obj->_pobj1[13]);
  c1_b_obj->Bodies[7]->Index = 8.0;
  c1_st.site = &c1_l_emlrtRSI;
  c1_b_obj->Bodies[8] = c1_h_RigidBody_RigidBody(chartInstance, &c1_st,
    &c1_b_obj->_pobj2[8], &c1_b_obj->_pobj0[35], &c1_b_obj->_pobj1[15]);
  c1_b_obj->Bodies[8]->Index = 9.0;
  c1_st.site = &c1_l_emlrtRSI;
  c1_b_obj->Bodies[9] = c1_i_RigidBody_RigidBody(chartInstance, &c1_st,
    &c1_b_obj->_pobj2[9], &c1_b_obj->_pobj1[17]);
  c1_b_obj->Bodies[9]->Index = 10.0;
  c1_b_obj->NumBodies = 10.0;
  c1_st.site = &c1_k_emlrtRSI;
  c1_i_obj = c1_b_obj;
  for (c1_i40 = 0; c1_i40 < 3; c1_i40++) {
    c1_i_obj->Gravity[c1_i40] = 0.0;
  }

  c1_b_obj->NumNonFixedBodies = 6.0;
  c1_b_obj->PositionNumber = 6.0;
  c1_b_obj->VelocityNumber = 6.0;
  for (c1_i41 = 0; c1_i41 < 20; c1_i41++) {
    c1_b_obj->PositionDoFMap[c1_i41] = c1_r.PositionDoFMap[c1_i41];
  }

  for (c1_i42 = 0; c1_i42 < 20; c1_i42++) {
    c1_b_obj->VelocityDoFMap[c1_i42] = c1_r.VelocityDoFMap[c1_i42];
  }

  c1_st.site = &c1_m_emlrtRSI;
  c1_j_obj = &c1_b_obj->Base;
  c1_b_iobj_0 = &c1_b_obj->_pobj1[18];
  c1_k_obj = c1_j_obj;
  c1_b_st.site = &c1_n_emlrtRSI;
  c1_l_obj = c1_k_obj;
  c1_k_obj = c1_l_obj;
  c1_d_this = c1_k_obj;
  c1_k_obj = c1_d_this;
  c1_bodyName_size[0] = 1;
  c1_bodyName_size[1] = 5;
  for (c1_i43 = 0; c1_i43 < 5; c1_i43++) {
    c1_bodyName_data[c1_i43] = c1_cv3[c1_i43];
  }

  c1_i44 = c1_k_obj->NameInternal->size[0] * c1_k_obj->NameInternal->size[1];
  c1_k_obj->NameInternal->size[0] = 1;
  c1_k_obj->NameInternal->size[1] = c1_bodyName_size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_k_obj->NameInternal,
    c1_i44, &c1_b_emlrtRTEI);
  c1_g_loop_ub = c1_bodyName_size[0] * c1_bodyName_size[1] - 1;
  for (c1_i45 = 0; c1_i45 <= c1_g_loop_ub; c1_i45++) {
    c1_k_obj->NameInternal->data[c1_i45] = c1_bodyName_data[c1_i45];
  }

  c1_k_obj->ParentIndex = -1.0;
  for (c1_i46 = 0; c1_i46 < 10; c1_i46++) {
    c1_k_obj->ChildrenIndices[c1_i46] = c1_b_dv2[c1_i46];
  }

  c1_k_obj->MassInternal = 0.0;
  for (c1_i47 = 0; c1_i47 < 3; c1_i47++) {
    c1_k_obj->CenterOfMassInternal[c1_i47] = 0.0;
  }

  for (c1_i48 = 0; c1_i48 < 9; c1_i48++) {
    c1_k_obj->InertiaInternal[c1_i48] = 0.0;
  }

  for (c1_i49 = 0; c1_i49 < 36; c1_i49++) {
    c1_k_obj->SpatialInertia[c1_i49] = 0.0;
  }

  c1_i50 = c1_b_jname->size[0] * c1_b_jname->size[1];
  c1_b_jname->size[0] = 1;
  c1_b_jname->size[1] = c1_k_obj->NameInternal->size[1] + 4;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_b_jname, c1_i50,
    &c1_w_emlrtRTEI);
  c1_h_loop_ub = c1_k_obj->NameInternal->size[1] - 1;
  for (c1_i51 = 0; c1_i51 <= c1_h_loop_ub; c1_i51++) {
    c1_b_jname->data[c1_i51] = c1_k_obj->NameInternal->data[c1_i51];
  }

  for (c1_i52 = 0; c1_i52 < 4; c1_i52++) {
    c1_b_jname->data[c1_i52 + c1_k_obj->NameInternal->size[1]] = c1_cv4[c1_i52];
  }

  c1_b_st.site = &c1_jb_emlrtRSI;
  c1_m_obj = &c1_k_obj->JointInternal;
  c1_n_obj = c1_m_obj;
  c1_e_this = c1_n_obj;
  c1_n_obj = c1_e_this;
  c1_i53 = c1_n_obj->NameInternal->size[0] * c1_n_obj->NameInternal->size[1];
  c1_n_obj->NameInternal->size[0] = 1;
  c1_n_obj->NameInternal->size[1] = c1_b_jname->size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_b_st, c1_n_obj->NameInternal,
    c1_i53, &c1_d_emlrtRTEI);
  c1_i_loop_ub = c1_b_jname->size[0] * c1_b_jname->size[1] - 1;
  for (c1_i54 = 0; c1_i54 <= c1_i_loop_ub; c1_i54++) {
    c1_n_obj->NameInternal->data[c1_i54] = c1_b_jname->data[c1_i54];
  }

  c1_jointtype_size[0] = 1;
  c1_jointtype_size[1] = 5;
  for (c1_i55 = 0; c1_i55 < 5; c1_i55++) {
    c1_jointtype_data[c1_i55] = c1_cv1[c1_i55];
  }

  c1_i56 = c1_n_obj->Type->size[0] * c1_n_obj->Type->size[1];
  c1_n_obj->Type->size[0] = 1;
  c1_n_obj->Type->size[1] = c1_jointtype_size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_b_st, c1_n_obj->Type, c1_i56,
    &c1_f_emlrtRTEI);
  c1_j_loop_ub = c1_jointtype_size[0] * c1_jointtype_size[1] - 1;
  for (c1_i57 = 0; c1_i57 <= c1_j_loop_ub; c1_i57++) {
    c1_n_obj->Type->data[c1_i57] = c1_jointtype_data[c1_i57];
  }

  c1_i58 = c1_b_jname->size[0] * c1_b_jname->size[1];
  c1_b_jname->size[0] = 1;
  c1_b_jname->size[1] = c1_n_obj->Type->size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_b_st, c1_b_jname, c1_i58,
    &c1_g_emlrtRTEI);
  c1_k_loop_ub = c1_n_obj->Type->size[0] * c1_n_obj->Type->size[1] - 1;
  for (c1_i59 = 0; c1_i59 <= c1_k_loop_ub; c1_i59++) {
    c1_b_jname->data[c1_i59] = c1_n_obj->Type->data[c1_i59];
  }

  c1_c_bool = false;
  c1_c_remainingDimsA = c1_b_jname->size[1];
  if (c1_c_remainingDimsA != 8) {
  } else {
    c1_e_kstr = 1;
    do {
      c1_exitg1 = 0;
      if (c1_e_kstr - 1 < 8) {
        c1_f_kstr = c1_e_kstr - 1;
        if (c1_b_jname->data[c1_f_kstr] != c1_cv2[c1_f_kstr]) {
          c1_exitg1 = 1;
        } else {
          c1_e_kstr++;
        }
      } else {
        c1_c_bool = true;
        c1_exitg1 = 1;
      }
    } while (c1_exitg1 == 0);
  }

  if (c1_c_bool) {
    c1_c_result = true;
  } else {
    c1_c_result = false;
  }

  if (c1_c_result) {
    c1_b_index = 0.0;
  } else {
    c1_d_bool = false;
    c1_d_remainingDimsA = c1_b_jname->size[1];
    if (c1_d_remainingDimsA != 9) {
    } else {
      c1_g_kstr = 1;
      do {
        c1_exitg1 = 0;
        if (c1_g_kstr - 1 < 9) {
          c1_h_kstr = c1_g_kstr - 1;
          if (c1_b_jname->data[c1_h_kstr] != c1_cv[c1_h_kstr]) {
            c1_exitg1 = 1;
          } else {
            c1_g_kstr++;
          }
        } else {
          c1_d_bool = true;
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);
    }

    if (c1_d_bool) {
      c1_d_result = true;
    } else {
      c1_d_result = false;
    }

    if (c1_d_result) {
      c1_b_index = 1.0;
    } else {
      c1_b_index = -1.0;
    }
  }

  c1_emxFree_char_T(chartInstance, &c1_b_jname);
  switch ((int32_T)c1_b_index) {
   case 0:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i61 = 0; c1_i61 < 6; c1_i61++) {
      c1_msubspace_data[c1_i61] = c1_dv3[c1_i61];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i64 = 0; c1_i64 < 2; c1_i64++) {
      c1_poslim_data[c1_i64] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c1_i64;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_n_obj->VelocityNumber = 1.0;
    c1_n_obj->PositionNumber = 1.0;
    for (c1_i67 = 0; c1_i67 < 3; c1_i67++) {
      c1_n_obj->JointAxisInternal[c1_i67] = c1_dv1[c1_i67];
    }
    break;

   case 1:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i62 = 0; c1_i62 < 6; c1_i62++) {
      c1_msubspace_data[c1_i62] = c1_dv[c1_i62];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i65 = 0; c1_i65 < 2; c1_i65++) {
      c1_poslim_data[c1_i65] = -0.5 + (real_T)c1_i65;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_n_obj->VelocityNumber = 1.0;
    c1_n_obj->PositionNumber = 1.0;
    for (c1_i68 = 0; c1_i68 < 3; c1_i68++) {
      c1_n_obj->JointAxisInternal[c1_i68] = c1_dv1[c1_i68];
    }
    break;

   default:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i60 = 0; c1_i60 < 6; c1_i60++) {
      c1_msubspace_data[c1_i60] = 0.0;
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i63 = 0; c1_i63 < 2; c1_i63++) {
      c1_poslim_data[c1_i63] = 0.0;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_n_obj->VelocityNumber = 0.0;
    c1_n_obj->PositionNumber = 0.0;
    for (c1_i66 = 0; c1_i66 < 3; c1_i66++) {
      c1_n_obj->JointAxisInternal[c1_i66] = 0.0;
    }
    break;
  }

  c1_i69 = c1_n_obj->MotionSubspace->size[0] * c1_n_obj->MotionSubspace->size[1];
  c1_n_obj->MotionSubspace->size[0] = 6;
  c1_n_obj->MotionSubspace->size[1] = c1_msubspace_size[1];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st, c1_n_obj->MotionSubspace,
    c1_i69, &c1_q_emlrtRTEI);
  c1_l_loop_ub = c1_msubspace_size[0] * c1_msubspace_size[1] - 1;
  for (c1_i70 = 0; c1_i70 <= c1_l_loop_ub; c1_i70++) {
    c1_n_obj->MotionSubspace->data[c1_i70] = c1_msubspace_data[c1_i70];
  }

  c1_i71 = c1_n_obj->PositionLimitsInternal->size[0] *
    c1_n_obj->PositionLimitsInternal->size[1];
  c1_n_obj->PositionLimitsInternal->size[0] = c1_poslim_size[0];
  c1_n_obj->PositionLimitsInternal->size[1] = 2;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_b_st,
    c1_n_obj->PositionLimitsInternal, c1_i71, &c1_r_emlrtRTEI);
  c1_m_loop_ub = c1_poslim_size[0] * c1_poslim_size[1] - 1;
  for (c1_i72 = 0; c1_i72 <= c1_m_loop_ub; c1_i72++) {
    c1_n_obj->PositionLimitsInternal->data[c1_i72] = c1_poslim_data[c1_i72];
  }

  c1_i73 = c1_n_obj->HomePositionInternal->size[0];
  c1_n_obj->HomePositionInternal->size[0] = c1_homepos_size[0];
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_b_st,
    c1_n_obj->HomePositionInternal, c1_i73, &c1_s_emlrtRTEI);
  c1_n_loop_ub = c1_homepos_size[0] - 1;
  for (c1_i74 = 0; c1_i74 <= c1_n_loop_ub; c1_i74++) {
    c1_n_obj->HomePositionInternal->data[c1_i74] = c1_homepos_data[c1_i74];
  }

  c1_b_st.site = &c1_p_emlrtRSI;
  c1_k_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_b_st, c1_b_iobj_0, 0.0);
  c1_b_obj->Base.Index = 0.0;
  return c1_b_obj;
}

static c1_robotics_manip_internal_RigidBody *c1_RigidBody_RigidBody
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_obj,
   c1_robotics_manip_internal_CollisionGeometry *c1_iobj_0,
   c1_robotics_manip_internal_CollisionSet *c1_iobj_1)
{
  static real_T c1_b_dv2[36] = { 0.00443333156, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0,
    0.00443333156, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0072, -0.0, 0.0, 0.0, 0.0,
    0.0, -0.0, 4.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 4.0, 0.0, 0.0, -0.0, 0.0, 0.0,
    0.0, 4.0 };

  static real_T c1_b_dv[10] = { 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0
  };

  static real_T c1_b_dv1[9] = { 0.00443333156, 0.0, 0.0, 0.0, 0.00443333156, 0.0,
    0.0, 0.0, 0.0072 };

  static char_T c1_jname[11] = { 'w', 'o', 'r', 'l', 'd', '_', 'j', 'o', 'i',
    'n', 't' };

  static char_T c1_b_cv[9] = { 'b', 'a', 's', 'e', '_', 'l', 'i', 'n', 'k' };

  static char_T c1_cv2[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c1_cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  c1_emxArray_char_T *c1_switch_expression;
  c1_rigidBodyJoint *c1_b_this;
  c1_rigidBodyJoint *c1_d_obj;
  c1_rigidBodyJoint *c1_e_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_collisionGeometry;
  c1_robotics_manip_internal_RigidBody *c1_b_obj;
  c1_robotics_manip_internal_RigidBody *c1_c_obj;
  c1_robotics_manip_internal_RigidBody *c1_this;
  c1_sH0VcwdyJUgJDvK7I0stYa c1_s;
  emlrtStack c1_st;
  real_T c1_msubspace_data[36];
  real_T c1_poslim_data[12];
  real_T c1_homepos_data[6];
  real_T c1_index;
  int32_T c1_bodyName_size[2];
  int32_T c1_jointtype_size[2];
  int32_T c1_msubspace_size[2];
  int32_T c1_poslim_size[2];
  int32_T c1_homepos_size[1];
  int32_T c1_b_kstr;
  int32_T c1_b_loop_ub;
  int32_T c1_b_remainingDimsA;
  int32_T c1_c_kstr;
  int32_T c1_c_loop_ub;
  int32_T c1_d_kstr;
  int32_T c1_d_loop_ub;
  int32_T c1_e_loop_ub;
  int32_T c1_exitg1;
  int32_T c1_f_loop_ub;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i3;
  int32_T c1_i30;
  int32_T c1_i31;
  int32_T c1_i32;
  int32_T c1_i33;
  int32_T c1_i34;
  int32_T c1_i35;
  int32_T c1_i36;
  int32_T c1_i37;
  int32_T c1_i38;
  int32_T c1_i39;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_kstr;
  int32_T c1_loop_ub;
  int32_T c1_remainingDimsA;
  char_T c1_bodyName_data[256];
  char_T c1_jointtype_data[20];
  char_T c1_jointname_data[11];
  boolean_T c1_b_bool;
  boolean_T c1_b_result;
  boolean_T c1_bool;
  boolean_T c1_result;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_obj = c1_obj;
  c1_st.site = &c1_n_emlrtRSI;
  c1_c_obj = c1_b_obj;
  c1_b_obj = c1_c_obj;
  c1_this = c1_b_obj;
  c1_b_obj = c1_this;
  c1_bodyName_size[0] = 1;
  c1_bodyName_size[1] = 9;
  for (c1_i = 0; c1_i < 9; c1_i++) {
    c1_bodyName_data[c1_i] = c1_b_cv[c1_i];
  }

  c1_i1 = c1_b_obj->NameInternal->size[0] * c1_b_obj->NameInternal->size[1];
  c1_b_obj->NameInternal->size[0] = 1;
  c1_b_obj->NameInternal->size[1] = c1_bodyName_size[1];
  c1_st.site = &c1_mb_emlrtRSI;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_b_obj->NameInternal,
    c1_i1, &c1_b_emlrtRTEI);
  c1_loop_ub = c1_bodyName_size[0] * c1_bodyName_size[1] - 1;
  for (c1_i2 = 0; c1_i2 <= c1_loop_ub; c1_i2++) {
    c1_b_obj->NameInternal->data[c1_i2] = c1_bodyName_data[c1_i2];
  }

  c1_b_obj->ParentIndex = 0.0;
  for (c1_i3 = 0; c1_i3 < 10; c1_i3++) {
    c1_b_obj->ChildrenIndices[c1_i3] = c1_b_dv[c1_i3];
  }

  c1_b_obj->MassInternal = 4.0;
  for (c1_i4 = 0; c1_i4 < 3; c1_i4++) {
    c1_b_obj->CenterOfMassInternal[c1_i4] = 0.0;
  }

  for (c1_i5 = 0; c1_i5 < 9; c1_i5++) {
    c1_b_obj->InertiaInternal[c1_i5] = c1_b_dv1[c1_i5];
  }

  for (c1_i6 = 0; c1_i6 < 36; c1_i6++) {
    c1_b_obj->SpatialInertia[c1_i6] = c1_b_dv2[c1_i6];
  }

  c1_st.site = &c1_o_emlrtRSI;
  c1_d_obj = &c1_b_obj->JointInternal;
  c1_e_obj = c1_d_obj;
  for (c1_i7 = 0; c1_i7 < 11; c1_i7++) {
    c1_jointname_data[c1_i7] = c1_jname[c1_i7];
  }

  c1_b_this = c1_e_obj;
  c1_e_obj = c1_b_this;
  c1_i8 = c1_e_obj->NameInternal->size[0] * c1_e_obj->NameInternal->size[1];
  c1_e_obj->NameInternal->size[0] = 1;
  c1_e_obj->NameInternal->size[1] = 11;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->NameInternal,
    c1_i8, &c1_d_emlrtRTEI);
  for (c1_i9 = 0; c1_i9 < 11; c1_i9++) {
    c1_e_obj->NameInternal->data[c1_i9] = c1_jointname_data[c1_i9];
  }

  c1_jointtype_size[0] = 1;
  c1_jointtype_size[1] = 5;
  for (c1_i10 = 0; c1_i10 < 5; c1_i10++) {
    c1_jointtype_data[c1_i10] = c1_cv1[c1_i10];
  }

  c1_i11 = c1_e_obj->Type->size[0] * c1_e_obj->Type->size[1];
  c1_e_obj->Type->size[0] = 1;
  c1_e_obj->Type->size[1] = c1_jointtype_size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->Type, c1_i11,
    &c1_f_emlrtRTEI);
  c1_b_loop_ub = c1_jointtype_size[0] * c1_jointtype_size[1] - 1;
  for (c1_i12 = 0; c1_i12 <= c1_b_loop_ub; c1_i12++) {
    c1_e_obj->Type->data[c1_i12] = c1_jointtype_data[c1_i12];
  }

  c1_emxInit_char_T(chartInstance, &c1_st, &c1_switch_expression, 2,
                    &c1_g_emlrtRTEI);
  c1_i13 = c1_switch_expression->size[0] * c1_switch_expression->size[1];
  c1_switch_expression->size[0] = 1;
  c1_switch_expression->size[1] = c1_e_obj->Type->size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_switch_expression,
    c1_i13, &c1_g_emlrtRTEI);
  c1_c_loop_ub = c1_e_obj->Type->size[0] * c1_e_obj->Type->size[1] - 1;
  for (c1_i14 = 0; c1_i14 <= c1_c_loop_ub; c1_i14++) {
    c1_switch_expression->data[c1_i14] = c1_e_obj->Type->data[c1_i14];
  }

  c1_bool = false;
  c1_remainingDimsA = c1_switch_expression->size[1];
  if (c1_remainingDimsA != 8) {
  } else {
    c1_kstr = 1;
    do {
      c1_exitg1 = 0;
      if (c1_kstr - 1 < 8) {
        c1_b_kstr = c1_kstr - 1;
        if (c1_switch_expression->data[c1_b_kstr] != c1_cv2[c1_b_kstr]) {
          c1_exitg1 = 1;
        } else {
          c1_kstr++;
        }
      } else {
        c1_bool = true;
        c1_exitg1 = 1;
      }
    } while (c1_exitg1 == 0);
  }

  if (c1_bool) {
    c1_result = true;
  } else {
    c1_result = false;
  }

  if (c1_result) {
    c1_index = 0.0;
  } else {
    c1_b_bool = false;
    c1_b_remainingDimsA = c1_switch_expression->size[1];
    if (c1_b_remainingDimsA != 9) {
    } else {
      c1_c_kstr = 1;
      do {
        c1_exitg1 = 0;
        if (c1_c_kstr - 1 < 9) {
          c1_d_kstr = c1_c_kstr - 1;
          if (c1_switch_expression->data[c1_d_kstr] != c1_cv[c1_d_kstr]) {
            c1_exitg1 = 1;
          } else {
            c1_c_kstr++;
          }
        } else {
          c1_b_bool = true;
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);
    }

    if (c1_b_bool) {
      c1_b_result = true;
    } else {
      c1_b_result = false;
    }

    if (c1_b_result) {
      c1_index = 1.0;
    } else {
      c1_index = -1.0;
    }
  }

  c1_emxFree_char_T(chartInstance, &c1_switch_expression);
  switch ((int32_T)c1_index) {
   case 0:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i16 = 0; c1_i16 < 6; c1_i16++) {
      c1_msubspace_data[c1_i16] = c1_dv3[c1_i16];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i19 = 0; c1_i19 < 2; c1_i19++) {
      c1_poslim_data[c1_i19] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c1_i19;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 1.0;
    c1_e_obj->PositionNumber = 1.0;
    for (c1_i22 = 0; c1_i22 < 3; c1_i22++) {
      c1_e_obj->JointAxisInternal[c1_i22] = c1_dv1[c1_i22];
    }
    break;

   case 1:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i17 = 0; c1_i17 < 6; c1_i17++) {
      c1_msubspace_data[c1_i17] = c1_dv[c1_i17];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i20 = 0; c1_i20 < 2; c1_i20++) {
      c1_poslim_data[c1_i20] = -0.5 + (real_T)c1_i20;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 1.0;
    c1_e_obj->PositionNumber = 1.0;
    for (c1_i23 = 0; c1_i23 < 3; c1_i23++) {
      c1_e_obj->JointAxisInternal[c1_i23] = c1_dv1[c1_i23];
    }
    break;

   default:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i15 = 0; c1_i15 < 6; c1_i15++) {
      c1_msubspace_data[c1_i15] = 0.0;
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i18 = 0; c1_i18 < 2; c1_i18++) {
      c1_poslim_data[c1_i18] = 0.0;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 0.0;
    c1_e_obj->PositionNumber = 0.0;
    for (c1_i21 = 0; c1_i21 < 3; c1_i21++) {
      c1_e_obj->JointAxisInternal[c1_i21] = 0.0;
    }
    break;
  }

  c1_i24 = c1_e_obj->MotionSubspace->size[0] * c1_e_obj->MotionSubspace->size[1];
  c1_e_obj->MotionSubspace->size[0] = 6;
  c1_e_obj->MotionSubspace->size[1] = c1_msubspace_size[1];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st, c1_e_obj->MotionSubspace,
    c1_i24, &c1_q_emlrtRTEI);
  c1_d_loop_ub = c1_msubspace_size[0] * c1_msubspace_size[1] - 1;
  for (c1_i25 = 0; c1_i25 <= c1_d_loop_ub; c1_i25++) {
    c1_e_obj->MotionSubspace->data[c1_i25] = c1_msubspace_data[c1_i25];
  }

  c1_i26 = c1_e_obj->PositionLimitsInternal->size[0] *
    c1_e_obj->PositionLimitsInternal->size[1];
  c1_e_obj->PositionLimitsInternal->size[0] = c1_poslim_size[0];
  c1_e_obj->PositionLimitsInternal->size[1] = 2;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_e_obj->PositionLimitsInternal, c1_i26, &c1_r_emlrtRTEI);
  c1_e_loop_ub = c1_poslim_size[0] * c1_poslim_size[1] - 1;
  for (c1_i27 = 0; c1_i27 <= c1_e_loop_ub; c1_i27++) {
    c1_e_obj->PositionLimitsInternal->data[c1_i27] = c1_poslim_data[c1_i27];
  }

  c1_i28 = c1_e_obj->HomePositionInternal->size[0];
  c1_e_obj->HomePositionInternal->size[0] = c1_homepos_size[0];
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st,
    c1_e_obj->HomePositionInternal, c1_i28, &c1_s_emlrtRTEI);
  c1_f_loop_ub = c1_homepos_size[0] - 1;
  for (c1_i29 = 0; c1_i29 <= c1_f_loop_ub; c1_i29++) {
    c1_e_obj->HomePositionInternal->data[c1_i29] = c1_homepos_data[c1_i29];
  }

  for (c1_i30 = 0; c1_i30 < 16; c1_i30++) {
    c1_b_obj->JointInternal.JointToParentTransform[c1_i30] = c1_dv4[c1_i30];
  }

  for (c1_i31 = 0; c1_i31 < 16; c1_i31++) {
    c1_b_obj->JointInternal.ChildToJointTransform[c1_i31] = c1_dv2[c1_i31];
  }

  c1_i32 = c1_b_obj->JointInternal.MotionSubspace->size[0] *
    c1_b_obj->JointInternal.MotionSubspace->size[1];
  c1_b_obj->JointInternal.MotionSubspace->size[0] = 6;
  c1_b_obj->JointInternal.MotionSubspace->size[1] = 1;
  c1_st.site = &c1_ob_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_b_obj->JointInternal.MotionSubspace, c1_i32, &c1_t_emlrtRTEI);
  for (c1_i33 = 0; c1_i33 < 6; c1_i33++) {
    c1_b_obj->JointInternal.MotionSubspace->data[c1_i33] = 0.0;
  }

  c1_b_obj->JointInternal.InTree = true;
  c1_i34 = c1_b_obj->JointInternal.PositionLimitsInternal->size[0] *
    c1_b_obj->JointInternal.PositionLimitsInternal->size[1];
  c1_b_obj->JointInternal.PositionLimitsInternal->size[0] = 1;
  c1_b_obj->JointInternal.PositionLimitsInternal->size[1] = 2;
  c1_st.site = &c1_nb_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_b_obj->JointInternal.PositionLimitsInternal, c1_i34, &c1_u_emlrtRTEI);
  for (c1_i35 = 0; c1_i35 < 2; c1_i35++) {
    c1_b_obj->JointInternal.PositionLimitsInternal->data[c1_i35] = 0.0;
  }

  for (c1_i36 = 0; c1_i36 < 3; c1_i36++) {
    c1_b_obj->JointInternal.JointAxisInternal[c1_i36] = 0.0;
  }

  c1_i37 = c1_b_obj->JointInternal.HomePositionInternal->size[0];
  c1_b_obj->JointInternal.HomePositionInternal->size[0] = 1;
  c1_emxEnsureCapacity_real_T1(chartInstance, c1_sp,
    c1_b_obj->JointInternal.HomePositionInternal, c1_i37, &c1_v_emlrtRTEI);
  c1_b_obj->JointInternal.HomePositionInternal->data[0] = 0.0;
  c1_st.site = &c1_p_emlrtRSI;
  c1_b_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_st, &c1_iobj_1[0], 0.0);
  c1_st.site = &c1_q_emlrtRSI;
  c1_b_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_st, &c1_iobj_1[1], 1.0);
  c1_s.CollisionType = 3U;
  for (c1_i38 = 0; c1_i38 < 3; c1_i38++) {
    c1_s.CollisionDims[c1_i38] = 0.0;
  }

  for (c1_i39 = 0; c1_i39 < 16; c1_i39++) {
    c1_s.CollisionLocalPose[c1_i39] = c1_dv4[c1_i39];
  }

  c1_st.site = &c1_s_emlrtRSI;
  c1_collisionGeometry = c1_CollisionGeomStruct_populateCollisionGeomFromStruct
    (chartInstance, &c1_s, &c1_iobj_0[0]);
  c1_st.site = &c1_r_emlrtRSI;
  c1_CollisionSet_add(chartInstance, &c1_st, c1_b_obj->CollisionsInternal,
                      c1_collisionGeometry);
  return c1_b_obj;
}

static c1_robotics_manip_internal_CollisionSet *c1_CollisionSet_CollisionSet
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_CollisionSet *c1_obj, real_T
   c1_maxElements)
{
  c1_emxArray_unnamed_struct *c1_r;
  c1_robotics_manip_internal_CollisionGeometry *c1_b_this;
  c1_robotics_manip_internal_CollisionGeometry *c1_d_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_defaultGeometry;
  c1_robotics_manip_internal_CollisionGeometry *c1_e_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_f_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_newObj;
  c1_robotics_manip_internal_CollisionSet *c1_b_obj;
  c1_robotics_manip_internal_CollisionSet *c1_c_obj;
  c1_robotics_manip_internal_CollisionSet *c1_this;
  c1_skdnnWk7b6YKmO43ohJDX5E c1_defaultCollisionObj;
  real_T c1_c_i;
  real_T c1_d;
  real_T c1_d1;
  int32_T c1_iv[2];
  int32_T c1_b_i;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  c1_emxInit_unnamed_struct(chartInstance, c1_sp, &c1_r, 2, &c1_y_emlrtRTEI);
  c1_b_obj = c1_obj;
  c1_b_obj->Size = 0.0;
  c1_c_obj = c1_b_obj;
  c1_b_obj = c1_c_obj;
  c1_this = c1_b_obj;
  c1_b_obj = c1_this;
  c1_b_obj->MaxElements = c1_maxElements;
  c1_i = c1_r->size[0] * c1_r->size[1];
  c1_r->size[0] = 1;
  if (!(c1_b_obj->MaxElements >= 0.0)) {
    emlrtNonNegativeCheckR2012b(c1_b_obj->MaxElements, &c1_b_emlrtDCI, (void *)
      c1_sp);
  }

  c1_d = c1_b_obj->MaxElements;
  if (c1_d != (real_T)(int32_T)muDoubleScalarFloor(c1_d)) {
    emlrtIntegerCheckR2012b(c1_d, &c1_emlrtDCI, (void *)c1_sp);
  }

  c1_r->size[1] = (int32_T)c1_d;
  c1_emxEnsureCapacity_unnamed_struc(chartInstance, c1_sp, c1_r, c1_i,
    &c1_y_emlrtRTEI);
  for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
    c1_iv[c1_i1] = c1_r->size[c1_i1];
  }

  c1_emxFree_unnamed_struct(chartInstance, &c1_r);
  c1_i2 = c1_b_obj->CollisionGeometries->size[0] * c1_b_obj->
    CollisionGeometries->size[1];
  c1_b_obj->CollisionGeometries->size[0] = c1_iv[0];
  c1_b_obj->CollisionGeometries->size[1] = c1_iv[1];
  c1_emxEnsureCapacity_unnamed_struc(chartInstance, c1_sp,
    c1_b_obj->CollisionGeometries, c1_i2, &c1_ab_emlrtRTEI);
  c1_defaultCollisionObj.GeometryInternal = 0;
  c1_d_obj = &c1_b_obj->_pobj0;
  c1_defaultGeometry = c1_d_obj;
  c1_e_obj = c1_defaultGeometry;
  c1_defaultGeometry = c1_e_obj;
  c1_b_this = c1_defaultGeometry;
  c1_defaultGeometry = c1_b_this;
  c1_defaultGeometry->CollisionPrimitive =
    c1_defaultCollisionObj.GeometryInternal;
  for (c1_i3 = 0; c1_i3 < 16; c1_i3++) {
    c1_defaultGeometry->LocalPose[c1_i3] = c1_dv2[c1_i3];
  }

  for (c1_i4 = 0; c1_i4 < 16; c1_i4++) {
    c1_defaultGeometry->WorldPose[c1_i4] = c1_dv2[c1_i4];
  }

  c1_defaultGeometry->matlabCodegenIsDeleted = false;
  c1_d1 = c1_b_obj->MaxElements;
  c1_i5 = (int32_T)c1_d1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, c1_d1, mxDOUBLE_CLASS, c1_i5,
    &c1_bb_emlrtRTEI, (void *)c1_sp);
  for (c1_b_i = 0; c1_b_i < c1_i5; c1_b_i++) {
    c1_c_i = (real_T)c1_b_i + 1.0;
    c1_f_obj = c1_defaultGeometry;
    c1_newObj = c1_f_obj;
    c1_i6 = c1_b_obj->CollisionGeometries->size[1] - 1;
    c1_i7 = (int32_T)c1_c_i - 1;
    if ((c1_i7 < 0) || (c1_i7 > c1_i6)) {
      emlrtDynamicBoundsCheckR2012b(c1_i7, 0, c1_i6, &c1_emlrtBCI, (void *)c1_sp);
    }

    c1_b_obj->CollisionGeometries->data[c1_i7] = c1_newObj;
  }

  return c1_b_obj;
}

static c1_robotics_manip_internal_CollisionGeometry
  *c1_CollisionGeomStruct_populateCollisionGeomFromStruct
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance,
   c1_sH0VcwdyJUgJDvK7I0stYa *c1_collisionGeomStruct,
   c1_robotics_manip_internal_CollisionGeometry *c1_iobj_0)
{
  void* c1_b_geometryInternal;
  void* c1_c_geometryInternal;
  void* c1_d_geometryInternal;
  void* c1_geometryInternal;
  c1_robotics_manip_internal_CollisionGeometry *c1_b_iobj_0;
  c1_robotics_manip_internal_CollisionGeometry *c1_b_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_b_this;
  c1_robotics_manip_internal_CollisionGeometry *c1_c_iobj_0;
  c1_robotics_manip_internal_CollisionGeometry *c1_c_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_c_this;
  c1_robotics_manip_internal_CollisionGeometry *c1_collGeom;
  c1_robotics_manip_internal_CollisionGeometry *c1_d_iobj_0;
  c1_robotics_manip_internal_CollisionGeometry *c1_d_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_d_this;
  c1_robotics_manip_internal_CollisionGeometry *c1_e_iobj_0;
  c1_robotics_manip_internal_CollisionGeometry *c1_e_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_f_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_g_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_h_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_this;
  c1_skdnnWk7b6YKmO43ohJDX5E c1_collisionObj;
  real_T c1_tform[16];
  real_T c1_dims[3];
  real_T c1_parameters[3];
  real_T c1_b_parameters[2];
  real_T c1_b_r;
  real_T c1_c_parameters;
  real_T c1_h;
  real_T c1_r;
  real_T c1_x;
  real_T c1_y;
  real_T c1_z;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  (void)chartInstance;
  for (c1_i = 0; c1_i < 3; c1_i++) {
    c1_dims[c1_i] = c1_collisionGeomStruct->CollisionDims[c1_i];
  }

  switch (c1_collisionGeomStruct->CollisionType) {
   case 0U:
    c1_parameters[0] = c1_dims[0];
    c1_parameters[1] = c1_dims[1];
    c1_parameters[2] = c1_dims[2];
    for (c1_i4 = 0; c1_i4 < 16; c1_i4++) {
      c1_tform[c1_i4] = c1_collisionGeomStruct->CollisionLocalPose[c1_i4];
    }

    c1_e_iobj_0 = &c1_iobj_0[0];
    c1_x = c1_parameters[0];
    c1_y = c1_parameters[1];
    c1_z = c1_parameters[2];
    c1_d_geometryInternal = collisioncodegen_makeBox(c1_x, c1_y, c1_z);
    c1_collisionObj.GeometryInternal = c1_d_geometryInternal;
    c1_f_obj = c1_e_iobj_0;
    c1_collGeom = c1_f_obj;
    c1_h_obj = c1_collGeom;
    c1_collGeom = c1_h_obj;
    c1_d_this = c1_collGeom;
    c1_collGeom = c1_d_this;
    c1_collGeom->CollisionPrimitive = c1_collisionObj.GeometryInternal;
    for (c1_i10 = 0; c1_i10 < 16; c1_i10++) {
      c1_collGeom->LocalPose[c1_i10] = c1_tform[c1_i10];
    }

    for (c1_i12 = 0; c1_i12 < 16; c1_i12++) {
      c1_collGeom->WorldPose[c1_i12] = c1_tform[c1_i12];
    }

    c1_collGeom->matlabCodegenIsDeleted = false;
    break;

   case 1U:
    c1_b_parameters[0] = c1_dims[0];
    c1_b_parameters[1] = c1_dims[1];
    for (c1_i3 = 0; c1_i3 < 16; c1_i3++) {
      c1_tform[c1_i3] = c1_collisionGeomStruct->CollisionLocalPose[c1_i3];
    }

    c1_d_iobj_0 = &c1_iobj_0[1];
    c1_b_r = c1_b_parameters[0];
    c1_h = c1_b_parameters[1];
    c1_c_geometryInternal = collisioncodegen_makeCylinder(c1_b_r, c1_h);
    c1_collisionObj.GeometryInternal = c1_c_geometryInternal;
    c1_d_obj = c1_d_iobj_0;
    c1_collGeom = c1_d_obj;
    c1_g_obj = c1_collGeom;
    c1_collGeom = c1_g_obj;
    c1_c_this = c1_collGeom;
    c1_collGeom = c1_c_this;
    c1_collGeom->CollisionPrimitive = c1_collisionObj.GeometryInternal;
    for (c1_i8 = 0; c1_i8 < 16; c1_i8++) {
      c1_collGeom->LocalPose[c1_i8] = c1_tform[c1_i8];
    }

    for (c1_i11 = 0; c1_i11 < 16; c1_i11++) {
      c1_collGeom->WorldPose[c1_i11] = c1_tform[c1_i11];
    }

    c1_collGeom->matlabCodegenIsDeleted = false;
    break;

   case 2U:
    c1_c_parameters = c1_dims[0];
    for (c1_i2 = 0; c1_i2 < 16; c1_i2++) {
      c1_tform[c1_i2] = c1_collisionGeomStruct->CollisionLocalPose[c1_i2];
    }

    c1_c_iobj_0 = &c1_iobj_0[2];
    c1_r = c1_c_parameters;
    c1_b_geometryInternal = collisioncodegen_makeSphere(c1_r);
    c1_collisionObj.GeometryInternal = c1_b_geometryInternal;
    c1_c_obj = c1_c_iobj_0;
    c1_collGeom = c1_c_obj;
    c1_e_obj = c1_collGeom;
    c1_collGeom = c1_e_obj;
    c1_b_this = c1_collGeom;
    c1_collGeom = c1_b_this;
    c1_collGeom->CollisionPrimitive = c1_collisionObj.GeometryInternal;
    for (c1_i7 = 0; c1_i7 < 16; c1_i7++) {
      c1_collGeom->LocalPose[c1_i7] = c1_tform[c1_i7];
    }

    for (c1_i9 = 0; c1_i9 < 16; c1_i9++) {
      c1_collGeom->WorldPose[c1_i9] = c1_tform[c1_i9];
    }

    c1_collGeom->matlabCodegenIsDeleted = false;
    break;

   default:
    for (c1_i1 = 0; c1_i1 < 16; c1_i1++) {
      c1_tform[c1_i1] = c1_collisionGeomStruct->CollisionLocalPose[c1_i1];
    }

    c1_b_iobj_0 = &c1_iobj_0[3];
    c1_geometryInternal = collisioncodegen_makeMesh(&c1_dims[0], 1.0);
    c1_collisionObj.GeometryInternal = c1_geometryInternal;
    c1_obj = c1_b_iobj_0;
    c1_collGeom = c1_obj;
    c1_b_obj = c1_collGeom;
    c1_collGeom = c1_b_obj;
    c1_this = c1_collGeom;
    c1_collGeom = c1_this;
    c1_collGeom->CollisionPrimitive = c1_collisionObj.GeometryInternal;
    for (c1_i5 = 0; c1_i5 < 16; c1_i5++) {
      c1_collGeom->LocalPose[c1_i5] = c1_tform[c1_i5];
    }

    for (c1_i6 = 0; c1_i6 < 16; c1_i6++) {
      c1_collGeom->WorldPose[c1_i6] = c1_tform[c1_i6];
    }

    c1_collGeom->matlabCodegenIsDeleted = false;
    break;
  }

  return c1_collGeom;
}

static void c1_CollisionSet_add(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, const emlrtStack *c1_sp,
  c1_robotics_manip_internal_CollisionSet *c1_obj,
  c1_robotics_manip_internal_CollisionGeometry *c1_collisionGeometry)
{
  static char_T c1_b_cv[25] = { 'C', 'a', 'n', 'n', 'o', 't', ' ', 'e', 'x', 'c',
    'e', 'e', 'd', ' ', 'M', 'a', 'x', 'E', 'l', 'e', 'm', 'e', 'n', 't', 's' };

  static char_T c1_cv1[23] = { 'a', 'd', 'd', ':', 'M', 'a', 'x', 'E', 'l', 'e',
    'm', 'e', 'n', 't', 's', 'E', 'x', 'c', 'e', 'e', 'd', 'e', 'd' };

  c1_rtString_12 c1_varargin_1;
  c1_rtString_2 c1_varargin_2;
  emlrtStack c1_st;
  const mxArray *c1_b_propValues[1];
  const mxArray *c1_propValues[1];
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_y = NULL;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  const char_T *c1_b_propClasses[1] = { "coder.internal.string" };

  const char_T *c1_b_propNames[1] = { "Value" };

  const char_T *c1_propClasses[1] = { "coder.internal.string" };

  const char_T *c1_propNames[1] = { "Value" };

  char_T c1_b_u[25];
  char_T c1_u[23];
  (void)chartInstance;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  if (c1_obj->Size < c1_obj->MaxElements) {
    c1_obj->Size++;
    c1_i1 = c1_obj->CollisionGeometries->size[1] - 1;
    if (c1_obj->Size != (real_T)(int32_T)muDoubleScalarFloor(c1_obj->Size)) {
      emlrtIntegerCheckR2012b(c1_obj->Size, &c1_c_emlrtDCI, (void *)c1_sp);
    }

    c1_i3 = (int32_T)c1_obj->Size - 1;
    if ((c1_i3 < 0) || (c1_i3 > c1_i1)) {
      emlrtDynamicBoundsCheckR2012b(c1_i3, 0, c1_i1, &c1_b_emlrtBCI, (void *)
        c1_sp);
    }

    c1_obj->CollisionGeometries->data[c1_i3] = c1_collisionGeometry;
  } else {
    c1_st.site = &c1_ib_emlrtRSI;
    for (c1_i = 0; c1_i < 25; c1_i++) {
      c1_varargin_2.Value[c1_i] = c1_b_cv[c1_i];
    }

    for (c1_i2 = 0; c1_i2 < 23; c1_i2++) {
      c1_varargin_1.Value[c1_i2] = c1_cv1[c1_i2];
    }

    c1_y = NULL;
    sf_mex_assign(&c1_y, sf_mex_create_class_instance("coder.internal.string"),
                  false);
    for (c1_i4 = 0; c1_i4 < 23; c1_i4++) {
      c1_u[c1_i4] = c1_varargin_1.Value[c1_i4];
    }

    c1_b_y = NULL;
    sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_u, 10, 0U, 1U, 0U, 2, 1, 23),
                  false);
    c1_propValues[0] = c1_b_y;
    sf_mex_set_all_properties(&c1_y, 0, 1, c1_propNames, c1_propClasses,
      c1_propValues);
    sf_mex_assign(&c1_y, sf_mex_convert_to_redirect_source(c1_y, 0,
      "coder.internal.string"), false);
    c1_c_y = NULL;
    sf_mex_assign(&c1_c_y, sf_mex_create_class_instance("coder.internal.string"),
                  false);
    for (c1_i5 = 0; c1_i5 < 25; c1_i5++) {
      c1_b_u[c1_i5] = c1_varargin_2.Value[c1_i5];
    }

    c1_d_y = NULL;
    sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_b_u, 10, 0U, 1U, 0U, 2, 1, 25),
                  false);
    c1_b_propValues[0] = c1_d_y;
    sf_mex_set_all_properties(&c1_c_y, 0, 1, c1_b_propNames, c1_b_propClasses,
      c1_b_propValues);
    sf_mex_assign(&c1_c_y, sf_mex_convert_to_redirect_source(c1_c_y, 0,
      "coder.internal.string"), false);
    sf_mex_call(&c1_st, &c1_emlrtMCI, "error", 0U, 2U, 14, c1_y, 14, c1_c_y);
  }
}

static c1_robotics_manip_internal_RigidBody *c1_b_RigidBody_RigidBody
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_obj,
   c1_robotics_manip_internal_CollisionGeometry *c1_iobj_0,
   c1_robotics_manip_internal_CollisionSet *c1_iobj_1)
{
  static real_T c1_b_dv2[36] = { 0.010267495893, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0,
    0.010267495893, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.00666, -0.0, 0.0, 0.0, 0.0,
    0.0, -0.0, 3.7, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 3.7, 0.0, 0.0, -0.0, 0.0, 0.0,
    0.0, 3.7 };

  static real_T c1_b_dv3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.089159, 1.0 };

  static real_T c1_b_dv[10] = { 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0
  };

  static real_T c1_b_dv1[9] = { 0.010267495893, 0.0, 0.0, 0.0, 0.010267495893,
    0.0, 0.0, 0.0, 0.00666 };

  static char_T c1_jname[18] = { 's', 'h', 'o', 'u', 'l', 'd', 'e', 'r', '_',
    'p', 'a', 'n', '_', 'j', 'o', 'i', 'n', 't' };

  static char_T c1_b_cv[13] = { 's', 'h', 'o', 'u', 'l', 'd', 'e', 'r', '_', 'l',
    'i', 'n', 'k' };

  static char_T c1_b[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c1_cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  c1_emxArray_char_T *c1_switch_expression;
  c1_rigidBodyJoint *c1_b_this;
  c1_rigidBodyJoint *c1_d_obj;
  c1_rigidBodyJoint *c1_e_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_collisionGeometry;
  c1_robotics_manip_internal_RigidBody *c1_b_obj;
  c1_robotics_manip_internal_RigidBody *c1_c_obj;
  c1_robotics_manip_internal_RigidBody *c1_this;
  c1_sH0VcwdyJUgJDvK7I0stYa c1_s;
  emlrtStack c1_st;
  real_T c1_msubspace_data[36];
  real_T c1_poslim_data[12];
  real_T c1_homepos_data[6];
  real_T c1_index;
  int32_T c1_bodyName_size[2];
  int32_T c1_jointtype_size[2];
  int32_T c1_msubspace_size[2];
  int32_T c1_poslim_size[2];
  int32_T c1_homepos_size[1];
  int32_T c1_b_kstr;
  int32_T c1_b_loop_ub;
  int32_T c1_b_remainingDimsA;
  int32_T c1_c_kstr;
  int32_T c1_c_loop_ub;
  int32_T c1_d_kstr;
  int32_T c1_d_loop_ub;
  int32_T c1_e_loop_ub;
  int32_T c1_exitg1;
  int32_T c1_f_loop_ub;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i3;
  int32_T c1_i30;
  int32_T c1_i31;
  int32_T c1_i32;
  int32_T c1_i33;
  int32_T c1_i34;
  int32_T c1_i35;
  int32_T c1_i36;
  int32_T c1_i37;
  int32_T c1_i38;
  int32_T c1_i39;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_kstr;
  int32_T c1_loop_ub;
  int32_T c1_remainingDimsA;
  char_T c1_bodyName_data[256];
  char_T c1_jointtype_data[20];
  char_T c1_jointname_data[18];
  boolean_T c1_b_bool;
  boolean_T c1_b_result;
  boolean_T c1_bool;
  boolean_T c1_result;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_obj = c1_obj;
  c1_st.site = &c1_n_emlrtRSI;
  c1_c_obj = c1_b_obj;
  c1_b_obj = c1_c_obj;
  c1_this = c1_b_obj;
  c1_b_obj = c1_this;
  c1_bodyName_size[0] = 1;
  c1_bodyName_size[1] = 13;
  for (c1_i = 0; c1_i < 13; c1_i++) {
    c1_bodyName_data[c1_i] = c1_b_cv[c1_i];
  }

  c1_i1 = c1_b_obj->NameInternal->size[0] * c1_b_obj->NameInternal->size[1];
  c1_b_obj->NameInternal->size[0] = 1;
  c1_b_obj->NameInternal->size[1] = c1_bodyName_size[1];
  c1_st.site = &c1_mb_emlrtRSI;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_b_obj->NameInternal,
    c1_i1, &c1_b_emlrtRTEI);
  c1_loop_ub = c1_bodyName_size[0] * c1_bodyName_size[1] - 1;
  for (c1_i2 = 0; c1_i2 <= c1_loop_ub; c1_i2++) {
    c1_b_obj->NameInternal->data[c1_i2] = c1_bodyName_data[c1_i2];
  }

  c1_b_obj->ParentIndex = 1.0;
  for (c1_i3 = 0; c1_i3 < 10; c1_i3++) {
    c1_b_obj->ChildrenIndices[c1_i3] = c1_b_dv[c1_i3];
  }

  c1_b_obj->MassInternal = 3.7;
  for (c1_i4 = 0; c1_i4 < 3; c1_i4++) {
    c1_b_obj->CenterOfMassInternal[c1_i4] = 0.0;
  }

  for (c1_i5 = 0; c1_i5 < 9; c1_i5++) {
    c1_b_obj->InertiaInternal[c1_i5] = c1_b_dv1[c1_i5];
  }

  for (c1_i6 = 0; c1_i6 < 36; c1_i6++) {
    c1_b_obj->SpatialInertia[c1_i6] = c1_b_dv2[c1_i6];
  }

  c1_st.site = &c1_o_emlrtRSI;
  c1_d_obj = &c1_b_obj->JointInternal;
  c1_e_obj = c1_d_obj;
  for (c1_i7 = 0; c1_i7 < 18; c1_i7++) {
    c1_jointname_data[c1_i7] = c1_jname[c1_i7];
  }

  c1_b_this = c1_e_obj;
  c1_e_obj = c1_b_this;
  c1_i8 = c1_e_obj->NameInternal->size[0] * c1_e_obj->NameInternal->size[1];
  c1_e_obj->NameInternal->size[0] = 1;
  c1_e_obj->NameInternal->size[1] = 18;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->NameInternal,
    c1_i8, &c1_d_emlrtRTEI);
  for (c1_i9 = 0; c1_i9 < 18; c1_i9++) {
    c1_e_obj->NameInternal->data[c1_i9] = c1_jointname_data[c1_i9];
  }

  c1_jointtype_size[0] = 1;
  c1_jointtype_size[1] = 8;
  for (c1_i10 = 0; c1_i10 < 8; c1_i10++) {
    c1_jointtype_data[c1_i10] = c1_b[c1_i10];
  }

  c1_i11 = c1_e_obj->Type->size[0] * c1_e_obj->Type->size[1];
  c1_e_obj->Type->size[0] = 1;
  c1_e_obj->Type->size[1] = c1_jointtype_size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->Type, c1_i11,
    &c1_f_emlrtRTEI);
  c1_b_loop_ub = c1_jointtype_size[0] * c1_jointtype_size[1] - 1;
  for (c1_i12 = 0; c1_i12 <= c1_b_loop_ub; c1_i12++) {
    c1_e_obj->Type->data[c1_i12] = c1_jointtype_data[c1_i12];
  }

  c1_emxInit_char_T(chartInstance, &c1_st, &c1_switch_expression, 2,
                    &c1_g_emlrtRTEI);
  c1_i13 = c1_switch_expression->size[0] * c1_switch_expression->size[1];
  c1_switch_expression->size[0] = 1;
  c1_switch_expression->size[1] = c1_e_obj->Type->size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_switch_expression,
    c1_i13, &c1_g_emlrtRTEI);
  c1_c_loop_ub = c1_e_obj->Type->size[0] * c1_e_obj->Type->size[1] - 1;
  for (c1_i14 = 0; c1_i14 <= c1_c_loop_ub; c1_i14++) {
    c1_switch_expression->data[c1_i14] = c1_e_obj->Type->data[c1_i14];
  }

  c1_bool = false;
  c1_remainingDimsA = c1_switch_expression->size[1];
  if (c1_remainingDimsA != 8) {
  } else {
    c1_kstr = 1;
    do {
      c1_exitg1 = 0;
      if (c1_kstr - 1 < 8) {
        c1_b_kstr = c1_kstr - 1;
        if (c1_switch_expression->data[c1_b_kstr] != c1_cv1[c1_b_kstr]) {
          c1_exitg1 = 1;
        } else {
          c1_kstr++;
        }
      } else {
        c1_bool = true;
        c1_exitg1 = 1;
      }
    } while (c1_exitg1 == 0);
  }

  if (c1_bool) {
    c1_result = true;
  } else {
    c1_result = false;
  }

  if (c1_result) {
    c1_index = 0.0;
  } else {
    c1_b_bool = false;
    c1_b_remainingDimsA = c1_switch_expression->size[1];
    if (c1_b_remainingDimsA != 9) {
    } else {
      c1_c_kstr = 1;
      do {
        c1_exitg1 = 0;
        if (c1_c_kstr - 1 < 9) {
          c1_d_kstr = c1_c_kstr - 1;
          if (c1_switch_expression->data[c1_d_kstr] != c1_cv[c1_d_kstr]) {
            c1_exitg1 = 1;
          } else {
            c1_c_kstr++;
          }
        } else {
          c1_b_bool = true;
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);
    }

    if (c1_b_bool) {
      c1_b_result = true;
    } else {
      c1_b_result = false;
    }

    if (c1_b_result) {
      c1_index = 1.0;
    } else {
      c1_index = -1.0;
    }
  }

  c1_emxFree_char_T(chartInstance, &c1_switch_expression);
  switch ((int32_T)c1_index) {
   case 0:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i16 = 0; c1_i16 < 6; c1_i16++) {
      c1_msubspace_data[c1_i16] = c1_dv3[c1_i16];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i19 = 0; c1_i19 < 2; c1_i19++) {
      c1_poslim_data[c1_i19] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c1_i19;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 1.0;
    c1_e_obj->PositionNumber = 1.0;
    for (c1_i22 = 0; c1_i22 < 3; c1_i22++) {
      c1_e_obj->JointAxisInternal[c1_i22] = c1_dv1[c1_i22];
    }
    break;

   case 1:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i17 = 0; c1_i17 < 6; c1_i17++) {
      c1_msubspace_data[c1_i17] = c1_dv[c1_i17];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i20 = 0; c1_i20 < 2; c1_i20++) {
      c1_poslim_data[c1_i20] = -0.5 + (real_T)c1_i20;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 1.0;
    c1_e_obj->PositionNumber = 1.0;
    for (c1_i23 = 0; c1_i23 < 3; c1_i23++) {
      c1_e_obj->JointAxisInternal[c1_i23] = c1_dv1[c1_i23];
    }
    break;

   default:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i15 = 0; c1_i15 < 6; c1_i15++) {
      c1_msubspace_data[c1_i15] = 0.0;
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i18 = 0; c1_i18 < 2; c1_i18++) {
      c1_poslim_data[c1_i18] = 0.0;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 0.0;
    c1_e_obj->PositionNumber = 0.0;
    for (c1_i21 = 0; c1_i21 < 3; c1_i21++) {
      c1_e_obj->JointAxisInternal[c1_i21] = 0.0;
    }
    break;
  }

  c1_i24 = c1_e_obj->MotionSubspace->size[0] * c1_e_obj->MotionSubspace->size[1];
  c1_e_obj->MotionSubspace->size[0] = 6;
  c1_e_obj->MotionSubspace->size[1] = c1_msubspace_size[1];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st, c1_e_obj->MotionSubspace,
    c1_i24, &c1_q_emlrtRTEI);
  c1_d_loop_ub = c1_msubspace_size[0] * c1_msubspace_size[1] - 1;
  for (c1_i25 = 0; c1_i25 <= c1_d_loop_ub; c1_i25++) {
    c1_e_obj->MotionSubspace->data[c1_i25] = c1_msubspace_data[c1_i25];
  }

  c1_i26 = c1_e_obj->PositionLimitsInternal->size[0] *
    c1_e_obj->PositionLimitsInternal->size[1];
  c1_e_obj->PositionLimitsInternal->size[0] = c1_poslim_size[0];
  c1_e_obj->PositionLimitsInternal->size[1] = 2;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_e_obj->PositionLimitsInternal, c1_i26, &c1_r_emlrtRTEI);
  c1_e_loop_ub = c1_poslim_size[0] * c1_poslim_size[1] - 1;
  for (c1_i27 = 0; c1_i27 <= c1_e_loop_ub; c1_i27++) {
    c1_e_obj->PositionLimitsInternal->data[c1_i27] = c1_poslim_data[c1_i27];
  }

  c1_i28 = c1_e_obj->HomePositionInternal->size[0];
  c1_e_obj->HomePositionInternal->size[0] = c1_homepos_size[0];
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st,
    c1_e_obj->HomePositionInternal, c1_i28, &c1_s_emlrtRTEI);
  c1_f_loop_ub = c1_homepos_size[0] - 1;
  for (c1_i29 = 0; c1_i29 <= c1_f_loop_ub; c1_i29++) {
    c1_e_obj->HomePositionInternal->data[c1_i29] = c1_homepos_data[c1_i29];
  }

  for (c1_i30 = 0; c1_i30 < 16; c1_i30++) {
    c1_b_obj->JointInternal.JointToParentTransform[c1_i30] = c1_b_dv3[c1_i30];
  }

  for (c1_i31 = 0; c1_i31 < 16; c1_i31++) {
    c1_b_obj->JointInternal.ChildToJointTransform[c1_i31] = c1_dv2[c1_i31];
  }

  c1_i32 = c1_b_obj->JointInternal.MotionSubspace->size[0] *
    c1_b_obj->JointInternal.MotionSubspace->size[1];
  c1_b_obj->JointInternal.MotionSubspace->size[0] = 6;
  c1_b_obj->JointInternal.MotionSubspace->size[1] = 1;
  c1_st.site = &c1_ob_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_b_obj->JointInternal.MotionSubspace, c1_i32, &c1_t_emlrtRTEI);
  for (c1_i33 = 0; c1_i33 < 6; c1_i33++) {
    c1_b_obj->JointInternal.MotionSubspace->data[c1_i33] = c1_dv3[c1_i33];
  }

  c1_b_obj->JointInternal.InTree = true;
  c1_i34 = c1_b_obj->JointInternal.PositionLimitsInternal->size[0] *
    c1_b_obj->JointInternal.PositionLimitsInternal->size[1];
  c1_b_obj->JointInternal.PositionLimitsInternal->size[0] = 1;
  c1_b_obj->JointInternal.PositionLimitsInternal->size[1] = 2;
  c1_st.site = &c1_nb_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_b_obj->JointInternal.PositionLimitsInternal, c1_i34, &c1_u_emlrtRTEI);
  for (c1_i35 = 0; c1_i35 < 2; c1_i35++) {
    c1_b_obj->JointInternal.PositionLimitsInternal->data[c1_i35] =
      -6.28318530718 + 12.56637061436 * (real_T)c1_i35;
  }

  for (c1_i36 = 0; c1_i36 < 3; c1_i36++) {
    c1_b_obj->JointInternal.JointAxisInternal[c1_i36] = c1_dv1[c1_i36];
  }

  c1_i37 = c1_b_obj->JointInternal.HomePositionInternal->size[0];
  c1_b_obj->JointInternal.HomePositionInternal->size[0] = 1;
  c1_emxEnsureCapacity_real_T1(chartInstance, c1_sp,
    c1_b_obj->JointInternal.HomePositionInternal, c1_i37, &c1_v_emlrtRTEI);
  c1_b_obj->JointInternal.HomePositionInternal->data[0] = 0.0;
  c1_st.site = &c1_p_emlrtRSI;
  c1_b_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_st, &c1_iobj_1[0], 0.0);
  c1_st.site = &c1_q_emlrtRSI;
  c1_b_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_st, &c1_iobj_1[1], 1.0);
  c1_s.CollisionType = 3U;
  for (c1_i38 = 0; c1_i38 < 3; c1_i38++) {
    c1_s.CollisionDims[c1_i38] = 0.0;
  }

  for (c1_i39 = 0; c1_i39 < 16; c1_i39++) {
    c1_s.CollisionLocalPose[c1_i39] = c1_dv4[c1_i39];
  }

  c1_st.site = &c1_s_emlrtRSI;
  c1_collisionGeometry = c1_CollisionGeomStruct_populateCollisionGeomFromStruct
    (chartInstance, &c1_s, &c1_iobj_0[0]);
  c1_st.site = &c1_r_emlrtRSI;
  c1_CollisionSet_add(chartInstance, &c1_st, c1_b_obj->CollisionsInternal,
                      c1_collisionGeometry);
  return c1_b_obj;
}

static c1_robotics_manip_internal_RigidBody *c1_c_RigidBody_RigidBody
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_obj,
   c1_robotics_manip_internal_CollisionGeometry *c1_iobj_0,
   c1_robotics_manip_internal_CollisionSet *c1_iobj_1)
{
  static real_T c1_b_dv3[36] = { 0.88490187591000014, 0.0, 0.0, 0.0,
    -2.3500400000000004, 0.0, 0.0, 0.88490187591000014, 0.0, 2.3500400000000004,
    0.0, -0.0, 0.0, 0.0, 0.0151074, -0.0, 0.0, 0.0, 0.0, 2.3500400000000004,
    -0.0, 8.393, 0.0, 0.0, -2.3500400000000004, 0.0, 0.0, 0.0, 8.393, 0.0, 0.0,
    -0.0, 0.0, 0.0, 0.0, 8.393 };

  static real_T c1_b_dv4[16] = { 4.8965888601467475E-12, 0.0, -1.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 1.0, 0.0, 4.8965888601467475E-12, 0.0, 0.0, 0.13585, 0.0, 1.0
  };

  static real_T c1_b_dv[10] = { 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0
  };

  static real_T c1_b_dv2[9] = { 0.88490187591000014, 0.0, 0.0, 0.0,
    0.88490187591000014, 0.0, 0.0, 0.0, 0.0151074 };

  static real_T c1_b_dv1[3] = { 0.0, 0.0, 0.28 };

  static char_T c1_jname[19] = { 's', 'h', 'o', 'u', 'l', 'd', 'e', 'r', '_',
    'l', 'i', 'f', 't', '_', 'j', 'o', 'i', 'n', 't' };

  static char_T c1_b_cv[14] = { 'u', 'p', 'p', 'e', 'r', '_', 'a', 'r', 'm', '_',
    'l', 'i', 'n', 'k' };

  static char_T c1_b[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c1_cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  c1_emxArray_char_T *c1_switch_expression;
  c1_rigidBodyJoint *c1_b_this;
  c1_rigidBodyJoint *c1_d_obj;
  c1_rigidBodyJoint *c1_e_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_collisionGeometry;
  c1_robotics_manip_internal_RigidBody *c1_b_obj;
  c1_robotics_manip_internal_RigidBody *c1_c_obj;
  c1_robotics_manip_internal_RigidBody *c1_this;
  c1_sH0VcwdyJUgJDvK7I0stYa c1_s;
  emlrtStack c1_st;
  real_T c1_msubspace_data[36];
  real_T c1_poslim_data[12];
  real_T c1_homepos_data[6];
  real_T c1_index;
  int32_T c1_bodyName_size[2];
  int32_T c1_jointtype_size[2];
  int32_T c1_msubspace_size[2];
  int32_T c1_poslim_size[2];
  int32_T c1_homepos_size[1];
  int32_T c1_b_kstr;
  int32_T c1_b_loop_ub;
  int32_T c1_b_remainingDimsA;
  int32_T c1_c_kstr;
  int32_T c1_c_loop_ub;
  int32_T c1_d_kstr;
  int32_T c1_d_loop_ub;
  int32_T c1_e_loop_ub;
  int32_T c1_exitg1;
  int32_T c1_f_loop_ub;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i3;
  int32_T c1_i30;
  int32_T c1_i31;
  int32_T c1_i32;
  int32_T c1_i33;
  int32_T c1_i34;
  int32_T c1_i35;
  int32_T c1_i36;
  int32_T c1_i37;
  int32_T c1_i38;
  int32_T c1_i39;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_kstr;
  int32_T c1_loop_ub;
  int32_T c1_remainingDimsA;
  char_T c1_bodyName_data[256];
  char_T c1_jointtype_data[20];
  char_T c1_jointname_data[19];
  boolean_T c1_b_bool;
  boolean_T c1_b_result;
  boolean_T c1_bool;
  boolean_T c1_result;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_obj = c1_obj;
  c1_st.site = &c1_n_emlrtRSI;
  c1_c_obj = c1_b_obj;
  c1_b_obj = c1_c_obj;
  c1_this = c1_b_obj;
  c1_b_obj = c1_this;
  c1_bodyName_size[0] = 1;
  c1_bodyName_size[1] = 14;
  for (c1_i = 0; c1_i < 14; c1_i++) {
    c1_bodyName_data[c1_i] = c1_b_cv[c1_i];
  }

  c1_i1 = c1_b_obj->NameInternal->size[0] * c1_b_obj->NameInternal->size[1];
  c1_b_obj->NameInternal->size[0] = 1;
  c1_b_obj->NameInternal->size[1] = c1_bodyName_size[1];
  c1_st.site = &c1_mb_emlrtRSI;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_b_obj->NameInternal,
    c1_i1, &c1_b_emlrtRTEI);
  c1_loop_ub = c1_bodyName_size[0] * c1_bodyName_size[1] - 1;
  for (c1_i2 = 0; c1_i2 <= c1_loop_ub; c1_i2++) {
    c1_b_obj->NameInternal->data[c1_i2] = c1_bodyName_data[c1_i2];
  }

  c1_b_obj->ParentIndex = 3.0;
  for (c1_i3 = 0; c1_i3 < 10; c1_i3++) {
    c1_b_obj->ChildrenIndices[c1_i3] = c1_b_dv[c1_i3];
  }

  c1_b_obj->MassInternal = 8.393;
  for (c1_i4 = 0; c1_i4 < 3; c1_i4++) {
    c1_b_obj->CenterOfMassInternal[c1_i4] = c1_b_dv1[c1_i4];
  }

  for (c1_i5 = 0; c1_i5 < 9; c1_i5++) {
    c1_b_obj->InertiaInternal[c1_i5] = c1_b_dv2[c1_i5];
  }

  for (c1_i6 = 0; c1_i6 < 36; c1_i6++) {
    c1_b_obj->SpatialInertia[c1_i6] = c1_b_dv3[c1_i6];
  }

  c1_st.site = &c1_o_emlrtRSI;
  c1_d_obj = &c1_b_obj->JointInternal;
  c1_e_obj = c1_d_obj;
  for (c1_i7 = 0; c1_i7 < 19; c1_i7++) {
    c1_jointname_data[c1_i7] = c1_jname[c1_i7];
  }

  c1_b_this = c1_e_obj;
  c1_e_obj = c1_b_this;
  c1_i8 = c1_e_obj->NameInternal->size[0] * c1_e_obj->NameInternal->size[1];
  c1_e_obj->NameInternal->size[0] = 1;
  c1_e_obj->NameInternal->size[1] = 19;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->NameInternal,
    c1_i8, &c1_d_emlrtRTEI);
  for (c1_i9 = 0; c1_i9 < 19; c1_i9++) {
    c1_e_obj->NameInternal->data[c1_i9] = c1_jointname_data[c1_i9];
  }

  c1_jointtype_size[0] = 1;
  c1_jointtype_size[1] = 8;
  for (c1_i10 = 0; c1_i10 < 8; c1_i10++) {
    c1_jointtype_data[c1_i10] = c1_b[c1_i10];
  }

  c1_i11 = c1_e_obj->Type->size[0] * c1_e_obj->Type->size[1];
  c1_e_obj->Type->size[0] = 1;
  c1_e_obj->Type->size[1] = c1_jointtype_size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->Type, c1_i11,
    &c1_f_emlrtRTEI);
  c1_b_loop_ub = c1_jointtype_size[0] * c1_jointtype_size[1] - 1;
  for (c1_i12 = 0; c1_i12 <= c1_b_loop_ub; c1_i12++) {
    c1_e_obj->Type->data[c1_i12] = c1_jointtype_data[c1_i12];
  }

  c1_emxInit_char_T(chartInstance, &c1_st, &c1_switch_expression, 2,
                    &c1_g_emlrtRTEI);
  c1_i13 = c1_switch_expression->size[0] * c1_switch_expression->size[1];
  c1_switch_expression->size[0] = 1;
  c1_switch_expression->size[1] = c1_e_obj->Type->size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_switch_expression,
    c1_i13, &c1_g_emlrtRTEI);
  c1_c_loop_ub = c1_e_obj->Type->size[0] * c1_e_obj->Type->size[1] - 1;
  for (c1_i14 = 0; c1_i14 <= c1_c_loop_ub; c1_i14++) {
    c1_switch_expression->data[c1_i14] = c1_e_obj->Type->data[c1_i14];
  }

  c1_bool = false;
  c1_remainingDimsA = c1_switch_expression->size[1];
  if (c1_remainingDimsA != 8) {
  } else {
    c1_kstr = 1;
    do {
      c1_exitg1 = 0;
      if (c1_kstr - 1 < 8) {
        c1_b_kstr = c1_kstr - 1;
        if (c1_switch_expression->data[c1_b_kstr] != c1_cv1[c1_b_kstr]) {
          c1_exitg1 = 1;
        } else {
          c1_kstr++;
        }
      } else {
        c1_bool = true;
        c1_exitg1 = 1;
      }
    } while (c1_exitg1 == 0);
  }

  if (c1_bool) {
    c1_result = true;
  } else {
    c1_result = false;
  }

  if (c1_result) {
    c1_index = 0.0;
  } else {
    c1_b_bool = false;
    c1_b_remainingDimsA = c1_switch_expression->size[1];
    if (c1_b_remainingDimsA != 9) {
    } else {
      c1_c_kstr = 1;
      do {
        c1_exitg1 = 0;
        if (c1_c_kstr - 1 < 9) {
          c1_d_kstr = c1_c_kstr - 1;
          if (c1_switch_expression->data[c1_d_kstr] != c1_cv[c1_d_kstr]) {
            c1_exitg1 = 1;
          } else {
            c1_c_kstr++;
          }
        } else {
          c1_b_bool = true;
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);
    }

    if (c1_b_bool) {
      c1_b_result = true;
    } else {
      c1_b_result = false;
    }

    if (c1_b_result) {
      c1_index = 1.0;
    } else {
      c1_index = -1.0;
    }
  }

  c1_emxFree_char_T(chartInstance, &c1_switch_expression);
  switch ((int32_T)c1_index) {
   case 0:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i16 = 0; c1_i16 < 6; c1_i16++) {
      c1_msubspace_data[c1_i16] = c1_dv3[c1_i16];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i19 = 0; c1_i19 < 2; c1_i19++) {
      c1_poslim_data[c1_i19] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c1_i19;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 1.0;
    c1_e_obj->PositionNumber = 1.0;
    for (c1_i22 = 0; c1_i22 < 3; c1_i22++) {
      c1_e_obj->JointAxisInternal[c1_i22] = c1_dv1[c1_i22];
    }
    break;

   case 1:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i17 = 0; c1_i17 < 6; c1_i17++) {
      c1_msubspace_data[c1_i17] = c1_dv[c1_i17];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i20 = 0; c1_i20 < 2; c1_i20++) {
      c1_poslim_data[c1_i20] = -0.5 + (real_T)c1_i20;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 1.0;
    c1_e_obj->PositionNumber = 1.0;
    for (c1_i23 = 0; c1_i23 < 3; c1_i23++) {
      c1_e_obj->JointAxisInternal[c1_i23] = c1_dv1[c1_i23];
    }
    break;

   default:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i15 = 0; c1_i15 < 6; c1_i15++) {
      c1_msubspace_data[c1_i15] = 0.0;
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i18 = 0; c1_i18 < 2; c1_i18++) {
      c1_poslim_data[c1_i18] = 0.0;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 0.0;
    c1_e_obj->PositionNumber = 0.0;
    for (c1_i21 = 0; c1_i21 < 3; c1_i21++) {
      c1_e_obj->JointAxisInternal[c1_i21] = 0.0;
    }
    break;
  }

  c1_i24 = c1_e_obj->MotionSubspace->size[0] * c1_e_obj->MotionSubspace->size[1];
  c1_e_obj->MotionSubspace->size[0] = 6;
  c1_e_obj->MotionSubspace->size[1] = c1_msubspace_size[1];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st, c1_e_obj->MotionSubspace,
    c1_i24, &c1_q_emlrtRTEI);
  c1_d_loop_ub = c1_msubspace_size[0] * c1_msubspace_size[1] - 1;
  for (c1_i25 = 0; c1_i25 <= c1_d_loop_ub; c1_i25++) {
    c1_e_obj->MotionSubspace->data[c1_i25] = c1_msubspace_data[c1_i25];
  }

  c1_i26 = c1_e_obj->PositionLimitsInternal->size[0] *
    c1_e_obj->PositionLimitsInternal->size[1];
  c1_e_obj->PositionLimitsInternal->size[0] = c1_poslim_size[0];
  c1_e_obj->PositionLimitsInternal->size[1] = 2;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_e_obj->PositionLimitsInternal, c1_i26, &c1_r_emlrtRTEI);
  c1_e_loop_ub = c1_poslim_size[0] * c1_poslim_size[1] - 1;
  for (c1_i27 = 0; c1_i27 <= c1_e_loop_ub; c1_i27++) {
    c1_e_obj->PositionLimitsInternal->data[c1_i27] = c1_poslim_data[c1_i27];
  }

  c1_i28 = c1_e_obj->HomePositionInternal->size[0];
  c1_e_obj->HomePositionInternal->size[0] = c1_homepos_size[0];
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st,
    c1_e_obj->HomePositionInternal, c1_i28, &c1_s_emlrtRTEI);
  c1_f_loop_ub = c1_homepos_size[0] - 1;
  for (c1_i29 = 0; c1_i29 <= c1_f_loop_ub; c1_i29++) {
    c1_e_obj->HomePositionInternal->data[c1_i29] = c1_homepos_data[c1_i29];
  }

  for (c1_i30 = 0; c1_i30 < 16; c1_i30++) {
    c1_b_obj->JointInternal.JointToParentTransform[c1_i30] = c1_b_dv4[c1_i30];
  }

  for (c1_i31 = 0; c1_i31 < 16; c1_i31++) {
    c1_b_obj->JointInternal.ChildToJointTransform[c1_i31] = c1_dv2[c1_i31];
  }

  c1_i32 = c1_b_obj->JointInternal.MotionSubspace->size[0] *
    c1_b_obj->JointInternal.MotionSubspace->size[1];
  c1_b_obj->JointInternal.MotionSubspace->size[0] = 6;
  c1_b_obj->JointInternal.MotionSubspace->size[1] = 1;
  c1_st.site = &c1_ob_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_b_obj->JointInternal.MotionSubspace, c1_i32, &c1_t_emlrtRTEI);
  for (c1_i33 = 0; c1_i33 < 6; c1_i33++) {
    c1_b_obj->JointInternal.MotionSubspace->data[c1_i33] = c1_dv5[c1_i33];
  }

  c1_b_obj->JointInternal.InTree = true;
  c1_i34 = c1_b_obj->JointInternal.PositionLimitsInternal->size[0] *
    c1_b_obj->JointInternal.PositionLimitsInternal->size[1];
  c1_b_obj->JointInternal.PositionLimitsInternal->size[0] = 1;
  c1_b_obj->JointInternal.PositionLimitsInternal->size[1] = 2;
  c1_st.site = &c1_nb_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_b_obj->JointInternal.PositionLimitsInternal, c1_i34, &c1_u_emlrtRTEI);
  for (c1_i35 = 0; c1_i35 < 2; c1_i35++) {
    c1_b_obj->JointInternal.PositionLimitsInternal->data[c1_i35] =
      -6.28318530718 + 12.56637061436 * (real_T)c1_i35;
  }

  for (c1_i36 = 0; c1_i36 < 3; c1_i36++) {
    c1_b_obj->JointInternal.JointAxisInternal[c1_i36] = c1_dv6[c1_i36];
  }

  c1_i37 = c1_b_obj->JointInternal.HomePositionInternal->size[0];
  c1_b_obj->JointInternal.HomePositionInternal->size[0] = 1;
  c1_emxEnsureCapacity_real_T1(chartInstance, c1_sp,
    c1_b_obj->JointInternal.HomePositionInternal, c1_i37, &c1_v_emlrtRTEI);
  c1_b_obj->JointInternal.HomePositionInternal->data[0] = 0.0;
  c1_st.site = &c1_p_emlrtRSI;
  c1_b_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_st, &c1_iobj_1[0], 0.0);
  c1_st.site = &c1_q_emlrtRSI;
  c1_b_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_st, &c1_iobj_1[1], 1.0);
  c1_s.CollisionType = 3U;
  for (c1_i38 = 0; c1_i38 < 3; c1_i38++) {
    c1_s.CollisionDims[c1_i38] = 0.0;
  }

  for (c1_i39 = 0; c1_i39 < 16; c1_i39++) {
    c1_s.CollisionLocalPose[c1_i39] = c1_dv4[c1_i39];
  }

  c1_st.site = &c1_s_emlrtRSI;
  c1_collisionGeometry = c1_CollisionGeomStruct_populateCollisionGeomFromStruct
    (chartInstance, &c1_s, &c1_iobj_0[0]);
  c1_st.site = &c1_r_emlrtRSI;
  c1_CollisionSet_add(chartInstance, &c1_st, c1_b_obj->CollisionsInternal,
                      c1_collisionGeometry);
  return c1_b_obj;
}

static c1_robotics_manip_internal_RigidBody *c1_d_RigidBody_RigidBody
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_obj,
   c1_robotics_manip_internal_CollisionGeometry *c1_iobj_0,
   c1_robotics_manip_internal_CollisionSet *c1_iobj_1)
{
  static real_T c1_b_dv3[36] = { 0.19163081355599998, 0.0, 0.0, 0.0, -0.56875,
    0.0, 0.0, 0.19163081355599998, 0.0, 0.56875, 0.0, -0.0, 0.0, 0.0, 0.004095,
    -0.0, 0.0, 0.0, 0.0, 0.56875, -0.0, 2.275, 0.0, 0.0, -0.56875, 0.0, 0.0, 0.0,
    2.275, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 2.275 };

  static real_T c1_b_dv4[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, -0.1197, 0.425, 1.0 };

  static real_T c1_b_dv[10] = { 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0
  };

  static real_T c1_b_dv2[9] = { 0.19163081355599998, 0.0, 0.0, 0.0,
    0.19163081355599998, 0.0, 0.0, 0.0, 0.004095 };

  static real_T c1_b_dv1[3] = { 0.0, 0.0, 0.25 };

  static char_T c1_b_cv[12] = { 'f', 'o', 'r', 'e', 'a', 'r', 'm', '_', 'l', 'i',
    'n', 'k' };

  static char_T c1_jname[11] = { 'e', 'l', 'b', 'o', 'w', '_', 'j', 'o', 'i',
    'n', 't' };

  static char_T c1_b[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c1_cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  c1_emxArray_char_T *c1_switch_expression;
  c1_rigidBodyJoint *c1_b_this;
  c1_rigidBodyJoint *c1_d_obj;
  c1_rigidBodyJoint *c1_e_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_collisionGeometry;
  c1_robotics_manip_internal_RigidBody *c1_b_obj;
  c1_robotics_manip_internal_RigidBody *c1_c_obj;
  c1_robotics_manip_internal_RigidBody *c1_this;
  c1_sH0VcwdyJUgJDvK7I0stYa c1_s;
  emlrtStack c1_st;
  real_T c1_msubspace_data[36];
  real_T c1_poslim_data[12];
  real_T c1_homepos_data[6];
  real_T c1_index;
  int32_T c1_bodyName_size[2];
  int32_T c1_jointtype_size[2];
  int32_T c1_msubspace_size[2];
  int32_T c1_poslim_size[2];
  int32_T c1_homepos_size[1];
  int32_T c1_b_kstr;
  int32_T c1_b_loop_ub;
  int32_T c1_b_remainingDimsA;
  int32_T c1_c_kstr;
  int32_T c1_c_loop_ub;
  int32_T c1_d_kstr;
  int32_T c1_d_loop_ub;
  int32_T c1_e_loop_ub;
  int32_T c1_exitg1;
  int32_T c1_f_loop_ub;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i3;
  int32_T c1_i30;
  int32_T c1_i31;
  int32_T c1_i32;
  int32_T c1_i33;
  int32_T c1_i34;
  int32_T c1_i35;
  int32_T c1_i36;
  int32_T c1_i37;
  int32_T c1_i38;
  int32_T c1_i39;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_kstr;
  int32_T c1_loop_ub;
  int32_T c1_remainingDimsA;
  char_T c1_bodyName_data[256];
  char_T c1_jointtype_data[20];
  char_T c1_jointname_data[11];
  boolean_T c1_b_bool;
  boolean_T c1_b_result;
  boolean_T c1_bool;
  boolean_T c1_result;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_obj = c1_obj;
  c1_st.site = &c1_n_emlrtRSI;
  c1_c_obj = c1_b_obj;
  c1_b_obj = c1_c_obj;
  c1_this = c1_b_obj;
  c1_b_obj = c1_this;
  c1_bodyName_size[0] = 1;
  c1_bodyName_size[1] = 12;
  for (c1_i = 0; c1_i < 12; c1_i++) {
    c1_bodyName_data[c1_i] = c1_b_cv[c1_i];
  }

  c1_i1 = c1_b_obj->NameInternal->size[0] * c1_b_obj->NameInternal->size[1];
  c1_b_obj->NameInternal->size[0] = 1;
  c1_b_obj->NameInternal->size[1] = c1_bodyName_size[1];
  c1_st.site = &c1_mb_emlrtRSI;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_b_obj->NameInternal,
    c1_i1, &c1_b_emlrtRTEI);
  c1_loop_ub = c1_bodyName_size[0] * c1_bodyName_size[1] - 1;
  for (c1_i2 = 0; c1_i2 <= c1_loop_ub; c1_i2++) {
    c1_b_obj->NameInternal->data[c1_i2] = c1_bodyName_data[c1_i2];
  }

  c1_b_obj->ParentIndex = 4.0;
  for (c1_i3 = 0; c1_i3 < 10; c1_i3++) {
    c1_b_obj->ChildrenIndices[c1_i3] = c1_b_dv[c1_i3];
  }

  c1_b_obj->MassInternal = 2.275;
  for (c1_i4 = 0; c1_i4 < 3; c1_i4++) {
    c1_b_obj->CenterOfMassInternal[c1_i4] = c1_b_dv1[c1_i4];
  }

  for (c1_i5 = 0; c1_i5 < 9; c1_i5++) {
    c1_b_obj->InertiaInternal[c1_i5] = c1_b_dv2[c1_i5];
  }

  for (c1_i6 = 0; c1_i6 < 36; c1_i6++) {
    c1_b_obj->SpatialInertia[c1_i6] = c1_b_dv3[c1_i6];
  }

  c1_st.site = &c1_o_emlrtRSI;
  c1_d_obj = &c1_b_obj->JointInternal;
  c1_e_obj = c1_d_obj;
  for (c1_i7 = 0; c1_i7 < 11; c1_i7++) {
    c1_jointname_data[c1_i7] = c1_jname[c1_i7];
  }

  c1_b_this = c1_e_obj;
  c1_e_obj = c1_b_this;
  c1_i8 = c1_e_obj->NameInternal->size[0] * c1_e_obj->NameInternal->size[1];
  c1_e_obj->NameInternal->size[0] = 1;
  c1_e_obj->NameInternal->size[1] = 11;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->NameInternal,
    c1_i8, &c1_d_emlrtRTEI);
  for (c1_i9 = 0; c1_i9 < 11; c1_i9++) {
    c1_e_obj->NameInternal->data[c1_i9] = c1_jointname_data[c1_i9];
  }

  c1_jointtype_size[0] = 1;
  c1_jointtype_size[1] = 8;
  for (c1_i10 = 0; c1_i10 < 8; c1_i10++) {
    c1_jointtype_data[c1_i10] = c1_b[c1_i10];
  }

  c1_i11 = c1_e_obj->Type->size[0] * c1_e_obj->Type->size[1];
  c1_e_obj->Type->size[0] = 1;
  c1_e_obj->Type->size[1] = c1_jointtype_size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->Type, c1_i11,
    &c1_f_emlrtRTEI);
  c1_b_loop_ub = c1_jointtype_size[0] * c1_jointtype_size[1] - 1;
  for (c1_i12 = 0; c1_i12 <= c1_b_loop_ub; c1_i12++) {
    c1_e_obj->Type->data[c1_i12] = c1_jointtype_data[c1_i12];
  }

  c1_emxInit_char_T(chartInstance, &c1_st, &c1_switch_expression, 2,
                    &c1_g_emlrtRTEI);
  c1_i13 = c1_switch_expression->size[0] * c1_switch_expression->size[1];
  c1_switch_expression->size[0] = 1;
  c1_switch_expression->size[1] = c1_e_obj->Type->size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_switch_expression,
    c1_i13, &c1_g_emlrtRTEI);
  c1_c_loop_ub = c1_e_obj->Type->size[0] * c1_e_obj->Type->size[1] - 1;
  for (c1_i14 = 0; c1_i14 <= c1_c_loop_ub; c1_i14++) {
    c1_switch_expression->data[c1_i14] = c1_e_obj->Type->data[c1_i14];
  }

  c1_bool = false;
  c1_remainingDimsA = c1_switch_expression->size[1];
  if (c1_remainingDimsA != 8) {
  } else {
    c1_kstr = 1;
    do {
      c1_exitg1 = 0;
      if (c1_kstr - 1 < 8) {
        c1_b_kstr = c1_kstr - 1;
        if (c1_switch_expression->data[c1_b_kstr] != c1_cv1[c1_b_kstr]) {
          c1_exitg1 = 1;
        } else {
          c1_kstr++;
        }
      } else {
        c1_bool = true;
        c1_exitg1 = 1;
      }
    } while (c1_exitg1 == 0);
  }

  if (c1_bool) {
    c1_result = true;
  } else {
    c1_result = false;
  }

  if (c1_result) {
    c1_index = 0.0;
  } else {
    c1_b_bool = false;
    c1_b_remainingDimsA = c1_switch_expression->size[1];
    if (c1_b_remainingDimsA != 9) {
    } else {
      c1_c_kstr = 1;
      do {
        c1_exitg1 = 0;
        if (c1_c_kstr - 1 < 9) {
          c1_d_kstr = c1_c_kstr - 1;
          if (c1_switch_expression->data[c1_d_kstr] != c1_cv[c1_d_kstr]) {
            c1_exitg1 = 1;
          } else {
            c1_c_kstr++;
          }
        } else {
          c1_b_bool = true;
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);
    }

    if (c1_b_bool) {
      c1_b_result = true;
    } else {
      c1_b_result = false;
    }

    if (c1_b_result) {
      c1_index = 1.0;
    } else {
      c1_index = -1.0;
    }
  }

  c1_emxFree_char_T(chartInstance, &c1_switch_expression);
  switch ((int32_T)c1_index) {
   case 0:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i16 = 0; c1_i16 < 6; c1_i16++) {
      c1_msubspace_data[c1_i16] = c1_dv3[c1_i16];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i19 = 0; c1_i19 < 2; c1_i19++) {
      c1_poslim_data[c1_i19] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c1_i19;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 1.0;
    c1_e_obj->PositionNumber = 1.0;
    for (c1_i22 = 0; c1_i22 < 3; c1_i22++) {
      c1_e_obj->JointAxisInternal[c1_i22] = c1_dv1[c1_i22];
    }
    break;

   case 1:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i17 = 0; c1_i17 < 6; c1_i17++) {
      c1_msubspace_data[c1_i17] = c1_dv[c1_i17];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i20 = 0; c1_i20 < 2; c1_i20++) {
      c1_poslim_data[c1_i20] = -0.5 + (real_T)c1_i20;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 1.0;
    c1_e_obj->PositionNumber = 1.0;
    for (c1_i23 = 0; c1_i23 < 3; c1_i23++) {
      c1_e_obj->JointAxisInternal[c1_i23] = c1_dv1[c1_i23];
    }
    break;

   default:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i15 = 0; c1_i15 < 6; c1_i15++) {
      c1_msubspace_data[c1_i15] = 0.0;
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i18 = 0; c1_i18 < 2; c1_i18++) {
      c1_poslim_data[c1_i18] = 0.0;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 0.0;
    c1_e_obj->PositionNumber = 0.0;
    for (c1_i21 = 0; c1_i21 < 3; c1_i21++) {
      c1_e_obj->JointAxisInternal[c1_i21] = 0.0;
    }
    break;
  }

  c1_i24 = c1_e_obj->MotionSubspace->size[0] * c1_e_obj->MotionSubspace->size[1];
  c1_e_obj->MotionSubspace->size[0] = 6;
  c1_e_obj->MotionSubspace->size[1] = c1_msubspace_size[1];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st, c1_e_obj->MotionSubspace,
    c1_i24, &c1_q_emlrtRTEI);
  c1_d_loop_ub = c1_msubspace_size[0] * c1_msubspace_size[1] - 1;
  for (c1_i25 = 0; c1_i25 <= c1_d_loop_ub; c1_i25++) {
    c1_e_obj->MotionSubspace->data[c1_i25] = c1_msubspace_data[c1_i25];
  }

  c1_i26 = c1_e_obj->PositionLimitsInternal->size[0] *
    c1_e_obj->PositionLimitsInternal->size[1];
  c1_e_obj->PositionLimitsInternal->size[0] = c1_poslim_size[0];
  c1_e_obj->PositionLimitsInternal->size[1] = 2;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_e_obj->PositionLimitsInternal, c1_i26, &c1_r_emlrtRTEI);
  c1_e_loop_ub = c1_poslim_size[0] * c1_poslim_size[1] - 1;
  for (c1_i27 = 0; c1_i27 <= c1_e_loop_ub; c1_i27++) {
    c1_e_obj->PositionLimitsInternal->data[c1_i27] = c1_poslim_data[c1_i27];
  }

  c1_i28 = c1_e_obj->HomePositionInternal->size[0];
  c1_e_obj->HomePositionInternal->size[0] = c1_homepos_size[0];
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st,
    c1_e_obj->HomePositionInternal, c1_i28, &c1_s_emlrtRTEI);
  c1_f_loop_ub = c1_homepos_size[0] - 1;
  for (c1_i29 = 0; c1_i29 <= c1_f_loop_ub; c1_i29++) {
    c1_e_obj->HomePositionInternal->data[c1_i29] = c1_homepos_data[c1_i29];
  }

  for (c1_i30 = 0; c1_i30 < 16; c1_i30++) {
    c1_b_obj->JointInternal.JointToParentTransform[c1_i30] = c1_b_dv4[c1_i30];
  }

  for (c1_i31 = 0; c1_i31 < 16; c1_i31++) {
    c1_b_obj->JointInternal.ChildToJointTransform[c1_i31] = c1_dv2[c1_i31];
  }

  c1_i32 = c1_b_obj->JointInternal.MotionSubspace->size[0] *
    c1_b_obj->JointInternal.MotionSubspace->size[1];
  c1_b_obj->JointInternal.MotionSubspace->size[0] = 6;
  c1_b_obj->JointInternal.MotionSubspace->size[1] = 1;
  c1_st.site = &c1_ob_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_b_obj->JointInternal.MotionSubspace, c1_i32, &c1_t_emlrtRTEI);
  for (c1_i33 = 0; c1_i33 < 6; c1_i33++) {
    c1_b_obj->JointInternal.MotionSubspace->data[c1_i33] = c1_dv5[c1_i33];
  }

  c1_b_obj->JointInternal.InTree = true;
  c1_i34 = c1_b_obj->JointInternal.PositionLimitsInternal->size[0] *
    c1_b_obj->JointInternal.PositionLimitsInternal->size[1];
  c1_b_obj->JointInternal.PositionLimitsInternal->size[0] = 1;
  c1_b_obj->JointInternal.PositionLimitsInternal->size[1] = 2;
  c1_st.site = &c1_nb_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_b_obj->JointInternal.PositionLimitsInternal, c1_i34, &c1_u_emlrtRTEI);
  for (c1_i35 = 0; c1_i35 < 2; c1_i35++) {
    c1_b_obj->JointInternal.PositionLimitsInternal->data[c1_i35] =
      -3.14159265359 + 6.28318530718 * (real_T)c1_i35;
  }

  for (c1_i36 = 0; c1_i36 < 3; c1_i36++) {
    c1_b_obj->JointInternal.JointAxisInternal[c1_i36] = c1_dv6[c1_i36];
  }

  c1_i37 = c1_b_obj->JointInternal.HomePositionInternal->size[0];
  c1_b_obj->JointInternal.HomePositionInternal->size[0] = 1;
  c1_emxEnsureCapacity_real_T1(chartInstance, c1_sp,
    c1_b_obj->JointInternal.HomePositionInternal, c1_i37, &c1_v_emlrtRTEI);
  c1_b_obj->JointInternal.HomePositionInternal->data[0] = 0.0;
  c1_st.site = &c1_p_emlrtRSI;
  c1_b_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_st, &c1_iobj_1[0], 0.0);
  c1_st.site = &c1_q_emlrtRSI;
  c1_b_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_st, &c1_iobj_1[1], 1.0);
  c1_s.CollisionType = 3U;
  for (c1_i38 = 0; c1_i38 < 3; c1_i38++) {
    c1_s.CollisionDims[c1_i38] = 0.0;
  }

  for (c1_i39 = 0; c1_i39 < 16; c1_i39++) {
    c1_s.CollisionLocalPose[c1_i39] = c1_dv4[c1_i39];
  }

  c1_st.site = &c1_s_emlrtRSI;
  c1_collisionGeometry = c1_CollisionGeomStruct_populateCollisionGeomFromStruct
    (chartInstance, &c1_s, &c1_iobj_0[0]);
  c1_st.site = &c1_r_emlrtRSI;
  c1_CollisionSet_add(chartInstance, &c1_st, c1_b_obj->CollisionsInternal,
                      c1_collisionGeometry);
  return c1_b_obj;
}

static c1_robotics_manip_internal_RigidBody *c1_e_RigidBody_RigidBody
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_obj,
   c1_robotics_manip_internal_CollisionGeometry *c1_iobj_0,
   c1_robotics_manip_internal_CollisionSet *c1_iobj_1)
{
  static real_T c1_b_dv1[16] = { 4.8965888601467475E-12, 0.0, -1.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 1.0, 0.0, 4.8965888601467475E-12, 0.0, 0.0, 0.0, 0.39225, 1.0
  };

  static real_T c1_b_dv[10] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0
  };

  static char_T c1_jname[13] = { 'w', 'r', 'i', 's', 't', '_', '1', '_', 'j',
    'o', 'i', 'n', 't' };

  static char_T c1_b_cv[12] = { 'w', 'r', 'i', 's', 't', '_', '1', '_', 'l', 'i',
    'n', 'k' };

  static char_T c1_b[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c1_cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  c1_emxArray_char_T *c1_switch_expression;
  c1_rigidBodyJoint *c1_b_this;
  c1_rigidBodyJoint *c1_d_obj;
  c1_rigidBodyJoint *c1_e_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_collisionGeometry;
  c1_robotics_manip_internal_RigidBody *c1_b_obj;
  c1_robotics_manip_internal_RigidBody *c1_c_obj;
  c1_robotics_manip_internal_RigidBody *c1_this;
  c1_sH0VcwdyJUgJDvK7I0stYa c1_s;
  emlrtStack c1_st;
  real_T c1_msubspace_data[36];
  real_T c1_poslim_data[12];
  real_T c1_homepos_data[6];
  real_T c1_index;
  int32_T c1_bodyName_size[2];
  int32_T c1_jointtype_size[2];
  int32_T c1_msubspace_size[2];
  int32_T c1_poslim_size[2];
  int32_T c1_homepos_size[1];
  int32_T c1_b_kstr;
  int32_T c1_b_loop_ub;
  int32_T c1_b_remainingDimsA;
  int32_T c1_c_kstr;
  int32_T c1_c_loop_ub;
  int32_T c1_d_kstr;
  int32_T c1_d_loop_ub;
  int32_T c1_e_loop_ub;
  int32_T c1_exitg1;
  int32_T c1_f_loop_ub;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i3;
  int32_T c1_i30;
  int32_T c1_i31;
  int32_T c1_i32;
  int32_T c1_i33;
  int32_T c1_i34;
  int32_T c1_i35;
  int32_T c1_i36;
  int32_T c1_i37;
  int32_T c1_i38;
  int32_T c1_i39;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_kstr;
  int32_T c1_loop_ub;
  int32_T c1_remainingDimsA;
  char_T c1_bodyName_data[256];
  char_T c1_jointtype_data[20];
  char_T c1_jointname_data[13];
  boolean_T c1_b_bool;
  boolean_T c1_b_result;
  boolean_T c1_bool;
  boolean_T c1_result;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_obj = c1_obj;
  c1_st.site = &c1_n_emlrtRSI;
  c1_c_obj = c1_b_obj;
  c1_b_obj = c1_c_obj;
  c1_this = c1_b_obj;
  c1_b_obj = c1_this;
  c1_bodyName_size[0] = 1;
  c1_bodyName_size[1] = 12;
  for (c1_i = 0; c1_i < 12; c1_i++) {
    c1_bodyName_data[c1_i] = c1_b_cv[c1_i];
  }

  c1_i1 = c1_b_obj->NameInternal->size[0] * c1_b_obj->NameInternal->size[1];
  c1_b_obj->NameInternal->size[0] = 1;
  c1_b_obj->NameInternal->size[1] = c1_bodyName_size[1];
  c1_st.site = &c1_mb_emlrtRSI;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_b_obj->NameInternal,
    c1_i1, &c1_b_emlrtRTEI);
  c1_loop_ub = c1_bodyName_size[0] * c1_bodyName_size[1] - 1;
  for (c1_i2 = 0; c1_i2 <= c1_loop_ub; c1_i2++) {
    c1_b_obj->NameInternal->data[c1_i2] = c1_bodyName_data[c1_i2];
  }

  c1_b_obj->ParentIndex = 5.0;
  for (c1_i3 = 0; c1_i3 < 10; c1_i3++) {
    c1_b_obj->ChildrenIndices[c1_i3] = c1_b_dv[c1_i3];
  }

  c1_b_obj->MassInternal = 1.219;
  for (c1_i4 = 0; c1_i4 < 3; c1_i4++) {
    c1_b_obj->CenterOfMassInternal[c1_i4] = 0.0;
  }

  for (c1_i5 = 0; c1_i5 < 9; c1_i5++) {
    c1_b_obj->InertiaInternal[c1_i5] = c1_dv7[c1_i5];
  }

  for (c1_i6 = 0; c1_i6 < 36; c1_i6++) {
    c1_b_obj->SpatialInertia[c1_i6] = c1_dv8[c1_i6];
  }

  c1_st.site = &c1_o_emlrtRSI;
  c1_d_obj = &c1_b_obj->JointInternal;
  c1_e_obj = c1_d_obj;
  for (c1_i7 = 0; c1_i7 < 13; c1_i7++) {
    c1_jointname_data[c1_i7] = c1_jname[c1_i7];
  }

  c1_b_this = c1_e_obj;
  c1_e_obj = c1_b_this;
  c1_i8 = c1_e_obj->NameInternal->size[0] * c1_e_obj->NameInternal->size[1];
  c1_e_obj->NameInternal->size[0] = 1;
  c1_e_obj->NameInternal->size[1] = 13;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->NameInternal,
    c1_i8, &c1_d_emlrtRTEI);
  for (c1_i9 = 0; c1_i9 < 13; c1_i9++) {
    c1_e_obj->NameInternal->data[c1_i9] = c1_jointname_data[c1_i9];
  }

  c1_jointtype_size[0] = 1;
  c1_jointtype_size[1] = 8;
  for (c1_i10 = 0; c1_i10 < 8; c1_i10++) {
    c1_jointtype_data[c1_i10] = c1_b[c1_i10];
  }

  c1_i11 = c1_e_obj->Type->size[0] * c1_e_obj->Type->size[1];
  c1_e_obj->Type->size[0] = 1;
  c1_e_obj->Type->size[1] = c1_jointtype_size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->Type, c1_i11,
    &c1_f_emlrtRTEI);
  c1_b_loop_ub = c1_jointtype_size[0] * c1_jointtype_size[1] - 1;
  for (c1_i12 = 0; c1_i12 <= c1_b_loop_ub; c1_i12++) {
    c1_e_obj->Type->data[c1_i12] = c1_jointtype_data[c1_i12];
  }

  c1_emxInit_char_T(chartInstance, &c1_st, &c1_switch_expression, 2,
                    &c1_g_emlrtRTEI);
  c1_i13 = c1_switch_expression->size[0] * c1_switch_expression->size[1];
  c1_switch_expression->size[0] = 1;
  c1_switch_expression->size[1] = c1_e_obj->Type->size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_switch_expression,
    c1_i13, &c1_g_emlrtRTEI);
  c1_c_loop_ub = c1_e_obj->Type->size[0] * c1_e_obj->Type->size[1] - 1;
  for (c1_i14 = 0; c1_i14 <= c1_c_loop_ub; c1_i14++) {
    c1_switch_expression->data[c1_i14] = c1_e_obj->Type->data[c1_i14];
  }

  c1_bool = false;
  c1_remainingDimsA = c1_switch_expression->size[1];
  if (c1_remainingDimsA != 8) {
  } else {
    c1_kstr = 1;
    do {
      c1_exitg1 = 0;
      if (c1_kstr - 1 < 8) {
        c1_b_kstr = c1_kstr - 1;
        if (c1_switch_expression->data[c1_b_kstr] != c1_cv1[c1_b_kstr]) {
          c1_exitg1 = 1;
        } else {
          c1_kstr++;
        }
      } else {
        c1_bool = true;
        c1_exitg1 = 1;
      }
    } while (c1_exitg1 == 0);
  }

  if (c1_bool) {
    c1_result = true;
  } else {
    c1_result = false;
  }

  if (c1_result) {
    c1_index = 0.0;
  } else {
    c1_b_bool = false;
    c1_b_remainingDimsA = c1_switch_expression->size[1];
    if (c1_b_remainingDimsA != 9) {
    } else {
      c1_c_kstr = 1;
      do {
        c1_exitg1 = 0;
        if (c1_c_kstr - 1 < 9) {
          c1_d_kstr = c1_c_kstr - 1;
          if (c1_switch_expression->data[c1_d_kstr] != c1_cv[c1_d_kstr]) {
            c1_exitg1 = 1;
          } else {
            c1_c_kstr++;
          }
        } else {
          c1_b_bool = true;
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);
    }

    if (c1_b_bool) {
      c1_b_result = true;
    } else {
      c1_b_result = false;
    }

    if (c1_b_result) {
      c1_index = 1.0;
    } else {
      c1_index = -1.0;
    }
  }

  c1_emxFree_char_T(chartInstance, &c1_switch_expression);
  switch ((int32_T)c1_index) {
   case 0:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i16 = 0; c1_i16 < 6; c1_i16++) {
      c1_msubspace_data[c1_i16] = c1_dv3[c1_i16];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i19 = 0; c1_i19 < 2; c1_i19++) {
      c1_poslim_data[c1_i19] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c1_i19;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 1.0;
    c1_e_obj->PositionNumber = 1.0;
    for (c1_i22 = 0; c1_i22 < 3; c1_i22++) {
      c1_e_obj->JointAxisInternal[c1_i22] = c1_dv1[c1_i22];
    }
    break;

   case 1:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i17 = 0; c1_i17 < 6; c1_i17++) {
      c1_msubspace_data[c1_i17] = c1_dv[c1_i17];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i20 = 0; c1_i20 < 2; c1_i20++) {
      c1_poslim_data[c1_i20] = -0.5 + (real_T)c1_i20;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 1.0;
    c1_e_obj->PositionNumber = 1.0;
    for (c1_i23 = 0; c1_i23 < 3; c1_i23++) {
      c1_e_obj->JointAxisInternal[c1_i23] = c1_dv1[c1_i23];
    }
    break;

   default:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i15 = 0; c1_i15 < 6; c1_i15++) {
      c1_msubspace_data[c1_i15] = 0.0;
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i18 = 0; c1_i18 < 2; c1_i18++) {
      c1_poslim_data[c1_i18] = 0.0;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 0.0;
    c1_e_obj->PositionNumber = 0.0;
    for (c1_i21 = 0; c1_i21 < 3; c1_i21++) {
      c1_e_obj->JointAxisInternal[c1_i21] = 0.0;
    }
    break;
  }

  c1_i24 = c1_e_obj->MotionSubspace->size[0] * c1_e_obj->MotionSubspace->size[1];
  c1_e_obj->MotionSubspace->size[0] = 6;
  c1_e_obj->MotionSubspace->size[1] = c1_msubspace_size[1];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st, c1_e_obj->MotionSubspace,
    c1_i24, &c1_q_emlrtRTEI);
  c1_d_loop_ub = c1_msubspace_size[0] * c1_msubspace_size[1] - 1;
  for (c1_i25 = 0; c1_i25 <= c1_d_loop_ub; c1_i25++) {
    c1_e_obj->MotionSubspace->data[c1_i25] = c1_msubspace_data[c1_i25];
  }

  c1_i26 = c1_e_obj->PositionLimitsInternal->size[0] *
    c1_e_obj->PositionLimitsInternal->size[1];
  c1_e_obj->PositionLimitsInternal->size[0] = c1_poslim_size[0];
  c1_e_obj->PositionLimitsInternal->size[1] = 2;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_e_obj->PositionLimitsInternal, c1_i26, &c1_r_emlrtRTEI);
  c1_e_loop_ub = c1_poslim_size[0] * c1_poslim_size[1] - 1;
  for (c1_i27 = 0; c1_i27 <= c1_e_loop_ub; c1_i27++) {
    c1_e_obj->PositionLimitsInternal->data[c1_i27] = c1_poslim_data[c1_i27];
  }

  c1_i28 = c1_e_obj->HomePositionInternal->size[0];
  c1_e_obj->HomePositionInternal->size[0] = c1_homepos_size[0];
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st,
    c1_e_obj->HomePositionInternal, c1_i28, &c1_s_emlrtRTEI);
  c1_f_loop_ub = c1_homepos_size[0] - 1;
  for (c1_i29 = 0; c1_i29 <= c1_f_loop_ub; c1_i29++) {
    c1_e_obj->HomePositionInternal->data[c1_i29] = c1_homepos_data[c1_i29];
  }

  for (c1_i30 = 0; c1_i30 < 16; c1_i30++) {
    c1_b_obj->JointInternal.JointToParentTransform[c1_i30] = c1_b_dv1[c1_i30];
  }

  for (c1_i31 = 0; c1_i31 < 16; c1_i31++) {
    c1_b_obj->JointInternal.ChildToJointTransform[c1_i31] = c1_dv2[c1_i31];
  }

  c1_i32 = c1_b_obj->JointInternal.MotionSubspace->size[0] *
    c1_b_obj->JointInternal.MotionSubspace->size[1];
  c1_b_obj->JointInternal.MotionSubspace->size[0] = 6;
  c1_b_obj->JointInternal.MotionSubspace->size[1] = 1;
  c1_st.site = &c1_ob_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_b_obj->JointInternal.MotionSubspace, c1_i32, &c1_t_emlrtRTEI);
  for (c1_i33 = 0; c1_i33 < 6; c1_i33++) {
    c1_b_obj->JointInternal.MotionSubspace->data[c1_i33] = c1_dv5[c1_i33];
  }

  c1_b_obj->JointInternal.InTree = true;
  c1_i34 = c1_b_obj->JointInternal.PositionLimitsInternal->size[0] *
    c1_b_obj->JointInternal.PositionLimitsInternal->size[1];
  c1_b_obj->JointInternal.PositionLimitsInternal->size[0] = 1;
  c1_b_obj->JointInternal.PositionLimitsInternal->size[1] = 2;
  c1_st.site = &c1_nb_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_b_obj->JointInternal.PositionLimitsInternal, c1_i34, &c1_u_emlrtRTEI);
  for (c1_i35 = 0; c1_i35 < 2; c1_i35++) {
    c1_b_obj->JointInternal.PositionLimitsInternal->data[c1_i35] =
      -6.28318530718 + 12.56637061436 * (real_T)c1_i35;
  }

  for (c1_i36 = 0; c1_i36 < 3; c1_i36++) {
    c1_b_obj->JointInternal.JointAxisInternal[c1_i36] = c1_dv6[c1_i36];
  }

  c1_i37 = c1_b_obj->JointInternal.HomePositionInternal->size[0];
  c1_b_obj->JointInternal.HomePositionInternal->size[0] = 1;
  c1_emxEnsureCapacity_real_T1(chartInstance, c1_sp,
    c1_b_obj->JointInternal.HomePositionInternal, c1_i37, &c1_v_emlrtRTEI);
  c1_b_obj->JointInternal.HomePositionInternal->data[0] = 0.0;
  c1_st.site = &c1_p_emlrtRSI;
  c1_b_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_st, &c1_iobj_1[0], 0.0);
  c1_st.site = &c1_q_emlrtRSI;
  c1_b_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_st, &c1_iobj_1[1], 1.0);
  c1_s.CollisionType = 3U;
  for (c1_i38 = 0; c1_i38 < 3; c1_i38++) {
    c1_s.CollisionDims[c1_i38] = 0.0;
  }

  for (c1_i39 = 0; c1_i39 < 16; c1_i39++) {
    c1_s.CollisionLocalPose[c1_i39] = c1_dv4[c1_i39];
  }

  c1_st.site = &c1_s_emlrtRSI;
  c1_collisionGeometry = c1_CollisionGeomStruct_populateCollisionGeomFromStruct
    (chartInstance, &c1_s, &c1_iobj_0[0]);
  c1_st.site = &c1_r_emlrtRSI;
  c1_CollisionSet_add(chartInstance, &c1_st, c1_b_obj->CollisionsInternal,
                      c1_collisionGeometry);
  return c1_b_obj;
}

static c1_robotics_manip_internal_RigidBody *c1_f_RigidBody_RigidBody
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_obj,
   c1_robotics_manip_internal_CollisionGeometry *c1_iobj_0,
   c1_robotics_manip_internal_CollisionSet *c1_iobj_1)
{
  static real_T c1_b_dv1[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.093, 0.0, 1.0 };

  static real_T c1_b_dv[10] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0
  };

  static char_T c1_jname[13] = { 'w', 'r', 'i', 's', 't', '_', '2', '_', 'j',
    'o', 'i', 'n', 't' };

  static char_T c1_b_cv[12] = { 'w', 'r', 'i', 's', 't', '_', '2', '_', 'l', 'i',
    'n', 'k' };

  static char_T c1_b[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c1_cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  c1_emxArray_char_T *c1_switch_expression;
  c1_rigidBodyJoint *c1_b_this;
  c1_rigidBodyJoint *c1_d_obj;
  c1_rigidBodyJoint *c1_e_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_collisionGeometry;
  c1_robotics_manip_internal_RigidBody *c1_b_obj;
  c1_robotics_manip_internal_RigidBody *c1_c_obj;
  c1_robotics_manip_internal_RigidBody *c1_this;
  c1_sH0VcwdyJUgJDvK7I0stYa c1_s;
  emlrtStack c1_st;
  real_T c1_msubspace_data[36];
  real_T c1_poslim_data[12];
  real_T c1_homepos_data[6];
  real_T c1_index;
  int32_T c1_bodyName_size[2];
  int32_T c1_jointtype_size[2];
  int32_T c1_msubspace_size[2];
  int32_T c1_poslim_size[2];
  int32_T c1_homepos_size[1];
  int32_T c1_b_kstr;
  int32_T c1_b_loop_ub;
  int32_T c1_b_remainingDimsA;
  int32_T c1_c_kstr;
  int32_T c1_c_loop_ub;
  int32_T c1_d_kstr;
  int32_T c1_d_loop_ub;
  int32_T c1_e_loop_ub;
  int32_T c1_exitg1;
  int32_T c1_f_loop_ub;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i3;
  int32_T c1_i30;
  int32_T c1_i31;
  int32_T c1_i32;
  int32_T c1_i33;
  int32_T c1_i34;
  int32_T c1_i35;
  int32_T c1_i36;
  int32_T c1_i37;
  int32_T c1_i38;
  int32_T c1_i39;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_kstr;
  int32_T c1_loop_ub;
  int32_T c1_remainingDimsA;
  char_T c1_bodyName_data[256];
  char_T c1_jointtype_data[20];
  char_T c1_jointname_data[13];
  boolean_T c1_b_bool;
  boolean_T c1_b_result;
  boolean_T c1_bool;
  boolean_T c1_result;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_obj = c1_obj;
  c1_st.site = &c1_n_emlrtRSI;
  c1_c_obj = c1_b_obj;
  c1_b_obj = c1_c_obj;
  c1_this = c1_b_obj;
  c1_b_obj = c1_this;
  c1_bodyName_size[0] = 1;
  c1_bodyName_size[1] = 12;
  for (c1_i = 0; c1_i < 12; c1_i++) {
    c1_bodyName_data[c1_i] = c1_b_cv[c1_i];
  }

  c1_i1 = c1_b_obj->NameInternal->size[0] * c1_b_obj->NameInternal->size[1];
  c1_b_obj->NameInternal->size[0] = 1;
  c1_b_obj->NameInternal->size[1] = c1_bodyName_size[1];
  c1_st.site = &c1_mb_emlrtRSI;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_b_obj->NameInternal,
    c1_i1, &c1_b_emlrtRTEI);
  c1_loop_ub = c1_bodyName_size[0] * c1_bodyName_size[1] - 1;
  for (c1_i2 = 0; c1_i2 <= c1_loop_ub; c1_i2++) {
    c1_b_obj->NameInternal->data[c1_i2] = c1_bodyName_data[c1_i2];
  }

  c1_b_obj->ParentIndex = 6.0;
  for (c1_i3 = 0; c1_i3 < 10; c1_i3++) {
    c1_b_obj->ChildrenIndices[c1_i3] = c1_b_dv[c1_i3];
  }

  c1_b_obj->MassInternal = 1.219;
  for (c1_i4 = 0; c1_i4 < 3; c1_i4++) {
    c1_b_obj->CenterOfMassInternal[c1_i4] = 0.0;
  }

  for (c1_i5 = 0; c1_i5 < 9; c1_i5++) {
    c1_b_obj->InertiaInternal[c1_i5] = c1_dv7[c1_i5];
  }

  for (c1_i6 = 0; c1_i6 < 36; c1_i6++) {
    c1_b_obj->SpatialInertia[c1_i6] = c1_dv8[c1_i6];
  }

  c1_st.site = &c1_o_emlrtRSI;
  c1_d_obj = &c1_b_obj->JointInternal;
  c1_e_obj = c1_d_obj;
  for (c1_i7 = 0; c1_i7 < 13; c1_i7++) {
    c1_jointname_data[c1_i7] = c1_jname[c1_i7];
  }

  c1_b_this = c1_e_obj;
  c1_e_obj = c1_b_this;
  c1_i8 = c1_e_obj->NameInternal->size[0] * c1_e_obj->NameInternal->size[1];
  c1_e_obj->NameInternal->size[0] = 1;
  c1_e_obj->NameInternal->size[1] = 13;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->NameInternal,
    c1_i8, &c1_d_emlrtRTEI);
  for (c1_i9 = 0; c1_i9 < 13; c1_i9++) {
    c1_e_obj->NameInternal->data[c1_i9] = c1_jointname_data[c1_i9];
  }

  c1_jointtype_size[0] = 1;
  c1_jointtype_size[1] = 8;
  for (c1_i10 = 0; c1_i10 < 8; c1_i10++) {
    c1_jointtype_data[c1_i10] = c1_b[c1_i10];
  }

  c1_i11 = c1_e_obj->Type->size[0] * c1_e_obj->Type->size[1];
  c1_e_obj->Type->size[0] = 1;
  c1_e_obj->Type->size[1] = c1_jointtype_size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->Type, c1_i11,
    &c1_f_emlrtRTEI);
  c1_b_loop_ub = c1_jointtype_size[0] * c1_jointtype_size[1] - 1;
  for (c1_i12 = 0; c1_i12 <= c1_b_loop_ub; c1_i12++) {
    c1_e_obj->Type->data[c1_i12] = c1_jointtype_data[c1_i12];
  }

  c1_emxInit_char_T(chartInstance, &c1_st, &c1_switch_expression, 2,
                    &c1_g_emlrtRTEI);
  c1_i13 = c1_switch_expression->size[0] * c1_switch_expression->size[1];
  c1_switch_expression->size[0] = 1;
  c1_switch_expression->size[1] = c1_e_obj->Type->size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_switch_expression,
    c1_i13, &c1_g_emlrtRTEI);
  c1_c_loop_ub = c1_e_obj->Type->size[0] * c1_e_obj->Type->size[1] - 1;
  for (c1_i14 = 0; c1_i14 <= c1_c_loop_ub; c1_i14++) {
    c1_switch_expression->data[c1_i14] = c1_e_obj->Type->data[c1_i14];
  }

  c1_bool = false;
  c1_remainingDimsA = c1_switch_expression->size[1];
  if (c1_remainingDimsA != 8) {
  } else {
    c1_kstr = 1;
    do {
      c1_exitg1 = 0;
      if (c1_kstr - 1 < 8) {
        c1_b_kstr = c1_kstr - 1;
        if (c1_switch_expression->data[c1_b_kstr] != c1_cv1[c1_b_kstr]) {
          c1_exitg1 = 1;
        } else {
          c1_kstr++;
        }
      } else {
        c1_bool = true;
        c1_exitg1 = 1;
      }
    } while (c1_exitg1 == 0);
  }

  if (c1_bool) {
    c1_result = true;
  } else {
    c1_result = false;
  }

  if (c1_result) {
    c1_index = 0.0;
  } else {
    c1_b_bool = false;
    c1_b_remainingDimsA = c1_switch_expression->size[1];
    if (c1_b_remainingDimsA != 9) {
    } else {
      c1_c_kstr = 1;
      do {
        c1_exitg1 = 0;
        if (c1_c_kstr - 1 < 9) {
          c1_d_kstr = c1_c_kstr - 1;
          if (c1_switch_expression->data[c1_d_kstr] != c1_cv[c1_d_kstr]) {
            c1_exitg1 = 1;
          } else {
            c1_c_kstr++;
          }
        } else {
          c1_b_bool = true;
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);
    }

    if (c1_b_bool) {
      c1_b_result = true;
    } else {
      c1_b_result = false;
    }

    if (c1_b_result) {
      c1_index = 1.0;
    } else {
      c1_index = -1.0;
    }
  }

  c1_emxFree_char_T(chartInstance, &c1_switch_expression);
  switch ((int32_T)c1_index) {
   case 0:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i16 = 0; c1_i16 < 6; c1_i16++) {
      c1_msubspace_data[c1_i16] = c1_dv3[c1_i16];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i19 = 0; c1_i19 < 2; c1_i19++) {
      c1_poslim_data[c1_i19] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c1_i19;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 1.0;
    c1_e_obj->PositionNumber = 1.0;
    for (c1_i22 = 0; c1_i22 < 3; c1_i22++) {
      c1_e_obj->JointAxisInternal[c1_i22] = c1_dv1[c1_i22];
    }
    break;

   case 1:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i17 = 0; c1_i17 < 6; c1_i17++) {
      c1_msubspace_data[c1_i17] = c1_dv[c1_i17];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i20 = 0; c1_i20 < 2; c1_i20++) {
      c1_poslim_data[c1_i20] = -0.5 + (real_T)c1_i20;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 1.0;
    c1_e_obj->PositionNumber = 1.0;
    for (c1_i23 = 0; c1_i23 < 3; c1_i23++) {
      c1_e_obj->JointAxisInternal[c1_i23] = c1_dv1[c1_i23];
    }
    break;

   default:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i15 = 0; c1_i15 < 6; c1_i15++) {
      c1_msubspace_data[c1_i15] = 0.0;
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i18 = 0; c1_i18 < 2; c1_i18++) {
      c1_poslim_data[c1_i18] = 0.0;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 0.0;
    c1_e_obj->PositionNumber = 0.0;
    for (c1_i21 = 0; c1_i21 < 3; c1_i21++) {
      c1_e_obj->JointAxisInternal[c1_i21] = 0.0;
    }
    break;
  }

  c1_i24 = c1_e_obj->MotionSubspace->size[0] * c1_e_obj->MotionSubspace->size[1];
  c1_e_obj->MotionSubspace->size[0] = 6;
  c1_e_obj->MotionSubspace->size[1] = c1_msubspace_size[1];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st, c1_e_obj->MotionSubspace,
    c1_i24, &c1_q_emlrtRTEI);
  c1_d_loop_ub = c1_msubspace_size[0] * c1_msubspace_size[1] - 1;
  for (c1_i25 = 0; c1_i25 <= c1_d_loop_ub; c1_i25++) {
    c1_e_obj->MotionSubspace->data[c1_i25] = c1_msubspace_data[c1_i25];
  }

  c1_i26 = c1_e_obj->PositionLimitsInternal->size[0] *
    c1_e_obj->PositionLimitsInternal->size[1];
  c1_e_obj->PositionLimitsInternal->size[0] = c1_poslim_size[0];
  c1_e_obj->PositionLimitsInternal->size[1] = 2;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_e_obj->PositionLimitsInternal, c1_i26, &c1_r_emlrtRTEI);
  c1_e_loop_ub = c1_poslim_size[0] * c1_poslim_size[1] - 1;
  for (c1_i27 = 0; c1_i27 <= c1_e_loop_ub; c1_i27++) {
    c1_e_obj->PositionLimitsInternal->data[c1_i27] = c1_poslim_data[c1_i27];
  }

  c1_i28 = c1_e_obj->HomePositionInternal->size[0];
  c1_e_obj->HomePositionInternal->size[0] = c1_homepos_size[0];
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st,
    c1_e_obj->HomePositionInternal, c1_i28, &c1_s_emlrtRTEI);
  c1_f_loop_ub = c1_homepos_size[0] - 1;
  for (c1_i29 = 0; c1_i29 <= c1_f_loop_ub; c1_i29++) {
    c1_e_obj->HomePositionInternal->data[c1_i29] = c1_homepos_data[c1_i29];
  }

  for (c1_i30 = 0; c1_i30 < 16; c1_i30++) {
    c1_b_obj->JointInternal.JointToParentTransform[c1_i30] = c1_b_dv1[c1_i30];
  }

  for (c1_i31 = 0; c1_i31 < 16; c1_i31++) {
    c1_b_obj->JointInternal.ChildToJointTransform[c1_i31] = c1_dv2[c1_i31];
  }

  c1_i32 = c1_b_obj->JointInternal.MotionSubspace->size[0] *
    c1_b_obj->JointInternal.MotionSubspace->size[1];
  c1_b_obj->JointInternal.MotionSubspace->size[0] = 6;
  c1_b_obj->JointInternal.MotionSubspace->size[1] = 1;
  c1_st.site = &c1_ob_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_b_obj->JointInternal.MotionSubspace, c1_i32, &c1_t_emlrtRTEI);
  for (c1_i33 = 0; c1_i33 < 6; c1_i33++) {
    c1_b_obj->JointInternal.MotionSubspace->data[c1_i33] = c1_dv3[c1_i33];
  }

  c1_b_obj->JointInternal.InTree = true;
  c1_i34 = c1_b_obj->JointInternal.PositionLimitsInternal->size[0] *
    c1_b_obj->JointInternal.PositionLimitsInternal->size[1];
  c1_b_obj->JointInternal.PositionLimitsInternal->size[0] = 1;
  c1_b_obj->JointInternal.PositionLimitsInternal->size[1] = 2;
  c1_st.site = &c1_nb_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_b_obj->JointInternal.PositionLimitsInternal, c1_i34, &c1_u_emlrtRTEI);
  for (c1_i35 = 0; c1_i35 < 2; c1_i35++) {
    c1_b_obj->JointInternal.PositionLimitsInternal->data[c1_i35] =
      -6.28318530718 + 12.56637061436 * (real_T)c1_i35;
  }

  for (c1_i36 = 0; c1_i36 < 3; c1_i36++) {
    c1_b_obj->JointInternal.JointAxisInternal[c1_i36] = c1_dv1[c1_i36];
  }

  c1_i37 = c1_b_obj->JointInternal.HomePositionInternal->size[0];
  c1_b_obj->JointInternal.HomePositionInternal->size[0] = 1;
  c1_emxEnsureCapacity_real_T1(chartInstance, c1_sp,
    c1_b_obj->JointInternal.HomePositionInternal, c1_i37, &c1_v_emlrtRTEI);
  c1_b_obj->JointInternal.HomePositionInternal->data[0] = 0.0;
  c1_st.site = &c1_p_emlrtRSI;
  c1_b_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_st, &c1_iobj_1[0], 0.0);
  c1_st.site = &c1_q_emlrtRSI;
  c1_b_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_st, &c1_iobj_1[1], 1.0);
  c1_s.CollisionType = 3U;
  for (c1_i38 = 0; c1_i38 < 3; c1_i38++) {
    c1_s.CollisionDims[c1_i38] = 0.0;
  }

  for (c1_i39 = 0; c1_i39 < 16; c1_i39++) {
    c1_s.CollisionLocalPose[c1_i39] = c1_dv4[c1_i39];
  }

  c1_st.site = &c1_s_emlrtRSI;
  c1_collisionGeometry = c1_CollisionGeomStruct_populateCollisionGeomFromStruct
    (chartInstance, &c1_s, &c1_iobj_0[0]);
  c1_st.site = &c1_r_emlrtRSI;
  c1_CollisionSet_add(chartInstance, &c1_st, c1_b_obj->CollisionsInternal,
                      c1_collisionGeometry);
  return c1_b_obj;
}

static c1_robotics_manip_internal_RigidBody *c1_g_RigidBody_RigidBody
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_obj,
   c1_robotics_manip_internal_CollisionGeometry *c1_iobj_0,
   c1_robotics_manip_internal_CollisionSet *c1_iobj_1)
{
  static real_T c1_b_dv2[36] = { 0.0171364731454, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0,
    0.0171364731454, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.033822, -0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, 0.1879, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.1879, 0.0, 0.0,
    -0.0, 0.0, 0.0, 0.0, 0.1879 };

  static real_T c1_b_dv3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.09465, 1.0 };

  static real_T c1_b_dv[10] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0
  };

  static real_T c1_b_dv1[9] = { 0.0171364731454, 0.0, 0.0, 0.0, 0.0171364731454,
    0.0, 0.0, 0.0, 0.033822 };

  static char_T c1_jname[13] = { 'w', 'r', 'i', 's', 't', '_', '3', '_', 'j',
    'o', 'i', 'n', 't' };

  static char_T c1_b_cv[12] = { 'w', 'r', 'i', 's', 't', '_', '3', '_', 'l', 'i',
    'n', 'k' };

  static char_T c1_b[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c1_cv1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  c1_emxArray_char_T *c1_switch_expression;
  c1_rigidBodyJoint *c1_b_this;
  c1_rigidBodyJoint *c1_d_obj;
  c1_rigidBodyJoint *c1_e_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_collisionGeometry;
  c1_robotics_manip_internal_RigidBody *c1_b_obj;
  c1_robotics_manip_internal_RigidBody *c1_c_obj;
  c1_robotics_manip_internal_RigidBody *c1_this;
  c1_sH0VcwdyJUgJDvK7I0stYa c1_s;
  emlrtStack c1_st;
  real_T c1_msubspace_data[36];
  real_T c1_poslim_data[12];
  real_T c1_homepos_data[6];
  real_T c1_index;
  int32_T c1_bodyName_size[2];
  int32_T c1_jointtype_size[2];
  int32_T c1_msubspace_size[2];
  int32_T c1_poslim_size[2];
  int32_T c1_homepos_size[1];
  int32_T c1_b_kstr;
  int32_T c1_b_loop_ub;
  int32_T c1_b_remainingDimsA;
  int32_T c1_c_kstr;
  int32_T c1_c_loop_ub;
  int32_T c1_d_kstr;
  int32_T c1_d_loop_ub;
  int32_T c1_e_loop_ub;
  int32_T c1_exitg1;
  int32_T c1_f_loop_ub;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i3;
  int32_T c1_i30;
  int32_T c1_i31;
  int32_T c1_i32;
  int32_T c1_i33;
  int32_T c1_i34;
  int32_T c1_i35;
  int32_T c1_i36;
  int32_T c1_i37;
  int32_T c1_i38;
  int32_T c1_i39;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_kstr;
  int32_T c1_loop_ub;
  int32_T c1_remainingDimsA;
  char_T c1_bodyName_data[256];
  char_T c1_jointtype_data[20];
  char_T c1_jointname_data[13];
  boolean_T c1_b_bool;
  boolean_T c1_b_result;
  boolean_T c1_bool;
  boolean_T c1_result;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_obj = c1_obj;
  c1_st.site = &c1_n_emlrtRSI;
  c1_c_obj = c1_b_obj;
  c1_b_obj = c1_c_obj;
  c1_this = c1_b_obj;
  c1_b_obj = c1_this;
  c1_bodyName_size[0] = 1;
  c1_bodyName_size[1] = 12;
  for (c1_i = 0; c1_i < 12; c1_i++) {
    c1_bodyName_data[c1_i] = c1_b_cv[c1_i];
  }

  c1_i1 = c1_b_obj->NameInternal->size[0] * c1_b_obj->NameInternal->size[1];
  c1_b_obj->NameInternal->size[0] = 1;
  c1_b_obj->NameInternal->size[1] = c1_bodyName_size[1];
  c1_st.site = &c1_mb_emlrtRSI;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_b_obj->NameInternal,
    c1_i1, &c1_b_emlrtRTEI);
  c1_loop_ub = c1_bodyName_size[0] * c1_bodyName_size[1] - 1;
  for (c1_i2 = 0; c1_i2 <= c1_loop_ub; c1_i2++) {
    c1_b_obj->NameInternal->data[c1_i2] = c1_bodyName_data[c1_i2];
  }

  c1_b_obj->ParentIndex = 7.0;
  for (c1_i3 = 0; c1_i3 < 10; c1_i3++) {
    c1_b_obj->ChildrenIndices[c1_i3] = c1_b_dv[c1_i3];
  }

  c1_b_obj->MassInternal = 0.1879;
  for (c1_i4 = 0; c1_i4 < 3; c1_i4++) {
    c1_b_obj->CenterOfMassInternal[c1_i4] = 0.0;
  }

  for (c1_i5 = 0; c1_i5 < 9; c1_i5++) {
    c1_b_obj->InertiaInternal[c1_i5] = c1_b_dv1[c1_i5];
  }

  for (c1_i6 = 0; c1_i6 < 36; c1_i6++) {
    c1_b_obj->SpatialInertia[c1_i6] = c1_b_dv2[c1_i6];
  }

  c1_st.site = &c1_o_emlrtRSI;
  c1_d_obj = &c1_b_obj->JointInternal;
  c1_e_obj = c1_d_obj;
  for (c1_i7 = 0; c1_i7 < 13; c1_i7++) {
    c1_jointname_data[c1_i7] = c1_jname[c1_i7];
  }

  c1_b_this = c1_e_obj;
  c1_e_obj = c1_b_this;
  c1_i8 = c1_e_obj->NameInternal->size[0] * c1_e_obj->NameInternal->size[1];
  c1_e_obj->NameInternal->size[0] = 1;
  c1_e_obj->NameInternal->size[1] = 13;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->NameInternal,
    c1_i8, &c1_d_emlrtRTEI);
  for (c1_i9 = 0; c1_i9 < 13; c1_i9++) {
    c1_e_obj->NameInternal->data[c1_i9] = c1_jointname_data[c1_i9];
  }

  c1_jointtype_size[0] = 1;
  c1_jointtype_size[1] = 8;
  for (c1_i10 = 0; c1_i10 < 8; c1_i10++) {
    c1_jointtype_data[c1_i10] = c1_b[c1_i10];
  }

  c1_i11 = c1_e_obj->Type->size[0] * c1_e_obj->Type->size[1];
  c1_e_obj->Type->size[0] = 1;
  c1_e_obj->Type->size[1] = c1_jointtype_size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->Type, c1_i11,
    &c1_f_emlrtRTEI);
  c1_b_loop_ub = c1_jointtype_size[0] * c1_jointtype_size[1] - 1;
  for (c1_i12 = 0; c1_i12 <= c1_b_loop_ub; c1_i12++) {
    c1_e_obj->Type->data[c1_i12] = c1_jointtype_data[c1_i12];
  }

  c1_emxInit_char_T(chartInstance, &c1_st, &c1_switch_expression, 2,
                    &c1_g_emlrtRTEI);
  c1_i13 = c1_switch_expression->size[0] * c1_switch_expression->size[1];
  c1_switch_expression->size[0] = 1;
  c1_switch_expression->size[1] = c1_e_obj->Type->size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_switch_expression,
    c1_i13, &c1_g_emlrtRTEI);
  c1_c_loop_ub = c1_e_obj->Type->size[0] * c1_e_obj->Type->size[1] - 1;
  for (c1_i14 = 0; c1_i14 <= c1_c_loop_ub; c1_i14++) {
    c1_switch_expression->data[c1_i14] = c1_e_obj->Type->data[c1_i14];
  }

  c1_bool = false;
  c1_remainingDimsA = c1_switch_expression->size[1];
  if (c1_remainingDimsA != 8) {
  } else {
    c1_kstr = 1;
    do {
      c1_exitg1 = 0;
      if (c1_kstr - 1 < 8) {
        c1_b_kstr = c1_kstr - 1;
        if (c1_switch_expression->data[c1_b_kstr] != c1_cv1[c1_b_kstr]) {
          c1_exitg1 = 1;
        } else {
          c1_kstr++;
        }
      } else {
        c1_bool = true;
        c1_exitg1 = 1;
      }
    } while (c1_exitg1 == 0);
  }

  if (c1_bool) {
    c1_result = true;
  } else {
    c1_result = false;
  }

  if (c1_result) {
    c1_index = 0.0;
  } else {
    c1_b_bool = false;
    c1_b_remainingDimsA = c1_switch_expression->size[1];
    if (c1_b_remainingDimsA != 9) {
    } else {
      c1_c_kstr = 1;
      do {
        c1_exitg1 = 0;
        if (c1_c_kstr - 1 < 9) {
          c1_d_kstr = c1_c_kstr - 1;
          if (c1_switch_expression->data[c1_d_kstr] != c1_cv[c1_d_kstr]) {
            c1_exitg1 = 1;
          } else {
            c1_c_kstr++;
          }
        } else {
          c1_b_bool = true;
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);
    }

    if (c1_b_bool) {
      c1_b_result = true;
    } else {
      c1_b_result = false;
    }

    if (c1_b_result) {
      c1_index = 1.0;
    } else {
      c1_index = -1.0;
    }
  }

  c1_emxFree_char_T(chartInstance, &c1_switch_expression);
  switch ((int32_T)c1_index) {
   case 0:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i16 = 0; c1_i16 < 6; c1_i16++) {
      c1_msubspace_data[c1_i16] = c1_dv3[c1_i16];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i19 = 0; c1_i19 < 2; c1_i19++) {
      c1_poslim_data[c1_i19] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c1_i19;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 1.0;
    c1_e_obj->PositionNumber = 1.0;
    for (c1_i22 = 0; c1_i22 < 3; c1_i22++) {
      c1_e_obj->JointAxisInternal[c1_i22] = c1_dv1[c1_i22];
    }
    break;

   case 1:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i17 = 0; c1_i17 < 6; c1_i17++) {
      c1_msubspace_data[c1_i17] = c1_dv[c1_i17];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i20 = 0; c1_i20 < 2; c1_i20++) {
      c1_poslim_data[c1_i20] = -0.5 + (real_T)c1_i20;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 1.0;
    c1_e_obj->PositionNumber = 1.0;
    for (c1_i23 = 0; c1_i23 < 3; c1_i23++) {
      c1_e_obj->JointAxisInternal[c1_i23] = c1_dv1[c1_i23];
    }
    break;

   default:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i15 = 0; c1_i15 < 6; c1_i15++) {
      c1_msubspace_data[c1_i15] = 0.0;
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i18 = 0; c1_i18 < 2; c1_i18++) {
      c1_poslim_data[c1_i18] = 0.0;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 0.0;
    c1_e_obj->PositionNumber = 0.0;
    for (c1_i21 = 0; c1_i21 < 3; c1_i21++) {
      c1_e_obj->JointAxisInternal[c1_i21] = 0.0;
    }
    break;
  }

  c1_i24 = c1_e_obj->MotionSubspace->size[0] * c1_e_obj->MotionSubspace->size[1];
  c1_e_obj->MotionSubspace->size[0] = 6;
  c1_e_obj->MotionSubspace->size[1] = c1_msubspace_size[1];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st, c1_e_obj->MotionSubspace,
    c1_i24, &c1_q_emlrtRTEI);
  c1_d_loop_ub = c1_msubspace_size[0] * c1_msubspace_size[1] - 1;
  for (c1_i25 = 0; c1_i25 <= c1_d_loop_ub; c1_i25++) {
    c1_e_obj->MotionSubspace->data[c1_i25] = c1_msubspace_data[c1_i25];
  }

  c1_i26 = c1_e_obj->PositionLimitsInternal->size[0] *
    c1_e_obj->PositionLimitsInternal->size[1];
  c1_e_obj->PositionLimitsInternal->size[0] = c1_poslim_size[0];
  c1_e_obj->PositionLimitsInternal->size[1] = 2;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_e_obj->PositionLimitsInternal, c1_i26, &c1_r_emlrtRTEI);
  c1_e_loop_ub = c1_poslim_size[0] * c1_poslim_size[1] - 1;
  for (c1_i27 = 0; c1_i27 <= c1_e_loop_ub; c1_i27++) {
    c1_e_obj->PositionLimitsInternal->data[c1_i27] = c1_poslim_data[c1_i27];
  }

  c1_i28 = c1_e_obj->HomePositionInternal->size[0];
  c1_e_obj->HomePositionInternal->size[0] = c1_homepos_size[0];
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st,
    c1_e_obj->HomePositionInternal, c1_i28, &c1_s_emlrtRTEI);
  c1_f_loop_ub = c1_homepos_size[0] - 1;
  for (c1_i29 = 0; c1_i29 <= c1_f_loop_ub; c1_i29++) {
    c1_e_obj->HomePositionInternal->data[c1_i29] = c1_homepos_data[c1_i29];
  }

  for (c1_i30 = 0; c1_i30 < 16; c1_i30++) {
    c1_b_obj->JointInternal.JointToParentTransform[c1_i30] = c1_b_dv3[c1_i30];
  }

  for (c1_i31 = 0; c1_i31 < 16; c1_i31++) {
    c1_b_obj->JointInternal.ChildToJointTransform[c1_i31] = c1_dv2[c1_i31];
  }

  c1_i32 = c1_b_obj->JointInternal.MotionSubspace->size[0] *
    c1_b_obj->JointInternal.MotionSubspace->size[1];
  c1_b_obj->JointInternal.MotionSubspace->size[0] = 6;
  c1_b_obj->JointInternal.MotionSubspace->size[1] = 1;
  c1_st.site = &c1_ob_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_b_obj->JointInternal.MotionSubspace, c1_i32, &c1_t_emlrtRTEI);
  for (c1_i33 = 0; c1_i33 < 6; c1_i33++) {
    c1_b_obj->JointInternal.MotionSubspace->data[c1_i33] = c1_dv5[c1_i33];
  }

  c1_b_obj->JointInternal.InTree = true;
  c1_i34 = c1_b_obj->JointInternal.PositionLimitsInternal->size[0] *
    c1_b_obj->JointInternal.PositionLimitsInternal->size[1];
  c1_b_obj->JointInternal.PositionLimitsInternal->size[0] = 1;
  c1_b_obj->JointInternal.PositionLimitsInternal->size[1] = 2;
  c1_st.site = &c1_nb_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_b_obj->JointInternal.PositionLimitsInternal, c1_i34, &c1_u_emlrtRTEI);
  for (c1_i35 = 0; c1_i35 < 2; c1_i35++) {
    c1_b_obj->JointInternal.PositionLimitsInternal->data[c1_i35] =
      -6.28318530718 + 12.56637061436 * (real_T)c1_i35;
  }

  for (c1_i36 = 0; c1_i36 < 3; c1_i36++) {
    c1_b_obj->JointInternal.JointAxisInternal[c1_i36] = c1_dv6[c1_i36];
  }

  c1_i37 = c1_b_obj->JointInternal.HomePositionInternal->size[0];
  c1_b_obj->JointInternal.HomePositionInternal->size[0] = 1;
  c1_emxEnsureCapacity_real_T1(chartInstance, c1_sp,
    c1_b_obj->JointInternal.HomePositionInternal, c1_i37, &c1_v_emlrtRTEI);
  c1_b_obj->JointInternal.HomePositionInternal->data[0] = 0.0;
  c1_st.site = &c1_p_emlrtRSI;
  c1_b_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_st, &c1_iobj_1[0], 0.0);
  c1_st.site = &c1_q_emlrtRSI;
  c1_b_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_st, &c1_iobj_1[1], 1.0);
  c1_s.CollisionType = 3U;
  for (c1_i38 = 0; c1_i38 < 3; c1_i38++) {
    c1_s.CollisionDims[c1_i38] = 0.0;
  }

  for (c1_i39 = 0; c1_i39 < 16; c1_i39++) {
    c1_s.CollisionLocalPose[c1_i39] = c1_dv4[c1_i39];
  }

  c1_st.site = &c1_s_emlrtRSI;
  c1_collisionGeometry = c1_CollisionGeomStruct_populateCollisionGeomFromStruct
    (chartInstance, &c1_s, &c1_iobj_0[0]);
  c1_st.site = &c1_r_emlrtRSI;
  c1_CollisionSet_add(chartInstance, &c1_st, c1_b_obj->CollisionsInternal,
                      c1_collisionGeometry);
  return c1_b_obj;
}

static c1_robotics_manip_internal_RigidBody *c1_h_RigidBody_RigidBody
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_obj,
   c1_robotics_manip_internal_CollisionGeometry *c1_iobj_0,
   c1_robotics_manip_internal_CollisionSet *c1_iobj_1)
{
  static real_T c1_b_dv[16] = { 4.8965888601467475E-12, 1.0, -0.0, 0.0, -1.0,
    4.8965888601467475E-12, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0823, 0.0, 1.0
  };

  static real_T c1_b_dv1[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, -0.01, 0.0, 0.0, 1.0 };

  static char_T c1_jname[14] = { 'e', 'e', '_', 'f', 'i', 'x', 'e', 'd', '_',
    'j', 'o', 'i', 'n', 't' };

  static char_T c1_cv2[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c1_b_cv[7] = { 'e', 'e', '_', 'l', 'i', 'n', 'k' };

  static char_T c1_cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  c1_emxArray_char_T *c1_switch_expression;
  c1_rigidBodyJoint *c1_b_this;
  c1_rigidBodyJoint *c1_d_obj;
  c1_rigidBodyJoint *c1_e_obj;
  c1_robotics_manip_internal_CollisionGeometry *c1_collisionGeometry;
  c1_robotics_manip_internal_RigidBody *c1_b_obj;
  c1_robotics_manip_internal_RigidBody *c1_c_obj;
  c1_robotics_manip_internal_RigidBody *c1_this;
  c1_sH0VcwdyJUgJDvK7I0stYa c1_s;
  emlrtStack c1_st;
  real_T c1_msubspace_data[36];
  real_T c1_poslim_data[12];
  real_T c1_homepos_data[6];
  real_T c1_index;
  int32_T c1_bodyName_size[2];
  int32_T c1_jointtype_size[2];
  int32_T c1_msubspace_size[2];
  int32_T c1_poslim_size[2];
  int32_T c1_homepos_size[1];
  int32_T c1_b_kstr;
  int32_T c1_b_loop_ub;
  int32_T c1_b_remainingDimsA;
  int32_T c1_c_kstr;
  int32_T c1_c_loop_ub;
  int32_T c1_d_kstr;
  int32_T c1_d_loop_ub;
  int32_T c1_e_loop_ub;
  int32_T c1_exitg1;
  int32_T c1_f_loop_ub;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i3;
  int32_T c1_i30;
  int32_T c1_i31;
  int32_T c1_i32;
  int32_T c1_i33;
  int32_T c1_i34;
  int32_T c1_i35;
  int32_T c1_i36;
  int32_T c1_i37;
  int32_T c1_i38;
  int32_T c1_i39;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_kstr;
  int32_T c1_loop_ub;
  int32_T c1_remainingDimsA;
  char_T c1_bodyName_data[256];
  char_T c1_jointtype_data[20];
  char_T c1_jointname_data[14];
  boolean_T c1_b_bool;
  boolean_T c1_b_result;
  boolean_T c1_bool;
  boolean_T c1_result;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_obj = c1_obj;
  c1_st.site = &c1_n_emlrtRSI;
  c1_c_obj = c1_b_obj;
  c1_b_obj = c1_c_obj;
  c1_this = c1_b_obj;
  c1_b_obj = c1_this;
  c1_bodyName_size[0] = 1;
  c1_bodyName_size[1] = 7;
  for (c1_i = 0; c1_i < 7; c1_i++) {
    c1_bodyName_data[c1_i] = c1_b_cv[c1_i];
  }

  c1_i1 = c1_b_obj->NameInternal->size[0] * c1_b_obj->NameInternal->size[1];
  c1_b_obj->NameInternal->size[0] = 1;
  c1_b_obj->NameInternal->size[1] = c1_bodyName_size[1];
  c1_st.site = &c1_mb_emlrtRSI;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_b_obj->NameInternal,
    c1_i1, &c1_b_emlrtRTEI);
  c1_loop_ub = c1_bodyName_size[0] * c1_bodyName_size[1] - 1;
  for (c1_i2 = 0; c1_i2 <= c1_loop_ub; c1_i2++) {
    c1_b_obj->NameInternal->data[c1_i2] = c1_bodyName_data[c1_i2];
  }

  c1_b_obj->ParentIndex = 8.0;
  for (c1_i3 = 0; c1_i3 < 10; c1_i3++) {
    c1_b_obj->ChildrenIndices[c1_i3] = 0.0;
  }

  c1_b_obj->MassInternal = 0.0;
  for (c1_i4 = 0; c1_i4 < 3; c1_i4++) {
    c1_b_obj->CenterOfMassInternal[c1_i4] = 0.0;
  }

  for (c1_i5 = 0; c1_i5 < 9; c1_i5++) {
    c1_b_obj->InertiaInternal[c1_i5] = 0.0;
  }

  for (c1_i6 = 0; c1_i6 < 36; c1_i6++) {
    c1_b_obj->SpatialInertia[c1_i6] = 0.0;
  }

  c1_st.site = &c1_o_emlrtRSI;
  c1_d_obj = &c1_b_obj->JointInternal;
  c1_e_obj = c1_d_obj;
  for (c1_i7 = 0; c1_i7 < 14; c1_i7++) {
    c1_jointname_data[c1_i7] = c1_jname[c1_i7];
  }

  c1_b_this = c1_e_obj;
  c1_e_obj = c1_b_this;
  c1_i8 = c1_e_obj->NameInternal->size[0] * c1_e_obj->NameInternal->size[1];
  c1_e_obj->NameInternal->size[0] = 1;
  c1_e_obj->NameInternal->size[1] = 14;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->NameInternal,
    c1_i8, &c1_d_emlrtRTEI);
  for (c1_i9 = 0; c1_i9 < 14; c1_i9++) {
    c1_e_obj->NameInternal->data[c1_i9] = c1_jointname_data[c1_i9];
  }

  c1_jointtype_size[0] = 1;
  c1_jointtype_size[1] = 5;
  for (c1_i10 = 0; c1_i10 < 5; c1_i10++) {
    c1_jointtype_data[c1_i10] = c1_cv1[c1_i10];
  }

  c1_i11 = c1_e_obj->Type->size[0] * c1_e_obj->Type->size[1];
  c1_e_obj->Type->size[0] = 1;
  c1_e_obj->Type->size[1] = c1_jointtype_size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->Type, c1_i11,
    &c1_f_emlrtRTEI);
  c1_b_loop_ub = c1_jointtype_size[0] * c1_jointtype_size[1] - 1;
  for (c1_i12 = 0; c1_i12 <= c1_b_loop_ub; c1_i12++) {
    c1_e_obj->Type->data[c1_i12] = c1_jointtype_data[c1_i12];
  }

  c1_emxInit_char_T(chartInstance, &c1_st, &c1_switch_expression, 2,
                    &c1_g_emlrtRTEI);
  c1_i13 = c1_switch_expression->size[0] * c1_switch_expression->size[1];
  c1_switch_expression->size[0] = 1;
  c1_switch_expression->size[1] = c1_e_obj->Type->size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_switch_expression,
    c1_i13, &c1_g_emlrtRTEI);
  c1_c_loop_ub = c1_e_obj->Type->size[0] * c1_e_obj->Type->size[1] - 1;
  for (c1_i14 = 0; c1_i14 <= c1_c_loop_ub; c1_i14++) {
    c1_switch_expression->data[c1_i14] = c1_e_obj->Type->data[c1_i14];
  }

  c1_bool = false;
  c1_remainingDimsA = c1_switch_expression->size[1];
  if (c1_remainingDimsA != 8) {
  } else {
    c1_kstr = 1;
    do {
      c1_exitg1 = 0;
      if (c1_kstr - 1 < 8) {
        c1_b_kstr = c1_kstr - 1;
        if (c1_switch_expression->data[c1_b_kstr] != c1_cv2[c1_b_kstr]) {
          c1_exitg1 = 1;
        } else {
          c1_kstr++;
        }
      } else {
        c1_bool = true;
        c1_exitg1 = 1;
      }
    } while (c1_exitg1 == 0);
  }

  if (c1_bool) {
    c1_result = true;
  } else {
    c1_result = false;
  }

  if (c1_result) {
    c1_index = 0.0;
  } else {
    c1_b_bool = false;
    c1_b_remainingDimsA = c1_switch_expression->size[1];
    if (c1_b_remainingDimsA != 9) {
    } else {
      c1_c_kstr = 1;
      do {
        c1_exitg1 = 0;
        if (c1_c_kstr - 1 < 9) {
          c1_d_kstr = c1_c_kstr - 1;
          if (c1_switch_expression->data[c1_d_kstr] != c1_cv[c1_d_kstr]) {
            c1_exitg1 = 1;
          } else {
            c1_c_kstr++;
          }
        } else {
          c1_b_bool = true;
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);
    }

    if (c1_b_bool) {
      c1_b_result = true;
    } else {
      c1_b_result = false;
    }

    if (c1_b_result) {
      c1_index = 1.0;
    } else {
      c1_index = -1.0;
    }
  }

  c1_emxFree_char_T(chartInstance, &c1_switch_expression);
  switch ((int32_T)c1_index) {
   case 0:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i16 = 0; c1_i16 < 6; c1_i16++) {
      c1_msubspace_data[c1_i16] = c1_dv3[c1_i16];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i19 = 0; c1_i19 < 2; c1_i19++) {
      c1_poslim_data[c1_i19] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c1_i19;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 1.0;
    c1_e_obj->PositionNumber = 1.0;
    for (c1_i22 = 0; c1_i22 < 3; c1_i22++) {
      c1_e_obj->JointAxisInternal[c1_i22] = c1_dv1[c1_i22];
    }
    break;

   case 1:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i17 = 0; c1_i17 < 6; c1_i17++) {
      c1_msubspace_data[c1_i17] = c1_dv[c1_i17];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i20 = 0; c1_i20 < 2; c1_i20++) {
      c1_poslim_data[c1_i20] = -0.5 + (real_T)c1_i20;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 1.0;
    c1_e_obj->PositionNumber = 1.0;
    for (c1_i23 = 0; c1_i23 < 3; c1_i23++) {
      c1_e_obj->JointAxisInternal[c1_i23] = c1_dv1[c1_i23];
    }
    break;

   default:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i15 = 0; c1_i15 < 6; c1_i15++) {
      c1_msubspace_data[c1_i15] = 0.0;
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i18 = 0; c1_i18 < 2; c1_i18++) {
      c1_poslim_data[c1_i18] = 0.0;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 0.0;
    c1_e_obj->PositionNumber = 0.0;
    for (c1_i21 = 0; c1_i21 < 3; c1_i21++) {
      c1_e_obj->JointAxisInternal[c1_i21] = 0.0;
    }
    break;
  }

  c1_i24 = c1_e_obj->MotionSubspace->size[0] * c1_e_obj->MotionSubspace->size[1];
  c1_e_obj->MotionSubspace->size[0] = 6;
  c1_e_obj->MotionSubspace->size[1] = c1_msubspace_size[1];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st, c1_e_obj->MotionSubspace,
    c1_i24, &c1_q_emlrtRTEI);
  c1_d_loop_ub = c1_msubspace_size[0] * c1_msubspace_size[1] - 1;
  for (c1_i25 = 0; c1_i25 <= c1_d_loop_ub; c1_i25++) {
    c1_e_obj->MotionSubspace->data[c1_i25] = c1_msubspace_data[c1_i25];
  }

  c1_i26 = c1_e_obj->PositionLimitsInternal->size[0] *
    c1_e_obj->PositionLimitsInternal->size[1];
  c1_e_obj->PositionLimitsInternal->size[0] = c1_poslim_size[0];
  c1_e_obj->PositionLimitsInternal->size[1] = 2;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_e_obj->PositionLimitsInternal, c1_i26, &c1_r_emlrtRTEI);
  c1_e_loop_ub = c1_poslim_size[0] * c1_poslim_size[1] - 1;
  for (c1_i27 = 0; c1_i27 <= c1_e_loop_ub; c1_i27++) {
    c1_e_obj->PositionLimitsInternal->data[c1_i27] = c1_poslim_data[c1_i27];
  }

  c1_i28 = c1_e_obj->HomePositionInternal->size[0];
  c1_e_obj->HomePositionInternal->size[0] = c1_homepos_size[0];
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st,
    c1_e_obj->HomePositionInternal, c1_i28, &c1_s_emlrtRTEI);
  c1_f_loop_ub = c1_homepos_size[0] - 1;
  for (c1_i29 = 0; c1_i29 <= c1_f_loop_ub; c1_i29++) {
    c1_e_obj->HomePositionInternal->data[c1_i29] = c1_homepos_data[c1_i29];
  }

  for (c1_i30 = 0; c1_i30 < 16; c1_i30++) {
    c1_b_obj->JointInternal.JointToParentTransform[c1_i30] = c1_b_dv[c1_i30];
  }

  for (c1_i31 = 0; c1_i31 < 16; c1_i31++) {
    c1_b_obj->JointInternal.ChildToJointTransform[c1_i31] = c1_dv2[c1_i31];
  }

  c1_i32 = c1_b_obj->JointInternal.MotionSubspace->size[0] *
    c1_b_obj->JointInternal.MotionSubspace->size[1];
  c1_b_obj->JointInternal.MotionSubspace->size[0] = 6;
  c1_b_obj->JointInternal.MotionSubspace->size[1] = 1;
  c1_st.site = &c1_ob_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_b_obj->JointInternal.MotionSubspace, c1_i32, &c1_t_emlrtRTEI);
  for (c1_i33 = 0; c1_i33 < 6; c1_i33++) {
    c1_b_obj->JointInternal.MotionSubspace->data[c1_i33] = 0.0;
  }

  c1_b_obj->JointInternal.InTree = true;
  c1_i34 = c1_b_obj->JointInternal.PositionLimitsInternal->size[0] *
    c1_b_obj->JointInternal.PositionLimitsInternal->size[1];
  c1_b_obj->JointInternal.PositionLimitsInternal->size[0] = 1;
  c1_b_obj->JointInternal.PositionLimitsInternal->size[1] = 2;
  c1_st.site = &c1_nb_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_b_obj->JointInternal.PositionLimitsInternal, c1_i34, &c1_u_emlrtRTEI);
  for (c1_i35 = 0; c1_i35 < 2; c1_i35++) {
    c1_b_obj->JointInternal.PositionLimitsInternal->data[c1_i35] = 0.0;
  }

  for (c1_i36 = 0; c1_i36 < 3; c1_i36++) {
    c1_b_obj->JointInternal.JointAxisInternal[c1_i36] = 0.0;
  }

  c1_i37 = c1_b_obj->JointInternal.HomePositionInternal->size[0];
  c1_b_obj->JointInternal.HomePositionInternal->size[0] = 1;
  c1_emxEnsureCapacity_real_T1(chartInstance, c1_sp,
    c1_b_obj->JointInternal.HomePositionInternal, c1_i37, &c1_v_emlrtRTEI);
  c1_b_obj->JointInternal.HomePositionInternal->data[0] = 0.0;
  c1_st.site = &c1_p_emlrtRSI;
  c1_b_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_st, &c1_iobj_1[0], 0.0);
  c1_st.site = &c1_q_emlrtRSI;
  c1_b_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_st, &c1_iobj_1[1], 1.0);
  c1_s.CollisionType = 0U;
  for (c1_i38 = 0; c1_i38 < 3; c1_i38++) {
    c1_s.CollisionDims[c1_i38] = 0.01;
  }

  for (c1_i39 = 0; c1_i39 < 16; c1_i39++) {
    c1_s.CollisionLocalPose[c1_i39] = c1_b_dv1[c1_i39];
  }

  c1_st.site = &c1_s_emlrtRSI;
  c1_collisionGeometry = c1_CollisionGeomStruct_populateCollisionGeomFromStruct
    (chartInstance, &c1_s, &c1_iobj_0[0]);
  c1_st.site = &c1_r_emlrtRSI;
  c1_CollisionSet_add(chartInstance, &c1_st, c1_b_obj->CollisionsInternal,
                      c1_collisionGeometry);
  return c1_b_obj;
}

static c1_robotics_manip_internal_RigidBody *c1_i_RigidBody_RigidBody
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_obj,
   c1_robotics_manip_internal_CollisionSet *c1_iobj_0)
{
  static real_T c1_b_dv[16] = { 1.0, 0.0, -0.0, 0.0, -0.0,
    4.8965888601467475E-12, -1.0, 0.0, 0.0, 1.0, 4.8965888601467475E-12, 0.0,
    0.0, 0.0823, 0.0, 1.0 };

  static char_T c1_jname[30] = { 'w', 'r', 'i', 's', 't', '_', '3', '_', 'l',
    'i', 'n', 'k', '-', 't', 'o', 'o', 'l', '0', '_', 'f', 'i', 'x', 'e', 'd',
    '_', 'j', 'o', 'i', 'n', 't' };

  static char_T c1_cv2[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static char_T c1_b_cv[5] = { 't', 'o', 'o', 'l', '0' };

  static char_T c1_cv1[5] = { 'f', 'i', 'x', 'e', 'd' };

  c1_emxArray_char_T *c1_switch_expression;
  c1_rigidBodyJoint *c1_b_this;
  c1_rigidBodyJoint *c1_d_obj;
  c1_rigidBodyJoint *c1_e_obj;
  c1_robotics_manip_internal_RigidBody *c1_b_obj;
  c1_robotics_manip_internal_RigidBody *c1_c_obj;
  c1_robotics_manip_internal_RigidBody *c1_this;
  emlrtStack c1_st;
  real_T c1_msubspace_data[36];
  real_T c1_poslim_data[12];
  real_T c1_homepos_data[6];
  real_T c1_index;
  int32_T c1_bodyName_size[2];
  int32_T c1_jointtype_size[2];
  int32_T c1_msubspace_size[2];
  int32_T c1_poslim_size[2];
  int32_T c1_homepos_size[1];
  int32_T c1_b_kstr;
  int32_T c1_b_loop_ub;
  int32_T c1_b_remainingDimsA;
  int32_T c1_c_kstr;
  int32_T c1_c_loop_ub;
  int32_T c1_d_kstr;
  int32_T c1_d_loop_ub;
  int32_T c1_e_loop_ub;
  int32_T c1_exitg1;
  int32_T c1_f_loop_ub;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i3;
  int32_T c1_i30;
  int32_T c1_i31;
  int32_T c1_i32;
  int32_T c1_i33;
  int32_T c1_i34;
  int32_T c1_i35;
  int32_T c1_i36;
  int32_T c1_i37;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_kstr;
  int32_T c1_loop_ub;
  int32_T c1_remainingDimsA;
  char_T c1_bodyName_data[256];
  char_T c1_jointname_data[30];
  char_T c1_jointtype_data[20];
  boolean_T c1_b_bool;
  boolean_T c1_b_result;
  boolean_T c1_bool;
  boolean_T c1_result;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_obj = c1_obj;
  c1_st.site = &c1_n_emlrtRSI;
  c1_c_obj = c1_b_obj;
  c1_b_obj = c1_c_obj;
  c1_this = c1_b_obj;
  c1_b_obj = c1_this;
  c1_bodyName_size[0] = 1;
  c1_bodyName_size[1] = 5;
  for (c1_i = 0; c1_i < 5; c1_i++) {
    c1_bodyName_data[c1_i] = c1_b_cv[c1_i];
  }

  c1_i1 = c1_b_obj->NameInternal->size[0] * c1_b_obj->NameInternal->size[1];
  c1_b_obj->NameInternal->size[0] = 1;
  c1_b_obj->NameInternal->size[1] = c1_bodyName_size[1];
  c1_st.site = &c1_mb_emlrtRSI;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_b_obj->NameInternal,
    c1_i1, &c1_b_emlrtRTEI);
  c1_loop_ub = c1_bodyName_size[0] * c1_bodyName_size[1] - 1;
  for (c1_i2 = 0; c1_i2 <= c1_loop_ub; c1_i2++) {
    c1_b_obj->NameInternal->data[c1_i2] = c1_bodyName_data[c1_i2];
  }

  c1_b_obj->ParentIndex = 8.0;
  for (c1_i3 = 0; c1_i3 < 10; c1_i3++) {
    c1_b_obj->ChildrenIndices[c1_i3] = 0.0;
  }

  c1_b_obj->MassInternal = 0.0;
  for (c1_i4 = 0; c1_i4 < 3; c1_i4++) {
    c1_b_obj->CenterOfMassInternal[c1_i4] = 0.0;
  }

  for (c1_i5 = 0; c1_i5 < 9; c1_i5++) {
    c1_b_obj->InertiaInternal[c1_i5] = 0.0;
  }

  for (c1_i6 = 0; c1_i6 < 36; c1_i6++) {
    c1_b_obj->SpatialInertia[c1_i6] = 0.0;
  }

  c1_st.site = &c1_o_emlrtRSI;
  c1_d_obj = &c1_b_obj->JointInternal;
  c1_e_obj = c1_d_obj;
  for (c1_i7 = 0; c1_i7 < 30; c1_i7++) {
    c1_jointname_data[c1_i7] = c1_jname[c1_i7];
  }

  c1_b_this = c1_e_obj;
  c1_e_obj = c1_b_this;
  c1_i8 = c1_e_obj->NameInternal->size[0] * c1_e_obj->NameInternal->size[1];
  c1_e_obj->NameInternal->size[0] = 1;
  c1_e_obj->NameInternal->size[1] = 30;
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->NameInternal,
    c1_i8, &c1_d_emlrtRTEI);
  for (c1_i9 = 0; c1_i9 < 30; c1_i9++) {
    c1_e_obj->NameInternal->data[c1_i9] = c1_jointname_data[c1_i9];
  }

  c1_jointtype_size[0] = 1;
  c1_jointtype_size[1] = 5;
  for (c1_i10 = 0; c1_i10 < 5; c1_i10++) {
    c1_jointtype_data[c1_i10] = c1_cv1[c1_i10];
  }

  c1_i11 = c1_e_obj->Type->size[0] * c1_e_obj->Type->size[1];
  c1_e_obj->Type->size[0] = 1;
  c1_e_obj->Type->size[1] = c1_jointtype_size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_e_obj->Type, c1_i11,
    &c1_f_emlrtRTEI);
  c1_b_loop_ub = c1_jointtype_size[0] * c1_jointtype_size[1] - 1;
  for (c1_i12 = 0; c1_i12 <= c1_b_loop_ub; c1_i12++) {
    c1_e_obj->Type->data[c1_i12] = c1_jointtype_data[c1_i12];
  }

  c1_emxInit_char_T(chartInstance, &c1_st, &c1_switch_expression, 2,
                    &c1_g_emlrtRTEI);
  c1_i13 = c1_switch_expression->size[0] * c1_switch_expression->size[1];
  c1_switch_expression->size[0] = 1;
  c1_switch_expression->size[1] = c1_e_obj->Type->size[1];
  c1_emxEnsureCapacity_char_T(chartInstance, &c1_st, c1_switch_expression,
    c1_i13, &c1_g_emlrtRTEI);
  c1_c_loop_ub = c1_e_obj->Type->size[0] * c1_e_obj->Type->size[1] - 1;
  for (c1_i14 = 0; c1_i14 <= c1_c_loop_ub; c1_i14++) {
    c1_switch_expression->data[c1_i14] = c1_e_obj->Type->data[c1_i14];
  }

  c1_bool = false;
  c1_remainingDimsA = c1_switch_expression->size[1];
  if (c1_remainingDimsA != 8) {
  } else {
    c1_kstr = 1;
    do {
      c1_exitg1 = 0;
      if (c1_kstr - 1 < 8) {
        c1_b_kstr = c1_kstr - 1;
        if (c1_switch_expression->data[c1_b_kstr] != c1_cv2[c1_b_kstr]) {
          c1_exitg1 = 1;
        } else {
          c1_kstr++;
        }
      } else {
        c1_bool = true;
        c1_exitg1 = 1;
      }
    } while (c1_exitg1 == 0);
  }

  if (c1_bool) {
    c1_result = true;
  } else {
    c1_result = false;
  }

  if (c1_result) {
    c1_index = 0.0;
  } else {
    c1_b_bool = false;
    c1_b_remainingDimsA = c1_switch_expression->size[1];
    if (c1_b_remainingDimsA != 9) {
    } else {
      c1_c_kstr = 1;
      do {
        c1_exitg1 = 0;
        if (c1_c_kstr - 1 < 9) {
          c1_d_kstr = c1_c_kstr - 1;
          if (c1_switch_expression->data[c1_d_kstr] != c1_cv[c1_d_kstr]) {
            c1_exitg1 = 1;
          } else {
            c1_c_kstr++;
          }
        } else {
          c1_b_bool = true;
          c1_exitg1 = 1;
        }
      } while (c1_exitg1 == 0);
    }

    if (c1_b_bool) {
      c1_b_result = true;
    } else {
      c1_b_result = false;
    }

    if (c1_b_result) {
      c1_index = 1.0;
    } else {
      c1_index = -1.0;
    }
  }

  c1_emxFree_char_T(chartInstance, &c1_switch_expression);
  switch ((int32_T)c1_index) {
   case 0:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i16 = 0; c1_i16 < 6; c1_i16++) {
      c1_msubspace_data[c1_i16] = c1_dv3[c1_i16];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i19 = 0; c1_i19 < 2; c1_i19++) {
      c1_poslim_data[c1_i19] = -3.1415926535897931 + 6.2831853071795862 *
        (real_T)c1_i19;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 1.0;
    c1_e_obj->PositionNumber = 1.0;
    for (c1_i22 = 0; c1_i22 < 3; c1_i22++) {
      c1_e_obj->JointAxisInternal[c1_i22] = c1_dv1[c1_i22];
    }
    break;

   case 1:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i17 = 0; c1_i17 < 6; c1_i17++) {
      c1_msubspace_data[c1_i17] = c1_dv[c1_i17];
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i20 = 0; c1_i20 < 2; c1_i20++) {
      c1_poslim_data[c1_i20] = -0.5 + (real_T)c1_i20;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 1.0;
    c1_e_obj->PositionNumber = 1.0;
    for (c1_i23 = 0; c1_i23 < 3; c1_i23++) {
      c1_e_obj->JointAxisInternal[c1_i23] = c1_dv1[c1_i23];
    }
    break;

   default:
    c1_msubspace_size[0] = 6;
    c1_msubspace_size[1] = 1;
    for (c1_i15 = 0; c1_i15 < 6; c1_i15++) {
      c1_msubspace_data[c1_i15] = 0.0;
    }

    c1_poslim_size[0] = 1;
    c1_poslim_size[1] = 2;
    for (c1_i18 = 0; c1_i18 < 2; c1_i18++) {
      c1_poslim_data[c1_i18] = 0.0;
    }

    c1_homepos_size[0] = 1;
    c1_homepos_data[0] = 0.0;
    c1_e_obj->VelocityNumber = 0.0;
    c1_e_obj->PositionNumber = 0.0;
    for (c1_i21 = 0; c1_i21 < 3; c1_i21++) {
      c1_e_obj->JointAxisInternal[c1_i21] = 0.0;
    }
    break;
  }

  c1_i24 = c1_e_obj->MotionSubspace->size[0] * c1_e_obj->MotionSubspace->size[1];
  c1_e_obj->MotionSubspace->size[0] = 6;
  c1_e_obj->MotionSubspace->size[1] = c1_msubspace_size[1];
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st, c1_e_obj->MotionSubspace,
    c1_i24, &c1_q_emlrtRTEI);
  c1_d_loop_ub = c1_msubspace_size[0] * c1_msubspace_size[1] - 1;
  for (c1_i25 = 0; c1_i25 <= c1_d_loop_ub; c1_i25++) {
    c1_e_obj->MotionSubspace->data[c1_i25] = c1_msubspace_data[c1_i25];
  }

  c1_i26 = c1_e_obj->PositionLimitsInternal->size[0] *
    c1_e_obj->PositionLimitsInternal->size[1];
  c1_e_obj->PositionLimitsInternal->size[0] = c1_poslim_size[0];
  c1_e_obj->PositionLimitsInternal->size[1] = 2;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_e_obj->PositionLimitsInternal, c1_i26, &c1_r_emlrtRTEI);
  c1_e_loop_ub = c1_poslim_size[0] * c1_poslim_size[1] - 1;
  for (c1_i27 = 0; c1_i27 <= c1_e_loop_ub; c1_i27++) {
    c1_e_obj->PositionLimitsInternal->data[c1_i27] = c1_poslim_data[c1_i27];
  }

  c1_i28 = c1_e_obj->HomePositionInternal->size[0];
  c1_e_obj->HomePositionInternal->size[0] = c1_homepos_size[0];
  c1_emxEnsureCapacity_real_T1(chartInstance, &c1_st,
    c1_e_obj->HomePositionInternal, c1_i28, &c1_s_emlrtRTEI);
  c1_f_loop_ub = c1_homepos_size[0] - 1;
  for (c1_i29 = 0; c1_i29 <= c1_f_loop_ub; c1_i29++) {
    c1_e_obj->HomePositionInternal->data[c1_i29] = c1_homepos_data[c1_i29];
  }

  for (c1_i30 = 0; c1_i30 < 16; c1_i30++) {
    c1_b_obj->JointInternal.JointToParentTransform[c1_i30] = c1_b_dv[c1_i30];
  }

  for (c1_i31 = 0; c1_i31 < 16; c1_i31++) {
    c1_b_obj->JointInternal.ChildToJointTransform[c1_i31] = c1_dv2[c1_i31];
  }

  c1_i32 = c1_b_obj->JointInternal.MotionSubspace->size[0] *
    c1_b_obj->JointInternal.MotionSubspace->size[1];
  c1_b_obj->JointInternal.MotionSubspace->size[0] = 6;
  c1_b_obj->JointInternal.MotionSubspace->size[1] = 1;
  c1_st.site = &c1_ob_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_b_obj->JointInternal.MotionSubspace, c1_i32, &c1_t_emlrtRTEI);
  for (c1_i33 = 0; c1_i33 < 6; c1_i33++) {
    c1_b_obj->JointInternal.MotionSubspace->data[c1_i33] = 0.0;
  }

  c1_b_obj->JointInternal.InTree = true;
  c1_i34 = c1_b_obj->JointInternal.PositionLimitsInternal->size[0] *
    c1_b_obj->JointInternal.PositionLimitsInternal->size[1];
  c1_b_obj->JointInternal.PositionLimitsInternal->size[0] = 1;
  c1_b_obj->JointInternal.PositionLimitsInternal->size[1] = 2;
  c1_st.site = &c1_nb_emlrtRSI;
  c1_emxEnsureCapacity_real_T(chartInstance, &c1_st,
    c1_b_obj->JointInternal.PositionLimitsInternal, c1_i34, &c1_u_emlrtRTEI);
  for (c1_i35 = 0; c1_i35 < 2; c1_i35++) {
    c1_b_obj->JointInternal.PositionLimitsInternal->data[c1_i35] = 0.0;
  }

  for (c1_i36 = 0; c1_i36 < 3; c1_i36++) {
    c1_b_obj->JointInternal.JointAxisInternal[c1_i36] = 0.0;
  }

  c1_i37 = c1_b_obj->JointInternal.HomePositionInternal->size[0];
  c1_b_obj->JointInternal.HomePositionInternal->size[0] = 1;
  c1_emxEnsureCapacity_real_T1(chartInstance, c1_sp,
    c1_b_obj->JointInternal.HomePositionInternal, c1_i37, &c1_v_emlrtRTEI);
  c1_b_obj->JointInternal.HomePositionInternal->data[0] = 0.0;
  c1_st.site = &c1_p_emlrtRSI;
  c1_b_obj->CollisionsInternal = c1_CollisionSet_CollisionSet(chartInstance,
    &c1_st, c1_iobj_0, 0.0);
  return c1_b_obj;
}

static uint8_T c1_emlrt_marshallIn(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_robot_system_toolbox, const
  char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  uint8_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_active_c1_robot_system_toolbox), &c1_thisId);
  sf_mex_destroy(&c1_b_is_active_c1_robot_system_toolbox);
  return c1_y;
}

static uint8_T c1_b_emlrt_marshallIn(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_b_u;
  uint8_T c1_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_b_u;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_slStringInitializeDynamicBuffers
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *c1_chart_data_browse_helper
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance)
{
  (void)chartInstance;
  return NULL;
}

static void c1_emxInitStruct_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBodyTree *c1_pStruct, const
   emlrtRTEInfo *c1_srcLocation)
{
  c1_b_emxInitStruct_robotics_manip_in(chartInstance, c1_sp, &c1_pStruct->Base,
    c1_srcLocation);
  c1_emxInitMatrix_robotics_manip_in(chartInstance, c1_sp, c1_pStruct->_pobj1,
    c1_srcLocation);
  c1_b_emxInitMatrix_robotics_manip_in(chartInstance, c1_sp, c1_pStruct->_pobj2,
    c1_srcLocation);
}

static void c1_b_emxInitStruct_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody *c1_pStruct, const emlrtRTEInfo *
   c1_srcLocation)
{
  c1_emxInit_char_T(chartInstance, c1_sp, &c1_pStruct->NameInternal, 2,
                    c1_srcLocation);
  c1_emxInitStruct_rigidBodyJoint(chartInstance, c1_sp,
    &c1_pStruct->JointInternal, c1_srcLocation);
}

static void c1_emxInit_char_T(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_char_T **c1_pEmxArray,
  int32_T c1_numDimensions, const emlrtRTEInfo *c1_srcLocation)
{
  c1_emxArray_char_T *c1_emxArray;
  int32_T c1_i;
  (void)chartInstance;
  *c1_pEmxArray = (c1_emxArray_char_T *)emlrtMallocMex(sizeof(c1_emxArray_char_T));
  if ((void *)*c1_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
  }

  c1_emxArray = *c1_pEmxArray;
  c1_emxArray->data = (char_T *)NULL;
  c1_emxArray->numDimensions = c1_numDimensions;
  c1_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c1_numDimensions);
  if ((void *)c1_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
  }

  c1_emxArray->allocatedSize = 0;
  c1_emxArray->canFreeData = true;
  for (c1_i = 0; c1_i < c1_numDimensions; c1_i++) {
    c1_emxArray->size[c1_i] = 0;
  }
}

static void c1_emxInitStruct_rigidBodyJoint
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_rigidBodyJoint *c1_pStruct, const emlrtRTEInfo *c1_srcLocation)
{
  c1_emxInit_char_T(chartInstance, c1_sp, &c1_pStruct->Type, 2, c1_srcLocation);
  c1_emxInit_real_T(chartInstance, c1_sp, &c1_pStruct->MotionSubspace, 2,
                    c1_srcLocation);
  c1_emxInit_char_T(chartInstance, c1_sp, &c1_pStruct->NameInternal, 2,
                    c1_srcLocation);
  c1_emxInit_real_T(chartInstance, c1_sp, &c1_pStruct->PositionLimitsInternal, 2,
                    c1_srcLocation);
  c1_emxInit_real_T1(chartInstance, c1_sp, &c1_pStruct->HomePositionInternal, 1,
                     c1_srcLocation);
}

static void c1_emxInit_real_T(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T **c1_pEmxArray,
  int32_T c1_numDimensions, const emlrtRTEInfo *c1_srcLocation)
{
  c1_emxArray_real_T *c1_emxArray;
  int32_T c1_i;
  (void)chartInstance;
  *c1_pEmxArray = (c1_emxArray_real_T *)emlrtMallocMex(sizeof(c1_emxArray_real_T));
  if ((void *)*c1_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
  }

  c1_emxArray = *c1_pEmxArray;
  c1_emxArray->data = (real_T *)NULL;
  c1_emxArray->numDimensions = c1_numDimensions;
  c1_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c1_numDimensions);
  if ((void *)c1_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
  }

  c1_emxArray->allocatedSize = 0;
  c1_emxArray->canFreeData = true;
  for (c1_i = 0; c1_i < c1_numDimensions; c1_i++) {
    c1_emxArray->size[c1_i] = 0;
  }
}

static void c1_emxInit_real_T1(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T **c1_pEmxArray,
  int32_T c1_numDimensions, const emlrtRTEInfo *c1_srcLocation)
{
  c1_emxArray_real_T *c1_emxArray;
  int32_T c1_i;
  (void)chartInstance;
  *c1_pEmxArray = (c1_emxArray_real_T *)emlrtMallocMex(sizeof(c1_emxArray_real_T));
  if ((void *)*c1_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
  }

  c1_emxArray = *c1_pEmxArray;
  c1_emxArray->data = (real_T *)NULL;
  c1_emxArray->numDimensions = c1_numDimensions;
  c1_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c1_numDimensions);
  if ((void *)c1_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
  }

  c1_emxArray->allocatedSize = 0;
  c1_emxArray->canFreeData = true;
  for (c1_i = 0; c1_i < c1_numDimensions; c1_i++) {
    c1_emxArray->size[c1_i] = 0;
  }
}

static void c1_emxInitMatrix_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_CollisionSet c1_pMatrix[19], const
   emlrtRTEInfo *c1_srcLocation)
{
  int32_T c1_i;
  for (c1_i = 0; c1_i < 19; c1_i++) {
    c1_c_emxInitStruct_robotics_manip_in(chartInstance, c1_sp, &c1_pMatrix[c1_i],
      c1_srcLocation);
  }
}

static void c1_c_emxInitStruct_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_CollisionSet *c1_pStruct, const
   emlrtRTEInfo *c1_srcLocation)
{
  c1_emxInit_unnamed_struct(chartInstance, c1_sp,
    &c1_pStruct->CollisionGeometries, 2, c1_srcLocation);
}

static void c1_emxInit_unnamed_struct(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_unnamed_struct
  **c1_pEmxArray, int32_T c1_numDimensions, const emlrtRTEInfo *c1_srcLocation)
{
  c1_emxArray_unnamed_struct *c1_emxArray;
  int32_T c1_i;
  (void)chartInstance;
  *c1_pEmxArray = (c1_emxArray_unnamed_struct *)emlrtMallocMex(sizeof
    (c1_emxArray_unnamed_struct));
  if ((void *)*c1_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
  }

  c1_emxArray = *c1_pEmxArray;
  c1_emxArray->data = (c1_robotics_manip_internal_CollisionGeometry **)NULL;
  c1_emxArray->numDimensions = c1_numDimensions;
  c1_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c1_numDimensions);
  if ((void *)c1_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
  }

  c1_emxArray->allocatedSize = 0;
  c1_emxArray->canFreeData = true;
  for (c1_i = 0; c1_i < c1_numDimensions; c1_i++) {
    c1_emxArray->size[c1_i] = 0;
  }
}

static void c1_b_emxInitMatrix_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_robotics_manip_internal_RigidBody c1_pMatrix[10], const
   emlrtRTEInfo *c1_srcLocation)
{
  int32_T c1_i;
  for (c1_i = 0; c1_i < 10; c1_i++) {
    c1_b_emxInitStruct_robotics_manip_in(chartInstance, c1_sp, &c1_pMatrix[c1_i],
      c1_srcLocation);
  }
}

static void c1_emxFree_char_T(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, c1_emxArray_char_T **c1_pEmxArray)
{
  (void)chartInstance;
  if (*c1_pEmxArray != (c1_emxArray_char_T *)NULL) {
    if (((*c1_pEmxArray)->data != (char_T *)NULL) && (*c1_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c1_pEmxArray)->data);
    }

    emlrtFreeMex((*c1_pEmxArray)->size);
    emlrtFreeMex(*c1_pEmxArray);
    *c1_pEmxArray = (c1_emxArray_char_T *)NULL;
  }
}

static void c1_emxFreeStruct_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance,
   c1_robotics_manip_internal_RigidBody *c1_pStruct)
{
  c1_emxFree_char_T(chartInstance, &c1_pStruct->NameInternal);
  c1_emxFreeStruct_rigidBodyJoint(chartInstance, &c1_pStruct->JointInternal);
}

static void c1_emxFreeStruct_rigidBodyJoint
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, c1_rigidBodyJoint
   *c1_pStruct)
{
  c1_emxFree_char_T(chartInstance, &c1_pStruct->Type);
  c1_emxFree_real_T(chartInstance, &c1_pStruct->MotionSubspace);
  c1_emxFree_char_T(chartInstance, &c1_pStruct->NameInternal);
  c1_emxFree_real_T(chartInstance, &c1_pStruct->PositionLimitsInternal);
  c1_emxFree_real_T(chartInstance, &c1_pStruct->HomePositionInternal);
}

static void c1_emxFree_real_T(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, c1_emxArray_real_T **c1_pEmxArray)
{
  (void)chartInstance;
  if (*c1_pEmxArray != (c1_emxArray_real_T *)NULL) {
    if (((*c1_pEmxArray)->data != (real_T *)NULL) && (*c1_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c1_pEmxArray)->data);
    }

    emlrtFreeMex((*c1_pEmxArray)->size);
    emlrtFreeMex(*c1_pEmxArray);
    *c1_pEmxArray = (c1_emxArray_real_T *)NULL;
  }
}

static void c1_b_emxFreeStruct_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance,
   c1_robotics_manip_internal_RigidBodyTree *c1_pStruct)
{
  c1_emxFreeStruct_robotics_manip_in(chartInstance, &c1_pStruct->Base);
  c1_emxFreeMatrix_robotics_manip_in(chartInstance, c1_pStruct->_pobj1);
  c1_b_emxFreeMatrix_robotics_manip_in(chartInstance, c1_pStruct->_pobj2);
}

static void c1_emxFreeMatrix_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance,
   c1_robotics_manip_internal_CollisionSet c1_pMatrix[19])
{
  int32_T c1_i;
  for (c1_i = 0; c1_i < 19; c1_i++) {
    c1_c_emxFreeStruct_robotics_manip_in(chartInstance, &c1_pMatrix[c1_i]);
  }
}

static void c1_emxFree_unnamed_struct(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, c1_emxArray_unnamed_struct **c1_pEmxArray)
{
  (void)chartInstance;
  if (*c1_pEmxArray != (c1_emxArray_unnamed_struct *)NULL) {
    if (((*c1_pEmxArray)->data != (c1_robotics_manip_internal_CollisionGeometry **)
         NULL) && (*c1_pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*c1_pEmxArray)->data);
    }

    emlrtFreeMex((*c1_pEmxArray)->size);
    emlrtFreeMex(*c1_pEmxArray);
    *c1_pEmxArray = (c1_emxArray_unnamed_struct *)NULL;
  }
}

static void c1_c_emxFreeStruct_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance,
   c1_robotics_manip_internal_CollisionSet *c1_pStruct)
{
  c1_emxFree_unnamed_struct(chartInstance, &c1_pStruct->CollisionGeometries);
}

static void c1_b_emxFreeMatrix_robotics_manip_in
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance,
   c1_robotics_manip_internal_RigidBody c1_pMatrix[10])
{
  int32_T c1_i;
  for (c1_i = 0; c1_i < 10; c1_i++) {
    c1_emxFreeStruct_robotics_manip_in(chartInstance, &c1_pMatrix[c1_i]);
  }
}

static void c1_emxEnsureCapacity_char_T(SFc1_robot_system_toolboxInstanceStruct *
  chartInstance, const emlrtStack *c1_sp, c1_emxArray_char_T *c1_emxArray,
  int32_T c1_oldNumel, const emlrtRTEInfo *c1_srcLocation)
{
  int32_T c1_i;
  int32_T c1_newCapacity;
  int32_T c1_newNumel;
  void *c1_newData;
  (void)chartInstance;
  if (c1_oldNumel < 0) {
    c1_oldNumel = 0;
  }

  c1_newNumel = 1;
  for (c1_i = 0; c1_i < c1_emxArray->numDimensions; c1_i++) {
    c1_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c1_newNumel,
      (size_t)(uint32_T)c1_emxArray->size[c1_i], c1_srcLocation, (void *)c1_sp);
  }

  if (c1_newNumel > c1_emxArray->allocatedSize) {
    c1_newCapacity = c1_emxArray->allocatedSize;
    if (c1_newCapacity < 16) {
      c1_newCapacity = 16;
    }

    while (c1_newCapacity < c1_newNumel) {
      if (c1_newCapacity > 1073741823) {
        c1_newCapacity = MAX_int32_T;
      } else {
        c1_newCapacity <<= 1;
      }
    }

    c1_newData = emlrtCallocMex((uint32_T)c1_newCapacity, sizeof(char_T));
    if (c1_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
    }

    if (c1_emxArray->data != NULL) {
      memcpy(c1_newData, c1_emxArray->data, sizeof(char_T) * (uint32_T)
             c1_oldNumel);
      if (c1_emxArray->canFreeData) {
        emlrtFreeMex(c1_emxArray->data);
      }
    }

    c1_emxArray->data = (char_T *)c1_newData;
    c1_emxArray->allocatedSize = c1_newCapacity;
    c1_emxArray->canFreeData = true;
  }
}

static void c1_emxEnsureCapacity_real_T(SFc1_robot_system_toolboxInstanceStruct *
  chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T *c1_emxArray,
  int32_T c1_oldNumel, const emlrtRTEInfo *c1_srcLocation)
{
  int32_T c1_i;
  int32_T c1_newCapacity;
  int32_T c1_newNumel;
  void *c1_newData;
  (void)chartInstance;
  if (c1_oldNumel < 0) {
    c1_oldNumel = 0;
  }

  c1_newNumel = 1;
  for (c1_i = 0; c1_i < c1_emxArray->numDimensions; c1_i++) {
    c1_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c1_newNumel,
      (size_t)(uint32_T)c1_emxArray->size[c1_i], c1_srcLocation, (void *)c1_sp);
  }

  if (c1_newNumel > c1_emxArray->allocatedSize) {
    c1_newCapacity = c1_emxArray->allocatedSize;
    if (c1_newCapacity < 16) {
      c1_newCapacity = 16;
    }

    while (c1_newCapacity < c1_newNumel) {
      if (c1_newCapacity > 1073741823) {
        c1_newCapacity = MAX_int32_T;
      } else {
        c1_newCapacity <<= 1;
      }
    }

    c1_newData = emlrtCallocMex((uint32_T)c1_newCapacity, sizeof(real_T));
    if (c1_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
    }

    if (c1_emxArray->data != NULL) {
      memcpy(c1_newData, c1_emxArray->data, sizeof(real_T) * (uint32_T)
             c1_oldNumel);
      if (c1_emxArray->canFreeData) {
        emlrtFreeMex(c1_emxArray->data);
      }
    }

    c1_emxArray->data = (real_T *)c1_newData;
    c1_emxArray->allocatedSize = c1_newCapacity;
    c1_emxArray->canFreeData = true;
  }
}

static void c1_emxEnsureCapacity_real_T1(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance, const emlrtStack *c1_sp, c1_emxArray_real_T *c1_emxArray,
  int32_T c1_oldNumel, const emlrtRTEInfo *c1_srcLocation)
{
  int32_T c1_i;
  int32_T c1_newCapacity;
  int32_T c1_newNumel;
  void *c1_newData;
  (void)chartInstance;
  if (c1_oldNumel < 0) {
    c1_oldNumel = 0;
  }

  c1_newNumel = 1;
  for (c1_i = 0; c1_i < c1_emxArray->numDimensions; c1_i++) {
    c1_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c1_newNumel,
      (size_t)(uint32_T)c1_emxArray->size[c1_i], c1_srcLocation, (void *)c1_sp);
  }

  if (c1_newNumel > c1_emxArray->allocatedSize) {
    c1_newCapacity = c1_emxArray->allocatedSize;
    if (c1_newCapacity < 16) {
      c1_newCapacity = 16;
    }

    while (c1_newCapacity < c1_newNumel) {
      if (c1_newCapacity > 1073741823) {
        c1_newCapacity = MAX_int32_T;
      } else {
        c1_newCapacity <<= 1;
      }
    }

    c1_newData = emlrtCallocMex((uint32_T)c1_newCapacity, sizeof(real_T));
    if (c1_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
    }

    if (c1_emxArray->data != NULL) {
      memcpy(c1_newData, c1_emxArray->data, sizeof(real_T) * (uint32_T)
             c1_oldNumel);
      if (c1_emxArray->canFreeData) {
        emlrtFreeMex(c1_emxArray->data);
      }
    }

    c1_emxArray->data = (real_T *)c1_newData;
    c1_emxArray->allocatedSize = c1_newCapacity;
    c1_emxArray->canFreeData = true;
  }
}

static void c1_emxEnsureCapacity_unnamed_struc
  (SFc1_robot_system_toolboxInstanceStruct *chartInstance, const emlrtStack
   *c1_sp, c1_emxArray_unnamed_struct *c1_emxArray, int32_T c1_oldNumel, const
   emlrtRTEInfo *c1_srcLocation)
{
  int32_T c1_i;
  int32_T c1_newCapacity;
  int32_T c1_newNumel;
  void *c1_newData;
  (void)chartInstance;
  if (c1_oldNumel < 0) {
    c1_oldNumel = 0;
  }

  c1_newNumel = 1;
  for (c1_i = 0; c1_i < c1_emxArray->numDimensions; c1_i++) {
    c1_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)c1_newNumel,
      (size_t)(uint32_T)c1_emxArray->size[c1_i], c1_srcLocation, (void *)c1_sp);
  }

  if (c1_newNumel > c1_emxArray->allocatedSize) {
    c1_newCapacity = c1_emxArray->allocatedSize;
    if (c1_newCapacity < 16) {
      c1_newCapacity = 16;
    }

    while (c1_newCapacity < c1_newNumel) {
      if (c1_newCapacity > 1073741823) {
        c1_newCapacity = MAX_int32_T;
      } else {
        c1_newCapacity <<= 1;
      }
    }

    c1_newData = emlrtCallocMex((uint32_T)c1_newCapacity, sizeof
      (c1_robotics_manip_internal_CollisionGeometry *));
    if (c1_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c1_srcLocation, (void *)c1_sp);
    }

    if (c1_emxArray->data != NULL) {
      memcpy(c1_newData, (void *)c1_emxArray->data, sizeof
             (c1_robotics_manip_internal_CollisionGeometry *) * (uint32_T)
             c1_oldNumel);
      if (c1_emxArray->canFreeData) {
        emlrtFreeMex((void *)c1_emxArray->data);
      }
    }

    c1_emxArray->data = (c1_robotics_manip_internal_CollisionGeometry **)
      c1_newData;
    c1_emxArray->allocatedSize = c1_newCapacity;
    c1_emxArray->canFreeData = true;
  }
}

static void init_dsm_address_info(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc1_robot_system_toolboxInstanceStruct
  *chartInstance)
{
  chartInstance->c1_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c1_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c1_robot_system_toolbox_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(172261347U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3347470374U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3134881945U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(175007110U);
}

mxArray *sf_c1_robot_system_toolbox_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "robotics.core.internal.coder.CollisionGeometryBuildable"));
  return(mxcell3p);
}

mxArray *sf_c1_robot_system_toolbox_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_functions");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString(
    "CollisionGeometryBuildable_destructGeometry");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c1_robot_system_toolbox_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c1_robot_system_toolbox(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiB2YGRgYAPSHEDMxAABrFA+IxKGiLPAxRWAuKSyIBUkXlyU7JkCpPMSc8H8xNI"
    "Kz7y0fLD5FgwI89kImM8JFYcABQfK9EP8F4GknwWLfkUk/QJQfmZxfGJySWZZanyyYXxRflJ+SX"
    "xxZXFJam58SX5+TlJ+BZL5IAAAYlgZQQ=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_robot_system_toolbox_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sn9jDFxbQkjt44zEPwazwNF";
}

static void sf_opaque_initialize_c1_robot_system_toolbox(void *chartInstanceVar)
{
  initialize_params_c1_robot_system_toolbox
    ((SFc1_robot_system_toolboxInstanceStruct*) chartInstanceVar);
  initialize_c1_robot_system_toolbox((SFc1_robot_system_toolboxInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c1_robot_system_toolbox(void *chartInstanceVar)
{
  enable_c1_robot_system_toolbox((SFc1_robot_system_toolboxInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c1_robot_system_toolbox(void *chartInstanceVar)
{
  disable_c1_robot_system_toolbox((SFc1_robot_system_toolboxInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c1_robot_system_toolbox(void *chartInstanceVar)
{
  sf_gateway_c1_robot_system_toolbox((SFc1_robot_system_toolboxInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c1_robot_system_toolbox(SimStruct*
  S)
{
  return get_sim_state_c1_robot_system_toolbox
    ((SFc1_robot_system_toolboxInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_robot_system_toolbox(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c1_robot_system_toolbox((SFc1_robot_system_toolboxInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c1_robot_system_toolbox(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_robot_system_toolboxInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_robot_system_toolbox_optimization_info();
    }

    mdl_cleanup_runtime_resources_c1_robot_system_toolbox
      ((SFc1_robot_system_toolboxInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c1_robot_system_toolbox(void *chartInstanceVar)
{
  mdl_start_c1_robot_system_toolbox((SFc1_robot_system_toolboxInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c1_robot_system_toolbox(void
  *chartInstanceVar)
{
  mdl_terminate_c1_robot_system_toolbox((SFc1_robot_system_toolboxInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc1_robot_system_toolbox((SFc1_robot_system_toolboxInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_robot_system_toolbox(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_robot_system_toolbox
      ((SFc1_robot_system_toolboxInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSimStructsc1_robot_system_toolbox
      ((SFc1_robot_system_toolboxInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c1_robot_system_toolbox_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [19] = {
    "eNrtWMmO00gYdloNA4JBLc0BDiMNnOCEGMGBuYzoLNZE9BJwugdxiSr2n7hIucrUkoXL3HgWJMR",
    "D8BZIvAIHHoG/bCftSWyHDANqFkuOU67v37dKnFp738HrEt5XfnGcs/g8h/eWk15nsnUtd6fvt5",
    "3r2fotEnETdYgkkXIqL04ieAhKMKOp4G0+EIUwygcggfuIjYXUZdwUjQyjfOQa7lt+6u+Q+qEXC",
    "sOCOtKS4JCzGXKLje4gnyaV4GsXINChFGYYuowMFxpLPWmE4I+UiapMUKA9E1u11L5hmsYMWlPw",
    "21xpghqrE908TTQ09LTUTGup8uZAEcWMEl5obUiUBzE6WMNRHODnodFo1DLMD4nUdQjJGNQeHSU",
    "8BYdlnlThRp9yooWkhLUi1rCEq7p1GOqzLwJgFQ5B3eoSyCgWlOvy+HsuWtripM+gCX0zLOfmwV",
    "Njg39MYQKy1G+DhhiDJEM45KVCE4e0pkm0FlmyCtM0gmMid32Mn4KgNHsxc5RHME7QRYoyGCRGt",
    "lVX0jG6t5Sbido2M9eVjInSYKt1sIRbawxVUVhwc33eIIypUlhXxHswBpZwbRJNqmEp12KcUjTo",
    "CnSwTe/yajCcYuAzWEPwgBaGa7wESPrOATaWfyN9o7SIGpi8zb291e1VWJtrkAPiQ1EXkIQqQJ8",
    "l7i3nFlBlY49A1Eon6hWB0wxZh3LUwPDmRMgR+qSiiZyYYCNaCoRgiJWnISmCFobumDCzKjRSQw",
    "w5FsyRwtoq5YYwG/J1OJ/4IQS2D1EG+1hdiC1wnbIdcBc1G1M9a4LyJY0Lgm+wOLFbWeW7sxiO+",
    "IiLCXeliLxsFKRRAMCkJJJTPqxjm5MzF6WviJXwtJtUakV/nl92Pt5yTubjxY+Yjx9D56zQncib",
    "P2/k6GsFcp3cc1ne+a1qPbfwWy2ju5ej+3lJzvYSncXt4P3w/vaj+st/fnr3+vmLC68OXnyK/Pe",
    "1zc4fl7L1r/NGvyjc8Uq9WOxfOb22C/hfzvHfydaK//Gk6U77D0ZP9J07z1qdCXk2OXBTf22o7/",
    "z9VTtxMH2TxJd+O8gORnZNTHpcsPzv5vQ9u4b/+Vw+oYR7n0af+uvRGn9dW/LXtWQu94gtY+j5v",
    "/ek6AvdUzOlIeppIVhfTAvy+7/my6Z0zhem+1r0/OGXz2/f/zUvvme6TefgacPfquinzhJ+5xTb",
    "UdW/NznfnDa73jibzfPfsvWfi584jZCyoOAYm23jmXRQtPuN5Pem/puft25a/2V/qTy+vcsJmym",
    "antbnrzvS/tbPbX3pOfABHBPRng==",
    ""
  };

  static char newstr [1305] = "";
  newstr[0] = '\0';
  for (i = 0; i < 19; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c1_robot_system_toolbox(SimStruct *S)
{
  const char* newstr = sf_c1_robot_system_toolbox_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1476676434U));
  ssSetChecksum1(S,(125807426U));
  ssSetChecksum2(S,(2827403756U));
  ssSetChecksum3(S,(2823728395U));
}

static void mdlRTW_c1_robot_system_toolbox(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c1_robot_system_toolbox(SimStruct *S)
{
  SFc1_robot_system_toolboxInstanceStruct *chartInstance;
  chartInstance = (SFc1_robot_system_toolboxInstanceStruct *)utMalloc(sizeof
    (SFc1_robot_system_toolboxInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc1_robot_system_toolboxInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_robot_system_toolbox;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_robot_system_toolbox;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c1_robot_system_toolbox;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c1_robot_system_toolbox;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c1_robot_system_toolbox;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c1_robot_system_toolbox;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c1_robot_system_toolbox;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_robot_system_toolbox;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_robot_system_toolbox;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_robot_system_toolbox;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_robot_system_toolbox;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_robot_system_toolbox;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->chartInfo.chartStateSetterFcn = NULL;
  chartInstance->chartInfo.chartStateGetterFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c1_JITStateAnimation,
    chartInstance->c1_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c1_robot_system_toolbox(chartInstance);
}

void c1_robot_system_toolbox_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c1_robot_system_toolbox(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_robot_system_toolbox(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_robot_system_toolbox(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_robot_system_toolbox_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
