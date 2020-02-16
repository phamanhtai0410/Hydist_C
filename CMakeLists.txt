cmake_minimum_required(VERSION 3.0)
project(Hydist)
set(CUDA_SEPARABLE_COMPILATION ON)
FIND_PACKAGE(CUDA REQUIRED)
LIST(APPEND 
CUDA_NVCC_FLAGS 
-arch=sm_70;
# -gencode;arch=compute_75,code=sm_75; # error: invalid device function
-gencode;arch=compute_70,code=sm_70; # error: an illegal memory access was encountered
-gencode;arch=compute_61,code=sm_61; # error: invalid device function
-gencode;arch=compute_52,code=sm_52; # error: invalid device function
-std=c++11;
--disable-warnings; 
)
FILE(GLOB SRC "*.cu" "*.h")
cuda_add_executable(rep ${SRC})
target_link_libraries(rep ${CUDA_LIBRARIES} ${CUDA_CUDART_LIBRARY} ${CUDA_cudadevrt_LIBRARY})