/* Include files */

#include "LCTCompression_sfun.h"
#include "c7_LCTCompression.h"
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
static emlrtRSInfo c7_emlrtRSI = { 4,  /* lineNo */
  "MATLAB Function2",                  /* fcnName */
  "#LCTCompression:64"                 /* pathName */
};

static emlrtRSInfo c7_b_emlrtRSI = { 21,/* lineNo */
  "ycbcr2rgb",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\ycbcr2rgb.m"/* pathName */
};

static emlrtRSInfo c7_c_emlrtRSI = { 35,/* lineNo */
  "ycbcr2rgb",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\ycbcr2rgb.m"/* pathName */
};

static emlrtRSInfo c7_d_emlrtRSI = { 90,/* lineNo */
  "ycbcr2rgb",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\ycbcr2rgb.m"/* pathName */
};

static emlrtRSInfo c7_e_emlrtRSI = { 46,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c7_f_emlrtRSI = { 101,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c7_g_emlrtRSI = { 13,/* lineNo */
  "matrix_to_integer_power",           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\matrix_to_integer_power.m"/* pathName */
};

static emlrtRSInfo c7_h_emlrtRSI = { 61,/* lineNo */
  "matrix_to_integer_power",           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\matrix_to_integer_power.m"/* pathName */
};

static emlrtRSInfo c7_i_emlrtRSI = { 77,/* lineNo */
  "matrix_to_integer_power",           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\matrix_to_integer_power.m"/* pathName */
};

static emlrtRSInfo c7_j_emlrtRSI = { 31,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo c7_k_emlrtRSI = { 42,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo c7_l_emlrtRSI = { 46,/* lineNo */
  "inv",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m"/* pathName */
};

static emlrtRSInfo c7_m_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c7_n_emlrtRSI = { 53,/* lineNo */
  "flt2str",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pathName */
};

static emlrtRSInfo c7_o_emlrtRSI = { 13,/* lineNo */
  "imlincomb",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imlincomb.m"/* pathName */
};

static emlrtRSInfo c7_p_emlrtRSI = { 118,/* lineNo */
  "imlincomb",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imlincomb.m"/* pathName */
};

static emlrtRSInfo c7_q_emlrtRSI = { 170,/* lineNo */
  "imlincomb",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imlincomb.m"/* pathName */
};

static emlrtBCInfo c7_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  90,                                  /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "ycbcr2rgb",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\ycbcr2rgb.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c7_emlrtDCI = { 90, /* lineNo */
  38,                                  /* colNo */
  "ycbcr2rgb",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\ycbcr2rgb.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c7_b_emlrtBCI = { 1,/* iFirst */
  3,                                   /* iLast */
  90,                                  /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "ycbcr2rgb",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\ycbcr2rgb.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c7_b_emlrtDCI = { 90,/* lineNo */
  47,                                  /* colNo */
  "ycbcr2rgb",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\ycbcr2rgb.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c7_c_emlrtBCI = { 1,/* iFirst */
  3,                                   /* iLast */
  90,                                  /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "ycbcr2rgb",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\ycbcr2rgb.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c7_c_emlrtDCI = { 90,/* lineNo */
  57,                                  /* colNo */
  "ycbcr2rgb",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\ycbcr2rgb.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c7_d_emlrtBCI = { 1,/* iFirst */
  3,                                   /* iLast */
  90,                                  /* lineNo */
  73,                                  /* colNo */
  "",                                  /* aName */
  "ycbcr2rgb",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\ycbcr2rgb.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c7_d_emlrtDCI = { 90,/* lineNo */
  73,                                  /* colNo */
  "ycbcr2rgb",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\ycbcr2rgb.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c7_e_emlrtBCI = { 1,/* iFirst */
  3,                                   /* iLast */
  90,                                  /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "ycbcr2rgb",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\ycbcr2rgb.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c7_e_emlrtDCI = { 90,/* lineNo */
  21,                                  /* colNo */
  "ycbcr2rgb",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\ycbcr2rgb.m",/* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c7_LCTCompression(SFc7_LCTCompressionInstanceStruct
  *chartInstance);
static void initialize_params_c7_LCTCompression
  (SFc7_LCTCompressionInstanceStruct *chartInstance);
static void mdl_start_c7_LCTCompression(SFc7_LCTCompressionInstanceStruct
  *chartInstance);
static void mdl_terminate_c7_LCTCompression(SFc7_LCTCompressionInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c7_LCTCompression
  (SFc7_LCTCompressionInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c7_LCTCompression
  (SFc7_LCTCompressionInstanceStruct *chartInstance);
static void enable_c7_LCTCompression(SFc7_LCTCompressionInstanceStruct
  *chartInstance);
static void disable_c7_LCTCompression(SFc7_LCTCompressionInstanceStruct
  *chartInstance);
static void sf_gateway_c7_LCTCompression(SFc7_LCTCompressionInstanceStruct
  *chartInstance);
static void ext_mode_exec_c7_LCTCompression(SFc7_LCTCompressionInstanceStruct
  *chartInstance);
static void c7_update_jit_animation_c7_LCTCompression
  (SFc7_LCTCompressionInstanceStruct *chartInstance);
static void c7_do_animation_call_c7_LCTCompression
  (SFc7_LCTCompressionInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c7_LCTCompression
  (SFc7_LCTCompressionInstanceStruct *chartInstance);
static void set_sim_state_c7_LCTCompression(SFc7_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c7_st);
static void initSimStructsc7_LCTCompression(SFc7_LCTCompressionInstanceStruct
  *chartInstance);
static void c7_ycbcr2rgb(SFc7_LCTCompressionInstanceStruct *chartInstance, const
  emlrtStack *c7_sp, real_T c7_X[3686400], real_T c7_rgb[3686400]);
static void c7_mpower(SFc7_LCTCompressionInstanceStruct *chartInstance, const
                      emlrtStack *c7_sp, real_T c7_a[9], real_T c7_c[9]);
static real_T c7_norm(SFc7_LCTCompressionInstanceStruct *chartInstance, real_T
                      c7_x[9]);
static void c7_warning(SFc7_LCTCompressionInstanceStruct *chartInstance, const
  emlrtStack *c7_sp);
static void c7_b_warning(SFc7_LCTCompressionInstanceStruct *chartInstance, const
  emlrtStack *c7_sp, char_T c7_varargin_1[14]);
static void c7_imlincomb(SFc7_LCTCompressionInstanceStruct *chartInstance,
  real_T c7_varargin_1, real_T c7_varargin_2[1228800], real_T c7_varargin_3,
  real_T c7_varargin_4[1228800], real_T c7_varargin_5, real_T c7_varargin_6
  [1228800], real_T c7_varargin_7, real_T c7_Z[1228800]);
static void c7_emlrt_marshallIn(SFc7_LCTCompressionInstanceStruct *chartInstance,
  const mxArray *c7_a__output_of_sprintf_, const char_T *c7_identifier, char_T
  c7_y[14]);
static void c7_b_emlrt_marshallIn(SFc7_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId,
  char_T c7_y[14]);
static void c7_c_emlrt_marshallIn(SFc7_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c7_d_I, const char_T *c7_identifier, real_T
  c7_y[3686400]);
static void c7_d_emlrt_marshallIn(SFc7_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId,
  real_T c7_y[3686400]);
static uint8_T c7_e_emlrt_marshallIn(SFc7_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c7_b_is_active_c7_LCTCompression, const char_T *
  c7_identifier);
static uint8_T c7_f_emlrt_marshallIn(SFc7_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId);
static void c7_slStringInitializeDynamicBuffers
  (SFc7_LCTCompressionInstanceStruct *chartInstance);
static void c7_chart_data_browse_helper(SFc7_LCTCompressionInstanceStruct
  *chartInstance, int32_T c7_ssIdNumber, const mxArray **c7_mxData, uint8_T
  *c7_isValueTooBig);
static const mxArray *c7_feval(SFc7_LCTCompressionInstanceStruct *chartInstance,
  const emlrtStack *c7_sp, const mxArray *c7_input0, const mxArray *c7_input1);
static void c7_b_feval(SFc7_LCTCompressionInstanceStruct *chartInstance, const
  emlrtStack *c7_sp, const mxArray *c7_input0, const mxArray *c7_input1);
static const mxArray *c7_sprintf(SFc7_LCTCompressionInstanceStruct
  *chartInstance, const emlrtStack *c7_sp, const mxArray *c7_input0, const
  mxArray *c7_input1);
static const mxArray *c7_c_feval(SFc7_LCTCompressionInstanceStruct
  *chartInstance, const emlrtStack *c7_sp, const mxArray *c7_input0, const
  mxArray *c7_input1, const mxArray *c7_input2);
static void c7_d_feval(SFc7_LCTCompressionInstanceStruct *chartInstance, const
  emlrtStack *c7_sp, const mxArray *c7_input0, const mxArray *c7_input1);
static void init_dsm_address_info(SFc7_LCTCompressionInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc7_LCTCompressionInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c7_LCTCompression(SFc7_LCTCompressionInstanceStruct
  *chartInstance)
{
  emlrtStack c7_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c7_st.tls = chartInstance->c7_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c7_st, (const char_T *)
    "EMLRT:runTime:MexFunctionNeedsLicense", (const char_T *)"image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c7_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c7_is_active_c7_LCTCompression = 0U;
}

static void initialize_params_c7_LCTCompression
  (SFc7_LCTCompressionInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c7_LCTCompression(SFc7_LCTCompressionInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c7_LCTCompression(SFc7_LCTCompressionInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c7_LCTCompression
  (SFc7_LCTCompressionInstanceStruct *chartInstance)
{
  static const uint32_T c7_decisionTxtEndIdx = 0U;
  static const uint32_T c7_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c7_chart_data_browse_helper);
  chartInstance->c7_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c7_RuntimeVar,
    &chartInstance->c7_IsDebuggerActive,
    &chartInstance->c7_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c7_mlFcnLineNumber, &chartInstance->c7_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c7_covrtInstance, 1U, 0U, 1U,
    22U);
  covrtChartInitFcn(chartInstance->c7_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c7_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c7_decisionTxtStartIdx, &c7_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c7_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c7_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c7_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 70);
}

static void mdl_cleanup_runtime_resources_c7_LCTCompression
  (SFc7_LCTCompressionInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c7_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c7_covrtInstance);
}

static void enable_c7_LCTCompression(SFc7_LCTCompressionInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c7_LCTCompression(SFc7_LCTCompressionInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c7_LCTCompression(SFc7_LCTCompressionInstanceStruct
  *chartInstance)
{
  emlrtStack c7_b_st;
  emlrtStack c7_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  int32_T c7_b_j;
  int32_T c7_c_j;
  int32_T c7_d_j;
  int32_T c7_i;
  int32_T c7_i1;
  int32_T c7_i2;
  int32_T c7_i3;
  int32_T c7_i4;
  int32_T c7_i5;
  int32_T c7_iy;
  int32_T c7_j;
  c7_st.tls = chartInstance->c7_fEmlrtCtx;
  c7_b_st.prev = &c7_st;
  c7_b_st.tls = c7_st.tls;
  chartInstance->c7_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c7_i = 0; c7_i < 1228800; c7_i++) {
    covrtSigUpdateFcn(chartInstance->c7_covrtInstance, 2U,
                      (*chartInstance->c7_b_Cr)[c7_i]);
  }

  for (c7_i1 = 0; c7_i1 < 1228800; c7_i1++) {
    covrtSigUpdateFcn(chartInstance->c7_covrtInstance, 1U,
                      (*chartInstance->c7_b_Cb)[c7_i1]);
  }

  for (c7_i2 = 0; c7_i2 < 1228800; c7_i2++) {
    covrtSigUpdateFcn(chartInstance->c7_covrtInstance, 0U,
                      (*chartInstance->c7_b_Y)[c7_i2]);
  }

  chartInstance->c7_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c7_covrtInstance, 4U, 0, 0);
  c7_iy = -1;
  for (c7_j = 0; c7_j < 1228800; c7_j++) {
    c7_c_j = c7_j;
    c7_iy++;
    chartInstance->c7_I[c7_iy] = (*chartInstance->c7_b_Y)[c7_c_j];
  }

  for (c7_b_j = 0; c7_b_j < 1228800; c7_b_j++) {
    c7_c_j = c7_b_j;
    c7_iy++;
    chartInstance->c7_I[c7_iy] = (*chartInstance->c7_b_Cb)[c7_c_j];
  }

  for (c7_d_j = 0; c7_d_j < 1228800; c7_d_j++) {
    c7_c_j = c7_d_j;
    c7_iy++;
    chartInstance->c7_I[c7_iy] = (*chartInstance->c7_b_Cr)[c7_c_j];
  }

  c7_b_st.site = &c7_emlrtRSI;
  for (c7_i3 = 0; c7_i3 < 3686400; c7_i3++) {
    chartInstance->c7_b_I[c7_i3] = chartInstance->c7_I[c7_i3];
  }

  c7_ycbcr2rgb(chartInstance, &c7_b_st, chartInstance->c7_b_I,
               chartInstance->c7_I);
  for (c7_i4 = 0; c7_i4 < 3686400; c7_i4++) {
    (*chartInstance->c7_c_I)[c7_i4] = chartInstance->c7_I[c7_i4];
  }

  c7_do_animation_call_c7_LCTCompression(chartInstance);
  for (c7_i5 = 0; c7_i5 < 3686400; c7_i5++) {
    covrtSigUpdateFcn(chartInstance->c7_covrtInstance, 3U,
                      (*chartInstance->c7_c_I)[c7_i5]);
  }
}

static void ext_mode_exec_c7_LCTCompression(SFc7_LCTCompressionInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c7_update_jit_animation_c7_LCTCompression
  (SFc7_LCTCompressionInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c7_do_animation_call_c7_LCTCompression
  (SFc7_LCTCompressionInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c7_LCTCompression
  (SFc7_LCTCompressionInstanceStruct *chartInstance)
{
  const mxArray *c7_b_y = NULL;
  const mxArray *c7_c_y = NULL;
  const mxArray *c7_st;
  const mxArray *c7_y = NULL;
  c7_st = NULL;
  c7_st = NULL;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_createcellmatrix(2, 1), false);
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_create("y", *chartInstance->c7_c_I, 0, 0U, 1U,
    0U, 3, 960, 1280, 3), false);
  sf_mex_setcell(c7_y, 0, c7_b_y);
  c7_c_y = NULL;
  sf_mex_assign(&c7_c_y, sf_mex_create("y",
    &chartInstance->c7_is_active_c7_LCTCompression, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c7_y, 1, c7_c_y);
  sf_mex_assign(&c7_st, c7_y, false);
  return c7_st;
}

static void set_sim_state_c7_LCTCompression(SFc7_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c7_st)
{
  const mxArray *c7_u;
  int32_T c7_i;
  chartInstance->c7_doneDoubleBufferReInit = true;
  c7_u = sf_mex_dup(c7_st);
  c7_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c7_u, 0)), "I",
                        chartInstance->c7_dv);
  for (c7_i = 0; c7_i < 3686400; c7_i++) {
    (*chartInstance->c7_c_I)[c7_i] = chartInstance->c7_dv[c7_i];
  }

  chartInstance->c7_is_active_c7_LCTCompression = c7_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c7_u, 1)),
     "is_active_c7_LCTCompression");
  sf_mex_destroy(&c7_u);
  sf_mex_destroy(&c7_st);
}

static void initSimStructsc7_LCTCompression(SFc7_LCTCompressionInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c7_LCTCompression_get_eml_resolved_functions_info(void)
{
  const mxArray *c7_nameCaptureInfo = NULL;
  c7_nameCaptureInfo = NULL;
  sf_mex_assign(&c7_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c7_nameCaptureInfo;
}

static void c7_ycbcr2rgb(SFc7_LCTCompressionInstanceStruct *chartInstance, const
  emlrtStack *c7_sp, real_T c7_X[3686400], real_T c7_rgb[3686400])
{
  static real_T c7_c_dv[9] = { 65.481, -37.797, 112.0, 128.553, -74.203, -93.786,
    24.966, 112.0, -18.214 };

  static real_T c7_b[3] = { 16.0, 128.0, 128.0 };

  emlrtStack c7_b_st;
  emlrtStack c7_st;
  real_T c7_T[9];
  real_T c7_Tinv[9];
  real_T c7_offset[3];
  real_T c7_b_ex;
  real_T c7_b_p;
  real_T c7_b_x;
  real_T c7_c_x;
  real_T c7_d_x;
  real_T c7_ex;
  real_T c7_x;
  int32_T c7_b_k;
  int32_T c7_c_k;
  int32_T c7_d_k;
  int32_T c7_i;
  int32_T c7_i1;
  int32_T c7_i10;
  int32_T c7_i11;
  int32_T c7_i12;
  int32_T c7_i13;
  int32_T c7_i14;
  int32_T c7_i15;
  int32_T c7_i16;
  int32_T c7_i17;
  int32_T c7_i2;
  int32_T c7_i3;
  int32_T c7_i4;
  int32_T c7_i5;
  int32_T c7_i6;
  int32_T c7_i7;
  int32_T c7_i8;
  int32_T c7_i9;
  int32_T c7_k;
  int32_T c7_p;
  c7_st.prev = c7_sp;
  c7_st.tls = c7_sp->tls;
  c7_st.site = &c7_b_emlrtRSI;
  c7_b_st.prev = &c7_st;
  c7_b_st.tls = c7_st.tls;
  c7_b_st.site = &c7_c_emlrtRSI;
  c7_mpower(chartInstance, &c7_b_st, c7_c_dv, c7_Tinv);
  for (c7_i = 0; c7_i < 9; c7_i++) {
    c7_T[c7_i] = 255.0 * c7_Tinv[c7_i];
  }

  for (c7_i1 = 0; c7_i1 < 3; c7_i1++) {
    c7_offset[c7_i1] = 0.0;
    c7_i4 = 0;
    for (c7_i5 = 0; c7_i5 < 3; c7_i5++) {
      c7_offset[c7_i1] += c7_Tinv[c7_i4 + c7_i1] * c7_b[c7_i5];
      c7_i4 += 3;
    }
  }

  c7_i2 = 0;
  for (c7_i3 = 0; c7_i3 < 1280; c7_i3++) {
    for (c7_i7 = 0; c7_i7 < 960; c7_i7++) {
      chartInstance->c7_Y[c7_i7 + c7_i2] = c7_X[c7_i7 + c7_i2];
    }

    c7_i2 += 960;
  }

  c7_i6 = 0;
  for (c7_i8 = 0; c7_i8 < 1280; c7_i8++) {
    for (c7_i10 = 0; c7_i10 < 960; c7_i10++) {
      chartInstance->c7_Cb[c7_i10 + c7_i6] = c7_X[(c7_i10 + c7_i6) + 1228800];
    }

    c7_i6 += 960;
  }

  c7_i9 = 0;
  for (c7_i11 = 0; c7_i11 < 1280; c7_i11++) {
    for (c7_i12 = 0; c7_i12 < 960; c7_i12++) {
      chartInstance->c7_Cr[c7_i12 + c7_i9] = c7_X[(c7_i12 + c7_i9) + 2457600];
    }

    c7_i9 += 960;
  }

  for (c7_p = 0; c7_p < 3; c7_p++) {
    c7_b_p = 1.0 + (real_T)c7_p;
    if (c7_b_p != (real_T)(int32_T)muDoubleScalarFloor(c7_b_p)) {
      emlrtIntegerCheckR2012b(c7_b_p, &c7_emlrtDCI, &c7_st);
    }

    c7_i13 = (int32_T)c7_b_p;
    if ((c7_i13 < 1) || (c7_i13 > 3)) {
      emlrtDynamicBoundsCheckR2012b(c7_i13, 1, 3, &c7_emlrtBCI, &c7_st);
    }

    if (c7_b_p != (real_T)(int32_T)muDoubleScalarFloor(c7_b_p)) {
      emlrtIntegerCheckR2012b(c7_b_p, &c7_b_emlrtDCI, &c7_st);
    }

    c7_i14 = (int32_T)c7_b_p;
    if ((c7_i14 < 1) || (c7_i14 > 3)) {
      emlrtDynamicBoundsCheckR2012b(c7_i14, 1, 3, &c7_b_emlrtBCI, &c7_st);
    }

    if (c7_b_p != (real_T)(int32_T)muDoubleScalarFloor(c7_b_p)) {
      emlrtIntegerCheckR2012b(c7_b_p, &c7_c_emlrtDCI, &c7_st);
    }

    c7_i15 = (int32_T)c7_b_p;
    if ((c7_i15 < 1) || (c7_i15 > 3)) {
      emlrtDynamicBoundsCheckR2012b(c7_i15, 1, 3, &c7_c_emlrtBCI, &c7_st);
    }

    if (c7_b_p != (real_T)(int32_T)muDoubleScalarFloor(c7_b_p)) {
      emlrtIntegerCheckR2012b(c7_b_p, &c7_d_emlrtDCI, &c7_st);
    }

    c7_i16 = (int32_T)c7_b_p;
    if ((c7_i16 < 1) || (c7_i16 > 3)) {
      emlrtDynamicBoundsCheckR2012b(c7_i16, 1, 3, &c7_d_emlrtBCI, &c7_st);
    }

    if (c7_b_p != (real_T)(int32_T)muDoubleScalarFloor(c7_b_p)) {
      emlrtIntegerCheckR2012b(c7_b_p, &c7_e_emlrtDCI, &c7_st);
    }

    c7_i17 = (int32_T)c7_b_p;
    if ((c7_i17 < 1) || (c7_i17 > 3)) {
      emlrtDynamicBoundsCheckR2012b(c7_i17, 1, 3, &c7_e_emlrtBCI, &c7_st);
    }

    c7_imlincomb(chartInstance, c7_T[c7_i13 - 1], chartInstance->c7_Y,
                 c7_T[c7_i14 + 2], chartInstance->c7_Cb, c7_T[c7_i15 + 5],
                 chartInstance->c7_Cr, -c7_offset[c7_i16 - 1], *(real_T (*)
      [1228800])&c7_rgb[1228800 * (c7_i17 - 1)]);
  }

  for (c7_k = 0; c7_k < 3686400; c7_k++) {
    c7_c_k = c7_k;
    c7_x = c7_rgb[c7_c_k];
    c7_b_x = c7_x;
    c7_ex = muDoubleScalarMax(c7_b_x, 0.0);
    chartInstance->c7_maxval[c7_c_k] = c7_ex;
  }

  for (c7_b_k = 0; c7_b_k < 3686400; c7_b_k++) {
    c7_d_k = c7_b_k;
    c7_c_x = chartInstance->c7_maxval[c7_d_k];
    c7_d_x = c7_c_x;
    c7_b_ex = muDoubleScalarMin(c7_d_x, 1.0);
    c7_rgb[c7_d_k] = c7_b_ex;
  }
}

static void c7_mpower(SFc7_LCTCompressionInstanceStruct *chartInstance, const
                      emlrtStack *c7_sp, real_T c7_a[9], real_T c7_c[9])
{
  static char_T c7_rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  emlrtStack c7_b_st;
  emlrtStack c7_c_st;
  emlrtStack c7_d_st;
  emlrtStack c7_e_st;
  emlrtStack c7_f_st;
  emlrtStack c7_g_st;
  emlrtStack c7_st;
  const mxArray *c7_o_y = NULL;
  const mxArray *c7_p_y = NULL;
  real_T c7_x[9];
  real_T c7_ab_x;
  real_T c7_absx11;
  real_T c7_absx21;
  real_T c7_absx31;
  real_T c7_b_x;
  real_T c7_b_y;
  real_T c7_b_z;
  real_T c7_bb_x;
  real_T c7_c_x;
  real_T c7_c_y;
  real_T c7_c_z;
  real_T c7_cb_x;
  real_T c7_d_x;
  real_T c7_d_y;
  real_T c7_d_z;
  real_T c7_db_x;
  real_T c7_e_x;
  real_T c7_e_y;
  real_T c7_e_z;
  real_T c7_f_x;
  real_T c7_f_y;
  real_T c7_f_z;
  real_T c7_g_x;
  real_T c7_g_y;
  real_T c7_h_x;
  real_T c7_h_y;
  real_T c7_i_x;
  real_T c7_i_y;
  real_T c7_j_x;
  real_T c7_j_y;
  real_T c7_k_x;
  real_T c7_k_y;
  real_T c7_l_x;
  real_T c7_l_y;
  real_T c7_m_x;
  real_T c7_m_y;
  real_T c7_n1x;
  real_T c7_n1xinv;
  real_T c7_n_x;
  real_T c7_n_y;
  real_T c7_o_x;
  real_T c7_p_x;
  real_T c7_q_x;
  real_T c7_r_x;
  real_T c7_rc;
  real_T c7_s_x;
  real_T c7_t1;
  real_T c7_t2;
  real_T c7_t3;
  real_T c7_t_x;
  real_T c7_u_x;
  real_T c7_v_x;
  real_T c7_w_x;
  real_T c7_x_x;
  real_T c7_y;
  real_T c7_y_x;
  real_T c7_z;
  int32_T c7_b_a;
  int32_T c7_b_c;
  int32_T c7_c_a;
  int32_T c7_c_c;
  int32_T c7_d_a;
  int32_T c7_d_c;
  int32_T c7_e_a;
  int32_T c7_e_c;
  int32_T c7_f_a;
  int32_T c7_f_c;
  int32_T c7_g_a;
  int32_T c7_g_c;
  int32_T c7_h_a;
  int32_T c7_h_c;
  int32_T c7_i;
  int32_T c7_i_a;
  int32_T c7_i_c;
  int32_T c7_itmp;
  int32_T c7_j_a;
  int32_T c7_j_c;
  int32_T c7_p1;
  int32_T c7_p2;
  int32_T c7_p3;
  char_T c7_str[14];
  boolean_T c7_b;
  c7_st.prev = c7_sp;
  c7_st.tls = c7_sp->tls;
  c7_b_st.prev = &c7_st;
  c7_b_st.tls = c7_st.tls;
  c7_c_st.prev = &c7_b_st;
  c7_c_st.tls = c7_b_st.tls;
  c7_d_st.prev = &c7_c_st;
  c7_d_st.tls = c7_c_st.tls;
  c7_e_st.prev = &c7_d_st;
  c7_e_st.tls = c7_d_st.tls;
  c7_f_st.prev = &c7_e_st;
  c7_f_st.tls = c7_e_st.tls;
  c7_g_st.prev = &c7_f_st;
  c7_g_st.tls = c7_f_st.tls;
  c7_st.site = &c7_e_emlrtRSI;
  c7_b_st.site = &c7_f_emlrtRSI;
  c7_c_st.site = &c7_g_emlrtRSI;
  c7_d_st.site = &c7_h_emlrtRSI;
  c7_d_st.site = &c7_i_emlrtRSI;
  for (c7_i = 0; c7_i < 9; c7_i++) {
    c7_x[c7_i] = c7_a[c7_i];
  }

  c7_p1 = 0;
  c7_p2 = 3;
  c7_p3 = 6;
  c7_b_x = c7_x[0];
  c7_c_x = c7_b_x;
  c7_d_x = c7_c_x;
  c7_absx11 = muDoubleScalarAbs(c7_d_x);
  c7_e_x = c7_x[1];
  c7_f_x = c7_e_x;
  c7_g_x = c7_f_x;
  c7_absx21 = muDoubleScalarAbs(c7_g_x);
  c7_h_x = c7_x[2];
  c7_i_x = c7_h_x;
  c7_j_x = c7_i_x;
  c7_absx31 = muDoubleScalarAbs(c7_j_x);
  if ((c7_absx21 > c7_absx11) && (c7_absx21 > c7_absx31)) {
    c7_p1 = 3;
    c7_p2 = 0;
    c7_t1 = c7_x[0];
    c7_x[0] = c7_x[1];
    c7_x[1] = c7_t1;
    c7_t1 = c7_x[3];
    c7_x[3] = c7_x[4];
    c7_x[4] = c7_t1;
    c7_t1 = c7_x[6];
    c7_x[6] = c7_x[7];
    c7_x[7] = c7_t1;
  } else if (c7_absx31 > c7_absx11) {
    c7_p1 = 6;
    c7_p3 = 0;
    c7_t1 = c7_x[0];
    c7_x[0] = c7_x[2];
    c7_x[2] = c7_t1;
    c7_t1 = c7_x[3];
    c7_x[3] = c7_x[5];
    c7_x[5] = c7_t1;
    c7_t1 = c7_x[6];
    c7_x[6] = c7_x[8];
    c7_x[8] = c7_t1;
  }

  c7_k_x = c7_x[1];
  c7_y = c7_x[0];
  c7_z = c7_k_x / c7_y;
  c7_x[1] = c7_z;
  c7_l_x = c7_x[2];
  c7_b_y = c7_x[0];
  c7_b_z = c7_l_x / c7_b_y;
  c7_x[2] = c7_b_z;
  c7_x[4] -= c7_x[1] * c7_x[3];
  c7_x[5] -= c7_x[2] * c7_x[3];
  c7_x[7] -= c7_x[1] * c7_x[6];
  c7_x[8] -= c7_x[2] * c7_x[6];
  c7_m_x = c7_x[5];
  c7_n_x = c7_m_x;
  c7_o_x = c7_n_x;
  c7_c_y = muDoubleScalarAbs(c7_o_x);
  c7_p_x = c7_x[4];
  c7_q_x = c7_p_x;
  c7_r_x = c7_q_x;
  c7_d_y = muDoubleScalarAbs(c7_r_x);
  if (c7_c_y > c7_d_y) {
    c7_itmp = c7_p2;
    c7_p2 = c7_p3;
    c7_p3 = c7_itmp;
    c7_t1 = c7_x[1];
    c7_x[1] = c7_x[2];
    c7_x[2] = c7_t1;
    c7_t1 = c7_x[4];
    c7_x[4] = c7_x[5];
    c7_x[5] = c7_t1;
    c7_t1 = c7_x[7];
    c7_x[7] = c7_x[8];
    c7_x[8] = c7_t1;
  }

  c7_s_x = c7_x[5];
  c7_e_y = c7_x[4];
  c7_c_z = c7_s_x / c7_e_y;
  c7_x[5] = c7_c_z;
  c7_x[8] -= c7_x[5] * c7_x[7];
  c7_t_x = c7_x[1] * c7_x[5] - c7_x[2];
  c7_f_y = c7_x[8];
  c7_t3 = c7_t_x / c7_f_y;
  c7_u_x = -(c7_x[1] + c7_x[7] * c7_t3);
  c7_g_y = c7_x[4];
  c7_t2 = c7_u_x / c7_g_y;
  c7_b_a = c7_p1 + 1;
  c7_b_c = c7_b_a - 1;
  c7_v_x = (1.0 - c7_x[3] * c7_t2) - c7_x[6] * c7_t3;
  c7_h_y = c7_x[0];
  c7_d_z = c7_v_x / c7_h_y;
  c7_c[c7_b_c] = c7_d_z;
  c7_c_a = c7_p1 + 2;
  c7_c_c = c7_c_a - 1;
  c7_c[c7_c_c] = c7_t2;
  c7_d_a = c7_p1 + 3;
  c7_d_c = c7_d_a - 1;
  c7_c[c7_d_c] = c7_t3;
  c7_w_x = -c7_x[5];
  c7_i_y = c7_x[8];
  c7_t3 = c7_w_x / c7_i_y;
  c7_x_x = 1.0 - c7_x[7] * c7_t3;
  c7_j_y = c7_x[4];
  c7_t2 = c7_x_x / c7_j_y;
  c7_e_a = c7_p2 + 1;
  c7_e_c = c7_e_a - 1;
  c7_y_x = -(c7_x[3] * c7_t2 + c7_x[6] * c7_t3);
  c7_k_y = c7_x[0];
  c7_e_z = c7_y_x / c7_k_y;
  c7_c[c7_e_c] = c7_e_z;
  c7_f_a = c7_p2 + 2;
  c7_f_c = c7_f_a - 1;
  c7_c[c7_f_c] = c7_t2;
  c7_g_a = c7_p2 + 3;
  c7_g_c = c7_g_a - 1;
  c7_c[c7_g_c] = c7_t3;
  c7_l_y = c7_x[8];
  c7_t3 = 1.0 / c7_l_y;
  c7_ab_x = -c7_x[7] * c7_t3;
  c7_m_y = c7_x[4];
  c7_t2 = c7_ab_x / c7_m_y;
  c7_h_a = c7_p3 + 1;
  c7_h_c = c7_h_a - 1;
  c7_bb_x = -(c7_x[3] * c7_t2 + c7_x[6] * c7_t3);
  c7_n_y = c7_x[0];
  c7_f_z = c7_bb_x / c7_n_y;
  c7_c[c7_h_c] = c7_f_z;
  c7_i_a = c7_p3 + 2;
  c7_i_c = c7_i_a - 1;
  c7_c[c7_i_c] = c7_t2;
  c7_j_a = c7_p3 + 3;
  c7_j_c = c7_j_a - 1;
  c7_c[c7_j_c] = c7_t3;
  c7_e_st.site = &c7_j_emlrtRSI;
  c7_n1x = c7_norm(chartInstance, c7_a);
  c7_n1xinv = c7_norm(chartInstance, c7_c);
  c7_rc = 1.0 / (c7_n1x * c7_n1xinv);
  if ((c7_n1x == 0.0) || (c7_n1xinv == 0.0) || (c7_rc == 0.0)) {
    c7_f_st.site = &c7_k_emlrtRSI;
    c7_warning(chartInstance, &c7_f_st);
  } else {
    c7_cb_x = c7_rc;
    c7_b = muDoubleScalarIsNaN(c7_cb_x);
    if (c7_b || (c7_rc < 2.2204460492503131E-16)) {
      c7_f_st.site = &c7_l_emlrtRSI;
      c7_db_x = c7_rc;
      c7_o_y = NULL;
      sf_mex_assign(&c7_o_y, sf_mex_create("y", c7_rfmt, 10, 0U, 1U, 0U, 2, 1, 6),
                    false);
      c7_p_y = NULL;
      sf_mex_assign(&c7_p_y, sf_mex_create("y", &c7_db_x, 0, 0U, 0U, 0U, 0),
                    false);
      c7_g_st.site = &c7_n_emlrtRSI;
      c7_emlrt_marshallIn(chartInstance, c7_sprintf(chartInstance, &c7_g_st,
        c7_o_y, c7_p_y), "<output of sprintf>", c7_str);
      c7_f_st.site = &c7_l_emlrtRSI;
      c7_b_warning(chartInstance, &c7_f_st, c7_str);
    }
  }
}

static real_T c7_norm(SFc7_LCTCompressionInstanceStruct *chartInstance, real_T
                      c7_x[9])
{
  real_T c7_b_i;
  real_T c7_b_j;
  real_T c7_b_x;
  real_T c7_b_y;
  real_T c7_c_x;
  real_T c7_d_x;
  real_T c7_e_x;
  real_T c7_s;
  real_T c7_y;
  int32_T c7_i;
  int32_T c7_j;
  boolean_T c7_b;
  boolean_T c7_exitg1;
  (void)chartInstance;
  c7_y = 0.0;
  c7_j = 0;
  c7_exitg1 = false;
  while ((!c7_exitg1) && (c7_j < 3)) {
    c7_b_j = 1.0 + (real_T)c7_j;
    c7_s = 0.0;
    for (c7_i = 0; c7_i < 3; c7_i++) {
      c7_b_i = 1.0 + (real_T)c7_i;
      c7_c_x = c7_x[((int32_T)c7_b_i + 3 * ((int32_T)c7_b_j - 1)) - 1];
      c7_d_x = c7_c_x;
      c7_e_x = c7_d_x;
      c7_b_y = muDoubleScalarAbs(c7_e_x);
      c7_s += c7_b_y;
    }

    c7_b_x = c7_s;
    c7_b = muDoubleScalarIsNaN(c7_b_x);
    if (c7_b) {
      c7_y = rtNaN;
      c7_exitg1 = true;
    } else {
      if (c7_s > c7_y) {
        c7_y = c7_s;
      }

      c7_j++;
    }
  }

  return c7_y;
}

static void c7_warning(SFc7_LCTCompressionInstanceStruct *chartInstance, const
  emlrtStack *c7_sp)
{
  static char_T c7_msgID[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'i',
    'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't', 'r', 'i', 'x' };

  static char_T c7_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c7_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c7_st;
  const mxArray *c7_b_y = NULL;
  const mxArray *c7_c_y = NULL;
  const mxArray *c7_y = NULL;
  c7_st.prev = c7_sp;
  c7_st.tls = c7_sp->tls;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_create("y", c7_cv, 10, 0U, 1U, 0U, 2, 1, 7), false);
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_create("y", c7_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c7_c_y = NULL;
  sf_mex_assign(&c7_c_y, sf_mex_create("y", c7_msgID, 10, 0U, 1U, 0U, 2, 1, 21),
                false);
  c7_st.site = &c7_m_emlrtRSI;
  c7_b_feval(chartInstance, &c7_st, c7_y, c7_feval(chartInstance, &c7_st, c7_b_y,
              c7_c_y));
}

static void c7_b_warning(SFc7_LCTCompressionInstanceStruct *chartInstance, const
  emlrtStack *c7_sp, char_T c7_varargin_1[14])
{
  static char_T c7_msgID[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'l', 'l', 'C', 'o', 'n', 'd', 'i', 't', 'i', 'o',
    'n', 'e', 'd', 'M', 'a', 't', 'r', 'i', 'x' };

  static char_T c7_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c7_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c7_st;
  const mxArray *c7_b_y = NULL;
  const mxArray *c7_c_y = NULL;
  const mxArray *c7_d_y = NULL;
  const mxArray *c7_y = NULL;
  c7_st.prev = c7_sp;
  c7_st.tls = c7_sp->tls;
  c7_y = NULL;
  sf_mex_assign(&c7_y, sf_mex_create("y", c7_cv, 10, 0U, 1U, 0U, 2, 1, 7), false);
  c7_b_y = NULL;
  sf_mex_assign(&c7_b_y, sf_mex_create("y", c7_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c7_c_y = NULL;
  sf_mex_assign(&c7_c_y, sf_mex_create("y", c7_msgID, 10, 0U, 1U, 0U, 2, 1, 33),
                false);
  c7_d_y = NULL;
  sf_mex_assign(&c7_d_y, sf_mex_create("y", c7_varargin_1, 10, 0U, 1U, 0U, 2, 1,
    14), false);
  c7_st.site = &c7_m_emlrtRSI;
  c7_d_feval(chartInstance, &c7_st, c7_y, c7_c_feval(chartInstance, &c7_st,
              c7_b_y, c7_c_y, c7_d_y));
}

static void c7_imlincomb(SFc7_LCTCompressionInstanceStruct *chartInstance,
  real_T c7_varargin_1, real_T c7_varargin_2[1228800], real_T c7_varargin_3,
  real_T c7_varargin_4[1228800], real_T c7_varargin_5, real_T c7_varargin_6
  [1228800], real_T c7_varargin_7, real_T c7_Z[1228800])
{
  real_T c7_multipliers[4];
  real_T c7_b_varargin_1;
  real_T c7_b_varargin_3;
  real_T c7_b_varargin_5;
  real_T c7_b_varargin_7;
  real_T c7_c_varargin_1;
  real_T c7_c_varargin_3;
  real_T c7_c_varargin_5;
  real_T c7_c_varargin_7;
  (void)chartInstance;
  c7_b_varargin_1 = c7_varargin_1;
  c7_b_varargin_3 = c7_varargin_3;
  c7_b_varargin_5 = c7_varargin_5;
  c7_b_varargin_7 = c7_varargin_7;
  c7_c_varargin_1 = c7_b_varargin_1;
  c7_c_varargin_3 = c7_b_varargin_3;
  c7_c_varargin_5 = c7_b_varargin_5;
  c7_c_varargin_7 = c7_b_varargin_7;
  c7_multipliers[0] = c7_c_varargin_1;
  c7_multipliers[1] = c7_c_varargin_3;
  c7_multipliers[2] = c7_c_varargin_5;
  c7_multipliers[3] = c7_c_varargin_7;
  imlincomb_tbb_real64(&c7_multipliers[0], 4.0, &c7_Z[0], 0, 1.2288E+6, 3.0,
                       &c7_varargin_2[0], &c7_varargin_4[0], &c7_varargin_6[0]);
}

static void c7_emlrt_marshallIn(SFc7_LCTCompressionInstanceStruct *chartInstance,
  const mxArray *c7_a__output_of_sprintf_, const char_T *c7_identifier, char_T
  c7_y[14])
{
  emlrtMsgIdentifier c7_thisId;
  c7_thisId.fIdentifier = (const char_T *)c7_identifier;
  c7_thisId.fParent = NULL;
  c7_thisId.bParentIsCell = false;
  c7_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c7_a__output_of_sprintf_),
                        &c7_thisId, c7_y);
  sf_mex_destroy(&c7_a__output_of_sprintf_);
}

static void c7_b_emlrt_marshallIn(SFc7_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId,
  char_T c7_y[14])
{
  int32_T c7_i;
  char_T c7_cv[14];
  (void)chartInstance;
  sf_mex_import(c7_parentId, sf_mex_dup(c7_u), c7_cv, 1, 10, 0U, 1, 0U, 2, 1, 14);
  for (c7_i = 0; c7_i < 14; c7_i++) {
    c7_y[c7_i] = c7_cv[c7_i];
  }

  sf_mex_destroy(&c7_u);
}

static void c7_c_emlrt_marshallIn(SFc7_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c7_d_I, const char_T *c7_identifier, real_T
  c7_y[3686400])
{
  emlrtMsgIdentifier c7_thisId;
  c7_thisId.fIdentifier = (const char_T *)c7_identifier;
  c7_thisId.fParent = NULL;
  c7_thisId.bParentIsCell = false;
  c7_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c7_d_I), &c7_thisId, c7_y);
  sf_mex_destroy(&c7_d_I);
}

static void c7_d_emlrt_marshallIn(SFc7_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId,
  real_T c7_y[3686400])
{
  int32_T c7_i;
  sf_mex_import(c7_parentId, sf_mex_dup(c7_u), chartInstance->c7_b_dv, 1, 0, 0U,
                1, 0U, 3, 960, 1280, 3);
  for (c7_i = 0; c7_i < 3686400; c7_i++) {
    c7_y[c7_i] = chartInstance->c7_b_dv[c7_i];
  }

  sf_mex_destroy(&c7_u);
}

static uint8_T c7_e_emlrt_marshallIn(SFc7_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c7_b_is_active_c7_LCTCompression, const char_T *
  c7_identifier)
{
  emlrtMsgIdentifier c7_thisId;
  uint8_T c7_y;
  c7_thisId.fIdentifier = (const char_T *)c7_identifier;
  c7_thisId.fParent = NULL;
  c7_thisId.bParentIsCell = false;
  c7_y = c7_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c7_b_is_active_c7_LCTCompression), &c7_thisId);
  sf_mex_destroy(&c7_b_is_active_c7_LCTCompression);
  return c7_y;
}

static uint8_T c7_f_emlrt_marshallIn(SFc7_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c7_u, const emlrtMsgIdentifier *c7_parentId)
{
  uint8_T c7_b_u;
  uint8_T c7_y;
  (void)chartInstance;
  sf_mex_import(c7_parentId, sf_mex_dup(c7_u), &c7_b_u, 1, 3, 0U, 0, 0U, 0);
  c7_y = c7_b_u;
  sf_mex_destroy(&c7_u);
  return c7_y;
}

static void c7_slStringInitializeDynamicBuffers
  (SFc7_LCTCompressionInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c7_chart_data_browse_helper(SFc7_LCTCompressionInstanceStruct
  *chartInstance, int32_T c7_ssIdNumber, const mxArray **c7_mxData, uint8_T
  *c7_isValueTooBig)
{
  (void)chartInstance;
  *c7_mxData = NULL;
  *c7_isValueTooBig = 0U;
  switch (c7_ssIdNumber) {
   case 4U:
    *c7_isValueTooBig = 1U;
    break;

   case 5U:
    *c7_isValueTooBig = 1U;
    break;

   case 8U:
    *c7_isValueTooBig = 1U;
    break;

   case 9U:
    *c7_isValueTooBig = 1U;
    break;
  }
}

static const mxArray *c7_feval(SFc7_LCTCompressionInstanceStruct *chartInstance,
  const emlrtStack *c7_sp, const mxArray *c7_input0, const mxArray *c7_input1)
{
  const mxArray *c7_m = NULL;
  (void)chartInstance;
  c7_m = NULL;
  sf_mex_assign(&c7_m, sf_mex_call(c7_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c7_input0), 14, sf_mex_dup(c7_input1)), false);
  sf_mex_destroy(&c7_input0);
  sf_mex_destroy(&c7_input1);
  return c7_m;
}

static void c7_b_feval(SFc7_LCTCompressionInstanceStruct *chartInstance, const
  emlrtStack *c7_sp, const mxArray *c7_input0, const mxArray *c7_input1)
{
  (void)chartInstance;
  sf_mex_call(c7_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c7_input0), 14,
              sf_mex_dup(c7_input1));
  sf_mex_destroy(&c7_input0);
  sf_mex_destroy(&c7_input1);
}

static const mxArray *c7_sprintf(SFc7_LCTCompressionInstanceStruct
  *chartInstance, const emlrtStack *c7_sp, const mxArray *c7_input0, const
  mxArray *c7_input1)
{
  const mxArray *c7_m = NULL;
  (void)chartInstance;
  c7_m = NULL;
  sf_mex_assign(&c7_m, sf_mex_call(c7_sp, NULL, "sprintf", 1U, 2U, 14,
    sf_mex_dup(c7_input0), 14, sf_mex_dup(c7_input1)), false);
  sf_mex_destroy(&c7_input0);
  sf_mex_destroy(&c7_input1);
  return c7_m;
}

static const mxArray *c7_c_feval(SFc7_LCTCompressionInstanceStruct
  *chartInstance, const emlrtStack *c7_sp, const mxArray *c7_input0, const
  mxArray *c7_input1, const mxArray *c7_input2)
{
  const mxArray *c7_m = NULL;
  (void)chartInstance;
  c7_m = NULL;
  sf_mex_assign(&c7_m, sf_mex_call(c7_sp, NULL, "feval", 1U, 3U, 14, sf_mex_dup
    (c7_input0), 14, sf_mex_dup(c7_input1), 14, sf_mex_dup(c7_input2)), false);
  sf_mex_destroy(&c7_input0);
  sf_mex_destroy(&c7_input1);
  sf_mex_destroy(&c7_input2);
  return c7_m;
}

static void c7_d_feval(SFc7_LCTCompressionInstanceStruct *chartInstance, const
  emlrtStack *c7_sp, const mxArray *c7_input0, const mxArray *c7_input1)
{
  (void)chartInstance;
  sf_mex_call(c7_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c7_input0), 14,
              sf_mex_dup(c7_input1));
  sf_mex_destroy(&c7_input0);
  sf_mex_destroy(&c7_input1);
}

static void init_dsm_address_info(SFc7_LCTCompressionInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc7_LCTCompressionInstanceStruct
  *chartInstance)
{
  chartInstance->c7_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c7_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c7_b_Y = (real_T (*)[1228800])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c7_c_I = (real_T (*)[3686400])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c7_b_Cb = (real_T (*)[1228800])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c7_b_Cr = (real_T (*)[1228800])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c7_LCTCompression_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(113871685U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2049932951U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(356638584U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(443942297U);
}

mxArray *sf_c7_LCTCompression_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Imlincomb_tbbBuildable"));
  return(mxcell3p);
}

mxArray *sf_c7_LCTCompression_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("imlincomb_tbb_real64");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c7_LCTCompression_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c7_LCTCompression(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiD+wcjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig4g/QZI+lkI6BcAsjyh4QILH/LtV3CgTD/E/g"
    "AC7pdGcT+En1kcn5hcklmWGp9sHu/jHOKcn1tQlFpcnJmfBzcXBAAYuRoS"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c7_LCTCompression_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s5vKPyNug9pm6O3PsHpwWj";
}

static void sf_opaque_initialize_c7_LCTCompression(void *chartInstanceVar)
{
  initialize_params_c7_LCTCompression((SFc7_LCTCompressionInstanceStruct*)
    chartInstanceVar);
  initialize_c7_LCTCompression((SFc7_LCTCompressionInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c7_LCTCompression(void *chartInstanceVar)
{
  enable_c7_LCTCompression((SFc7_LCTCompressionInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c7_LCTCompression(void *chartInstanceVar)
{
  disable_c7_LCTCompression((SFc7_LCTCompressionInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c7_LCTCompression(void *chartInstanceVar)
{
  sf_gateway_c7_LCTCompression((SFc7_LCTCompressionInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c7_LCTCompression(SimStruct* S)
{
  return get_sim_state_c7_LCTCompression((SFc7_LCTCompressionInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c7_LCTCompression(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c7_LCTCompression((SFc7_LCTCompressionInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c7_LCTCompression(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc7_LCTCompressionInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_LCTCompression_optimization_info();
    }

    mdl_cleanup_runtime_resources_c7_LCTCompression
      ((SFc7_LCTCompressionInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c7_LCTCompression(void *chartInstanceVar)
{
  mdl_start_c7_LCTCompression((SFc7_LCTCompressionInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c7_LCTCompression(void *chartInstanceVar)
{
  mdl_terminate_c7_LCTCompression((SFc7_LCTCompressionInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc7_LCTCompression((SFc7_LCTCompressionInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c7_LCTCompression(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c7_LCTCompression((SFc7_LCTCompressionInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc7_LCTCompression((SFc7_LCTCompressionInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c7_LCTCompression_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWN2O20QUtrNLSwWs9qKiSEWil1wiVfxJFezGSdqo2W6Es1uJm9WsfRIPGc+485NsELe8As/",
    "AJVdc9QWQeADeAm6QegdnbCcN3pB4sqK0iEiOM/Z8851z5vxNPL975OFnD6/f3vG8a3h/Ha+GV3",
    "xeK8f+0lU83/XuleODNzyPm7RPJEmV5/7hJIUvQAlmNBW8y4eiPpbyIUjgES6QCamdeBVNDaN83",
    "DE8sszqcUKjJEyEYXETFyTxMWezv+PNjO4jY4tKiHQHINaJFGaUdBgZrbeC1NMggWisTOpsKwU6",
    "NJlVVR0ZpmnGoH0BUZcrTdAKaoO+oSYaAn3hZmSrrwrnaJFmjBJe39YJUSFk6B0aTrIYv4+NRuv",
    "VwkYJkboJCZmA6tFxzi441GKnCmefU060kJSwdsoCu1pNffsMdTwSMTDXPUJ9mxLIOBOUa8eACD",
    "to5zYn5wxacG5GjrwhPDE2Gk4pTEG67e8wEBOQZATH3E3mfI/aF7lTLmKpJlbTFE6JPIzQdxXEb",
    "nkDg06FBN0RBriMExZyE3fVQNIJ+oYbr0m7Nvy3ynUmLbxfbYXNedsTcParBW8n4gFhTLlhByLr",
    "wQRYzt8immyBLfgdwErReCDQO2y2ccxYhlOMhBIbCB7T+l45qaDywvYIi1QNOE1tGECMZl6Ivlh",
    "oUxwZpUUaYMpp9Xo1+S5ju1yDHJIIatcYSagCFDj3K0femCobSIhGK+lcy9orFDG4FdRTQ8NbUy",
    "HHaGPXYvbcVjYS3NAQjzAxa8iTXBu9+5QwU1PmVI0wftA9ThRmWTdexNr42QockSiB2FZOyuAI8",
    "ywuUHeLlS35h6jthOpZC1QkaVY3kgwmdCy61kqDWQYnfMzFlHekSMOy81rjVwCYNYjklI+aWMLl",
    "rIPC15NawpNBnt1dmxxrZ6IZObe+cR84VkOrq+0aSIRR1eaRiFGgq2BD+jU2MVxRpbFQz4pSH+f",
    "99wfe8/77zRr997xvX4fzLuG8BW5+f38J76/g9ZbuVb4bjb/O36nwNfCJ7/s57mAJ91aFZ7eCs/",
    "P28fr9p1+v//jzyTdPb3739I/xtz9s4vcv8fv5b4v7vuF2vtkrx+/Oe5xFRp1cSjp27oMluXZXr",
    "P/20vr75Vh9OHnYnz0yo0+z9KPju331IJs+/qpY75m/Xt5GRd758zu2r8KAy+NXRt24PGPZMTFF",
    "72/X/2RJ3msb7HFjyZ/wpPj51fA3D6r7uLsBv4+/uhW/3Z7/zsHV8AV/f4P8tyv7fTvvs8+IzaZ",
    "wFn181gsGNitLTMnz7mCvZpyt83NXnPeCca+KnP/b5Z/Xr06d29kSty2f94JxV9XPtX6/6vPX1Q",
    "2vMn//JdZjXb536eNeNr1+8dz6rPfK8WeLM3+QUBavOHWUr/FgMFz19j/i388c7XerHLet/co/h",
    "7+8e8gJm+ExozjGlY/70v7Ht3glgajVZ7l/o57UiW9/6YxRxPeOd7/5cOt69Cd1ewwr",
    ""
  };

  static char newstr [1493] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c7_LCTCompression(SimStruct *S)
{
  const char* newstr = sf_c7_LCTCompression_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(133155317U));
  ssSetChecksum1(S,(2085997750U));
  ssSetChecksum2(S,(3163952316U));
  ssSetChecksum3(S,(2961533951U));
}

static void mdlRTW_c7_LCTCompression(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c7_LCTCompression(SimStruct *S)
{
  SFc7_LCTCompressionInstanceStruct *chartInstance;
  chartInstance = (SFc7_LCTCompressionInstanceStruct *)utMalloc(sizeof
    (SFc7_LCTCompressionInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc7_LCTCompressionInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c7_LCTCompression;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c7_LCTCompression;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c7_LCTCompression;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c7_LCTCompression;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c7_LCTCompression;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c7_LCTCompression;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c7_LCTCompression;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c7_LCTCompression;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c7_LCTCompression;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c7_LCTCompression;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c7_LCTCompression;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c7_LCTCompression;
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
    chartInstance->c7_JITStateAnimation,
    chartInstance->c7_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c7_LCTCompression(chartInstance);
}

void c7_LCTCompression_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c7_LCTCompression(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c7_LCTCompression(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c7_LCTCompression(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c7_LCTCompression_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
