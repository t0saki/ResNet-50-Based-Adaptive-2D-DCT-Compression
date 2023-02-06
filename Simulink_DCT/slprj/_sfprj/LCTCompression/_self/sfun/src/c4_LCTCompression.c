/* Include files */

#include "LCTCompression_sfun.h"
#include "c4_LCTCompression.h"
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
static emlrtRSInfo c4_emlrtRSI = { 3,  /* lineNo */
  "MATLAB Function1",                  /* fcnName */
  "#LCTCompression:54"                 /* pathName */
};

static emlrtRSInfo c4_b_emlrtRSI = { 31,/* lineNo */
  "rgb2ycbcr",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\rgb2ycbcr.m"/* pathName */
};

static emlrtRSInfo c4_c_emlrtRSI = { 93,/* lineNo */
  "rgb2ycbcr",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\rgb2ycbcr.m"/* pathName */
};

static emlrtRSInfo c4_d_emlrtRSI = { 13,/* lineNo */
  "imlincomb",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imlincomb.m"/* pathName */
};

static emlrtRSInfo c4_e_emlrtRSI = { 118,/* lineNo */
  "imlincomb",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imlincomb.m"/* pathName */
};

static emlrtRSInfo c4_f_emlrtRSI = { 170,/* lineNo */
  "imlincomb",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imlincomb.m"/* pathName */
};

