


int failures;

volatile _Decimal32 sd;
volatile _Decimal64 dd;
volatile _Decimal128 td;
volatile float sf;
volatile double df;
volatile long double tf;

void convert_t_sdsf_pinf (void) { ; sd = __builtin_infd32 (); sf = sd; if (__builtin_isinff (sf) == 0) __builtin_abort ();; if (__builtin_signbitf (sf) != 0) __builtin_abort ();; } void convert_t_sdsf_minf (void) { ; sd = -__builtin_infd32 (); sf = sd; if (__builtin_isinff (sf) == 0) __builtin_abort ();; if (__builtin_signbitf (sf) == 0) __builtin_abort ();; } void convert_t_sddf_pinf (void) { ; sd = __builtin_infd32 (); df = sd; if (__builtin_isinf (df) == 0) __builtin_abort ();; if (__builtin_signbit (df) != 0) __builtin_abort ();; } void convert_t_sddf_minf (void) { ; sd = -__builtin_infd32 (); df = sd; if (__builtin_isinf (df) == 0) __builtin_abort ();; if (__builtin_signbit (df) == 0) __builtin_abort ();; } void convert_t_ddsf_pinf (void) { ; dd = __builtin_infd64 (); sf = dd; if (__builtin_isinff (sf) == 0) __builtin_abort ();; if (__builtin_signbitf (sf) != 0) __builtin_abort ();; } void convert_t_ddsf_minf (void) { ; dd = -__builtin_infd64 (); sf = dd; if (__builtin_isinff (sf) == 0) __builtin_abort ();; if (__builtin_signbitf (sf) == 0) __builtin_abort ();; } void convert_t_dddf_pinf (void) { ; dd = __builtin_infd64 (); df = dd; if (__builtin_isinf (df) == 0) __builtin_abort ();; if (__builtin_signbit (df) != 0) __builtin_abort ();; } void convert_t_dddf_minf (void) { ; dd = -__builtin_infd64 (); df = dd; if (__builtin_isinf (df) == 0) __builtin_abort ();; if (__builtin_signbit (df) == 0) __builtin_abort ();; } void convert_t_tdsf_pinf (void) { ; td = __builtin_infd128 (); sf = td; if (__builtin_isinff (sf) == 0) __builtin_abort ();; if (__builtin_signbitf (sf) != 0) __builtin_abort ();; } void convert_t_tdsf_minf (void) { ; td = -__builtin_infd128 (); sf = td; if (__builtin_isinff (sf) == 0) __builtin_abort ();; if (__builtin_signbitf (sf) == 0) __builtin_abort ();; } void convert_t_tddf_pinf (void) { ; td = __builtin_infd128 (); df = td; if (__builtin_isinf (df) == 0) __builtin_abort ();; if (__builtin_signbit (df) != 0) __builtin_abort ();; } void convert_t_tddf_minf (void) { ; td = -__builtin_infd128 (); df = td; if (__builtin_isinf (df) == 0) __builtin_abort ();; if (__builtin_signbit (df) == 0) __builtin_abort ();; } void convert_t_sfsd_pinf (void) { ; sf = __builtin_inff (); sd = sf; if (__builtin_isinfd32 (sd) == 0) __builtin_abort ();; if (__builtin_signbitd32 (sd) != 0) __builtin_abort ();; } void convert_t_sfsd_minf (void) { ; sf = -__builtin_inff (); sd = sf; if (__builtin_isinfd32 (sd) == 0) __builtin_abort ();; if (__builtin_signbitd32 (sd) == 0) __builtin_abort ();; } void convert_t_sfdd_pinf (void) { ; sf = __builtin_inff (); dd = sf; if (__builtin_isinfd64 (dd) == 0) __builtin_abort ();; if (__builtin_signbitd64 (dd) != 0) __builtin_abort ();; } void convert_t_sfdd_minf (void) { ; sf = -__builtin_inff (); dd = sf; if (__builtin_isinfd64 (dd) == 0) __builtin_abort ();; if (__builtin_signbitd64 (dd) == 0) __builtin_abort ();; } void convert_t_sftd_pinf (void) { ; sf = __builtin_inff (); td = sf; if (__builtin_isinfd128 (td) == 0) __builtin_abort ();; if (__builtin_signbitd128 (td) != 0) __builtin_abort ();; } void convert_t_sftd_minf (void) { ; sf = -__builtin_inff (); td = sf; if (__builtin_isinfd128 (td) == 0) __builtin_abort ();; if (__builtin_signbitd128 (td) == 0) __builtin_abort ();; } void convert_t_dfsd_pinf (void) { ; df = __builtin_inf (); sd = df; if (__builtin_isinfd32 (sd) == 0) __builtin_abort ();; if (__builtin_signbitd32 (sd) != 0) __builtin_abort ();; } void convert_t_dfsd_minf (void) { ; df = -__builtin_inf (); sd = df; if (__builtin_isinfd32 (sd) == 0) __builtin_abort ();; if (__builtin_signbitd32 (sd) == 0) __builtin_abort ();; } void convert_t_dfdd_pinf (void) { ; df = __builtin_inf (); dd = df; if (__builtin_isinfd64 (dd) == 0) __builtin_abort ();; if (__builtin_signbitd64 (dd) != 0) __builtin_abort ();; } void convert_t_dfdd_minf (void) { ; df = -__builtin_inf (); dd = df; if (__builtin_isinfd64 (dd) == 0) __builtin_abort ();; if (__builtin_signbitd64 (dd) == 0) __builtin_abort ();; } void convert_t_dftd_pinf (void) { ; df = __builtin_inf (); td = df; if (__builtin_isinfd128 (td) == 0) __builtin_abort ();; if (__builtin_signbitd128 (td) != 0) __builtin_abort ();; } void convert_t_dftd_minf (void) { ; df = -__builtin_inf (); td = df; if (__builtin_isinfd128 (td) == 0) __builtin_abort ();; if (__builtin_signbitd128 (td) == 0) __builtin_abort ();; } void convert_t_sddd_pinf (void) { ; sd = __builtin_infd32 (); dd = sd; if (__builtin_isinfd64 (dd) == 0) __builtin_abort ();; if (__builtin_signbitd64 (dd) != 0) __builtin_abort ();; } void convert_t_sddd_minf (void) { ; sd = -__builtin_infd32 (); dd = sd; if (__builtin_isinfd64 (dd) == 0) __builtin_abort ();; if (__builtin_signbitd64 (dd) == 0) __builtin_abort ();; } void convert_t_sdtd_pinf (void) { ; sd = __builtin_infd32 (); td = sd; if (__builtin_isinfd128 (td) == 0) __builtin_abort ();; if (__builtin_signbitd128 (td) != 0) __builtin_abort ();; } void convert_t_sdtd_minf (void) { ; sd = -__builtin_infd32 (); td = sd; if (__builtin_isinfd128 (td) == 0) __builtin_abort ();; if (__builtin_signbitd128 (td) == 0) __builtin_abort ();; } void convert_t_ddsd_pinf (void) { ; dd = __builtin_infd64 (); sd = dd; if (__builtin_isinfd32 (sd) == 0) __builtin_abort ();; if (__builtin_signbitd32 (sd) != 0) __builtin_abort ();; } void convert_t_ddsd_minf (void) { ; dd = -__builtin_infd64 (); sd = dd; if (__builtin_isinfd32 (sd) == 0) __builtin_abort ();; if (__builtin_signbitd32 (sd) == 0) __builtin_abort ();; } void convert_t_ddtd_pinf (void) { ; dd = __builtin_infd64 (); td = dd; if (__builtin_isinfd128 (td) == 0) __builtin_abort ();; if (__builtin_signbitd128 (td) != 0) __builtin_abort ();; } void convert_t_ddtd_minf (void) { ; dd = -__builtin_infd64 (); td = dd; if (__builtin_isinfd128 (td) == 0) __builtin_abort ();; if (__builtin_signbitd128 (td) == 0) __builtin_abort ();; } void convert_t_tdsd_pinf (void) { ; td = __builtin_infd128 (); sd = td; if (__builtin_isinfd32 (sd) == 0) __builtin_abort ();; if (__builtin_signbitd32 (sd) != 0) __builtin_abort ();; } void convert_t_tdsd_minf (void) { ; td = -__builtin_infd128 (); sd = td; if (__builtin_isinfd32 (sd) == 0) __builtin_abort ();; if (__builtin_signbitd32 (sd) == 0) __builtin_abort ();; } void convert_t_tddd_pinf (void) { ; td = __builtin_infd128 (); dd = td; if (__builtin_isinfd64 (dd) == 0) __builtin_abort ();; if (__builtin_signbitd64 (dd) != 0) __builtin_abort ();; } void convert_t_tddd_minf (void) { ; td = -__builtin_infd128 (); dd = td; if (__builtin_isinfd64 (dd) == 0) __builtin_abort ();; if (__builtin_signbitd64 (dd) == 0) __builtin_abort ();; } void convert_t_sdtf_pinf (void) { ; sd = __builtin_infd32 (); tf = sd; if (__builtin_isinfl (tf) == 0) __builtin_abort ();; if (__builtin_signbitl (tf) != 0) __builtin_abort ();; } void convert_t_sdtf_minf (void) { ; sd = -__builtin_infd32 (); tf = sd; if (__builtin_isinfl (tf) == 0) __builtin_abort ();; if (__builtin_signbitl (tf) == 0) __builtin_abort ();; } void convert_t_ddtf_pinf (void) { ; dd = __builtin_infd64 (); tf = dd; if (__builtin_isinfl (tf) == 0) __builtin_abort ();; if (__builtin_signbitl (tf) != 0) __builtin_abort ();; } void convert_t_ddtf_minf (void) { ; dd = -__builtin_infd64 (); tf = dd; if (__builtin_isinfl (tf) == 0) __builtin_abort ();; if (__builtin_signbitl (tf) == 0) __builtin_abort ();; } void convert_t_tdtf_pinf (void) { ; td = __builtin_infd128 (); tf = td; if (__builtin_isinfl (tf) == 0) __builtin_abort ();; if (__builtin_signbitl (tf) != 0) __builtin_abort ();; } void convert_t_tdtf_minf (void) { ; td = -__builtin_infd128 (); tf = td; if (__builtin_isinfl (tf) == 0) __builtin_abort ();; if (__builtin_signbitl (tf) == 0) __builtin_abort ();; } void convert_t_tfsd_pinf (void) { ; tf = __builtin_infl (); sd = tf; if (__builtin_isinfd32 (sd) == 0) __builtin_abort ();; if (__builtin_signbitd32 (sd) != 0) __builtin_abort ();; } void convert_t_tfsd_minf (void) { ; tf = -__builtin_infl (); sd = tf; if (__builtin_isinfd32 (sd) == 0) __builtin_abort ();; if (__builtin_signbitd32 (sd) == 0) __builtin_abort ();; } void convert_t_tfdd_pinf (void) { ; tf = __builtin_infl (); dd = tf; if (__builtin_isinfd64 (dd) == 0) __builtin_abort ();; if (__builtin_signbitd64 (dd) != 0) __builtin_abort ();; } void convert_t_tfdd_minf (void) { ; tf = -__builtin_infl (); dd = tf; if (__builtin_isinfd64 (dd) == 0) __builtin_abort ();; if (__builtin_signbitd64 (dd) == 0) __builtin_abort ();; } void convert_t_tftd_pinf (void) { ; tf = __builtin_infl (); td = tf; if (__builtin_isinfd128 (td) == 0) __builtin_abort ();; if (__builtin_signbitd128 (td) != 0) __builtin_abort ();; } void convert_t_tftd_minf (void) { ; tf = -__builtin_infl (); td = tf; if (__builtin_isinfd128 (td) == 0) __builtin_abort ();; if (__builtin_signbitd128 (td) == 0) __builtin_abort ();; };

