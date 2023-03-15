#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_pt_ljet2_16()
{
//=========Macro generated from canvas: ROC_jets_pt_ljet2_16/ROC_jets_pt_ljet2_16
//=========  (Tue Jan 24 10:54:44 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_pt_ljet2_16 = new TCanvas("ROC_jets_pt_ljet2_16", "ROC_jets_pt_ljet2_16",0,0,600,600);
   ROC_jets_pt_ljet2_16->SetHighLightColor(2);
   ROC_jets_pt_ljet2_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_pt_ljet2_16->SetFillColor(0);
   ROC_jets_pt_ljet2_16->SetBorderMode(0);
   ROC_jets_pt_ljet2_16->SetBorderSize(2);
   ROC_jets_pt_ljet2_16->SetGridx();
   ROC_jets_pt_ljet2_16->SetGridy();
   ROC_jets_pt_ljet2_16->SetLeftMargin(0.15709);
   ROC_jets_pt_ljet2_16->SetRightMargin(0.1234783);
   ROC_jets_pt_ljet2_16->SetBottomMargin(0.12);
   ROC_jets_pt_ljet2_16->SetFrameBorderMode(0);
   ROC_jets_pt_ljet2_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx12778[1000] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.05598214,
   0.1115541,
   0.1688052,
   0.2240281,
   0.2784575,
   0.3308117,
   0.379172,
   0.4267395,
   0.4701753,
   0.5104756,
   0.5475465,
   0.5824483,
   0.6138906,
   0.6430083,
   0.6702769,
   0.6941303,
   0.7163054,
   0.7367116,
   0.755088,
   0.7723084,
   0.7886502,
   0.8032674,
   0.8168767,
   0.8296407,
   0.8413563,
   0.8518927,
   0.8619727,
   0.8707648,
   0.879044,
   0.8869272,
   0.8943647,
   0.901044,
   0.9072274,
   0.9131266,
   0.9186837,
   0.923551,
   0.9282179,
   0.932469,
   0.9367032,
   0.9404941,
   0.9439434,
   0.9473302,
   0.9504804,
   0.9533167,
   0.9559466,
   0.958404,
   0.9605661,
   0.9627661,
   0.9648639,
   0.9668949,
   0.9687638,
   0.9704139,
   0.9720592,
   0.9735157,
   0.9750354,
   0.9763625,
   0.9776123,
   0.9788064,
   0.9799176,
   0.9810673,
   0.9822408,
   0.9832138,
   0.9841231,
   0.9849653,
   0.9857912,
   0.9865512,
   0.9873075,
   0.9879806,
   0.9886199,
   0.9891934,
   0.9898291,
   0.9903961,
   0.9909502,
   0.9914597,
   0.9918659,
   0.9923111,
   0.992698,
   0.9930864,
   0.9934157,
   0.9936732,
   0.9939642,
   0.9942755,
   0.9945725,
   0.9948624,
   0.9951332,
   0.9953708,
   0.9955669,
   0.9957726,
   0.99596,
   0.9961228,
   0.9963032,
   0.9964322,
   0.9965537,
   0.9967057,
   0.9968206,
   0.9969639,
   0.9970735,
   0.9971733,
   0.9972855,
   0.9974191,
   0.9975503,
   0.997664,
   0.9977592,
   0.9978359,
   0.9979191,
   0.9979951,
   0.9980711,
   0.9981435,
   0.998219,
   0.9982664,
   0.9983012,
   0.9983756,
   0.9984417,
   0.998481,
   0.9985614,
   0.998631,
   0.998677,
   0.9987142,
   0.9987575,
   0.9987984,
   0.9988422,
   0.998877,
   0.9989164,
   0.9989373,
   0.9989556,
   0.9989747,
   0.9990002,
   0.9990162,
   0.9990474,
   0.9990646,
   0.999091,
   0.9991185,
   0.9991487,
   0.9991876,
   0.9992179,
   0.9992382,
   0.9992684,
   0.9993005,
   0.999315,
   0.9993286,
   0.999341,
   0.9993561,
   0.9993835,
   0.9994201,
   0.9994292,
   0.9994385,
   0.9994469,
   0.9994539,
   0.9994668,
   0.9994808,
   0.9995087,
   0.9995136,
   0.9995196,
   0.9995315,
   0.9995539,
   0.9995596,
   0.9995654,
   0.9995795,
   0.999588,
   0.9995913,
   0.9995972,
   0.9996028,
   0.9996124,
   0.9996259,
   0.9996353,
   0.9996435,
   0.9996544,
   0.9996768,
   0.9996862,
   0.9996928,
   0.9997009,
   0.9997113,
   0.9997185,
   0.9997251,
   0.9997319,
   0.9997369,
   0.9997415,
   0.9997441,
   0.9997483,
   0.9997565,
   0.9997644,
   0.9997734,
   0.9997768,
   0.9997797,
   0.9997934,
   0.999798,
   0.9998006,
   0.999805,
   0.9998138,
   0.9998145,
   0.9998225,
   0.9998254,
   0.9998323,
   0.9998364,
   0.9998388,
   0.9998411,
   0.9998506,
   0.9998525,
   0.999853,
   0.9998549,
   0.9998583,
   0.9998621,
   0.9998636,
   0.9998706,
   0.9998735,
   0.9998742,
   0.9998748,
   0.9998826,
   0.9998863,
   0.9998983,
   0.9998999,
   0.9999026,
   0.9999049,
   0.9999067,
   0.9999081,
   0.9999088,
   0.9999095,
   0.9999109,
   0.9999114,
   0.9999125,
   0.9999202,
   0.9999223,
   0.999923,
   0.9999236,
   0.9999251,
   0.9999258,
   0.9999265,
   0.9999271,
   0.999929,
   0.9999303,
   0.999931,
   0.9999371,
   0.9999371,
   0.9999382,
   0.9999382,
   0.9999382,
   0.9999396,
   0.9999409,
   0.9999416,
   0.9999423,
   0.9999436,
   0.9999447,
   0.9999447,
   0.999946,
   0.9999478,
   0.9999478,
   0.9999485,
   0.9999536,
   0.9999544,
   0.9999544,
   0.9999551,
   0.9999554,
   0.9999575,
   0.9999583,
   0.999959,
   0.9999612,
   0.9999618,
   0.9999625,
   0.9999625,
   0.9999632,
   0.9999639,
   0.9999639,
   0.9999639,
   0.9999642,
   0.9999642,
   0.9999703,
   0.999971,
   0.9999717,
   0.9999717,
   0.9999717,
   0.9999728,
   0.9999728,
   0.9999735,
   0.9999743,
   0.9999743,
   0.9999751,
   0.9999751,
   0.9999751,
   0.9999751,
   0.9999751,
   0.9999759,
   0.9999759,
   0.9999759,
   0.9999759,
   0.9999772,
   0.9999779,
   0.9999779,
   0.9999779,
   0.9999779,
   0.9999779,
   0.9999779,
   0.9999779,
   0.9999786,
   0.9999786,
   0.9999791,
   0.9999791,
   0.9999791,
   0.9999798,
   0.9999798,
   0.9999798,
   0.9999798,
   0.9999809,
   0.9999809,
   0.9999809,
   0.9999809,
   0.9999809,
   0.9999809,
   0.9999809,
   0.9999809,
   0.999981,
   0.999981,
   0.999981,
   0.999981,
   0.999981,
   0.9999817,
   0.9999817,
   0.9999824,
   0.9999824,
   0.9999824,
   0.9999824,
   0.9999824,
   0.9999824,
   0.9999824,
   0.9999889,
   0.9999889,
   0.9999889,
   0.9999889,
   0.9999889,
   0.9999895,
   0.999995,
   0.999995,
   0.999995,
   0.999995,
   0.999995,
   0.999995,
   0.999995,
   0.999995,
   0.999995,
   0.9999957,
   0.9999957,
   0.9999957,
   0.9999957,
   0.9999957,
   0.9999964,
   0.9999964,
   0.9999964,
   0.9999971,
   0.9999978,
   0.9999978,
   0.9999978,
   0.9999978,
   0.9999978,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy12778[1000] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.2196777,
   0.3855483,
   0.5128002,
   0.6101286,
   0.6852675,
   0.7435104,
   0.7893007,
   0.8255347,
   0.8545253,
   0.8777544,
   0.8966048,
   0.9120614,
   0.924723,
   0.9352723,
   0.9440812,
   0.9514759,
   0.9577375,
   0.9629537,
   0.9674659,
   0.9713384,
   0.9746676,
   0.9775352,
   0.9800277,
   0.9821864,
   0.9840795,
   0.985726,
   0.9871787,
   0.9884574,
   0.9895957,
   0.9906027,
   0.9914965,
   0.9922917,
   0.9930026,
   0.9936344,
   0.9942004,
   0.9947059,
   0.9951598,
   0.995571,
   0.9959412,
   0.9962796,
   0.9965834,
   0.996858,
   0.9971071,
   0.9973333,
   0.9975406,
   0.9977274,
   0.9978994,
   0.9980565,
   0.9982023,
   0.9983294,
   0.99845,
   0.998562,
   0.9986635,
   0.9987561,
   0.9988416,
   0.9989203,
   0.9989937,
   0.9990613,
   0.9991229,
   0.9991802,
   0.9992335,
   0.999283,
   0.9993288,
   0.9993709,
   0.9994102,
   0.9994467,
   0.9994804,
   0.9995121,
   0.9995421,
   0.9995695,
   0.9995952,
   0.9996191,
   0.9996416,
   0.9996626,
   0.999682,
   0.9997002,
   0.9997174,
   0.9997335,
   0.9997483,
   0.9997627,
   0.9997756,
   0.9997879,
   0.9997994,
   0.9998102,
   0.9998205,
   0.99983,
   0.9998391,
   0.9998475,
   0.9998554,
   0.9998633,
   0.9998705,
   0.9998776,
   0.9998838,
   0.9998898,
   0.9998953,
   0.9999005,
   0.9999054,
   0.9999099,
   0.9999142,
   0.9999183,
   0.9999221,
   0.9999258,
   0.9999292,
   0.9999325,
   0.9999356,
   0.9999385,
   0.9999412,
   0.9999439,
   0.9999463,
   0.9999487,
   0.9999509,
   0.999953,
   0.999955,
   0.9999568,
   0.9999586,
   0.9999604,
   0.999962,
   0.9999639,
   0.9999654,
   0.9999668,
   0.9999681,
   0.9999694,
   0.9999707,
   0.9999721,
   0.9999732,
   0.9999743,
   0.9999753,
   0.9999762,
   0.9999772,
   0.999978,
   0.9999789,
   0.9999797,
   0.9999805,
   0.9999812,
   0.9999819,
   0.9999826,
   0.9999832,
   0.9999838,
   0.9999844,
   0.999985,
   0.9999855,
   0.999986,
   0.9999865,
   0.999987,
   0.9999875,
   0.9999879,
   0.9999883,
   0.9999887,
   0.9999891,
   0.9999895,
   0.9999899,
   0.9999902,
   0.9999906,
   0.9999909,
   0.9999912,
   0.9999915,
   0.9999918,
   0.999992,
   0.9999923,
   0.9999926,
   0.9999928,
   0.999993,
   0.9999935,
   0.9999938,
   0.999994,
   0.9999942,
   0.9999944,
   0.9999946,
   0.9999947,
   0.9999949,
   0.9999951,
   0.9999953,
   0.9999954,
   0.9999956,
   0.9999957,
   0.9999958,
   0.999996,
   0.9999961,
   0.9999962,
   0.9999964,
   0.9999965,
   0.9999966,
   0.9999967,
   0.9999968,
   0.9999969,
   0.999997,
   0.9999971,
   0.9999972,
   0.9999973,
   0.9999974,
   0.9999975,
   0.9999975,
   0.9999976,
   0.9999977,
   0.9999978,
   0.9999978,
   0.9999979,
   0.999998,
   0.999998,
   0.9999981,
   0.9999982,
   0.9999982,
   0.9999983,
   0.9999983,
   0.9999984,
   0.9999984,
   0.9999985,
   0.9999985,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999987,
   0.9999987,
   0.9999988,
   0.9999988,
   0.9999988,
   0.9999989,
   0.9999989,
   0.9999989,
   0.999999,
   0.999999,
   0.999999,
   0.9999991,
   0.9999991,
   0.9999991,
   0.9999991,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999993,
   0.9999993,
   0.9999993,
   0.9999993,
   0.9999993,
   0.9999994,
   0.9999994,
   0.9999994,
   0.9999994,
   0.9999994,
   0.9999994,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999996,
   0.9999996,
   0.9999996,
   0.9999996,
   0.9999996,
   0.9999996,
   0.9999996,
   0.9999996,
   0.9999996,
   0.9999997,
   0.9999997,
   0.9999997,
   0.9999997,
   0.9999997,
   0.9999997,
   0.9999997,
   0.9999997,
   0.9999997,
   0.9999997,
   0.9999997,
   0.9999997,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(1000,Graph_fx12778,Graph_fy12778);
   graph->SetName("Graph");
   graph->SetTitle("");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#990099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#990099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph12778 = new TH1F("Graph_Graph12778","",1000,0,1.1);
   Graph_Graph12778->SetMinimum(0);
   Graph_Graph12778->SetMaximum(1.1);
   Graph_Graph12778->SetDirectory(0);
   Graph_Graph12778->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph12778->SetLineColor(ci);
   Graph_Graph12778->GetXaxis()->SetLabelFont(42);
   Graph_Graph12778->GetXaxis()->SetTitleOffset(1);
   Graph_Graph12778->GetXaxis()->SetTitleFont(42);
   Graph_Graph12778->GetYaxis()->SetLabelFont(42);
   Graph_Graph12778->GetYaxis()->SetTitleFont(42);
   Graph_Graph12778->GetZaxis()->SetLabelFont(42);
   Graph_Graph12778->GetZaxis()->SetTitleOffset(1);
   Graph_Graph12778->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph12778);
   
   TLatex *   tex = new TLatex(0,0.06,"1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12779);
      tex = new TLatex(0,0.06,"3.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12780);
      tex = new TLatex(0,0.06,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12781);
      tex = new TLatex(0,0.06,"7.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12782);
      tex = new TLatex(0,0.06,"9.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12783);
      tex = new TLatex(0,0.06,"11.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12784);
      tex = new TLatex(0,0.06,"13.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12785);
      tex = new TLatex(0,0.06,"15.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12786);
      tex = new TLatex(0,0.06,"17.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12787);
      tex = new TLatex(0,0.06,"19.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12788);
      tex = new TLatex(0,0.06,"21.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12789);
      tex = new TLatex(0,0.06,"23.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12790);
      tex = new TLatex(0,0.06,"25.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12791);
      tex = new TLatex(0,0.06,"27.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12792);
      tex = new TLatex(0,0.06,"29.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12793);
      tex = new TLatex(0,0.06,"31.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12794);
      tex = new TLatex(0.05598214,0.2796777,"33.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12795);
      tex = new TLatex(0.1115541,0.4455483,"35.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12796);
      tex = new TLatex(0.1688052,0.5728002,"37.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12797);
      tex = new TLatex(0.2240281,0.6701286,"39.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12798);
      tex = new TLatex(0.2784575,0.7452675,"41.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12799);
      tex = new TLatex(0.3308117,0.8035104,"43.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12800);
      tex = new TLatex(0.379172,0.8493007,"45.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12801);
      tex = new TLatex(0.4267395,0.8855347,"47.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12802);
      tex = new TLatex(0.4701753,0.9145253,"49.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12803);
      tex = new TLatex(0.5104756,0.9377544,"51.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12804);
      tex = new TLatex(0.5475465,0.9566048,"53.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12805);
      tex = new TLatex(0.5824483,0.9720614,"55.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12806);
      tex = new TLatex(0.6138906,0.984723,"57.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12807);
      tex = new TLatex(0.6430083,0.9952723,"59.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12808);
      tex = new TLatex(0.6702769,1.004081,"61.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12809);
      tex = new TLatex(0.6941303,1.011476,"63.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12810);
      tex = new TLatex(0.7163054,1.017737,"65.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12811);
      tex = new TLatex(0.7367116,1.022954,"67.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12812);
      tex = new TLatex(0.755088,1.027466,"69.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12813);
      tex = new TLatex(0.7723084,1.031338,"71.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12814);
      tex = new TLatex(0.7886502,1.034668,"73.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12815);
      tex = new TLatex(0.8032674,1.037535,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12816);
      tex = new TLatex(0.8168767,1.040028,"77.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12817);
      tex = new TLatex(0.8296407,1.042186,"79.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12818);
      tex = new TLatex(0.8413563,1.04408,"81.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12819);
      tex = new TLatex(0.8518927,1.045726,"83.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12820);
      tex = new TLatex(0.8619727,1.047179,"85.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12821);
      tex = new TLatex(0.8707648,1.048457,"87.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12822);
      tex = new TLatex(0.879044,1.049596,"89.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12823);
      tex = new TLatex(0.8869272,1.050603,"91.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12824);
      tex = new TLatex(0.8943647,1.051497,"93.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12825);
      tex = new TLatex(0.901044,1.052292,"95.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12826);
      tex = new TLatex(0.9072274,1.053003,"97.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12827);
      tex = new TLatex(0.9131266,1.053634,"99.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12828);
      tex = new TLatex(0.9186837,1.0542,"101.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12829);
      tex = new TLatex(0.923551,1.054706,"103.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12830);
      tex = new TLatex(0.9282179,1.05516,"105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12831);
      tex = new TLatex(0.932469,1.055571,"107.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12832);
      tex = new TLatex(0.9367032,1.055941,"109.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12833);
      tex = new TLatex(0.9404941,1.05628,"111.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12834);
      tex = new TLatex(0.9439434,1.056583,"113.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12835);
      tex = new TLatex(0.9473302,1.056858,"115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12836);
      tex = new TLatex(0.9504804,1.057107,"117.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12837);
      tex = new TLatex(0.9533167,1.057333,"119.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12838);
      tex = new TLatex(0.9559466,1.057541,"121.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12839);
      tex = new TLatex(0.958404,1.057727,"123.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12840);
      tex = new TLatex(0.9605661,1.057899,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12841);
      tex = new TLatex(0.9627661,1.058057,"127.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12842);
      tex = new TLatex(0.9648639,1.058202,"129.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12843);
      tex = new TLatex(0.9668949,1.058329,"131.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12844);
      tex = new TLatex(0.9687638,1.05845,"133.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12845);
      tex = new TLatex(0.9704139,1.058562,"135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12846);
      tex = new TLatex(0.9720592,1.058663,"137.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12847);
      tex = new TLatex(0.9735157,1.058756,"139.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12848);
      tex = new TLatex(0.9750354,1.058842,"141.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12849);
      tex = new TLatex(0.9763625,1.05892,"143.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12850);
      tex = new TLatex(0.9776123,1.058994,"145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12851);
      tex = new TLatex(0.9788064,1.059061,"147.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12852);
      tex = new TLatex(0.9799176,1.059123,"149.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12853);
      tex = new TLatex(0.9810673,1.05918,"151.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12854);
      tex = new TLatex(0.9822408,1.059233,"153.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12855);
      tex = new TLatex(0.9832138,1.059283,"155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12856);
      tex = new TLatex(0.9841231,1.059329,"157.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12857);
      tex = new TLatex(0.9849653,1.059371,"159.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12858);
      tex = new TLatex(0.9857912,1.05941,"161.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12859);
      tex = new TLatex(0.9865512,1.059447,"163.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12860);
      tex = new TLatex(0.9873075,1.05948,"165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12861);
      tex = new TLatex(0.9879806,1.059512,"167.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12862);
      tex = new TLatex(0.9886199,1.059542,"169.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12863);
      tex = new TLatex(0.9891934,1.059569,"171.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12864);
      tex = new TLatex(0.9898291,1.059595,"173.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12865);
      tex = new TLatex(0.9903961,1.059619,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12866);
      tex = new TLatex(0.9909502,1.059642,"177.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12867);
      tex = new TLatex(0.9914597,1.059663,"179.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12868);
      tex = new TLatex(0.9918659,1.059682,"181.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12869);
      tex = new TLatex(0.9923111,1.0597,"183.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12870);
      tex = new TLatex(0.992698,1.059717,"185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12871);
      tex = new TLatex(0.9930864,1.059733,"187.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12872);
      tex = new TLatex(0.9934157,1.059748,"189.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12873);
      tex = new TLatex(0.9936732,1.059763,"191.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12874);
      tex = new TLatex(0.9939642,1.059776,"193.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12875);
      tex = new TLatex(0.9942755,1.059788,"195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12876);
      tex = new TLatex(0.9945725,1.059799,"197.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12877);
      tex = new TLatex(0.9948624,1.05981,"199.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12878);
      tex = new TLatex(0.9951332,1.059821,"201.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12879);
      tex = new TLatex(0.9953708,1.05983,"203.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12880);
      tex = new TLatex(0.9955669,1.059839,"205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12881);
      tex = new TLatex(0.9957726,1.059848,"207.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12882);
      tex = new TLatex(0.99596,1.059855,"209.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12883);
      tex = new TLatex(0.9961228,1.059863,"211.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12884);
      tex = new TLatex(0.9963032,1.059871,"213.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12885);
      tex = new TLatex(0.9964322,1.059878,"215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12886);
      tex = new TLatex(0.9965537,1.059884,"217.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12887);
      tex = new TLatex(0.9967057,1.05989,"219.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12888);
      tex = new TLatex(0.9968206,1.059895,"221.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12889);
      tex = new TLatex(0.9969639,1.0599,"223.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12890);
      tex = new TLatex(0.9970735,1.059905,"225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12891);
      tex = new TLatex(0.9971733,1.05991,"227.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12892);
      tex = new TLatex(0.9972855,1.059914,"229.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12893);
      tex = new TLatex(0.9974191,1.059918,"231.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12894);
      tex = new TLatex(0.9975503,1.059922,"233.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12895);
      tex = new TLatex(0.997664,1.059926,"235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12896);
      tex = new TLatex(0.9977592,1.059929,"237.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12897);
      tex = new TLatex(0.9978359,1.059932,"239.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12898);
      tex = new TLatex(0.9979191,1.059936,"241.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12899);
      tex = new TLatex(0.9979951,1.059938,"243.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12900);
      tex = new TLatex(0.9980711,1.059941,"245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12901);
      tex = new TLatex(0.9981435,1.059944,"247.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12902);
      tex = new TLatex(0.998219,1.059946,"249.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12903);
      tex = new TLatex(0.9982664,1.059949,"251.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12904);
      tex = new TLatex(0.9983012,1.059951,"253.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12905);
      tex = new TLatex(0.9983756,1.059953,"255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12906);
      tex = new TLatex(0.9984417,1.059955,"257.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12907);
      tex = new TLatex(0.998481,1.059957,"259.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12908);
      tex = new TLatex(0.9985614,1.059959,"261.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12909);
      tex = new TLatex(0.998631,1.05996,"263.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12910);
      tex = new TLatex(0.998677,1.059962,"265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12911);
      tex = new TLatex(0.9987142,1.059964,"267.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12912);
      tex = new TLatex(0.9987575,1.059965,"269.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12913);
      tex = new TLatex(0.9987984,1.059967,"271.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12914);
      tex = new TLatex(0.9988422,1.059968,"273.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12915);
      tex = new TLatex(0.998877,1.059969,"275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12916);
      tex = new TLatex(0.9989164,1.059971,"277.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12917);
      tex = new TLatex(0.9989373,1.059972,"279.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12918);
      tex = new TLatex(0.9989556,1.059973,"281.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12919);
      tex = new TLatex(0.9989747,1.059974,"283.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12920);
      tex = new TLatex(0.9990002,1.059975,"285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12921);
      tex = new TLatex(0.9990162,1.059976,"287.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12922);
      tex = new TLatex(0.9990474,1.059977,"289.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12923);
      tex = new TLatex(0.9990646,1.059978,"291.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12924);
      tex = new TLatex(0.999091,1.059979,"293.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12925);
      tex = new TLatex(0.9991185,1.05998,"295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12926);
      tex = new TLatex(0.9991487,1.05998,"297.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12927);
      tex = new TLatex(0.9991876,1.059981,"299.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12928);
      tex = new TLatex(0.9992179,1.059982,"301.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12929);
      tex = new TLatex(0.9992382,1.059983,"303.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12930);
      tex = new TLatex(0.9992684,1.059983,"305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12931);
      tex = new TLatex(0.9993005,1.059984,"307.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12932);
      tex = new TLatex(0.999315,1.059984,"309.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12933);
      tex = new TLatex(0.9993286,1.059985,"311.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12934);
      tex = new TLatex(0.999341,1.059986,"313.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12935);
      tex = new TLatex(0.9993561,1.059986,"315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12936);
      tex = new TLatex(0.9993835,1.059987,"317.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12937);
      tex = new TLatex(0.9994201,1.059987,"319.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12938);
      tex = new TLatex(0.9994292,1.059987,"321.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12939);
      tex = new TLatex(0.9994385,1.059988,"323.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12940);
      tex = new TLatex(0.9994469,1.059988,"325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12941);
      tex = new TLatex(0.9994539,1.059989,"327.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12942);
      tex = new TLatex(0.9994668,1.059989,"329.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12943);
      tex = new TLatex(0.9994808,1.05999,"331.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12944);
      tex = new TLatex(0.9995087,1.05999,"333.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12945);
      tex = new TLatex(0.9995136,1.05999,"335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12946);
      tex = new TLatex(0.9995196,1.059991,"337.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12947);
      tex = new TLatex(0.9995315,1.059991,"339.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12948);
      tex = new TLatex(0.9995539,1.059991,"341.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12949);
      tex = new TLatex(0.9995596,1.059991,"343.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12950);
      tex = new TLatex(0.9995654,1.059992,"345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12951);
      tex = new TLatex(0.9995795,1.059992,"347.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12952);
      tex = new TLatex(0.999588,1.059992,"349.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12953);
      tex = new TLatex(0.9995913,1.059993,"351.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12954);
      tex = new TLatex(0.9995972,1.059993,"353.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12955);
      tex = new TLatex(0.9996028,1.059993,"355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12956);
      tex = new TLatex(0.9996124,1.059994,"357.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12957);
      tex = new TLatex(0.9996259,1.059994,"359.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12958);
      tex = new TLatex(0.9996353,1.059994,"361.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12959);
      tex = new TLatex(0.9996435,1.059994,"363.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12960);
      tex = new TLatex(0.9996544,1.059994,"365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12961);
      tex = new TLatex(0.9996768,1.059995,"367.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12962);
      tex = new TLatex(0.9996862,1.059995,"369.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12963);
      tex = new TLatex(0.9996928,1.059995,"371.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12964);
      tex = new TLatex(0.9997009,1.059995,"373.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12965);
      tex = new TLatex(0.9997113,1.059995,"375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12966);
      tex = new TLatex(0.9997185,1.059995,"377.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12967);
      tex = new TLatex(0.9997251,1.059996,"379.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12968);
      tex = new TLatex(0.9997319,1.059996,"381.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12969);
      tex = new TLatex(0.9997369,1.059996,"383.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12970);
      tex = new TLatex(0.9997415,1.059996,"385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12971);
      tex = new TLatex(0.9997441,1.059996,"387.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12972);
      tex = new TLatex(0.9997483,1.059996,"389.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12973);
      tex = new TLatex(0.9997565,1.059996,"391.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12974);
      tex = new TLatex(0.9997644,1.059996,"393.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12975);
      tex = new TLatex(0.9997734,1.059997,"395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12976);
      tex = new TLatex(0.9997768,1.059997,"397.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12977);
      tex = new TLatex(0.9997797,1.059997,"399.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12978);
      tex = new TLatex(0.9997934,1.059997,"401.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12979);
      tex = new TLatex(0.999798,1.059997,"403.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12980);
      tex = new TLatex(0.9998006,1.059997,"405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12981);
      tex = new TLatex(0.999805,1.059997,"407.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12982);
      tex = new TLatex(0.9998138,1.059997,"409.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12983);
      tex = new TLatex(0.9998145,1.059997,"411.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12984);
      tex = new TLatex(0.9998225,1.059997,"413.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12985);
      tex = new TLatex(0.9998254,1.059998,"415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12986);
      tex = new TLatex(0.9998323,1.059998,"417.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12987);
      tex = new TLatex(0.9998364,1.059998,"419.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12988);
      tex = new TLatex(0.9998388,1.059998,"421.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12989);
      tex = new TLatex(0.9998411,1.059998,"423.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12990);
      tex = new TLatex(0.9998506,1.059998,"425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12991);
      tex = new TLatex(0.9998525,1.059998,"427.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12992);
      tex = new TLatex(0.999853,1.059998,"429.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12993);
      tex = new TLatex(0.9998549,1.059998,"431.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12994);
      tex = new TLatex(0.9998583,1.059998,"433.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12995);
      tex = new TLatex(0.9998621,1.059998,"435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12996);
      tex = new TLatex(0.9998636,1.059998,"437.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12997);
      tex = new TLatex(0.9998706,1.059998,"439.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12998);
      tex = new TLatex(0.9998735,1.059998,"441.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12999);
      tex = new TLatex(0.9998742,1.059998,"443.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13000);
      tex = new TLatex(0.9998748,1.059998,"445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13001);
      tex = new TLatex(0.9998826,1.059999,"447.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13002);
      tex = new TLatex(0.9998863,1.059999,"449.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13003);
      tex = new TLatex(0.9998983,1.059999,"451.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13004);
      tex = new TLatex(0.9998999,1.059999,"453.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13005);
      tex = new TLatex(0.9999026,1.059999,"455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13006);
      tex = new TLatex(0.9999049,1.059999,"457.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13007);
      tex = new TLatex(0.9999067,1.059999,"459.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13008);
      tex = new TLatex(0.9999081,1.059999,"461.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13009);
      tex = new TLatex(0.9999088,1.059999,"463.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13010);
      tex = new TLatex(0.9999095,1.059999,"465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13011);
      tex = new TLatex(0.9999109,1.059999,"467.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13012);
      tex = new TLatex(0.9999114,1.059999,"469.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13013);
      tex = new TLatex(0.9999125,1.059999,"471.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13014);
      tex = new TLatex(0.9999202,1.059999,"473.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13015);
      tex = new TLatex(0.9999223,1.059999,"475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13016);
      tex = new TLatex(0.999923,1.059999,"477.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13017);
      tex = new TLatex(0.9999236,1.059999,"479.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13018);
      tex = new TLatex(0.9999251,1.059999,"481.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13019);
      tex = new TLatex(0.9999258,1.059999,"483.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13020);
      tex = new TLatex(0.9999265,1.059999,"485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13021);
      tex = new TLatex(0.9999271,1.059999,"487.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13022);
      tex = new TLatex(0.999929,1.059999,"489.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13023);
      tex = new TLatex(0.9999303,1.059999,"491.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13024);
      tex = new TLatex(0.999931,1.059999,"493.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13025);
      tex = new TLatex(0.9999371,1.059999,"495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13026);
      tex = new TLatex(0.9999371,1.059999,"497.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13027);
      tex = new TLatex(0.9999382,1.059999,"499.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13028);
      tex = new TLatex(0.9999382,1.059999,"501.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13029);
      tex = new TLatex(0.9999382,1.059999,"503.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13030);
      tex = new TLatex(0.9999396,1.059999,"505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13031);
      tex = new TLatex(0.9999409,1.059999,"507.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13032);
      tex = new TLatex(0.9999416,1.059999,"509.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13033);
      tex = new TLatex(0.9999423,1.059999,"511.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13034);
      tex = new TLatex(0.9999436,1.059999,"513.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13035);
      tex = new TLatex(0.9999447,1.059999,"515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13036);
      tex = new TLatex(0.9999447,1.059999,"517.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13037);
      tex = new TLatex(0.999946,1.059999,"519.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13038);
      tex = new TLatex(0.9999478,1.06,"521.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13039);
      tex = new TLatex(0.9999478,1.06,"523.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13040);
      tex = new TLatex(0.9999485,1.06,"525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13041);
      tex = new TLatex(0.9999536,1.06,"527.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13042);
      tex = new TLatex(0.9999544,1.06,"529.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13043);
      tex = new TLatex(0.9999544,1.06,"531.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13044);
      tex = new TLatex(0.9999551,1.06,"533.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13045);
      tex = new TLatex(0.9999554,1.06,"535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13046);
      tex = new TLatex(0.9999575,1.06,"537.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13047);
      tex = new TLatex(0.9999583,1.06,"539.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13048);
      tex = new TLatex(0.999959,1.06,"541.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13049);
      tex = new TLatex(0.9999612,1.06,"543.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13050);
      tex = new TLatex(0.9999618,1.06,"545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13051);
      tex = new TLatex(0.9999625,1.06,"547.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13052);
      tex = new TLatex(0.9999625,1.06,"549.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13053);
      tex = new TLatex(0.9999632,1.06,"551.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13054);
      tex = new TLatex(0.9999639,1.06,"553.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13055);
      tex = new TLatex(0.9999639,1.06,"555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13056);
      tex = new TLatex(0.9999639,1.06,"557.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13057);
      tex = new TLatex(0.9999642,1.06,"559.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13058);
      tex = new TLatex(0.9999642,1.06,"561.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13059);
      tex = new TLatex(0.9999703,1.06,"563.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13060);
      tex = new TLatex(0.999971,1.06,"565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13061);
      tex = new TLatex(0.9999717,1.06,"567.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13062);
      tex = new TLatex(0.9999717,1.06,"569.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13063);
      tex = new TLatex(0.9999717,1.06,"571.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13064);
      tex = new TLatex(0.9999728,1.06,"573.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13065);
      tex = new TLatex(0.9999728,1.06,"575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13066);
      tex = new TLatex(0.9999735,1.06,"577.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13067);
      tex = new TLatex(0.9999743,1.06,"579.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13068);
      tex = new TLatex(0.9999743,1.06,"581.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13069);
      tex = new TLatex(0.9999751,1.06,"583.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13070);
      tex = new TLatex(0.9999751,1.06,"585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13071);
      tex = new TLatex(0.9999751,1.06,"587.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13072);
      tex = new TLatex(0.9999751,1.06,"589.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13073);
      tex = new TLatex(0.9999751,1.06,"591.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13074);
      tex = new TLatex(0.9999759,1.06,"593.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13075);
      tex = new TLatex(0.9999759,1.06,"595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13076);
      tex = new TLatex(0.9999759,1.06,"597.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13077);
      tex = new TLatex(0.9999759,1.06,"599.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13078);
      tex = new TLatex(0.9999772,1.06,"601.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13079);
      tex = new TLatex(0.9999779,1.06,"603.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13080);
      tex = new TLatex(0.9999779,1.06,"605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13081);
      tex = new TLatex(0.9999779,1.06,"607.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13082);
      tex = new TLatex(0.9999779,1.06,"609.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13083);
      tex = new TLatex(0.9999779,1.06,"611.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13084);
      tex = new TLatex(0.9999779,1.06,"613.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13085);
      tex = new TLatex(0.9999779,1.06,"615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13086);
      tex = new TLatex(0.9999786,1.06,"617.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13087);
      tex = new TLatex(0.9999786,1.06,"619.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13088);
      tex = new TLatex(0.9999791,1.06,"621.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13089);
      tex = new TLatex(0.9999791,1.06,"623.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13090);
      tex = new TLatex(0.9999791,1.06,"625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13091);
      tex = new TLatex(0.9999798,1.06,"627.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13092);
      tex = new TLatex(0.9999798,1.06,"629.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13093);
      tex = new TLatex(0.9999798,1.06,"631.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13094);
      tex = new TLatex(0.9999798,1.06,"633.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13095);
      tex = new TLatex(0.9999809,1.06,"635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13096);
      tex = new TLatex(0.9999809,1.06,"637.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13097);
      tex = new TLatex(0.9999809,1.06,"639.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13098);
      tex = new TLatex(0.9999809,1.06,"641.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13099);
      tex = new TLatex(0.9999809,1.06,"643.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13100);
      tex = new TLatex(0.9999809,1.06,"645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13101);
      tex = new TLatex(0.9999809,1.06,"647.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13102);
      tex = new TLatex(0.9999809,1.06,"649.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13103);
      tex = new TLatex(0.999981,1.06,"651.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13104);
      tex = new TLatex(0.999981,1.06,"653.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13105);
      tex = new TLatex(0.999981,1.06,"655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13106);
      tex = new TLatex(0.999981,1.06,"657.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13107);
      tex = new TLatex(0.999981,1.06,"659.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13108);
      tex = new TLatex(0.9999817,1.06,"661.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13109);
      tex = new TLatex(0.9999817,1.06,"663.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13110);
      tex = new TLatex(0.9999824,1.06,"665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13111);
      tex = new TLatex(0.9999824,1.06,"667.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13112);
      tex = new TLatex(0.9999824,1.06,"669.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13113);
      tex = new TLatex(0.9999824,1.06,"671.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13114);
      tex = new TLatex(0.9999824,1.06,"673.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13115);
      tex = new TLatex(0.9999824,1.06,"675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13116);
      tex = new TLatex(0.9999824,1.06,"677.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13117);
      tex = new TLatex(0.9999889,1.06,"679.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13118);
      tex = new TLatex(0.9999889,1.06,"681.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13119);
      tex = new TLatex(0.9999889,1.06,"683.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13120);
      tex = new TLatex(0.9999889,1.06,"685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13121);
      tex = new TLatex(0.9999889,1.06,"687.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13122);
      tex = new TLatex(0.9999895,1.06,"689.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13123);
      tex = new TLatex(0.999995,1.06,"691.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13124);
      tex = new TLatex(0.999995,1.06,"693.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13125);
      tex = new TLatex(0.999995,1.06,"695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13126);
      tex = new TLatex(0.999995,1.06,"697.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13127);
      tex = new TLatex(0.999995,1.06,"699.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13128);
      tex = new TLatex(0.999995,1.06,"701.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13129);
      tex = new TLatex(0.999995,1.06,"703.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13130);
      tex = new TLatex(0.999995,1.06,"705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13131);
      tex = new TLatex(0.999995,1.06,"707.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13132);
      tex = new TLatex(0.9999957,1.06,"709.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13133);
      tex = new TLatex(0.9999957,1.06,"711.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13134);
      tex = new TLatex(0.9999957,1.06,"713.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13135);
      tex = new TLatex(0.9999957,1.06,"715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13136);
      tex = new TLatex(0.9999957,1.06,"717.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13137);
      tex = new TLatex(0.9999964,1.06,"719.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13138);
      tex = new TLatex(0.9999964,1.06,"721.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13139);
      tex = new TLatex(0.9999964,1.06,"723.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13140);
      tex = new TLatex(0.9999971,1.06,"725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13141);
      tex = new TLatex(0.9999978,1.06,"727.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13142);
      tex = new TLatex(0.9999978,1.06,"729.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13143);
      tex = new TLatex(0.9999978,1.06,"731.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13144);
      tex = new TLatex(0.9999978,1.06,"733.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13145);
      tex = new TLatex(0.9999978,1.06,"735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13146);
      tex = new TLatex(0.9999985,1.06,"737.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13147);
      tex = new TLatex(0.9999985,1.06,"739.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13148);
      tex = new TLatex(0.9999985,1.06,"741.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13149);
      tex = new TLatex(0.9999985,1.06,"743.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13150);
      tex = new TLatex(0.9999985,1.06,"745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13151);
      tex = new TLatex(0.9999985,1.06,"747.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13152);
      tex = new TLatex(0.9999985,1.06,"749.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13153);
      tex = new TLatex(0.9999985,1.06,"751.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13154);
      tex = new TLatex(0.9999985,1.06,"753.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13155);
      tex = new TLatex(0.9999985,1.06,"755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13156);
      tex = new TLatex(0.9999985,1.06,"757.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13157);
      tex = new TLatex(0.9999985,1.06,"759.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13158);
      tex = new TLatex(0.9999985,1.06,"761.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13159);
      tex = new TLatex(0.9999985,1.06,"763.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13160);
      tex = new TLatex(0.9999985,1.06,"765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13161);
      tex = new TLatex(0.9999985,1.06,"767.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13162);
      tex = new TLatex(0.9999985,1.06,"769.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13163);
      tex = new TLatex(0.9999985,1.06,"771.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13164);
      tex = new TLatex(0.9999985,1.06,"773.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13165);
      tex = new TLatex(0.9999985,1.06,"775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13166);
      tex = new TLatex(0.9999985,1.06,"777.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13167);
      tex = new TLatex(0.9999985,1.06,"779.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13168);
      tex = new TLatex(0.9999985,1.06,"781.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13169);
      tex = new TLatex(0.9999985,1.06,"783.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13170);
      tex = new TLatex(0.9999992,1.06,"785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13171);
      tex = new TLatex(0.9999992,1.06,"787.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13172);
      tex = new TLatex(0.9999992,1.06,"789.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13173);
      tex = new TLatex(0.9999992,1.06,"791.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13174);
      tex = new TLatex(0.9999992,1.06,"793.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13175);
      tex = new TLatex(0.9999992,1.06,"795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13176);
      tex = new TLatex(0.9999992,1.06,"797.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13177);
      tex = new TLatex(0.9999992,1.06,"799.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13178);
      tex = new TLatex(0.9999992,1.06,"801.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13179);
      tex = new TLatex(0.9999992,1.06,"803.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13180);
      tex = new TLatex(0.9999992,1.06,"805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13181);
      tex = new TLatex(0.9999992,1.06,"807.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13182);
      tex = new TLatex(0.9999992,1.06,"809.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13183);
      tex = new TLatex(0.9999992,1.06,"811.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13184);
      tex = new TLatex(0.9999992,1.06,"813.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13185);
      tex = new TLatex(0.9999992,1.06,"815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13186);
      tex = new TLatex(0.9999992,1.06,"817.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13187);
      tex = new TLatex(0.9999992,1.06,"819.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13188);
      tex = new TLatex(0.9999992,1.06,"821.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13189);
      tex = new TLatex(0.9999992,1.06,"823.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13190);
      tex = new TLatex(0.9999992,1.06,"825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13191);
      tex = new TLatex(0.9999992,1.06,"827.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13192);
      tex = new TLatex(0.9999992,1.06,"829.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13193);
      tex = new TLatex(0.9999992,1.06,"831.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13194);
      tex = new TLatex(0.9999992,1.06,"833.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13195);
      tex = new TLatex(0.9999992,1.06,"835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13196);
      tex = new TLatex(0.9999992,1.06,"837.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13197);
      tex = new TLatex(0.9999992,1.06,"839.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13198);
      tex = new TLatex(0.9999992,1.06,"841.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13199);
      tex = new TLatex(0.9999992,1.06,"843.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13200);
      tex = new TLatex(1,1.06,"845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13201);
      tex = new TLatex(1,1.06,"847.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13202);
      tex = new TLatex(1,1.06,"849.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13203);
      tex = new TLatex(1,1.06,"851.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13204);
      tex = new TLatex(1,1.06,"853.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13205);
      tex = new TLatex(1,1.06,"855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13206);
      tex = new TLatex(1,1.06,"857.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13207);
      tex = new TLatex(1,1.06,"859.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13208);
      tex = new TLatex(1,1.06,"861.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13209);
      tex = new TLatex(1,1.06,"863.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13210);
      tex = new TLatex(1,1.06,"865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13211);
      tex = new TLatex(1,1.06,"867.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13212);
      tex = new TLatex(1,1.06,"869.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13213);
      tex = new TLatex(1,1.06,"871.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13214);
      tex = new TLatex(1,1.06,"873.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13215);
      tex = new TLatex(1,1.06,"875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13216);
      tex = new TLatex(1,1.06,"877.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13217);
      tex = new TLatex(1,1.06,"879.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13218);
      tex = new TLatex(1,1.06,"881.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13219);
      tex = new TLatex(1,1.06,"883.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13220);
      tex = new TLatex(1,1.06,"885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13221);
      tex = new TLatex(1,1.06,"887.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13222);
      tex = new TLatex(1,1.06,"889.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13223);
      tex = new TLatex(1,1.06,"891.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13224);
      tex = new TLatex(1,1.06,"893.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13225);
      tex = new TLatex(1,1.06,"895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13226);
      tex = new TLatex(1,1.06,"897.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13227);
      tex = new TLatex(1,1.06,"899.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13228);
      tex = new TLatex(1,1.06,"901.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13229);
      tex = new TLatex(1,1.06,"903.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13230);
      tex = new TLatex(1,1.06,"905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13231);
      tex = new TLatex(1,1.06,"907.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13232);
      tex = new TLatex(1,1.06,"909.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13233);
      tex = new TLatex(1,1.06,"911.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13234);
      tex = new TLatex(1,1.06,"913.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13235);
      tex = new TLatex(1,1.06,"915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13236);
      tex = new TLatex(1,1.06,"917.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13237);
      tex = new TLatex(1,1.06,"919.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13238);
      tex = new TLatex(1,1.06,"921.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13239);
      tex = new TLatex(1,1.06,"923.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13240);
      tex = new TLatex(1,1.06,"925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13241);
      tex = new TLatex(1,1.06,"927.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13242);
      tex = new TLatex(1,1.06,"929.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13243);
      tex = new TLatex(1,1.06,"931.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13244);
      tex = new TLatex(1,1.06,"933.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13245);
      tex = new TLatex(1,1.06,"935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13246);
      tex = new TLatex(1,1.06,"937.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13247);
      tex = new TLatex(1,1.06,"939.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13248);
      tex = new TLatex(1,1.06,"941.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13249);
      tex = new TLatex(1,1.06,"943.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13250);
      tex = new TLatex(1,1.06,"945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13251);
      tex = new TLatex(1,1.06,"947.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13252);
      tex = new TLatex(1,1.06,"949.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13253);
      tex = new TLatex(1,1.06,"951.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13254);
      tex = new TLatex(1,1.06,"953.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13255);
      tex = new TLatex(1,1.06,"955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13256);
      tex = new TLatex(1,1.06,"957.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13257);
      tex = new TLatex(1,1.06,"959.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13258);
      tex = new TLatex(1,1.06,"961.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13259);
      tex = new TLatex(1,1.06,"963.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13260);
      tex = new TLatex(1,1.06,"965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13261);
      tex = new TLatex(1,1.06,"967.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13262);
      tex = new TLatex(1,1.06,"969.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13263);
      tex = new TLatex(1,1.06,"971.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13264);
      tex = new TLatex(1,1.06,"973.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13265);
      tex = new TLatex(1,1.06,"975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13266);
      tex = new TLatex(1,1.06,"977.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13267);
      tex = new TLatex(1,1.06,"979.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13268);
      tex = new TLatex(1,1.06,"981.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13269);
      tex = new TLatex(1,1.06,"983.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13270);
      tex = new TLatex(1,1.06,"985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13271);
      tex = new TLatex(1,1.06,"987.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13272);
      tex = new TLatex(1,1.06,"989.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13273);
      tex = new TLatex(1,1.06,"991.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13274);
      tex = new TLatex(1,1.06,"993.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13275);
      tex = new TLatex(1,1.06,"995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13276);
      tex = new TLatex(1,1.06,"997.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13277);
      tex = new TLatex(1,1.06,"999.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13278);
      tex = new TLatex(1,1.06,"1001.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13279);
      tex = new TLatex(1,1.06,"1003.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13280);
      tex = new TLatex(1,1.06,"1005.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13281);
      tex = new TLatex(1,1.06,"1007.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13282);
      tex = new TLatex(1,1.06,"1009.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13283);
      tex = new TLatex(1,1.06,"1011.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13284);
      tex = new TLatex(1,1.06,"1013.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13285);
      tex = new TLatex(1,1.06,"1015.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13286);
      tex = new TLatex(1,1.06,"1017.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13287);
      tex = new TLatex(1,1.06,"1019.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13288);
      tex = new TLatex(1,1.06,"1021.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13289);
      tex = new TLatex(1,1.06,"1023.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13290);
      tex = new TLatex(1,1.06,"1025.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13291);
      tex = new TLatex(1,1.06,"1027.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13292);
      tex = new TLatex(1,1.06,"1029.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13293);
      tex = new TLatex(1,1.06,"1031.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13294);
      tex = new TLatex(1,1.06,"1033.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13295);
      tex = new TLatex(1,1.06,"1035.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13296);
      tex = new TLatex(1,1.06,"1037.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13297);
      tex = new TLatex(1,1.06,"1039.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13298);
      tex = new TLatex(1,1.06,"1041.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13299);
      tex = new TLatex(1,1.06,"1043.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13300);
      tex = new TLatex(1,1.06,"1045.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13301);
      tex = new TLatex(1,1.06,"1047.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13302);
      tex = new TLatex(1,1.06,"1049.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13303);
      tex = new TLatex(1,1.06,"1051.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13304);
      tex = new TLatex(1,1.06,"1053.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13305);
      tex = new TLatex(1,1.06,"1055.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13306);
      tex = new TLatex(1,1.06,"1057.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13307);
      tex = new TLatex(1,1.06,"1059.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13308);
      tex = new TLatex(1,1.06,"1061.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13309);
      tex = new TLatex(1,1.06,"1063.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13310);
      tex = new TLatex(1,1.06,"1065.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13311);
      tex = new TLatex(1,1.06,"1067.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13312);
      tex = new TLatex(1,1.06,"1069.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13313);
      tex = new TLatex(1,1.06,"1071.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13314);
      tex = new TLatex(1,1.06,"1073.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13315);
      tex = new TLatex(1,1.06,"1075.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13316);
      tex = new TLatex(1,1.06,"1077.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13317);
      tex = new TLatex(1,1.06,"1079.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13318);
      tex = new TLatex(1,1.06,"1081.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13319);
      tex = new TLatex(1,1.06,"1083.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13320);
      tex = new TLatex(1,1.06,"1085.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13321);
      tex = new TLatex(1,1.06,"1087.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13322);
      tex = new TLatex(1,1.06,"1089.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13323);
      tex = new TLatex(1,1.06,"1091.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13324);
      tex = new TLatex(1,1.06,"1093.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13325);
      tex = new TLatex(1,1.06,"1095.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13326);
      tex = new TLatex(1,1.06,"1097.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13327);
      tex = new TLatex(1,1.06,"1099.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13328);
      tex = new TLatex(1,1.06,"1101.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13329);
      tex = new TLatex(1,1.06,"1103.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13330);
      tex = new TLatex(1,1.06,"1105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13331);
      tex = new TLatex(1,1.06,"1107.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13332);
      tex = new TLatex(1,1.06,"1109.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13333);
      tex = new TLatex(1,1.06,"1111.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13334);
      tex = new TLatex(1,1.06,"1113.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13335);
      tex = new TLatex(1,1.06,"1115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13336);
      tex = new TLatex(1,1.06,"1117.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13337);
      tex = new TLatex(1,1.06,"1119.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13338);
      tex = new TLatex(1,1.06,"1121.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13339);
      tex = new TLatex(1,1.06,"1123.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13340);
      tex = new TLatex(1,1.06,"1125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13341);
      tex = new TLatex(1,1.06,"1127.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13342);
      tex = new TLatex(1,1.06,"1129.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13343);
      tex = new TLatex(1,1.06,"1131.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13344);
      tex = new TLatex(1,1.06,"1133.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13345);
      tex = new TLatex(1,1.06,"1135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13346);
      tex = new TLatex(1,1.06,"1137.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13347);
      tex = new TLatex(1,1.06,"1139.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13348);
      tex = new TLatex(1,1.06,"1141.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13349);
      tex = new TLatex(1,1.06,"1143.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13350);
      tex = new TLatex(1,1.06,"1145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13351);
      tex = new TLatex(1,1.06,"1147.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13352);
      tex = new TLatex(1,1.06,"1149.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13353);
      tex = new TLatex(1,1.06,"1151.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13354);
      tex = new TLatex(1,1.06,"1153.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13355);
      tex = new TLatex(1,1.06,"1155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13356);
      tex = new TLatex(1,1.06,"1157.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13357);
      tex = new TLatex(1,1.06,"1159.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13358);
      tex = new TLatex(1,1.06,"1161.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13359);
      tex = new TLatex(1,1.06,"1163.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13360);
      tex = new TLatex(1,1.06,"1165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13361);
      tex = new TLatex(1,1.06,"1167.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13362);
      tex = new TLatex(1,1.06,"1169.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13363);
      tex = new TLatex(1,1.06,"1171.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13364);
      tex = new TLatex(1,1.06,"1173.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13365);
      tex = new TLatex(1,1.06,"1175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13366);
      tex = new TLatex(1,1.06,"1177.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13367);
      tex = new TLatex(1,1.06,"1179.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13368);
      tex = new TLatex(1,1.06,"1181.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13369);
      tex = new TLatex(1,1.06,"1183.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13370);
      tex = new TLatex(1,1.06,"1185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13371);
      tex = new TLatex(1,1.06,"1187.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13372);
      tex = new TLatex(1,1.06,"1189.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13373);
      tex = new TLatex(1,1.06,"1191.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13374);
      tex = new TLatex(1,1.06,"1193.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13375);
      tex = new TLatex(1,1.06,"1195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13376);
      tex = new TLatex(1,1.06,"1197.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13377);
      tex = new TLatex(1,1.06,"1199.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13378);
      tex = new TLatex(1,1.06,"1201.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13379);
      tex = new TLatex(1,1.06,"1203.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13380);
      tex = new TLatex(1,1.06,"1205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13381);
      tex = new TLatex(1,1.06,"1207.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13382);
      tex = new TLatex(1,1.06,"1209.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13383);
      tex = new TLatex(1,1.06,"1211.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13384);
      tex = new TLatex(1,1.06,"1213.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13385);
      tex = new TLatex(1,1.06,"1215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13386);
      tex = new TLatex(1,1.06,"1217.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13387);
      tex = new TLatex(1,1.06,"1219.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13388);
      tex = new TLatex(1,1.06,"1221.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13389);
      tex = new TLatex(1,1.06,"1223.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13390);
      tex = new TLatex(1,1.06,"1225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13391);
      tex = new TLatex(1,1.06,"1227.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13392);
      tex = new TLatex(1,1.06,"1229.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13393);
      tex = new TLatex(1,1.06,"1231.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13394);
      tex = new TLatex(1,1.06,"1233.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13395);
      tex = new TLatex(1,1.06,"1235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13396);
      tex = new TLatex(1,1.06,"1237.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13397);
      tex = new TLatex(1,1.06,"1239.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13398);
      tex = new TLatex(1,1.06,"1241.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13399);
      tex = new TLatex(1,1.06,"1243.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13400);
      tex = new TLatex(1,1.06,"1245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13401);
      tex = new TLatex(1,1.06,"1247.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13402);
      tex = new TLatex(1,1.06,"1249.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13403);
      tex = new TLatex(1,1.06,"1251.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13404);
      tex = new TLatex(1,1.06,"1253.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13405);
      tex = new TLatex(1,1.06,"1255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13406);
      tex = new TLatex(1,1.06,"1257.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13407);
      tex = new TLatex(1,1.06,"1259.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13408);
      tex = new TLatex(1,1.06,"1261.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13409);
      tex = new TLatex(1,1.06,"1263.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13410);
      tex = new TLatex(1,1.06,"1265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13411);
      tex = new TLatex(1,1.06,"1267.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13412);
      tex = new TLatex(1,1.06,"1269.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13413);
      tex = new TLatex(1,1.06,"1271.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13414);
      tex = new TLatex(1,1.06,"1273.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13415);
      tex = new TLatex(1,1.06,"1275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13416);
      tex = new TLatex(1,1.06,"1277.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13417);
      tex = new TLatex(1,1.06,"1279.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13418);
      tex = new TLatex(1,1.06,"1281.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13419);
      tex = new TLatex(1,1.06,"1283.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13420);
      tex = new TLatex(1,1.06,"1285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13421);
      tex = new TLatex(1,1.06,"1287.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13422);
      tex = new TLatex(1,1.06,"1289.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13423);
      tex = new TLatex(1,1.06,"1291.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13424);
      tex = new TLatex(1,1.06,"1293.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13425);
      tex = new TLatex(1,1.06,"1295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13426);
      tex = new TLatex(1,1.06,"1297.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13427);
      tex = new TLatex(1,1.06,"1299.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13428);
      tex = new TLatex(1,1.06,"1301.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13429);
      tex = new TLatex(1,1.06,"1303.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13430);
      tex = new TLatex(1,1.06,"1305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13431);
      tex = new TLatex(1,1.06,"1307.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13432);
      tex = new TLatex(1,1.06,"1309.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13433);
      tex = new TLatex(1,1.06,"1311.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13434);
      tex = new TLatex(1,1.06,"1313.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13435);
      tex = new TLatex(1,1.06,"1315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13436);
      tex = new TLatex(1,1.06,"1317.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13437);
      tex = new TLatex(1,1.06,"1319.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13438);
      tex = new TLatex(1,1.06,"1321.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13439);
      tex = new TLatex(1,1.06,"1323.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13440);
      tex = new TLatex(1,1.06,"1325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13441);
      tex = new TLatex(1,1.06,"1327.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13442);
      tex = new TLatex(1,1.06,"1329.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13443);
      tex = new TLatex(1,1.06,"1331.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13444);
      tex = new TLatex(1,1.06,"1333.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13445);
      tex = new TLatex(1,1.06,"1335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13446);
      tex = new TLatex(1,1.06,"1337.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13447);
      tex = new TLatex(1,1.06,"1339.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13448);
      tex = new TLatex(1,1.06,"1341.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13449);
      tex = new TLatex(1,1.06,"1343.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13450);
      tex = new TLatex(1,1.06,"1345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13451);
      tex = new TLatex(1,1.06,"1347.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13452);
      tex = new TLatex(1,1.06,"1349.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13453);
      tex = new TLatex(1,1.06,"1351.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13454);
      tex = new TLatex(1,1.06,"1353.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13455);
      tex = new TLatex(1,1.06,"1355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13456);
      tex = new TLatex(1,1.06,"1357.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13457);
      tex = new TLatex(1,1.06,"1359.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13458);
      tex = new TLatex(1,1.06,"1361.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13459);
      tex = new TLatex(1,1.06,"1363.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13460);
      tex = new TLatex(1,1.06,"1365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13461);
      tex = new TLatex(1,1.06,"1367.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13462);
      tex = new TLatex(1,1.06,"1369.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13463);
      tex = new TLatex(1,1.06,"1371.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13464);
      tex = new TLatex(1,1.06,"1373.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13465);
      tex = new TLatex(1,1.06,"1375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13466);
      tex = new TLatex(1,1.06,"1377.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13467);
      tex = new TLatex(1,1.06,"1379.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13468);
      tex = new TLatex(1,1.06,"1381.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13469);
      tex = new TLatex(1,1.06,"1383.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13470);
      tex = new TLatex(1,1.06,"1385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13471);
      tex = new TLatex(1,1.06,"1387.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13472);
      tex = new TLatex(1,1.06,"1389.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13473);
      tex = new TLatex(1,1.06,"1391.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13474);
      tex = new TLatex(1,1.06,"1393.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13475);
      tex = new TLatex(1,1.06,"1395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13476);
      tex = new TLatex(1,1.06,"1397.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13477);
      tex = new TLatex(1,1.06,"1399.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13478);
      tex = new TLatex(1,1.06,"1401.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13479);
      tex = new TLatex(1,1.06,"1403.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13480);
      tex = new TLatex(1,1.06,"1405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13481);
      tex = new TLatex(1,1.06,"1407.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13482);
      tex = new TLatex(1,1.06,"1409.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13483);
      tex = new TLatex(1,1.06,"1411.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13484);
      tex = new TLatex(1,1.06,"1413.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13485);
      tex = new TLatex(1,1.06,"1415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13486);
      tex = new TLatex(1,1.06,"1417.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13487);
      tex = new TLatex(1,1.06,"1419.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13488);
      tex = new TLatex(1,1.06,"1421.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13489);
      tex = new TLatex(1,1.06,"1423.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13490);
      tex = new TLatex(1,1.06,"1425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13491);
      tex = new TLatex(1,1.06,"1427.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13492);
      tex = new TLatex(1,1.06,"1429.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13493);
      tex = new TLatex(1,1.06,"1431.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13494);
      tex = new TLatex(1,1.06,"1433.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13495);
      tex = new TLatex(1,1.06,"1435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13496);
      tex = new TLatex(1,1.06,"1437.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13497);
      tex = new TLatex(1,1.06,"1439.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13498);
      tex = new TLatex(1,1.06,"1441.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13499);
      tex = new TLatex(1,1.06,"1443.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13500);
      tex = new TLatex(1,1.06,"1445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13501);
      tex = new TLatex(1,1.06,"1447.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13502);
      tex = new TLatex(1,1.06,"1449.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13503);
      tex = new TLatex(1,1.06,"1451.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13504);
      tex = new TLatex(1,1.06,"1453.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13505);
      tex = new TLatex(1,1.06,"1455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13506);
      tex = new TLatex(1,1.06,"1457.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13507);
      tex = new TLatex(1,1.06,"1459.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13508);
      tex = new TLatex(1,1.06,"1461.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13509);
      tex = new TLatex(1,1.06,"1463.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13510);
      tex = new TLatex(1,1.06,"1465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13511);
      tex = new TLatex(1,1.06,"1467.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13512);
      tex = new TLatex(1,1.06,"1469.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13513);
      tex = new TLatex(1,1.06,"1471.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13514);
      tex = new TLatex(1,1.06,"1473.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13515);
      tex = new TLatex(1,1.06,"1475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13516);
      tex = new TLatex(1,1.06,"1477.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13517);
      tex = new TLatex(1,1.06,"1479.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13518);
      tex = new TLatex(1,1.06,"1481.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13519);
      tex = new TLatex(1,1.06,"1483.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13520);
      tex = new TLatex(1,1.06,"1485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13521);
      tex = new TLatex(1,1.06,"1487.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13522);
      tex = new TLatex(1,1.06,"1489.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13523);
      tex = new TLatex(1,1.06,"1491.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13524);
      tex = new TLatex(1,1.06,"1493.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13525);
      tex = new TLatex(1,1.06,"1495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13526);
      tex = new TLatex(1,1.06,"1497.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13527);
      tex = new TLatex(1,1.06,"1499.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13528);
      tex = new TLatex(1,1.06,"1501.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13529);
      tex = new TLatex(1,1.06,"1503.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13530);
      tex = new TLatex(1,1.06,"1505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13531);
      tex = new TLatex(1,1.06,"1507.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13532);
      tex = new TLatex(1,1.06,"1509.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13533);
      tex = new TLatex(1,1.06,"1511.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13534);
      tex = new TLatex(1,1.06,"1513.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13535);
      tex = new TLatex(1,1.06,"1515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13536);
      tex = new TLatex(1,1.06,"1517.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13537);
      tex = new TLatex(1,1.06,"1519.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13538);
      tex = new TLatex(1,1.06,"1521.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13539);
      tex = new TLatex(1,1.06,"1523.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13540);
      tex = new TLatex(1,1.06,"1525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13541);
      tex = new TLatex(1,1.06,"1527.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13542);
      tex = new TLatex(1,1.06,"1529.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13543);
      tex = new TLatex(1,1.06,"1531.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13544);
      tex = new TLatex(1,1.06,"1533.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13545);
      tex = new TLatex(1,1.06,"1535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13546);
      tex = new TLatex(1,1.06,"1537.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13547);
      tex = new TLatex(1,1.06,"1539.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13548);
      tex = new TLatex(1,1.06,"1541.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13549);
      tex = new TLatex(1,1.06,"1543.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13550);
      tex = new TLatex(1,1.06,"1545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13551);
      tex = new TLatex(1,1.06,"1547.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13552);
      tex = new TLatex(1,1.06,"1549.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13553);
      tex = new TLatex(1,1.06,"1551.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13554);
      tex = new TLatex(1,1.06,"1553.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13555);
      tex = new TLatex(1,1.06,"1555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13556);
      tex = new TLatex(1,1.06,"1557.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13557);
      tex = new TLatex(1,1.06,"1559.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13558);
      tex = new TLatex(1,1.06,"1561.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13559);
      tex = new TLatex(1,1.06,"1563.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13560);
      tex = new TLatex(1,1.06,"1565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13561);
      tex = new TLatex(1,1.06,"1567.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13562);
      tex = new TLatex(1,1.06,"1569.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13563);
      tex = new TLatex(1,1.06,"1571.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13564);
      tex = new TLatex(1,1.06,"1573.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13565);
      tex = new TLatex(1,1.06,"1575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13566);
      tex = new TLatex(1,1.06,"1577.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13567);
      tex = new TLatex(1,1.06,"1579.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13568);
      tex = new TLatex(1,1.06,"1581.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13569);
      tex = new TLatex(1,1.06,"1583.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13570);
      tex = new TLatex(1,1.06,"1585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13571);
      tex = new TLatex(1,1.06,"1587.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13572);
      tex = new TLatex(1,1.06,"1589.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13573);
      tex = new TLatex(1,1.06,"1591.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13574);
      tex = new TLatex(1,1.06,"1593.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13575);
      tex = new TLatex(1,1.06,"1595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13576);
      tex = new TLatex(1,1.06,"1597.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13577);
      tex = new TLatex(1,1.06,"1599.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13578);
      tex = new TLatex(1,1.06,"1601.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13579);
      tex = new TLatex(1,1.06,"1603.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13580);
      tex = new TLatex(1,1.06,"1605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13581);
      tex = new TLatex(1,1.06,"1607.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13582);
      tex = new TLatex(1,1.06,"1609.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13583);
      tex = new TLatex(1,1.06,"1611.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13584);
      tex = new TLatex(1,1.06,"1613.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13585);
      tex = new TLatex(1,1.06,"1615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13586);
      tex = new TLatex(1,1.06,"1617.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13587);
      tex = new TLatex(1,1.06,"1619.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13588);
      tex = new TLatex(1,1.06,"1621.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13589);
      tex = new TLatex(1,1.06,"1623.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13590);
      tex = new TLatex(1,1.06,"1625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13591);
      tex = new TLatex(1,1.06,"1627.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13592);
      tex = new TLatex(1,1.06,"1629.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13593);
      tex = new TLatex(1,1.06,"1631.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13594);
      tex = new TLatex(1,1.06,"1633.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13595);
      tex = new TLatex(1,1.06,"1635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13596);
      tex = new TLatex(1,1.06,"1637.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13597);
      tex = new TLatex(1,1.06,"1639.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13598);
      tex = new TLatex(1,1.06,"1641.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13599);
      tex = new TLatex(1,1.06,"1643.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13600);
      tex = new TLatex(1,1.06,"1645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13601);
      tex = new TLatex(1,1.06,"1647.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13602);
      tex = new TLatex(1,1.06,"1649.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13603);
      tex = new TLatex(1,1.06,"1651.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13604);
      tex = new TLatex(1,1.06,"1653.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13605);
      tex = new TLatex(1,1.06,"1655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13606);
      tex = new TLatex(1,1.06,"1657.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13607);
      tex = new TLatex(1,1.06,"1659.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13608);
      tex = new TLatex(1,1.06,"1661.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13609);
      tex = new TLatex(1,1.06,"1663.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13610);
      tex = new TLatex(1,1.06,"1665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13611);
      tex = new TLatex(1,1.06,"1667.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13612);
      tex = new TLatex(1,1.06,"1669.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13613);
      tex = new TLatex(1,1.06,"1671.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13614);
      tex = new TLatex(1,1.06,"1673.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13615);
      tex = new TLatex(1,1.06,"1675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13616);
      tex = new TLatex(1,1.06,"1677.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13617);
      tex = new TLatex(1,1.06,"1679.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13618);
      tex = new TLatex(1,1.06,"1681.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13619);
      tex = new TLatex(1,1.06,"1683.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13620);
      tex = new TLatex(1,1.06,"1685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13621);
      tex = new TLatex(1,1.06,"1687.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13622);
      tex = new TLatex(1,1.06,"1689.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13623);
      tex = new TLatex(1,1.06,"1691.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13624);
      tex = new TLatex(1,1.06,"1693.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13625);
      tex = new TLatex(1,1.06,"1695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13626);
      tex = new TLatex(1,1.06,"1697.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13627);
      tex = new TLatex(1,1.06,"1699.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13628);
      tex = new TLatex(1,1.06,"1701.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13629);
      tex = new TLatex(1,1.06,"1703.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13630);
      tex = new TLatex(1,1.06,"1705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13631);
      tex = new TLatex(1,1.06,"1707.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13632);
      tex = new TLatex(1,1.06,"1709.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13633);
      tex = new TLatex(1,1.06,"1711.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13634);
      tex = new TLatex(1,1.06,"1713.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13635);
      tex = new TLatex(1,1.06,"1715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13636);
      tex = new TLatex(1,1.06,"1717.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13637);
      tex = new TLatex(1,1.06,"1719.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13638);
      tex = new TLatex(1,1.06,"1721.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13639);
      tex = new TLatex(1,1.06,"1723.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13640);
      tex = new TLatex(1,1.06,"1725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13641);
      tex = new TLatex(1,1.06,"1727.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13642);
      tex = new TLatex(1,1.06,"1729.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13643);
      tex = new TLatex(1,1.06,"1731.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13644);
      tex = new TLatex(1,1.06,"1733.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13645);
      tex = new TLatex(1,1.06,"1735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13646);
      tex = new TLatex(1,1.06,"1737.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13647);
      tex = new TLatex(1,1.06,"1739.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13648);
      tex = new TLatex(1,1.06,"1741.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13649);
      tex = new TLatex(1,1.06,"1743.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13650);
      tex = new TLatex(1,1.06,"1745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13651);
      tex = new TLatex(1,1.06,"1747.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13652);
      tex = new TLatex(1,1.06,"1749.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13653);
      tex = new TLatex(1,1.06,"1751.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13654);
      tex = new TLatex(1,1.06,"1753.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13655);
      tex = new TLatex(1,1.06,"1755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13656);
      tex = new TLatex(1,1.06,"1757.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13657);
      tex = new TLatex(1,1.06,"1759.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13658);
      tex = new TLatex(1,1.06,"1761.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13659);
      tex = new TLatex(1,1.06,"1763.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13660);
      tex = new TLatex(1,1.06,"1765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13661);
      tex = new TLatex(1,1.06,"1767.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13662);
      tex = new TLatex(1,1.06,"1769.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13663);
      tex = new TLatex(1,1.06,"1771.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13664);
      tex = new TLatex(1,1.06,"1773.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13665);
      tex = new TLatex(1,1.06,"1775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13666);
      tex = new TLatex(1,1.06,"1777.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13667);
      tex = new TLatex(1,1.06,"1779.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13668);
      tex = new TLatex(1,1.06,"1781.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13669);
      tex = new TLatex(1,1.06,"1783.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13670);
      tex = new TLatex(1,1.06,"1785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13671);
      tex = new TLatex(1,1.06,"1787.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13672);
      tex = new TLatex(1,1.06,"1789.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13673);
      tex = new TLatex(1,1.06,"1791.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13674);
      tex = new TLatex(1,1.06,"1793.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13675);
      tex = new TLatex(1,1.06,"1795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13676);
      tex = new TLatex(1,1.06,"1797.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13677);
      tex = new TLatex(1,1.06,"1799.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13678);
      tex = new TLatex(1,1.06,"1801.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13679);
      tex = new TLatex(1,1.06,"1803.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13680);
      tex = new TLatex(1,1.06,"1805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13681);
      tex = new TLatex(1,1.06,"1807.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13682);
      tex = new TLatex(1,1.06,"1809.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13683);
      tex = new TLatex(1,1.06,"1811.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13684);
      tex = new TLatex(1,1.06,"1813.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13685);
      tex = new TLatex(1,1.06,"1815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13686);
      tex = new TLatex(1,1.06,"1817.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13687);
      tex = new TLatex(1,1.06,"1819.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13688);
      tex = new TLatex(1,1.06,"1821.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13689);
      tex = new TLatex(1,1.06,"1823.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13690);
      tex = new TLatex(1,1.06,"1825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13691);
      tex = new TLatex(1,1.06,"1827.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13692);
      tex = new TLatex(1,1.06,"1829.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13693);
      tex = new TLatex(1,1.06,"1831.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13694);
      tex = new TLatex(1,1.06,"1833.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13695);
      tex = new TLatex(1,1.06,"1835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13696);
      tex = new TLatex(1,1.06,"1837.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13697);
      tex = new TLatex(1,1.06,"1839.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13698);
      tex = new TLatex(1,1.06,"1841.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13699);
      tex = new TLatex(1,1.06,"1843.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13700);
      tex = new TLatex(1,1.06,"1845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13701);
      tex = new TLatex(1,1.06,"1847.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13702);
      tex = new TLatex(1,1.06,"1849.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13703);
      tex = new TLatex(1,1.06,"1851.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13704);
      tex = new TLatex(1,1.06,"1853.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13705);
      tex = new TLatex(1,1.06,"1855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13706);
      tex = new TLatex(1,1.06,"1857.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13707);
      tex = new TLatex(1,1.06,"1859.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13708);
      tex = new TLatex(1,1.06,"1861.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13709);
      tex = new TLatex(1,1.06,"1863.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13710);
      tex = new TLatex(1,1.06,"1865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13711);
      tex = new TLatex(1,1.06,"1867.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13712);
      tex = new TLatex(1,1.06,"1869.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13713);
      tex = new TLatex(1,1.06,"1871.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13714);
      tex = new TLatex(1,1.06,"1873.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13715);
      tex = new TLatex(1,1.06,"1875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13716);
      tex = new TLatex(1,1.06,"1877.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13717);
      tex = new TLatex(1,1.06,"1879.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13718);
      tex = new TLatex(1,1.06,"1881.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13719);
      tex = new TLatex(1,1.06,"1883.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13720);
      tex = new TLatex(1,1.06,"1885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13721);
      tex = new TLatex(1,1.06,"1887.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13722);
      tex = new TLatex(1,1.06,"1889.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13723);
      tex = new TLatex(1,1.06,"1891.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13724);
      tex = new TLatex(1,1.06,"1893.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13725);
      tex = new TLatex(1,1.06,"1895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13726);
      tex = new TLatex(1,1.06,"1897.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13727);
      tex = new TLatex(1,1.06,"1899.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13728);
      tex = new TLatex(1,1.06,"1901.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13729);
      tex = new TLatex(1,1.06,"1903.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13730);
      tex = new TLatex(1,1.06,"1905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13731);
      tex = new TLatex(1,1.06,"1907.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13732);
      tex = new TLatex(1,1.06,"1909.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13733);
      tex = new TLatex(1,1.06,"1911.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13734);
      tex = new TLatex(1,1.06,"1913.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13735);
      tex = new TLatex(1,1.06,"1915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13736);
      tex = new TLatex(1,1.06,"1917.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13737);
      tex = new TLatex(1,1.06,"1919.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13738);
      tex = new TLatex(1,1.06,"1921.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13739);
      tex = new TLatex(1,1.06,"1923.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13740);
      tex = new TLatex(1,1.06,"1925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13741);
      tex = new TLatex(1,1.06,"1927.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13742);
      tex = new TLatex(1,1.06,"1929.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13743);
      tex = new TLatex(1,1.06,"1931.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13744);
      tex = new TLatex(1,1.06,"1933.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13745);
      tex = new TLatex(1,1.06,"1935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13746);
      tex = new TLatex(1,1.06,"1937.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13747);
      tex = new TLatex(1,1.06,"1939.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13748);
      tex = new TLatex(1,1.06,"1941.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13749);
      tex = new TLatex(1,1.06,"1943.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13750);
      tex = new TLatex(1,1.06,"1945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13751);
      tex = new TLatex(1,1.06,"1947.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13752);
      tex = new TLatex(1,1.06,"1949.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13753);
      tex = new TLatex(1,1.06,"1951.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13754);
      tex = new TLatex(1,1.06,"1953.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13755);
      tex = new TLatex(1,1.06,"1955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13756);
      tex = new TLatex(1,1.06,"1957.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13757);
      tex = new TLatex(1,1.06,"1959.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13758);
      tex = new TLatex(1,1.06,"1961.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13759);
      tex = new TLatex(1,1.06,"1963.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13760);
      tex = new TLatex(1,1.06,"1965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13761);
      tex = new TLatex(1,1.06,"1967.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13762);
      tex = new TLatex(1,1.06,"1969.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13763);
      tex = new TLatex(1,1.06,"1971.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13764);
      tex = new TLatex(1,1.06,"1973.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13765);
      tex = new TLatex(1,1.06,"1975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13766);
      tex = new TLatex(1,1.06,"1977.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13767);
      tex = new TLatex(1,1.06,"1979.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13768);
      tex = new TLatex(1,1.06,"1981.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13769);
      tex = new TLatex(1,1.06,"1983.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13770);
      tex = new TLatex(1,1.06,"1985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13771);
      tex = new TLatex(1,1.06,"1987.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13772);
      tex = new TLatex(1,1.06,"1989.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13773);
      tex = new TLatex(1,1.06,"1991.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13774);
      tex = new TLatex(1,1.06,"1993.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13775);
      tex = new TLatex(1,1.06,"1995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13776);
      tex = new TLatex(1,1.06,"1997.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13777);
      tex = new TLatex(1,1.06,"1999.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13778);
   graph->Draw("aw #13735
");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.05, 1.05);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_pt_ljet2_16->Modified();
   ROC_jets_pt_ljet2_16->cd();
   ROC_jets_pt_ljet2_16->SetSelected(ROC_jets_pt_ljet2_16);
}
