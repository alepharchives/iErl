/*
 * -----------------------------------------------------------------------
 *
 * NOTE: Do *not* edit this file; instead, edit 'erl_alloc.types' and
 *       build again! This file was automatically generated by
 *       'make_alloc_types' on Wed Aug 10 16:37:03 2011.
 *
 * -----------------------------------------------------------------------
 *
 * 
 * Copyright Ericsson AB 2011. All Rights Reserved.
 * 
 * The contents of this file are subject to the Erlang Public License,
 * Version 1.1, (the "License"); you may not use this file except in
 * compliance with the License. You should have received a copy of the
 * Erlang Public License along with this software. If not, it can be
 * retrieved online at http://www.erlang.org/.
 * 
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
 * the License for the specific language governing rights and limitations
 * under the License.
 * 
 */

#ifndef ERL_ALLOC_TYPES_H__
#define ERL_ALLOC_TYPES_H__


/* --- Allocator numbers -------------------------------------------------- */

#define ERTS_ALC_A_INVALID (0)

#define ERTS_ALC_A_MIN (1)

#define ERTS_ALC_A_SYSTEM (1)
#define ERTS_ALC_A_TEMPORARY (2)
#define ERTS_ALC_A_SHORT_LIVED (3)
#define ERTS_ALC_A_STANDARD (4)
#define ERTS_ALC_A_LONG_LIVED (5)
#define ERTS_ALC_A_EHEAP (6)
#define ERTS_ALC_A_ETS (7)
#define ERTS_ALC_A_FIXED_SIZE (8)
#define ERTS_ALC_A_BINARY (9)
#define ERTS_ALC_A_DRIVER (10)

#define ERTS_ALC_A_MAX (10)


/* --- Class numbers ------------------------------------------------------ */

#define ERTS_ALC_C_INVALID (0)

#define ERTS_ALC_C_MIN (1)

#define ERTS_ALC_C_PROCESSES  (1)
#define ERTS_ALC_C_ETS  (2)
#define ERTS_ALC_C_BINARIES  (3)
#define ERTS_ALC_C_ATOM  (4)
#define ERTS_ALC_C_SYSTEM  (5)
#define ERTS_ALC_C_CODE  (6)

#define ERTS_ALC_C_MAX (6)


/* --- Type number intervals ---------------------------------------------- */

#define ERTS_ALC_N_INVALID (0)

#define ERTS_ALC_N_MIN (1)

/* Type numbers used for sys_alloc */
#define ERTS_ALC_N_MIN_A_SYSTEM (1)
#define ERTS_ALC_N_MAX_A_SYSTEM (6)

/* Type numbers used for temp_alloc */
#define ERTS_ALC_N_MIN_A_TEMPORARY (7)
#define ERTS_ALC_N_MAX_A_TEMPORARY (26)

/* Type numbers used for sl_alloc */
#define ERTS_ALC_N_MIN_A_SHORT_LIVED (27)
#define ERTS_ALC_N_MAX_A_SHORT_LIVED (53)

/* Type numbers used for std_alloc */
#define ERTS_ALC_N_MIN_A_STANDARD (54)
#define ERTS_ALC_N_MAX_A_STANDARD (89)

/* Type numbers used for ll_alloc */
#define ERTS_ALC_N_MIN_A_LONG_LIVED (90)
#define ERTS_ALC_N_MAX_A_LONG_LIVED (121)

/* Type numbers used for eheap_alloc */
#define ERTS_ALC_N_MIN_A_EHEAP (122)
#define ERTS_ALC_N_MAX_A_EHEAP (125)

/* Type numbers used for ets_alloc */
#define ERTS_ALC_N_MIN_A_ETS (126)
#define ERTS_ALC_N_MAX_A_ETS (133)

/* Type numbers used for fix_alloc */
#define ERTS_ALC_N_MIN_A_FIXED_SIZE (134)
#define ERTS_ALC_N_MAX_A_FIXED_SIZE (144)

/* Type numbers used for binary_alloc */
#define ERTS_ALC_N_MIN_A_BINARY (145)
#define ERTS_ALC_N_MAX_A_BINARY (146)

/* Type numbers used for driver_alloc */
#define ERTS_ALC_N_MIN_A_DRIVER (147)
#define ERTS_ALC_N_MAX_A_DRIVER (154)

#define ERTS_ALC_N_MAX (154)


/* --- Multi thread use of allocators -------------------------------------- */

