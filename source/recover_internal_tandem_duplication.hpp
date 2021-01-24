#ifndef _RECOVER_INTERNAL_TANDEM_DUPLICATION
#define _RECOVER_INTERNAL_TANDEM_DUPLICATION 1

#include "common.hpp"
#include "read_stats.hpp"

using namespace std;

unsigned int recover_internal_tandem_duplication(fusions_t& fusions, const chimeric_alignments_t& chimeric_alignments, const coverage_t& coverage, const exon_annotation_index_t& exon_annotation_index, const unsigned int max_itd_length);

#endif /* _RECOVER_INTERNAL_TANDEM_DUPLICATION */
