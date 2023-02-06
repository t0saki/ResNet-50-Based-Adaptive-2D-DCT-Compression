/* Include files */

#include "DCT_sfun.h"
#include "c4_DCT.h"
#include "c7_DCT.h"

/* Forward Declarations */
/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void DCT_initializer(void)
{
}

void DCT_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_DCT_method_dispatcher(SimStruct *simstructPtr, unsigned int
  chartFileNumber, const char* specsCksum, int_T method, void *data)
{
  if (chartFileNumber==4) {
    c4_DCT_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  if (chartFileNumber==7) {
    c7_DCT_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_DCT_process_check_sum_call( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2563268730U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1165056159U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3413200994U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(274868040U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 4:
        {
          extern void sf_c4_DCT_get_check_sum(mxArray *plhs[]);
          sf_c4_DCT_get_check_sum(plhs);
          break;
        }

       case 7:
        {
          extern void sf_c7_DCT_get_check_sum(mxArray *plhs[]);
          sf_c7_DCT_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(211484093U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(405444128U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1542987301U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(616093678U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3149922834U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4256585811U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1272280394U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2229477158U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_DCT_get_eml_resolved_functions_info( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  char instanceChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    mxGetString(prhs[2], instanceChksum,sizeof(instanceChksum)/sizeof(char));
    instanceChksum[(sizeof(instanceChksum)/sizeof(char)-1)] = '\0';
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 4:
      {
        if (strcmp(instanceChksum, "svUaMpeEBhLE890dMyxaBq") == 0) {
          extern const mxArray *sf_c4_DCT_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c4_DCT_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     case 7:
      {
        if (strcmp(instanceChksum, "sAmq8LoFuY4RIEt8R780izG") == 0) {
          extern const mxArray *sf_c7_DCT_get_eml_resolved_functions_info(void);
          mxArray *persistentMxArray = (mxArray *)
            sf_c7_DCT_get_eml_resolved_functions_info();
          plhs[0] = mxDuplicateArray(persistentMxArray);
          mxDestroyArray(persistentMxArray);
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_DCT_third_party_uses_info( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the third_party_uses_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 4:
      {
        if (strcmp(tpChksum, "svUaMpeEBhLE890dMyxaBq") == 0) {
          extern mxArray *sf_c4_DCT_third_party_uses_info(void);
          plhs[0] = sf_c4_DCT_third_party_uses_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "sAmq8LoFuY4RIEt8R780izG") == 0) {
          extern mxArray *sf_c7_DCT_third_party_uses_info(void);
          plhs[0] = sf_c7_DCT_third_party_uses_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_DCT_jit_fallback_info( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the jit_fallback_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_jit_fallback_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 4:
      {
        if (strcmp(tpChksum, "svUaMpeEBhLE890dMyxaBq") == 0) {
          extern mxArray *sf_c4_DCT_jit_fallback_info(void);
          plhs[0] = sf_c4_DCT_jit_fallback_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "sAmq8LoFuY4RIEt8R780izG") == 0) {
          extern mxArray *sf_c7_DCT_jit_fallback_info(void);
          plhs[0] = sf_c7_DCT_jit_fallback_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_DCT_get_post_codegen_info( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get_post_codegen_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_post_codegen_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 4:
      {
        if (strcmp(tpChksum, "svUaMpeEBhLE890dMyxaBq") == 0) {
          const char *sf_c4_DCT_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c4_DCT_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "sAmq8LoFuY4RIEt8R780izG") == 0) {
          const char *sf_c7_DCT_get_post_codegen_info(void);
          const char* encoded_post_codegen_info =
            sf_c7_DCT_get_post_codegen_info();
          plhs[0] = sf_mex_decode(encoded_post_codegen_info);
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

unsigned int sf_DCT_updateBuildInfo_args_info( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{
  char commandName[64];
  char tpChksum[64];
  if (nrhs<3 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the updateBuildInfo_args_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  mxGetString(prhs[2], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 4:
      {
        if (strcmp(tpChksum, "svUaMpeEBhLE890dMyxaBq") == 0) {
          extern mxArray *sf_c4_DCT_updateBuildInfo_args_info(void);
          plhs[0] = sf_c4_DCT_updateBuildInfo_args_info();
          break;
        }
      }

     case 7:
      {
        if (strcmp(tpChksum, "sAmq8LoFuY4RIEt8R780izG") == 0) {
          extern mxArray *sf_c7_DCT_updateBuildInfo_args_info(void);
          plhs[0] = sf_c7_DCT_updateBuildInfo_args_info();
          break;
        }
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;
}

void DCT_register_exported_symbols(SimStruct* S)
{
}

static mxArray* sRtwOptimizationInfoStruct= NULL;
typedef struct SfOptimizationInfoFlagsTag {
  boolean_T isRtwGen;
  boolean_T isModelRef;
  boolean_T isExternal;
} SfOptimizationInfoFlags;

static SfOptimizationInfoFlags sOptimizationInfoFlags;
void unload_DCT_optimization_info(void);
mxArray* load_DCT_optimization_info(boolean_T isRtwGen, boolean_T isModelRef,
  boolean_T isExternal)
{
  if (sOptimizationInfoFlags.isRtwGen != isRtwGen ||
      sOptimizationInfoFlags.isModelRef != isModelRef ||
      sOptimizationInfoFlags.isExternal != isExternal) {
    unload_DCT_optimization_info();
  }

  sOptimizationInfoFlags.isRtwGen = isRtwGen;
  sOptimizationInfoFlags.isModelRef = isModelRef;
  sOptimizationInfoFlags.isExternal = isExternal;
  if (sRtwOptimizationInfoStruct==NULL) {
    sRtwOptimizationInfoStruct = sf_load_rtw_optimization_info("DCT", "DCT");
    mexMakeArrayPersistent(sRtwOptimizationInfoStruct);
  }

  return(sRtwOptimizationInfoStruct);
}

void unload_DCT_optimization_info(void)
{
  if (sRtwOptimizationInfoStruct!=NULL) {
    mxDestroyArray(sRtwOptimizationInfoStruct);
    sRtwOptimizationInfoStruct = NULL;
  }
}