#define ERTS_ALC_MTA_SYSTEM (1)
#define ERTS_ALC_MTA_TEMPORARY (1)
#define ERTS_ALC_MTA_SHORT_LIVED (1)
#define ERTS_ALC_MTA_STANDARD (1)
#define ERTS_ALC_MTA_LONG_LIVED (1)
#define ERTS_ALC_MTA_EHEAP (1)
#define ERTS_ALC_MTA_ETS (1)
#define ERTS_ALC_MTA_FIXED_SIZE (1)
#define ERTS_ALC_MTA_BINARY (1)
#define ERTS_ALC_MTA_DRIVER (1)


/* --- Types --------------------------------------------------------------- */

typedef Uint32 ErtsAlcType_t; /* The type used for memory types */

#define ERTS_ALC_T_INVALID (0)

#define ERTS_ALC_T_UNDEF (209)
#define ERTS_ALC_T_NBIF_TABLE (337)
#define ERTS_ALC_T_INFO_DSBUF (465)
#define ERTS_ALC_T_ETHR_INTERNAL (593)
#define ERTS_ALC_T_HIPE (721)
#define ERTS_ALC_T_PUTENV_STR (849)
#define ERTS_ALC_T_TMP_HEAP (914)
#define ERTS_ALC_T_MSG_ROOTS (1042)
#define ERTS_ALC_T_ROOTSET (1170)
#define ERTS_ALC_T_LOADER_TMP (1378)
#define ERTS_ALC_T_NC_TMP (1490)
#define ERTS_ALC_T_TMP (1618)
#define ERTS_ALC_T_DCTRL_BUF (1746)
#define ERTS_ALC_T_TMP_DIST_BUF (1874)
#define ERTS_ALC_T_ESTACK (2002)
#define ERTS_ALC_T_PORT_CALL_BUF (2130)
#define ERTS_ALC_T_DB_TMP (2210)
#define ERTS_ALC_T_DB_MC_STK (2338)
#define ERTS_ALC_T_DB_MS_CMPL_HEAP (2466)
#define ERTS_ALC_T_LOGGER_DSBUF (2642)
#define ERTS_ALC_T_TMP_DSBUF (2770)
#define ERTS_ALC_T_DDLL_TMP_BUF (2898)
#define ERTS_ALC_T_RE_TMP_BUF (3026)
#define ERTS_ALC_T_TEMP_TERM (3154)
#define ERTS_ALC_T_SYS_READ_BUF (3282)
#define ERTS_ALC_T_ENVIRONMENT (3410)
#define ERTS_ALC_T_PEND_SUSPEND (3475)
#define ERTS_ALC_T_PROC_LIST (3603)
#define ERTS_ALC_T_MSG_REF (3731)
#define ERTS_ALC_T_SL_BIF_TIMER (3859)
#define ERTS_ALC_T_DB_FIXATION (4003)
#define ERTS_ALC_T_DB_FIX_DEL (4131)
#define ERTS_ALC_T_DB_MS_RUN_HEAP (4259)
#define ERTS_ALC_T_DB_PROC_CLEANUP (4387)
#define ERTS_ALC_T_PORT_TASK (4563)
#define ERTS_ALC_T_PORT_TASKQ (4691)
#define ERTS_ALC_T_MISC_OP_LIST (4819)
#define ERTS_ALC_T_PORT_NAMES (4947)
#define ERTS_ALC_T_PROCS_TPROC_EL (5011)
#define ERTS_ALC_T_PROCS_CNKINF (5139)
#define ERTS_ALC_T_PROCS_PIDS (5267)
#define ERTS_ALC_T_RE_SUBJECT (5459)
#define ERTS_ALC_T_RE_STACK (5587)
#define ERTS_ALC_T_UNICODE_BUFFER (5715)
#define ERTS_ALC_T_BINARY_BUFFER (5843)
#define ERTS_ALC_T_TMP_CPU_IDS (5971)
#define ERTS_ALC_T_EXT_TERM_DATA (6035)
#define ERTS_ALC_T_ASYNC (6227)
#define ERTS_ALC_T_XPORTS_LIST (6355)
#define ERTS_ALC_T_SL_PTIMER (6483)
#define ERTS_ALC_T_SYS_MSG_Q (6547)
#define ERTS_ALC_T_FD_LIST (6739)
#define ERTS_ALC_T_POLLSET_UPDREQ (6867)
#define ERTS_ALC_T_LINK_LH (6932)
#define ERTS_ALC_T_MONITOR_LH (7060)
#define ERTS_ALC_T_NLINK_LH (7188)
#define ERTS_ALC_T_SUSPEND_MON (7316)
#define ERTS_ALC_T_LL_BIF_TIMER (7444)
#define ERTS_ALC_T_REG_TABLE (7636)
#define ERTS_ALC_T_FUN_TABLE (7780)
#define ERTS_ALC_T_DIST_TABLE (7892)
#define ERTS_ALC_T_NODE_TABLE (8020)
#define ERTS_ALC_T_MODULE_REFS (8164)
#define ERTS_ALC_T_DCACHE (8276)
#define ERTS_ALC_T_DIST_ENTRY (8404)
#define ERTS_ALC_T_NODE_ENTRY (8532)
#define ERTS_ALC_T_DRIVER (8660)
#define ERTS_ALC_T_ARG_REG (8724)
#define ERTS_ALC_T_PROC_DICT (8852)
#define ERTS_ALC_T_CALLS_BUF (8980)
#define ERTS_ALC_T_BPD (9172)
#define ERTS_ALC_T_PORT_NAME (9300)
#define ERTS_ALC_T_LINEBUF (9428)
#define ERTS_ALC_T_IOQ (9556)
#define ERTS_ALC_T_BITS_BUF (9684)
#define ERTS_ALC_T_DB_NTAB_ENT (9764)
#define ERTS_ALC_T_DDLL_PROCESS (9940)
#define ERTS_ALC_T_DDLL_HANDLE (10068)
#define ERTS_ALC_T_PORT_DATA_LOCK (10196)
#define ERTS_ALC_T_NODES_MON (10260)
#define ERTS_ALC_T_RE_HEAP (10452)
#define ERTS_ALC_T_PSD (10516)
#define ERTS_ALC_T_PRTSD (10708)
#define ERTS_ALC_T_ZLIB (10836)
#define ERTS_ALC_T_PORT_LOCK (10964)
#define ERTS_ALC_T_DRIVER_LOCK (11092)
#define ERTS_ALC_T_LL_PTIMER (11220)
#define ERTS_ALC_T_FD_ENTRY_BUF (11348)
#define ERTS_ALC_T_PRT_REP_EXIT (11476)
#define ERTS_ALC_T_ATOM_TXT (11589)
#define ERTS_ALC_T_BIF_TIMER_TABLE (11733)
#define ERTS_ALC_T_ATOM_TABLE (11845)
#define ERTS_ALC_T_EXPORT_TABLE (12005)
#define ERTS_ALC_T_MODULE_TABLE (12133)
#define ERTS_ALC_T_TAINT (12261)
#define ERTS_ALC_T_PROC_TABLE (12309)
#define ERTS_ALC_T_PORT_TABLE (12501)
#define ERTS_ALC_T_TIMER_WHEEL (12629)
#define ERTS_ALC_T_CODE (12773)
#define ERTS_ALC_T_ASYNC_Q (12885)
#define ERTS_ALC_T_DB_TABLES (12965)
#define ERTS_ALC_T_DB_MS_PSDO_PROC (13093)
#define ERTS_ALC_T_INSTR_INFO (13269)
#define ERTS_ALC_T_SCHDLR_DATA (13333)
#define ERTS_ALC_T_RUNQS (13525)
#define ERTS_ALC_T_DDLL_ERRCODES (13653)
#define ERTS_ALC_T_PRE_ALLOC_DATA (13781)
#define ERTS_ALC_T_CPUDATA (13909)
#define ERTS_ALC_T_PROC_LCK_WTR (14037)
#define ERTS_ALC_T_PROC_LCK_QS (14165)
#define ERTS_ALC_T_RUNQ_BLNS (14293)
#define ERTS_ALC_T_FP_EXCEPTION (14421)
#define ERTS_ALC_T_LL_TEMP_TERM (14549)
#define ERTS_ALC_T_DRV_TAB (14677)
#define ERTS_ALC_T_DRV_EV_STATE (14805)
#define ERTS_ALC_T_POLLSET (14933)
#define ERTS_ALC_T_POLL_FDS (15061)
#define ERTS_ALC_T_POLL_RES_EVS (15189)
#define ERTS_ALC_T_FD_STATUS (15317)
#define ERTS_ALC_T_FD_TAB (15445)
#define ERTS_ALC_T_CS_PROG_PATH (15573)
#define ERTS_ALC_T_BEAM_REGISTER (15638)
#define ERTS_ALC_T_HEAP (15766)
#define ERTS_ALC_T_OLD_HEAP (15894)
#define ERTS_ALC_T_HEAP_FRAG (16022)
#define ERTS_ALC_T_DB_SEG (16167)
#define ERTS_ALC_T_DB_SEG_TAB (16295)
#define ERTS_ALC_T_DB_STK (16423)
#define ERTS_ALC_T_DB_TRANS_TAB (16551)
#define ERTS_ALC_T_DB_SEL_LIST (16679)
#define ERTS_ALC_T_DB_DMC_ERROR (16807)
#define ERTS_ALC_T_DB_DMC_ERR_INFO (16935)
#define ERTS_ALC_T_DB_TERM (17063)
#define ERTS_ALC_T_PROC (17176)
#define ERTS_ALC_T_ATOM (17352)
#define ERTS_ALC_T_EXPORT (17512)
#define ERTS_ALC_T_MODULE (17640)
#define ERTS_ALC_T_REG_PROC (17688)
#define ERTS_ALC_T_MONITOR_SH (17816)
#define ERTS_ALC_T_NLINK_SH (17944)
#define ERTS_ALC_T_FUN_ENTRY (18152)
#define ERTS_ALC_T_DB_TABLE (18216)
#define ERTS_ALC_T_DRV_EV_D_STATE (18392)
#define ERTS_ALC_T_DRV_SEL_D_STATE (18520)
#define ERTS_ALC_T_DRV_BINARY (18617)
#define ERTS_ALC_T_BINARY (18745)
#define ERTS_ALC_T_DRV (18906)
#define ERTS_ALC_T_NIF (19034)
#define ERTS_ALC_T_DRV_THR_OPTS (19162)
#define ERTS_ALC_T_DRV_TID (19290)
#define ERTS_ALC_T_DRV_MTX (19418)
#define ERTS_ALC_T_DRV_CND (19546)
#define ERTS_ALC_T_DRV_RWLCK (19674)
#define ERTS_ALC_T_DRV_TSD (19802)