static emlrtBCInfo c4_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  93,                                  /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "rgb2ycbcr",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\rgb2ycbcr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_emlrtDCI = { 93, /* lineNo */
  40,                                  /* colNo */
  "rgb2ycbcr",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\rgb2ycbcr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_b_emlrtBCI = { 1,/* iFirst */
  3,                                   /* iLast */
  93,                                  /* lineNo */
  49,                                  /* colNo */
  "",                                  /* aName */
  "rgb2ycbcr",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\rgb2ycbcr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_b_emlrtDCI = { 93,/* lineNo */
  49,                                  /* colNo */
  "rgb2ycbcr",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\rgb2ycbcr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_c_emlrtBCI = { 1,/* iFirst */
  3,                                   /* iLast */
  93,                                  /* lineNo */
  58,                                  /* colNo */
  "",                                  /* aName */
  "rgb2ycbcr",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\rgb2ycbcr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_c_emlrtDCI = { 93,/* lineNo */
  58,                                  /* colNo */
  "rgb2ycbcr",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\rgb2ycbcr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_d_emlrtBCI = { 1,/* iFirst */
  3,                                   /* iLast */
  93,                                  /* lineNo */
  72,                                  /* colNo */
  "",                                  /* aName */
  "rgb2ycbcr",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\rgb2ycbcr.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c4_d_emlrtDCI = { 93,/* lineNo */
  72,                                  /* colNo */
  "rgb2ycbcr",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\rgb2ycbcr.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c4_e_emlrtBCI = { 1,/* iFirst */
  3,                                   /* iLast */
  93,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "rgb2ycbcr",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\rgb2ycbcr.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c4_e_emlrtDCI = { 93,/* lineNo */
  23,                                  /* colNo */
  "rgb2ycbcr",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\colorspaces\\eml\\rgb2ycbcr.m",/* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c4_LCTCompression(SFc4_LCTCompressionInstanceStruct
  *chartInstance);
static void initialize_params_c4_LCTCompression
  (SFc4_LCTCompressionInstanceStruct *chartInstance);
static void mdl_start_c4_LCTCompression(SFc4_LCTCompressionInstanceStruct
  *chartInstance);
static void mdl_terminate_c4_LCTCompression(SFc4_LCTCompressionInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c4_LCTCompression
  (SFc4_LCTCompressionInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c4_LCTCompression
  (SFc4_LCTCompressionInstanceStruct *chartInstance);
static void enable_c4_LCTCompression(SFc4_LCTCompressionInstanceStruct
  *chartInstance);
static void disable_c4_LCTCompression(SFc4_LCTCompressionInstanceStruct
  *chartInstance);
static void sf_gateway_c4_LCTCompression(SFc4_LCTCompressionInstanceStruct
  *chartInstance);
static void ext_mode_exec_c4_LCTCompression(SFc4_LCTCompressionInstanceStruct
  *chartInstance);
static void c4_update_jit_animation_c4_LCTCompression
  (SFc4_LCTCompressionInstanceStruct *chartInstance);
static void c4_do_animation_call_c4_LCTCompression
  (SFc4_LCTCompressionInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c4_LCTCompression
  (SFc4_LCTCompressionInstanceStruct *chartInstance);
static void set_sim_state_c4_LCTCompression(SFc4_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c4_st);
static void initSimStructsc4_LCTCompression(SFc4_LCTCompressionInstanceStruct
  *chartInstance);
static void c4_rgb2ycbcr(SFc4_LCTCompressionInstanceStruct *chartInstance, const
  emlrtStack *c4_sp, real_T c4_X[3686400], real_T c4_ycbcr[3686400]);
static void c4_imlincomb(SFc4_LCTCompressionInstanceStruct *chartInstance,
  real_T c4_varargin_1, real_T c4_varargin_2[1228800], real_T c4_varargin_3,
  real_T c4_varargin_4[1228800], real_T c4_varargin_5, real_T c4_varargin_6
  [1228800], real_T c4_varargin_7, real_T c4_Z[1228800]);
static void c4_emlrt_marshallIn(SFc4_LCTCompressionInstanceStruct *chartInstance,
  const mxArray *c4_b_Cb, const char_T *c4_identifier, real_T c4_y[1228800]);
static void c4_b_emlrt_marshallIn(SFc4_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  real_T c4_y[1228800]);
static uint8_T c4_c_emlrt_marshallIn(SFc4_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c4_b_is_active_c4_LCTCompression, const char_T *
  c4_identifier);
static uint8_T c4_d_emlrt_marshallIn(SFc4_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId);
static void c4_slStringInitializeDynamicBuffers
  (SFc4_LCTCompressionInstanceStruct *chartInstance);
static void c4_chart_data_browse_helper(SFc4_LCTCompressionInstanceStruct
  *chartInstance, int32_T c4_ssIdNumber, const mxArray **c4_mxData, uint8_T
  *c4_isValueTooBig);
static void init_dsm_address_info(SFc4_LCTCompressionInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc4_LCTCompressionInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c4_LCTCompression(SFc4_LCTCompressionInstanceStruct
  *chartInstance)
{
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c4_st, (const char_T *)
    "EMLRT:runTime:MexFunctionNeedsLicense", (const char_T *)"image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c4_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c4_is_active_c4_LCTCompression = 0U;
}

static void initialize_params_c4_LCTCompression
  (SFc4_LCTCompressionInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c4_LCTCompression(SFc4_LCTCompressionInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c4_LCTCompression(SFc4_LCTCompressionInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c4_LCTCompression
  (SFc4_LCTCompressionInstanceStruct *chartInstance)
{
  static const uint32_T c4_decisionTxtEndIdx = 0U;
  static const uint32_T c4_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c4_chart_data_browse_helper);
  chartInstance->c4_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c4_RuntimeVar,
    &chartInstance->c4_IsDebuggerActive,
    &chartInstance->c4_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c4_mlFcnLineNumber, &chartInstance->c4_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c4_covrtInstance, 1U, 0U, 1U,
    22U);
  covrtChartInitFcn(chartInstance->c4_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c4_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c4_decisionTxtStartIdx, &c4_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c4_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c4_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c4_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 67);
}

static void mdl_cleanup_runtime_resources_c4_LCTCompression
  (SFc4_LCTCompressionInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c4_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c4_covrtInstance);
}

static void enable_c4_LCTCompression(SFc4_LCTCompressionInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c4_LCTCompression(SFc4_LCTCompressionInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c4_LCTCompression(SFc4_LCTCompressionInstanceStruct
  *chartInstance)
{
  emlrtStack c4_b_st;
  emlrtStack c4_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  c4_st.tls = chartInstance->c4_fEmlrtCtx;
  c4_b_st.prev = &c4_st;
  c4_b_st.tls = c4_st.tls;
  chartInstance->c4_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c4_i = 0; c4_i < 3686400; c4_i++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 0U,
                      (*chartInstance->c4_b_I)[c4_i]);
  }

  chartInstance->c4_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c4_covrtInstance, 4U, 0, 0);
  c4_b_st.site = &c4_emlrtRSI;
  for (c4_i1 = 0; c4_i1 < 3686400; c4_i1++) {
    chartInstance->c4_dv[c4_i1] = (*chartInstance->c4_b_I)[c4_i1];
  }

  c4_rgb2ycbcr(chartInstance, &c4_b_st, chartInstance->c4_dv,
               chartInstance->c4_I);
  c4_i2 = 0;
  for (c4_i3 = 0; c4_i3 < 1280; c4_i3++) {
    for (c4_i5 = 0; c4_i5 < 960; c4_i5++) {
      (*chartInstance->c4_Y)[c4_i5 + c4_i2] = chartInstance->c4_I[c4_i5 + c4_i2];
    }

    c4_i2 += 960;
  }

  c4_i4 = 0;
  for (c4_i6 = 0; c4_i6 < 1280; c4_i6++) {
    for (c4_i8 = 0; c4_i8 < 960; c4_i8++) {
      (*chartInstance->c4_Cb)[c4_i8 + c4_i4] = chartInstance->c4_I[(c4_i8 +
        c4_i4) + 1228800];
    }

    c4_i4 += 960;
  }

  c4_i7 = 0;
  for (c4_i9 = 0; c4_i9 < 1280; c4_i9++) {
    for (c4_i10 = 0; c4_i10 < 960; c4_i10++) {
      (*chartInstance->c4_Cr)[c4_i10 + c4_i7] = chartInstance->c4_I[(c4_i10 +
        c4_i7) + 2457600];
    }

    c4_i7 += 960;
  }

  c4_do_animation_call_c4_LCTCompression(chartInstance);
  for (c4_i11 = 0; c4_i11 < 1228800; c4_i11++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 1U, (*chartInstance->c4_Y)
                      [c4_i11]);
  }

  for (c4_i12 = 0; c4_i12 < 1228800; c4_i12++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 2U,
                      (*chartInstance->c4_Cb)[c4_i12]);
  }

  for (c4_i13 = 0; c4_i13 < 1228800; c4_i13++) {
    covrtSigUpdateFcn(chartInstance->c4_covrtInstance, 3U,
                      (*chartInstance->c4_Cr)[c4_i13]);
  }
}

static void ext_mode_exec_c4_LCTCompression(SFc4_LCTCompressionInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c4_update_jit_animation_c4_LCTCompression
  (SFc4_LCTCompressionInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_do_animation_call_c4_LCTCompression
  (SFc4_LCTCompressionInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c4_LCTCompression
  (SFc4_LCTCompressionInstanceStruct *chartInstance)
{
  const mxArray *c4_b_y = NULL;
  const mxArray *c4_c_y = NULL;
  const mxArray *c4_d_y = NULL;
  const mxArray *c4_e_y = NULL;
  const mxArray *c4_st;
  const mxArray *c4_y = NULL;
  c4_st = NULL;
  c4_st = NULL;
  c4_y = NULL;
  sf_mex_assign(&c4_y, sf_mex_createcellmatrix(4, 1), false);
  c4_b_y = NULL;
  sf_mex_assign(&c4_b_y, sf_mex_create("y", *chartInstance->c4_Cb, 0, 0U, 1U, 0U,
    2, 960, 1280), false);
  sf_mex_setcell(c4_y, 0, c4_b_y);
  c4_c_y = NULL;
  sf_mex_assign(&c4_c_y, sf_mex_create("y", *chartInstance->c4_Cr, 0, 0U, 1U, 0U,
    2, 960, 1280), false);
  sf_mex_setcell(c4_y, 1, c4_c_y);
  c4_d_y = NULL;
  sf_mex_assign(&c4_d_y, sf_mex_create("y", *chartInstance->c4_Y, 0, 0U, 1U, 0U,
    2, 960, 1280), false);
  sf_mex_setcell(c4_y, 2, c4_d_y);
  c4_e_y = NULL;
  sf_mex_assign(&c4_e_y, sf_mex_create("y",
    &chartInstance->c4_is_active_c4_LCTCompression, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c4_y, 3, c4_e_y);
  sf_mex_assign(&c4_st, c4_y, false);
  return c4_st;
}

static void set_sim_state_c4_LCTCompression(SFc4_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c4_st)
{
  const mxArray *c4_u;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i2;
  chartInstance->c4_doneDoubleBufferReInit = true;
  c4_u = sf_mex_dup(c4_st);
  c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 0)), "Cb",
                      chartInstance->c4_b_dv);
  for (c4_i = 0; c4_i < 1228800; c4_i++) {
    (*chartInstance->c4_Cb)[c4_i] = chartInstance->c4_b_dv[c4_i];
  }

  c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 1)), "Cr",
                      chartInstance->c4_dv1);
  for (c4_i1 = 0; c4_i1 < 1228800; c4_i1++) {
    (*chartInstance->c4_Cr)[c4_i1] = chartInstance->c4_dv1[c4_i1];
  }

  c4_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 2)), "Y",
                      chartInstance->c4_dv2);
  for (c4_i2 = 0; c4_i2 < 1228800; c4_i2++) {
    (*chartInstance->c4_Y)[c4_i2] = chartInstance->c4_dv2[c4_i2];
  }

  chartInstance->c4_is_active_c4_LCTCompression = c4_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c4_u, 3)),
     "is_active_c4_LCTCompression");
  sf_mex_destroy(&c4_u);
  sf_mex_destroy(&c4_st);
}

static void initSimStructsc4_LCTCompression(SFc4_LCTCompressionInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c4_LCTCompression_get_eml_resolved_functions_info(void)
{
  const mxArray *c4_nameCaptureInfo = NULL;
  c4_nameCaptureInfo = NULL;
  sf_mex_assign(&c4_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c4_nameCaptureInfo;
}

static void c4_rgb2ycbcr(SFc4_LCTCompressionInstanceStruct *chartInstance, const
  emlrtStack *c4_sp, real_T c4_X[3686400], real_T c4_ycbcr[3686400])
{
  static real_T c4_T[9] = { 0.25678823529411759, -0.1482235294117647,
    0.4392156862745098, 0.50412941176470583, -0.2909921568627451,
    -0.36778823529411764, 0.097905882352941176, 0.4392156862745098,
    -0.071427450980392146 };

  static real_T c4_offset[3] = { 0.062745098039215685, 0.50196078431372548,
    0.50196078431372548 };

  emlrtStack c4_st;
  real_T c4_b_p;
  int32_T c4_i;
  int32_T c4_i1;
  int32_T c4_i10;
  int32_T c4_i11;
  int32_T c4_i12;
  int32_T c4_i13;
  int32_T c4_i2;
  int32_T c4_i3;
  int32_T c4_i4;
  int32_T c4_i5;
  int32_T c4_i6;
  int32_T c4_i7;
  int32_T c4_i8;
  int32_T c4_i9;
  int32_T c4_p;
  c4_st.prev = c4_sp;
  c4_st.tls = c4_sp->tls;
  c4_st.site = &c4_b_emlrtRSI;
  c4_i = 0;
  for (c4_i1 = 0; c4_i1 < 1280; c4_i1++) {
    for (c4_i3 = 0; c4_i3 < 960; c4_i3++) {
      chartInstance->c4_R[c4_i3 + c4_i] = c4_X[c4_i3 + c4_i];
    }

    c4_i += 960;
  }

  c4_i2 = 0;
  for (c4_i4 = 0; c4_i4 < 1280; c4_i4++) {
    for (c4_i6 = 0; c4_i6 < 960; c4_i6++) {
      chartInstance->c4_G[c4_i6 + c4_i2] = c4_X[(c4_i6 + c4_i2) + 1228800];
    }

    c4_i2 += 960;
  }

  c4_i5 = 0;
  for (c4_i7 = 0; c4_i7 < 1280; c4_i7++) {
    for (c4_i8 = 0; c4_i8 < 960; c4_i8++) {
      chartInstance->c4_B[c4_i8 + c4_i5] = c4_X[(c4_i8 + c4_i5) + 2457600];
    }

    c4_i5 += 960;
  }

  for (c4_p = 0; c4_p < 3; c4_p++) {
    c4_b_p = 1.0 + (real_T)c4_p;
    if (c4_b_p != (real_T)(int32_T)muDoubleScalarFloor(c4_b_p)) {
      emlrtIntegerCheckR2012b(c4_b_p, &c4_emlrtDCI, &c4_st);
    }

    c4_i9 = (int32_T)c4_b_p;
    if ((c4_i9 < 1) || (c4_i9 > 3)) {
      emlrtDynamicBoundsCheckR2012b(c4_i9, 1, 3, &c4_emlrtBCI, &c4_st);
    }

    if (c4_b_p != (real_T)(int32_T)muDoubleScalarFloor(c4_b_p)) {
      emlrtIntegerCheckR2012b(c4_b_p, &c4_b_emlrtDCI, &c4_st);
    }

    c4_i10 = (int32_T)c4_b_p;
    if ((c4_i10 < 1) || (c4_i10 > 3)) {
      emlrtDynamicBoundsCheckR2012b(c4_i10, 1, 3, &c4_b_emlrtBCI, &c4_st);
    }

    if (c4_b_p != (real_T)(int32_T)muDoubleScalarFloor(c4_b_p)) {
      emlrtIntegerCheckR2012b(c4_b_p, &c4_c_emlrtDCI, &c4_st);
    }

    c4_i11 = (int32_T)c4_b_p;
    if ((c4_i11 < 1) || (c4_i11 > 3)) {
      emlrtDynamicBoundsCheckR2012b(c4_i11, 1, 3, &c4_c_emlrtBCI, &c4_st);
    }

    if (c4_b_p != (real_T)(int32_T)muDoubleScalarFloor(c4_b_p)) {
      emlrtIntegerCheckR2012b(c4_b_p, &c4_d_emlrtDCI, &c4_st);
    }

    c4_i12 = (int32_T)c4_b_p;
    if ((c4_i12 < 1) || (c4_i12 > 3)) {
      emlrtDynamicBoundsCheckR2012b(c4_i12, 1, 3, &c4_d_emlrtBCI, &c4_st);
    }

    if (c4_b_p != (real_T)(int32_T)muDoubleScalarFloor(c4_b_p)) {
      emlrtIntegerCheckR2012b(c4_b_p, &c4_e_emlrtDCI, &c4_st);
    }

    c4_i13 = (int32_T)c4_b_p;
    if ((c4_i13 < 1) || (c4_i13 > 3)) {
      emlrtDynamicBoundsCheckR2012b(c4_i13, 1, 3, &c4_e_emlrtBCI, &c4_st);
    }

    c4_imlincomb(chartInstance, c4_T[c4_i9 - 1], chartInstance->c4_R,
                 c4_T[c4_i10 + 2], chartInstance->c4_G, c4_T[c4_i11 + 5],
                 chartInstance->c4_B, c4_offset[c4_i12 - 1], *(real_T (*)
      [1228800])&c4_ycbcr[1228800 * (c4_i13 - 1)]);
  }
}

static void c4_imlincomb(SFc4_LCTCompressionInstanceStruct *chartInstance,
  real_T c4_varargin_1, real_T c4_varargin_2[1228800], real_T c4_varargin_3,
  real_T c4_varargin_4[1228800], real_T c4_varargin_5, real_T c4_varargin_6
  [1228800], real_T c4_varargin_7, real_T c4_Z[1228800])
{
  real_T c4_multipliers[4];
  real_T c4_b_varargin_1;
  real_T c4_b_varargin_3;
  real_T c4_b_varargin_5;
  real_T c4_b_varargin_7;
  real_T c4_c_varargin_1;
  real_T c4_c_varargin_3;
  real_T c4_c_varargin_5;
  real_T c4_c_varargin_7;
  (void)chartInstance;
  c4_b_varargin_1 = c4_varargin_1;
  c4_b_varargin_3 = c4_varargin_3;
  c4_b_varargin_5 = c4_varargin_5;
  c4_b_varargin_7 = c4_varargin_7;
  c4_c_varargin_1 = c4_b_varargin_1;
  c4_c_varargin_3 = c4_b_varargin_3;
  c4_c_varargin_5 = c4_b_varargin_5;
  c4_c_varargin_7 = c4_b_varargin_7;
  c4_multipliers[0] = c4_c_varargin_1;
  c4_multipliers[1] = c4_c_varargin_3;
  c4_multipliers[2] = c4_c_varargin_5;
  c4_multipliers[3] = c4_c_varargin_7;
  imlincomb_tbb_real64(&c4_multipliers[0], 4.0, &c4_Z[0], 0, 1.2288E+6, 3.0,
                       &c4_varargin_2[0], &c4_varargin_4[0], &c4_varargin_6[0]);
}

static void c4_emlrt_marshallIn(SFc4_LCTCompressionInstanceStruct *chartInstance,
  const mxArray *c4_b_Cb, const char_T *c4_identifier, real_T c4_y[1228800])
{
  emlrtMsgIdentifier c4_thisId;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c4_b_Cb), &c4_thisId, c4_y);
  sf_mex_destroy(&c4_b_Cb);
}

static void c4_b_emlrt_marshallIn(SFc4_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId,
  real_T c4_y[1228800])
{
  int32_T c4_i;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), chartInstance->c4_c_dv, 1, 0, 0U,
                1, 0U, 2, 960, 1280);
  for (c4_i = 0; c4_i < 1228800; c4_i++) {
    c4_y[c4_i] = chartInstance->c4_c_dv[c4_i];
  }

  sf_mex_destroy(&c4_u);
}

