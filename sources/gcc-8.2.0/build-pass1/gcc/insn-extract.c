/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 5251:  /* atomic_bit_test_and_complementdi_1 */
    case 5250:  /* atomic_bit_test_and_complementsi_1 */
    case 5249:  /* atomic_bit_test_and_complementhi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 2);
      recog_data.dup_num[2] = 1;
      break;

    case 5254:  /* atomic_bit_test_and_resetdi_1 */
    case 5253:  /* atomic_bit_test_and_resetsi_1 */
    case 5252:  /* atomic_bit_test_and_resethi_1 */
    case 5248:  /* atomic_bit_test_and_setdi_1 */
    case 5247:  /* atomic_bit_test_and_setsi_1 */
    case 5246:  /* atomic_bit_test_and_sethi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 5245:  /* atomic_xordi */
    case 5244:  /* atomic_ordi */
    case 5243:  /* atomic_anddi */
    case 5242:  /* atomic_xorsi */
    case 5241:  /* atomic_orsi */
    case 5240:  /* atomic_andsi */
    case 5239:  /* atomic_xorhi */
    case 5238:  /* atomic_orhi */
    case 5237:  /* atomic_andhi */
    case 5236:  /* atomic_xorqi */
    case 5235:  /* atomic_orqi */
    case 5234:  /* atomic_andqi */
    case 5233:  /* atomic_subdi */
    case 5232:  /* atomic_subsi */
    case 5231:  /* atomic_subhi */
    case 5230:  /* atomic_subqi */
    case 5229:  /* atomic_adddi */
    case 5228:  /* atomic_addsi */
    case 5227:  /* atomic_addhi */
    case 5226:  /* atomic_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 5225:  /* atomic_exchangedi */
    case 5224:  /* atomic_exchangesi */
    case 5223:  /* atomic_exchangehi */
    case 5222:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 5221:  /* *atomic_fetch_add_cmpdi */
    case 5220:  /* *atomic_fetch_add_cmpsi */
    case 5219:  /* *atomic_fetch_add_cmphi */
    case 5218:  /* *atomic_fetch_add_cmpqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 5217:  /* atomic_fetch_adddi */
    case 5216:  /* atomic_fetch_addsi */
    case 5215:  /* atomic_fetch_addhi */
    case 5214:  /* atomic_fetch_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 5213:  /* atomic_compare_and_swapdi_1 */
    case 5212:  /* atomic_compare_and_swapsi_1 */
    case 5211:  /* atomic_compare_and_swaphi_1 */
    case 5210:  /* atomic_compare_and_swapqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 5209:  /* atomic_compare_and_swapti_doubleword */
    case 5208:  /* atomic_compare_and_swapdi_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 5197:  /* mfence_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 5016:  /* restore_multiple_leave_returndi */
    case 5015:  /* restore_multiple_leave_returnsi */
    case 5014:  /* restore_multiple_and_returndi */
    case 5013:  /* restore_multiple_and_returnsi */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 5012:  /* restore_multipledi */
    case 5011:  /* restore_multiplesi */
    case 5010:  /* save_multipledi */
    case 5009:  /* save_multiplesi */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 4877:  /* avx512dq_vmfpclassv2df */
    case 4876:  /* avx512dq_vmfpclassv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 4909:  /* avx512f_vgetmantv2df_mask_round */
    case 4905:  /* avx512f_vgetmantv4sf_mask_round */
    case 4863:  /* avx512dq_rangesv2df_mask_round */
    case 4859:  /* avx512dq_rangesv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4821:  /* compressstorev8hi_mask */
    case 4820:  /* compressstorev16hi_mask */
    case 4819:  /* compressstorev32hi_mask */
    case 4818:  /* compressstorev32qi_mask */
    case 4817:  /* compressstorev16qi_mask */
    case 4816:  /* compressstorev64qi_mask */
    case 4815:  /* avx512vl_compressstorev2df_mask */
    case 4814:  /* avx512vl_compressstorev2di_mask */
    case 4813:  /* avx512vl_compressstorev4sf_mask */
    case 4812:  /* avx512vl_compressstorev4si_mask */
    case 4811:  /* avx512vl_compressstorev4df_mask */
    case 4810:  /* avx512vl_compressstorev4di_mask */
    case 4809:  /* avx512vl_compressstorev8sf_mask */
    case 4808:  /* avx512vl_compressstorev8si_mask */
    case 4807:  /* avx512f_compressstorev8df_mask */
    case 4806:  /* avx512f_compressstorev8di_mask */
    case 4805:  /* avx512f_compressstorev16sf_mask */
    case 4804:  /* avx512f_compressstorev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 4785:  /* *avx512f_scatterdiv2df */
    case 4784:  /* *avx512f_scatterdiv2df */
    case 4783:  /* *avx512f_scatterdiv2di */
    case 4782:  /* *avx512f_scatterdiv2di */
    case 4781:  /* *avx512f_scatterdiv4sf */
    case 4780:  /* *avx512f_scatterdiv4sf */
    case 4779:  /* *avx512f_scatterdiv4si */
    case 4778:  /* *avx512f_scatterdiv4si */
    case 4777:  /* *avx512f_scatterdiv4df */
    case 4776:  /* *avx512f_scatterdiv4df */
    case 4775:  /* *avx512f_scatterdiv4di */
    case 4774:  /* *avx512f_scatterdiv4di */
    case 4773:  /* *avx512f_scatterdiv8sf */
    case 4772:  /* *avx512f_scatterdiv8sf */
    case 4771:  /* *avx512f_scatterdiv8si */
    case 4770:  /* *avx512f_scatterdiv8si */
    case 4769:  /* *avx512f_scatterdiv8df */
    case 4768:  /* *avx512f_scatterdiv8df */
    case 4767:  /* *avx512f_scatterdiv8di */
    case 4766:  /* *avx512f_scatterdiv8di */
    case 4765:  /* *avx512f_scatterdiv16sf */
    case 4764:  /* *avx512f_scatterdiv16sf */
    case 4763:  /* *avx512f_scatterdiv16si */
    case 4762:  /* *avx512f_scatterdiv16si */
    case 4761:  /* *avx512f_scattersiv2df */
    case 4760:  /* *avx512f_scattersiv2df */
    case 4759:  /* *avx512f_scattersiv2di */
    case 4758:  /* *avx512f_scattersiv2di */
    case 4757:  /* *avx512f_scattersiv4sf */
    case 4756:  /* *avx512f_scattersiv4sf */
    case 4755:  /* *avx512f_scattersiv4si */
    case 4754:  /* *avx512f_scattersiv4si */
    case 4753:  /* *avx512f_scattersiv4df */
    case 4752:  /* *avx512f_scattersiv4df */
    case 4751:  /* *avx512f_scattersiv4di */
    case 4750:  /* *avx512f_scattersiv4di */
    case 4749:  /* *avx512f_scattersiv8sf */
    case 4748:  /* *avx512f_scattersiv8sf */
    case 4747:  /* *avx512f_scattersiv8si */
    case 4746:  /* *avx512f_scattersiv8si */
    case 4745:  /* *avx512f_scattersiv8df */
    case 4744:  /* *avx512f_scattersiv8df */
    case 4743:  /* *avx512f_scattersiv8di */
    case 4742:  /* *avx512f_scattersiv8di */
    case 4741:  /* *avx512f_scattersiv16sf */
    case 4740:  /* *avx512f_scattersiv16sf */
    case 4739:  /* *avx512f_scattersiv16si */
    case 4738:  /* *avx512f_scattersiv16si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 4737:  /* *avx512f_gatherdiv2df_2 */
    case 4736:  /* *avx512f_gatherdiv2df_2 */
    case 4735:  /* *avx512f_gatherdiv2di_2 */
    case 4734:  /* *avx512f_gatherdiv2di_2 */
    case 4733:  /* *avx512f_gatherdiv4sf_2 */
    case 4732:  /* *avx512f_gatherdiv4sf_2 */
    case 4731:  /* *avx512f_gatherdiv4si_2 */
    case 4730:  /* *avx512f_gatherdiv4si_2 */
    case 4729:  /* *avx512f_gatherdiv4df_2 */
    case 4728:  /* *avx512f_gatherdiv4df_2 */
    case 4727:  /* *avx512f_gatherdiv4di_2 */
    case 4726:  /* *avx512f_gatherdiv4di_2 */
    case 4725:  /* *avx512f_gatherdiv8sf_2 */
    case 4724:  /* *avx512f_gatherdiv8sf_2 */
    case 4723:  /* *avx512f_gatherdiv8si_2 */
    case 4722:  /* *avx512f_gatherdiv8si_2 */
    case 4721:  /* *avx512f_gatherdiv8df_2 */
    case 4720:  /* *avx512f_gatherdiv8df_2 */
    case 4719:  /* *avx512f_gatherdiv8di_2 */
    case 4718:  /* *avx512f_gatherdiv8di_2 */
    case 4717:  /* *avx512f_gatherdiv16sf_2 */
    case 4716:  /* *avx512f_gatherdiv16sf_2 */
    case 4715:  /* *avx512f_gatherdiv16si_2 */
    case 4714:  /* *avx512f_gatherdiv16si_2 */
    case 4689:  /* *avx512f_gathersiv2df_2 */
    case 4688:  /* *avx512f_gathersiv2df_2 */
    case 4687:  /* *avx512f_gathersiv2di_2 */
    case 4686:  /* *avx512f_gathersiv2di_2 */
    case 4685:  /* *avx512f_gathersiv4sf_2 */
    case 4684:  /* *avx512f_gathersiv4sf_2 */
    case 4683:  /* *avx512f_gathersiv4si_2 */
    case 4682:  /* *avx512f_gathersiv4si_2 */
    case 4681:  /* *avx512f_gathersiv4df_2 */
    case 4680:  /* *avx512f_gathersiv4df_2 */
    case 4679:  /* *avx512f_gathersiv4di_2 */
    case 4678:  /* *avx512f_gathersiv4di_2 */
    case 4677:  /* *avx512f_gathersiv8sf_2 */
    case 4676:  /* *avx512f_gathersiv8sf_2 */
    case 4675:  /* *avx512f_gathersiv8si_2 */
    case 4674:  /* *avx512f_gathersiv8si_2 */
    case 4673:  /* *avx512f_gathersiv8df_2 */
    case 4672:  /* *avx512f_gathersiv8df_2 */
    case 4671:  /* *avx512f_gathersiv8di_2 */
    case 4670:  /* *avx512f_gathersiv8di_2 */
    case 4669:  /* *avx512f_gathersiv16sf_2 */
    case 4668:  /* *avx512f_gathersiv16sf_2 */
    case 4667:  /* *avx512f_gathersiv16si_2 */
    case 4666:  /* *avx512f_gathersiv16si_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4713:  /* *avx512f_gatherdiv2df */
    case 4712:  /* *avx512f_gatherdiv2df */
    case 4711:  /* *avx512f_gatherdiv2di */
    case 4710:  /* *avx512f_gatherdiv2di */
    case 4709:  /* *avx512f_gatherdiv4sf */
    case 4708:  /* *avx512f_gatherdiv4sf */
    case 4707:  /* *avx512f_gatherdiv4si */
    case 4706:  /* *avx512f_gatherdiv4si */
    case 4705:  /* *avx512f_gatherdiv4df */
    case 4704:  /* *avx512f_gatherdiv4df */
    case 4703:  /* *avx512f_gatherdiv4di */
    case 4702:  /* *avx512f_gatherdiv4di */
    case 4701:  /* *avx512f_gatherdiv8sf */
    case 4700:  /* *avx512f_gatherdiv8sf */
    case 4699:  /* *avx512f_gatherdiv8si */
    case 4698:  /* *avx512f_gatherdiv8si */
    case 4697:  /* *avx512f_gatherdiv8df */
    case 4696:  /* *avx512f_gatherdiv8df */
    case 4695:  /* *avx512f_gatherdiv8di */
    case 4694:  /* *avx512f_gatherdiv8di */
    case 4693:  /* *avx512f_gatherdiv16sf */
    case 4692:  /* *avx512f_gatherdiv16sf */
    case 4691:  /* *avx512f_gatherdiv16si */
    case 4690:  /* *avx512f_gatherdiv16si */
    case 4665:  /* *avx512f_gathersiv2df */
    case 4664:  /* *avx512f_gathersiv2df */
    case 4663:  /* *avx512f_gathersiv2di */
    case 4662:  /* *avx512f_gathersiv2di */
    case 4661:  /* *avx512f_gathersiv4sf */
    case 4660:  /* *avx512f_gathersiv4sf */
    case 4659:  /* *avx512f_gathersiv4si */
    case 4658:  /* *avx512f_gathersiv4si */
    case 4657:  /* *avx512f_gathersiv4df */
    case 4656:  /* *avx512f_gathersiv4df */
    case 4655:  /* *avx512f_gathersiv4di */
    case 4654:  /* *avx512f_gathersiv4di */
    case 4653:  /* *avx512f_gathersiv8sf */
    case 4652:  /* *avx512f_gathersiv8sf */
    case 4651:  /* *avx512f_gathersiv8si */
    case 4650:  /* *avx512f_gathersiv8si */
    case 4649:  /* *avx512f_gathersiv8df */
    case 4648:  /* *avx512f_gathersiv8df */
    case 4647:  /* *avx512f_gathersiv8di */
    case 4646:  /* *avx512f_gathersiv8di */
    case 4645:  /* *avx512f_gathersiv16sf */
    case 4644:  /* *avx512f_gathersiv16sf */
    case 4643:  /* *avx512f_gathersiv16si */
    case 4642:  /* *avx512f_gathersiv16si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4641:  /* *avx2_gatherdiv8sf_4 */
    case 4640:  /* *avx2_gatherdiv8sf_4 */
    case 4639:  /* *avx2_gatherdiv8si_4 */
    case 4638:  /* *avx2_gatherdiv8si_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 4637:  /* *avx2_gatherdiv8sf_3 */
    case 4636:  /* *avx2_gatherdiv8sf_3 */
    case 4635:  /* *avx2_gatherdiv8si_3 */
    case 4634:  /* *avx2_gatherdiv8si_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 4633:  /* *avx2_gatherdiv8sf_2 */
    case 4632:  /* *avx2_gatherdiv8sf_2 */
    case 4631:  /* *avx2_gatherdiv8si_2 */
    case 4630:  /* *avx2_gatherdiv8si_2 */
    case 4629:  /* *avx2_gatherdiv4sf_2 */
    case 4628:  /* *avx2_gatherdiv4sf_2 */
    case 4627:  /* *avx2_gatherdiv4si_2 */
    case 4626:  /* *avx2_gatherdiv4si_2 */
    case 4625:  /* *avx2_gatherdiv4df_2 */
    case 4624:  /* *avx2_gatherdiv4df_2 */
    case 4623:  /* *avx2_gatherdiv4di_2 */
    case 4622:  /* *avx2_gatherdiv4di_2 */
    case 4621:  /* *avx2_gatherdiv2df_2 */
    case 4620:  /* *avx2_gatherdiv2df_2 */
    case 4619:  /* *avx2_gatherdiv2di_2 */
    case 4618:  /* *avx2_gatherdiv2di_2 */
    case 4601:  /* *avx2_gathersiv8sf_2 */
    case 4600:  /* *avx2_gathersiv8sf_2 */
    case 4599:  /* *avx2_gathersiv8si_2 */
    case 4598:  /* *avx2_gathersiv8si_2 */
    case 4597:  /* *avx2_gathersiv4sf_2 */
    case 4596:  /* *avx2_gathersiv4sf_2 */
    case 4595:  /* *avx2_gathersiv4si_2 */
    case 4594:  /* *avx2_gathersiv4si_2 */
    case 4593:  /* *avx2_gathersiv4df_2 */
    case 4592:  /* *avx2_gathersiv4df_2 */
    case 4591:  /* *avx2_gathersiv4di_2 */
    case 4590:  /* *avx2_gathersiv4di_2 */
    case 4589:  /* *avx2_gathersiv2df_2 */
    case 4588:  /* *avx2_gathersiv2df_2 */
    case 4587:  /* *avx2_gathersiv2di_2 */
    case 4586:  /* *avx2_gathersiv2di_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4617:  /* *avx2_gatherdiv8sf */
    case 4616:  /* *avx2_gatherdiv8sf */
    case 4615:  /* *avx2_gatherdiv8si */
    case 4614:  /* *avx2_gatherdiv8si */
    case 4613:  /* *avx2_gatherdiv4sf */
    case 4612:  /* *avx2_gatherdiv4sf */
    case 4611:  /* *avx2_gatherdiv4si */
    case 4610:  /* *avx2_gatherdiv4si */
    case 4609:  /* *avx2_gatherdiv4df */
    case 4608:  /* *avx2_gatherdiv4df */
    case 4607:  /* *avx2_gatherdiv4di */
    case 4606:  /* *avx2_gatherdiv4di */
    case 4605:  /* *avx2_gatherdiv2df */
    case 4604:  /* *avx2_gatherdiv2df */
    case 4603:  /* *avx2_gatherdiv2di */
    case 4602:  /* *avx2_gatherdiv2di */
    case 4585:  /* *avx2_gathersiv8sf */
    case 4584:  /* *avx2_gathersiv8sf */
    case 4583:  /* *avx2_gathersiv8si */
    case 4582:  /* *avx2_gathersiv8si */
    case 4581:  /* *avx2_gathersiv4sf */
    case 4580:  /* *avx2_gathersiv4sf */
    case 4579:  /* *avx2_gathersiv4si */
    case 4578:  /* *avx2_gathersiv4si */
    case 4577:  /* *avx2_gathersiv4df */
    case 4576:  /* *avx2_gathersiv4df */
    case 4575:  /* *avx2_gathersiv4di */
    case 4574:  /* *avx2_gathersiv4di */
    case 4573:  /* *avx2_gathersiv2df */
    case 4572:  /* *avx2_gathersiv2df */
    case 4571:  /* *avx2_gathersiv2di */
    case 4570:  /* *avx2_gathersiv2di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 4564:  /* *vcvtps2ph_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4483:  /* avx2_maskstoreq256 */
    case 4482:  /* avx2_maskstored256 */
    case 4481:  /* avx2_maskstoreq */
    case 4480:  /* avx2_maskstored */
    case 4479:  /* avx_maskstorepd256 */
    case 4478:  /* avx_maskstoreps256 */
    case 4477:  /* avx_maskstorepd */
    case 4476:  /* avx_maskstoreps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 4475:  /* avx2_maskloadq256 */
    case 4474:  /* avx2_maskloadd256 */
    case 4473:  /* avx2_maskloadq */
    case 4472:  /* avx2_maskloadd */
    case 4471:  /* avx_maskloadpd256 */
    case 4470:  /* avx_maskloadps256 */
    case 4469:  /* avx_maskloadpd */
    case 4468:  /* avx_maskloadps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 4441:  /* *avx_vperm2f128v4df_nozero */
    case 4440:  /* *avx_vperm2f128v8sf_nozero */
    case 4439:  /* *avx_vperm2f128v8si_nozero */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 4435:  /* avx512vl_vpermt2varv16qi3_mask */
    case 4434:  /* avx512vl_vpermt2varv32qi3_mask */
    case 4433:  /* avx512bw_vpermt2varv64qi3_mask */
    case 4432:  /* avx512vl_vpermt2varv8hi3_mask */
    case 4431:  /* avx512vl_vpermt2varv16hi3_mask */
    case 4430:  /* avx512bw_vpermt2varv32hi3_mask */
    case 4429:  /* avx512vl_vpermt2varv2df3_mask */
    case 4428:  /* avx512vl_vpermt2varv2di3_mask */
    case 4427:  /* avx512vl_vpermt2varv4sf3_mask */
    case 4426:  /* avx512vl_vpermt2varv4si3_mask */
    case 4425:  /* avx512vl_vpermt2varv4df3_mask */
    case 4424:  /* avx512vl_vpermt2varv4di3_mask */
    case 4423:  /* avx512vl_vpermt2varv8sf3_mask */
    case 4422:  /* avx512vl_vpermt2varv8si3_mask */
    case 4421:  /* avx512f_vpermt2varv8df3_mask */
    case 4420:  /* avx512f_vpermt2varv8di3_mask */
    case 4419:  /* avx512f_vpermt2varv16sf3_mask */
    case 4418:  /* avx512f_vpermt2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 4381:  /* *avx512vl_vpermi2varv2df3_mask */
    case 4380:  /* *avx512vl_vpermi2varv4df3_mask */
    case 4379:  /* *avx512f_vpermi2varv8df3_mask */
    case 4378:  /* *avx512vl_vpermi2varv4sf3_mask */
    case 4377:  /* *avx512vl_vpermi2varv8sf3_mask */
    case 4376:  /* *avx512f_vpermi2varv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 4375:  /* *avx512vl_vpermi2varv16qi3_mask */
    case 4374:  /* *avx512vl_vpermi2varv32qi3_mask */
    case 4373:  /* *avx512bw_vpermi2varv64qi3_mask */
    case 4372:  /* *avx512vl_vpermi2varv8hi3_mask */
    case 4371:  /* *avx512vl_vpermi2varv16hi3_mask */
    case 4370:  /* *avx512bw_vpermi2varv32hi3_mask */
    case 4369:  /* *avx512vl_vpermi2varv2di3_mask */
    case 4368:  /* *avx512vl_vpermi2varv4di3_mask */
    case 4367:  /* *avx512vl_vpermi2varv4si3_mask */
    case 4366:  /* *avx512vl_vpermi2varv8si3_mask */
    case 4365:  /* *avx512f_vpermi2varv8di3_mask */
    case 4364:  /* *avx512f_vpermi2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 4351:  /* *avx_vpermilpv2df_mask */
    case 4349:  /* *avx_vpermilpv4df_mask */
    case 4347:  /* *avx512f_vpermilpv8df_mask */
    case 4345:  /* *avx_vpermilpv4sf_mask */
    case 4343:  /* *avx_vpermilpv8sf_mask */
    case 4341:  /* *avx512f_vpermilpv16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4447:  /* *ssse3_palignrv2df_perm */
    case 4446:  /* *ssse3_palignrv4sf_perm */
    case 4445:  /* *ssse3_palignrv2di_perm */
    case 4444:  /* *ssse3_palignrv4si_perm */
    case 4443:  /* *ssse3_palignrv8hi_perm */
    case 4442:  /* *ssse3_palignrv16qi_perm */
    case 4350:  /* *avx_vpermilpv2df */
    case 4348:  /* *avx_vpermilpv4df */
    case 4346:  /* *avx512f_vpermilpv8df */
    case 4344:  /* *avx_vpermilpv4sf */
    case 4342:  /* *avx_vpermilpv8sf */
    case 4340:  /* *avx512f_vpermilpv16sf */
    case 4339:  /* *avx_vperm_broadcast_v4df */
    case 4338:  /* *avx_vperm_broadcast_v8sf */
    case 4337:  /* *avx_vperm_broadcast_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 4304:  /* avx_vbroadcastf128_v4df */
    case 4303:  /* avx_vbroadcastf128_v8sf */
    case 4302:  /* avx_vbroadcastf128_v4di */
    case 4301:  /* avx_vbroadcastf128_v8si */
    case 4300:  /* avx_vbroadcastf128_v16hi */
    case 4299:  /* avx_vbroadcastf128_v32qi */
    case 4288:  /* avx2_vbroadcasti128_v4di */
    case 4287:  /* avx2_vbroadcasti128_v8si */
    case 4286:  /* avx2_vbroadcasti128_v16hi */
    case 4285:  /* avx2_vbroadcasti128_v32qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4126:  /* xop_maskcmp_uns2v2di3 */
    case 4125:  /* xop_maskcmp_uns2v4si3 */
    case 4124:  /* xop_maskcmp_uns2v8hi3 */
    case 4123:  /* xop_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 4122:  /* xop_maskcmp_unsv2di3 */
    case 4121:  /* xop_maskcmp_unsv4si3 */
    case 4120:  /* xop_maskcmp_unsv8hi3 */
    case 4119:  /* xop_maskcmp_unsv16qi3 */
    case 4118:  /* xop_maskcmpv2di3 */
    case 4117:  /* xop_maskcmpv4si3 */
    case 4116:  /* xop_maskcmpv8hi3 */
    case 4115:  /* xop_maskcmpv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4106:  /* xop_shlv2di3 */
    case 4105:  /* xop_shlv4si3 */
    case 4104:  /* xop_shlv8hi3 */
    case 4103:  /* xop_shlv16qi3 */
    case 4102:  /* xop_shav2di3 */
    case 4101:  /* xop_shav4si3 */
    case 4100:  /* xop_shav8hi3 */
    case 4099:  /* xop_shav16qi3 */
    case 4098:  /* xop_vrotlv2di3 */
    case 4097:  /* xop_vrotlv4si3 */
    case 4096:  /* xop_vrotlv8hi3 */
    case 4095:  /* xop_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 4086:  /* xop_pperm_pack_v8hi_v16qi */
    case 4085:  /* xop_pperm_pack_v4si_v8hi */
    case 4084:  /* xop_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 4073:  /* xop_phaddubq */
    case 4072:  /* xop_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 4077:  /* xop_phadduwq */
    case 4076:  /* xop_phaddwq */
    case 4071:  /* xop_phaddubd */
    case 4070:  /* xop_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 4082:  /* xop_phsubdq */
    case 4081:  /* xop_phsubwd */
    case 4080:  /* xop_phsubbw */
    case 4079:  /* xop_phaddudq */
    case 4078:  /* xop_phadddq */
    case 4075:  /* xop_phadduwd */
    case 4074:  /* xop_phaddwd */
    case 4069:  /* xop_phaddubw */
    case 4068:  /* xop_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 4067:  /* xop_pcmov_v2df */
    case 4066:  /* xop_pcmov_v4df256 */
    case 4065:  /* xop_pcmov_v4sf */
    case 4064:  /* xop_pcmov_v8sf256 */
    case 4063:  /* xop_pcmov_v2di */
    case 4062:  /* xop_pcmov_v4di256 */
    case 4061:  /* xop_pcmov_v4si */
    case 4060:  /* xop_pcmov_v8si256 */
    case 4059:  /* xop_pcmov_v8hi */
    case 4058:  /* xop_pcmov_v16hi256 */
    case 4057:  /* xop_pcmov_v16qi */
    case 4056:  /* xop_pcmov_v32qi256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 4055:  /* xop_pmadcsswd */
    case 4054:  /* xop_pmadcswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4053:  /* xop_pmacsswd */
    case 4052:  /* xop_pmacswd */
    case 4051:  /* xop_pmacssdqh */
    case 4050:  /* xop_pmacsdqh */
    case 4049:  /* xop_pmacssdql */
    case 4048:  /* xop_pmacsdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4043:  /* avx512er_vmrsqrt28v2df_round */
    case 4041:  /* avx512er_vmrsqrt28v4sf_round */
    case 4031:  /* avx512er_vmrcp28v2df_round */
    case 4029:  /* avx512er_vmrcp28v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4011:  /* *avx512pf_scatterpfv8didf_mask */
    case 4010:  /* *avx512pf_scatterpfv8didf_mask */
    case 4009:  /* *avx512pf_scatterpfv8sidf_mask */
    case 4008:  /* *avx512pf_scatterpfv8sidf_mask */
    case 4007:  /* *avx512pf_scatterpfv8disf_mask */
    case 4006:  /* *avx512pf_scatterpfv8disf_mask */
    case 4005:  /* *avx512pf_scatterpfv16sisf_mask */
    case 4004:  /* *avx512pf_scatterpfv16sisf_mask */
    case 4003:  /* *avx512pf_gatherpfv8didf_mask */
    case 4002:  /* *avx512pf_gatherpfv8didf_mask */
    case 4001:  /* *avx512pf_gatherpfv8sidf_mask */
    case 4000:  /* *avx512pf_gatherpfv8sidf_mask */
    case 3999:  /* *avx512pf_gatherpfv8disf_mask */
    case 3998:  /* *avx512pf_gatherpfv8disf_mask */
    case 3997:  /* *avx512pf_gatherpfv16sisf_mask */
    case 3996:  /* *avx512pf_gatherpfv16sisf_mask */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (pat, 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (pat, 0, 1));
      break;

    case 3995:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 3994:  /* sse4_2_pcmpistrm */
    case 3993:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 3992:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 3991:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 3990:  /* sse4_2_pcmpestrm */
    case 3989:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 3988:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 3987:  /* sse4_1_roundsd */
    case 3986:  /* sse4_1_roundss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 3803:  /* *ssse3_pmulhrswv8hi3_mask */
    case 3801:  /* *avx2_pmulhrswv16hi3_mask */
    case 3799:  /* *avx512bw_pmulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3804:  /* *ssse3_pmulhrswv4hi3 */
    case 3802:  /* *ssse3_pmulhrswv8hi3 */
    case 3800:  /* *avx2_pmulhrswv16hi3 */
    case 3798:  /* *avx512bw_pmulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 3795:  /* avx512bw_umulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3794:  /* avx512bw_umulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 3782:  /* avx2_phsubdv8si3 */
    case 3781:  /* avx2_phadddv8si3 */
    case 3776:  /* ssse3_phsubswv8hi3 */
    case 3775:  /* ssse3_phsubwv8hi3 */
    case 3774:  /* ssse3_phaddswv8hi3 */
    case 3773:  /* ssse3_phaddwv8hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 2;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 2;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 2;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 3772:  /* avx2_phsubswv16hi3 */
    case 3771:  /* avx2_phsubwv16hi3 */
    case 3770:  /* avx2_phaddswv16hi3 */
    case 3769:  /* avx2_phaddwv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 1), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 1), 0);
      recog_data.dup_num[10] = 1;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[11] = 1;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 1), 0);
      recog_data.dup_num[12] = 1;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[13] = 1;
      recog_data.dup_loc[14] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 1), 0);
      recog_data.dup_num[14] = 1;
      recog_data.dup_loc[15] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[15] = 2;
      recog_data.dup_loc[16] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[16] = 2;
      recog_data.dup_loc[17] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[17] = 2;
      recog_data.dup_loc[18] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[18] = 2;
      recog_data.dup_loc[19] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[19] = 2;
      recog_data.dup_loc[20] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[20] = 2;
      recog_data.dup_loc[21] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[21] = 2;
      recog_data.dup_loc[22] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[22] = 2;
      recog_data.dup_loc[23] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[23] = 2;
      recog_data.dup_loc[24] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[24] = 2;
      recog_data.dup_loc[25] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[25] = 2;
      recog_data.dup_loc[26] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[26] = 2;
      recog_data.dup_loc[27] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[27] = 2;
      recog_data.dup_loc[28] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[28] = 2;
      recog_data.dup_loc[29] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[29] = 2;
      break;

    case 3745:  /* *sse2_uavgv8hi3_mask */
    case 3743:  /* *avx2_uavgv16hi3_mask */
    case 3741:  /* *avx512bw_uavgv32hi3_mask */
    case 3739:  /* *sse2_uavgv16qi3_mask */
    case 3737:  /* *avx2_uavgv32qi3_mask */
    case 3735:  /* *avx512bw_uavgv64qi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 3744:  /* *sse2_uavgv8hi3 */
    case 3742:  /* *avx2_uavgv16hi3 */
    case 3740:  /* *avx512bw_uavgv32hi3 */
    case 3738:  /* *sse2_uavgv16qi3 */
    case 3736:  /* *avx2_uavgv32qi3 */
    case 3734:  /* *avx512bw_uavgv64qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 3706:  /* sse2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3705:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 3704:  /* avx2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3703:  /* avx2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 3698:  /* avx2_pshuflw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3697:  /* avx2_pshuflw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      break;

    case 4195:  /* avx512f_permv8di_1_mask */
    case 4193:  /* avx512f_permv8df_1_mask */
    case 3692:  /* avx2_pshufd_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4194:  /* avx512f_permv8di_1 */
    case 4192:  /* avx512f_permv8df_1 */
    case 3691:  /* avx2_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 3690:  /* avx512f_pshufd_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[18] = *(ro_loc[18] = &XEXP (XEXP (pat, 1), 1));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3689:  /* avx512f_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 4459:  /* vec_set_lo_v8sf_mask */
    case 4457:  /* vec_set_lo_v8si_mask */
    case 4451:  /* vec_set_lo_v4df_mask */
    case 4449:  /* vec_set_lo_v4di_mask */
    case 3668:  /* vec_set_lo_v8di_mask */
    case 3666:  /* vec_set_lo_v8df_mask */
    case 3660:  /* vec_set_lo_v16si_mask */
    case 3658:  /* vec_set_lo_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3656:  /* avx512f_vinserti32x4_1_mask */
    case 3654:  /* avx512f_vinsertf32x4_1_mask */
    case 3652:  /* avx512dq_vinserti64x2_1_mask */
    case 3650:  /* avx512dq_vinsertf64x2_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3655:  /* *avx512f_vinserti32x4_1 */
    case 3653:  /* *avx512f_vinsertf32x4_1 */
    case 3651:  /* *avx512dq_vinserti64x2_1 */
    case 3649:  /* *avx512dq_vinsertf64x2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3885:  /* sse4_1_packusdw_mask */
    case 3883:  /* avx2_packusdw_mask */
    case 3881:  /* avx512bw_packusdw_mask */
    case 3608:  /* sse2_packuswb_mask */
    case 3606:  /* avx2_packuswb_mask */
    case 3604:  /* avx512bw_packuswb_mask */
    case 3602:  /* sse2_packssdw_mask */
    case 3600:  /* avx2_packssdw_mask */
    case 3598:  /* avx512bw_packssdw_mask */
    case 3596:  /* sse2_packsswb_mask */
    case 3594:  /* avx2_packsswb_mask */
    case 3592:  /* avx512bw_packsswb_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 5193:  /* avx512vl_vpshufbitqmbv16qi_mask */
    case 5191:  /* avx512vl_vpshufbitqmbv32qi_mask */
    case 5189:  /* avx512vl_vpshufbitqmbv64qi_mask */
    case 4875:  /* avx512dq_fpclassv2df_mask */
    case 4873:  /* avx512dq_fpclassv4df_mask */
    case 4871:  /* avx512dq_fpclassv8df_mask */
    case 4869:  /* avx512dq_fpclassv4sf_mask */
    case 4867:  /* avx512dq_fpclassv8sf_mask */
    case 4865:  /* avx512dq_fpclassv16sf_mask */
    case 4563:  /* *vcvtps2ph */
    case 3590:  /* avx512vl_testnmv2di3_mask */
    case 3588:  /* avx512vl_testnmv4di3_mask */
    case 3586:  /* avx512f_testnmv8di3_mask */
    case 3584:  /* avx512vl_testnmv4si3_mask */
    case 3582:  /* avx512vl_testnmv8si3_mask */
    case 3580:  /* avx512f_testnmv16si3_mask */
    case 3578:  /* avx512vl_testnmv8hi3_mask */
    case 3576:  /* avx512vl_testnmv16hi3_mask */
    case 3574:  /* avx512bw_testnmv32hi3_mask */
    case 3572:  /* avx512vl_testnmv32qi3_mask */
    case 3570:  /* avx512vl_testnmv16qi3_mask */
    case 3568:  /* avx512bw_testnmv64qi3_mask */
    case 3566:  /* avx512vl_testmv2di3_mask */
    case 3564:  /* avx512vl_testmv4di3_mask */
    case 3562:  /* avx512f_testmv8di3_mask */
    case 3560:  /* avx512vl_testmv4si3_mask */
    case 3558:  /* avx512vl_testmv8si3_mask */
    case 3556:  /* avx512f_testmv16si3_mask */
    case 3554:  /* avx512vl_testmv8hi3_mask */
    case 3552:  /* avx512vl_testmv16hi3_mask */
    case 3550:  /* avx512bw_testmv32hi3_mask */
    case 3548:  /* avx512vl_testmv32qi3_mask */
    case 3546:  /* avx512vl_testmv16qi3_mask */
    case 3544:  /* avx512bw_testmv64qi3_mask */
    case 3467:  /* avx512vl_gtv8hi3_mask */
    case 3465:  /* avx512vl_gtv16hi3_mask */
    case 3463:  /* avx512bw_gtv32hi3_mask */
    case 3461:  /* avx512vl_gtv32qi3_mask */
    case 3459:  /* avx512vl_gtv16qi3_mask */
    case 3457:  /* avx512bw_gtv64qi3_mask */
    case 3455:  /* avx512vl_gtv2di3_mask */
    case 3453:  /* avx512vl_gtv4di3_mask */
    case 3451:  /* avx512f_gtv8di3_mask */
    case 3449:  /* avx512vl_gtv4si3_mask */
    case 3447:  /* avx512vl_gtv8si3_mask */
    case 3445:  /* avx512f_gtv16si3_mask */
    case 3434:  /* avx512vl_eqv2di3_mask_1 */
    case 3432:  /* avx512vl_eqv4di3_mask_1 */
    case 3430:  /* avx512f_eqv8di3_mask_1 */
    case 3428:  /* avx512vl_eqv4si3_mask_1 */
    case 3426:  /* avx512vl_eqv8si3_mask_1 */
    case 3424:  /* avx512f_eqv16si3_mask_1 */
    case 3422:  /* avx512vl_eqv8hi3_mask_1 */
    case 3420:  /* avx512vl_eqv16hi3_mask_1 */
    case 3418:  /* avx512bw_eqv32hi3_mask_1 */
    case 3416:  /* avx512vl_eqv32qi3_mask_1 */
    case 3414:  /* avx512vl_eqv16qi3_mask_1 */
    case 3412:  /* avx512bw_eqv64qi3_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3130:  /* *sse4_1_mulv2siv2di3_mask */
    case 3128:  /* *vec_widen_smult_even_v8si_mask */
    case 3126:  /* *vec_widen_smult_even_v16si_mask */
    case 3124:  /* *vec_widen_umult_even_v4si_mask */
    case 3122:  /* *vec_widen_umult_even_v8si_mask */
    case 3120:  /* *vec_widen_umult_even_v16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3118:  /* *umulv8hi3_highpart_mask */
    case 3116:  /* *smulv8hi3_highpart_mask */
    case 3114:  /* *umulv16hi3_highpart_mask */
    case 3112:  /* *smulv16hi3_highpart_mask */
    case 3110:  /* *umulv32hi3_highpart_mask */
    case 3108:  /* *smulv32hi3_highpart_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3004:  /* avx512f_us_truncatev8div16qi2_mask_store */
    case 3003:  /* avx512f_truncatev8div16qi2_mask_store */
    case 3002:  /* avx512f_ss_truncatev8div16qi2_mask_store */
    case 2989:  /* avx512vl_us_truncatev2div2si2_mask_store */
    case 2988:  /* avx512vl_truncatev2div2si2_mask_store */
    case 2987:  /* avx512vl_ss_truncatev2div2si2_mask_store */
    case 2974:  /* avx512vl_us_truncatev2div2hi2_mask_store */
    case 2973:  /* avx512vl_truncatev2div2hi2_mask_store */
    case 2972:  /* avx512vl_ss_truncatev2div2hi2_mask_store */
    case 2962:  /* avx512vl_us_truncatev4div4hi2_mask_store */
    case 2961:  /* avx512vl_truncatev4div4hi2_mask_store */
    case 2960:  /* avx512vl_ss_truncatev4div4hi2_mask_store */
    case 2959:  /* avx512vl_us_truncatev4siv4hi2_mask_store */
    case 2958:  /* avx512vl_truncatev4siv4hi2_mask_store */
    case 2957:  /* avx512vl_ss_truncatev4siv4hi2_mask_store */
    case 2929:  /* avx512vl_us_truncatev8siv8qi2_mask_store */
    case 2928:  /* avx512vl_truncatev8siv8qi2_mask_store */
    case 2927:  /* avx512vl_ss_truncatev8siv8qi2_mask_store */
    case 2926:  /* avx512vl_us_truncatev8hiv8qi2_mask_store */
    case 2925:  /* avx512vl_truncatev8hiv8qi2_mask_store */
    case 2924:  /* avx512vl_ss_truncatev8hiv8qi2_mask_store */
    case 2905:  /* avx512vl_us_truncatev4div4qi2_mask_store */
    case 2904:  /* avx512vl_truncatev4div4qi2_mask_store */
    case 2903:  /* avx512vl_ss_truncatev4div4qi2_mask_store */
    case 2902:  /* avx512vl_us_truncatev4siv4qi2_mask_store */
    case 2901:  /* avx512vl_truncatev4siv4qi2_mask_store */
    case 2900:  /* avx512vl_ss_truncatev4siv4qi2_mask_store */
    case 2881:  /* avx512vl_us_truncatev2div2qi2_mask_store */
    case 2880:  /* avx512vl_truncatev2div2qi2_mask_store */
    case 2879:  /* avx512vl_ss_truncatev2div2qi2_mask_store */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 2995:  /* *avx512f_us_truncatev8div16qi2_store */
    case 2994:  /* *avx512f_truncatev8div16qi2_store */
    case 2993:  /* *avx512f_ss_truncatev8div16qi2_store */
    case 2980:  /* *avx512vl_us_truncatev2div2si2_store */
    case 2979:  /* *avx512vl_truncatev2div2si2_store */
    case 2978:  /* *avx512vl_ss_truncatev2div2si2_store */
    case 2965:  /* *avx512vl_us_truncatev2div2hi2_store */
    case 2964:  /* *avx512vl_truncatev2div2hi2_store */
    case 2963:  /* *avx512vl_ss_truncatev2div2hi2_store */
    case 2944:  /* *avx512vl_us_truncatev4div4hi2_store */
    case 2943:  /* *avx512vl_truncatev4div4hi2_store */
    case 2942:  /* *avx512vl_ss_truncatev4div4hi2_store */
    case 2941:  /* *avx512vl_us_truncatev4siv4hi2_store */
    case 2940:  /* *avx512vl_truncatev4siv4hi2_store */
    case 2939:  /* *avx512vl_ss_truncatev4siv4hi2_store */
    case 2911:  /* *avx512vl_us_truncatev8siv8qi2_store */
    case 2910:  /* *avx512vl_truncatev8siv8qi2_store */
    case 2909:  /* *avx512vl_ss_truncatev8siv8qi2_store */
    case 2908:  /* *avx512vl_us_truncatev8hiv8qi2_store */
    case 2907:  /* *avx512vl_truncatev8hiv8qi2_store */
    case 2906:  /* *avx512vl_ss_truncatev8hiv8qi2_store */
    case 2887:  /* *avx512vl_us_truncatev4div4qi2_store */
    case 2886:  /* *avx512vl_truncatev4div4qi2_store */
    case 2885:  /* *avx512vl_ss_truncatev4div4qi2_store */
    case 2884:  /* *avx512vl_us_truncatev4siv4qi2_store */
    case 2883:  /* *avx512vl_truncatev4siv4qi2_store */
    case 2882:  /* *avx512vl_ss_truncatev4siv4qi2_store */
    case 2872:  /* *avx512vl_us_truncatev2div2qi2_store */
    case 2871:  /* *avx512vl_truncatev2div2qi2_store */
    case 2870:  /* *avx512vl_ss_truncatev2div2qi2_store */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2794:  /* sse2_shufpd_v2df */
    case 2793:  /* sse2_shufpd_v2di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 2780:  /* sse2_shufpd_v2df_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3688:  /* avx512f_shuf_i32x4_1_mask */
    case 3686:  /* avx512f_shuf_f32x4_1_mask */
    case 2775:  /* avx512f_shufps512_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 1));
      ro[20] = *(ro_loc[20] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3687:  /* avx512f_shuf_i32x4_1 */
    case 3685:  /* avx512f_shuf_f32x4_1 */
    case 2774:  /* avx512f_shufps512_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 4908:  /* avx512f_vgetmantv2df_round */
    case 4904:  /* avx512f_vgetmantv4sf_round */
    case 4862:  /* avx512dq_rangesv2df_round */
    case 4858:  /* avx512dq_rangesv4sf_round */
    case 2773:  /* avx512f_rndscalev2df_round */
    case 2771:  /* avx512f_rndscalev4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2745:  /* avx512f_sfixupimmv2df_mask_round */
    case 2743:  /* avx512f_sfixupimmv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2744:  /* avx512f_sfixupimmv2df_mask */
    case 2742:  /* avx512f_sfixupimmv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 2741:  /* avx512f_sfixupimmv2df_maskz_1_round */
    case 2737:  /* avx512f_sfixupimmv4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2740:  /* avx512f_sfixupimmv2df_maskz_1 */
    case 2736:  /* avx512f_sfixupimmv4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2739:  /* avx512f_sfixupimmv2df_round */
    case 2735:  /* avx512f_sfixupimmv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2738:  /* avx512f_sfixupimmv2df */
    case 2734:  /* avx512f_sfixupimmv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2733:  /* avx512vl_fixupimmv2df_mask_round */
    case 2731:  /* avx512vl_fixupimmv4df_mask_round */
    case 2729:  /* avx512f_fixupimmv8df_mask_round */
    case 2727:  /* avx512vl_fixupimmv4sf_mask_round */
    case 2725:  /* avx512vl_fixupimmv8sf_mask_round */
    case 2723:  /* avx512f_fixupimmv16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2721:  /* avx512vl_fixupimmv2df_maskz_1_round */
    case 2717:  /* avx512vl_fixupimmv4df_maskz_1_round */
    case 2713:  /* avx512f_fixupimmv8df_maskz_1_round */
    case 2709:  /* avx512vl_fixupimmv4sf_maskz_1_round */
    case 2705:  /* avx512vl_fixupimmv8sf_maskz_1_round */
    case 2701:  /* avx512f_fixupimmv16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2719:  /* avx512vl_fixupimmv2df_round */
    case 2715:  /* avx512vl_fixupimmv4df_round */
    case 2711:  /* avx512f_fixupimmv8df_round */
    case 2707:  /* avx512vl_fixupimmv4sf_round */
    case 2703:  /* avx512vl_fixupimmv8sf_round */
    case 2699:  /* avx512f_fixupimmv16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2732:  /* avx512vl_fixupimmv2df_mask */
    case 2730:  /* avx512vl_fixupimmv4df_mask */
    case 2728:  /* avx512f_fixupimmv8df_mask */
    case 2726:  /* avx512vl_fixupimmv4sf_mask */
    case 2724:  /* avx512vl_fixupimmv8sf_mask */
    case 2722:  /* avx512f_fixupimmv16sf_mask */
    case 2653:  /* avx512vl_vternlogv2di_mask */
    case 2652:  /* avx512vl_vternlogv4di_mask */
    case 2651:  /* avx512f_vternlogv8di_mask */
    case 2650:  /* avx512vl_vternlogv4si_mask */
    case 2649:  /* avx512vl_vternlogv8si_mask */
    case 2648:  /* avx512f_vternlogv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2720:  /* avx512vl_fixupimmv2df_maskz_1 */
    case 2716:  /* avx512vl_fixupimmv4df_maskz_1 */
    case 2712:  /* avx512f_fixupimmv8df_maskz_1 */
    case 2708:  /* avx512vl_fixupimmv4sf_maskz_1 */
    case 2704:  /* avx512vl_fixupimmv8sf_maskz_1 */
    case 2700:  /* avx512f_fixupimmv16sf_maskz_1 */
    case 2647:  /* avx512vl_vternlogv2di_maskz_1 */
    case 2645:  /* avx512vl_vternlogv4di_maskz_1 */
    case 2643:  /* avx512f_vternlogv8di_maskz_1 */
    case 2641:  /* avx512vl_vternlogv4si_maskz_1 */
    case 2639:  /* avx512vl_vternlogv8si_maskz_1 */
    case 2637:  /* avx512f_vternlogv16si_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4134:  /* xop_vpermil2v2df3 */
    case 4133:  /* xop_vpermil2v4df3 */
    case 4132:  /* xop_vpermil2v4sf3 */
    case 4131:  /* xop_vpermil2v8sf3 */
    case 3861:  /* sse4a_insertqi */
    case 2718:  /* avx512vl_fixupimmv2df */
    case 2714:  /* avx512vl_fixupimmv4df */
    case 2710:  /* avx512f_fixupimmv8df */
    case 2706:  /* avx512vl_fixupimmv4sf */
    case 2702:  /* avx512vl_fixupimmv8sf */
    case 2698:  /* avx512f_fixupimmv16sf */
    case 2646:  /* avx512vl_vternlogv2di */
    case 2644:  /* avx512vl_vternlogv4di */
    case 2642:  /* avx512f_vternlogv8di */
    case 2640:  /* avx512vl_vternlogv4si */
    case 2638:  /* avx512vl_vternlogv8si */
    case 2636:  /* avx512f_vternlogv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 2685:  /* avx512f_sgetexpv2df_mask_round */
    case 2681:  /* avx512f_sgetexpv4sf_mask_round */
    case 2611:  /* avx512f_vmscalefv2df_mask_round */
    case 2607:  /* avx512f_vmscalefv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2683:  /* avx512f_sgetexpv2df_mask */
    case 2679:  /* avx512f_sgetexpv4sf_mask */
    case 2610:  /* avx512f_vmscalefv2df_mask */
    case 2606:  /* avx512f_vmscalefv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2684:  /* avx512f_sgetexpv2df_round */
    case 2680:  /* avx512f_sgetexpv4sf_round */
    case 2609:  /* avx512f_vmscalefv2df_round */
    case 2605:  /* avx512f_vmscalefv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2682:  /* avx512f_sgetexpv2df */
    case 2678:  /* avx512f_sgetexpv4sf */
    case 2608:  /* avx512f_vmscalefv2df */
    case 2604:  /* avx512f_vmscalefv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2536:  /* *avx512dq_vextracti64x2_1 */
    case 2534:  /* *avx512dq_vextractf64x2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 4191:  /* avx2_permv4df_1_mask */
    case 4189:  /* avx2_permv4di_1_mask */
    case 3700:  /* sse2_pshuflw_1_mask */
    case 3694:  /* sse2_pshufd_1_mask */
    case 2541:  /* avx512f_vextracti32x4_1_mask */
    case 2539:  /* avx512f_vextractf32x4_1_mask */
    case 2533:  /* avx512f_vextracti32x4_1_maskm */
    case 2532:  /* avx512f_vextractf32x4_1_maskm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2537:  /* avx512dq_vextracti64x2_1_mask */
    case 2535:  /* avx512dq_vextractf64x2_1_mask */
    case 2531:  /* avx512dq_vextracti64x2_1_maskm */
    case 2530:  /* avx512dq_vextractf64x2_1_maskm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3727:  /* *vec_extractv4ti */
    case 3726:  /* *vec_extractv2ti */
    case 3723:  /* *vec_extractv4si_mem */
    case 3721:  /* *vec_extractv4si */
    case 3715:  /* *vec_extractv8hi_mem */
    case 3714:  /* *vec_extractv16qi_mem */
    case 3709:  /* *vec_extractv8hi */
    case 3708:  /* *vec_extractv16qi */
    case 2529:  /* *vec_extractv4sf_mem */
    case 2528:  /* *sse4_1_extractps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 2526:  /* sse4_1_insertps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 3733:  /* vec_setv4di_0 */
    case 3732:  /* vec_setv8di_0 */
    case 3707:  /* sse2_loadld */
    case 2806:  /* vec_setv4df_0 */
    case 2805:  /* vec_setv8df_0 */
    case 2525:  /* vec_setv16sf_0 */
    case 2524:  /* vec_setv16si_0 */
    case 2523:  /* vec_setv8sf_0 */
    case 2522:  /* vec_setv8si_0 */
    case 2520:  /* vec_setv4sf_0 */
    case 2519:  /* vec_setv4si_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 2801:  /* sse2_movsd */
    case 2510:  /* sse_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 4466:  /* vec_set_lo_v32qi */
    case 4464:  /* vec_set_lo_v16hi */
    case 4458:  /* vec_set_lo_v8sf */
    case 4456:  /* vec_set_lo_v8si */
    case 4450:  /* vec_set_lo_v4df */
    case 4448:  /* vec_set_lo_v4di */
    case 3667:  /* vec_set_lo_v8di */
    case 3665:  /* vec_set_lo_v8df */
    case 3659:  /* vec_set_lo_v16si */
    case 3657:  /* vec_set_lo_v16sf */
    case 2800:  /* sse2_loadlpd */
    case 2509:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 3675:  /* *avx512dq_shuf_f64x2_1 */
    case 3673:  /* *avx512dq_shuf_i64x2_1 */
    case 2778:  /* avx_shufpd256_1 */
    case 2505:  /* sse_shufps_v4sf */
    case 2504:  /* sse_shufps_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 3676:  /* avx512dq_shuf_f64x2_1_mask */
    case 3674:  /* avx512dq_shuf_i64x2_1_mask */
    case 2779:  /* avx_shufpd256_1_mask */
    case 2503:  /* sse_shufps_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 1));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3684:  /* avx512vl_shuf_f32x4_1_mask */
    case 3682:  /* avx512vl_shuf_i32x4_1_mask */
    case 3680:  /* avx512f_shuf_i64x2_1_mask */
    case 3678:  /* avx512f_shuf_f64x2_1_mask */
    case 2777:  /* avx512f_shufpd512_1_mask */
    case 2502:  /* avx_shufps256_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 1));
      ro[12] = *(ro_loc[12] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3683:  /* avx512vl_shuf_f32x4_1 */
    case 3681:  /* avx512vl_shuf_i32x4_1 */
    case 3679:  /* avx512f_shuf_i64x2_1 */
    case 3677:  /* avx512f_shuf_f64x2_1 */
    case 2776:  /* avx512f_shufpd512_1 */
    case 2501:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 2500:  /* avx512f_movsldup512_mask */
    case 2498:  /* sse3_movsldup_mask */
    case 2496:  /* avx_movsldup256_mask */
    case 2494:  /* avx512f_movshdup512_mask */
    case 2492:  /* sse3_movshdup_mask */
    case 2490:  /* avx_movshdup256_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2499:  /* *avx512f_movsldup512 */
    case 2497:  /* sse3_movsldup */
    case 2495:  /* avx_movsldup256 */
    case 2493:  /* *avx512f_movshdup512 */
    case 2491:  /* sse3_movshdup */
    case 2489:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3644:  /* vec_interleave_lowv4si_mask */
    case 3642:  /* avx512f_interleave_lowv16si_mask */
    case 3640:  /* avx2_interleave_lowv8si_mask */
    case 3638:  /* vec_interleave_highv4si_mask */
    case 3636:  /* avx512f_interleave_highv16si_mask */
    case 3634:  /* avx2_interleave_highv8si_mask */
    case 3632:  /* vec_interleave_lowv8hi_mask */
    case 3630:  /* avx2_interleave_lowv16hi_mask */
    case 3628:  /* avx512bw_interleave_lowv32hi_mask */
    case 3626:  /* vec_interleave_highv8hi_mask */
    case 3624:  /* avx2_interleave_highv16hi_mask */
    case 3622:  /* avx512bw_interleave_highv32hi_mask */
    case 3620:  /* vec_interleave_lowv16qi_mask */
    case 3618:  /* avx2_interleave_lowv32qi_mask */
    case 3616:  /* avx512bw_interleave_lowv64qi_mask */
    case 3614:  /* vec_interleave_highv16qi_mask */
    case 3612:  /* avx2_interleave_highv32qi_mask */
    case 3610:  /* avx512bw_interleave_highv64qi_mask */
    case 2792:  /* vec_interleave_lowv2di_mask */
    case 2790:  /* avx512f_interleave_lowv8di_mask */
    case 2788:  /* avx2_interleave_lowv4di_mask */
    case 2786:  /* vec_interleave_highv2di_mask */
    case 2784:  /* avx512f_interleave_highv8di_mask */
    case 2782:  /* avx2_interleave_highv4di_mask */
    case 2602:  /* avx512vl_unpcklpd128_mask */
    case 2601:  /* *avx_unpcklpd256_mask */
    case 2599:  /* *avx512f_unpcklpd512_mask */
    case 2596:  /* avx512vl_unpckhpd128_mask */
    case 2595:  /* avx_unpckhpd256_mask */
    case 2593:  /* avx512f_unpckhpd512_mask */
    case 2487:  /* unpcklps128_mask */
    case 2486:  /* avx_unpcklps256_mask */
    case 2484:  /* avx512f_unpcklps512_mask */
    case 2482:  /* vec_interleave_highv4sf_mask */
    case 2480:  /* avx_unpckhps256_mask */
    case 2478:  /* avx512f_unpckhps512_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2472:  /* *avx512vl_cvtmask2qv2di */
    case 2471:  /* *avx512vl_cvtmask2qv4di */
    case 2470:  /* *avx512f_cvtmask2qv8di */
    case 2469:  /* *avx512vl_cvtmask2dv4si */
    case 2468:  /* *avx512vl_cvtmask2dv8si */
    case 2467:  /* *avx512f_cvtmask2dv16si */
    case 2466:  /* *avx512vl_cvtmask2wv8hi */
    case 2465:  /* *avx512vl_cvtmask2wv16hi */
    case 2464:  /* *avx512bw_cvtmask2wv32hi */
    case 2463:  /* *avx512vl_cvtmask2bv32qi */
    case 2462:  /* *avx512vl_cvtmask2bv16qi */
    case 2461:  /* *avx512bw_cvtmask2bv64qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4554:  /* vcvtph2ps_mask */
    case 2358:  /* ufix_notruncv2dfv2si2_mask */
    case 2348:  /* sse2_cvtpd2dq_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4314:  /* avx512dq_broadcastv8sf_mask */
    case 4312:  /* avx512dq_broadcastv16sf_mask */
    case 4310:  /* avx512dq_broadcastv4si_mask */
    case 4308:  /* avx512dq_broadcastv8si_mask */
    case 4306:  /* avx512dq_broadcastv16si_mask */
    case 4237:  /* avx512vl_vec_dupv8hi_mask */
    case 4235:  /* avx512vl_vec_dupv16hi_mask */
    case 4233:  /* avx512bw_vec_dupv32hi_mask */
    case 4231:  /* avx512vl_vec_dupv32qi_mask */
    case 4229:  /* avx512vl_vec_dupv16qi_mask */
    case 4227:  /* avx512bw_vec_dupv64qi_mask */
    case 4225:  /* avx512vl_vec_dupv2df_mask */
    case 4223:  /* avx512vl_vec_dupv4df_mask */
    case 4221:  /* avx512f_vec_dupv8df_mask */
    case 4219:  /* avx512vl_vec_dupv4sf_mask */
    case 4217:  /* avx512vl_vec_dupv8sf_mask */
    case 4215:  /* avx512f_vec_dupv16sf_mask */
    case 4213:  /* avx512vl_vec_dupv2di_mask */
    case 4211:  /* avx512vl_vec_dupv4di_mask */
    case 4209:  /* avx512f_vec_dupv8di_mask */
    case 4207:  /* avx512vl_vec_dupv4si_mask */
    case 4205:  /* avx512vl_vec_dupv8si_mask */
    case 4203:  /* avx512f_vec_dupv16si_mask */
    case 3964:  /* sse4_1_zero_extendv2siv2di2_mask */
    case 3962:  /* sse4_1_sign_extendv2siv2di2_mask */
    case 3952:  /* sse4_1_zero_extendv2hiv2di2_mask */
    case 3950:  /* sse4_1_sign_extendv2hiv2di2_mask */
    case 3948:  /* avx2_zero_extendv4hiv4di2_mask */
    case 3946:  /* avx2_sign_extendv4hiv4di2_mask */
    case 3940:  /* sse4_1_zero_extendv2qiv2di2_mask */
    case 3938:  /* sse4_1_sign_extendv2qiv2di2_mask */
    case 3936:  /* avx2_zero_extendv4qiv4di2_mask */
    case 3934:  /* avx2_sign_extendv4qiv4di2_mask */
    case 3932:  /* avx512f_zero_extendv8qiv8di2_mask */
    case 3930:  /* avx512f_sign_extendv8qiv8di2_mask */
    case 3928:  /* sse4_1_zero_extendv4hiv4si2_mask */
    case 3926:  /* sse4_1_sign_extendv4hiv4si2_mask */
    case 3916:  /* sse4_1_zero_extendv4qiv4si2_mask */
    case 3914:  /* sse4_1_sign_extendv4qiv4si2_mask */
    case 3912:  /* avx2_zero_extendv8qiv8si2_mask */
    case 3910:  /* avx2_sign_extendv8qiv8si2_mask */
    case 3904:  /* sse4_1_zero_extendv8qiv8hi2_mask */
    case 3902:  /* sse4_1_sign_extendv8qiv8hi2_mask */
    case 2474:  /* sse2_cvtps2pd_mask */
    case 2426:  /* sse2_cvttpd2dq_mask */
    case 2420:  /* ufix_truncv2sfv2di2_mask */
    case 2418:  /* fix_truncv2sfv2di2_mask */
    case 2368:  /* ufix_truncv2dfv2si2_mask */
    case 2339:  /* sse2_cvtdq2pd_mask */
    case 2335:  /* ufloatv2siv2df2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3001:  /* *avx512f_us_truncatev8div16qi2_mask_1 */
    case 3000:  /* *avx512f_truncatev8div16qi2_mask_1 */
    case 2999:  /* *avx512f_ss_truncatev8div16qi2_mask_1 */
    case 2986:  /* *avx512vl_us_truncatev2div2si2_mask_1 */
    case 2985:  /* *avx512vl_truncatev2div2si2_mask_1 */
    case 2984:  /* *avx512vl_ss_truncatev2div2si2_mask_1 */
    case 2971:  /* *avx512vl_us_truncatev2div2hi2_mask_1 */
    case 2970:  /* *avx512vl_truncatev2div2hi2_mask_1 */
    case 2969:  /* *avx512vl_ss_truncatev2div2hi2_mask_1 */
    case 2956:  /* *avx512vl_us_truncatev4div4hi2_mask_1 */
    case 2955:  /* *avx512vl_truncatev4div4hi2_mask_1 */
    case 2954:  /* *avx512vl_ss_truncatev4div4hi2_mask_1 */
    case 2953:  /* *avx512vl_us_truncatev4siv4hi2_mask_1 */
    case 2952:  /* *avx512vl_truncatev4siv4hi2_mask_1 */
    case 2951:  /* *avx512vl_ss_truncatev4siv4hi2_mask_1 */
    case 2923:  /* *avx512vl_us_truncatev8siv8qi2_mask_1 */
    case 2922:  /* *avx512vl_truncatev8siv8qi2_mask_1 */
    case 2921:  /* *avx512vl_ss_truncatev8siv8qi2_mask_1 */
    case 2920:  /* *avx512vl_us_truncatev8hiv8qi2_mask_1 */
    case 2919:  /* *avx512vl_truncatev8hiv8qi2_mask_1 */
    case 2918:  /* *avx512vl_ss_truncatev8hiv8qi2_mask_1 */
    case 2899:  /* *avx512vl_us_truncatev4div4qi2_mask_1 */
    case 2898:  /* *avx512vl_truncatev4div4qi2_mask_1 */
    case 2897:  /* *avx512vl_ss_truncatev4div4qi2_mask_1 */
    case 2896:  /* *avx512vl_us_truncatev4siv4qi2_mask_1 */
    case 2895:  /* *avx512vl_truncatev4siv4qi2_mask_1 */
    case 2894:  /* *avx512vl_ss_truncatev4siv4qi2_mask_1 */
    case 2878:  /* *avx512vl_us_truncatev2div2qi2_mask_1 */
    case 2877:  /* *avx512vl_truncatev2div2qi2_mask_1 */
    case 2876:  /* *avx512vl_ss_truncatev2div2qi2_mask_1 */
    case 2329:  /* *ufloatv2div2sf2_mask_1 */
    case 2328:  /* *floatv2div2sf2_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2998:  /* avx512f_us_truncatev8div16qi2_mask */
    case 2997:  /* avx512f_truncatev8div16qi2_mask */
    case 2996:  /* avx512f_ss_truncatev8div16qi2_mask */
    case 2983:  /* avx512vl_us_truncatev2div2si2_mask */
    case 2982:  /* avx512vl_truncatev2div2si2_mask */
    case 2981:  /* avx512vl_ss_truncatev2div2si2_mask */
    case 2968:  /* avx512vl_us_truncatev2div2hi2_mask */
    case 2967:  /* avx512vl_truncatev2div2hi2_mask */
    case 2966:  /* avx512vl_ss_truncatev2div2hi2_mask */
    case 2950:  /* avx512vl_us_truncatev4div4hi2_mask */
    case 2949:  /* avx512vl_truncatev4div4hi2_mask */
    case 2948:  /* avx512vl_ss_truncatev4div4hi2_mask */
    case 2947:  /* avx512vl_us_truncatev4siv4hi2_mask */
    case 2946:  /* avx512vl_truncatev4siv4hi2_mask */
    case 2945:  /* avx512vl_ss_truncatev4siv4hi2_mask */
    case 2917:  /* avx512vl_us_truncatev8siv8qi2_mask */
    case 2916:  /* avx512vl_truncatev8siv8qi2_mask */
    case 2915:  /* avx512vl_ss_truncatev8siv8qi2_mask */
    case 2914:  /* avx512vl_us_truncatev8hiv8qi2_mask */
    case 2913:  /* avx512vl_truncatev8hiv8qi2_mask */
    case 2912:  /* avx512vl_ss_truncatev8hiv8qi2_mask */
    case 2893:  /* avx512vl_us_truncatev4div4qi2_mask */
    case 2892:  /* avx512vl_truncatev4div4qi2_mask */
    case 2891:  /* avx512vl_ss_truncatev4div4qi2_mask */
    case 2890:  /* avx512vl_us_truncatev4siv4qi2_mask */
    case 2889:  /* avx512vl_truncatev4siv4qi2_mask */
    case 2888:  /* avx512vl_ss_truncatev4siv4qi2_mask */
    case 2875:  /* avx512vl_us_truncatev2div2qi2_mask */
    case 2874:  /* avx512vl_truncatev2div2qi2_mask */
    case 2873:  /* avx512vl_ss_truncatev2div2qi2_mask */
    case 2327:  /* ufloatv2div2sf2_mask */
    case 2326:  /* floatv2div2sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2239:  /* avx512dq_cvtps2uqqv2di_mask */
    case 2231:  /* avx512dq_cvtps2qqv2di_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4562:  /* avx512f_vcvtph2ps512_mask_round */
    case 4039:  /* avx512er_rsqrt28v8df_mask_round */
    case 4035:  /* avx512er_rsqrt28v16sf_mask_round */
    case 4027:  /* avx512er_rcp28v8df_mask_round */
    case 4023:  /* avx512er_rcp28v16sf_mask_round */
    case 4019:  /* avx512er_exp2v8df_mask_round */
    case 4015:  /* avx512er_exp2v16sf_mask_round */
    case 2677:  /* avx512vl_getexpv2df_mask_round */
    case 2673:  /* avx512vl_getexpv4df_mask_round */
    case 2669:  /* avx512f_getexpv8df_mask_round */
    case 2665:  /* avx512vl_getexpv4sf_mask_round */
    case 2661:  /* avx512vl_getexpv8sf_mask_round */
    case 2657:  /* avx512f_getexpv16sf_mask_round */
    case 2400:  /* ufix_notruncv8dfv8di2_mask_round */
    case 2392:  /* fix_notruncv8dfv8di2_mask_round */
    case 2356:  /* ufix_notruncv4dfv4si2_mask_round */
    case 2352:  /* ufix_notruncv8dfv8si2_mask_round */
    case 2343:  /* avx512f_cvtpd2dq512_mask_round */
    case 2235:  /* avx512dq_cvtps2uqqv8di_mask_round */
    case 2227:  /* avx512dq_cvtps2qqv8di_mask_round */
    case 2223:  /* avx512vl_ufix_notruncv4sfv4si_mask_round */
    case 2219:  /* avx512vl_ufix_notruncv8sfv8si_mask_round */
    case 2215:  /* avx512f_ufix_notruncv16sfv16si_mask_round */
    case 2211:  /* avx512f_fix_notruncv16sfv16si_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4560:  /* *avx512f_vcvtph2ps512_round */
    case 4037:  /* *avx512er_rsqrt28v8df_round */
    case 4033:  /* *avx512er_rsqrt28v16sf_round */
    case 4025:  /* *avx512er_rcp28v8df_round */
    case 4021:  /* *avx512er_rcp28v16sf_round */
    case 4017:  /* avx512er_exp2v8df_round */
    case 4013:  /* avx512er_exp2v16sf_round */
    case 2675:  /* avx512vl_getexpv2df_round */
    case 2671:  /* avx512vl_getexpv4df_round */
    case 2667:  /* avx512f_getexpv8df_round */
    case 2663:  /* avx512vl_getexpv4sf_round */
    case 2659:  /* avx512vl_getexpv8sf_round */
    case 2655:  /* avx512f_getexpv16sf_round */
    case 2398:  /* ufix_notruncv8dfv8di2_round */
    case 2390:  /* fix_notruncv8dfv8di2_round */
    case 2354:  /* ufix_notruncv4dfv4si2_round */
    case 2350:  /* ufix_notruncv8dfv8si2_round */
    case 2341:  /* avx512f_cvtpd2dq512_round */
    case 2233:  /* *avx512dq_cvtps2uqqv8di_round */
    case 2225:  /* *avx512dq_cvtps2qqv8di_round */
    case 2221:  /* *avx512vl_ufix_notruncv4sfv4si_round */
    case 2217:  /* *avx512vl_ufix_notruncv8sfv8si_round */
    case 2213:  /* *avx512f_ufix_notruncv16sfv16si_round */
    case 2209:  /* avx512f_fix_notruncv16sfv16si_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2283:  /* sse2_cvttsd2siq_round */
    case 2281:  /* sse2_cvttsd2si_round */
    case 2273:  /* avx512f_vcvttsd2usiq_round */
    case 2271:  /* avx512f_vcvttsd2usi_round */
    case 2265:  /* avx512f_vcvttss2usiq_round */
    case 2263:  /* avx512f_vcvttss2usi_round */
    case 2176:  /* sse_cvttss2siq_round */
    case 2174:  /* sse_cvttss2si_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2278:  /* sse2_cvtsd2siq_round */
    case 2275:  /* sse2_cvtsd2si_round */
    case 2269:  /* avx512f_vcvtsd2usiq_round */
    case 2267:  /* avx512f_vcvtsd2usi_round */
    case 2261:  /* avx512f_vcvtss2usiq_round */
    case 2259:  /* avx512f_vcvtss2usi_round */
    case 2171:  /* sse_cvtss2siq_round */
    case 2168:  /* sse_cvtss2si_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2431:  /* sse2_cvtss2sd_round */
    case 2428:  /* sse2_cvtsd2ss_round */
    case 2257:  /* sse2_cvtsi2sdq_round */
    case 2183:  /* cvtusi2sd64_round */
    case 2181:  /* cvtusi2ss64_round */
    case 2178:  /* cvtusi2ss32_round */
    case 2166:  /* sse_cvtsi2ssq_round */
    case 2164:  /* sse_cvtsi2ss_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4553:  /* vcvtph2ps */
    case 3760:  /* *sse2_pmovmskb_zext */
    case 3759:  /* *avx2_pmovmskb_zext */
    case 3756:  /* *sse2_movmskpd_zext */
    case 3755:  /* *avx_movmskpd256_zext */
    case 3754:  /* *sse_movmskps_zext */
    case 3753:  /* *avx_movmskps256_zext */
    case 2357:  /* ufix_notruncv2dfv2si2 */
    case 2347:  /* sse2_cvtpd2dq */
    case 2161:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 2432:  /* *sse2_vd_cvtss2sd */
    case 2430:  /* sse2_cvtss2sd */
    case 2429:  /* *sse2_vd_cvtsd2ss */
    case 2427:  /* sse2_cvtsd2ss */
    case 2256:  /* sse2_cvtsi2sdq */
    case 2255:  /* sse2_cvtsi2sd */
    case 2182:  /* cvtusi2sd64 */
    case 2180:  /* cvtusi2ss64 */
    case 2179:  /* cvtusi2sd32 */
    case 2177:  /* cvtusi2ss32 */
    case 2165:  /* sse_cvtsi2ssq */
    case 2163:  /* sse_cvtsi2ss */
    case 2160:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 2159:  /* *fma4i_vmfnmsub_v2df */
    case 2158:  /* *fma4i_vmfnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2157:  /* *fma4i_vmfnmadd_v2df */
    case 2156:  /* *fma4i_vmfnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2155:  /* *fma4i_vmfmsub_v2df */
    case 2154:  /* *fma4i_vmfmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2153:  /* *fma4i_vmfmadd_v2df */
    case 2152:  /* *fma4i_vmfmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2151:  /* *fmai_fnmsub_v2df_round */
    case 2149:  /* *fmai_fnmsub_v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2150:  /* *fmai_fnmsub_v2df */
    case 2148:  /* *fmai_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2147:  /* *fmai_fnmadd_v2df_round */
    case 2145:  /* *fmai_fnmadd_v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2146:  /* *fmai_fnmadd_v2df */
    case 2144:  /* *fmai_fnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2143:  /* *fmai_fmsub_v2df */
    case 2141:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2142:  /* *fmai_fmsub_v2df */
    case 2140:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2139:  /* *fmai_fmadd_v2df */
    case 2137:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2138:  /* *fmai_fmadd_v2df */
    case 2136:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2135:  /* avx512vl_fmsubadd_v2df_mask3_round */
    case 2133:  /* avx512vl_fmsubadd_v4df_mask3_round */
    case 2131:  /* avx512f_fmsubadd_v8df_mask3_round */
    case 2129:  /* avx512vl_fmsubadd_v4sf_mask3_round */
    case 2127:  /* avx512vl_fmsubadd_v8sf_mask3_round */
    case 2125:  /* avx512f_fmsubadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2134:  /* avx512vl_fmsubadd_v2df_mask3 */
    case 2132:  /* avx512vl_fmsubadd_v4df_mask3 */
    case 2130:  /* avx512f_fmsubadd_v8df_mask3 */
    case 2128:  /* avx512vl_fmsubadd_v4sf_mask3 */
    case 2126:  /* avx512vl_fmsubadd_v8sf_mask3 */
    case 2124:  /* avx512f_fmsubadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2123:  /* avx512vl_fmsubadd_v2df_mask_round */
    case 2121:  /* avx512vl_fmsubadd_v4df_mask_round */
    case 2119:  /* avx512f_fmsubadd_v8df_mask_round */
    case 2117:  /* avx512vl_fmsubadd_v4sf_mask_round */
    case 2115:  /* avx512vl_fmsubadd_v8sf_mask_round */
    case 2113:  /* avx512f_fmsubadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2122:  /* avx512vl_fmsubadd_v2df_mask */
    case 2120:  /* avx512vl_fmsubadd_v4df_mask */
    case 2118:  /* avx512f_fmsubadd_v8df_mask */
    case 2116:  /* avx512vl_fmsubadd_v4sf_mask */
    case 2114:  /* avx512vl_fmsubadd_v8sf_mask */
    case 2112:  /* avx512f_fmsubadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2107:  /* fma_fmsubadd_v8df_maskz_1_round */
    case 2098:  /* fma_fmsubadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2106:  /* *fma_fmsubadd_v8df_round */
    case 2097:  /* *fma_fmsubadd_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2111:  /* fma_fmsubadd_v2df_maskz_1 */
    case 2109:  /* fma_fmsubadd_v4df_maskz_1 */
    case 2105:  /* fma_fmsubadd_v8df_maskz_1 */
    case 2102:  /* fma_fmsubadd_v4sf_maskz_1 */
    case 2100:  /* fma_fmsubadd_v8sf_maskz_1 */
    case 2096:  /* fma_fmsubadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2110:  /* *fma_fmsubadd_v2df */
    case 2108:  /* *fma_fmsubadd_v4df */
    case 2104:  /* *fma_fmsubadd_v8df */
    case 2103:  /* *fma_fmsubadd_df */
    case 2101:  /* *fma_fmsubadd_v4sf */
    case 2099:  /* *fma_fmsubadd_v8sf */
    case 2095:  /* *fma_fmsubadd_v16sf */
    case 2094:  /* *fma_fmsubadd_sf */
    case 2093:  /* *fma_fmsubadd_v2df */
    case 2092:  /* *fma_fmsubadd_v4df */
    case 2091:  /* *fma_fmsubadd_v4sf */
    case 2090:  /* *fma_fmsubadd_v8sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      break;

    case 2089:  /* avx512vl_fmaddsub_v2df_mask3_round */
    case 2087:  /* avx512vl_fmaddsub_v4df_mask3_round */
    case 2085:  /* avx512f_fmaddsub_v8df_mask3_round */
    case 2083:  /* avx512vl_fmaddsub_v4sf_mask3_round */
    case 2081:  /* avx512vl_fmaddsub_v8sf_mask3_round */
    case 2079:  /* avx512f_fmaddsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2088:  /* avx512vl_fmaddsub_v2df_mask3 */
    case 2086:  /* avx512vl_fmaddsub_v4df_mask3 */
    case 2084:  /* avx512f_fmaddsub_v8df_mask3 */
    case 2082:  /* avx512vl_fmaddsub_v4sf_mask3 */
    case 2080:  /* avx512vl_fmaddsub_v8sf_mask3 */
    case 2078:  /* avx512f_fmaddsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2077:  /* avx512vl_fmaddsub_v2df_mask_round */
    case 2075:  /* avx512vl_fmaddsub_v4df_mask_round */
    case 2073:  /* avx512f_fmaddsub_v8df_mask_round */
    case 2071:  /* avx512vl_fmaddsub_v4sf_mask_round */
    case 2069:  /* avx512vl_fmaddsub_v8sf_mask_round */
    case 2067:  /* avx512f_fmaddsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5169:  /* vpdpwssds_v4si_mask */
    case 5168:  /* vpdpwssds_v8si_mask */
    case 5167:  /* vpdpwssds_v16si_mask */
    case 5160:  /* vpdpwssd_v4si_mask */
    case 5159:  /* vpdpwssd_v8si_mask */
    case 5158:  /* vpdpwssd_v16si_mask */
    case 5151:  /* vpdpbusds_v4si_mask */
    case 5150:  /* vpdpbusds_v8si_mask */
    case 5149:  /* vpdpbusds_v16si_mask */
    case 5142:  /* vpdpbusd_v4si_mask */
    case 5141:  /* vpdpbusd_v8si_mask */
    case 5140:  /* vpdpbusd_v16si_mask */
    case 5127:  /* vpshldv_v2di_mask */
    case 5126:  /* vpshldv_v4si_mask */
    case 5125:  /* vpshldv_v8hi_mask */
    case 5124:  /* vpshldv_v4di_mask */
    case 5123:  /* vpshldv_v8si_mask */
    case 5122:  /* vpshldv_v16hi_mask */
    case 5121:  /* vpshldv_v8di_mask */
    case 5120:  /* vpshldv_v16si_mask */
    case 5119:  /* vpshldv_v32hi_mask */
    case 5100:  /* vpshrdv_v2di_mask */
    case 5099:  /* vpshrdv_v4si_mask */
    case 5098:  /* vpshrdv_v8hi_mask */
    case 5097:  /* vpshrdv_v4di_mask */
    case 5096:  /* vpshrdv_v8si_mask */
    case 5095:  /* vpshrdv_v16hi_mask */
    case 5094:  /* vpshrdv_v8di_mask */
    case 5093:  /* vpshrdv_v16si_mask */
    case 5092:  /* vpshrdv_v32hi_mask */
    case 4970:  /* vpamdd52huqv2di_mask */
    case 4969:  /* vpamdd52luqv2di_mask */
    case 4968:  /* vpamdd52huqv4di_mask */
    case 4967:  /* vpamdd52luqv4di_mask */
    case 4966:  /* vpamdd52huqv8di_mask */
    case 4965:  /* vpamdd52luqv8di_mask */
    case 2076:  /* avx512vl_fmaddsub_v2df_mask */
    case 2074:  /* avx512vl_fmaddsub_v4df_mask */
    case 2072:  /* avx512f_fmaddsub_v8df_mask */
    case 2070:  /* avx512vl_fmaddsub_v4sf_mask */
    case 2068:  /* avx512vl_fmaddsub_v8sf_mask */
    case 2066:  /* avx512f_fmaddsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4851:  /* avx512dq_rangepv8df_mask_round */
    case 4843:  /* avx512dq_rangepv16sf_mask_round */
    case 2061:  /* fma_fmaddsub_v8df_maskz_1_round */
    case 2052:  /* fma_fmaddsub_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5172:  /* vpdpwssds_v4si_maskz_1 */
    case 5171:  /* vpdpwssds_v8si_maskz_1 */
    case 5170:  /* vpdpwssds_v16si_maskz_1 */
    case 5163:  /* vpdpwssd_v4si_maskz_1 */
    case 5162:  /* vpdpwssd_v8si_maskz_1 */
    case 5161:  /* vpdpwssd_v16si_maskz_1 */
    case 5154:  /* vpdpbusds_v4si_maskz_1 */
    case 5153:  /* vpdpbusds_v8si_maskz_1 */
    case 5152:  /* vpdpbusds_v16si_maskz_1 */
    case 5145:  /* vpdpbusd_v4si_maskz_1 */
    case 5144:  /* vpdpbusd_v8si_maskz_1 */
    case 5143:  /* vpdpbusd_v16si_maskz_1 */
    case 5136:  /* vpshldv_v2di_maskz_1 */
    case 5135:  /* vpshldv_v4si_maskz_1 */
    case 5134:  /* vpshldv_v8hi_maskz_1 */
    case 5133:  /* vpshldv_v4di_maskz_1 */
    case 5132:  /* vpshldv_v8si_maskz_1 */
    case 5131:  /* vpshldv_v16hi_maskz_1 */
    case 5130:  /* vpshldv_v8di_maskz_1 */
    case 5129:  /* vpshldv_v16si_maskz_1 */
    case 5128:  /* vpshldv_v32hi_maskz_1 */
    case 5109:  /* vpshrdv_v2di_maskz_1 */
    case 5108:  /* vpshrdv_v4si_maskz_1 */
    case 5107:  /* vpshrdv_v8hi_maskz_1 */
    case 5106:  /* vpshrdv_v4di_maskz_1 */
    case 5105:  /* vpshrdv_v8si_maskz_1 */
    case 5104:  /* vpshrdv_v16hi_maskz_1 */
    case 5103:  /* vpshrdv_v8di_maskz_1 */
    case 5102:  /* vpshrdv_v16si_maskz_1 */
    case 5101:  /* vpshrdv_v32hi_maskz_1 */
    case 5082:  /* vpshld_v2di_mask */
    case 5080:  /* vpshld_v4si_mask */
    case 5078:  /* vpshld_v8hi_mask */
    case 5076:  /* vpshld_v4di_mask */
    case 5074:  /* vpshld_v8si_mask */
    case 5072:  /* vpshld_v16hi_mask */
    case 5070:  /* vpshld_v8di_mask */
    case 5068:  /* vpshld_v16si_mask */
    case 5066:  /* vpshld_v32hi_mask */
    case 5064:  /* vpshrd_v2di_mask */
    case 5062:  /* vpshrd_v4si_mask */
    case 5060:  /* vpshrd_v8hi_mask */
    case 5058:  /* vpshrd_v4di_mask */
    case 5056:  /* vpshrd_v8si_mask */
    case 5054:  /* vpshrd_v16hi_mask */
    case 5052:  /* vpshrd_v8di_mask */
    case 5050:  /* vpshrd_v16si_mask */
    case 5048:  /* vpshrd_v32hi_mask */
    case 5040:  /* vgf2p8affineqb_v16qi_mask */
    case 5038:  /* vgf2p8affineqb_v32qi_mask */
    case 5036:  /* vgf2p8affineqb_v64qi_mask */
    case 5034:  /* vgf2p8affineinvqb_v16qi_mask */
    case 5032:  /* vgf2p8affineinvqb_v32qi_mask */
    case 5030:  /* vgf2p8affineinvqb_v64qi_mask */
    case 4996:  /* avx5124vnniw_vp4dpwssds_maskz */
    case 4993:  /* avx5124vnniw_vp4dpwssd_maskz */
    case 4990:  /* avx5124fmaddps_4fnmaddss_maskz */
    case 4987:  /* avx5124fmaddps_4fnmaddps_maskz */
    case 4984:  /* avx5124fmaddps_4fmaddss_maskz */
    case 4981:  /* avx5124fmaddps_4fmaddps_maskz */
    case 4964:  /* vpamdd52huqv2di_maskz_1 */
    case 4962:  /* vpamdd52luqv2di_maskz_1 */
    case 4960:  /* vpamdd52huqv4di_maskz_1 */
    case 4958:  /* vpamdd52luqv4di_maskz_1 */
    case 4956:  /* vpamdd52huqv8di_maskz_1 */
    case 4954:  /* vpamdd52luqv8di_maskz_1 */
    case 4915:  /* avx512bw_dbpsadbwv32hi_mask */
    case 4913:  /* avx512bw_dbpsadbwv16hi_mask */
    case 4911:  /* avx512bw_dbpsadbwv8hi_mask */
    case 4855:  /* avx512dq_rangepv2df_mask */
    case 4853:  /* avx512dq_rangepv4df_mask */
    case 4850:  /* avx512dq_rangepv8df_mask */
    case 4847:  /* avx512dq_rangepv4sf_mask */
    case 4845:  /* avx512dq_rangepv8sf_mask */
    case 4842:  /* avx512dq_rangepv16sf_mask */
    case 4417:  /* avx512vl_vpermt2varv16qi3_maskz_1 */
    case 4415:  /* avx512vl_vpermt2varv32qi3_maskz_1 */
    case 4413:  /* avx512bw_vpermt2varv64qi3_maskz_1 */
    case 4411:  /* avx512vl_vpermt2varv8hi3_maskz_1 */
    case 4409:  /* avx512vl_vpermt2varv16hi3_maskz_1 */
    case 4407:  /* avx512bw_vpermt2varv32hi3_maskz_1 */
    case 4405:  /* avx512vl_vpermt2varv2df3_maskz_1 */
    case 4403:  /* avx512vl_vpermt2varv2di3_maskz_1 */
    case 4401:  /* avx512vl_vpermt2varv4sf3_maskz_1 */
    case 4399:  /* avx512vl_vpermt2varv4si3_maskz_1 */
    case 4397:  /* avx512vl_vpermt2varv4df3_maskz_1 */
    case 4395:  /* avx512vl_vpermt2varv4di3_maskz_1 */
    case 4393:  /* avx512vl_vpermt2varv8sf3_maskz_1 */
    case 4391:  /* avx512vl_vpermt2varv8si3_maskz_1 */
    case 4389:  /* avx512f_vpermt2varv8df3_maskz_1 */
    case 4387:  /* avx512f_vpermt2varv8di3_maskz_1 */
    case 4385:  /* avx512f_vpermt2varv16sf3_maskz_1 */
    case 4383:  /* avx512f_vpermt2varv16si3_maskz_1 */
    case 3823:  /* ssse3_palignrv16qi_mask */
    case 3822:  /* avx2_palignrv32qi_mask */
    case 3821:  /* avx512bw_palignrv64qi_mask */
    case 2697:  /* avx512vl_alignv2di_mask */
    case 2695:  /* avx512vl_alignv4di_mask */
    case 2693:  /* avx512f_alignv8di_mask */
    case 2691:  /* avx512vl_alignv4si_mask */
    case 2689:  /* avx512vl_alignv8si_mask */
    case 2687:  /* avx512f_alignv16si_mask */
    case 2065:  /* fma_fmaddsub_v2df_maskz_1 */
    case 2063:  /* fma_fmaddsub_v4df_maskz_1 */
    case 2059:  /* fma_fmaddsub_v8df_maskz_1 */
    case 2056:  /* fma_fmaddsub_v4sf_maskz_1 */
    case 2054:  /* fma_fmaddsub_v8sf_maskz_1 */
    case 2050:  /* fma_fmaddsub_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2043:  /* avx512vl_fnmsub_v2df_mask3_round */
    case 2041:  /* avx512vl_fnmsub_v4df_mask3_round */
    case 2039:  /* avx512f_fnmsub_v8df_mask3_round */
    case 2037:  /* avx512vl_fnmsub_v4sf_mask3_round */
    case 2035:  /* avx512vl_fnmsub_v8sf_mask3_round */
    case 2033:  /* avx512f_fnmsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2042:  /* avx512vl_fnmsub_v2df_mask3 */
    case 2040:  /* avx512vl_fnmsub_v4df_mask3 */
    case 2038:  /* avx512f_fnmsub_v8df_mask3 */
    case 2036:  /* avx512vl_fnmsub_v4sf_mask3 */
    case 2034:  /* avx512vl_fnmsub_v8sf_mask3 */
    case 2032:  /* avx512f_fnmsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 2029:  /* avx512f_fnmsub_v8df_mask_round */
    case 2025:  /* avx512f_fnmsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2031:  /* avx512vl_fnmsub_v2df_mask */
    case 2030:  /* avx512vl_fnmsub_v4df_mask */
    case 2028:  /* avx512f_fnmsub_v8df_mask */
    case 2027:  /* avx512vl_fnmsub_v4sf_mask */
    case 2026:  /* avx512vl_fnmsub_v8sf_mask */
    case 2024:  /* avx512f_fnmsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2019:  /* fma_fnmsub_v8df_maskz_1_round */
    case 2010:  /* fma_fnmsub_v16sf_maskz_1_round */
    case 2005:  /* *fma_fnmsub_v4df */
    case 2001:  /* *fma_fnmsub_v8sf */
    case 1997:  /* *fma_fnmsub_v2df */
    case 1993:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2023:  /* fma_fnmsub_v2df_maskz_1 */
    case 2021:  /* fma_fnmsub_v4df_maskz_1 */
    case 2017:  /* fma_fnmsub_v8df_maskz_1 */
    case 2014:  /* fma_fnmsub_v4sf_maskz_1 */
    case 2012:  /* fma_fnmsub_v8sf_maskz_1 */
    case 2008:  /* fma_fnmsub_v16sf_maskz_1 */
    case 2003:  /* *fma_fnmsub_v4df */
    case 1999:  /* *fma_fnmsub_v8sf */
    case 1995:  /* *fma_fnmsub_v2df */
    case 1991:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2018:  /* *fma_fnmsub_v8df_round */
    case 2009:  /* *fma_fnmsub_v16sf_round */
    case 2004:  /* *fma_fnmsub_v4df */
    case 2000:  /* *fma_fnmsub_v8sf */
    case 1996:  /* *fma_fnmsub_v2df */
    case 1992:  /* *fma_fnmsub_v4sf */
    case 1989:  /* *fma_fnmsub_df */
    case 1987:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2022:  /* *fma_fnmsub_v2df */
    case 2020:  /* *fma_fnmsub_v4df */
    case 2016:  /* *fma_fnmsub_v8df */
    case 2015:  /* *fma_fnmsub_df */
    case 2013:  /* *fma_fnmsub_v4sf */
    case 2011:  /* *fma_fnmsub_v8sf */
    case 2007:  /* *fma_fnmsub_v16sf */
    case 2006:  /* *fma_fnmsub_sf */
    case 2002:  /* *fma_fnmsub_v4df */
    case 1998:  /* *fma_fnmsub_v8sf */
    case 1994:  /* *fma_fnmsub_v2df */
    case 1990:  /* *fma_fnmsub_v4sf */
    case 1988:  /* *fma_fnmsub_df */
    case 1986:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1983:  /* avx512f_fnmadd_v8df_mask3_round */
    case 1979:  /* avx512f_fnmadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1985:  /* avx512vl_fnmadd_v2df_mask3 */
    case 1984:  /* avx512vl_fnmadd_v4df_mask3 */
    case 1982:  /* avx512f_fnmadd_v8df_mask3 */
    case 1981:  /* avx512vl_fnmadd_v4sf_mask3 */
    case 1980:  /* avx512vl_fnmadd_v8sf_mask3 */
    case 1978:  /* avx512f_fnmadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1975:  /* avx512f_fnmadd_v8df_mask_round */
    case 1971:  /* avx512f_fnmadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1977:  /* avx512vl_fnmadd_v2df_mask */
    case 1976:  /* avx512vl_fnmadd_v4df_mask */
    case 1974:  /* avx512f_fnmadd_v8df_mask */
    case 1973:  /* avx512vl_fnmadd_v4sf_mask */
    case 1972:  /* avx512vl_fnmadd_v8sf_mask */
    case 1970:  /* avx512f_fnmadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1965:  /* fma_fnmadd_v8df_maskz_1_round */
    case 1956:  /* fma_fnmadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1969:  /* fma_fnmadd_v2df_maskz_1 */
    case 1967:  /* fma_fnmadd_v4df_maskz_1 */
    case 1963:  /* fma_fnmadd_v8df_maskz_1 */
    case 1960:  /* fma_fnmadd_v4sf_maskz_1 */
    case 1958:  /* fma_fnmadd_v8sf_maskz_1 */
    case 1954:  /* fma_fnmadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1943:  /* avx512f_fmsub_v8df_mask3_round */
    case 1939:  /* avx512f_fmsub_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1945:  /* avx512vl_fmsub_v2df_mask3 */
    case 1944:  /* avx512vl_fmsub_v4df_mask3 */
    case 1942:  /* avx512f_fmsub_v8df_mask3 */
    case 1941:  /* avx512vl_fmsub_v4sf_mask3 */
    case 1940:  /* avx512vl_fmsub_v8sf_mask3 */
    case 1938:  /* avx512f_fmsub_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1937:  /* avx512vl_fmsub_v2df_mask_round */
    case 1935:  /* avx512vl_fmsub_v4df_mask_round */
    case 1933:  /* avx512f_fmsub_v8df_mask_round */
    case 1931:  /* avx512vl_fmsub_v4sf_mask_round */
    case 1929:  /* avx512vl_fmsub_v8sf_mask_round */
    case 1927:  /* avx512f_fmsub_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1936:  /* avx512vl_fmsub_v2df_mask */
    case 1934:  /* avx512vl_fmsub_v4df_mask */
    case 1932:  /* avx512f_fmsub_v8df_mask */
    case 1930:  /* avx512vl_fmsub_v4sf_mask */
    case 1928:  /* avx512vl_fmsub_v8sf_mask */
    case 1926:  /* avx512f_fmsub_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1921:  /* fma_fmsub_v8df_maskz_1_round */
    case 1912:  /* fma_fmsub_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1920:  /* *fma_fmsub_v8df_round */
    case 1911:  /* *fma_fmsub_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1925:  /* fma_fmsub_v2df_maskz_1 */
    case 1923:  /* fma_fmsub_v4df_maskz_1 */
    case 1919:  /* fma_fmsub_v8df_maskz_1 */
    case 1916:  /* fma_fmsub_v4sf_maskz_1 */
    case 1914:  /* fma_fmsub_v8sf_maskz_1 */
    case 1910:  /* fma_fmsub_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1924:  /* *fma_fmsub_v2df */
    case 1922:  /* *fma_fmsub_v4df */
    case 1918:  /* *fma_fmsub_v8df */
    case 1917:  /* *fma_fmsub_df */
    case 1915:  /* *fma_fmsub_v4sf */
    case 1913:  /* *fma_fmsub_v8sf */
    case 1909:  /* *fma_fmsub_v16sf */
    case 1908:  /* *fma_fmsub_sf */
    case 1907:  /* *fma_fmsub_v4df */
    case 1906:  /* *fma_fmsub_v8sf */
    case 1905:  /* *fma_fmsub_v2df */
    case 1904:  /* *fma_fmsub_v4sf */
    case 1903:  /* *fma_fmsub_df */
    case 1902:  /* *fma_fmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1901:  /* avx512vl_fmadd_v2df_mask3_round */
    case 1899:  /* avx512vl_fmadd_v4df_mask3_round */
    case 1897:  /* avx512f_fmadd_v8df_mask3_round */
    case 1895:  /* avx512vl_fmadd_v4sf_mask3_round */
    case 1893:  /* avx512vl_fmadd_v8sf_mask3_round */
    case 1891:  /* avx512f_fmadd_v16sf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1900:  /* avx512vl_fmadd_v2df_mask3 */
    case 1898:  /* avx512vl_fmadd_v4df_mask3 */
    case 1896:  /* avx512f_fmadd_v8df_mask3 */
    case 1894:  /* avx512vl_fmadd_v4sf_mask3 */
    case 1892:  /* avx512vl_fmadd_v8sf_mask3 */
    case 1890:  /* avx512f_fmadd_v16sf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 1887:  /* avx512f_fmadd_v8df_mask_round */
    case 1883:  /* avx512f_fmadd_v16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1889:  /* avx512vl_fmadd_v2df_mask */
    case 1888:  /* avx512vl_fmadd_v4df_mask */
    case 1886:  /* avx512f_fmadd_v8df_mask */
    case 1885:  /* avx512vl_fmadd_v4sf_mask */
    case 1884:  /* avx512vl_fmadd_v8sf_mask */
    case 1882:  /* avx512f_fmadd_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1877:  /* fma_fmadd_v8df_maskz_1_round */
    case 1868:  /* fma_fmadd_v16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1876:  /* *fma_fmadd_v8df_round */
    case 1867:  /* *fma_fmadd_v16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1881:  /* fma_fmadd_v2df_maskz_1 */
    case 1879:  /* fma_fmadd_v4df_maskz_1 */
    case 1875:  /* fma_fmadd_v8df_maskz_1 */
    case 1872:  /* fma_fmadd_v4sf_maskz_1 */
    case 1870:  /* fma_fmadd_v8sf_maskz_1 */
    case 1866:  /* fma_fmadd_v16sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4463:  /* vec_set_hi_v8sf_mask */
    case 4461:  /* vec_set_hi_v8si_mask */
    case 4455:  /* vec_set_hi_v4df_mask */
    case 4453:  /* vec_set_hi_v4di_mask */
    case 3672:  /* vec_set_hi_v8di_mask */
    case 3670:  /* vec_set_hi_v8df_mask */
    case 3664:  /* vec_set_hi_v16si_mask */
    case 3662:  /* vec_set_hi_v16sf_mask */
    case 3488:  /* *andnotv2di3_mask */
    case 3487:  /* *andnotv4di3_mask */
    case 3486:  /* *andnotv8di3_mask */
    case 3485:  /* *andnotv4si3_mask */
    case 3484:  /* *andnotv8si3_mask */
    case 3483:  /* *andnotv16si3_mask */
    case 2440:  /* *sse2_cvtpd2ps_mask */
    case 1809:  /* avx512f_andnotv8df3_mask */
    case 1807:  /* avx512f_andnotv16sf3_mask */
    case 1805:  /* sse2_andnotv2df3_mask */
    case 1803:  /* avx_andnotv4df3_mask */
    case 1801:  /* sse_andnotv4sf3_mask */
    case 1799:  /* avx_andnotv8sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1797:  /* sse2_ucomi_round */
    case 1793:  /* sse_ucomi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1796:  /* sse2_ucomi */
    case 1792:  /* sse_ucomi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 1795:  /* sse2_comi_round */
    case 1791:  /* sse_comi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1794:  /* sse2_comi */
    case 1790:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1783:  /* avx512f_vmcmpv2df3_mask_round */
    case 1781:  /* avx512f_vmcmpv4sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1782:  /* avx512f_vmcmpv2df3_mask */
    case 1780:  /* avx512f_vmcmpv4sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1779:  /* avx512f_vmcmpv2df3_round */
    case 1777:  /* avx512f_vmcmpv4sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1778:  /* avx512f_vmcmpv2df3 */
    case 1776:  /* avx512f_vmcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 1735:  /* avx512f_cmpv8df3_mask_round */
    case 1727:  /* avx512f_cmpv16sf3_mask_round */
    case 1719:  /* avx512f_cmpv8di3_mask_round */
    case 1711:  /* avx512f_cmpv16si3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1775:  /* avx512vl_ucmpv2di3_mask */
    case 1773:  /* avx512vl_ucmpv4di3_mask */
    case 1771:  /* avx512f_ucmpv8di3_mask */
    case 1769:  /* avx512vl_ucmpv4si3_mask */
    case 1767:  /* avx512vl_ucmpv8si3_mask */
    case 1765:  /* avx512f_ucmpv16si3_mask */
    case 1763:  /* avx512vl_ucmpv8hi3_mask */
    case 1761:  /* avx512vl_ucmpv16hi3_mask */
    case 1759:  /* avx512bw_ucmpv32hi3_mask */
    case 1757:  /* avx512vl_ucmpv32qi3_mask */
    case 1755:  /* avx512vl_ucmpv16qi3_mask */
    case 1753:  /* avx512bw_ucmpv64qi3_mask */
    case 1751:  /* avx512vl_cmpv8hi3_mask */
    case 1749:  /* avx512vl_cmpv16hi3_mask */
    case 1747:  /* avx512bw_cmpv32hi3_mask */
    case 1745:  /* avx512vl_cmpv32qi3_mask */
    case 1743:  /* avx512vl_cmpv16qi3_mask */
    case 1741:  /* avx512bw_cmpv64qi3_mask */
    case 1739:  /* avx512vl_cmpv2df3_mask */
    case 1737:  /* avx512vl_cmpv4df3_mask */
    case 1734:  /* avx512f_cmpv8df3_mask */
    case 1731:  /* avx512vl_cmpv4sf3_mask */
    case 1729:  /* avx512vl_cmpv8sf3_mask */
    case 1726:  /* avx512f_cmpv16sf3_mask */
    case 1723:  /* avx512vl_cmpv2di3_mask */
    case 1721:  /* avx512vl_cmpv4di3_mask */
    case 1718:  /* avx512f_cmpv8di3_mask */
    case 1715:  /* avx512vl_cmpv4si3_mask */
    case 1713:  /* avx512vl_cmpv8si3_mask */
    case 1710:  /* avx512f_cmpv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4849:  /* avx512dq_rangepv8df_round */
    case 4841:  /* avx512dq_rangepv16sf_round */
    case 2060:  /* *fma_fmaddsub_v8df_round */
    case 2051:  /* *fma_fmaddsub_v16sf_round */
    case 1733:  /* avx512f_cmpv8df3_round */
    case 1725:  /* avx512f_cmpv16sf3_round */
    case 1717:  /* avx512f_cmpv8di3_round */
    case 1709:  /* avx512f_cmpv16si3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1707:  /* sse2_vmmaskcmpv2df3 */
    case 1706:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4907:  /* avx512f_vgetmantv2df_mask */
    case 4903:  /* avx512f_vgetmantv4sf_mask */
    case 4861:  /* avx512dq_rangesv2df_mask */
    case 4857:  /* avx512dq_rangesv4sf_mask */
    case 1691:  /* reducesv2df_mask */
    case 1689:  /* reducesv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4906:  /* avx512f_vgetmantv2df */
    case 4902:  /* avx512f_vgetmantv4sf */
    case 4860:  /* avx512dq_rangesv2df */
    case 4856:  /* avx512dq_rangesv4sf */
    case 2772:  /* avx512f_rndscalev2df */
    case 2770:  /* avx512f_rndscalev4sf */
    case 1697:  /* avx_vmcmpv2df3 */
    case 1696:  /* avx_vmcmpv4sf3 */
    case 1690:  /* reducesv2df */
    case 1688:  /* reducesv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3784:  /* ssse3_phsubdv4si3 */
    case 3783:  /* ssse3_phadddv4si3 */
    case 3780:  /* ssse3_phsubswv4hi3 */
    case 3779:  /* ssse3_phsubwv4hi3 */
    case 3778:  /* ssse3_phaddswv4hi3 */
    case 3777:  /* ssse3_phaddwv4hi3 */
    case 1675:  /* sse3_hsubv4sf3 */
    case 1674:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1673:  /* avx_hsubv8sf3 */
    case 1672:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1671:  /* *sse3_hsubv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1670:  /* *sse3_haddv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1668:  /* *sse3_haddv2df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1667:  /* avx_hsubv4df3 */
    case 1666:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 4901:  /* avx512vl_getmantv2df_mask_round */
    case 4897:  /* avx512vl_getmantv4df_mask_round */
    case 4893:  /* avx512f_getmantv8df_mask_round */
    case 4889:  /* avx512vl_getmantv4sf_mask_round */
    case 4885:  /* avx512vl_getmantv8sf_mask_round */
    case 4881:  /* avx512f_getmantv16sf_mask_round */
    case 2769:  /* avx512vl_rndscalev2df_mask_round */
    case 2765:  /* avx512vl_rndscalev4df_mask_round */
    case 2761:  /* avx512f_rndscalev8df_mask_round */
    case 2757:  /* avx512vl_rndscalev4sf_mask_round */
    case 2753:  /* avx512vl_rndscalev8sf_mask_round */
    case 2749:  /* avx512f_rndscalev16sf_mask_round */
    case 2635:  /* avx512vl_scalefv2df_mask_round */
    case 2631:  /* avx512vl_scalefv4df_mask_round */
    case 2627:  /* avx512f_scalefv8df_mask_round */
    case 2623:  /* avx512vl_scalefv4sf_mask_round */
    case 2619:  /* avx512vl_scalefv8sf_mask_round */
    case 2615:  /* avx512f_scalefv16sf_mask_round */
    case 1637:  /* ieee_minv8df3_mask_round */
    case 1633:  /* ieee_maxv8df3_mask_round */
    case 1621:  /* ieee_minv16sf3_mask_round */
    case 1617:  /* ieee_maxv16sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5046:  /* vgf2p8mulb_v16qi_mask */
    case 5044:  /* vgf2p8mulb_v32qi_mask */
    case 5042:  /* vgf2p8mulb_v64qi_mask */
    case 4995:  /* avx5124vnniw_vp4dpwssds_mask */
    case 4992:  /* avx5124vnniw_vp4dpwssd_mask */
    case 4989:  /* avx5124fmaddps_4fnmaddss_mask */
    case 4986:  /* avx5124fmaddps_4fnmaddps_mask */
    case 4983:  /* avx5124fmaddps_4fmaddss_mask */
    case 4980:  /* avx5124fmaddps_4fmaddps_mask */
    case 4976:  /* vpmultishiftqbv32qi_mask */
    case 4974:  /* vpmultishiftqbv16qi_mask */
    case 4972:  /* vpmultishiftqbv64qi_mask */
    case 4900:  /* avx512vl_getmantv2df_mask */
    case 4896:  /* avx512vl_getmantv4df_mask */
    case 4892:  /* avx512f_getmantv8df_mask */
    case 4888:  /* avx512vl_getmantv4sf_mask */
    case 4884:  /* avx512vl_getmantv8sf_mask */
    case 4880:  /* avx512f_getmantv16sf_mask */
    case 4569:  /* avx512f_vcvtps2ph512_mask */
    case 4567:  /* vcvtps2ph256_mask */
    case 4363:  /* avx_vpermilvarv2df3_mask */
    case 4361:  /* avx_vpermilvarv4df3_mask */
    case 4359:  /* avx512f_vpermilvarv8df3_mask */
    case 4357:  /* avx_vpermilvarv4sf3_mask */
    case 4355:  /* avx_vpermilvarv8sf3_mask */
    case 4353:  /* avx512f_vpermilvarv16sf3_mask */
    case 4187:  /* avx512bw_permvarv32hi_mask */
    case 4185:  /* avx512vl_permvarv16hi_mask */
    case 4183:  /* avx512vl_permvarv8hi_mask */
    case 4181:  /* avx512vl_permvarv32qi_mask */
    case 4179:  /* avx512vl_permvarv16qi_mask */
    case 4177:  /* avx512bw_permvarv64qi_mask */
    case 4175:  /* avx2_permvarv4df_mask */
    case 4173:  /* avx2_permvarv4di_mask */
    case 4171:  /* avx512f_permvarv8df_mask */
    case 4169:  /* avx512f_permvarv8di_mask */
    case 4167:  /* avx512f_permvarv16sf_mask */
    case 4165:  /* avx512f_permvarv16si_mask */
    case 4163:  /* avx2_permvarv8sf_mask */
    case 4161:  /* avx2_permvarv8si_mask */
    case 3810:  /* ssse3_pshufbv16qi3_mask */
    case 3808:  /* avx2_pshufbv32qi3_mask */
    case 3806:  /* avx512bw_pshufbv64qi3_mask */
    case 3793:  /* avx512bw_pmaddubsw512v32hi_mask */
    case 3791:  /* avx512bw_pmaddubsw512v16hi_mask */
    case 3789:  /* avx512bw_pmaddubsw512v8hi_mask */
    case 3702:  /* avx512bw_pshufhwv32hi_mask */
    case 3696:  /* avx512bw_pshuflwv32hi_mask */
    case 3136:  /* avx512bw_pmaddwd512v8hi_mask */
    case 3134:  /* avx512bw_pmaddwd512v16hi_mask */
    case 3132:  /* avx512bw_pmaddwd512v32hi_mask */
    case 2768:  /* avx512vl_rndscalev2df_mask */
    case 2764:  /* avx512vl_rndscalev4df_mask */
    case 2760:  /* avx512f_rndscalev8df_mask */
    case 2756:  /* avx512vl_rndscalev4sf_mask */
    case 2752:  /* avx512vl_rndscalev8sf_mask */
    case 2748:  /* avx512f_rndscalev16sf_mask */
    case 2634:  /* avx512vl_scalefv2df_mask */
    case 2630:  /* avx512vl_scalefv4df_mask */
    case 2626:  /* avx512f_scalefv8df_mask */
    case 2622:  /* avx512vl_scalefv4sf_mask */
    case 2618:  /* avx512vl_scalefv8sf_mask */
    case 2614:  /* avx512f_scalefv16sf_mask */
    case 1687:  /* reducepv2df_mask */
    case 1685:  /* reducepv4df_mask */
    case 1683:  /* reducepv8df_mask */
    case 1681:  /* reducepv4sf_mask */
    case 1679:  /* reducepv8sf_mask */
    case 1677:  /* reducepv16sf_mask */
    case 1645:  /* ieee_minv2df3_mask */
    case 1643:  /* ieee_maxv2df3_mask */
    case 1641:  /* ieee_minv4df3_mask */
    case 1639:  /* ieee_maxv4df3_mask */
    case 1636:  /* ieee_minv8df3_mask */
    case 1632:  /* ieee_maxv8df3_mask */
    case 1629:  /* ieee_minv4sf3_mask */
    case 1627:  /* ieee_maxv4sf3_mask */
    case 1625:  /* ieee_minv8sf3_mask */
    case 1623:  /* ieee_maxv8sf3_mask */
    case 1620:  /* ieee_minv16sf3_mask */
    case 1616:  /* ieee_maxv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4899:  /* avx512vl_getmantv2df_round */
    case 4895:  /* avx512vl_getmantv4df_round */
    case 4891:  /* avx512f_getmantv8df_round */
    case 4887:  /* avx512vl_getmantv4sf_round */
    case 4883:  /* avx512vl_getmantv8sf_round */
    case 4879:  /* avx512f_getmantv16sf_round */
    case 2767:  /* avx512vl_rndscalev2df_round */
    case 2763:  /* avx512vl_rndscalev4df_round */
    case 2759:  /* avx512f_rndscalev8df_round */
    case 2755:  /* avx512vl_rndscalev4sf_round */
    case 2751:  /* avx512vl_rndscalev8sf_round */
    case 2747:  /* avx512f_rndscalev16sf_round */
    case 2633:  /* avx512vl_scalefv2df_round */
    case 2629:  /* avx512vl_scalefv4df_round */
    case 2625:  /* avx512f_scalefv8df_round */
    case 2621:  /* avx512vl_scalefv4sf_round */
    case 2617:  /* avx512vl_scalefv8sf_round */
    case 2613:  /* avx512f_scalefv16sf_round */
    case 1635:  /* ieee_minv8df3_round */
    case 1631:  /* ieee_maxv8df3_round */
    case 1619:  /* ieee_minv16sf3_round */
    case 1615:  /* ieee_maxv16sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1562:  /* sse2_vmsqrtv2df2_mask_round */
    case 1558:  /* sse_vmsqrtv4sf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1561:  /* sse2_vmsqrtv2df2_mask */
    case 1557:  /* sse_vmsqrtv4sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 1560:  /* sse2_vmsqrtv2df2_round */
    case 1556:  /* sse_vmsqrtv4sf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2444:  /* avx512f_cvtps2pd512_mask_round */
    case 2436:  /* avx512f_cvtpd2ps512_mask_round */
    case 2412:  /* ufix_truncv8sfv8di2_mask_round */
    case 2408:  /* fix_truncv8sfv8di2_mask_round */
    case 2380:  /* ufix_truncv8dfv8di2_mask_round */
    case 2376:  /* fix_truncv8dfv8di2_mask_round */
    case 2366:  /* ufix_truncv8dfv8si2_mask_round */
    case 2362:  /* fix_truncv8dfv8si2_mask_round */
    case 2319:  /* ufloatv8div8sf2_mask_round */
    case 2315:  /* floatv8div8sf2_mask_round */
    case 2311:  /* ufloatv2div2df2_mask_round */
    case 2307:  /* floatv2div2df2_mask_round */
    case 2303:  /* ufloatv4div4df2_mask_round */
    case 2299:  /* floatv4div4df2_mask_round */
    case 2295:  /* ufloatv8div8df2_mask_round */
    case 2291:  /* floatv8div8df2_mask_round */
    case 2247:  /* ufix_truncv16sfv16si2_mask_round */
    case 2243:  /* fix_truncv16sfv16si2_mask_round */
    case 2203:  /* ufloatv4siv4sf2_mask_round */
    case 2199:  /* ufloatv8siv8sf2_mask_round */
    case 2195:  /* ufloatv16siv16sf2_mask_round */
    case 2187:  /* floatv16siv16sf2_mask_round */
    case 1964:  /* *fma_fnmadd_v8df_round */
    case 1955:  /* *fma_fnmadd_v16sf_round */
    case 1550:  /* avx512f_sqrtv8df2_mask_round */
    case 1542:  /* avx512f_sqrtv16sf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5028:  /* vpopcountv8hi_mask */
    case 5026:  /* vpopcountv16hi_mask */
    case 5024:  /* vpopcountv32hi_mask */
    case 5022:  /* vpopcountv32qi_mask */
    case 5020:  /* vpopcountv16qi_mask */
    case 5018:  /* vpopcountv64qi_mask */
    case 5008:  /* vpopcountv2di_mask */
    case 5006:  /* vpopcountv4di_mask */
    case 5004:  /* vpopcountv8di_mask */
    case 5002:  /* vpopcountv4si_mask */
    case 5000:  /* vpopcountv8si_mask */
    case 4998:  /* vpopcountv16si_mask */
    case 4927:  /* clzv2di2_mask */
    case 4925:  /* clzv4di2_mask */
    case 4923:  /* clzv8di2_mask */
    case 4921:  /* clzv4si2_mask */
    case 4919:  /* clzv8si2_mask */
    case 4917:  /* clzv16si2_mask */
    case 4330:  /* avx512dq_broadcastv4df_mask_1 */
    case 4328:  /* avx512dq_broadcastv4di_mask_1 */
    case 4326:  /* avx512dq_broadcastv8df_mask_1 */
    case 4324:  /* avx512dq_broadcastv8di_mask_1 */
    case 4322:  /* avx512dq_broadcastv16si_mask_1 */
    case 4320:  /* avx512dq_broadcastv16sf_mask_1 */
    case 4318:  /* avx512vl_broadcastv8sf_mask_1 */
    case 4316:  /* avx512vl_broadcastv8si_mask_1 */
    case 4281:  /* avx512vl_vec_dup_gprv2df_mask */
    case 4279:  /* avx512vl_vec_dup_gprv4df_mask */
    case 4277:  /* avx512f_vec_dup_gprv8df_mask */
    case 4275:  /* avx512vl_vec_dup_gprv4sf_mask */
    case 4273:  /* avx512vl_vec_dup_gprv8sf_mask */
    case 4271:  /* avx512f_vec_dup_gprv16sf_mask */
    case 4269:  /* avx512vl_vec_dup_gprv2di_mask */
    case 4267:  /* avx512vl_vec_dup_gprv4di_mask */
    case 4265:  /* avx512f_vec_dup_gprv8di_mask */
    case 4263:  /* avx512vl_vec_dup_gprv4si_mask */
    case 4261:  /* avx512vl_vec_dup_gprv8si_mask */
    case 4259:  /* avx512f_vec_dup_gprv16si_mask */
    case 4257:  /* avx512vl_vec_dup_gprv8hi_mask */
    case 4255:  /* avx512vl_vec_dup_gprv16hi_mask */
    case 4253:  /* avx512bw_vec_dup_gprv32hi_mask */
    case 4251:  /* avx512vl_vec_dup_gprv32qi_mask */
    case 4249:  /* avx512vl_vec_dup_gprv16qi_mask */
    case 4247:  /* avx512bw_vec_dup_gprv64qi_mask */
    case 4245:  /* avx512f_broadcastv8di_mask */
    case 4243:  /* avx512f_broadcastv8df_mask */
    case 4241:  /* avx512f_broadcastv16si_mask */
    case 4239:  /* avx512f_broadcastv16sf_mask */
    case 3960:  /* avx2_zero_extendv4siv4di2_mask */
    case 3958:  /* avx2_sign_extendv4siv4di2_mask */
    case 3956:  /* avx512f_zero_extendv8siv8di2_mask */
    case 3954:  /* avx512f_sign_extendv8siv8di2_mask */
    case 3944:  /* avx512f_zero_extendv8hiv8di2_mask */
    case 3942:  /* avx512f_sign_extendv8hiv8di2_mask */
    case 3924:  /* avx2_zero_extendv8hiv8si2_mask */
    case 3922:  /* avx2_sign_extendv8hiv8si2_mask */
    case 3920:  /* avx512f_zero_extendv16hiv16si2_mask */
    case 3918:  /* avx512f_sign_extendv16hiv16si2_mask */
    case 3908:  /* avx512f_zero_extendv16qiv16si2_mask */
    case 3906:  /* avx512f_sign_extendv16qiv16si2_mask */
    case 3900:  /* avx512bw_zero_extendv32qiv32hi2_mask */
    case 3898:  /* avx512bw_sign_extendv32qiv32hi2_mask */
    case 3896:  /* avx2_zero_extendv16qiv16hi2_mask */
    case 3894:  /* avx2_sign_extendv16qiv16hi2_mask */
    case 3851:  /* absv8hi2_mask */
    case 3850:  /* absv16hi2_mask */
    case 3849:  /* absv32hi2_mask */
    case 3848:  /* absv32qi2_mask */
    case 3847:  /* absv16qi2_mask */
    case 3846:  /* absv64qi2_mask */
    case 3845:  /* absv2di2_mask */
    case 3844:  /* absv4di2_mask */
    case 3843:  /* absv8di2_mask */
    case 3842:  /* absv4si2_mask */
    case 3841:  /* absv8si2_mask */
    case 3840:  /* absv16si2_mask */
    case 2854:  /* avx512vl_us_truncatev16hiv16qi2_mask */
    case 2853:  /* avx512vl_truncatev16hiv16qi2_mask */
    case 2852:  /* avx512vl_ss_truncatev16hiv16qi2_mask */
    case 2851:  /* avx512vl_us_truncatev8siv8hi2_mask */
    case 2850:  /* avx512vl_truncatev8siv8hi2_mask */
    case 2849:  /* avx512vl_ss_truncatev8siv8hi2_mask */
    case 2848:  /* avx512vl_us_truncatev4div4si2_mask */
    case 2847:  /* avx512vl_truncatev4div4si2_mask */
    case 2846:  /* avx512vl_ss_truncatev4div4si2_mask */
    case 2836:  /* avx512bw_us_truncatev32hiv32qi2_mask */
    case 2835:  /* avx512bw_truncatev32hiv32qi2_mask */
    case 2834:  /* avx512bw_ss_truncatev32hiv32qi2_mask */
    case 2830:  /* avx512f_us_truncatev8div8hi2_mask */
    case 2829:  /* avx512f_truncatev8div8hi2_mask */
    case 2828:  /* avx512f_ss_truncatev8div8hi2_mask */
    case 2827:  /* avx512f_us_truncatev8div8si2_mask */
    case 2826:  /* avx512f_truncatev8div8si2_mask */
    case 2825:  /* avx512f_ss_truncatev8div8si2_mask */
    case 2824:  /* avx512f_us_truncatev16siv16hi2_mask */
    case 2823:  /* avx512f_truncatev16siv16hi2_mask */
    case 2822:  /* avx512f_ss_truncatev16siv16hi2_mask */
    case 2821:  /* avx512f_us_truncatev16siv16qi2_mask */
    case 2820:  /* avx512f_truncatev16siv16qi2_mask */
    case 2819:  /* avx512f_ss_truncatev16siv16qi2_mask */
    case 2803:  /* vec_dupv2df_mask */
    case 2581:  /* vec_extract_hi_v8sf_mask */
    case 2580:  /* vec_extract_hi_v8si_mask */
    case 2579:  /* vec_extract_hi_v8sf_maskm */
    case 2578:  /* vec_extract_hi_v8si_maskm */
    case 2577:  /* vec_extract_lo_v8sf_maskm */
    case 2576:  /* vec_extract_lo_v8si_maskm */
    case 2575:  /* vec_extract_lo_v8sf_mask */
    case 2573:  /* vec_extract_lo_v8si_mask */
    case 2571:  /* vec_extract_hi_v4df_mask */
    case 2569:  /* vec_extract_hi_v4di_mask */
    case 2567:  /* vec_extract_lo_v4df_mask */
    case 2565:  /* vec_extract_lo_v4di_mask */
    case 2563:  /* vec_extract_lo_v16si_mask */
    case 2561:  /* vec_extract_lo_v16sf_mask */
    case 2559:  /* vec_extract_hi_v16si_mask */
    case 2557:  /* vec_extract_hi_v16sf_mask */
    case 2555:  /* vec_extract_hi_v16si_maskm */
    case 2554:  /* vec_extract_hi_v16sf_maskm */
    case 2553:  /* vec_extract_hi_v8di_mask */
    case 2551:  /* vec_extract_hi_v8df_mask */
    case 2549:  /* vec_extract_hi_v8di_maskm */
    case 2548:  /* vec_extract_hi_v8df_maskm */
    case 2547:  /* vec_extract_lo_v8di_mask */
    case 2545:  /* vec_extract_lo_v8df_mask */
    case 2543:  /* vec_extract_lo_v8di_maskm */
    case 2542:  /* vec_extract_lo_v8df_maskm */
    case 2446:  /* avx_cvtps2pd256_mask */
    case 2443:  /* avx512f_cvtps2pd512_mask */
    case 2438:  /* avx_cvtpd2ps256_mask */
    case 2435:  /* avx512f_cvtpd2ps512_mask */
    case 2424:  /* ufix_truncv4sfv4si2_mask */
    case 2422:  /* ufix_truncv8sfv8si2_mask */
    case 2416:  /* ufix_truncv4sfv4di2_mask */
    case 2414:  /* fix_truncv4sfv4di2_mask */
    case 2411:  /* ufix_truncv8sfv8di2_mask */
    case 2407:  /* fix_truncv8sfv8di2_mask */
    case 2388:  /* ufix_truncv2dfv2di2_mask */
    case 2386:  /* fix_truncv2dfv2di2_mask */
    case 2384:  /* ufix_truncv4dfv4di2_mask */
    case 2382:  /* fix_truncv4dfv4di2_mask */
    case 2379:  /* ufix_truncv8dfv8di2_mask */
    case 2375:  /* fix_truncv8dfv8di2_mask */
    case 2372:  /* ufix_truncv4dfv4si2_mask */
    case 2370:  /* fix_truncv4dfv4si2_mask */
    case 2365:  /* ufix_truncv8dfv8si2_mask */
    case 2361:  /* fix_truncv8dfv8si2_mask */
    case 2333:  /* ufloatv4siv4df2_mask */
    case 2331:  /* ufloatv8siv8df2_mask */
    case 2323:  /* ufloatv4div4sf2_mask */
    case 2321:  /* floatv4div4sf2_mask */
    case 2318:  /* ufloatv8div8sf2_mask */
    case 2314:  /* floatv8div8sf2_mask */
    case 2310:  /* ufloatv2div2df2_mask */
    case 2306:  /* floatv2div2df2_mask */
    case 2302:  /* ufloatv4div4df2_mask */
    case 2298:  /* floatv4div4df2_mask */
    case 2294:  /* ufloatv8div8df2_mask */
    case 2290:  /* floatv8div8df2_mask */
    case 2287:  /* floatv4siv4df2_mask */
    case 2285:  /* floatv8siv8df2_mask */
    case 2251:  /* fix_truncv4sfv4si2_mask */
    case 2249:  /* fix_truncv8sfv8si2_mask */
    case 2246:  /* ufix_truncv16sfv16si2_mask */
    case 2242:  /* fix_truncv16sfv16si2_mask */
    case 2202:  /* ufloatv4siv4sf2_mask */
    case 2198:  /* ufloatv8siv8sf2_mask */
    case 2194:  /* ufloatv16siv16sf2_mask */
    case 2191:  /* floatv4siv4sf2_mask */
    case 2189:  /* floatv8siv8sf2_mask */
    case 2186:  /* floatv16siv16sf2_mask */
    case 1968:  /* *fma_fnmadd_v2df */
    case 1966:  /* *fma_fnmadd_v4df */
    case 1962:  /* *fma_fnmadd_v8df */
    case 1961:  /* *fma_fnmadd_df */
    case 1959:  /* *fma_fnmadd_v4sf */
    case 1957:  /* *fma_fnmadd_v8sf */
    case 1953:  /* *fma_fnmadd_v16sf */
    case 1952:  /* *fma_fnmadd_sf */
    case 1951:  /* *fma_fnmadd_v4df */
    case 1950:  /* *fma_fnmadd_v8sf */
    case 1949:  /* *fma_fnmadd_v2df */
    case 1948:  /* *fma_fnmadd_v4sf */
    case 1947:  /* *fma_fnmadd_df */
    case 1946:  /* *fma_fnmadd_sf */
    case 1554:  /* sse2_sqrtv2df2_mask */
    case 1552:  /* avx_sqrtv4df2_mask */
    case 1549:  /* avx512f_sqrtv8df2_mask */
    case 1546:  /* sse_sqrtv4sf2_mask */
    case 1544:  /* avx_sqrtv8sf2_mask */
    case 1541:  /* avx512f_sqrtv16sf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2442:  /* avx512f_cvtps2pd512_round */
    case 2434:  /* *avx512f_cvtpd2ps512_round */
    case 2410:  /* ufix_truncv8sfv8di2_round */
    case 2406:  /* fix_truncv8sfv8di2_round */
    case 2378:  /* ufix_truncv8dfv8di2_round */
    case 2374:  /* fix_truncv8dfv8di2_round */
    case 2364:  /* ufix_truncv8dfv8si2_round */
    case 2360:  /* fix_truncv8dfv8si2_round */
    case 2317:  /* ufloatv8div8sf2_round */
    case 2313:  /* floatv8div8sf2_round */
    case 2309:  /* ufloatv2div2df2_round */
    case 2305:  /* floatv2div2df2_round */
    case 2301:  /* ufloatv4div4df2_round */
    case 2297:  /* floatv4div4df2_round */
    case 2293:  /* ufloatv8div8df2_round */
    case 2289:  /* floatv8div8df2_round */
    case 2245:  /* ufix_truncv16sfv16si2_round */
    case 2241:  /* fix_truncv16sfv16si2_round */
    case 2201:  /* ufloatv4siv4sf2_round */
    case 2197:  /* ufloatv8siv8sf2_round */
    case 2193:  /* ufloatv16siv16sf2_round */
    case 2185:  /* floatv16siv16sf2_round */
    case 1548:  /* avx512f_sqrtv8df2_round */
    case 1540:  /* avx512f_sqrtv16sf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1580:  /* rsqrt14_v2df_mask */
    case 1579:  /* rsqrt14_v4sf_mask */
    case 1538:  /* srcp14v2df_mask */
    case 1537:  /* srcp14v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 4939:  /* conflictv2di_mask */
    case 4937:  /* conflictv4di_mask */
    case 4935:  /* conflictv8di_mask */
    case 4933:  /* conflictv4si_mask */
    case 4931:  /* conflictv8si_mask */
    case 4929:  /* conflictv16si_mask */
    case 4561:  /* avx512f_vcvtph2ps512_mask */
    case 4558:  /* vcvtph2ps256_mask */
    case 4556:  /* *vcvtph2ps_load_mask */
    case 4038:  /* avx512er_rsqrt28v8df_mask */
    case 4034:  /* avx512er_rsqrt28v16sf_mask */
    case 4026:  /* avx512er_rcp28v8df_mask */
    case 4022:  /* avx512er_rcp28v16sf_mask */
    case 4018:  /* avx512er_exp2v8df_mask */
    case 4014:  /* avx512er_exp2v16sf_mask */
    case 2676:  /* avx512vl_getexpv2df_mask */
    case 2672:  /* avx512vl_getexpv4df_mask */
    case 2668:  /* avx512f_getexpv8df_mask */
    case 2664:  /* avx512vl_getexpv4sf_mask */
    case 2660:  /* avx512vl_getexpv8sf_mask */
    case 2656:  /* avx512f_getexpv16sf_mask */
    case 2404:  /* ufix_notruncv2dfv2di2_mask */
    case 2402:  /* ufix_notruncv4dfv4di2_mask */
    case 2399:  /* ufix_notruncv8dfv8di2_mask */
    case 2396:  /* fix_notruncv2dfv2di2_mask */
    case 2394:  /* fix_notruncv4dfv4di2_mask */
    case 2391:  /* fix_notruncv8dfv8di2_mask */
    case 2355:  /* ufix_notruncv4dfv4si2_mask */
    case 2351:  /* ufix_notruncv8dfv8si2_mask */
    case 2345:  /* avx_cvtpd2dq256_mask */
    case 2342:  /* avx512f_cvtpd2dq512_mask */
    case 2237:  /* avx512dq_cvtps2uqqv4di_mask */
    case 2234:  /* avx512dq_cvtps2uqqv8di_mask */
    case 2229:  /* avx512dq_cvtps2qqv4di_mask */
    case 2226:  /* avx512dq_cvtps2qqv8di_mask */
    case 2222:  /* avx512vl_ufix_notruncv4sfv4si_mask */
    case 2218:  /* avx512vl_ufix_notruncv8sfv8si_mask */
    case 2214:  /* avx512f_ufix_notruncv16sfv16si_mask */
    case 2210:  /* avx512f_fix_notruncv16sfv16si_mask */
    case 2207:  /* sse2_fix_notruncv4sfv4si_mask */
    case 2205:  /* avx_fix_notruncv8sfv8si_mask */
    case 1576:  /* rsqrt14v2df_mask */
    case 1574:  /* rsqrt14v4df_mask */
    case 1572:  /* rsqrt14v8df_mask */
    case 1570:  /* rsqrt14v4sf_mask */
    case 1568:  /* rsqrt14v8sf_mask */
    case 1566:  /* rsqrt14v16sf_mask */
    case 1534:  /* rcp14v2df_mask */
    case 1532:  /* rcp14v4df_mask */
    case 1530:  /* rcp14v8df_mask */
    case 1528:  /* rcp14v4sf_mask */
    case 1526:  /* rcp14v8sf_mask */
    case 1524:  /* rcp14v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4114:  /* *xop_vmfrczv2df2 */
    case 4113:  /* *xop_vmfrczv4sf2 */
    case 4042:  /* avx512er_vmrsqrt28v2df */
    case 4040:  /* avx512er_vmrsqrt28v4sf */
    case 4030:  /* avx512er_vmrcp28v2df */
    case 4028:  /* avx512er_vmrcp28v4sf */
    case 2346:  /* *avx_cvtpd2dq256_2 */
    case 1581:  /* sse_vmrsqrtv4sf2 */
    case 1578:  /* rsqrt14v2df */
    case 1577:  /* rsqrt14v4sf */
    case 1536:  /* srcp14v2df */
    case 1535:  /* srcp14v4sf */
    case 1522:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1661:  /* sse2_vmsminv2df3_mask_round */
    case 1657:  /* sse2_vmsmaxv2df3_mask_round */
    case 1653:  /* sse_vmsminv4sf3_mask_round */
    case 1649:  /* sse_vmsmaxv4sf3_mask_round */
    case 1503:  /* sse2_vmdivv2df3_mask_round */
    case 1499:  /* sse2_vmmulv2df3_mask_round */
    case 1495:  /* sse_vmdivv4sf3_mask_round */
    case 1491:  /* sse_vmmulv4sf3_mask_round */
    case 1471:  /* sse2_vmsubv2df3_mask_round */
    case 1467:  /* sse2_vmaddv2df3_mask_round */
    case 1463:  /* sse_vmsubv4sf3_mask_round */
    case 1459:  /* sse_vmaddv4sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1659:  /* sse2_vmsminv2df3_mask */
    case 1655:  /* sse2_vmsmaxv2df3_mask */
    case 1651:  /* sse_vmsminv4sf3_mask */
    case 1647:  /* sse_vmsmaxv4sf3_mask */
    case 1502:  /* sse2_vmdivv2df3_mask */
    case 1498:  /* sse2_vmmulv2df3_mask */
    case 1494:  /* sse_vmdivv4sf3_mask */
    case 1490:  /* sse_vmmulv4sf3_mask */
    case 1470:  /* sse2_vmsubv2df3_mask */
    case 1466:  /* sse2_vmaddv2df3_mask */
    case 1462:  /* sse_vmsubv4sf3_mask */
    case 1458:  /* sse_vmaddv4sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1660:  /* sse2_vmsminv2df3_round */
    case 1656:  /* sse2_vmsmaxv2df3_round */
    case 1652:  /* sse_vmsminv4sf3_round */
    case 1648:  /* sse_vmsmaxv4sf3_round */
    case 1501:  /* sse2_vmdivv2df3_round */
    case 1497:  /* sse2_vmmulv2df3_round */
    case 1493:  /* sse_vmdivv4sf3_round */
    case 1489:  /* sse_vmmulv4sf3_round */
    case 1469:  /* sse2_vmsubv2df3_round */
    case 1465:  /* sse2_vmaddv2df3_round */
    case 1461:  /* sse_vmsubv4sf3_round */
    case 1457:  /* sse_vmaddv4sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1658:  /* sse2_vmsminv2df3 */
    case 1654:  /* sse2_vmsmaxv2df3 */
    case 1650:  /* sse_vmsminv4sf3 */
    case 1646:  /* sse_vmsmaxv4sf3 */
    case 1500:  /* sse2_vmdivv2df3 */
    case 1496:  /* sse2_vmmulv2df3 */
    case 1492:  /* sse_vmdivv4sf3 */
    case 1488:  /* sse_vmmulv4sf3 */
    case 1468:  /* sse2_vmsubv2df3 */
    case 1464:  /* sse2_vmaddv2df3 */
    case 1460:  /* sse_vmsubv4sf3 */
    case 1456:  /* sse_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1605:  /* *sminv8df3_mask_round */
    case 1601:  /* *smaxv8df3_mask_round */
    case 1589:  /* *sminv16sf3_mask_round */
    case 1585:  /* *smaxv16sf3_mask_round */
    case 1515:  /* avx512f_divv8df3_mask_round */
    case 1507:  /* avx512f_divv16sf3_mask_round */
    case 1483:  /* *mulv8df3_mask_round */
    case 1475:  /* *mulv16sf3_mask_round */
    case 1455:  /* *subv2df3_mask_round */
    case 1451:  /* *addv2df3_mask_round */
    case 1447:  /* *subv4df3_mask_round */
    case 1443:  /* *addv4df3_mask_round */
    case 1439:  /* *subv8df3_mask_round */
    case 1435:  /* *addv8df3_mask_round */
    case 1431:  /* *subv4sf3_mask_round */
    case 1427:  /* *addv4sf3_mask_round */
    case 1423:  /* *subv8sf3_mask_round */
    case 1419:  /* *addv8sf3_mask_round */
    case 1415:  /* *subv16sf3_mask_round */
    case 1411:  /* *addv16sf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4540:  /* avx512bw_lshrvv32hi_mask */
    case 4538:  /* avx512bw_ashlvv32hi_mask */
    case 4536:  /* avx512vl_lshrvv16hi_mask */
    case 4534:  /* avx512vl_ashlvv16hi_mask */
    case 4532:  /* avx512vl_lshrvv8hi_mask */
    case 4530:  /* avx512vl_ashlvv8hi_mask */
    case 4528:  /* avx2_lshrvv2di_mask */
    case 4526:  /* avx2_ashlvv2di_mask */
    case 4524:  /* avx2_lshrvv4di_mask */
    case 4522:  /* avx2_ashlvv4di_mask */
    case 4520:  /* avx512f_lshrvv8di_mask */
    case 4518:  /* avx512f_ashlvv8di_mask */
    case 4516:  /* avx2_lshrvv4si_mask */
    case 4514:  /* avx2_ashlvv4si_mask */
    case 4512:  /* avx2_lshrvv8si_mask */
    case 4510:  /* avx2_ashlvv8si_mask */
    case 4508:  /* avx512f_lshrvv16si_mask */
    case 4506:  /* avx512f_ashlvv16si_mask */
    case 4504:  /* avx512bw_ashrvv32hi_mask */
    case 4502:  /* avx512vl_ashrvv16hi_mask */
    case 4500:  /* avx512vl_ashrvv8hi_mask */
    case 4498:  /* avx512f_ashrvv8di_mask */
    case 4496:  /* avx2_ashrvv4di_mask */
    case 4494:  /* avx2_ashrvv2di_mask */
    case 4492:  /* avx512f_ashrvv16si_mask */
    case 4490:  /* avx2_ashrvv8si_mask */
    case 4488:  /* avx2_ashrvv4si_mask */
    case 3524:  /* xorv2di3_mask */
    case 3522:  /* iorv2di3_mask */
    case 3520:  /* andv2di3_mask */
    case 3518:  /* xorv4di3_mask */
    case 3516:  /* iorv4di3_mask */
    case 3514:  /* andv4di3_mask */
    case 3512:  /* xorv8di3_mask */
    case 3510:  /* iorv8di3_mask */
    case 3508:  /* andv8di3_mask */
    case 3506:  /* xorv4si3_mask */
    case 3504:  /* iorv4si3_mask */
    case 3502:  /* andv4si3_mask */
    case 3500:  /* xorv8si3_mask */
    case 3498:  /* iorv8si3_mask */
    case 3496:  /* andv8si3_mask */
    case 3494:  /* xorv16si3_mask */
    case 3492:  /* iorv16si3_mask */
    case 3490:  /* andv16si3_mask */
    case 3404:  /* *sse4_1_uminv4si3_mask */
    case 3402:  /* *sse4_1_umaxv4si3_mask */
    case 3400:  /* *sse4_1_uminv8hi3_mask */
    case 3398:  /* *sse4_1_umaxv8hi3_mask */
    case 3394:  /* *sse4_1_sminv4si3_mask */
    case 3392:  /* *sse4_1_smaxv4si3_mask */
    case 3390:  /* *sse4_1_sminv16qi3_mask */
    case 3388:  /* *sse4_1_smaxv16qi3_mask */
    case 3386:  /* uminv8hi3_mask */
    case 3384:  /* umaxv8hi3_mask */
    case 3382:  /* sminv8hi3_mask */
    case 3380:  /* smaxv8hi3_mask */
    case 3378:  /* uminv16hi3_mask */
    case 3376:  /* umaxv16hi3_mask */
    case 3374:  /* sminv16hi3_mask */
    case 3372:  /* smaxv16hi3_mask */
    case 3370:  /* uminv32hi3_mask */
    case 3368:  /* umaxv32hi3_mask */
    case 3366:  /* sminv32hi3_mask */
    case 3364:  /* smaxv32hi3_mask */
    case 3362:  /* uminv32qi3_mask */
    case 3360:  /* umaxv32qi3_mask */
    case 3358:  /* sminv32qi3_mask */
    case 3356:  /* smaxv32qi3_mask */
    case 3354:  /* uminv16qi3_mask */
    case 3352:  /* umaxv16qi3_mask */
    case 3350:  /* sminv16qi3_mask */
    case 3348:  /* smaxv16qi3_mask */
    case 3346:  /* uminv64qi3_mask */
    case 3344:  /* umaxv64qi3_mask */
    case 3342:  /* sminv64qi3_mask */
    case 3340:  /* smaxv64qi3_mask */
    case 3338:  /* *avx512f_uminv2di3_mask */
    case 3336:  /* *avx512f_umaxv2di3_mask */
    case 3334:  /* *avx512f_sminv2di3_mask */
    case 3332:  /* *avx512f_smaxv2di3_mask */
    case 3330:  /* *avx512f_uminv4di3_mask */
    case 3328:  /* *avx512f_umaxv4di3_mask */
    case 3326:  /* *avx512f_sminv4di3_mask */
    case 3324:  /* *avx512f_smaxv4di3_mask */
    case 3322:  /* *avx512f_uminv8di3_mask */
    case 3320:  /* *avx512f_umaxv8di3_mask */
    case 3318:  /* *avx512f_sminv8di3_mask */
    case 3316:  /* *avx512f_smaxv8di3_mask */
    case 3314:  /* *avx512f_uminv4si3_mask */
    case 3312:  /* *avx512f_umaxv4si3_mask */
    case 3310:  /* *avx512f_sminv4si3_mask */
    case 3308:  /* *avx512f_smaxv4si3_mask */
    case 3306:  /* *avx512f_uminv8si3_mask */
    case 3304:  /* *avx512f_umaxv8si3_mask */
    case 3302:  /* *avx512f_sminv8si3_mask */
    case 3300:  /* *avx512f_smaxv8si3_mask */
    case 3298:  /* *avx512f_uminv16si3_mask */
    case 3296:  /* *avx512f_umaxv16si3_mask */
    case 3294:  /* *avx512f_sminv16si3_mask */
    case 3292:  /* *avx512f_smaxv16si3_mask */
    case 3278:  /* avx512vl_rorv2di_mask */
    case 3276:  /* avx512vl_rolv2di_mask */
    case 3274:  /* avx512vl_rorv4di_mask */
    case 3272:  /* avx512vl_rolv4di_mask */
    case 3270:  /* avx512f_rorv8di_mask */
    case 3268:  /* avx512f_rolv8di_mask */
    case 3266:  /* avx512vl_rorv4si_mask */
    case 3264:  /* avx512vl_rolv4si_mask */
    case 3262:  /* avx512vl_rorv8si_mask */
    case 3260:  /* avx512vl_rolv8si_mask */
    case 3258:  /* avx512f_rorv16si_mask */
    case 3256:  /* avx512f_rolv16si_mask */
    case 3254:  /* avx512vl_rorvv2di_mask */
    case 3252:  /* avx512vl_rolvv2di_mask */
    case 3250:  /* avx512vl_rorvv4di_mask */
    case 3248:  /* avx512vl_rolvv4di_mask */
    case 3246:  /* avx512f_rorvv8di_mask */
    case 3244:  /* avx512f_rolvv8di_mask */
    case 3242:  /* avx512vl_rorvv4si_mask */
    case 3240:  /* avx512vl_rolvv4si_mask */
    case 3238:  /* avx512vl_rorvv8si_mask */
    case 3236:  /* avx512vl_rolvv8si_mask */
    case 3234:  /* avx512f_rorvv16si_mask */
    case 3232:  /* avx512f_rolvv16si_mask */
    case 3220:  /* lshrv8di3_mask */
    case 3218:  /* ashlv8di3_mask */
    case 3216:  /* lshrv16si3_mask */
    case 3214:  /* ashlv16si3_mask */
    case 3212:  /* lshrv32hi3_mask */
    case 3210:  /* ashlv32hi3_mask */
    case 3196:  /* lshrv2di3_mask */
    case 3194:  /* ashlv2di3_mask */
    case 3192:  /* lshrv4di3_mask */
    case 3190:  /* ashlv4di3_mask */
    case 3188:  /* lshrv4si3_mask */
    case 3186:  /* ashlv4si3_mask */
    case 3184:  /* lshrv8si3_mask */
    case 3182:  /* ashlv8si3_mask */
    case 3180:  /* lshrv8hi3_mask */
    case 3178:  /* ashlv8hi3_mask */
    case 3176:  /* lshrv16hi3_mask */
    case 3174:  /* ashlv16hi3_mask */
    case 3172:  /* ashrv8di3_mask */
    case 3170:  /* ashrv16si3_mask */
    case 3168:  /* ashrv4di3_mask */
    case 3166:  /* ashrv32hi3_mask */
    case 3160:  /* ashrv2di3_mask */
    case 3158:  /* ashrv4si3_mask */
    case 3156:  /* ashrv8si3_mask */
    case 3154:  /* ashrv8hi3_mask */
    case 3152:  /* ashrv16hi3_mask */
    case 3150:  /* *sse4_1_mulv4si3_mask */
    case 3148:  /* *avx2_mulv8si3_mask */
    case 3146:  /* *avx512f_mulv16si3_mask */
    case 3144:  /* avx512dq_mulv2di3_mask */
    case 3142:  /* avx512dq_mulv4di3_mask */
    case 3140:  /* avx512dq_mulv8di3_mask */
    case 3106:  /* *mulv8hi3_mask */
    case 3104:  /* *mulv16hi3_mask */
    case 3102:  /* *mulv32hi3_mask */
    case 3100:  /* *sse2_ussubv8hi3_mask */
    case 3098:  /* *sse2_sssubv8hi3_mask */
    case 3096:  /* *sse2_usaddv8hi3_mask */
    case 3094:  /* *sse2_ssaddv8hi3_mask */
    case 3092:  /* *avx2_ussubv16hi3_mask */
    case 3090:  /* *avx2_sssubv16hi3_mask */
    case 3088:  /* *avx2_usaddv16hi3_mask */
    case 3086:  /* *avx2_ssaddv16hi3_mask */
    case 3084:  /* *avx512bw_ussubv32hi3_mask */
    case 3082:  /* *avx512bw_sssubv32hi3_mask */
    case 3080:  /* *avx512bw_usaddv32hi3_mask */
    case 3078:  /* *avx512bw_ssaddv32hi3_mask */
    case 3076:  /* *sse2_ussubv16qi3_mask */
    case 3074:  /* *sse2_sssubv16qi3_mask */
    case 3072:  /* *sse2_usaddv16qi3_mask */
    case 3070:  /* *sse2_ssaddv16qi3_mask */
    case 3068:  /* *avx2_ussubv32qi3_mask */
    case 3066:  /* *avx2_sssubv32qi3_mask */
    case 3064:  /* *avx2_usaddv32qi3_mask */
    case 3062:  /* *avx2_ssaddv32qi3_mask */
    case 3060:  /* *avx512bw_ussubv64qi3_mask */
    case 3058:  /* *avx512bw_sssubv64qi3_mask */
    case 3056:  /* *avx512bw_usaddv64qi3_mask */
    case 3054:  /* *avx512bw_ssaddv64qi3_mask */
    case 3052:  /* *subv8hi3_mask */
    case 3051:  /* *addv8hi3_mask */
    case 3050:  /* *subv16hi3_mask */
    case 3049:  /* *addv16hi3_mask */
    case 3048:  /* *subv32hi3_mask */
    case 3047:  /* *addv32hi3_mask */
    case 3046:  /* *subv32qi3_mask */
    case 3045:  /* *addv32qi3_mask */
    case 3044:  /* *subv16qi3_mask */
    case 3043:  /* *addv16qi3_mask */
    case 3042:  /* *subv64qi3_mask */
    case 3041:  /* *addv64qi3_mask */
    case 3040:  /* *subv2di3_mask */
    case 3039:  /* *addv2di3_mask */
    case 3038:  /* *subv4di3_mask */
    case 3037:  /* *addv4di3_mask */
    case 3036:  /* *subv8di3_mask */
    case 3035:  /* *addv8di3_mask */
    case 3034:  /* *subv4si3_mask */
    case 3033:  /* *addv4si3_mask */
    case 3032:  /* *subv8si3_mask */
    case 3031:  /* *addv8si3_mask */
    case 3030:  /* *subv16si3_mask */
    case 3029:  /* *addv16si3_mask */
    case 1845:  /* *xorv8df3_mask */
    case 1843:  /* *iorv8df3_mask */
    case 1841:  /* *andv8df3_mask */
    case 1839:  /* *xorv16sf3_mask */
    case 1837:  /* *iorv16sf3_mask */
    case 1835:  /* *andv16sf3_mask */
    case 1833:  /* *xorv2df3_mask */
    case 1831:  /* *iorv2df3_mask */
    case 1829:  /* *andv2df3_mask */
    case 1827:  /* *xorv4df3_mask */
    case 1825:  /* *iorv4df3_mask */
    case 1823:  /* *andv4df3_mask */
    case 1821:  /* *xorv4sf3_mask */
    case 1819:  /* *iorv4sf3_mask */
    case 1817:  /* *andv4sf3_mask */
    case 1815:  /* *xorv8sf3_mask */
    case 1813:  /* *iorv8sf3_mask */
    case 1811:  /* *andv8sf3_mask */
    case 1613:  /* *sminv2df3_mask */
    case 1611:  /* *smaxv2df3_mask */
    case 1609:  /* *sminv4df3_mask */
    case 1607:  /* *smaxv4df3_mask */
    case 1604:  /* *sminv8df3_mask */
    case 1600:  /* *smaxv8df3_mask */
    case 1597:  /* *sminv4sf3_mask */
    case 1595:  /* *smaxv4sf3_mask */
    case 1593:  /* *sminv8sf3_mask */
    case 1591:  /* *smaxv8sf3_mask */
    case 1588:  /* *sminv16sf3_mask */
    case 1584:  /* *smaxv16sf3_mask */
    case 1519:  /* sse2_divv2df3_mask */
    case 1517:  /* avx_divv4df3_mask */
    case 1514:  /* avx512f_divv8df3_mask */
    case 1511:  /* sse_divv4sf3_mask */
    case 1509:  /* avx_divv8sf3_mask */
    case 1506:  /* avx512f_divv16sf3_mask */
    case 1487:  /* *mulv2df3_mask */
    case 1485:  /* *mulv4df3_mask */
    case 1482:  /* *mulv8df3_mask */
    case 1479:  /* *mulv4sf3_mask */
    case 1477:  /* *mulv8sf3_mask */
    case 1474:  /* *mulv16sf3_mask */
    case 1454:  /* *subv2df3_mask */
    case 1450:  /* *addv2df3_mask */
    case 1446:  /* *subv4df3_mask */
    case 1442:  /* *addv4df3_mask */
    case 1438:  /* *subv8df3_mask */
    case 1434:  /* *addv8df3_mask */
    case 1430:  /* *subv4sf3_mask */
    case 1426:  /* *addv4sf3_mask */
    case 1422:  /* *subv8sf3_mask */
    case 1418:  /* *addv8sf3_mask */
    case 1414:  /* *subv16sf3_mask */
    case 1410:  /* *addv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1603:  /* *sminv8df3_round */
    case 1599:  /* *smaxv8df3_round */
    case 1587:  /* *sminv16sf3_round */
    case 1583:  /* *smaxv16sf3_round */
    case 1513:  /* avx512f_divv8df3_round */
    case 1505:  /* avx512f_divv16sf3_round */
    case 1481:  /* *mulv8df3_round */
    case 1473:  /* *mulv16sf3_round */
    case 1453:  /* *subv2df3_round */
    case 1449:  /* *addv2df3_round */
    case 1445:  /* *subv4df3_round */
    case 1441:  /* *addv4df3_round */
    case 1437:  /* *subv8df3_round */
    case 1433:  /* *addv8df3_round */
    case 1429:  /* *subv4sf3_round */
    case 1425:  /* *addv4sf3_round */
    case 1421:  /* *subv8sf3_round */
    case 1417:  /* *addv8sf3_round */
    case 1413:  /* *subv16sf3_round */
    case 1409:  /* *addv16sf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1401:  /* kunpckdi */
    case 1400:  /* kunpcksi */
    case 1399:  /* kunpckhi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 3981:  /* ptesttf2 */
    case 3980:  /* avx_ptestv4df */
    case 3979:  /* avx_ptestv8sf */
    case 3978:  /* avx_ptestv4di */
    case 3977:  /* avx_ptestv8si */
    case 3976:  /* avx_ptestv16hi */
    case 3975:  /* avx_ptestv32qi */
    case 3974:  /* sse4_1_ptestv2df */
    case 3973:  /* sse4_1_ptestv4sf */
    case 3972:  /* sse4_1_ptestv2di */
    case 3971:  /* sse4_1_ptestv4si */
    case 3970:  /* sse4_1_ptestv8hi */
    case 3969:  /* sse4_1_ptestv16qi */
    case 3968:  /* avx_vtestpd */
    case 3967:  /* avx_vtestpd256 */
    case 3966:  /* avx_vtestps */
    case 3965:  /* avx_vtestps256 */
    case 1398:  /* kortestdi */
    case 1397:  /* kortestsi */
    case 1396:  /* kortesthi */
    case 1395:  /* kortestqi */
    case 1394:  /* ktestdi */
    case 1393:  /* ktestsi */
    case 1392:  /* ktesthi */
    case 1391:  /* ktestqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1339:  /* avx512vl_storev8hi_mask */
    case 1338:  /* avx512vl_storev16hi_mask */
    case 1337:  /* avx512bw_storev32hi_mask */
    case 1336:  /* avx512vl_storev32qi_mask */
    case 1335:  /* avx512vl_storev16qi_mask */
    case 1334:  /* avx512bw_storev64qi_mask */
    case 1333:  /* avx512vl_storev2df_mask */
    case 1332:  /* avx512vl_storev4df_mask */
    case 1331:  /* avx512f_storev8df_mask */
    case 1330:  /* avx512vl_storev4sf_mask */
    case 1329:  /* avx512vl_storev8sf_mask */
    case 1328:  /* avx512f_storev16sf_mask */
    case 1327:  /* avx512vl_storev2di_mask */
    case 1326:  /* avx512vl_storev4di_mask */
    case 1325:  /* avx512f_storev8di_mask */
    case 1324:  /* avx512vl_storev4si_mask */
    case 1323:  /* avx512vl_storev8si_mask */
    case 1322:  /* avx512f_storev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 3891:  /* avx2_pblenddv4si */
    case 3890:  /* avx2_pblenddv8si */
    case 3889:  /* *avx2_pblendw */
    case 3888:  /* sse4_1_pblendw */
    case 3866:  /* sse4_1_blendpd */
    case 3865:  /* avx_blendpd256 */
    case 3864:  /* sse4_1_blendps */
    case 3863:  /* avx_blendps256 */
    case 1321:  /* avx512vl_blendmv8hi */
    case 1320:  /* avx512vl_blendmv16hi */
    case 1319:  /* avx512bw_blendmv32hi */
    case 1318:  /* avx512vl_blendmv32qi */
    case 1317:  /* avx512vl_blendmv16qi */
    case 1316:  /* avx512bw_blendmv64qi */
    case 1315:  /* avx512vl_blendmv2df */
    case 1314:  /* avx512vl_blendmv4df */
    case 1313:  /* avx512f_blendmv8df */
    case 1312:  /* avx512vl_blendmv4sf */
    case 1311:  /* avx512vl_blendmv8sf */
    case 1310:  /* avx512f_blendmv16sf */
    case 1309:  /* avx512vl_blendmv2di */
    case 1308:  /* avx512vl_blendmv4di */
    case 1307:  /* avx512f_blendmv8di */
    case 1306:  /* avx512vl_blendmv4si */
    case 1305:  /* avx512vl_blendmv8si */
    case 1304:  /* avx512f_blendmv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4142:  /* *avx_vzeroall */
    case 1264:  /* *mmx_femms */
    case 1263:  /* *mmx_emms */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 3762:  /* *sse2_maskmovdqu */
    case 3761:  /* *sse2_maskmovdqu */
    case 1262:  /* *mmx_maskmovq */
    case 1261:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4190:  /* avx2_permv4df_1 */
    case 4188:  /* avx2_permv4di_1 */
    case 3699:  /* sse2_pshuflw_1 */
    case 3693:  /* sse2_pshufd_1 */
    case 2540:  /* *avx512f_vextracti32x4_1 */
    case 2538:  /* *avx512f_vextractf32x4_1 */
    case 1249:  /* mmx_pshufw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 3724:  /* *vec_extractv4si_zext_mem */
    case 3722:  /* *vec_extractv4si_zext */
    case 3713:  /* *vec_extractv8hi_zext */
    case 3712:  /* *vec_extractv8hi_zext */
    case 3711:  /* *vec_extractv16qi_zext */
    case 3710:  /* *vec_extractv16qi_zext */
    case 1256:  /* *vec_extractv2si_zext_mem */
    case 1248:  /* mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 3648:  /* sse4_1_pinsrq */
    case 3647:  /* sse4_1_pinsrd */
    case 3646:  /* sse2_pinsrw */
    case 3645:  /* sse4_1_pinsrb */
    case 2521:  /* *vec_setv4sf_sse4_1 */
    case 1247:  /* *mmx_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3884:  /* sse4_1_packusdw */
    case 3882:  /* avx2_packusdw */
    case 3880:  /* avx512bw_packusdw */
    case 3607:  /* sse2_packuswb */
    case 3605:  /* avx2_packuswb */
    case 3603:  /* avx512bw_packuswb */
    case 3601:  /* sse2_packssdw */
    case 3599:  /* avx2_packssdw */
    case 3597:  /* avx512bw_packssdw */
    case 3595:  /* sse2_packsswb */
    case 3593:  /* avx2_packsswb */
    case 3591:  /* avx512bw_packsswb */
    case 1240:  /* mmx_packuswb */
    case 1239:  /* mmx_packssdw */
    case 1238:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 3129:  /* *sse4_1_mulv2siv2di3 */
    case 3127:  /* *vec_widen_smult_even_v8si */
    case 3125:  /* *vec_widen_smult_even_v16si */
    case 3123:  /* *vec_widen_umult_even_v4si */
    case 3121:  /* *vec_widen_umult_even_v8si */
    case 3119:  /* *vec_widen_umult_even_v16si */
    case 1207:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1258:  /* *mmx_uavgv4hi3 */
    case 1257:  /* *mmx_uavgv8qi3 */
    case 1206:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 3797:  /* ssse3_pmaddubsw */
    case 3796:  /* ssse3_pmaddubsw128 */
    case 3787:  /* avx2_pmaddubsw256 */
    case 3138:  /* *sse2_pmaddwd */
    case 3137:  /* *avx2_pmaddwd */
    case 1205:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 3117:  /* *umulv8hi3_highpart */
    case 3115:  /* *smulv8hi3_highpart */
    case 3113:  /* *umulv16hi3_highpart */
    case 3111:  /* *smulv16hi3_highpart */
    case 3109:  /* *umulv32hi3_highpart */
    case 3107:  /* *smulv32hi3_highpart */
    case 1204:  /* *mmx_umulv4hi3_highpart */
    case 1203:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 1179:  /* mmx_pi2fw */
    case 1178:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1665:  /* sse3_addsubv4sf3 */
    case 1664:  /* avx_addsubv8sf3 */
    case 1663:  /* sse3_addsubv2df3 */
    case 1662:  /* avx_addsubv4df3 */
    case 1173:  /* mmx_addsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 3786:  /* ssse3_phsubdv2si3 */
    case 3785:  /* ssse3_phadddv2si3 */
    case 1669:  /* sse3_hsubv2df3 */
    case 1172:  /* mmx_hsubv2sf3 */
    case 1171:  /* mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1143:  /* *rdpkru */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1140:  /* *bnd64_stx */
    case 1139:  /* *bnd32_stx */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (XVECEXP (pat, 0, 0), 0, 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XVECEXP (pat, 0, 0), 0, 0), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 4;
      break;

    case 1138:  /* *bnd64_ldx */
    case 1137:  /* *bnd32_ldx */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1136:  /* *bnd64_cn */
    case 1135:  /* *bnd64_cu */
    case 1134:  /* *bnd64_cl */
    case 1133:  /* *bnd32_cn */
    case 1132:  /* *bnd32_cu */
    case 1131:  /* *bnd32_cl */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1128:  /* *bnd64_mk */
    case 1127:  /* *bnd32_mk */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1116:  /* xbegin_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1087:  /* *lwp_lwpinsdi3_1 */
    case 1086:  /* *lwp_lwpinssi3_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1077:  /* fldenv */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      break;

    case 3768:  /* sse3_monitor_di */
    case 3767:  /* sse3_monitor_si */
    case 1144:  /* *wrpkru */
    case 1124:  /* monitorx_di */
    case 1123:  /* monitorx_si */
    case 1122:  /* mwaitx */
    case 1085:  /* *lwp_lwpvaldi3_1 */
    case 1084:  /* *lwp_lwpvalsi3_1 */
    case 1073:  /* xsetbv_rex64 */
    case 1071:  /* xrstors64 */
    case 1070:  /* xrstor64 */
    case 1069:  /* xrstors_rex64 */
    case 1068:  /* xrstor_rex64 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 3766:  /* sse3_mwait */
    case 1152:  /* movdir64b_di */
    case 1151:  /* movdir64b_si */
    case 1150:  /* movdiridi */
    case 1149:  /* movdirisi */
    case 1112:  /* wrussdi */
    case 1111:  /* wrusssi */
    case 1110:  /* wrssdi */
    case 1109:  /* wrsssi */
    case 1072:  /* xsetbv */
    case 1067:  /* xrstors */
    case 1066:  /* xrstor */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 1049:  /* rdtscp_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1048:  /* rdtscp */
    case 1047:  /* rdtsc_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1033:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 1028:  /* adjust_stack_and_probedi */
    case 1027:  /* adjust_stack_and_probesi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 1004:  /* *movsicc_noc_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1880:  /* *fma_fmadd_v2df */
    case 1878:  /* *fma_fmadd_v4df */
    case 1874:  /* *fma_fmadd_v8df */
    case 1873:  /* *fma_fmadd_df */
    case 1871:  /* *fma_fmadd_v4sf */
    case 1869:  /* *fma_fmadd_v8sf */
    case 1865:  /* *fma_fmadd_v16sf */
    case 1864:  /* *fma_fmadd_sf */
    case 1863:  /* *fma_fmadd_v4df */
    case 1862:  /* *fma_fmadd_v8sf */
    case 1861:  /* *fma_fmadd_v2df */
    case 1860:  /* *fma_fmadd_v4sf */
    case 1859:  /* *fma_fmadd_df */
    case 1858:  /* *fma_fmadd_sf */
    case 1303:  /* avx512vl_loadv8hi_mask */
    case 1302:  /* avx512vl_loadv16hi_mask */
    case 1301:  /* avx512bw_loadv32hi_mask */
    case 1300:  /* avx512vl_loadv32qi_mask */
    case 1299:  /* avx512vl_loadv16qi_mask */
    case 1298:  /* avx512bw_loadv64qi_mask */
    case 1297:  /* avx512vl_loadv2df_mask */
    case 1296:  /* avx512vl_loadv4df_mask */
    case 1295:  /* avx512f_loadv8df_mask */
    case 1294:  /* avx512vl_loadv4sf_mask */
    case 1293:  /* avx512vl_loadv8sf_mask */
    case 1292:  /* avx512f_loadv16sf_mask */
    case 1291:  /* avx512vl_loadv2di_mask */
    case 1290:  /* avx512vl_loadv4di_mask */
    case 1289:  /* avx512f_loadv8di_mask */
    case 1288:  /* avx512vl_loadv4si_mask */
    case 1287:  /* avx512vl_loadv8si_mask */
    case 1286:  /* avx512f_loadv16si_mask */
    case 1010:  /* *xop_pcmov_df */
    case 1009:  /* *xop_pcmov_sf */
    case 1008:  /* *movsfcc_1_387 */
    case 1007:  /* *movdfcc_1 */
    case 1006:  /* *movxfcc_1 */
    case 1005:  /* *movqicc_noc */
    case 1003:  /* *movdicc_noc */
    case 1002:  /* *movsicc_noc */
    case 1001:  /* *movhicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 994:  /* *strlenqi_1 */
    case 993:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 992:  /* *cmpstrnqi_1 */
    case 991:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 990:  /* *cmpstrnqi_nz_1 */
    case 989:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 988:  /* *rep_stosqi */
    case 987:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 986:  /* *rep_stossi */
    case 985:  /* *rep_stossi */
    case 984:  /* *rep_stosdi_rex64 */
    case 983:  /* *rep_stosdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 982:  /* *strsetqi_1 */
    case 981:  /* *strsetqi_1 */
    case 980:  /* *strsethi_1 */
    case 979:  /* *strsethi_1 */
    case 978:  /* *strsetsi_1 */
    case 977:  /* *strsetsi_1 */
    case 976:  /* *strsetdi_rex_1 */
    case 975:  /* *strsetdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 974:  /* *rep_movqi */
    case 973:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 972:  /* *rep_movsi */
    case 971:  /* *rep_movsi */
    case 970:  /* *rep_movdi_rex64 */
    case 969:  /* *rep_movdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 968:  /* *strmovqi_1 */
    case 967:  /* *strmovqi_1 */
    case 966:  /* *strmovhi_1 */
    case 965:  /* *strmovhi_1 */
    case 964:  /* *strmovsi_1 */
    case 963:  /* *strmovsi_1 */
    case 962:  /* *strmovdi_rex_1 */
    case 961:  /* *strmovdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 945:  /* fistdi2_ceil_with_temp */
    case 944:  /* fistdi2_floor_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 953:  /* fistsi2_ceil_with_temp */
    case 952:  /* fistsi2_floor_with_temp */
    case 951:  /* fisthi2_ceil_with_temp */
    case 950:  /* fisthi2_floor_with_temp */
    case 943:  /* fistdi2_ceil */
    case 942:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 5203:  /* atomic_storedi_fpu */
    case 5198:  /* atomic_loaddi_fpu */
    case 949:  /* fistsi2_ceil */
    case 948:  /* fistsi2_floor */
    case 947:  /* fisthi2_ceil */
    case 946:  /* fisthi2_floor */
    case 935:  /* frndintxf2_mask_pm_i387 */
    case 933:  /* frndintxf2_trunc_i387 */
    case 932:  /* frndintxf2_ceil_i387 */
    case 931:  /* frndintxf2_floor_i387 */
    case 930:  /* frndintdf2_trunc_i387 */
    case 929:  /* frndintdf2_ceil_i387 */
    case 928:  /* frndintdf2_floor_i387 */
    case 927:  /* frndintsf2_trunc_i387 */
    case 926:  /* frndintsf2_ceil_i387 */
    case 925:  /* frndintsf2_floor_i387 */
    case 909:  /* fistdi2_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1037:  /* stack_protect_set_di */
    case 1036:  /* stack_protect_set_si */
    case 915:  /* fistsi2_with_temp */
    case 914:  /* fisthi2_with_temp */
    case 908:  /* fistdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 901:  /* fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 896:  /* fyl2xp1_extenddfxf3_i387 */
    case 895:  /* fyl2xp1_extendsfxf3_i387 */
    case 893:  /* fyl2x_extenddfxf3_i387 */
    case 892:  /* fyl2x_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 890:  /* fpatan_extenddfxf3_i387 */
    case 889:  /* fpatan_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1039:  /* stack_protect_test_di */
    case 1038:  /* stack_protect_test_si */
    case 894:  /* fyl2xp1xf3_i387 */
    case 891:  /* fyl2xxf3_i387 */
    case 888:  /* *fpatanxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 887:  /* fptan_extenddfxf4_i387 */
    case 886:  /* fptan_extendsfxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 885:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 899:  /* fxtract_extenddfxf3_i387 */
    case 898:  /* fxtract_extendsfxf3_i387 */
    case 884:  /* sincos_extenddfxf3_i387 */
    case 883:  /* sincos_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1075:  /* xgetbv_rex64 */
    case 1045:  /* rdpmc_rex64 */
    case 897:  /* fxtractxf3_i387 */
    case 882:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 875:  /* fprem1xf4_i387 */
    case 874:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 865:  /* *fop_xf_6_i387 */
    case 864:  /* *fop_xf_6_i387 */
    case 853:  /* *fop_df_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 863:  /* *fop_xf_5_i387 */
    case 862:  /* *fop_xf_5_i387 */
    case 859:  /* *fop_xf_3_i387 */
    case 858:  /* *fop_xf_3_i387 */
    case 852:  /* *fop_df_5_i387 */
    case 850:  /* *fop_df_3_i387 */
    case 849:  /* *fop_sf_3_i387 */
    case 848:  /* *fop_df_3_i387 */
    case 847:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 861:  /* *fop_xf_4_i387 */
    case 860:  /* *fop_xf_4_i387 */
    case 857:  /* *fop_xf_2_i387 */
    case 856:  /* *fop_xf_2_i387 */
    case 851:  /* *fop_df_4_i387 */
    case 846:  /* *fop_df_2_i387 */
    case 845:  /* *fop_sf_2_i387 */
    case 844:  /* *fop_df_2_i387 */
    case 843:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 837:  /* *tls_dynamic_gnu2_combine_64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 5207:  /* storedi_via_sse */
    case 5206:  /* loaddi_via_sse */
    case 5205:  /* storedi_via_fpu */
    case 5204:  /* loaddi_via_fpu */
    case 4952:  /* avx512f_pd512_256pd */
    case 4951:  /* avx512f_ps512_256ps */
    case 4950:  /* avx512f_si512_256si */
    case 4949:  /* avx512f_pd512_pd */
    case 4948:  /* avx512f_ps512_ps */
    case 4947:  /* avx512f_si512_si */
    case 4938:  /* *conflictv2di */
    case 4936:  /* *conflictv4di */
    case 4934:  /* *conflictv8di */
    case 4932:  /* *conflictv4si */
    case 4930:  /* *conflictv8si */
    case 4928:  /* *conflictv16si */
    case 4559:  /* *avx512f_vcvtph2ps512 */
    case 4557:  /* vcvtph2ps256 */
    case 4555:  /* *vcvtph2ps_load */
    case 4486:  /* avx_pd256_pd */
    case 4485:  /* avx_ps256_ps */
    case 4484:  /* avx_si256_si */
    case 4139:  /* aesimc */
    case 4112:  /* xop_frczv4df2 */
    case 4111:  /* xop_frczv8sf2 */
    case 4110:  /* xop_frczv2df2 */
    case 4109:  /* xop_frczv4sf2 */
    case 4108:  /* xop_frczdf2 */
    case 4107:  /* xop_frczsf2 */
    case 4036:  /* *avx512er_rsqrt28v8df */
    case 4032:  /* *avx512er_rsqrt28v16sf */
    case 4024:  /* *avx512er_rcp28v8df */
    case 4020:  /* *avx512er_rcp28v16sf */
    case 4016:  /* avx512er_exp2v8df */
    case 4012:  /* avx512er_exp2v16sf */
    case 3892:  /* sse4_1_phminposuw */
    case 3877:  /* sse4_1_movntdqa */
    case 3876:  /* avx2_movntdqa */
    case 3875:  /* avx512f_movntdqa */
    case 3856:  /* sse4a_movntdf */
    case 3855:  /* sse4a_movntsf */
    case 3758:  /* sse2_pmovmskb */
    case 3757:  /* avx2_pmovmskb */
    case 3752:  /* sse2_movmskpd */
    case 3751:  /* avx_movmskpd256 */
    case 3750:  /* sse_movmskps */
    case 3749:  /* avx_movmskps256 */
    case 2674:  /* avx512vl_getexpv2df */
    case 2670:  /* avx512vl_getexpv4df */
    case 2666:  /* avx512f_getexpv8df */
    case 2662:  /* avx512vl_getexpv4sf */
    case 2658:  /* avx512vl_getexpv8sf */
    case 2654:  /* avx512f_getexpv16sf */
    case 2460:  /* avx512vl_cvtq2maskv2di */
    case 2459:  /* avx512vl_cvtq2maskv4di */
    case 2458:  /* avx512f_cvtq2maskv8di */
    case 2457:  /* avx512vl_cvtd2maskv4si */
    case 2456:  /* avx512vl_cvtd2maskv8si */
    case 2455:  /* avx512f_cvtd2maskv16si */
    case 2454:  /* avx512vl_cvtw2maskv8hi */
    case 2453:  /* avx512vl_cvtw2maskv16hi */
    case 2452:  /* avx512bw_cvtw2maskv32hi */
    case 2451:  /* avx512vl_cvtb2maskv32qi */
    case 2450:  /* avx512vl_cvtb2maskv16qi */
    case 2449:  /* avx512bw_cvtb2maskv64qi */
    case 2403:  /* ufix_notruncv2dfv2di2 */
    case 2401:  /* ufix_notruncv4dfv4di2 */
    case 2397:  /* ufix_notruncv8dfv8di2 */
    case 2395:  /* fix_notruncv2dfv2di2 */
    case 2393:  /* fix_notruncv4dfv4di2 */
    case 2389:  /* fix_notruncv8dfv8di2 */
    case 2353:  /* ufix_notruncv4dfv4si2 */
    case 2349:  /* ufix_notruncv8dfv8si2 */
    case 2344:  /* avx_cvtpd2dq256 */
    case 2340:  /* avx512f_cvtpd2dq512 */
    case 2279:  /* sse2_cvtsd2siq_2 */
    case 2276:  /* sse2_cvtsd2si_2 */
    case 2253:  /* sse2_cvtpd2pi */
    case 2236:  /* *avx512dq_cvtps2uqqv4di */
    case 2232:  /* *avx512dq_cvtps2uqqv8di */
    case 2228:  /* *avx512dq_cvtps2qqv4di */
    case 2224:  /* *avx512dq_cvtps2qqv8di */
    case 2220:  /* *avx512vl_ufix_notruncv4sfv4si */
    case 2216:  /* *avx512vl_ufix_notruncv8sfv8si */
    case 2212:  /* *avx512f_ufix_notruncv16sfv16si */
    case 2208:  /* avx512f_fix_notruncv16sfv16si */
    case 2206:  /* sse2_fix_notruncv4sfv4si */
    case 2204:  /* avx_fix_notruncv8sfv8si */
    case 2172:  /* sse_cvtss2siq_2 */
    case 2169:  /* sse_cvtss2si_2 */
    case 1575:  /* *rsqrt14v2df */
    case 1573:  /* *rsqrt14v4df */
    case 1571:  /* *rsqrt14v8df */
    case 1569:  /* *rsqrt14v4sf */
    case 1567:  /* *rsqrt14v8sf */
    case 1565:  /* *rsqrt14v16sf */
    case 1564:  /* sse_rsqrtv4sf2 */
    case 1563:  /* avx_rsqrtv8sf2 */
    case 1533:  /* *rcp14v2df */
    case 1531:  /* *rcp14v4df */
    case 1529:  /* *rcp14v8df */
    case 1527:  /* *rcp14v4sf */
    case 1525:  /* *rcp14v8sf */
    case 1523:  /* *rcp14v16sf */
    case 1521:  /* sse_rcpv4sf2 */
    case 1520:  /* avx_rcpv8sf2 */
    case 1354:  /* sse2_movntv2di */
    case 1353:  /* avx_movntv4di */
    case 1352:  /* avx512f_movntv8di */
    case 1351:  /* sse2_movntv2df */
    case 1350:  /* avx_movntv4df */
    case 1349:  /* avx512f_movntv8df */
    case 1348:  /* sse_movntv4sf */
    case 1347:  /* avx_movntv8sf */
    case 1346:  /* avx512f_movntv16sf */
    case 1345:  /* sse2_movntidi */
    case 1344:  /* sse2_movntisi */
    case 1343:  /* sse3_lddqu */
    case 1342:  /* avx_lddqu256 */
    case 1260:  /* mmx_pmovmskb */
    case 1169:  /* mmx_rsqrtv2sf2 */
    case 1166:  /* mmx_rcpv2sf2 */
    case 1158:  /* sse_movntq */
    case 1142:  /* move_size_reloc_di */
    case 1141:  /* move_size_reloc_si */
    case 1074:  /* xgetbv */
    case 1057:  /* xsaves */
    case 1056:  /* xsavec */
    case 1055:  /* xsaveopt */
    case 1054:  /* xsave */
    case 1044:  /* rdpmc */
    case 959:  /* movmsk_df */
    case 958:  /* fxamdf2_i387_with_temp */
    case 957:  /* fxamsf2_i387_with_temp */
    case 956:  /* fxamxf2_i387 */
    case 955:  /* fxamdf2_i387 */
    case 954:  /* fxamsf2_i387 */
    case 913:  /* fistsi2 */
    case 912:  /* fisthi2 */
    case 911:  /* *fistsi2_1 */
    case 910:  /* *fisthi2_1 */
    case 907:  /* *fistdi2_1 */
    case 906:  /* rintdf2_frndint */
    case 905:  /* rintsf2_frndint */
    case 904:  /* rintxf2 */
    case 900:  /* *f2xm1xf2_i387 */
    case 877:  /* *cosxf2_i387 */
    case 876:  /* *sinxf2_i387 */
    case 871:  /* *rsqrtsf2_sse */
    case 867:  /* truncxfdf2_i387_noop_unspec */
    case 866:  /* truncxfsf2_i387_noop_unspec */
    case 840:  /* *rcpsf2_sse */
    case 835:  /* *tls_dynamic_gnu2_lea_64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 834:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 833:  /* *tls_dynamic_gnu2_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 832:  /* *tls_dynamic_gnu2_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 831:  /* *add_tp_x32_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 830:  /* *add_tp_di */
    case 829:  /* *add_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 825:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 824:  /* *tls_local_dynamic_base_64_largepic */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 821:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 820:  /* *tls_global_dynamic_64_largepic */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 819:  /* *tls_global_dynamic_64_di */
    case 818:  /* *tls_global_dynamic_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 817:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 816:  /* *parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 815:  /* paritysi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 814:  /* paritydi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 813:  /* bswaphi_lowpart */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 806:  /* *popcounthi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 801:  /* *tbm_tzmsk_di */
    case 800:  /* *tbm_tzmsk_si */
    case 799:  /* *tbm_t1mskc_di */
    case 798:  /* *tbm_t1mskc_si */
    case 797:  /* *tbm_blsic_di */
    case 796:  /* *tbm_blsic_si */
    case 789:  /* *tbm_blcic_di */
    case 788:  /* *tbm_blcic_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 787:  /* *tbm_blci_di */
    case 786:  /* *tbm_blci_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 783:  /* tbm_bextri_di */
    case 782:  /* tbm_bextri_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 5202:  /* atomic_storedi_1 */
    case 5201:  /* atomic_storesi_1 */
    case 5200:  /* atomic_storehi_1 */
    case 5199:  /* atomic_storeqi_1 */
    case 5192:  /* avx512vl_vpshufbitqmbv16qi */
    case 5190:  /* avx512vl_vpshufbitqmbv32qi */
    case 5188:  /* avx512vl_vpshufbitqmbv64qi */
    case 5184:  /* vaesenclast_v64qi */
    case 5183:  /* vaesenclast_v16qi */
    case 5182:  /* vaesenclast_v32qi */
    case 5181:  /* vaesenc_v64qi */
    case 5180:  /* vaesenc_v16qi */
    case 5179:  /* vaesenc_v32qi */
    case 5178:  /* vaesdeclast_v64qi */
    case 5177:  /* vaesdeclast_v16qi */
    case 5176:  /* vaesdeclast_v32qi */
    case 5175:  /* vaesdec_v64qi */
    case 5174:  /* vaesdec_v16qi */
    case 5173:  /* vaesdec_v32qi */
    case 5045:  /* vgf2p8mulb_v16qi */
    case 5043:  /* vgf2p8mulb_v32qi */
    case 5041:  /* vgf2p8mulb_v64qi */
    case 4975:  /* vpmultishiftqbv32qi */
    case 4973:  /* vpmultishiftqbv16qi */
    case 4971:  /* vpmultishiftqbv64qi */
    case 4945:  /* sha256msg2 */
    case 4944:  /* sha256msg1 */
    case 4942:  /* sha1nexte */
    case 4941:  /* sha1msg2 */
    case 4940:  /* sha1msg1 */
    case 4898:  /* avx512vl_getmantv2df */
    case 4894:  /* avx512vl_getmantv4df */
    case 4890:  /* avx512f_getmantv8df */
    case 4886:  /* avx512vl_getmantv4sf */
    case 4882:  /* avx512vl_getmantv8sf */
    case 4878:  /* avx512f_getmantv16sf */
    case 4874:  /* avx512dq_fpclassv2df */
    case 4872:  /* avx512dq_fpclassv4df */
    case 4870:  /* avx512dq_fpclassv8df */
    case 4868:  /* avx512dq_fpclassv4sf */
    case 4866:  /* avx512dq_fpclassv8sf */
    case 4864:  /* avx512dq_fpclassv16sf */
    case 4568:  /* *avx512f_vcvtps2ph512 */
    case 4566:  /* vcvtps2ph256 */
    case 4565:  /* *vcvtps2ph_store */
    case 4362:  /* avx_vpermilvarv2df3 */
    case 4360:  /* avx_vpermilvarv4df3 */
    case 4358:  /* avx512f_vpermilvarv8df3 */
    case 4356:  /* avx_vpermilvarv4sf3 */
    case 4354:  /* avx_vpermilvarv8sf3 */
    case 4352:  /* avx512f_vpermilvarv16sf3 */
    case 4186:  /* avx512bw_permvarv32hi */
    case 4184:  /* avx512vl_permvarv16hi */
    case 4182:  /* avx512vl_permvarv8hi */
    case 4180:  /* avx512vl_permvarv32qi */
    case 4178:  /* avx512vl_permvarv16qi */
    case 4176:  /* avx512bw_permvarv64qi */
    case 4174:  /* avx2_permvarv4df */
    case 4172:  /* avx2_permvarv4di */
    case 4170:  /* avx512f_permvarv8df */
    case 4168:  /* avx512f_permvarv8di */
    case 4166:  /* avx512f_permvarv16sf */
    case 4164:  /* avx512f_permvarv16si */
    case 4162:  /* avx2_permvarv8sf */
    case 4160:  /* avx2_permvarv8si */
    case 4140:  /* aeskeygenassist */
    case 4138:  /* aesdeclast */
    case 4137:  /* aesdec */
    case 4136:  /* aesenclast */
    case 4135:  /* aesenc */
    case 3985:  /* sse4_1_roundpd */
    case 3984:  /* avx_roundpd256 */
    case 3983:  /* sse4_1_roundps */
    case 3982:  /* avx_roundps256 */
    case 3862:  /* sse4a_insertq */
    case 3860:  /* sse4a_extrq */
    case 3820:  /* ssse3_psignv2si3 */
    case 3819:  /* ssse3_psignv4hi3 */
    case 3818:  /* ssse3_psignv8qi3 */
    case 3817:  /* ssse3_psignv4si3 */
    case 3816:  /* avx2_psignv8si3 */
    case 3815:  /* ssse3_psignv8hi3 */
    case 3814:  /* avx2_psignv16hi3 */
    case 3813:  /* ssse3_psignv16qi3 */
    case 3812:  /* avx2_psignv32qi3 */
    case 3811:  /* ssse3_pshufbv8qi3 */
    case 3809:  /* ssse3_pshufbv16qi3 */
    case 3807:  /* avx2_pshufbv32qi3 */
    case 3805:  /* avx512bw_pshufbv64qi3 */
    case 3792:  /* avx512bw_pmaddubsw512v32hi */
    case 3790:  /* avx512bw_pmaddubsw512v16hi */
    case 3788:  /* avx512bw_pmaddubsw512v8hi */
    case 3748:  /* sse2_psadbw */
    case 3747:  /* avx2_psadbw */
    case 3746:  /* avx512f_psadbw */
    case 3701:  /* *avx512bw_pshufhwv32hi */
    case 3695:  /* *avx512bw_pshuflwv32hi */
    case 3589:  /* avx512vl_testnmv2di3 */
    case 3587:  /* avx512vl_testnmv4di3 */
    case 3585:  /* avx512f_testnmv8di3 */
    case 3583:  /* avx512vl_testnmv4si3 */
    case 3581:  /* avx512vl_testnmv8si3 */
    case 3579:  /* avx512f_testnmv16si3 */
    case 3577:  /* avx512vl_testnmv8hi3 */
    case 3575:  /* avx512vl_testnmv16hi3 */
    case 3573:  /* avx512bw_testnmv32hi3 */
    case 3571:  /* avx512vl_testnmv32qi3 */
    case 3569:  /* avx512vl_testnmv16qi3 */
    case 3567:  /* avx512bw_testnmv64qi3 */
    case 3565:  /* avx512vl_testmv2di3 */
    case 3563:  /* avx512vl_testmv4di3 */
    case 3561:  /* avx512f_testmv8di3 */
    case 3559:  /* avx512vl_testmv4si3 */
    case 3557:  /* avx512vl_testmv8si3 */
    case 3555:  /* avx512f_testmv16si3 */
    case 3553:  /* avx512vl_testmv8hi3 */
    case 3551:  /* avx512vl_testmv16hi3 */
    case 3549:  /* avx512bw_testmv32hi3 */
    case 3547:  /* avx512vl_testmv32qi3 */
    case 3545:  /* avx512vl_testmv16qi3 */
    case 3543:  /* avx512bw_testmv64qi3 */
    case 3466:  /* avx512vl_gtv8hi3 */
    case 3464:  /* avx512vl_gtv16hi3 */
    case 3462:  /* avx512bw_gtv32hi3 */
    case 3460:  /* avx512vl_gtv32qi3 */
    case 3458:  /* avx512vl_gtv16qi3 */
    case 3456:  /* avx512bw_gtv64qi3 */
    case 3454:  /* avx512vl_gtv2di3 */
    case 3452:  /* avx512vl_gtv4di3 */
    case 3450:  /* avx512f_gtv8di3 */
    case 3448:  /* avx512vl_gtv4si3 */
    case 3446:  /* avx512vl_gtv8si3 */
    case 3444:  /* avx512f_gtv16si3 */
    case 3433:  /* avx512vl_eqv2di3_1 */
    case 3431:  /* avx512vl_eqv4di3_1 */
    case 3429:  /* avx512f_eqv8di3_1 */
    case 3427:  /* avx512vl_eqv4si3_1 */
    case 3425:  /* avx512vl_eqv8si3_1 */
    case 3423:  /* avx512f_eqv16si3_1 */
    case 3421:  /* avx512vl_eqv8hi3_1 */
    case 3419:  /* avx512vl_eqv16hi3_1 */
    case 3417:  /* avx512bw_eqv32hi3_1 */
    case 3415:  /* avx512vl_eqv32qi3_1 */
    case 3413:  /* avx512vl_eqv16qi3_1 */
    case 3411:  /* avx512bw_eqv64qi3_1 */
    case 3135:  /* avx512bw_pmaddwd512v8hi */
    case 3133:  /* avx512bw_pmaddwd512v16hi */
    case 3131:  /* avx512bw_pmaddwd512v32hi */
    case 2766:  /* avx512vl_rndscalev2df */
    case 2762:  /* avx512vl_rndscalev4df */
    case 2758:  /* avx512f_rndscalev8df */
    case 2754:  /* avx512vl_rndscalev4sf */
    case 2750:  /* avx512vl_rndscalev8sf */
    case 2746:  /* avx512f_rndscalev16sf */
    case 2632:  /* avx512vl_scalefv2df */
    case 2628:  /* avx512vl_scalefv4df */
    case 2624:  /* avx512f_scalefv8df */
    case 2620:  /* avx512vl_scalefv4sf */
    case 2616:  /* avx512vl_scalefv8sf */
    case 2612:  /* avx512f_scalefv16sf */
    case 1686:  /* *reducepv2df */
    case 1684:  /* *reducepv4df */
    case 1682:  /* *reducepv8df */
    case 1680:  /* *reducepv4sf */
    case 1678:  /* *reducepv8sf */
    case 1676:  /* *reducepv16sf */
    case 1644:  /* ieee_minv2df3 */
    case 1642:  /* ieee_maxv2df3 */
    case 1640:  /* ieee_minv4df3 */
    case 1638:  /* ieee_maxv4df3 */
    case 1634:  /* ieee_minv8df3 */
    case 1630:  /* ieee_maxv8df3 */
    case 1628:  /* ieee_minv4sf3 */
    case 1626:  /* ieee_maxv4sf3 */
    case 1624:  /* ieee_minv8sf3 */
    case 1622:  /* ieee_maxv8sf3 */
    case 1618:  /* ieee_minv16sf3 */
    case 1614:  /* ieee_maxv16sf3 */
    case 1259:  /* mmx_psadbw */
    case 1170:  /* mmx_rsqit1v2sf3 */
    case 1168:  /* mmx_rcpit2v2sf3 */
    case 1167:  /* mmx_rcpit1v2sf3 */
    case 1165:  /* mmx_ieee_minv2sf3 */
    case 1164:  /* mmx_ieee_maxv2sf3 */
    case 1065:  /* xsaves64 */
    case 1064:  /* xsavec64 */
    case 1063:  /* xsaveopt64 */
    case 1062:  /* xsave64 */
    case 1061:  /* xsaves_rex64 */
    case 1060:  /* xsavec_rex64 */
    case 1059:  /* xsaveopt_rex64 */
    case 1058:  /* xsave_rex64 */
    case 1043:  /* sse4_2_crc32di */
    case 1042:  /* sse4_2_crc32si */
    case 1041:  /* sse4_2_crc32hi */
    case 1040:  /* sse4_2_crc32qi */
    case 1018:  /* *ieee_smindf3 */
    case 1017:  /* *ieee_smaxdf3 */
    case 1016:  /* *ieee_sminsf3 */
    case 1015:  /* *ieee_smaxsf3 */
    case 903:  /* sse4_1_rounddf2 */
    case 902:  /* sse4_1_roundsf2 */
    case 781:  /* bmi2_pext_di3 */
    case 780:  /* bmi2_pext_si3 */
    case 779:  /* bmi2_pdep_di3 */
    case 778:  /* bmi2_pdep_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 777:  /* *bmi2_bzhi_di3_1_ccz */
    case 776:  /* *bmi2_bzhi_si3_1_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      break;

    case 775:  /* *bmi2_bzhi_di3_1 */
    case 774:  /* *bmi2_bzhi_si3_1 */
    case 773:  /* *bmi2_bzhi_di3 */
    case 772:  /* *bmi2_bzhi_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 771:  /* *bmi_blsr_di_ccz */
    case 770:  /* *bmi_blsr_si_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 769:  /* *bmi_blsr_di_cmp */
    case 768:  /* *bmi_blsr_si_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 795:  /* *tbm_blsfill_di */
    case 794:  /* *tbm_blsfill_si */
    case 793:  /* *tbm_blcs_di */
    case 792:  /* *tbm_blcs_si */
    case 791:  /* *tbm_blcmsk_di */
    case 790:  /* *tbm_blcmsk_si */
    case 785:  /* *tbm_blcfill_di */
    case 784:  /* *tbm_blcfill_si */
    case 767:  /* *bmi_blsr_di */
    case 766:  /* *bmi_blsr_si */
    case 765:  /* *bmi_blsmsk_di */
    case 764:  /* *bmi_blsmsk_si */
    case 763:  /* *bmi_blsi_di */
    case 762:  /* *bmi_blsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 761:  /* *bmi_bextr_di_ccz */
    case 760:  /* *bmi_bextr_si_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 1030:  /* probe_stack_rangedi */
    case 1029:  /* probe_stack_rangesi */
    case 836:  /* *tls_dynamic_gnu2_call_64 */
    case 759:  /* bmi_bextr_di */
    case 758:  /* bmi_bextr_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 755:  /* *lzcnt_di_falsedep */
    case 754:  /* *tzcnt_di_falsedep */
    case 753:  /* *lzcnt_si_falsedep */
    case 752:  /* *tzcnt_si_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1026:  /* probe_stack_di */
    case 1025:  /* probe_stack_si */
    case 1024:  /* allocate_stack_worker_probe_di */
    case 1023:  /* allocate_stack_worker_probe_si */
    case 941:  /* *fistdi2_ceil_1 */
    case 940:  /* *fistdi2_floor_1 */
    case 939:  /* *fistsi2_ceil_1 */
    case 938:  /* *fistsi2_floor_1 */
    case 937:  /* *fisthi2_ceil_1 */
    case 936:  /* *fisthi2_floor_1 */
    case 934:  /* frndintxf2_mask_pm */
    case 924:  /* frndintxf2_trunc */
    case 923:  /* frndintxf2_ceil */
    case 922:  /* frndintxf2_floor */
    case 921:  /* frndintdf2_trunc */
    case 920:  /* frndintdf2_ceil */
    case 919:  /* frndintdf2_floor */
    case 918:  /* frndintsf2_trunc */
    case 917:  /* frndintsf2_ceil */
    case 916:  /* frndintsf2_floor */
    case 757:  /* lzcnt_hi */
    case 756:  /* tzcnt_hi */
    case 751:  /* lzcnt_di */
    case 750:  /* tzcnt_di */
    case 749:  /* lzcnt_si */
    case 748:  /* tzcnt_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 743:  /* *bsrhi */
    case 742:  /* bsr */
    case 741:  /* bsr_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 805:  /* *popcountdi2_falsedep */
    case 804:  /* *popcountsi2_falsedep */
    case 747:  /* *clzdi2_lzcnt_falsedep */
    case 746:  /* *clzsi2_lzcnt_falsedep */
    case 740:  /* *ctzdi2_falsedep */
    case 739:  /* *ctzsi2_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 734:  /* *tzcntdi_1_falsedep */
    case 733:  /* *tzcntsi_1_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 736:  /* *bsfdi_1 */
    case 735:  /* *bsfsi_1 */
    case 732:  /* *tzcntdi_1 */
    case 731:  /* *tzcntsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 3858:  /* sse4a_vmmovntv2df */
    case 3857:  /* sse4a_vmmovntv4sf */
    case 2277:  /* sse2_cvtsd2siq */
    case 2274:  /* sse2_cvtsd2si */
    case 2268:  /* avx512f_vcvtsd2usiq */
    case 2266:  /* avx512f_vcvtsd2usi */
    case 2260:  /* avx512f_vcvtss2usiq */
    case 2258:  /* avx512f_vcvtss2usi */
    case 2238:  /* *avx512dq_cvtps2uqqv2di */
    case 2230:  /* *avx512dq_cvtps2qqv2di */
    case 2170:  /* sse_cvtss2siq */
    case 2167:  /* sse_cvtss2si */
    case 881:  /* *cos_extenddfxf2_i387 */
    case 880:  /* *sin_extenddfxf2_i387 */
    case 879:  /* *cos_extendsfxf2_i387 */
    case 878:  /* *sin_extendsfxf2_i387 */
    case 725:  /* set_got_offset_rex64 */
    case 724:  /* set_rip_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 722:  /* *set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 1101:  /* rdseeddi_1 */
    case 1100:  /* rdseedsi_1 */
    case 1099:  /* rdseedhi_1 */
    case 1098:  /* rdranddi_1 */
    case 1097:  /* rdrandsi_1 */
    case 1096:  /* rdrandhi_1 */
    case 1076:  /* fnstenv */
    case 721:  /* *set_got */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 717:  /* simple_return_indirect_internal */
    case 716:  /* simple_return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 3765:  /* sse2_clflush */
    case 3763:  /* sse_ldmxcsr */
    case 1126:  /* clzero_di */
    case 1125:  /* clzero_si */
    case 1121:  /* clflushopt */
    case 1120:  /* clwb */
    case 1118:  /* xabort */
    case 1114:  /* clrssbsy */
    case 1108:  /* rstorssp */
    case 1106:  /* incsspdi */
    case 1105:  /* incsspsi */
    case 1095:  /* wrgsbasedi */
    case 1094:  /* wrfsbasedi */
    case 1093:  /* wrgsbasesi */
    case 1092:  /* wrfsbasesi */
    case 1081:  /* *lwp_llwpcbdi1 */
    case 1080:  /* *lwp_llwpcbsi1 */
    case 1053:  /* fxrstor64 */
    case 1052:  /* fxrstor */
    case 729:  /* split_stack_return */
    case 720:  /* pad */
    case 719:  /* nops */
    case 712:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 5196:  /* mfence_sse2 */
    case 5195:  /* *sse_sfence */
    case 5194:  /* *sse2_lfence */
    case 1102:  /* *pause */
    case 711:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 4143:  /* avx_vzeroupper */
    case 1148:  /* wbnoinvd */
    case 1147:  /* wbinvd */
    case 1119:  /* xtest_1 */
    case 1117:  /* xend */
    case 1115:  /* nop_endbr */
    case 1113:  /* setssbsy */
    case 1107:  /* saveprevssp */
    case 1079:  /* fnclex */
    case 1032:  /* ud2 */
    case 1031:  /* trap */
    case 960:  /* cld */
    case 728:  /* leave_rex64 */
    case 727:  /* leave */
    case 726:  /* eh_return_internal */
    case 718:  /* nop */
    case 715:  /* simple_return_internal_long */
    case 714:  /* interrupt_return */
    case 713:  /* simple_return_internal */
    case 710:  /* blockage */
      break;

    case 709:  /* *sibcall_value_pop_memory */
    case 708:  /* *sibcall_value_pop */
    case 707:  /* *call_value_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 702:  /* *sibcall_value_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 701:  /* *call_value_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4467:  /* vec_set_hi_v32qi */
    case 4465:  /* vec_set_hi_v16hi */
    case 4462:  /* vec_set_hi_v8sf */
    case 4460:  /* vec_set_hi_v8si */
    case 4454:  /* vec_set_hi_v4df */
    case 4452:  /* vec_set_hi_v4di */
    case 3671:  /* vec_set_hi_v8di */
    case 3669:  /* vec_set_hi_v8df */
    case 3663:  /* vec_set_hi_v16si */
    case 3661:  /* vec_set_hi_v16sf */
    case 3482:  /* *andnotv2di3 */
    case 3481:  /* *andnotv4di3 */
    case 3480:  /* *andnotv4si3 */
    case 3479:  /* *andnotv8si3 */
    case 3478:  /* *andnotv8hi3 */
    case 3477:  /* *andnotv16hi3 */
    case 3476:  /* *andnotv32hi3 */
    case 3475:  /* *andnotv16qi3 */
    case 3474:  /* *andnotv32qi3 */
    case 3473:  /* *andnotv64qi3 */
    case 3472:  /* *andnotv8di3 */
    case 3471:  /* *andnotv16si3 */
    case 2977:  /* *avx512vl_us_truncatev2div2si2 */
    case 2976:  /* *avx512vl_truncatev2div2si2 */
    case 2975:  /* *avx512vl_ss_truncatev2div2si2 */
    case 2938:  /* *avx512vl_us_truncatev4siv4hi2 */
    case 2937:  /* *avx512vl_truncatev4siv4hi2 */
    case 2936:  /* *avx512vl_ss_truncatev4siv4hi2 */
    case 2935:  /* *avx512vl_us_truncatev2div2hi2 */
    case 2934:  /* *avx512vl_truncatev2div2hi2 */
    case 2933:  /* *avx512vl_ss_truncatev2div2hi2 */
    case 2932:  /* *avx512vl_us_truncatev4div4hi2 */
    case 2931:  /* *avx512vl_truncatev4div4hi2 */
    case 2930:  /* *avx512vl_ss_truncatev4div4hi2 */
    case 2869:  /* *avx512vl_us_truncatev8hiv8qi2 */
    case 2868:  /* *avx512vl_truncatev8hiv8qi2 */
    case 2867:  /* *avx512vl_ss_truncatev8hiv8qi2 */
    case 2866:  /* *avx512vl_us_truncatev4siv4qi2 */
    case 2865:  /* *avx512vl_truncatev4siv4qi2 */
    case 2864:  /* *avx512vl_ss_truncatev4siv4qi2 */
    case 2863:  /* *avx512vl_us_truncatev8siv8qi2 */
    case 2862:  /* *avx512vl_truncatev8siv8qi2 */
    case 2861:  /* *avx512vl_ss_truncatev8siv8qi2 */
    case 2860:  /* *avx512vl_us_truncatev2div2qi2 */
    case 2859:  /* *avx512vl_truncatev2div2qi2 */
    case 2858:  /* *avx512vl_ss_truncatev2div2qi2 */
    case 2857:  /* *avx512vl_us_truncatev4div4qi2 */
    case 2856:  /* *avx512vl_truncatev4div4qi2 */
    case 2855:  /* *avx512vl_ss_truncatev4div4qi2 */
    case 2799:  /* sse2_loadhpd */
    case 2507:  /* sse_loadhps */
    case 2439:  /* *sse2_cvtpd2ps */
    case 1848:  /* *andnottf3 */
    case 1847:  /* *andnotdf3 */
    case 1846:  /* *andnotsf3 */
    case 1808:  /* avx512f_andnotv8df3 */
    case 1806:  /* avx512f_andnotv16sf3 */
    case 1804:  /* sse2_andnotv2df3 */
    case 1802:  /* avx_andnotv4df3 */
    case 1800:  /* sse_andnotv4sf3 */
    case 1798:  /* avx_andnotv8sf3 */
    case 1559:  /* sse2_vmsqrtv2df2 */
    case 1555:  /* sse_vmsqrtv4sf2 */
    case 1228:  /* mmx_andnotv2si3 */
    case 1227:  /* mmx_andnotv4hi3 */
    case 1226:  /* mmx_andnotv8qi3 */
    case 704:  /* *sibcall_value */
    case 703:  /* *sibcall_value */
    case 700:  /* *call_value */
    case 699:  /* *call_value */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 698:  /* *sibcall_pop_memory */
    case 697:  /* *sibcall_pop */
    case 696:  /* *call_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 691:  /* *sibcall_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 690:  /* *call_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 687:  /* *tablejump_1 */
    case 686:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 683:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 682:  /* *jcc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1789:  /* avx512f_maskcmpv2df3 */
    case 1788:  /* avx512f_maskcmpv4df3 */
    case 1787:  /* avx512f_maskcmpv8df3 */
    case 1786:  /* avx512f_maskcmpv4sf3 */
    case 1785:  /* avx512f_maskcmpv8sf3 */
    case 1784:  /* avx512f_maskcmpv16sf3 */
    case 1705:  /* sse2_maskcmpv2df3 */
    case 1704:  /* avx_maskcmpv4df3 */
    case 1703:  /* sse_maskcmpv4sf3 */
    case 1702:  /* avx_maskcmpv8sf3 */
    case 1701:  /* *sse2_maskcmpv2df3_comm */
    case 1700:  /* *avx_maskcmpv4df3_comm */
    case 1699:  /* *sse_maskcmpv4sf3_comm */
    case 1698:  /* *avx_maskcmpv8sf3_comm */
    case 855:  /* *fop_xf_1_i387 */
    case 854:  /* *fop_xf_comm_i387 */
    case 842:  /* *fop_df_1 */
    case 841:  /* *fop_sf_1 */
    case 839:  /* *fop_df_comm */
    case 838:  /* *fop_sf_comm */
    case 681:  /* setcc_df_sse */
    case 680:  /* setcc_sf_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 674:  /* *jcc_btdi_mask */
    case 673:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 672:  /* *jcc_btdi_1 */
    case 671:  /* *jcc_btsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 670:  /* *jcc_btdi */
    case 669:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 668:  /* *btdi */
    case 667:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 666:  /* *btcq_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2);
      recog_data.dup_num[1] = 1;
      break;

    case 665:  /* *btrq_imm */
    case 664:  /* *btsq_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      break;

    case 663:  /* *btrdi_mask_1 */
    case 662:  /* *btrsi_mask_1 */
    case 657:  /* *btcdi_mask_1 */
    case 656:  /* *btsdi_mask_1 */
    case 655:  /* *btcsi_mask_1 */
    case 654:  /* *btssi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 661:  /* *btrdi_mask */
    case 660:  /* *btrsi_mask */
    case 653:  /* *btcdi_mask */
    case 652:  /* *btsdi_mask */
    case 651:  /* *btcsi_mask */
    case 650:  /* *btssi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 659:  /* *btrdi */
    case 658:  /* *btrsi */
    case 649:  /* *btcdi */
    case 648:  /* *btsdi */
    case 647:  /* *btcsi */
    case 646:  /* *btssi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 630:  /* ix86_rotrti3_doubleword */
    case 629:  /* ix86_rotrdi3_doubleword */
    case 628:  /* ix86_rotlti3_doubleword */
    case 627:  /* ix86_rotldi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 3643:  /* vec_interleave_lowv4si */
    case 3641:  /* *avx512f_interleave_lowv16si */
    case 3639:  /* avx2_interleave_lowv8si */
    case 3637:  /* vec_interleave_highv4si */
    case 3635:  /* *avx512f_interleave_highv16si */
    case 3633:  /* avx2_interleave_highv8si */
    case 3631:  /* vec_interleave_lowv8hi */
    case 3629:  /* avx2_interleave_lowv16hi */
    case 3627:  /* *avx512bw_interleave_lowv32hi */
    case 3625:  /* vec_interleave_highv8hi */
    case 3623:  /* avx2_interleave_highv16hi */
    case 3621:  /* avx512bw_interleave_highv32hi */
    case 3619:  /* vec_interleave_lowv16qi */
    case 3617:  /* avx2_interleave_lowv32qi */
    case 3615:  /* avx512bw_interleave_lowv64qi */
    case 3613:  /* vec_interleave_highv16qi */
    case 3611:  /* avx2_interleave_highv32qi */
    case 3609:  /* avx512bw_interleave_highv64qi */
    case 2791:  /* vec_interleave_lowv2di */
    case 2789:  /* *avx512f_interleave_lowv8di */
    case 2787:  /* avx2_interleave_lowv4di */
    case 2785:  /* vec_interleave_highv2di */
    case 2783:  /* *avx512f_interleave_highv8di */
    case 2781:  /* avx2_interleave_highv4di */
    case 2603:  /* *vec_interleave_lowv2df */
    case 2600:  /* *avx_unpcklpd256 */
    case 2598:  /* *avx512f_unpcklpd512 */
    case 2597:  /* *vec_interleave_highv2df */
    case 2594:  /* avx_unpckhpd256 */
    case 2592:  /* *avx512f_unpckhpd512 */
    case 2488:  /* vec_interleave_lowv4sf */
    case 2485:  /* avx_unpcklps256 */
    case 2483:  /* *avx512f_unpcklps512 */
    case 2481:  /* vec_interleave_highv4sf */
    case 2479:  /* avx_unpckhps256 */
    case 2477:  /* *avx512f_unpckhps512 */
    case 2476:  /* sse_movlhps */
    case 2475:  /* sse_movhlps */
    case 1246:  /* mmx_punpckldq */
    case 1245:  /* mmx_punpckhdq */
    case 1244:  /* mmx_punpcklwd */
    case 1243:  /* mmx_punpckhwd */
    case 1242:  /* mmx_punpcklbw */
    case 1241:  /* mmx_punpckhbw */
    case 637:  /* *bmi2_rorxsi3_1_zext */
    case 592:  /* *bmi2_ashrsi3_1_zext */
    case 591:  /* *bmi2_lshrsi3_1_zext */
    case 552:  /* *bmi2_ashlsi3_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 4552:  /* avx_vec_concatv8df */
    case 4551:  /* avx_vec_concatv16sf */
    case 4550:  /* avx_vec_concatv8di */
    case 4549:  /* avx_vec_concatv16si */
    case 4548:  /* avx_vec_concatv32hi */
    case 4547:  /* avx_vec_concatv64qi */
    case 4546:  /* avx_vec_concatv4df */
    case 4545:  /* avx_vec_concatv8sf */
    case 4544:  /* avx_vec_concatv4di */
    case 4543:  /* avx_vec_concatv8si */
    case 4542:  /* avx_vec_concatv16hi */
    case 4541:  /* avx_vec_concatv32qi */
    case 4539:  /* avx512bw_lshrvv32hi */
    case 4537:  /* avx512bw_ashlvv32hi */
    case 4535:  /* avx512vl_lshrvv16hi */
    case 4533:  /* avx512vl_ashlvv16hi */
    case 4531:  /* avx512vl_lshrvv8hi */
    case 4529:  /* avx512vl_ashlvv8hi */
    case 4527:  /* avx2_lshrvv2di */
    case 4525:  /* avx2_ashlvv2di */
    case 4523:  /* avx2_lshrvv4di */
    case 4521:  /* avx2_ashlvv4di */
    case 4519:  /* avx512f_lshrvv8di */
    case 4517:  /* avx512f_ashlvv8di */
    case 4515:  /* avx2_lshrvv4si */
    case 4513:  /* avx2_ashlvv4si */
    case 4511:  /* avx2_lshrvv8si */
    case 4509:  /* avx2_ashlvv8si */
    case 4507:  /* avx512f_lshrvv16si */
    case 4505:  /* avx512f_ashlvv16si */
    case 4503:  /* avx512bw_ashrvv32hi */
    case 4501:  /* avx512vl_ashrvv16hi */
    case 4499:  /* avx512vl_ashrvv8hi */
    case 4497:  /* avx512f_ashrvv8di */
    case 4495:  /* avx2_ashrvv4di */
    case 4493:  /* avx2_ashrvv2di */
    case 4491:  /* avx512f_ashrvv16si */
    case 4489:  /* avx2_ashrvv8si */
    case 4487:  /* avx2_ashrvv4si */
    case 4094:  /* xop_rotrv2di3 */
    case 4093:  /* xop_rotrv4si3 */
    case 4092:  /* xop_rotrv8hi3 */
    case 4091:  /* xop_rotrv16qi3 */
    case 4090:  /* xop_rotlv2di3 */
    case 4089:  /* xop_rotlv4si3 */
    case 4088:  /* xop_rotlv8hi3 */
    case 4087:  /* xop_rotlv16qi3 */
    case 3731:  /* vec_concatv2di */
    case 3730:  /* *vec_concatv4si */
    case 3729:  /* *vec_concatv2si */
    case 3728:  /* *vec_concatv2si_sse4_1 */
    case 3542:  /* *xorv8hi3 */
    case 3541:  /* *iorv8hi3 */
    case 3540:  /* *andv8hi3 */
    case 3539:  /* *xorv16hi3 */
    case 3538:  /* *iorv16hi3 */
    case 3537:  /* *andv16hi3 */
    case 3536:  /* *xorv32hi3 */
    case 3535:  /* *iorv32hi3 */
    case 3534:  /* *andv32hi3 */
    case 3533:  /* *xorv16qi3 */
    case 3532:  /* *iorv16qi3 */
    case 3531:  /* *andv16qi3 */
    case 3530:  /* *xorv32qi3 */
    case 3529:  /* *iorv32qi3 */
    case 3528:  /* *andv32qi3 */
    case 3527:  /* *xorv64qi3 */
    case 3526:  /* *iorv64qi3 */
    case 3525:  /* *andv64qi3 */
    case 3523:  /* *xorv2di3 */
    case 3521:  /* *iorv2di3 */
    case 3519:  /* *andv2di3 */
    case 3517:  /* *xorv4di3 */
    case 3515:  /* *iorv4di3 */
    case 3513:  /* *andv4di3 */
    case 3511:  /* *xorv8di3 */
    case 3509:  /* *iorv8di3 */
    case 3507:  /* *andv8di3 */
    case 3505:  /* *xorv4si3 */
    case 3503:  /* *iorv4si3 */
    case 3501:  /* *andv4si3 */
    case 3499:  /* *xorv8si3 */
    case 3497:  /* *iorv8si3 */
    case 3495:  /* *andv8si3 */
    case 3493:  /* *xorv16si3 */
    case 3491:  /* *iorv16si3 */
    case 3489:  /* *andv16si3 */
    case 3470:  /* sse2_gtv4si3 */
    case 3469:  /* sse2_gtv8hi3 */
    case 3468:  /* sse2_gtv16qi3 */
    case 3443:  /* avx2_gtv4di3 */
    case 3442:  /* avx2_gtv8si3 */
    case 3441:  /* avx2_gtv16hi3 */
    case 3440:  /* avx2_gtv32qi3 */
    case 3439:  /* sse4_2_gtv2di3 */
    case 3438:  /* *sse2_eqv4si3 */
    case 3437:  /* *sse2_eqv8hi3 */
    case 3436:  /* *sse2_eqv16qi3 */
    case 3435:  /* *sse4_1_eqv2di3 */
    case 3410:  /* *avx2_eqv4di3 */
    case 3409:  /* *avx2_eqv8si3 */
    case 3408:  /* *avx2_eqv16hi3 */
    case 3407:  /* *avx2_eqv32qi3 */
    case 3406:  /* *uminv16qi3 */
    case 3405:  /* *umaxv16qi3 */
    case 3403:  /* *sse4_1_uminv4si3 */
    case 3401:  /* *sse4_1_umaxv4si3 */
    case 3399:  /* *sse4_1_uminv8hi3 */
    case 3397:  /* *sse4_1_umaxv8hi3 */
    case 3396:  /* *sminv8hi3 */
    case 3395:  /* *smaxv8hi3 */
    case 3393:  /* *sse4_1_sminv4si3 */
    case 3391:  /* *sse4_1_smaxv4si3 */
    case 3389:  /* *sse4_1_sminv16qi3 */
    case 3387:  /* *sse4_1_smaxv16qi3 */
    case 3385:  /* *uminv8hi3 */
    case 3383:  /* *umaxv8hi3 */
    case 3381:  /* *sminv8hi3 */
    case 3379:  /* *smaxv8hi3 */
    case 3377:  /* *uminv16hi3 */
    case 3375:  /* *umaxv16hi3 */
    case 3373:  /* *sminv16hi3 */
    case 3371:  /* *smaxv16hi3 */
    case 3369:  /* *uminv32hi3 */
    case 3367:  /* *umaxv32hi3 */
    case 3365:  /* *sminv32hi3 */
    case 3363:  /* *smaxv32hi3 */
    case 3361:  /* *uminv32qi3 */
    case 3359:  /* *umaxv32qi3 */
    case 3357:  /* *sminv32qi3 */
    case 3355:  /* *smaxv32qi3 */
    case 3353:  /* *uminv16qi3 */
    case 3351:  /* *umaxv16qi3 */
    case 3349:  /* *sminv16qi3 */
    case 3347:  /* *smaxv16qi3 */
    case 3345:  /* *uminv64qi3 */
    case 3343:  /* *umaxv64qi3 */
    case 3341:  /* *sminv64qi3 */
    case 3339:  /* *smaxv64qi3 */
    case 3337:  /* *avx512f_uminv2di3 */
    case 3335:  /* *avx512f_umaxv2di3 */
    case 3333:  /* *avx512f_sminv2di3 */
    case 3331:  /* *avx512f_smaxv2di3 */
    case 3329:  /* *avx512f_uminv4di3 */
    case 3327:  /* *avx512f_umaxv4di3 */
    case 3325:  /* *avx512f_sminv4di3 */
    case 3323:  /* *avx512f_smaxv4di3 */
    case 3321:  /* *avx512f_uminv8di3 */
    case 3319:  /* *avx512f_umaxv8di3 */
    case 3317:  /* *avx512f_sminv8di3 */
    case 3315:  /* *avx512f_smaxv8di3 */
    case 3313:  /* *avx512f_uminv4si3 */
    case 3311:  /* *avx512f_umaxv4si3 */
    case 3309:  /* *avx512f_sminv4si3 */
    case 3307:  /* *avx512f_smaxv4si3 */
    case 3305:  /* *avx512f_uminv8si3 */
    case 3303:  /* *avx512f_umaxv8si3 */
    case 3301:  /* *avx512f_sminv8si3 */
    case 3299:  /* *avx512f_smaxv8si3 */
    case 3297:  /* *avx512f_uminv16si3 */
    case 3295:  /* *avx512f_umaxv16si3 */
    case 3293:  /* *avx512f_sminv16si3 */
    case 3291:  /* *avx512f_smaxv16si3 */
    case 3290:  /* *avx2_uminv8si3 */
    case 3289:  /* *avx2_umaxv8si3 */
    case 3288:  /* *avx2_sminv8si3 */
    case 3287:  /* *avx2_smaxv8si3 */
    case 3286:  /* *avx2_uminv16hi3 */
    case 3285:  /* *avx2_umaxv16hi3 */
    case 3284:  /* *avx2_sminv16hi3 */
    case 3283:  /* *avx2_smaxv16hi3 */
    case 3282:  /* *avx2_uminv32qi3 */
    case 3281:  /* *avx2_umaxv32qi3 */
    case 3280:  /* *avx2_sminv32qi3 */
    case 3279:  /* *avx2_smaxv32qi3 */
    case 3277:  /* avx512vl_rorv2di */
    case 3275:  /* avx512vl_rolv2di */
    case 3273:  /* avx512vl_rorv4di */
    case 3271:  /* avx512vl_rolv4di */
    case 3269:  /* avx512f_rorv8di */
    case 3267:  /* avx512f_rolv8di */
    case 3265:  /* avx512vl_rorv4si */
    case 3263:  /* avx512vl_rolv4si */
    case 3261:  /* avx512vl_rorv8si */
    case 3259:  /* avx512vl_rolv8si */
    case 3257:  /* avx512f_rorv16si */
    case 3255:  /* avx512f_rolv16si */
    case 3253:  /* avx512vl_rorvv2di */
    case 3251:  /* avx512vl_rolvv2di */
    case 3249:  /* avx512vl_rorvv4di */
    case 3247:  /* avx512vl_rolvv4di */
    case 3245:  /* avx512f_rorvv8di */
    case 3243:  /* avx512f_rolvv8di */
    case 3241:  /* avx512vl_rorvv4si */
    case 3239:  /* avx512vl_rolvv4si */
    case 3237:  /* avx512vl_rorvv8si */
    case 3235:  /* avx512vl_rolvv8si */
    case 3233:  /* avx512f_rorvv16si */
    case 3231:  /* avx512f_rolvv16si */
    case 3230:  /* sse2_lshrv1ti3 */
    case 3229:  /* sse2_ashlv1ti3 */
    case 3228:  /* avx2_lshrv2ti3 */
    case 3227:  /* avx2_ashlv2ti3 */
    case 3226:  /* avx512bw_lshrv1ti3 */
    case 3225:  /* avx512bw_ashlv1ti3 */
    case 3224:  /* avx512bw_lshrv2ti3 */
    case 3223:  /* avx512bw_ashlv2ti3 */
    case 3222:  /* avx512bw_lshrv4ti3 */
    case 3221:  /* avx512bw_ashlv4ti3 */
    case 3219:  /* lshrv8di3 */
    case 3217:  /* ashlv8di3 */
    case 3215:  /* lshrv16si3 */
    case 3213:  /* ashlv16si3 */
    case 3211:  /* lshrv32hi3 */
    case 3209:  /* ashlv32hi3 */
    case 3208:  /* lshrv2di3 */
    case 3207:  /* ashlv2di3 */
    case 3206:  /* lshrv4di3 */
    case 3205:  /* ashlv4di3 */
    case 3204:  /* lshrv4si3 */
    case 3203:  /* ashlv4si3 */
    case 3202:  /* lshrv8si3 */
    case 3201:  /* ashlv8si3 */
    case 3200:  /* lshrv8hi3 */
    case 3199:  /* ashlv8hi3 */
    case 3198:  /* lshrv16hi3 */
    case 3197:  /* ashlv16hi3 */
    case 3195:  /* *lshrv2di3 */
    case 3193:  /* *ashlv2di3 */
    case 3191:  /* *lshrv4di3 */
    case 3189:  /* *ashlv4di3 */
    case 3187:  /* *lshrv4si3 */
    case 3185:  /* *ashlv4si3 */
    case 3183:  /* *lshrv8si3 */
    case 3181:  /* *ashlv8si3 */
    case 3179:  /* *lshrv8hi3 */
    case 3177:  /* *ashlv8hi3 */
    case 3175:  /* *lshrv16hi3 */
    case 3173:  /* *ashlv16hi3 */
    case 3171:  /* ashrv8di3 */
    case 3169:  /* ashrv16si3 */
    case 3167:  /* ashrv4di3 */
    case 3165:  /* ashrv32hi3 */
    case 3164:  /* ashrv4si3 */
    case 3163:  /* ashrv8si3 */
    case 3162:  /* ashrv8hi3 */
    case 3161:  /* ashrv16hi3 */
    case 3159:  /* *ashrv2di3 */
    case 3157:  /* *ashrv4si3 */
    case 3155:  /* *ashrv8si3 */
    case 3153:  /* *ashrv8hi3 */
    case 3151:  /* *ashrv16hi3 */
    case 3149:  /* *sse4_1_mulv4si3 */
    case 3147:  /* *avx2_mulv8si3 */
    case 3145:  /* *avx512f_mulv16si3 */
    case 3143:  /* avx512dq_mulv2di3 */
    case 3141:  /* avx512dq_mulv4di3 */
    case 3139:  /* avx512dq_mulv8di3 */
    case 3105:  /* *mulv8hi3 */
    case 3103:  /* *mulv16hi3 */
    case 3101:  /* *mulv32hi3 */
    case 3099:  /* *sse2_ussubv8hi3 */
    case 3097:  /* *sse2_sssubv8hi3 */
    case 3095:  /* *sse2_usaddv8hi3 */
    case 3093:  /* *sse2_ssaddv8hi3 */
    case 3091:  /* *avx2_ussubv16hi3 */
    case 3089:  /* *avx2_sssubv16hi3 */
    case 3087:  /* *avx2_usaddv16hi3 */
    case 3085:  /* *avx2_ssaddv16hi3 */
    case 3083:  /* *avx512bw_ussubv32hi3 */
    case 3081:  /* *avx512bw_sssubv32hi3 */
    case 3079:  /* *avx512bw_usaddv32hi3 */
    case 3077:  /* *avx512bw_ssaddv32hi3 */
    case 3075:  /* *sse2_ussubv16qi3 */
    case 3073:  /* *sse2_sssubv16qi3 */
    case 3071:  /* *sse2_usaddv16qi3 */
    case 3069:  /* *sse2_ssaddv16qi3 */
    case 3067:  /* *avx2_ussubv32qi3 */
    case 3065:  /* *avx2_sssubv32qi3 */
    case 3063:  /* *avx2_usaddv32qi3 */
    case 3061:  /* *avx2_ssaddv32qi3 */
    case 3059:  /* *avx512bw_ussubv64qi3 */
    case 3057:  /* *avx512bw_sssubv64qi3 */
    case 3055:  /* *avx512bw_usaddv64qi3 */
    case 3053:  /* *avx512bw_ssaddv64qi3 */
    case 3028:  /* *subv2di3 */
    case 3027:  /* *addv2di3 */
    case 3026:  /* *subv4di3 */
    case 3025:  /* *addv4di3 */
    case 3024:  /* *subv8di3 */
    case 3023:  /* *addv8di3 */
    case 3022:  /* *subv4si3 */
    case 3021:  /* *addv4si3 */
    case 3020:  /* *subv8si3 */
    case 3019:  /* *addv8si3 */
    case 3018:  /* *subv16si3 */
    case 3017:  /* *addv16si3 */
    case 3016:  /* *subv8hi3 */
    case 3015:  /* *addv8hi3 */
    case 3014:  /* *subv16hi3 */
    case 3013:  /* *addv16hi3 */
    case 3012:  /* *subv32hi3 */
    case 3011:  /* *addv32hi3 */
    case 3010:  /* *subv16qi3 */
    case 3009:  /* *addv16qi3 */
    case 3008:  /* *subv32qi3 */
    case 3007:  /* *addv32qi3 */
    case 3006:  /* *subv64qi3 */
    case 3005:  /* *addv64qi3 */
    case 2804:  /* vec_concatv2df */
    case 2518:  /* *vec_concatv4sf */
    case 2517:  /* *vec_concatv2sf_sse */
    case 2516:  /* *vec_concatv2sf_sse4_1 */
    case 1857:  /* *xortf3 */
    case 1856:  /* *iortf3 */
    case 1855:  /* *andtf3 */
    case 1854:  /* *xordf3 */
    case 1853:  /* *iordf3 */
    case 1852:  /* *anddf3 */
    case 1851:  /* *xorsf3 */
    case 1850:  /* *iorsf3 */
    case 1849:  /* *andsf3 */
    case 1844:  /* *xorv8df3 */
    case 1842:  /* *iorv8df3 */
    case 1840:  /* *andv8df3 */
    case 1838:  /* *xorv16sf3 */
    case 1836:  /* *iorv16sf3 */
    case 1834:  /* *andv16sf3 */
    case 1832:  /* *xorv2df3 */
    case 1830:  /* *iorv2df3 */
    case 1828:  /* *andv2df3 */
    case 1826:  /* *xorv4df3 */
    case 1824:  /* *iorv4df3 */
    case 1822:  /* *andv4df3 */
    case 1820:  /* *xorv4sf3 */
    case 1818:  /* *iorv4sf3 */
    case 1816:  /* *andv4sf3 */
    case 1814:  /* *xorv8sf3 */
    case 1812:  /* *iorv8sf3 */
    case 1810:  /* *andv8sf3 */
    case 1612:  /* *sminv2df3 */
    case 1610:  /* *smaxv2df3 */
    case 1608:  /* *sminv4df3 */
    case 1606:  /* *smaxv4df3 */
    case 1602:  /* *sminv8df3 */
    case 1598:  /* *smaxv8df3 */
    case 1596:  /* *sminv4sf3 */
    case 1594:  /* *smaxv4sf3 */
    case 1592:  /* *sminv8sf3 */
    case 1590:  /* *smaxv8sf3 */
    case 1586:  /* *sminv16sf3 */
    case 1582:  /* *smaxv16sf3 */
    case 1518:  /* sse2_divv2df3 */
    case 1516:  /* avx_divv4df3 */
    case 1512:  /* avx512f_divv8df3 */
    case 1510:  /* sse_divv4sf3 */
    case 1508:  /* avx_divv8sf3 */
    case 1504:  /* avx512f_divv16sf3 */
    case 1486:  /* *mulv2df3 */
    case 1484:  /* *mulv4df3 */
    case 1480:  /* *mulv8df3 */
    case 1478:  /* *mulv4sf3 */
    case 1476:  /* *mulv8sf3 */
    case 1472:  /* *mulv16sf3 */
    case 1452:  /* *subv2df3 */
    case 1448:  /* *addv2df3 */
    case 1444:  /* *subv4df3 */
    case 1440:  /* *addv4df3 */
    case 1436:  /* *subv8df3 */
    case 1432:  /* *addv8df3 */
    case 1428:  /* *subv4sf3 */
    case 1424:  /* *addv4sf3 */
    case 1420:  /* *subv8sf3 */
    case 1416:  /* *addv8sf3 */
    case 1412:  /* *subv16sf3 */
    case 1408:  /* *addv16sf3 */
    case 1253:  /* *mmx_concatv2si */
    case 1237:  /* *mmx_xorv2si3 */
    case 1236:  /* *mmx_iorv2si3 */
    case 1235:  /* *mmx_andv2si3 */
    case 1234:  /* *mmx_xorv4hi3 */
    case 1233:  /* *mmx_iorv4hi3 */
    case 1232:  /* *mmx_andv4hi3 */
    case 1231:  /* *mmx_xorv8qi3 */
    case 1230:  /* *mmx_iorv8qi3 */
    case 1229:  /* *mmx_andv8qi3 */
    case 1225:  /* mmx_gtv2si3 */
    case 1224:  /* mmx_gtv4hi3 */
    case 1223:  /* mmx_gtv8qi3 */
    case 1222:  /* *mmx_eqv2si3 */
    case 1221:  /* *mmx_eqv4hi3 */
    case 1220:  /* *mmx_eqv8qi3 */
    case 1219:  /* mmx_lshrv1di3 */
    case 1218:  /* mmx_ashlv1di3 */
    case 1217:  /* mmx_lshrv2si3 */
    case 1216:  /* mmx_ashlv2si3 */
    case 1215:  /* mmx_lshrv4hi3 */
    case 1214:  /* mmx_ashlv4hi3 */
    case 1213:  /* mmx_ashrv2si3 */
    case 1212:  /* mmx_ashrv4hi3 */
    case 1211:  /* *mmx_uminv8qi3 */
    case 1210:  /* *mmx_umaxv8qi3 */
    case 1209:  /* *mmx_sminv4hi3 */
    case 1208:  /* *mmx_smaxv4hi3 */
    case 1202:  /* *mmx_mulv4hi3 */
    case 1201:  /* *mmx_ussubv4hi3 */
    case 1200:  /* *mmx_sssubv4hi3 */
    case 1199:  /* *mmx_usaddv4hi3 */
    case 1198:  /* *mmx_ssaddv4hi3 */
    case 1197:  /* *mmx_ussubv8qi3 */
    case 1196:  /* *mmx_sssubv8qi3 */
    case 1195:  /* *mmx_usaddv8qi3 */
    case 1194:  /* *mmx_ssaddv8qi3 */
    case 1193:  /* *mmx_subv1di3 */
    case 1192:  /* *mmx_addv1di3 */
    case 1191:  /* *mmx_subv2si3 */
    case 1190:  /* *mmx_addv2si3 */
    case 1189:  /* *mmx_subv4hi3 */
    case 1188:  /* *mmx_addv4hi3 */
    case 1187:  /* *mmx_subv8qi3 */
    case 1186:  /* *mmx_addv8qi3 */
    case 1183:  /* *mmx_concatv2sf */
    case 1176:  /* mmx_gev2sf3 */
    case 1175:  /* mmx_gtv2sf3 */
    case 1174:  /* *mmx_eqv2sf3 */
    case 1163:  /* *mmx_sminv2sf3 */
    case 1162:  /* *mmx_smaxv2sf3 */
    case 1161:  /* *mmx_mulv2sf3 */
    case 1160:  /* *mmx_subv2sf3 */
    case 1159:  /* *mmx_addv2sf3 */
    case 1014:  /* smindf3 */
    case 1013:  /* smaxdf3 */
    case 1012:  /* sminsf3 */
    case 1011:  /* smaxsf3 */
    case 632:  /* *bmi2_rorxdi3_1 */
    case 631:  /* *bmi2_rorxsi3_1 */
    case 586:  /* *bmi2_ashrdi3_1 */
    case 585:  /* *bmi2_lshrdi3_1 */
    case 584:  /* *bmi2_ashrsi3_1 */
    case 583:  /* *bmi2_lshrsi3_1 */
    case 549:  /* *bmi2_ashldi3_1 */
    case 548:  /* *bmi2_ashlsi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 626:  /* *rotrdi3_mask_1 */
    case 625:  /* *rotldi3_mask_1 */
    case 624:  /* *rotrsi3_mask_1 */
    case 623:  /* *rotlsi3_mask_1 */
    case 573:  /* *ashrdi3_mask_1 */
    case 572:  /* *lshrdi3_mask_1 */
    case 571:  /* *ashrsi3_mask_1 */
    case 570:  /* *lshrsi3_mask_1 */
    case 547:  /* *ashldi3_mask_1 */
    case 546:  /* *ashlsi3_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 622:  /* *rotrdi3_mask */
    case 621:  /* *rotldi3_mask */
    case 620:  /* *rotrsi3_mask */
    case 619:  /* *rotlsi3_mask */
    case 569:  /* *ashrdi3_mask */
    case 568:  /* *lshrdi3_mask */
    case 567:  /* *ashrsi3_mask */
    case 566:  /* *lshrsi3_mask */
    case 545:  /* *ashldi3_mask */
    case 544:  /* *ashlsi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 579:  /* x86_shrd */
    case 578:  /* x86_64_shrd */
    case 543:  /* x86_shld */
    case 542:  /* x86_64_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 539:  /* *one_cmplsi2_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 528:  /* copysigntf3_var */
    case 527:  /* copysigndf3_var */
    case 526:  /* copysignsf3_var */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 5187:  /* vpclmulqdq_v2di */
    case 5186:  /* vpclmulqdq_v4di */
    case 5185:  /* vpclmulqdq_v8di */
    case 5166:  /* vpdpwssds_v4si */
    case 5165:  /* vpdpwssds_v8si */
    case 5164:  /* vpdpwssds_v16si */
    case 5157:  /* vpdpwssd_v4si */
    case 5156:  /* vpdpwssd_v8si */
    case 5155:  /* vpdpwssd_v16si */
    case 5148:  /* vpdpbusds_v4si */
    case 5147:  /* vpdpbusds_v8si */
    case 5146:  /* vpdpbusds_v16si */
    case 5139:  /* vpdpbusd_v4si */
    case 5138:  /* vpdpbusd_v8si */
    case 5137:  /* vpdpbusd_v16si */
    case 5118:  /* vpshldv_v2di */
    case 5117:  /* vpshldv_v4si */
    case 5116:  /* vpshldv_v8hi */
    case 5115:  /* vpshldv_v4di */
    case 5114:  /* vpshldv_v8si */
    case 5113:  /* vpshldv_v16hi */
    case 5112:  /* vpshldv_v8di */
    case 5111:  /* vpshldv_v16si */
    case 5110:  /* vpshldv_v32hi */
    case 5091:  /* vpshrdv_v2di */
    case 5090:  /* vpshrdv_v4si */
    case 5089:  /* vpshrdv_v8hi */
    case 5088:  /* vpshrdv_v4di */
    case 5087:  /* vpshrdv_v8si */
    case 5086:  /* vpshrdv_v16hi */
    case 5085:  /* vpshrdv_v8di */
    case 5084:  /* vpshrdv_v16si */
    case 5083:  /* vpshrdv_v32hi */
    case 5081:  /* vpshld_v2di */
    case 5079:  /* vpshld_v4si */
    case 5077:  /* vpshld_v8hi */
    case 5075:  /* vpshld_v4di */
    case 5073:  /* vpshld_v8si */
    case 5071:  /* vpshld_v16hi */
    case 5069:  /* vpshld_v8di */
    case 5067:  /* vpshld_v16si */
    case 5065:  /* vpshld_v32hi */
    case 5063:  /* vpshrd_v2di */
    case 5061:  /* vpshrd_v4si */
    case 5059:  /* vpshrd_v8hi */
    case 5057:  /* vpshrd_v4di */
    case 5055:  /* vpshrd_v8si */
    case 5053:  /* vpshrd_v16hi */
    case 5051:  /* vpshrd_v8di */
    case 5049:  /* vpshrd_v16si */
    case 5047:  /* vpshrd_v32hi */
    case 5039:  /* vgf2p8affineqb_v16qi */
    case 5037:  /* vgf2p8affineqb_v32qi */
    case 5035:  /* vgf2p8affineqb_v64qi */
    case 5033:  /* vgf2p8affineinvqb_v16qi */
    case 5031:  /* vgf2p8affineinvqb_v32qi */
    case 5029:  /* vgf2p8affineinvqb_v64qi */
    case 4994:  /* avx5124vnniw_vp4dpwssds */
    case 4991:  /* avx5124vnniw_vp4dpwssd */
    case 4988:  /* avx5124fmaddps_4fnmaddss */
    case 4985:  /* avx5124fmaddps_4fnmaddps */
    case 4982:  /* avx5124fmaddps_4fmaddss */
    case 4979:  /* avx5124fmaddps_4fmaddps */
    case 4963:  /* vpamdd52huqv2di */
    case 4961:  /* vpamdd52luqv2di */
    case 4959:  /* vpamdd52huqv4di */
    case 4957:  /* vpamdd52luqv4di */
    case 4955:  /* vpamdd52huqv8di */
    case 4953:  /* vpamdd52luqv8di */
    case 4946:  /* sha256rnds2 */
    case 4943:  /* sha1rnds4 */
    case 4914:  /* *avx512bw_dbpsadbwv32hi */
    case 4912:  /* *avx512bw_dbpsadbwv16hi */
    case 4910:  /* *avx512bw_dbpsadbwv8hi */
    case 4854:  /* avx512dq_rangepv2df */
    case 4852:  /* avx512dq_rangepv4df */
    case 4848:  /* avx512dq_rangepv8df */
    case 4846:  /* avx512dq_rangepv4sf */
    case 4844:  /* avx512dq_rangepv8sf */
    case 4840:  /* avx512dq_rangepv16sf */
    case 4839:  /* expandv8hi_mask */
    case 4838:  /* expandv16hi_mask */
    case 4837:  /* expandv32hi_mask */
    case 4836:  /* expandv32qi_mask */
    case 4835:  /* expandv16qi_mask */
    case 4834:  /* expandv64qi_mask */
    case 4833:  /* avx512vl_expandv2df_mask */
    case 4832:  /* avx512vl_expandv2di_mask */
    case 4831:  /* avx512vl_expandv4sf_mask */
    case 4830:  /* avx512vl_expandv4si_mask */
    case 4829:  /* avx512vl_expandv4df_mask */
    case 4828:  /* avx512vl_expandv4di_mask */
    case 4827:  /* avx512vl_expandv8sf_mask */
    case 4826:  /* avx512vl_expandv8si_mask */
    case 4825:  /* avx512f_expandv8df_mask */
    case 4824:  /* avx512f_expandv8di_mask */
    case 4823:  /* avx512f_expandv16sf_mask */
    case 4822:  /* avx512f_expandv16si_mask */
    case 4803:  /* compressv8hi_mask */
    case 4802:  /* compressv16hi_mask */
    case 4801:  /* compressv32hi_mask */
    case 4800:  /* compressv32qi_mask */
    case 4799:  /* compressv16qi_mask */
    case 4798:  /* compressv64qi_mask */
    case 4797:  /* avx512vl_compressv2df_mask */
    case 4796:  /* avx512vl_compressv2di_mask */
    case 4795:  /* avx512vl_compressv4sf_mask */
    case 4794:  /* avx512vl_compressv4si_mask */
    case 4793:  /* avx512vl_compressv4df_mask */
    case 4792:  /* avx512vl_compressv4di_mask */
    case 4791:  /* avx512vl_compressv8sf_mask */
    case 4790:  /* avx512vl_compressv8si_mask */
    case 4789:  /* avx512f_compressv8df_mask */
    case 4788:  /* avx512f_compressv8di_mask */
    case 4787:  /* avx512f_compressv16sf_mask */
    case 4786:  /* avx512f_compressv16si_mask */
    case 4438:  /* *avx_vperm2f128v4df_full */
    case 4437:  /* *avx_vperm2f128v8sf_full */
    case 4436:  /* *avx_vperm2f128v8si_full */
    case 4416:  /* avx512vl_vpermt2varv16qi3 */
    case 4414:  /* avx512vl_vpermt2varv32qi3 */
    case 4412:  /* avx512bw_vpermt2varv64qi3 */
    case 4410:  /* avx512vl_vpermt2varv8hi3 */
    case 4408:  /* avx512vl_vpermt2varv16hi3 */
    case 4406:  /* avx512bw_vpermt2varv32hi3 */
    case 4404:  /* avx512vl_vpermt2varv2df3 */
    case 4402:  /* avx512vl_vpermt2varv2di3 */
    case 4400:  /* avx512vl_vpermt2varv4sf3 */
    case 4398:  /* avx512vl_vpermt2varv4si3 */
    case 4396:  /* avx512vl_vpermt2varv4df3 */
    case 4394:  /* avx512vl_vpermt2varv4di3 */
    case 4392:  /* avx512vl_vpermt2varv8sf3 */
    case 4390:  /* avx512vl_vpermt2varv8si3 */
    case 4388:  /* avx512f_vpermt2varv8df3 */
    case 4386:  /* avx512f_vpermt2varv8di3 */
    case 4384:  /* avx512f_vpermt2varv16sf3 */
    case 4382:  /* avx512f_vpermt2varv16si3 */
    case 4196:  /* avx2_permv2ti */
    case 4141:  /* pclmulqdq */
    case 4130:  /* xop_pcom_tfv2di3 */
    case 4129:  /* xop_pcom_tfv4si3 */
    case 4128:  /* xop_pcom_tfv8hi3 */
    case 4127:  /* xop_pcom_tfv16qi3 */
    case 4083:  /* xop_pperm */
    case 3887:  /* sse4_1_pblendvb */
    case 3886:  /* avx2_pblendvb */
    case 3879:  /* sse4_1_mpsadbw */
    case 3878:  /* avx2_mpsadbw */
    case 3874:  /* sse4_1_dppd */
    case 3873:  /* avx_dppd256 */
    case 3872:  /* sse4_1_dpps */
    case 3871:  /* avx_dpps256 */
    case 3870:  /* sse4_1_blendvpd */
    case 3869:  /* avx_blendvpd256 */
    case 3868:  /* sse4_1_blendvps */
    case 3867:  /* avx_blendvps256 */
    case 3859:  /* sse4a_extrqi */
    case 3827:  /* ssse3_palignrdi */
    case 3826:  /* ssse3_palignrti */
    case 3825:  /* avx2_palignrv2ti */
    case 3824:  /* avx512bw_palignrv4ti */
    case 2696:  /* *avx512vl_alignv2di */
    case 2694:  /* *avx512vl_alignv4di */
    case 2692:  /* *avx512f_alignv8di */
    case 2690:  /* *avx512vl_alignv4si */
    case 2688:  /* *avx512vl_alignv8si */
    case 2686:  /* *avx512f_alignv16si */
    case 2064:  /* *fma_fmaddsub_v2df */
    case 2062:  /* *fma_fmaddsub_v4df */
    case 2058:  /* *fma_fmaddsub_v8df */
    case 2057:  /* *fma_fmaddsub_df */
    case 2055:  /* *fma_fmaddsub_v4sf */
    case 2053:  /* *fma_fmaddsub_v8sf */
    case 2049:  /* *fma_fmaddsub_v16sf */
    case 2048:  /* *fma_fmaddsub_sf */
    case 2047:  /* *fma_fmaddsub_v2df */
    case 2046:  /* *fma_fmaddsub_v4df */
    case 2045:  /* *fma_fmaddsub_v4sf */
    case 2044:  /* *fma_fmaddsub_v8sf */
    case 1774:  /* avx512vl_ucmpv2di3 */
    case 1772:  /* avx512vl_ucmpv4di3 */
    case 1770:  /* avx512f_ucmpv8di3 */
    case 1768:  /* avx512vl_ucmpv4si3 */
    case 1766:  /* avx512vl_ucmpv8si3 */
    case 1764:  /* avx512f_ucmpv16si3 */
    case 1762:  /* avx512vl_ucmpv8hi3 */
    case 1760:  /* avx512vl_ucmpv16hi3 */
    case 1758:  /* avx512bw_ucmpv32hi3 */
    case 1756:  /* avx512vl_ucmpv32qi3 */
    case 1754:  /* avx512vl_ucmpv16qi3 */
    case 1752:  /* avx512bw_ucmpv64qi3 */
    case 1750:  /* avx512vl_cmpv8hi3 */
    case 1748:  /* avx512vl_cmpv16hi3 */
    case 1746:  /* avx512bw_cmpv32hi3 */
    case 1744:  /* avx512vl_cmpv32qi3 */
    case 1742:  /* avx512vl_cmpv16qi3 */
    case 1740:  /* avx512bw_cmpv64qi3 */
    case 1738:  /* avx512vl_cmpv2df3 */
    case 1736:  /* avx512vl_cmpv4df3 */
    case 1732:  /* avx512f_cmpv8df3 */
    case 1730:  /* avx512vl_cmpv4sf3 */
    case 1728:  /* avx512vl_cmpv8sf3 */
    case 1724:  /* avx512f_cmpv16sf3 */
    case 1722:  /* avx512vl_cmpv2di3 */
    case 1720:  /* avx512vl_cmpv4di3 */
    case 1716:  /* avx512f_cmpv8di3 */
    case 1714:  /* avx512vl_cmpv4si3 */
    case 1712:  /* avx512vl_cmpv8si3 */
    case 1708:  /* avx512f_cmpv16si3 */
    case 1695:  /* avx_cmpv2df3 */
    case 1694:  /* avx_cmpv4df3 */
    case 1693:  /* avx_cmpv4sf3 */
    case 1692:  /* avx_cmpv8sf3 */
    case 525:  /* copysigntf3_const */
    case 524:  /* copysigndf3_const */
    case 523:  /* copysignsf3_const */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1407:  /* *absnegv2df2 */
    case 1406:  /* *absnegv4df2 */
    case 1405:  /* *absnegv8df2 */
    case 1404:  /* *absnegv4sf2 */
    case 1403:  /* *absnegv8sf2 */
    case 1402:  /* *absnegv16sf2 */
    case 510:  /* *absnegtf2_sse */
    case 509:  /* *absnegxf2_i387 */
    case 508:  /* *absnegdf2 */
    case 507:  /* *absnegsf2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 506:  /* *negvdi3 */
    case 505:  /* *negvsi3 */
    case 504:  /* *negvhi3 */
    case 503:  /* *negvqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 502:  /* *negsi2_cmpz_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 538:  /* *one_cmpldi2_2 */
    case 537:  /* *one_cmplsi2_2 */
    case 536:  /* *one_cmplhi2_2 */
    case 535:  /* *one_cmplqi2_2 */
    case 501:  /* *negdi2_cmpz */
    case 500:  /* *negsi2_cmpz */
    case 499:  /* *neghi2_cmpz */
    case 498:  /* *negqi2_cmpz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 497:  /* *negsi2_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 475:  /* *xorsi_2_zext_imm */
    case 474:  /* *iorsi_2_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 445:  /* *andn_di_ccno */
    case 444:  /* *andn_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1370:  /* kandndi */
    case 1369:  /* kandnsi */
    case 1368:  /* kandnhi */
    case 1367:  /* kandnqi */
    case 823:  /* *tls_local_dynamic_base_64_di */
    case 822:  /* *tls_local_dynamic_base_64_si */
    case 706:  /* *sibcall_value_memory */
    case 705:  /* *sibcall_value_memory */
    case 459:  /* *xorsi_1_zext_imm */
    case 458:  /* *iorsi_1_zext_imm */
    case 443:  /* *andnhi_1 */
    case 442:  /* *andnqi_1 */
    case 441:  /* *andndi_1 */
    case 440:  /* *andnsi_1 */
    case 439:  /* *andndi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 490:  /* *xorqi_ext_1_cc */
    case 437:  /* *andqi_ext_1_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 477:  /* *xorqi_2_slp */
    case 476:  /* *iorqi_2_slp */
    case 435:  /* *andqi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 420:  /* *testqi_ext_3 */
    case 419:  /* *testqi_ext_3 */
    case 418:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 417:  /* *testqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      break;

    case 416:  /* *testqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 410:  /* udivmodhiqi3 */
    case 391:  /* divmodhiqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 409:  /* *udivmodsi4_noext_zext_2 */
    case 390:  /* *divmodsi4_noext_zext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 408:  /* *udivmodsi4_noext_zext_1 */
    case 389:  /* *divmodsi4_noext_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 407:  /* *udivmoddi4_noext */
    case 406:  /* *udivmodsi4_noext */
    case 405:  /* *udivmodhi4_noext */
    case 388:  /* *divmoddi4_noext */
    case 387:  /* *divmodsi4_noext */
    case 386:  /* *divmodhi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 404:  /* *udivmodsi4_pow2_zext_2 */
    case 400:  /* *udivmodsi4_zext_2 */
    case 395:  /* udivmodsi4_zext_2 */
    case 385:  /* *divmodsi4_zext_2 */
    case 380:  /* divmodsi4_zext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 403:  /* *udivmodsi4_pow2_zext_1 */
    case 399:  /* *udivmodsi4_zext_1 */
    case 394:  /* udivmodsi4_zext_1 */
    case 384:  /* *divmodsi4_zext_1 */
    case 379:  /* divmodsi4_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 402:  /* *udivmoddi4_pow2 */
    case 401:  /* *udivmodsi4_pow2 */
    case 398:  /* *udivmoddi4 */
    case 397:  /* *udivmodsi4 */
    case 396:  /* *udivmodhi4 */
    case 393:  /* udivmoddi4_1 */
    case 392:  /* udivmodsi4_1 */
    case 383:  /* *divmoddi4 */
    case 382:  /* *divmodsi4 */
    case 381:  /* *divmodhi4 */
    case 378:  /* divmoddi4_1 */
    case 377:  /* divmodsi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 374:  /* *umulsi3_highpart_zext */
    case 373:  /* *smulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 376:  /* *umulsi3_highpart_1 */
    case 375:  /* *smulsi3_highpart_1 */
    case 372:  /* *umuldi3_highpart_1 */
    case 371:  /* *smuldi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 370:  /* *umulqihi3_1 */
    case 369:  /* *mulqihi3_1 */
    case 368:  /* *mulditi3_1 */
    case 367:  /* *mulsidi3_1 */
    case 366:  /* *umulditi3_1 */
    case 365:  /* *umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 364:  /* *bmi2_umulditi3_1 */
    case 363:  /* *bmi2_umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 360:  /* *umulvdi4 */
    case 359:  /* *umulvsi4 */
    case 358:  /* *umulvhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 346:  /* *addsi3_zext_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 345:  /* *adddi3_cc_overflow_2 */
    case 344:  /* *addsi3_cc_overflow_2 */
    case 343:  /* *addhi3_cc_overflow_2 */
    case 342:  /* *addqi3_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 341:  /* *adddi3_cconly_overflow_2 */
    case 340:  /* *addsi3_cconly_overflow_2 */
    case 339:  /* *addhi3_cconly_overflow_2 */
    case 338:  /* *addqi3_cconly_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 337:  /* *addsi3_zext_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 336:  /* *adddi3_cc_overflow_1 */
    case 335:  /* *addsi3_cc_overflow_1 */
    case 334:  /* *addhi3_cc_overflow_1 */
    case 333:  /* *addqi3_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 332:  /* *adddi3_cconly_overflow_1 */
    case 331:  /* *addsi3_cconly_overflow_1 */
    case 330:  /* *addhi3_cconly_overflow_1 */
    case 329:  /* *addqi3_cconly_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 328:  /* subborrowdi */
    case 327:  /* subborrowsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 326:  /* subdi3_carry_ccgz */
    case 325:  /* subsi3_carry_ccgz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 324:  /* *subdi3_carry_ccc_1 */
    case 323:  /* *subsi3_carry_ccc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 322:  /* subdi3_carry_ccc */
    case 321:  /* subsi3_carry_ccc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      break;

    case 319:  /* *subsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 318:  /* *subdi3_carry_0 */
    case 317:  /* *subsi3_carry_0 */
    case 316:  /* *subhi3_carry_0 */
    case 315:  /* *subqi3_carry_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 314:  /* subdi3_carry */
    case 313:  /* subsi3_carry */
    case 312:  /* subhi3_carry */
    case 311:  /* subqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 310:  /* addcarrydi */
    case 309:  /* addcarrysi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 308:  /* *addsi3_carry_zext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 307:  /* *addsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 306:  /* *adddi3_carry_0 */
    case 305:  /* *addsi3_carry_0 */
    case 304:  /* *addhi3_carry_0 */
    case 303:  /* *addqi3_carry_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 302:  /* adddi3_carry */
    case 301:  /* addsi3_carry */
    case 300:  /* addhi3_carry */
    case 299:  /* addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 298:  /* *subsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 297:  /* *subdi_3 */
    case 296:  /* *subsi_3 */
    case 295:  /* *subhi_3 */
    case 294:  /* *subqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 264:  /* *leahi_general_3b */
    case 263:  /* *leaqi_general_3b */
    case 262:  /* *leahi_general_3 */
    case 261:  /* *leaqi_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4047:  /* xop_pmacssdd */
    case 4046:  /* xop_pmacsdd */
    case 4045:  /* xop_pmacssww */
    case 4044:  /* xop_pmacsww */
    case 272:  /* *leadi_general_4 */
    case 271:  /* *leadi_general_4 */
    case 270:  /* *leasi_general_4 */
    case 269:  /* *leasi_general_4 */
    case 268:  /* *leahi_general_4 */
    case 267:  /* *leahi_general_4 */
    case 266:  /* *leaqi_general_4 */
    case 265:  /* *leaqi_general_4 */
    case 260:  /* *leahi_general_2b */
    case 259:  /* *leaqi_general_2b */
    case 258:  /* *leahi_general_2 */
    case 257:  /* *leaqi_general_2 */
    case 256:  /* *leahi_general_1 */
    case 255:  /* *leaqi_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 357:  /* *mulvdi4_1 */
    case 356:  /* *mulvsi4_1 */
    case 355:  /* *mulvhi4_1 */
    case 293:  /* *subvdi4_1 */
    case 292:  /* *subvsi4_1 */
    case 291:  /* *subvhi4_1 */
    case 290:  /* *subvqi4_1 */
    case 254:  /* *addvdi4_1 */
    case 253:  /* *addvsi4_1 */
    case 252:  /* *addvhi4_1 */
    case 251:  /* *addvqi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 362:  /* *umulvqi4 */
    case 361:  /* *mulvqi4 */
    case 354:  /* *mulvhi4 */
    case 353:  /* *mulvdi4 */
    case 352:  /* *mulvsi4 */
    case 289:  /* *subvdi4 */
    case 288:  /* *subvsi4 */
    case 287:  /* *subvhi4 */
    case 286:  /* *subvqi4 */
    case 250:  /* *addvdi4 */
    case 249:  /* *addvsi4 */
    case 248:  /* *addvhi4 */
    case 247:  /* *addvqi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 489:  /* *xorqi_ext_2 */
    case 488:  /* *iorqi_ext_2 */
    case 438:  /* *andqi_ext_2 */
    case 246:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      break;

    case 487:  /* *xorqi_ext_1 */
    case 486:  /* *iorqi_ext_1 */
    case 436:  /* andqi_ext_1 */
    case 245:  /* addqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 618:  /* *ashrdi3_cconly */
    case 617:  /* *lshrdi3_cconly */
    case 616:  /* *ashrsi3_cconly */
    case 615:  /* *lshrsi3_cconly */
    case 614:  /* *ashrhi3_cconly */
    case 613:  /* *lshrhi3_cconly */
    case 612:  /* *ashrqi3_cconly */
    case 611:  /* *lshrqi3_cconly */
    case 565:  /* *ashldi3_cconly */
    case 564:  /* *ashlsi3_cconly */
    case 563:  /* *ashlhi3_cconly */
    case 562:  /* *ashlqi3_cconly */
    case 485:  /* *xordi_3 */
    case 484:  /* *iordi_3 */
    case 483:  /* *xorsi_3 */
    case 482:  /* *iorsi_3 */
    case 481:  /* *xorhi_3 */
    case 480:  /* *iorhi_3 */
    case 479:  /* *xorqi_3 */
    case 478:  /* *iorqi_3 */
    case 244:  /* *adddi_5 */
    case 243:  /* *addsi_5 */
    case 242:  /* *addhi_5 */
    case 241:  /* *addqi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 236:  /* *addsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 235:  /* *adddi_3 */
    case 234:  /* *addsi_3 */
    case 233:  /* *addhi_3 */
    case 232:  /* *addqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 610:  /* *ashrsi3_cmp_zext */
    case 609:  /* *lshrsi3_cmp_zext */
    case 561:  /* *ashlsi3_cmp_zext */
    case 473:  /* *xorsi_2_zext */
    case 472:  /* *iorsi_2_zext */
    case 430:  /* *andsi_2_zext */
    case 285:  /* *subsi_2_zext */
    case 231:  /* *addsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 608:  /* *ashrdi3_cmp */
    case 607:  /* *lshrdi3_cmp */
    case 606:  /* *ashrsi3_cmp */
    case 605:  /* *lshrsi3_cmp */
    case 604:  /* *ashrhi3_cmp */
    case 603:  /* *lshrhi3_cmp */
    case 602:  /* *ashrqi3_cmp */
    case 601:  /* *lshrqi3_cmp */
    case 560:  /* *ashldi3_cmp */
    case 559:  /* *ashlsi3_cmp */
    case 558:  /* *ashlhi3_cmp */
    case 557:  /* *ashlqi3_cmp */
    case 471:  /* *xordi_2 */
    case 470:  /* *iordi_2 */
    case 469:  /* *xorsi_2 */
    case 468:  /* *iorsi_2 */
    case 467:  /* *xorhi_2 */
    case 466:  /* *iorhi_2 */
    case 465:  /* *xorqi_2 */
    case 464:  /* *iorqi_2 */
    case 434:  /* *andsi_2 */
    case 433:  /* *andhi_2 */
    case 432:  /* *andqi_2 */
    case 431:  /* *andqi_2_maybe_si */
    case 429:  /* *anddi_2 */
    case 284:  /* *subdi_2 */
    case 283:  /* *subsi_2 */
    case 282:  /* *subhi_2 */
    case 281:  /* *subqi_2 */
    case 230:  /* *adddi_2 */
    case 229:  /* *addsi_2 */
    case 228:  /* *addhi_2 */
    case 227:  /* *addqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 645:  /* *rotrqi3_1_slp */
    case 644:  /* *rotlqi3_1_slp */
    case 600:  /* *ashrqi3_1_slp */
    case 599:  /* *lshrqi3_1_slp */
    case 556:  /* *ashlqi3_1_slp */
    case 463:  /* *xorqi_1_slp */
    case 462:  /* *iorqi_1_slp */
    case 428:  /* *andqi_1_slp */
    case 280:  /* *subqi_1_slp */
    case 226:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1374:  /* kxnordi */
    case 1373:  /* kxnorsi */
    case 1372:  /* kxnorhi */
    case 1371:  /* kxnorqi */
    case 639:  /* *rotrsi3_1_zext */
    case 638:  /* *rotlsi3_1_zext */
    case 594:  /* *ashrsi3_1_zext */
    case 593:  /* *lshrsi3_1_zext */
    case 581:  /* *ashrsi3_cvt_zext */
    case 553:  /* *ashlsi3_1_zext */
    case 457:  /* *xorsi_1_zext */
    case 456:  /* *iorsi_1_zext */
    case 424:  /* *andsi_1_zext */
    case 350:  /* *mulsi3_1_zext */
    case 320:  /* *subsi3_carry_zext_0 */
    case 279:  /* *subsi_1_zext */
    case 223:  /* addsi_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1390:  /* klshiftrtdi */
    case 1389:  /* kashiftdi */
    case 1388:  /* klshiftrtsi */
    case 1387:  /* kashiftsi */
    case 1386:  /* klshiftrthi */
    case 1385:  /* kashifthi */
    case 1384:  /* klshiftrtqi */
    case 1383:  /* kashiftqi */
    case 1382:  /* kadddi */
    case 1381:  /* kaddsi */
    case 1380:  /* kaddhi */
    case 1379:  /* kaddqi */
    case 1366:  /* kxordi */
    case 1365:  /* kiordi */
    case 1364:  /* kanddi */
    case 1363:  /* kxorsi */
    case 1362:  /* kiorsi */
    case 1361:  /* kandsi */
    case 1360:  /* kxorhi */
    case 1359:  /* kiorhi */
    case 1358:  /* kandhi */
    case 1357:  /* kxorqi */
    case 1356:  /* kiorqi */
    case 1355:  /* kandqi */
    case 1022:  /* pro_epilogue_adjust_stack_di_sub */
    case 1021:  /* pro_epilogue_adjust_stack_si_sub */
    case 1020:  /* pro_epilogue_adjust_stack_di_add */
    case 1019:  /* pro_epilogue_adjust_stack_si_add */
    case 643:  /* *rotrhi3_1 */
    case 642:  /* *rotlhi3_1 */
    case 641:  /* *rotrqi3_1 */
    case 640:  /* *rotlqi3_1 */
    case 636:  /* *rotrdi3_1 */
    case 635:  /* *rotldi3_1 */
    case 634:  /* *rotrsi3_1 */
    case 633:  /* *rotlsi3_1 */
    case 598:  /* *ashrhi3_1 */
    case 597:  /* *lshrhi3_1 */
    case 596:  /* *ashrqi3_1 */
    case 595:  /* *lshrqi3_1 */
    case 590:  /* *ashrdi3_1 */
    case 589:  /* *lshrdi3_1 */
    case 588:  /* *ashrsi3_1 */
    case 587:  /* *lshrsi3_1 */
    case 582:  /* ashrsi3_cvt */
    case 580:  /* ashrdi3_cvt */
    case 577:  /* *ashrti3_doubleword */
    case 576:  /* *lshrti3_doubleword */
    case 575:  /* *ashrdi3_doubleword */
    case 574:  /* *lshrdi3_doubleword */
    case 555:  /* *ashlqi3_1 */
    case 554:  /* *ashlhi3_1 */
    case 551:  /* *ashldi3_1 */
    case 550:  /* *ashlsi3_1 */
    case 541:  /* *ashlti3_doubleword */
    case 540:  /* *ashldi3_doubleword */
    case 461:  /* *xorqi_1 */
    case 460:  /* *iorqi_1 */
    case 455:  /* *xordi_1_btc */
    case 454:  /* *iordi_1_bts */
    case 453:  /* *xordi_1 */
    case 452:  /* *iordi_1 */
    case 451:  /* *xorsi_1 */
    case 450:  /* *iorsi_1 */
    case 449:  /* *xorhi_1 */
    case 448:  /* *iorhi_1 */
    case 447:  /* *xordi3_doubleword */
    case 446:  /* *iordi3_doubleword */
    case 427:  /* *andqi_1 */
    case 426:  /* *andsi_1 */
    case 425:  /* *andhi_1 */
    case 423:  /* *anddi_1_btr */
    case 422:  /* *anddi_1 */
    case 421:  /* *anddi3_doubleword */
    case 351:  /* *mulqi3_1 */
    case 349:  /* *muldi3_1 */
    case 348:  /* *mulsi3_1 */
    case 347:  /* *mulhi3_1 */
    case 278:  /* *subdi_1 */
    case 277:  /* *subsi_1 */
    case 276:  /* *subhi_1 */
    case 275:  /* *subqi_1 */
    case 274:  /* *subti3_doubleword */
    case 273:  /* *subdi3_doubleword */
    case 225:  /* *addqi_1 */
    case 224:  /* *addhi_1 */
    case 222:  /* *adddi_1 */
    case 221:  /* *addsi_1 */
    case 220:  /* *addti3_doubleword */
    case 219:  /* *adddi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 216:  /* *floatunssixf2_i387_with_xmm */
    case 215:  /* *floatunssidf2_i387_with_xmm */
    case 214:  /* *floatunssisf2_i387_with_xmm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 213:  /* floatdixf2_i387_with_xmm */
    case 212:  /* floatdidf2_i387_with_xmm */
    case 211:  /* floatdisf2_i387_with_xmm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 191:  /* fix_truncdi_i387_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 195:  /* fix_truncsi_i387_with_temp */
    case 194:  /* fix_trunchi_i387_with_temp */
    case 190:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 193:  /* fix_truncsi_i387 */
    case 192:  /* fix_trunchi_i387 */
    case 186:  /* fix_truncdi_i387_fisttp_with_temp */
    case 185:  /* fix_truncsi_i387_fisttp_with_temp */
    case 184:  /* fix_trunchi_i387_fisttp_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 173:  /* *fixuns_truncdf_1 */
    case 172:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1341:  /* movdi_to_sse */
    case 730:  /* ffssi2_no_cmove */
    case 183:  /* fix_truncdi_i387_fisttp */
    case 182:  /* fix_truncsi_i387_fisttp */
    case 181:  /* fix_trunchi_i387_fisttp */
    case 167:  /* *truncxfdf2_mixed */
    case 166:  /* *truncxfsf2_mixed */
    case 164:  /* *truncdfsf_i387 */
    case 163:  /* *truncdfsf_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 150:  /* extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1378:  /* knotdi */
    case 1377:  /* knotsi */
    case 1376:  /* knothi */
    case 1375:  /* knotqi */
    case 1000:  /* *x86_movdicc_0_m1_neg */
    case 999:  /* *x86_movsicc_0_m1_neg */
    case 998:  /* *x86_movdicc_0_m1_se */
    case 997:  /* *x86_movsicc_0_m1_se */
    case 996:  /* *x86_movdicc_0_m1 */
    case 995:  /* *x86_movsicc_0_m1 */
    case 807:  /* popcounthi2 */
    case 803:  /* popcountdi2 */
    case 802:  /* popcountsi2 */
    case 745:  /* clzdi2_lzcnt */
    case 744:  /* clzsi2_lzcnt */
    case 738:  /* ctzdi2 */
    case 737:  /* ctzsi2 */
    case 496:  /* *negdi2_1 */
    case 495:  /* *negsi2_1 */
    case 494:  /* *neghi2_1 */
    case 493:  /* *negqi2_1 */
    case 492:  /* *negti2_doubleword */
    case 491:  /* *negdi2_doubleword */
    case 189:  /* *fix_truncdi_i387_1 */
    case 188:  /* *fix_truncsi_i387_1 */
    case 187:  /* *fix_trunchi_i387_1 */
    case 142:  /* zero_extendqihi2_and */
    case 139:  /* zero_extendhisi2_and */
    case 138:  /* zero_extendqisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 685:  /* *indirect_jump */
    case 684:  /* *indirect_jump */
    case 123:  /* *pushxf_rounded */
    case 122:  /* *pushxf_rounded */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 120:  /* *insvqi_3 */
    case 119:  /* *insvqi_3 */
    case 118:  /* *insvqi_2 */
    case 117:  /* *insvqi_2 */
    case 116:  /* *insvqi_1 */
    case 112:  /* *insvqi_1_mem_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 4336:  /* avx512cd_maskw_vec_dupv4si */
    case 4335:  /* avx512cd_maskw_vec_dupv8si */
    case 4334:  /* avx512cd_maskw_vec_dupv16si */
    case 4333:  /* avx512cd_maskb_vec_dupv2di */
    case 4332:  /* avx512cd_maskb_vec_dupv4di */
    case 4331:  /* avx512cd_maskb_vec_dupv8di */
    case 4313:  /* *avx512dq_broadcastv8sf */
    case 4311:  /* *avx512dq_broadcastv16sf */
    case 4309:  /* *avx512dq_broadcastv4si */
    case 4307:  /* *avx512dq_broadcastv8si */
    case 4305:  /* *avx512dq_broadcastv16si */
    case 4236:  /* avx512vl_vec_dupv8hi */
    case 4234:  /* avx512vl_vec_dupv16hi */
    case 4232:  /* avx512bw_vec_dupv32hi */
    case 4230:  /* avx512vl_vec_dupv32qi */
    case 4228:  /* avx512vl_vec_dupv16qi */
    case 4226:  /* avx512bw_vec_dupv64qi */
    case 4224:  /* avx512vl_vec_dupv2df */
    case 4222:  /* avx512vl_vec_dupv4df */
    case 4220:  /* avx512f_vec_dupv8df */
    case 4218:  /* avx512vl_vec_dupv4sf */
    case 4216:  /* avx512vl_vec_dupv8sf */
    case 4214:  /* avx512f_vec_dupv16sf */
    case 4212:  /* avx512vl_vec_dupv2di */
    case 4210:  /* avx512vl_vec_dupv4di */
    case 4208:  /* avx512f_vec_dupv8di */
    case 4206:  /* avx512vl_vec_dupv4si */
    case 4204:  /* avx512vl_vec_dupv8si */
    case 4202:  /* avx512f_vec_dupv16si */
    case 4201:  /* avx512bw_vec_dupv64qi_1 */
    case 4200:  /* avx512bw_vec_dupv32hi_1 */
    case 4199:  /* avx512f_vec_dupv8di_1 */
    case 4198:  /* avx512f_vec_dupv16si_1 */
    case 4197:  /* avx2_vec_dupv4df */
    case 4159:  /* avx2_pbroadcastv4di_1 */
    case 4158:  /* avx2_pbroadcastv8si_1 */
    case 4157:  /* avx2_pbroadcastv16hi_1 */
    case 4156:  /* avx2_pbroadcastv32qi_1 */
    case 4155:  /* avx2_pbroadcastv2di */
    case 4154:  /* avx2_pbroadcastv4di */
    case 4153:  /* avx2_pbroadcastv4si */
    case 4152:  /* avx2_pbroadcastv8si */
    case 4151:  /* avx2_pbroadcastv8hi */
    case 4150:  /* avx2_pbroadcastv16hi */
    case 4149:  /* avx2_pbroadcastv32hi */
    case 4148:  /* avx2_pbroadcastv16qi */
    case 4147:  /* avx2_pbroadcastv32qi */
    case 4146:  /* avx2_pbroadcastv64qi */
    case 4145:  /* avx2_pbroadcastv8di */
    case 4144:  /* avx2_pbroadcastv16si */
    case 3963:  /* sse4_1_zero_extendv2siv2di2 */
    case 3961:  /* sse4_1_sign_extendv2siv2di2 */
    case 3951:  /* sse4_1_zero_extendv2hiv2di2 */
    case 3949:  /* sse4_1_sign_extendv2hiv2di2 */
    case 3947:  /* avx2_zero_extendv4hiv4di2 */
    case 3945:  /* avx2_sign_extendv4hiv4di2 */
    case 3939:  /* sse4_1_zero_extendv2qiv2di2 */
    case 3937:  /* sse4_1_sign_extendv2qiv2di2 */
    case 3935:  /* avx2_zero_extendv4qiv4di2 */
    case 3933:  /* avx2_sign_extendv4qiv4di2 */
    case 3931:  /* avx512f_zero_extendv8qiv8di2 */
    case 3929:  /* avx512f_sign_extendv8qiv8di2 */
    case 3927:  /* sse4_1_zero_extendv4hiv4si2 */
    case 3925:  /* sse4_1_sign_extendv4hiv4si2 */
    case 3915:  /* sse4_1_zero_extendv4qiv4si2 */
    case 3913:  /* sse4_1_sign_extendv4qiv4si2 */
    case 3911:  /* avx2_zero_extendv8qiv8si2 */
    case 3909:  /* avx2_sign_extendv8qiv8si2 */
    case 3903:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 3901:  /* sse4_1_sign_extendv8qiv8hi2 */
    case 3720:  /* *vec_extractv4si_0_zext */
    case 3719:  /* *vec_extractv4si_0_zext_sse4 */
    case 2992:  /* *avx512f_us_truncatev8div16qi2 */
    case 2991:  /* *avx512f_truncatev8div16qi2 */
    case 2990:  /* *avx512f_ss_truncatev8div16qi2 */
    case 2515:  /* avx512f_vec_dupv8df_1 */
    case 2514:  /* avx512f_vec_dupv16sf_1 */
    case 2513:  /* avx2_vec_dupv8sf_1 */
    case 2512:  /* avx2_vec_dupv4sf */
    case 2511:  /* avx2_vec_dupv8sf */
    case 2473:  /* sse2_cvtps2pd */
    case 2448:  /* vec_unpacks_lo_v16sf */
    case 2447:  /* *avx_cvtps2pd256_2 */
    case 2425:  /* sse2_cvttpd2dq */
    case 2419:  /* ufix_truncv2sfv2di2 */
    case 2417:  /* fix_truncv2sfv2di2 */
    case 2367:  /* ufix_truncv2dfv2si2 */
    case 2338:  /* sse2_cvtdq2pd */
    case 2337:  /* avx_cvtdq2pd256_2 */
    case 2336:  /* avx512f_cvtdq2pd512_2 */
    case 2334:  /* ufloatv2siv2df2 */
    case 2325:  /* *ufloatv2div2sf2 */
    case 2324:  /* *floatv2div2sf2 */
    case 2282:  /* sse2_cvttsd2siq */
    case 2280:  /* sse2_cvttsd2si */
    case 2272:  /* avx512f_vcvttsd2usiq */
    case 2270:  /* avx512f_vcvttsd2usi */
    case 2264:  /* avx512f_vcvttss2usiq */
    case 2262:  /* avx512f_vcvttss2usi */
    case 2175:  /* sse_cvttss2siq */
    case 2173:  /* sse_cvttss2si */
    case 2162:  /* sse_cvttps2pi */
    case 1340:  /* sse2_movq128 */
    case 1251:  /* *vec_dupv4hi */
    case 870:  /* sqrt_extenddfxf2_i387 */
    case 869:  /* sqrt_extendsfxf2_i387 */
    case 533:  /* *one_cmplsi2_1_zext */
    case 522:  /* *negextenddfxf2 */
    case 521:  /* *absextenddfxf2 */
    case 520:  /* *negextendsfxf2 */
    case 519:  /* *absextendsfxf2 */
    case 518:  /* *negextendsfdf2 */
    case 517:  /* *absextendsfdf2 */
    case 156:  /* *extendqisi2_zext */
    case 154:  /* *extendhisi2_zext */
    case 111:  /* *extzvqi */
    case 107:  /* *extzvqi_mem_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 695:  /* *sibcall_memory */
    case 694:  /* *sibcall_memory */
    case 104:  /* *movstricthi_xor */
    case 103:  /* *movstrictqi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 134:  /* *swapdf */
    case 133:  /* *swapsf */
    case 132:  /* swapxf */
    case 100:  /* *swaphi */
    case 99:  /* *swapqi */
    case 98:  /* *swapdi */
    case 97:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 5027:  /* vpopcountv8hi */
    case 5025:  /* vpopcountv16hi */
    case 5023:  /* vpopcountv32hi */
    case 5021:  /* vpopcountv32qi */
    case 5019:  /* vpopcountv16qi */
    case 5017:  /* vpopcountv64qi */
    case 5007:  /* vpopcountv2di */
    case 5005:  /* vpopcountv4di */
    case 5003:  /* vpopcountv8di */
    case 5001:  /* vpopcountv4si */
    case 4999:  /* vpopcountv8si */
    case 4997:  /* vpopcountv16si */
    case 4926:  /* clzv2di2 */
    case 4924:  /* clzv4di2 */
    case 4922:  /* clzv8di2 */
    case 4920:  /* clzv4si2 */
    case 4918:  /* clzv8si2 */
    case 4916:  /* clzv16si2 */
    case 4329:  /* *avx512dq_broadcastv4df_1 */
    case 4327:  /* *avx512dq_broadcastv4di_1 */
    case 4325:  /* *avx512dq_broadcastv8df_1 */
    case 4323:  /* *avx512dq_broadcastv8di_1 */
    case 4321:  /* *avx512dq_broadcastv16si_1 */
    case 4319:  /* *avx512dq_broadcastv16sf_1 */
    case 4317:  /* *avx512vl_broadcastv8sf_1 */
    case 4315:  /* *avx512vl_broadcastv8si_1 */
    case 4298:  /* vec_dupv4df */
    case 4297:  /* vec_dupv4di */
    case 4296:  /* vec_dupv8sf */
    case 4295:  /* vec_dupv8si */
    case 4294:  /* *vec_dupv4si */
    case 4293:  /* *vec_dupv8si */
    case 4292:  /* *vec_dupv8hi */
    case 4291:  /* *vec_dupv16hi */
    case 4290:  /* *vec_dupv16qi */
    case 4289:  /* *vec_dupv32qi */
    case 4284:  /* *vec_dupv2di */
    case 4283:  /* *vec_dupv4si */
    case 4282:  /* vec_dupv4sf */
    case 4280:  /* *avx512vl_vec_dup_gprv2df */
    case 4278:  /* *avx512vl_vec_dup_gprv4df */
    case 4276:  /* *avx512f_vec_dup_gprv8df */
    case 4274:  /* *avx512vl_vec_dup_gprv4sf */
    case 4272:  /* *avx512vl_vec_dup_gprv8sf */
    case 4270:  /* *avx512f_vec_dup_gprv16sf */
    case 4268:  /* *avx512vl_vec_dup_gprv2di */
    case 4266:  /* *avx512vl_vec_dup_gprv4di */
    case 4264:  /* *avx512f_vec_dup_gprv8di */
    case 4262:  /* *avx512vl_vec_dup_gprv4si */
    case 4260:  /* *avx512vl_vec_dup_gprv8si */
    case 4258:  /* *avx512f_vec_dup_gprv16si */
    case 4256:  /* *avx512vl_vec_dup_gprv8hi */
    case 4254:  /* *avx512vl_vec_dup_gprv16hi */
    case 4252:  /* *avx512bw_vec_dup_gprv32hi */
    case 4250:  /* *avx512vl_vec_dup_gprv32qi */
    case 4248:  /* *avx512vl_vec_dup_gprv16qi */
    case 4246:  /* *avx512bw_vec_dup_gprv64qi */
    case 4244:  /* *avx512f_broadcastv8di */
    case 4242:  /* *avx512f_broadcastv8df */
    case 4240:  /* *avx512f_broadcastv16si */
    case 4238:  /* *avx512f_broadcastv16sf */
    case 3959:  /* avx2_zero_extendv4siv4di2 */
    case 3957:  /* avx2_sign_extendv4siv4di2 */
    case 3955:  /* avx512f_zero_extendv8siv8di2 */
    case 3953:  /* avx512f_sign_extendv8siv8di2 */
    case 3943:  /* avx512f_zero_extendv8hiv8di2 */
    case 3941:  /* avx512f_sign_extendv8hiv8di2 */
    case 3923:  /* avx2_zero_extendv8hiv8si2 */
    case 3921:  /* avx2_sign_extendv8hiv8si2 */
    case 3919:  /* avx512f_zero_extendv16hiv16si2 */
    case 3917:  /* avx512f_sign_extendv16hiv16si2 */
    case 3907:  /* *avx512f_zero_extendv16qiv16si2 */
    case 3905:  /* *avx512f_sign_extendv16qiv16si2 */
    case 3899:  /* avx512bw_zero_extendv32qiv32hi2 */
    case 3897:  /* avx512bw_sign_extendv32qiv32hi2 */
    case 3895:  /* avx2_zero_extendv16qiv16hi2 */
    case 3893:  /* avx2_sign_extendv16qiv16hi2 */
    case 3854:  /* absv2si2 */
    case 3853:  /* absv4hi2 */
    case 3852:  /* absv8qi2 */
    case 3839:  /* *absv2di2 */
    case 3838:  /* *absv4di2 */
    case 3837:  /* *absv8di2 */
    case 3836:  /* *absv4si2 */
    case 3835:  /* *absv8si2 */
    case 3834:  /* *absv16si2 */
    case 3833:  /* *absv8hi2 */
    case 3832:  /* *absv16hi2 */
    case 3831:  /* *absv32hi2 */
    case 3830:  /* *absv16qi2 */
    case 3829:  /* *absv32qi2 */
    case 3828:  /* *absv64qi2 */
    case 3725:  /* *vec_extractv2di_1 */
    case 3718:  /* *vec_extractv2di_0_sse */
    case 3717:  /* *vec_extractv2di_0 */
    case 3716:  /* *vec_extractv4si_0 */
    case 2845:  /* *avx512vl_us_truncatev16hiv16qi2 */
    case 2844:  /* *avx512vl_truncatev16hiv16qi2 */
    case 2843:  /* *avx512vl_ss_truncatev16hiv16qi2 */
    case 2842:  /* *avx512vl_us_truncatev8siv8hi2 */
    case 2841:  /* *avx512vl_truncatev8siv8hi2 */
    case 2840:  /* *avx512vl_ss_truncatev8siv8hi2 */
    case 2839:  /* *avx512vl_us_truncatev4div4si2 */
    case 2838:  /* *avx512vl_truncatev4div4si2 */
    case 2837:  /* *avx512vl_ss_truncatev4div4si2 */
    case 2833:  /* avx512bw_us_truncatev32hiv32qi2 */
    case 2832:  /* avx512bw_truncatev32hiv32qi2 */
    case 2831:  /* avx512bw_ss_truncatev32hiv32qi2 */
    case 2818:  /* *avx512f_us_truncatev8div8hi2 */
    case 2817:  /* *avx512f_truncatev8div8hi2 */
    case 2816:  /* *avx512f_ss_truncatev8div8hi2 */
    case 2815:  /* *avx512f_us_truncatev8div8si2 */
    case 2814:  /* *avx512f_truncatev8div8si2 */
    case 2813:  /* *avx512f_ss_truncatev8div8si2 */
    case 2812:  /* *avx512f_us_truncatev16siv16hi2 */
    case 2811:  /* *avx512f_truncatev16siv16hi2 */
    case 2810:  /* *avx512f_ss_truncatev16siv16hi2 */
    case 2809:  /* *avx512f_us_truncatev16siv16qi2 */
    case 2808:  /* *avx512f_truncatev16siv16qi2 */
    case 2807:  /* *avx512f_ss_truncatev16siv16qi2 */
    case 2802:  /* vec_dupv2df */
    case 2798:  /* *vec_extractv2df_0_sse */
    case 2797:  /* sse2_storelpd */
    case 2796:  /* *vec_extractv2df_1_sse */
    case 2795:  /* sse2_storehpd */
    case 2591:  /* vec_extract_hi_v32qi */
    case 2590:  /* vec_extract_lo_v32qi */
    case 2589:  /* vec_extract_hi_v64qi */
    case 2588:  /* vec_extract_lo_v64qi */
    case 2587:  /* vec_extract_hi_v16hi */
    case 2586:  /* vec_extract_lo_v16hi */
    case 2585:  /* vec_extract_hi_v32hi */
    case 2584:  /* vec_extract_lo_v32hi */
    case 2583:  /* vec_extract_hi_v8sf */
    case 2582:  /* vec_extract_hi_v8si */
    case 2574:  /* vec_extract_lo_v8sf */
    case 2572:  /* vec_extract_lo_v8si */
    case 2570:  /* vec_extract_hi_v4df */
    case 2568:  /* vec_extract_hi_v4di */
    case 2566:  /* vec_extract_lo_v4df */
    case 2564:  /* vec_extract_lo_v4di */
    case 2562:  /* vec_extract_lo_v16si */
    case 2560:  /* vec_extract_lo_v16sf */
    case 2558:  /* vec_extract_hi_v16si */
    case 2556:  /* vec_extract_hi_v16sf */
    case 2552:  /* vec_extract_hi_v8di */
    case 2550:  /* vec_extract_hi_v8df */
    case 2546:  /* vec_extract_lo_v8di */
    case 2544:  /* vec_extract_lo_v8df */
    case 2527:  /* *vec_extractv4sf_0 */
    case 2508:  /* sse_storelps */
    case 2506:  /* sse_storehps */
    case 2445:  /* avx_cvtps2pd256 */
    case 2441:  /* avx512f_cvtps2pd512 */
    case 2437:  /* avx_cvtpd2ps256 */
    case 2433:  /* *avx512f_cvtpd2ps512 */
    case 2423:  /* ufix_truncv4sfv4si2 */
    case 2421:  /* ufix_truncv8sfv8si2 */
    case 2415:  /* ufix_truncv4sfv4di2 */
    case 2413:  /* fix_truncv4sfv4di2 */
    case 2409:  /* ufix_truncv8sfv8di2 */
    case 2405:  /* fix_truncv8sfv8di2 */
    case 2387:  /* ufix_truncv2dfv2di2 */
    case 2385:  /* fix_truncv2dfv2di2 */
    case 2383:  /* ufix_truncv4dfv4di2 */
    case 2381:  /* fix_truncv4dfv4di2 */
    case 2377:  /* ufix_truncv8dfv8di2 */
    case 2373:  /* fix_truncv8dfv8di2 */
    case 2371:  /* ufix_truncv4dfv4si2 */
    case 2369:  /* fix_truncv4dfv4si2 */
    case 2363:  /* ufix_truncv8dfv8si2 */
    case 2359:  /* fix_truncv8dfv8si2 */
    case 2332:  /* ufloatv4siv4df2 */
    case 2330:  /* ufloatv8siv8df2 */
    case 2322:  /* ufloatv4div4sf2 */
    case 2320:  /* floatv4div4sf2 */
    case 2316:  /* ufloatv8div8sf2 */
    case 2312:  /* floatv8div8sf2 */
    case 2308:  /* ufloatv2div2df2 */
    case 2304:  /* floatv2div2df2 */
    case 2300:  /* ufloatv4div4df2 */
    case 2296:  /* floatv4div4df2 */
    case 2292:  /* ufloatv8div8df2 */
    case 2288:  /* floatv8div8df2 */
    case 2286:  /* floatv4siv4df2 */
    case 2284:  /* floatv8siv8df2 */
    case 2254:  /* sse2_cvttpd2pi */
    case 2252:  /* sse2_cvtpi2pd */
    case 2250:  /* fix_truncv4sfv4si2 */
    case 2248:  /* fix_truncv8sfv8si2 */
    case 2244:  /* ufix_truncv16sfv16si2 */
    case 2240:  /* fix_truncv16sfv16si2 */
    case 2200:  /* ufloatv4siv4sf2 */
    case 2196:  /* ufloatv8siv8sf2 */
    case 2192:  /* ufloatv16siv16sf2 */
    case 2190:  /* floatv4siv4sf2 */
    case 2188:  /* floatv8siv8sf2 */
    case 2184:  /* floatv16siv16sf2 */
    case 1553:  /* sse2_sqrtv2df2 */
    case 1551:  /* avx_sqrtv4df2 */
    case 1547:  /* avx512f_sqrtv8df2 */
    case 1545:  /* sse_sqrtv4sf2 */
    case 1543:  /* avx_sqrtv8sf2 */
    case 1539:  /* avx512f_sqrtv16sf2 */
    case 1255:  /* *vec_extractv2si_1 */
    case 1254:  /* *vec_extractv2si_0 */
    case 1252:  /* *vec_dupv2si */
    case 1250:  /* mmx_pswapdv2si2 */
    case 1185:  /* *vec_extractv2sf_1 */
    case 1184:  /* *vec_extractv2sf_0 */
    case 1182:  /* *vec_dupv2sf */
    case 1181:  /* mmx_pswapdv2sf2 */
    case 1180:  /* mmx_floatv2si2 */
    case 1177:  /* mmx_pf2id */
    case 873:  /* *sqrtdf2_sse */
    case 872:  /* *sqrtsf2_sse */
    case 868:  /* sqrtxf2 */
    case 812:  /* *bswaphi2_movbe */
    case 811:  /* *bswapdi2 */
    case 810:  /* *bswapsi2 */
    case 809:  /* *bswapdi2_movbe */
    case 808:  /* *bswapsi2_movbe */
    case 534:  /* *one_cmplqi2_1 */
    case 532:  /* *one_cmpldi2_1 */
    case 531:  /* *one_cmplsi2_1 */
    case 530:  /* *one_cmplhi2_1 */
    case 529:  /* *one_cmpldi2_doubleword */
    case 516:  /* *negxf2_1 */
    case 515:  /* *absxf2_1 */
    case 514:  /* *negdf2_1 */
    case 513:  /* *absdf2_1 */
    case 512:  /* *negsf2_1 */
    case 511:  /* *abssf2_1 */
    case 210:  /* *floatdidf2_i387 */
    case 209:  /* *floatdisf2_i387 */
    case 208:  /* *floatsidf2_i387 */
    case 207:  /* *floatsisf2_i387 */
    case 206:  /* *floatdidf2_mixed */
    case 205:  /* *floatsidf2_mixed */
    case 204:  /* *floatdisf2_mixed */
    case 203:  /* *floatsisf2_mixed */
    case 202:  /* floatdixf2 */
    case 201:  /* floatsixf2 */
    case 200:  /* floathixf2 */
    case 199:  /* floathidf2 */
    case 198:  /* floathisf2 */
    case 180:  /* fix_truncdi_fisttp_i387_1 */
    case 179:  /* fix_truncsi_fisttp_i387_1 */
    case 178:  /* fix_trunchi_fisttp_i387_1 */
    case 177:  /* fix_truncdfdi_sse */
    case 176:  /* fix_truncdfsi_sse */
    case 175:  /* fix_truncsfdi_sse */
    case 174:  /* fix_truncsfsi_sse */
    case 171:  /* *truncxfdf2_i387 */
    case 170:  /* *truncxfsf2_i387 */
    case 169:  /* truncxfdf2_i387_noop */
    case 168:  /* truncxfsf2_i387_noop */
    case 165:  /* *truncdfsf2_i387_1 */
    case 162:  /* *truncdfsf_fast_i387 */
    case 161:  /* *truncdfsf_fast_mixed */
    case 160:  /* *extenddfxf2_i387 */
    case 159:  /* *extendsfxf2_i387 */
    case 158:  /* *extendsfdf2 */
    case 157:  /* extendqihi2 */
    case 155:  /* extendqisi2 */
    case 153:  /* extendhisi2 */
    case 152:  /* extendhidi2 */
    case 151:  /* extendqidi2 */
    case 149:  /* *extendsidi2_rex64 */
    case 148:  /* *zextsi_doubleword */
    case 147:  /* *zexthi_doubleword */
    case 146:  /* *zextqi_doubleword */
    case 145:  /* *zexthi_doubleword_and */
    case 144:  /* *zextqi_doubleword_and */
    case 143:  /* *zero_extendqihi2 */
    case 141:  /* *zero_extendhisi2 */
    case 140:  /* *zero_extendqisi2 */
    case 137:  /* zero_extendhidi2 */
    case 136:  /* zero_extendqidi2 */
    case 135:  /* *zero_extendsidi2 */
    case 110:  /* *extzvdi */
    case 109:  /* *extzvsi */
    case 108:  /* *extzvhi */
    case 106:  /* *extvsi */
    case 105:  /* *extvhi */
    case 96:  /* *movabsdi_2 */
    case 95:  /* *movabssi_2 */
    case 94:  /* *movabshi_2 */
    case 93:  /* *movabsqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 693:  /* *sibcall */
    case 692:  /* *sibcall */
    case 689:  /* *call */
    case 688:  /* *call */
    case 679:  /* *setcc_qi_slp */
    case 115:  /* insvdi_1 */
    case 114:  /* insvsi_1 */
    case 113:  /* insvhi_1 */
    case 102:  /* *movstricthi_1 */
    case 101:  /* *movstrictqi_1 */
    case 92:  /* *movabsdi_1 */
    case 91:  /* *movabssi_1 */
    case 90:  /* *movabshi_1 */
    case 89:  /* *movabsqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 676:  /* *setcc_si_1_and */
    case 81:  /* *movdi_or */
    case 80:  /* *movsi_or */
    case 79:  /* *movdi_xor */
    case 78:  /* *movsi_xor */
    case 73:  /* *popdi1_epilogue */
    case 72:  /* *popsi1_epilogue */
    case 69:  /* *pushdi2_prologue */
    case 68:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 4978:  /* *movv64si_internal */
    case 4977:  /* *movv64sf_internal */
    case 1285:  /* movv2df_internal */
    case 1284:  /* movv4df_internal */
    case 1283:  /* movv8df_internal */
    case 1282:  /* movv4sf_internal */
    case 1281:  /* movv8sf_internal */
    case 1280:  /* movv16sf_internal */
    case 1279:  /* movv1ti_internal */
    case 1278:  /* movv2ti_internal */
    case 1277:  /* movv4ti_internal */
    case 1276:  /* movv2di_internal */
    case 1275:  /* movv4di_internal */
    case 1274:  /* movv8di_internal */
    case 1273:  /* movv4si_internal */
    case 1272:  /* movv8si_internal */
    case 1271:  /* movv16si_internal */
    case 1270:  /* movv8hi_internal */
    case 1269:  /* movv16hi_internal */
    case 1268:  /* movv32hi_internal */
    case 1267:  /* movv16qi_internal */
    case 1266:  /* movv32qi_internal */
    case 1265:  /* movv64qi_internal */
    case 1157:  /* *movv2sf_internal */
    case 1156:  /* *movv1di_internal */
    case 1155:  /* *movv2si_internal */
    case 1154:  /* *movv4hi_internal */
    case 1153:  /* *movv8qi_internal */
    case 1130:  /* *movbnd64_internal_mpx */
    case 1129:  /* *movbnd32_internal_mpx */
    case 1034:  /* *prefetch_3dnow */
    case 678:  /* *setcc_qi */
    case 677:  /* *setcc_si_1_movzbl */
    case 675:  /* *setcc_di_1 */
    case 218:  /* *leadi */
    case 217:  /* *leasi */
    case 131:  /* *movsf_internal */
    case 130:  /* *movdf_internal */
    case 129:  /* *movxf_internal */
    case 128:  /* *movtf_internal */
    case 127:  /* *pushsf */
    case 126:  /* *pushsf_rex64 */
    case 125:  /* *pushdf */
    case 124:  /* *pushxf */
    case 121:  /* *pushtf */
    case 88:  /* *movqi_internal */
    case 87:  /* *movhi_internal */
    case 86:  /* *movsi_internal */
    case 85:  /* *movdi_internal */
    case 84:  /* *movti_internal */
    case 83:  /* *movoi_internal_avx */
    case 82:  /* *movxi_internal_avx512f */
    case 77:  /* *popfldi1 */
    case 76:  /* *popflsi1 */
    case 75:  /* *pushfldi2 */
    case 74:  /* *pushflsi2 */
    case 71:  /* *popdi1 */
    case 70:  /* *popsi1 */
    case 67:  /* *pushhi2 */
    case 66:  /* *pushqi2 */
    case 65:  /* *pushsi2_rex64 */
    case 64:  /* *pushhi2_rex64 */
    case 63:  /* *pushqi2_rex64 */
    case 62:  /* *pushsi2 */
    case 61:  /* *pushdi2_rex64 */
    case 60:  /* *pushti2 */
    case 59:  /* *pushdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 58:  /* *cmpiuxf_i387 */
    case 56:  /* *cmpiudf */
    case 54:  /* *cmpiusf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 197:  /* x86_fldcw_1 */
    case 52:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 3764:  /* sse_stmxcsr */
    case 1146:  /* rdpid_rex64 */
    case 1145:  /* rdpid */
    case 1104:  /* rdsspdi */
    case 1103:  /* rdsspsi */
    case 1091:  /* rdgsbasedi */
    case 1090:  /* rdfsbasedi */
    case 1089:  /* rdgsbasesi */
    case 1088:  /* rdfsbasesi */
    case 1083:  /* lwp_slwpcbdi */
    case 1082:  /* lwp_slwpcbsi */
    case 1078:  /* fnstsw */
    case 1051:  /* fxsave64 */
    case 1050:  /* fxsave */
    case 1046:  /* rdtsc */
    case 1035:  /* *prefetch_prefetchwt1 */
    case 828:  /* *load_tp_x32_zext */
    case 827:  /* *load_tp_di */
    case 826:  /* *load_tp_si */
    case 723:  /* set_got_rex64 */
    case 196:  /* x86_fnstcw_1 */
    case 51:  /* x86_fnstsw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 50:  /* *cmpxf_si_cc_i387 */
    case 49:  /* *cmpdf_si_cc_i387 */
    case 48:  /* *cmpsf_si_cc_i387 */
    case 47:  /* *cmpxf_hi_cc_i387 */
    case 46:  /* *cmpdf_hi_cc_i387 */
    case 45:  /* *cmpsf_hi_cc_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 44:  /* *cmpxf_si_i387 */
    case 43:  /* *cmpdf_si_i387 */
    case 42:  /* *cmpsf_si_i387 */
    case 41:  /* *cmpxf_hi_i387 */
    case 40:  /* *cmpdf_hi_i387 */
    case 39:  /* *cmpsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 38:  /* *cmpuxf_cc_i387 */
    case 37:  /* *cmpudf_cc_i387 */
    case 36:  /* *cmpusf_cc_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      break;

    case 35:  /* *cmpuxf_i387 */
    case 34:  /* *cmpudf_i387 */
    case 33:  /* *cmpusf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1));
      break;

    case 240:  /* *addsi_4 */
    case 239:  /* *addhi_4 */
    case 238:  /* *addqi_4 */
    case 237:  /* *adddi_4 */
    case 32:  /* *cmpdf_cc_i387 */
    case 31:  /* *cmpsf_cc_i387 */
    case 28:  /* *cmpxf_cc_i387 */
    case 26:  /* *cmpxf_0_cc_i387 */
    case 25:  /* *cmpdf_0_cc_i387 */
    case 24:  /* *cmpsf_0_cc_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 30:  /* *cmpdf_i387 */
    case 29:  /* *cmpsf_i387 */
    case 27:  /* *cmpxf_i387 */
    case 23:  /* *cmpxf_0_i387 */
    case 22:  /* *cmpdf_0_i387 */
    case 21:  /* *cmpsf_0_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 20:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 19:  /* *cmpqi_ext_3 */
    case 18:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 17:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 415:  /* *testsi_1 */
    case 414:  /* *testhi_1 */
    case 413:  /* *testqi_1 */
    case 412:  /* *testqi_1_maybe_si */
    case 411:  /* *testdi_1 */
    case 16:  /* *cmpdi_minus_1 */
    case 15:  /* *cmpsi_minus_1 */
    case 14:  /* *cmphi_minus_1 */
    case 13:  /* *cmpqi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 57:  /* *cmpixf_i387 */
    case 55:  /* *cmpidf */
    case 53:  /* *cmpisf */
    case 12:  /* *cmpdi_1 */
    case 11:  /* *cmpsi_1 */
    case 10:  /* *cmphi_1 */
    case 9:  /* *cmpqi_1 */
    case 8:  /* *cmpdi_ccno_1 */
    case 7:  /* *cmpsi_ccno_1 */
    case 6:  /* *cmphi_ccno_1 */
    case 5:  /* *cmpqi_ccno_1 */
    case 4:  /* *cmpdi_ccz_1 */
    case 3:  /* *cmpsi_ccz_1 */
    case 2:  /* *cmphi_ccz_1 */
    case 1:  /* *cmpqi_ccz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