/* --- Field sizes, masks, and shifts -------------------------------------- */

#define ERTS_ALC_A_BITS (4)
#define ERTS_ALC_C_BITS (3)
#define ERTS_ALC_N_BITS (8)
#define ERTS_ALC_T_BITS (15)

#define ERTS_ALC_A_MASK (15)
#define ERTS_ALC_C_MASK (7)
#define ERTS_ALC_N_MASK (255)
#define ERTS_ALC_T_MASK (32767)

#define ERTS_ALC_A_SHIFT (0)
#define ERTS_ALC_C_SHIFT (4)
#define ERTS_ALC_N_SHIFT (7)


/* --- Mappings ------------------------------------------------------------ */

/* type -> type number */
#define ERTS_ALC_T2N(T) (((T) >> ERTS_ALC_N_SHIFT) & ERTS_ALC_N_MASK)

/* type -> allocator number */
#define ERTS_ALC_T2A(T) (((T) >> ERTS_ALC_A_SHIFT) & ERTS_ALC_A_MASK)

/* type -> class number */
#define ERTS_ALC_T2C(T) (((T) >> ERTS_ALC_C_SHIFT) & ERTS_ALC_C_MASK)

/* type number -> type */
#define ERTS_ALC_N2T(N) (erts_alc_n2t[(N)])

