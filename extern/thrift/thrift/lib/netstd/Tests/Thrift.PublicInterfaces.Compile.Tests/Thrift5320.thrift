# Licensed to the Apache Software Foundation (ASF) under one
# or more contributor license agreements.  See the NOTICE file
# distributed with this work for additional information
# regarding copyright ownership.  The ASF licenses this file
# to you under the Apache License, Version 2.0 (the
# "License"); you may not use this file except in compliance
# with the License.  You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

// Testcase for THRIFT-5320 Usage of "Task" as IDL identifier generates uncompileable code

namespace * Thrift5320.Task

include "Thrift5320.enum.thrift"
include "Thrift5320.exception.thrift"
include "Thrift5320.struct.thrift"

enum Foobar {
	Task = 0
}


service Task {
    Thrift5320.enum.Task Task( 
		1 : Thrift5320.struct.Task  foo, 
		2: Foobar bar
	) throws (
		1: Thrift5320.exception.Task error
	)
}