static uint8_T c4_c_emlrt_marshallIn(SFc4_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c4_b_is_active_c4_LCTCompression, const char_T *
  c4_identifier)
{
  emlrtMsgIdentifier c4_thisId;
  uint8_T c4_y;
  c4_thisId.fIdentifier = (const char_T *)c4_identifier;
  c4_thisId.fParent = NULL;
  c4_thisId.bParentIsCell = false;
  c4_y = c4_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c4_b_is_active_c4_LCTCompression), &c4_thisId);
  sf_mex_destroy(&c4_b_is_active_c4_LCTCompression);
  return c4_y;
}

static uint8_T c4_d_emlrt_marshallIn(SFc4_LCTCompressionInstanceStruct
  *chartInstance, const mxArray *c4_u, const emlrtMsgIdentifier *c4_parentId)
{
  uint8_T c4_b_u;
  uint8_T c4_y;
  (void)chartInstance;
  sf_mex_import(c4_parentId, sf_mex_dup(c4_u), &c4_b_u, 1, 3, 0U, 0, 0U, 0);
  c4_y = c4_b_u;
  sf_mex_destroy(&c4_u);
  return c4_y;
}

static void c4_slStringInitializeDynamicBuffers
  (SFc4_LCTCompressionInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c4_chart_data_browse_helper(SFc4_LCTCompressionInstanceStruct
  *chartInstance, int32_T c4_ssIdNumber, const mxArray **c4_mxData, uint8_T
  *c4_isValueTooBig)
{
  (void)chartInstance;
  *c4_mxData = NULL;
  *c4_isValueTooBig = 0U;
  switch (c4_ssIdNumber) {
   case 4U:
    *c4_isValueTooBig = 1U;
    break;

   case 5U:
    *c4_isValueTooBig = 1U;
    break;

   case 6U:
    *c4_isValueTooBig = 1U;
    break;

   case 7U:
    *c4_isValueTooBig = 1U;
    break;
  }
}

static void init_dsm_address_info(SFc4_LCTCompressionInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc4_LCTCompressionInstanceStruct
  *chartInstance)
{
  chartInstance->c4_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c4_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c4_b_I = (real_T (*)[3686400])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c4_Y = (real_T (*)[1228800])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c4_Cb = (real_T (*)[1228800])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c4_Cr = (real_T (*)[1228800])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c4_LCTCompression_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3433278859U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3656075187U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2225676913U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2505872910U);
}

