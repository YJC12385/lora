/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually
 * edited  */
/* The following lines can be configured to regenerate this file during cmake */
/* If manual edits are made, the following tags should be modified accordingly.
 */
/* BINDTOOL_GEN_AUTOMATIC(0) */
/* BINDTOOL_USE_PYGCCXML(0) */
/* BINDTOOL_HEADER_FILE(hamming_dec.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(05a3b2e4a4df8fc6c5efa22295ecced4) */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/lora_sdr/hamming_dec.h>
// pydoc.h is automatically generated in the build directory
#include <hamming_dec_pydoc.h>

void bind_hamming_dec(py::module &m) {

  using hamming_dec = ::gr::lora_sdr::hamming_dec;

  py::class_<hamming_dec, gr::sync_block, gr::block, gr::basic_block,
             std::shared_ptr<hamming_dec>>(m, "hamming_dec", D(hamming_dec))

      .def(py::init(&hamming_dec::make), py::arg("soft_decoding"),
           D(hamming_dec, make))

      ;
}
