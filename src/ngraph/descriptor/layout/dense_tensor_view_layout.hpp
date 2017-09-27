// ----------------------------------------------------------------------------
// Copyright 2017 Nervana Systems Inc.
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// ----------------------------------------------------------------------------

#pragma once

#include <vector>

#include "ngraph/descriptor/buffer.hpp"
#include "ngraph/descriptor/layout/tensor_view_layout.hpp"
#include "ngraph/descriptor/tensor_view.hpp"

namespace ngraph
{
    namespace descriptor
    {
        namespace layout
        {
            /// @brief The standard strided layout, used for row-major and column-major, their permutations and slices.
            ///
            /// The linearized offset of an index I is dot(I, strides) + offset.
            class DenseTensorViewLayout : public TensorViewLayout
            {
            public:
                ~DenseTensorViewLayout() {}
                DenseTensorViewLayout(const TensorView& tensor_view);

                virtual size_t get_size() override { return m_size; }
                size_t get_offset() const { return m_offset; }
                virtual size_t get_index_offset(const std::vector<size_t>& indices) override;

            protected:
                Strides m_strides;
                size_t  m_offset;
                size_t  m_size;
            };
        }
    }
}
