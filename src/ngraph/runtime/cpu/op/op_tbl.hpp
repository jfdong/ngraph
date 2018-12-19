#include "ngraph/op/op_tbl.hpp"

NGRAPH_OP(BatchDot, ngraph::op)
NGRAPH_OP(BatchNormInferenceRelu, ngraph::op)
NGRAPH_OP(BatchNormTrainingRelu, ngraph::op)
NGRAPH_OP(BoundedRelu, ngraph::op)
NGRAPH_OP(ConvertLayout, ngraph::runtime::cpu::op)
NGRAPH_OP(ConvolutionAdd, ngraph::op)
NGRAPH_OP(ConvolutionBiasAdd, ngraph::op)
NGRAPH_OP(ConvolutionBiasBackpropFiltersBias, ngraph::op)
NGRAPH_OP(ConvolutionBias, ngraph::op)
NGRAPH_OP(ConvolutionRelu, ngraph::op)
NGRAPH_OP(GroupConvolutionBias, ngraph::op)
NGRAPH_OP(GroupConvolution, ngraph::op)
NGRAPH_OP(LeakyRelu, ngraph::op)
NGRAPH_OP(LoopKernel, ngraph::runtime::cpu::op)
NGRAPH_OP(Lstm, ngraph::op)
NGRAPH_OP(MatmulBias, ngraph::op)
NGRAPH_OP(MaxPoolWithIndicesBackprop, ngraph::op)
NGRAPH_OP(MaxPoolWithIndices, ngraph::op)
NGRAPH_OP(QuantizedConvolutionBiasAdd, ngraph::op)
NGRAPH_OP(QuantizedConvolutionBias, ngraph::op)
NGRAPH_OP(QuantizedConvolutionBiasSignedAdd, ngraph::op)
NGRAPH_OP(QuantizedConvolutionRelu, ngraph::op)
NGRAPH_OP(Rnn, ngraph::op)
NGRAPH_OP(SigmoidMultiplyBackprop, ngraph::op)
NGRAPH_OP(SigmoidMultiply, ngraph::op)
NGRAPH_OP(UpdateSlice, ngraph::op)