int
main ()
{
  convert_t_sdsf_pinf (); convert_t_sdsf_minf (); convert_t_sddf_pinf (); convert_t_sddf_minf (); convert_t_ddsf_pinf (); convert_t_ddsf_minf (); convert_t_dddf_pinf (); convert_t_dddf_minf (); convert_t_tdsf_pinf (); convert_t_tdsf_minf (); convert_t_tddf_pinf (); convert_t_tddf_minf (); convert_t_sfsd_pinf (); convert_t_sfsd_minf (); convert_t_sfdd_pinf (); convert_t_sfdd_minf (); convert_t_sftd_pinf (); convert_t_sftd_minf (); convert_t_dfsd_pinf (); convert_t_dfsd_minf (); convert_t_dfdd_pinf (); convert_t_dfdd_minf (); convert_t_dftd_pinf (); convert_t_dftd_minf (); convert_t_sddd_pinf (); convert_t_sddd_minf (); convert_t_sdtd_pinf (); convert_t_sdtd_minf (); convert_t_ddsd_pinf (); convert_t_ddsd_minf (); convert_t_ddtd_pinf (); convert_t_ddtd_minf (); convert_t_tdsd_pinf (); convert_t_tdsd_minf (); convert_t_tddd_pinf (); convert_t_tddd_minf (); convert_t_sdtf_pinf (); convert_t_sdtf_minf (); convert_t_ddtf_pinf (); convert_t_ddtf_minf (); convert_t_tdtf_pinf (); convert_t_tdtf_minf (); convert_t_tfsd_pinf (); convert_t_tfsd_minf (); convert_t_tfdd_pinf (); convert_t_tfdd_minf (); convert_t_tftd_pinf (); convert_t_tftd_minf ();

  return 0;
}
