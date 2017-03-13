/** @file
  MSR Definitions for Pentium Processors.

  Provides defines for Machine Specific Registers(MSR) indexes. Data structures
  are provided for MSRs that contain one or more bit fields.  If the MSR value
  returned is a single 32-bit or 64-bit value, then a data structure is not
  provided for that MSR.

  Copyright (c) 2016, Intel Corporation. All rights reserved.<BR>
  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

  @par Specification Reference:
  Intel(R) 64 and IA-32 Architectures Software Developer's Manual, Volume 3,
  September 2016, Chapter 35 Model-Specific-Registers (MSR), Section 35.22.

**/

#ifndef __PENTIUM_MSR_H__
#define __PENTIUM_MSR_H__

#include <Register/ArchitecturalMsr.h>

/**
  See Section 15.10.2, "Pentium Processor Machine-Check Exception Handling.".

  @param  ECX  MSR_PENTIUM_P5_MC_ADDR (0x00000000)
  @param  EAX  Lower 32-bits of MSR value.
  @param  EDX  Upper 32-bits of MSR value.

  <b>Example usage</b>
  @code
  UINT64  Msr;

  Msr = AsmReadMsr64 (MSR_PENTIUM_P5_MC_ADDR);
  AsmWriteMsr64 (MSR_PENTIUM_P5_MC_ADDR, Msr);
  @endcode
  @note MSR_PENTIUM_P5_MC_ADDR is defined as P5_MC_ADDR in SDM.
**/
#define MSR_PENTIUM_P5_MC_ADDR                   0x00000000


/**
  See Section 15.10.2, "Pentium Processor Machine-Check Exception Handling.".

  @param  ECX  MSR_PENTIUM_P5_MC_TYPE (0x00000001)
  @param  EAX  Lower 32-bits of MSR value.
  @param  EDX  Upper 32-bits of MSR value.

  <b>Example usage</b>
  @code
  UINT64  Msr;

  Msr = AsmReadMsr64 (MSR_PENTIUM_P5_MC_TYPE);
  AsmWriteMsr64 (MSR_PENTIUM_P5_MC_TYPE, Msr);
  @endcode
  @note MSR_PENTIUM_P5_MC_TYPE is defined as P5_MC_TYPE in SDM.
**/
#define MSR_PENTIUM_P5_MC_TYPE                   0x00000001


/**
  See Section 17.15, "Time-Stamp Counter.".

  @param  ECX  MSR_PENTIUM_TSC (0x00000010)
  @param  EAX  Lower 32-bits of MSR value.
  @param  EDX  Upper 32-bits of MSR value.

  <b>Example usage</b>
  @code
  UINT64  Msr;

  Msr = AsmReadMsr64 (MSR_PENTIUM_TSC);
  AsmWriteMsr64 (MSR_PENTIUM_TSC, Msr);
  @endcode
  @note MSR_PENTIUM_TSC is defined as TSC in SDM.
**/
#define MSR_PENTIUM_TSC                          0x00000010


/**
  See Section 18.24.1, "Control and Event Select Register (CESR).".

  @param  ECX  MSR_PENTIUM_CESR (0x00000011)
  @param  EAX  Lower 32-bits of MSR value.
  @param  EDX  Upper 32-bits of MSR value.

  <b>Example usage</b>
  @code
  UINT64  Msr;

  Msr = AsmReadMsr64 (MSR_PENTIUM_CESR);
  AsmWriteMsr64 (MSR_PENTIUM_CESR, Msr);
  @endcode
  @note MSR_PENTIUM_CESR is defined as CESR in SDM.
**/
#define MSR_PENTIUM_CESR                         0x00000011


/**
  Section 18.24.3, "Events Counted.".

  @param  ECX  MSR_PENTIUM_CTRn
  @param  EAX  Lower 32-bits of MSR value.
  @param  EDX  Upper 32-bits of MSR value.

  <b>Example usage</b>
  @code
  UINT64  Msr;

  Msr = AsmReadMsr64 (MSR_PENTIUM_CTR0);
  AsmWriteMsr64 (MSR_PENTIUM_CTR0, Msr);
  @endcode
  @note MSR_PENTIUM_CTR0 is defined as CTR0 in SDM.
        MSR_PENTIUM_CTR1 is defined as CTR1 in SDM.
  @{
**/
#define MSR_PENTIUM_CTR0                         0x00000012
#define MSR_PENTIUM_CTR1                         0x00000013
/// @}

#endif