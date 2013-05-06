#ifndef __WDIST_CNV_H__
#define __WDIST_CNV_H__

#include "wdist_common.h"

int32_t wdist_cnv(char* outname, char* outname_end, char* cnvname, char* mapname, char* famname, char* phenoname, char* extractname, char* excludename, char* keepname, char* removename, char* filtername, char* filterval, uint32_t filter_binary, int32_t allelexxxx, uint32_t cnv_calc_type, uint32_t min_seglen, uint32_t max_seglen, double min_score, double max_score, uint32_t min_sites, uint32_t max_sites, uint32_t intersect_filter_type, char* intersect_filter_fname, char* subset_fname, uint32_t overlap_type, double overlap_val, uint32_t freq_type, uint32_t freq_val, double freq_val2, uint32_t test_window, uint32_t segment_modifier, char* segment_spanning_fname, uint32_t indiv_mperms, uint32_t test_mperms, uint32_t test_region_mperms, uint32_t enrichment_test_mperms, char* markername_from, char* markername_to, int32_t marker_pos_start, int32_t marker_pos_end, Chrom_info* chrom_info_ptr);

int32_t wdist_gvar(char* outname, char* outname_end, char* gvarname, char* mapname, char* famname);

#endif // __WDIST_CNV_H__
