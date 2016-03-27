/****************************************************************************
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 ****************************************************************************/
#ifndef INCLUDED_UVM_SDV_ENDPOINT_ZERO_H
#define INCLUDED_UVM_SDV_ENDPOINT_ZERO_H
#include "uvm_sdv_endpoint_mgr.h"
#include "uvm_sdv_transport.h"

typedef struct uvm_sdv_endpoint_zero_s {
	uvm_sdv_endpoint_t					endpoint;
	uint32_t							msg_id;
} uvm_sdv_endpoint_zero_t;

void uvm_sdv_endpoint_zero_init(uvm_sdv_endpoint_zero_t *endpoint);

uint32_t uvm_sdv_endpoint_zero_alloc_msgid(uvm_sdv_endpoint_zero_t *endpoint);

uvm_sdv_transport_msg_t *uvm_sdv_endpoint_zero_recv_msg(
		uvm_sdv_endpoint_zero_t				*endpoint,
		uint32_t							msg_id);

#endif /* INCLUDED_UVM_SDV_ENDPOINT_ZERO_H */

