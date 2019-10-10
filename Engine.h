#include <fstream>
#include <string>
#include <utility>
#include <vector>
#include <iostream>
#include <sstream>
#define DOUBLE double
// #include "cuda.h"
// #include "cuda_runtime.h"
using namespace std;


struct Options{
	int Tmax, interval, sediment_start, bed_change_start, kenhhepd, kenhhepng;
	bool ketdinh, channel, debug, plot;
	Options(int T, int itv, int sds, int bcs, int cohesive, int kn,
			bool kenhd, bool db, bool plt){
		Tmax = T;
		interval = itv;
		sediment_start = sds;
		bed_change_start = bcs;
		kenhhepng = kn;
		kenhhepd = kenhd;
		ketdinh = cohesive;
		channel = kenhd || kn;
		debug = db;
		plot = plt;
	}
	Options(){

	}
};
template <typename T>
pair<int, int> load_file(string filename, vector<T> arr);


pair<int, int> load_inputs(string dir, vector<DOUBLE> &h,
				vector<DOUBLE> &hsnham,
				vector<DOUBLE> &VISCOINDX, 
				vector<DOUBLE> &bc_up,
				vector<DOUBLE> &bc_right,
				vector<DOUBLE> &bc_left, 
				vector<DOUBLE> &bc_down, 
				vector<DOUBLE> &CC_u, 
				vector<DOUBLE> &CC_d,
				vector<DOUBLE> &CC_l,
				vector<DOUBLE> &CC_r,
				vector<int> &bienQ);

// cudaError_t initialize(int device);

// void update_boundary()

// void simulate(Options ops);