/* type number -> type description */
#define ERTS_ALC_N2TD(N) (erts_alc_n2td[(N)])

/* type -> type description */
#define ERTS_ALC_T2TD(T) (ERTS_ALC_N2TD(ERTS_ALC_T2N((T))))

/* class number -> class description */
#define ERTS_ALC_C2CD(C) (erts_alc_c2cd[(C)])

/* allocator number -> allocator description */
#define ERTS_ALC_A2AD(A) (erts_alc_a2ad[(A)])

extern const ErtsAlcType_t erts_alc_n2t[];
extern const char *erts_alc_n2td[];
extern const char *erts_alc_c2cd[];
extern const char *erts_alc_a2ad[];

#ifdef ERTS_ALC_INTERNAL__

const ErtsAlcType_t erts_alc_n2t[] = {
  ERTS_ALC_T_INVALID,
  ERTS_ALC_T_UNDEF,
  ERTS_ALC_T_NBIF_TABLE,
  ERTS_ALC_T_INFO_DSBUF,
  ERTS_ALC_T_ETHR_INTERNAL,
  ERTS_ALC_T_HIPE,
  ERTS_ALC_T_PUTENV_STR,
  ERTS_ALC_T_TMP_HEAP,
  ERTS_ALC_T_MSG_ROOTS,
  ERTS_ALC_T_ROOTSET,
  ERTS_ALC_T_LOADER_TMP,
  ERTS_ALC_T_NC_TMP,
  ERTS_ALC_T_TMP,
  ERTS_ALC_T_DCTRL_BUF,
  ERTS_ALC_T_TMP_DIST_BUF,
  ERTS_ALC_T_ESTACK,
  ERTS_ALC_T_PORT_CALL_BUF,
  ERTS_ALC_T_DB_TMP,
  ERTS_ALC_T_DB_MC_STK,
  ERTS_ALC_T_DB_MS_CMPL_HEAP,
  ERTS_ALC_T_LOGGER_DSBUF,
  ERTS_ALC_T_TMP_DSBUF,
  ERTS_ALC_T_DDLL_TMP_BUF,
  ERTS_ALC_T_RE_TMP_BUF,
  ERTS_ALC_T_TEMP_TERM,
  ERTS_ALC_T_SYS_READ_BUF,
  ERTS_ALC_T_ENVIRONMENT,
  ERTS_ALC_T_PEND_SUSPEND,
  ERTS_ALC_T_PROC_LIST,
  ERTS_ALC_T_MSG_REF,
  ERTS_ALC_T_SL_BIF_TIMER,
  ERTS_ALC_T_DB_FIXATION,
  ERTS_ALC_T_DB_FIX_DEL,
  ERTS_ALC_T_DB_MS_RUN_HEAP,
  ERTS_ALC_T_DB_PROC_CLEANUP,
  ERTS_ALC_T_PORT_TASK,
  ERTS_ALC_T_PORT_TASKQ,
  ERTS_ALC_T_MISC_OP_LIST,
  ERTS_ALC_T_PORT_NAMES,
  ERTS_ALC_T_PROCS_TPROC_EL,
  ERTS_ALC_T_PROCS_CNKINF,
  ERTS_ALC_T_PROCS_PIDS,
  ERTS_ALC_T_RE_SUBJECT,
  ERTS_ALC_T_RE_STACK,
  ERTS_ALC_T_UNICODE_BUFFER,
  ERTS_ALC_T_BINARY_BUFFER,
  ERTS_ALC_T_TMP_CPU_IDS,
  ERTS_ALC_T_EXT_TERM_DATA,
  ERTS_ALC_T_ASYNC,
  ERTS_ALC_T_XPORTS_LIST,
  ERTS_ALC_T_SL_PTIMER,
  ERTS_ALC_T_SYS_MSG_Q,
  ERTS_ALC_T_FD_LIST,
  ERTS_ALC_T_POLLSET_UPDREQ,
  ERTS_ALC_T_LINK_LH,
  ERTS_ALC_T_MONITOR_LH,
  ERTS_ALC_T_NLINK_LH,
  ERTS_ALC_T_SUSPEND_MON,
  ERTS_ALC_T_LL_BIF_TIMER,
  ERTS_ALC_T_REG_TABLE,
  ERTS_ALC_T_FUN_TABLE,
  ERTS_ALC_T_DIST_TABLE,
  ERTS_ALC_T_NODE_TABLE,
  ERTS_ALC_T_MODULE_REFS,
  ERTS_ALC_T_DCACHE,
  ERTS_ALC_T_DIST_ENTRY,
  ERTS_ALC_T_NODE_ENTRY,
  ERTS_ALC_T_DRIVER,
  ERTS_ALC_T_ARG_REG,
  ERTS_ALC_T_PROC_DICT,
  ERTS_ALC_T_CALLS_BUF,
  ERTS_ALC_T_BPD,
  ERTS_ALC_T_PORT_NAME,
  ERTS_ALC_T_LINEBUF,
  ERTS_ALC_T_IOQ,
  ERTS_ALC_T_BITS_BUF,
  ERTS_ALC_T_DB_NTAB_ENT,
  ERTS_ALC_T_DDLL_PROCESS,
  ERTS_ALC_T_DDLL_HANDLE,
  ERTS_ALC_T_PORT_DATA_LOCK,
  ERTS_ALC_T_NODES_MON,
  ERTS_ALC_T_RE_HEAP,
  ERTS_ALC_T_PSD,
  ERTS_ALC_T_PRTSD,
  ERTS_ALC_T_ZLIB,
  ERTS_ALC_T_PORT_LOCK,
  ERTS_ALC_T_DRIVER_LOCK,
  ERTS_ALC_T_LL_PTIMER,
  ERTS_ALC_T_FD_ENTRY_BUF,
  ERTS_ALC_T_PRT_REP_EXIT,
  ERTS_ALC_T_ATOM_TXT,
  ERTS_ALC_T_BIF_TIMER_TABLE,
  ERTS_ALC_T_ATOM_TABLE,
  ERTS_ALC_T_EXPORT_TABLE,
  ERTS_ALC_T_MODULE_TABLE,
  ERTS_ALC_T_TAINT,
  ERTS_ALC_T_PROC_TABLE,
  ERTS_ALC_T_PORT_TABLE,
  ERTS_ALC_T_TIMER_WHEEL,
  ERTS_ALC_T_CODE,
  ERTS_ALC_T_ASYNC_Q,
  ERTS_ALC_T_DB_TABLES,
  ERTS_ALC_T_DB_MS_PSDO_PROC,
  ERTS_ALC_T_INSTR_INFO,
  ERTS_ALC_T_SCHDLR_DATA,
  ERTS_ALC_T_RUNQS,
  ERTS_ALC_T_DDLL_ERRCODES,
  ERTS_ALC_T_PRE_ALLOC_DATA,
  ERTS_ALC_T_CPUDATA,
  ERTS_ALC_T_PROC_LCK_WTR,
  ERTS_ALC_T_PROC_LCK_QS,
  ERTS_ALC_T_RUNQ_BLNS,
  ERTS_ALC_T_FP_EXCEPTION,
  ERTS_ALC_T_LL_TEMP_TERM,
  ERTS_ALC_T_DRV_TAB,
  ERTS_ALC_T_DRV_EV_STATE,
  ERTS_ALC_T_POLLSET,
  ERTS_ALC_T_POLL_FDS,
  ERTS_ALC_T_POLL_RES_EVS,
  ERTS_ALC_T_FD_STATUS,
  ERTS_ALC_T_FD_TAB,
  ERTS_ALC_T_CS_PROG_PATH,
  ERTS_ALC_T_BEAM_REGISTER,
  ERTS_ALC_T_HEAP,
  ERTS_ALC_T_OLD_HEAP,
  ERTS_ALC_T_HEAP_FRAG,
  ERTS_ALC_T_DB_SEG,
  ERTS_ALC_T_DB_SEG_TAB,
  ERTS_ALC_T_DB_STK,
  ERTS_ALC_T_DB_TRANS_TAB,
  ERTS_ALC_T_DB_SEL_LIST,
  ERTS_ALC_T_DB_DMC_ERROR,
  ERTS_ALC_T_DB_DMC_ERR_INFO,
  ERTS_ALC_T_DB_TERM,
  ERTS_ALC_T_PROC,
  ERTS_ALC_T_ATOM,
  ERTS_ALC_T_EXPORT,
  ERTS_ALC_T_MODULE,
  ERTS_ALC_T_REG_PROC,
  ERTS_ALC_T_MONITOR_SH,
  ERTS_ALC_T_NLINK_SH,
  ERTS_ALC_T_FUN_ENTRY,
  ERTS_ALC_T_DB_TABLE,
  ERTS_ALC_T_DRV_EV_D_STATE,
  ERTS_ALC_T_DRV_SEL_D_STATE,
  ERTS_ALC_T_DRV_BINARY,
  ERTS_ALC_T_BINARY,
  ERTS_ALC_T_DRV,
  ERTS_ALC_T_NIF,
  ERTS_ALC_T_DRV_THR_OPTS,
  ERTS_ALC_T_DRV_TID,
  ERTS_ALC_T_DRV_MTX,
  ERTS_ALC_T_DRV_CND,
  ERTS_ALC_T_DRV_RWLCK,
  ERTS_ALC_T_DRV_TSD,
  ERTS_ALC_T_INVALID
};