mxArray *sf_c4_LCTCompression_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Imlincomb_tbbBuildable"));
  return(mxcell3p);
}

mxArray *sf_c4_LCTCompression_jit_fallback_info(void)
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

mxArray *sf_c4_LCTCompression_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c4_LCTCompression(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiCuYGZgYAPSHEDMxAABrFA+IxCzQGmIOAtcXAGISyoLUkHixUXJnilAOi8xF8x"
    "PLK3wzEvLB5tvwYAwnw2L+YxI5nNCxSHggz1l+iUcQPoNkPSzYNHPhKRfAMhzToKECyx8Bs79Mu"
    "S5v2iwuF+EKPczorifkSGSgVruV3CgTD/E/gAC7pdGcT+En1kcn5hcklmWGp9sEu/jHOKcn1tQl"
    "FpcnJmfBzcXBAAQQyD9"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c4_LCTCompression_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "svUaMpeEBhLE890dMyxaBq";
}

static void sf_opaque_initialize_c4_LCTCompression(void *chartInstanceVar)
{
  initialize_params_c4_LCTCompression((SFc4_LCTCompressionInstanceStruct*)
    chartInstanceVar);
  initialize_c4_LCTCompression((SFc4_LCTCompressionInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c4_LCTCompression(void *chartInstanceVar)
{
  enable_c4_LCTCompression((SFc4_LCTCompressionInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c4_LCTCompression(void *chartInstanceVar)
{
  disable_c4_LCTCompression((SFc4_LCTCompressionInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c4_LCTCompression(void *chartInstanceVar)
{
  sf_gateway_c4_LCTCompression((SFc4_LCTCompressionInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c4_LCTCompression(SimStruct* S)
{
  return get_sim_state_c4_LCTCompression((SFc4_LCTCompressionInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c4_LCTCompression(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c4_LCTCompression((SFc4_LCTCompressionInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c4_LCTCompression(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc4_LCTCompressionInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_LCTCompression_optimization_info();
    }

    mdl_cleanup_runtime_resources_c4_LCTCompression
      ((SFc4_LCTCompressionInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c4_LCTCompression(void *chartInstanceVar)
{
  mdl_start_c4_LCTCompression((SFc4_LCTCompressionInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c4_LCTCompression(void *chartInstanceVar)
{
  mdl_terminate_c4_LCTCompression((SFc4_LCTCompressionInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc4_LCTCompression((SFc4_LCTCompressionInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c4_LCTCompression(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c4_LCTCompression((SFc4_LCTCompressionInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc4_LCTCompression((SFc4_LCTCompressionInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c4_LCTCompression_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWN1u40QUnqRhxQqoeoEA7a7EXu7lSiBRJARtHGeJSGiE0yK4qab2STzKeOzOT5rsI/AUXPM",
    "avASPgbhAXHLGdrJpGlJPsux2EZYmztjznb85f2NS6/QIXvs4sgeE3MP72zjqpLjeKue1pVE8b5",
    "AvyvnRO4QIk/SppIki7pegCXwHKuVGs1R0xDCtjmViCBJEiASyVGonvoolhjMxbhsRWs7q+5iFc",
    "RCnhkdNJEijE8Fn/8Q3M7qPHFtMQqjbAJGOZWpGcZvT0WYrSH3lxRCOlUmcbaVAByazqqqe4Zpl",
    "HPwphB2hNEUrqFv0DTTV4Ompm5GtviqYo9Mk44yK6raOqQogQ+/QcJpF+HtiNFqvEjaMqdRNiOk",
    "EVJeNc+6pgErcmcLVF0xQnUpGuZ9wz1KrqG+fo469NALuukeob1MCHWcpE9oxIII22tkX9IJDCy",
    "7MyJFvAJfGRsMZgyuQbvs79NIJSDqCE+Emc75H/jR3ykUsVcRqlsAZlcch+q6CyC1vYNCpgKI7w",
    "gDJOGEhN3FHDSSboG+48TVJx4b/VrnOJIX3q62wOV9/As5+teDbDoVHOVdu2EGadWECPOffoppu",
    "gS34O4CVYtEgRe+w2cYxYxnBMBJKrJeKiFX3yskKKi9s32KRqgBniQ0DiNDMC9EXhG6LI6N0mni",
    "YclrdbkV+N7EdoUEOaQiVa4ykTAEKnPuVI9+IKRtIiEYr6VzLyhSKGNwKStTQiNZVKsdoY9di9s",
    "JWNhLc0BCNMDFryJOcj959RrmpKHOiRhg/6B6nCrOsG1/E2vjZChzSMIbIVk7GoYd5FglU3WJlS",
    "/4xajthetYCFUqWVY0kgwkdi6610mCWwakYi/RKtGWaBGXntcGvADBrUCmYGDWxhMtZG4WvJrWE",
    "y0Ge3V2bHGtnqjm9sL7xDARWQ6ur7RpoiFHlizCNUKBdsAF7jk2MUExpLNSzotRHef/9lLzov9+",
    "t0H/P+/ZNOHIDRxa4+f3JEr62hi9Zuq/yu1/fLGcd/9VK3NES7r0VPo0VnF13gGP052fH8a9/NL",
    "xG/Mvhzz/1d+H/pOF2vtkv54/mPc4io05uJB279usluRpr6H+wRP+gnKvJKe1l4Dfjrn/4+dOoN",
    "5vS5mVBb7q3Wd7Girzz549tX4UBl8evDDtRecayc2qK3t/SP1yS994t9ri/5E+E/P7VbviPjlb3",
    "cZ296tfsVSfexXW/fX3yP9pOfnlX5H+/kvy1a/LXyA/kZcn/+Gg3fMG/f4v8D1fi7WF+zjmntpr",
    "Befjpedcb2KoosSTOu7P9l5DnXHHkFePeFDn/t8u/r1+VPmNb3N6WOPKKcbvq59o/venrN9UNsr",
    "L+4A7rsSnfu/TRd02v34hbn/txOf9y8c3FixmP1pz6ytd4MBuue/sf8e+/HO33YTn3rf3Kj/M/f",
    "nIsKJ/hMa84RpeP+9J+Y128kkDV+rP066gnVeLbrt67Ft975Fnzm63r0d/4OQ8I",
    ""
  };

  static char newstr [1489] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c4_LCTCompression(SimStruct *S)
{
  const char* newstr = sf_c4_LCTCompression_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1094186599U));
  ssSetChecksum1(S,(83018600U));
  ssSetChecksum2(S,(2858943555U));
  ssSetChecksum3(S,(1351262264U));
}

static void mdlRTW_c4_LCTCompression(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c4_LCTCompression(SimStruct *S)
{
  SFc4_LCTCompressionInstanceStruct *chartInstance;
  chartInstance = (SFc4_LCTCompressionInstanceStruct *)utMalloc(sizeof
    (SFc4_LCTCompressionInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc4_LCTCompressionInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c4_LCTCompression;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c4_LCTCompression;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c4_LCTCompression;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c4_LCTCompression;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c4_LCTCompression;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c4_LCTCompression;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c4_LCTCompression;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c4_LCTCompression;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c4_LCTCompression;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c4_LCTCompression;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c4_LCTCompression;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c4_LCTCompression;
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
    chartInstance->c4_JITStateAnimation,
    chartInstance->c4_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c4_LCTCompression(chartInstance);
}

void c4_LCTCompression_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c4_LCTCompression(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c4_LCTCompression(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c4_LCTCompression(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c4_LCTCompression_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