const char *erts_alc_n2td[] = {
  "invalid_type",
  "undefined",
  "nbif_tab",
  "info_dsbuf",
  "ethread_internal",
  "hipe_data",
  "putenv_string",
  "tmp_heap",
  "msg_roots",
  "root_set",
  "loader_tmp",
  "nc_tmp",
  "tmp",
  "dctrl_buf",
  "tmp_dist_buf",
  "estack",
  "port_call_buf",
  "db_tmp",
  "db_mc_stack",
  "db_match_spec_cmpl_heap",
  "logger_dsbuf",
  "tmp_dsbuf",
  "ddll_tmp_buf",
  "re_tmp_buf",
  "temp_term",
  "sys_read_buf",
  "environment",
  "pending_suspend",
  "proc_list",
  "msg_ref",
  "bif_timer_sl",
  "db_fixation",
  "fixed_del",
  "db_match_spec_run_heap",
  "db_proc_cleanup_state",
  "port_task",
  "port_task_queue",
  "misc_op_list",
  "port_names",
  "processes_term_proc_el",
  "processes_chunk_info",
  "processes_pids",
  "re_subject",
  "re_stack",
  "unicode_buffer",
  "binary_buffer",
  "tmp_cpu_ids",
  "external_term_data",
  "async",
  "extra_port_list",
  "ptimer_sl",
  "system_messages_queue",
  "fd_list",
  "pollset_update_req",
  "link_lh",
  "monitor_lh",
  "nlink_lh",
  "suspend_monitor",
  "bif_timer_ll",
  "reg_tab",
  "fun_tab",
  "dist_tab",
  "node_tab",
  "module_refs",
  "dcache",
  "dist_entry",
  "node_entry",
  "driver",
  "arg_reg",
  "proc_dict",
  "calls_buf",
  "bpd",
  "port_name",
  "line_buf",
  "io_queue",
  "bits_buf",
  "db_named_table_entry",
  "ddll_processes",
  "ddll_handle",
  "port_data_lock",
  "nodes_monitor",
  "re_heap",
  "process_specific_data",
  "port_specific_data",
  "zlib",
  "port_lock",
  "driver_lock",
  "ptimer_ll",
  "fd_entry_buf",
  "port_report_exit",
  "atom_text",
  "bif_timer_table",
  "atom_tab",
  "export_tab",
  "module_tab",
  "taint_list",
  "proc_tab",
  "port_tab",
  "timer_wheel",
  "code",
  "async_queue",
  "db_tabs",
  "db_match_pseudo_proc",
  "instr_info",
  "scheduler_data",
  "run_queues",
  "ddll_errcodes",
  "pre_alloc_data",
  "cpu_data",
  "proc_lock_waiter",
  "proc_lock_queues",
  "run_queue_balancing",
  "fp_exception",
  "ll_temp_term",
  "drv_tab",
  "driver_event_state",
  "pollset",
  "poll_fds",
  "poll_result_events",
  "fd_status",
  "fd_tab",
  "cs_prog_path",
  "beam_register",
  "heap",
  "old_heap",
  "heap_frag",
  "db_segment",
  "db_segment_tab",
  "db_stack",
  "db_trans_tab",
  "db_select_list",
  "db_dmc_error",
  "db_dmc_error_info",
  "db_term",
  "proc",
  "atom_entry",
  "export_entry",
  "module_entry",
  "reg_proc",
  "monitor_sh",
  "nlink_sh",
  "fun_entry",
  "db_tab",
  "driver_event_data_state",
  "driver_select_data_state",
  "drv_binary",
  "binary",
  "drv_internal",
  "nif_internal",
  "driver_thread_opts",
  "driver_tid",
  "driver_mutex",
  "driver_cond",
  "driver_rwlock",
  "driver_tsd",
  NULL
};

const char *erts_alc_c2cd[] = {
  "invalid_class",
  "process_data",
  "ets_data",
  "binary_data",
  "atom_data",
  "system_data",
  "code_data",
  NULL
};

const char *erts_alc_a2ad[] = {
  "invalid_allocator",
  "sys_alloc",
  "temp_alloc",
  "sl_alloc",
  "std_alloc",
  "ll_alloc",
  "eheap_alloc",
  "ets_alloc",
  "fix_alloc",
  "binary_alloc",
  "driver_alloc",
  NULL
};

#endif /* #ifdef ERTS_ALC_INTERNAL__ */


/* ------------------------------------------------------------------------- */
#endif /* #ifndef ERL_ALLOC_TYPES_H__ */
