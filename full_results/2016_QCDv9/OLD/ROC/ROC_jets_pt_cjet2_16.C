#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_pt_cjet2_16()
{
//=========Macro generated from canvas: ROC_jets_pt_cjet2_16/ROC_jets_pt_cjet2_16
//=========  (Tue Jan 24 10:54:56 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_pt_cjet2_16 = new TCanvas("ROC_jets_pt_cjet2_16", "ROC_jets_pt_cjet2_16",0,0,600,600);
   ROC_jets_pt_cjet2_16->SetHighLightColor(2);
   ROC_jets_pt_cjet2_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_pt_cjet2_16->SetFillColor(0);
   ROC_jets_pt_cjet2_16->SetBorderMode(0);
   ROC_jets_pt_cjet2_16->SetBorderSize(2);
   ROC_jets_pt_cjet2_16->SetGridx();
   ROC_jets_pt_cjet2_16->SetGridy();
   ROC_jets_pt_cjet2_16->SetLeftMargin(0.15709);
   ROC_jets_pt_cjet2_16->SetRightMargin(0.1234783);
   ROC_jets_pt_cjet2_16->SetBottomMargin(0.12);
   ROC_jets_pt_cjet2_16->SetFrameBorderMode(0);
   ROC_jets_pt_cjet2_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx42808[1000] = {
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
   0.04854676,
   0.09879359,
   0.1522689,
   0.2048302,
   0.256668,
   0.3086183,
   0.3576964,
   0.4039979,
   0.4468327,
   0.486449,
   0.525474,
   0.5598949,
   0.5912771,
   0.6198967,
   0.6481649,
   0.6721524,
   0.6959374,
   0.7162356,
   0.7352557,
   0.7532511,
   0.7703862,
   0.7856773,
   0.7999044,
   0.8126578,
   0.8248202,
   0.8361123,
   0.8463137,
   0.8560334,
   0.8649505,
   0.8730527,
   0.8802279,
   0.8878146,
   0.8947074,
   0.9014127,
   0.9071813,
   0.912305,
   0.9171465,
   0.9214138,
   0.9256459,
   0.9298723,
   0.9335809,
   0.9370603,
   0.9403338,
   0.9438547,
   0.9470703,
   0.949625,
   0.9521459,
   0.9547866,
   0.9570329,
   0.9594615,
   0.9616353,
   0.9636585,
   0.9656688,
   0.9673841,
   0.9691936,
   0.9710309,
   0.9727213,
   0.9739091,
   0.9750755,
   0.9762932,
   0.9774458,
   0.9784936,
   0.9795234,
   0.9804737,
   0.9814836,
   0.9822629,
   0.9830555,
   0.9838354,
   0.9845271,
   0.9852692,
   0.9859699,
   0.9864948,
   0.9870928,
   0.98765,
   0.9880181,
   0.9884719,
   0.9889146,
   0.9893794,
   0.9900117,
   0.990574,
   0.9909185,
   0.9913026,
   0.9916747,
   0.9920907,
   0.9923603,
   0.9926972,
   0.9930366,
   0.993429,
   0.9936911,
   0.9940203,
   0.9943257,
   0.9945481,
   0.9947379,
   0.9949673,
   0.9951189,
   0.995312,
   0.9955171,
   0.9956468,
   0.9957944,
   0.9959488,
   0.9961055,
   0.9962848,
   0.9964428,
   0.9965893,
   0.996682,
   0.9967841,
   0.9969072,
   0.9970303,
   0.9971286,
   0.9972208,
   0.9973183,
   0.9973936,
   0.9975011,
   0.9975861,
   0.9977387,
   0.9977999,
   0.9979052,
   0.9979943,
   0.9980468,
   0.9981175,
   0.9981709,
   0.9982427,
   0.9982768,
   0.9983369,
   0.9983756,
   0.99842,
   0.9984496,
   0.9984928,
   0.9985362,
   0.9985704,
   0.9985873,
   0.9986231,
   0.9986427,
   0.9987034,
   0.998751,
   0.9987773,
   0.9988385,
   0.9988818,
   0.9989091,
   0.9989353,
   0.998957,
   0.9989824,
   0.9990206,
   0.9990471,
   0.9990802,
   0.999104,
   0.9991201,
   0.9991419,
   0.9991649,
   0.9991728,
   0.9992046,
   0.9992222,
   0.999244,
   0.9992558,
   0.9992727,
   0.9992906,
   0.9992955,
   0.9993028,
   0.999323,
   0.9993317,
   0.9993511,
   0.999362,
   0.9993803,
   0.9993949,
   0.9994058,
   0.9994182,
   0.9994421,
   0.9994481,
   0.9994554,
   0.9994663,
   0.9994691,
   0.9994723,
   0.9994799,
   0.9994868,
   0.9995157,
   0.9995186,
   0.999525,
   0.9995315,
   0.9995346,
   0.9995375,
   0.9995404,
   0.9995453,
   0.9995515,
   0.9995562,
   0.999559,
   0.9995788,
   0.999582,
   0.9995998,
   0.9996184,
   0.9996231,
   0.9996261,
   0.9996315,
   0.9996478,
   0.9996518,
   0.9996565,
   0.9996611,
   0.9996799,
   0.9996814,
   0.9996826,
   0.9996872,
   0.9996917,
   0.9996968,
   0.9997144,
   0.999728,
   0.9997314,
   0.9997479,
   0.9997487,
   0.9997525,
   0.9997659,
   0.9997676,
   0.9997844,
   0.9997859,
   0.9997904,
   0.9997904,
   0.9997934,
   0.9997951,
   0.9998028,
   0.9998044,
   0.999806,
   0.999809,
   0.9998108,
   0.9998108,
   0.9998108,
   0.9998138,
   0.9998155,
   0.9998171,
   0.9998171,
   0.9998186,
   0.9998218,
   0.9998338,
   0.9998381,
   0.9998381,
   0.9998412,
   0.9998414,
   0.9998422,
   0.9998454,
   0.9998477,
   0.9998492,
   0.9998507,
   0.9998676,
   0.9998691,
   0.9998691,
   0.9998691,
   0.9998691,
   0.9998691,
   0.9998691,
   0.999871,
   0.9998757,
   0.9998757,
   0.9998772,
   0.9998788,
   0.9998788,
   0.9998835,
   0.999885,
   0.999885,
   0.9998864,
   0.9998879,
   0.9998912,
   0.9998969,
   0.9998969,
   0.9999,
   0.9999016,
   0.9999016,
   0.9999016,
   0.9999032,
   0.9999032,
   0.9999033,
   0.9999033,
   0.9999039,
   0.9999055,
   0.9999055,
   0.9999178,
   0.9999178,
   0.9999178,
   0.9999224,
   0.999924,
   0.999939,
   0.999939,
   0.999939,
   0.9999406,
   0.9999406,
   0.9999406,
   0.9999406,
   0.9999406,
   0.9999406,
   0.9999406,
   0.9999406,
   0.9999438,
   0.9999453,
   0.999947,
   0.9999487,
   0.9999487,
   0.9999502,
   0.9999502,
   0.9999502,
   0.9999506,
   0.9999506,
   0.9999506,
   0.9999521,
   0.9999536,
   0.9999536,
   0.9999551,
   0.9999551,
   0.9999551,
   0.9999551,
   0.9999551,
   0.9999551,
   0.9999557,
   0.9999573,
   0.9999573,
   0.9999573,
   0.9999589,
   0.9999589,
   0.9999589,
   0.9999608,
   0.9999608,
   0.9999623,
   0.9999638,
   0.9999638,
   0.9999638,
   0.9999638,
   0.9999638,
   0.9999638,
   0.9999638,
   0.9999638,
   0.9999638,
   0.9999638,
   0.9999638,
   0.9999638,
   0.9999638,
   0.9999638,
   0.9999653,
   0.9999653,
   0.9999653,
   0.9999653,
   0.9999653,
   0.999967,
   0.999967,
   0.999967,
   0.999967,
   0.999967,
   0.999967,
   0.999967,
   0.999967,
   0.999967,
   0.999967,
   0.999967,
   0.999967,
   0.999967,
   0.999967,
   0.999967,
   0.999967,
   0.999967,
   0.9999686,
   0.9999686,
   0.9999686,
   0.9999686,
   0.9999701,
   0.9999701,
   0.9999701,
   0.9999701,
   0.9999701,
   0.9999701,
   0.9999701,
   0.9999701,
   0.9999701,
   0.9999701,
   0.9999701,
   0.9999701,
   0.9999701,
   0.9999701,
   0.9999718,
   0.9999718,
   0.9999718,
   0.9999718,
   0.9999718,
   0.9999837,
   0.9999837,
   0.9999837,
   0.9999837,
   0.9999837,
   0.9999837,
   0.9999837,
   0.9999837,
   0.9999837,
   0.9999837,
   0.9999837,
   0.9999837,
   0.9999837,
   0.9999837,
   0.9999837,
   0.9999837,
   0.9999837,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999955,
   0.9999971,
   0.9999971,
   0.9999971,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999986,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_fy42808[1000] = {
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
   0.2472617,
   0.425343,
   0.5566188,
   0.6535558,
   0.7258187,
   0.7803654,
   0.8218736,
   0.8543994,
   0.8796473,
   0.8995363,
   0.9156049,
   0.928504,
   0.939021,
   0.9476711,
   0.9549053,
   0.9609114,
   0.9659763,
   0.9701627,
   0.9738012,
   0.9769158,
   0.9795645,
   0.9818596,
   0.9838499,
   0.9855777,
   0.9870786,
   0.9883948,
   0.989543,
   0.9905661,
   0.9914627,
   0.992257,
   0.9929729,
   0.9936046,
   0.9941723,
   0.9946816,
   0.9951337,
   0.9955398,
   0.9959051,
   0.9962385,
   0.9965403,
   0.9968098,
   0.9970549,
   0.9972772,
   0.9974813,
   0.9976664,
   0.9978356,
   0.9979891,
   0.9981292,
   0.998259,
   0.9983792,
   0.9984853,
   0.9985879,
   0.9986825,
   0.9987679,
   0.9988464,
   0.9989209,
   0.998989,
   0.9990516,
   0.9991102,
   0.9991637,
   0.9992143,
   0.9992603,
   0.9993057,
   0.999347,
   0.9993846,
   0.9994195,
   0.9994528,
   0.9994839,
   0.9995125,
   0.99954,
   0.9995651,
   0.9995886,
   0.9996116,
   0.9996322,
   0.9996515,
   0.9996696,
   0.9996867,
   0.9997027,
   0.9997178,
   0.9997335,
   0.9997468,
   0.9997594,
   0.9997712,
   0.9997838,
   0.9997943,
   0.9998048,
   0.9998141,
   0.999823,
   0.9998313,
   0.9998392,
   0.9998474,
   0.9998544,
   0.999861,
   0.9998673,
   0.9998732,
   0.9998788,
   0.9998849,
   0.99989,
   0.9998948,
   0.9998993,
   0.9999036,
   0.9999092,
   0.9999131,
   0.9999167,
   0.9999202,
   0.9999235,
   0.9999266,
   0.9999296,
   0.9999325,
   0.9999352,
   0.9999378,
   0.9999402,
   0.9999425,
   0.9999448,
   0.9999468,
   0.9999488,
   0.9999508,
   0.9999527,
   0.9999545,
   0.9999562,
   0.9999578,
   0.9999593,
   0.9999608,
   0.999963,
   0.9999643,
   0.9999656,
   0.9999669,
   0.9999681,
   0.9999692,
   0.9999703,
   0.9999713,
   0.9999723,
   0.9999733,
   0.9999742,
   0.9999751,
   0.999976,
   0.9999768,
   0.9999776,
   0.9999784,
   0.9999791,
   0.9999798,
   0.9999805,
   0.9999811,
   0.9999817,
   0.9999823,
   0.9999829,
   0.9999835,
   0.999984,
   0.9999845,
   0.999985,
   0.9999855,
   0.999986,
   0.9999864,
   0.9999869,
   0.9999873,
   0.9999877,
   0.9999881,
   0.9999884,
   0.9999888,
   0.9999892,
   0.9999895,
   0.9999898,
   0.9999901,
   0.9999904,
   0.9999907,
   0.999991,
   0.9999913,
   0.9999916,
   0.9999918,
   0.9999921,
   0.9999923,
   0.9999926,
   0.9999928,
   0.999993,
   0.9999932,
   0.9999934,
   0.9999936,
   0.9999938,
   0.999994,
   0.9999942,
   0.9999943,
   0.9999945,
   0.9999947,
   0.9999948,
   0.999995,
   0.9999951,
   0.9999953,
   0.9999954,
   0.9999955,
   0.9999957,
   0.9999958,
   0.9999959,
   0.999996,
   0.9999961,
   0.9999962,
   0.9999964,
   0.9999965,
   0.9999966,
   0.9999967,
   0.9999968,
   0.9999968,
   0.9999969,
   0.999997,
   0.9999971,
   0.9999972,
   0.9999973,
   0.9999974,
   0.9999974,
   0.9999975,
   0.9999976,
   0.9999976,
   0.9999977,
   0.9999978,
   0.9999978,
   0.9999979,
   0.9999979,
   0.999998,
   0.9999981,
   0.9999981,
   0.9999982,
   0.9999982,
   0.9999983,
   0.9999983,
   0.9999984,
   0.9999984,
   0.9999984,
   0.9999985,
   0.9999985,
   0.9999986,
   0.9999986,
   0.9999986,
   0.9999987,
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
   0.999999,
   0.9999991,
   0.9999991,
   0.9999991,
   0.9999991,
   0.9999992,
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
   0.9999994,
   0.9999995,
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
   1};
   TGraph *graph = new TGraph(1000,Graph_fx42808,Graph_fy42808);
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
   
   TH1F *Graph_Graph42808 = new TH1F("Graph_Graph42808","",1000,0,1.1);
   Graph_Graph42808->SetMinimum(0);
   Graph_Graph42808->SetMaximum(1.1);
   Graph_Graph42808->SetDirectory(0);
   Graph_Graph42808->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph42808->SetLineColor(ci);
   Graph_Graph42808->GetXaxis()->SetLabelFont(42);
   Graph_Graph42808->GetXaxis()->SetTitleOffset(1);
   Graph_Graph42808->GetXaxis()->SetTitleFont(42);
   Graph_Graph42808->GetYaxis()->SetLabelFont(42);
   Graph_Graph42808->GetYaxis()->SetTitleFont(42);
   Graph_Graph42808->GetZaxis()->SetLabelFont(42);
   Graph_Graph42808->GetZaxis()->SetTitleOffset(1);
   Graph_Graph42808->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph42808);
   
   TLatex *   tex = new TLatex(0,0.06,"1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42809);
      tex = new TLatex(0,0.06,"3.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42810);
      tex = new TLatex(0,0.06,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42811);
      tex = new TLatex(0,0.06,"7.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42812);
      tex = new TLatex(0,0.06,"9.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42813);
      tex = new TLatex(0,0.06,"11.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42814);
      tex = new TLatex(0,0.06,"13.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42815);
      tex = new TLatex(0,0.06,"15.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42816);
      tex = new TLatex(0,0.06,"17.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42817);
      tex = new TLatex(0,0.06,"19.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42818);
      tex = new TLatex(0,0.06,"21.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42819);
      tex = new TLatex(0,0.06,"23.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42820);
      tex = new TLatex(0,0.06,"25.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42821);
      tex = new TLatex(0,0.06,"27.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42822);
      tex = new TLatex(0,0.06,"29.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42823);
      tex = new TLatex(0,0.06,"31.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42824);
      tex = new TLatex(0.04854676,0.3072617,"33.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42825);
      tex = new TLatex(0.09879359,0.485343,"35.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42826);
      tex = new TLatex(0.1522689,0.6166188,"37.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42827);
      tex = new TLatex(0.2048302,0.7135558,"39.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42828);
      tex = new TLatex(0.256668,0.7858187,"41.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42829);
      tex = new TLatex(0.3086183,0.8403654,"43.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42830);
      tex = new TLatex(0.3576964,0.8818736,"45.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42831);
      tex = new TLatex(0.4039979,0.9143994,"47.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42832);
      tex = new TLatex(0.4468327,0.9396473,"49.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42833);
      tex = new TLatex(0.486449,0.9595363,"51.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42834);
      tex = new TLatex(0.525474,0.9756049,"53.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42835);
      tex = new TLatex(0.5598949,0.988504,"55.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42836);
      tex = new TLatex(0.5912771,0.999021,"57.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42837);
      tex = new TLatex(0.6198967,1.007671,"59.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42838);
      tex = new TLatex(0.6481649,1.014905,"61.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42839);
      tex = new TLatex(0.6721524,1.020911,"63.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42840);
      tex = new TLatex(0.6959374,1.025976,"65.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42841);
      tex = new TLatex(0.7162356,1.030163,"67.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42842);
      tex = new TLatex(0.7352557,1.033801,"69.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42843);
      tex = new TLatex(0.7532511,1.036916,"71.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42844);
      tex = new TLatex(0.7703862,1.039565,"73.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42845);
      tex = new TLatex(0.7856773,1.04186,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42846);
      tex = new TLatex(0.7999044,1.04385,"77.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42847);
      tex = new TLatex(0.8126578,1.045578,"79.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42848);
      tex = new TLatex(0.8248202,1.047079,"81.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42849);
      tex = new TLatex(0.8361123,1.048395,"83.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42850);
      tex = new TLatex(0.8463137,1.049543,"85.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42851);
      tex = new TLatex(0.8560334,1.050566,"87.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42852);
      tex = new TLatex(0.8649505,1.051463,"89.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42853);
      tex = new TLatex(0.8730527,1.052257,"91.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42854);
      tex = new TLatex(0.8802279,1.052973,"93.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42855);
      tex = new TLatex(0.8878146,1.053605,"95.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42856);
      tex = new TLatex(0.8947074,1.054172,"97.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42857);
      tex = new TLatex(0.9014127,1.054682,"99.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42858);
      tex = new TLatex(0.9071813,1.055134,"101.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42859);
      tex = new TLatex(0.912305,1.05554,"103.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42860);
      tex = new TLatex(0.9171465,1.055905,"105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42861);
      tex = new TLatex(0.9214138,1.056238,"107.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42862);
      tex = new TLatex(0.9256459,1.05654,"109.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42863);
      tex = new TLatex(0.9298723,1.05681,"111.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42864);
      tex = new TLatex(0.9335809,1.057055,"113.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42865);
      tex = new TLatex(0.9370603,1.057277,"115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42866);
      tex = new TLatex(0.9403338,1.057481,"117.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42867);
      tex = new TLatex(0.9438547,1.057666,"119.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42868);
      tex = new TLatex(0.9470703,1.057836,"121.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42869);
      tex = new TLatex(0.949625,1.057989,"123.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42870);
      tex = new TLatex(0.9521459,1.058129,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42871);
      tex = new TLatex(0.9547866,1.058259,"127.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42872);
      tex = new TLatex(0.9570329,1.058379,"129.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42873);
      tex = new TLatex(0.9594615,1.058485,"131.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42874);
      tex = new TLatex(0.9616353,1.058588,"133.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42875);
      tex = new TLatex(0.9636585,1.058682,"135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42876);
      tex = new TLatex(0.9656688,1.058768,"137.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42877);
      tex = new TLatex(0.9673841,1.058846,"139.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42878);
      tex = new TLatex(0.9691936,1.058921,"141.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42879);
      tex = new TLatex(0.9710309,1.058989,"143.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42880);
      tex = new TLatex(0.9727213,1.059052,"145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42881);
      tex = new TLatex(0.9739091,1.05911,"147.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42882);
      tex = new TLatex(0.9750755,1.059164,"149.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42883);
      tex = new TLatex(0.9762932,1.059214,"151.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42884);
      tex = new TLatex(0.9774458,1.05926,"153.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42885);
      tex = new TLatex(0.9784936,1.059306,"155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42886);
      tex = new TLatex(0.9795234,1.059347,"157.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42887);
      tex = new TLatex(0.9804737,1.059385,"159.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42888);
      tex = new TLatex(0.9814836,1.059419,"161.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42889);
      tex = new TLatex(0.9822629,1.059453,"163.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42890);
      tex = new TLatex(0.9830555,1.059484,"165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42891);
      tex = new TLatex(0.9838354,1.059512,"167.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42892);
      tex = new TLatex(0.9845271,1.05954,"169.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42893);
      tex = new TLatex(0.9852692,1.059565,"171.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42894);
      tex = new TLatex(0.9859699,1.059589,"173.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42895);
      tex = new TLatex(0.9864948,1.059612,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42896);
      tex = new TLatex(0.9870928,1.059632,"177.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42897);
      tex = new TLatex(0.98765,1.059651,"179.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42898);
      tex = new TLatex(0.9880181,1.05967,"181.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42899);
      tex = new TLatex(0.9884719,1.059687,"183.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42900);
      tex = new TLatex(0.9889146,1.059703,"185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42901);
      tex = new TLatex(0.9893794,1.059718,"187.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42902);
      tex = new TLatex(0.9900117,1.059734,"189.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42903);
      tex = new TLatex(0.990574,1.059747,"191.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42904);
      tex = new TLatex(0.9909185,1.059759,"193.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42905);
      tex = new TLatex(0.9913026,1.059771,"195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42906);
      tex = new TLatex(0.9916747,1.059784,"197.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42907);
      tex = new TLatex(0.9920907,1.059794,"199.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42908);
      tex = new TLatex(0.9923603,1.059805,"201.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42909);
      tex = new TLatex(0.9926972,1.059814,"203.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42910);
      tex = new TLatex(0.9930366,1.059823,"205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42911);
      tex = new TLatex(0.993429,1.059831,"207.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42912);
      tex = new TLatex(0.9936911,1.059839,"209.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42913);
      tex = new TLatex(0.9940203,1.059847,"211.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42914);
      tex = new TLatex(0.9943257,1.059854,"213.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42915);
      tex = new TLatex(0.9945481,1.059861,"215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42916);
      tex = new TLatex(0.9947379,1.059867,"217.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42917);
      tex = new TLatex(0.9949673,1.059873,"219.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42918);
      tex = new TLatex(0.9951189,1.059879,"221.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42919);
      tex = new TLatex(0.995312,1.059885,"223.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42920);
      tex = new TLatex(0.9955171,1.05989,"225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42921);
      tex = new TLatex(0.9956468,1.059895,"227.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42922);
      tex = new TLatex(0.9957944,1.059899,"229.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42923);
      tex = new TLatex(0.9959488,1.059904,"231.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42924);
      tex = new TLatex(0.9961055,1.059909,"233.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42925);
      tex = new TLatex(0.9962848,1.059913,"235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42926);
      tex = new TLatex(0.9964428,1.059917,"237.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42927);
      tex = new TLatex(0.9965893,1.05992,"239.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42928);
      tex = new TLatex(0.996682,1.059923,"241.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42929);
      tex = new TLatex(0.9967841,1.059927,"243.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42930);
      tex = new TLatex(0.9969072,1.05993,"245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42931);
      tex = new TLatex(0.9970303,1.059932,"247.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42932);
      tex = new TLatex(0.9971286,1.059935,"249.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42933);
      tex = new TLatex(0.9972208,1.059938,"251.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42934);
      tex = new TLatex(0.9973183,1.05994,"253.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42935);
      tex = new TLatex(0.9973936,1.059942,"255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42936);
      tex = new TLatex(0.9975011,1.059945,"257.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42937);
      tex = new TLatex(0.9975861,1.059947,"259.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42938);
      tex = new TLatex(0.9977387,1.059949,"261.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42939);
      tex = new TLatex(0.9977999,1.059951,"263.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42940);
      tex = new TLatex(0.9979052,1.059953,"265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42941);
      tex = new TLatex(0.9979943,1.059954,"267.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42942);
      tex = new TLatex(0.9980468,1.059956,"269.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42943);
      tex = new TLatex(0.9981175,1.059958,"271.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42944);
      tex = new TLatex(0.9981709,1.059959,"273.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42945);
      tex = new TLatex(0.9982427,1.059961,"275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42946);
      tex = new TLatex(0.9982768,1.059963,"277.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42947);
      tex = new TLatex(0.9983369,1.059964,"279.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42948);
      tex = new TLatex(0.9983756,1.059966,"281.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42949);
      tex = new TLatex(0.99842,1.059967,"283.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42950);
      tex = new TLatex(0.9984496,1.059968,"285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42951);
      tex = new TLatex(0.9984928,1.059969,"287.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42952);
      tex = new TLatex(0.9985362,1.05997,"289.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42953);
      tex = new TLatex(0.9985704,1.059971,"291.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42954);
      tex = new TLatex(0.9985873,1.059972,"293.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42955);
      tex = new TLatex(0.9986231,1.059973,"295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42956);
      tex = new TLatex(0.9986427,1.059974,"297.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42957);
      tex = new TLatex(0.9987034,1.059975,"299.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42958);
      tex = new TLatex(0.998751,1.059976,"301.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42959);
      tex = new TLatex(0.9987773,1.059977,"303.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42960);
      tex = new TLatex(0.9988385,1.059978,"305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42961);
      tex = new TLatex(0.9988818,1.059978,"307.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42962);
      tex = new TLatex(0.9989091,1.059979,"309.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42963);
      tex = new TLatex(0.9989353,1.05998,"311.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42964);
      tex = new TLatex(0.998957,1.05998,"313.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42965);
      tex = new TLatex(0.9989824,1.059981,"315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42966);
      tex = new TLatex(0.9990206,1.059982,"317.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42967);
      tex = new TLatex(0.9990471,1.059982,"319.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42968);
      tex = new TLatex(0.9990802,1.059983,"321.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42969);
      tex = new TLatex(0.999104,1.059983,"323.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42970);
      tex = new TLatex(0.9991201,1.059984,"325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42971);
      tex = new TLatex(0.9991419,1.059985,"327.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42972);
      tex = new TLatex(0.9991649,1.059985,"329.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42973);
      tex = new TLatex(0.9991728,1.059986,"331.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42974);
      tex = new TLatex(0.9992046,1.059986,"333.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42975);
      tex = new TLatex(0.9992222,1.059986,"335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42976);
      tex = new TLatex(0.999244,1.059987,"337.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42977);
      tex = new TLatex(0.9992558,1.059987,"339.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42978);
      tex = new TLatex(0.9992727,1.059988,"341.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42979);
      tex = new TLatex(0.9992906,1.059988,"343.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42980);
      tex = new TLatex(0.9992955,1.059988,"345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42981);
      tex = new TLatex(0.9993028,1.059989,"347.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42982);
      tex = new TLatex(0.999323,1.059989,"349.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42983);
      tex = new TLatex(0.9993317,1.059989,"351.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42984);
      tex = new TLatex(0.9993511,1.05999,"353.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42985);
      tex = new TLatex(0.999362,1.05999,"355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42986);
      tex = new TLatex(0.9993803,1.05999,"357.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42987);
      tex = new TLatex(0.9993949,1.059991,"359.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42988);
      tex = new TLatex(0.9994058,1.059991,"361.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42989);
      tex = new TLatex(0.9994182,1.059991,"363.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42990);
      tex = new TLatex(0.9994421,1.059992,"365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42991);
      tex = new TLatex(0.9994481,1.059992,"367.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42992);
      tex = new TLatex(0.9994554,1.059992,"369.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42993);
      tex = new TLatex(0.9994663,1.059992,"371.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42994);
      tex = new TLatex(0.9994691,1.059993,"373.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42995);
      tex = new TLatex(0.9994723,1.059993,"375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42996);
      tex = new TLatex(0.9994799,1.059993,"377.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42997);
      tex = new TLatex(0.9994868,1.059993,"379.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42998);
      tex = new TLatex(0.9995157,1.059993,"381.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(42999);
      tex = new TLatex(0.9995186,1.059994,"383.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43000);
      tex = new TLatex(0.999525,1.059994,"385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43001);
      tex = new TLatex(0.9995315,1.059994,"387.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43002);
      tex = new TLatex(0.9995346,1.059994,"389.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43003);
      tex = new TLatex(0.9995375,1.059994,"391.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43004);
      tex = new TLatex(0.9995404,1.059995,"393.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43005);
      tex = new TLatex(0.9995453,1.059995,"395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43006);
      tex = new TLatex(0.9995515,1.059995,"397.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43007);
      tex = new TLatex(0.9995562,1.059995,"399.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43008);
      tex = new TLatex(0.999559,1.059995,"401.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43009);
      tex = new TLatex(0.9995788,1.059995,"403.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43010);
      tex = new TLatex(0.999582,1.059995,"405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43011);
      tex = new TLatex(0.9995998,1.059996,"407.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43012);
      tex = new TLatex(0.9996184,1.059996,"409.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43013);
      tex = new TLatex(0.9996231,1.059996,"411.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43014);
      tex = new TLatex(0.9996261,1.059996,"413.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43015);
      tex = new TLatex(0.9996315,1.059996,"415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43016);
      tex = new TLatex(0.9996478,1.059996,"417.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43017);
      tex = new TLatex(0.9996518,1.059996,"419.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43018);
      tex = new TLatex(0.9996565,1.059996,"421.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43019);
      tex = new TLatex(0.9996611,1.059996,"423.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43020);
      tex = new TLatex(0.9996799,1.059997,"425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43021);
      tex = new TLatex(0.9996814,1.059997,"427.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43022);
      tex = new TLatex(0.9996826,1.059997,"429.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43023);
      tex = new TLatex(0.9996872,1.059997,"431.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43024);
      tex = new TLatex(0.9996917,1.059997,"433.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43025);
      tex = new TLatex(0.9996968,1.059997,"435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43026);
      tex = new TLatex(0.9997144,1.059997,"437.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43027);
      tex = new TLatex(0.999728,1.059997,"439.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43028);
      tex = new TLatex(0.9997314,1.059997,"441.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43029);
      tex = new TLatex(0.9997479,1.059997,"443.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43030);
      tex = new TLatex(0.9997487,1.059997,"445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43031);
      tex = new TLatex(0.9997525,1.059997,"447.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43032);
      tex = new TLatex(0.9997659,1.059998,"449.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43033);
      tex = new TLatex(0.9997676,1.059998,"451.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43034);
      tex = new TLatex(0.9997844,1.059998,"453.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43035);
      tex = new TLatex(0.9997859,1.059998,"455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43036);
      tex = new TLatex(0.9997904,1.059998,"457.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43037);
      tex = new TLatex(0.9997904,1.059998,"459.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43038);
      tex = new TLatex(0.9997934,1.059998,"461.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43039);
      tex = new TLatex(0.9997951,1.059998,"463.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43040);
      tex = new TLatex(0.9998028,1.059998,"465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43041);
      tex = new TLatex(0.9998044,1.059998,"467.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43042);
      tex = new TLatex(0.999806,1.059998,"469.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43043);
      tex = new TLatex(0.999809,1.059998,"471.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43044);
      tex = new TLatex(0.9998108,1.059998,"473.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43045);
      tex = new TLatex(0.9998108,1.059998,"475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43046);
      tex = new TLatex(0.9998108,1.059998,"477.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43047);
      tex = new TLatex(0.9998138,1.059998,"479.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43048);
      tex = new TLatex(0.9998155,1.059998,"481.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43049);
      tex = new TLatex(0.9998171,1.059998,"483.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43050);
      tex = new TLatex(0.9998171,1.059999,"485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43051);
      tex = new TLatex(0.9998186,1.059999,"487.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43052);
      tex = new TLatex(0.9998218,1.059999,"489.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43053);
      tex = new TLatex(0.9998338,1.059999,"491.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43054);
      tex = new TLatex(0.9998381,1.059999,"493.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43055);
      tex = new TLatex(0.9998381,1.059999,"495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43056);
      tex = new TLatex(0.9998412,1.059999,"497.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43057);
      tex = new TLatex(0.9998414,1.059999,"499.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43058);
      tex = new TLatex(0.9998422,1.059999,"501.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43059);
      tex = new TLatex(0.9998454,1.059999,"503.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43060);
      tex = new TLatex(0.9998477,1.059999,"505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43061);
      tex = new TLatex(0.9998492,1.059999,"507.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43062);
      tex = new TLatex(0.9998507,1.059999,"509.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43063);
      tex = new TLatex(0.9998676,1.059999,"511.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43064);
      tex = new TLatex(0.9998691,1.059999,"513.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43065);
      tex = new TLatex(0.9998691,1.059999,"515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43066);
      tex = new TLatex(0.9998691,1.059999,"517.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43067);
      tex = new TLatex(0.9998691,1.059999,"519.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43068);
      tex = new TLatex(0.9998691,1.059999,"521.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43069);
      tex = new TLatex(0.9998691,1.059999,"523.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43070);
      tex = new TLatex(0.999871,1.059999,"525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43071);
      tex = new TLatex(0.9998757,1.059999,"527.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43072);
      tex = new TLatex(0.9998757,1.059999,"529.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43073);
      tex = new TLatex(0.9998772,1.059999,"531.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43074);
      tex = new TLatex(0.9998788,1.059999,"533.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43075);
      tex = new TLatex(0.9998788,1.059999,"535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43076);
      tex = new TLatex(0.9998835,1.059999,"537.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43077);
      tex = new TLatex(0.999885,1.059999,"539.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43078);
      tex = new TLatex(0.999885,1.059999,"541.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43079);
      tex = new TLatex(0.9998864,1.059999,"543.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43080);
      tex = new TLatex(0.9998879,1.059999,"545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43081);
      tex = new TLatex(0.9998912,1.059999,"547.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43082);
      tex = new TLatex(0.9998969,1.059999,"549.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43083);
      tex = new TLatex(0.9998969,1.059999,"551.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43084);
      tex = new TLatex(0.9999,1.059999,"553.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43085);
      tex = new TLatex(0.9999016,1.059999,"555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43086);
      tex = new TLatex(0.9999016,1.059999,"557.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43087);
      tex = new TLatex(0.9999016,1.059999,"559.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43088);
      tex = new TLatex(0.9999032,1.059999,"561.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43089);
      tex = new TLatex(0.9999032,1.059999,"563.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43090);
      tex = new TLatex(0.9999033,1.059999,"565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43091);
      tex = new TLatex(0.9999033,1.059999,"567.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43092);
      tex = new TLatex(0.9999039,1.06,"569.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43093);
      tex = new TLatex(0.9999055,1.06,"571.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43094);
      tex = new TLatex(0.9999055,1.06,"573.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43095);
      tex = new TLatex(0.9999178,1.06,"575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43096);
      tex = new TLatex(0.9999178,1.06,"577.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43097);
      tex = new TLatex(0.9999178,1.06,"579.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43098);
      tex = new TLatex(0.9999224,1.06,"581.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43099);
      tex = new TLatex(0.999924,1.06,"583.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43100);
      tex = new TLatex(0.999939,1.06,"585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43101);
      tex = new TLatex(0.999939,1.06,"587.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43102);
      tex = new TLatex(0.999939,1.06,"589.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43103);
      tex = new TLatex(0.9999406,1.06,"591.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43104);
      tex = new TLatex(0.9999406,1.06,"593.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43105);
      tex = new TLatex(0.9999406,1.06,"595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43106);
      tex = new TLatex(0.9999406,1.06,"597.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43107);
      tex = new TLatex(0.9999406,1.06,"599.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43108);
      tex = new TLatex(0.9999406,1.06,"601.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43109);
      tex = new TLatex(0.9999406,1.06,"603.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43110);
      tex = new TLatex(0.9999406,1.06,"605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43111);
      tex = new TLatex(0.9999438,1.06,"607.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43112);
      tex = new TLatex(0.9999453,1.06,"609.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43113);
      tex = new TLatex(0.999947,1.06,"611.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43114);
      tex = new TLatex(0.9999487,1.06,"613.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43115);
      tex = new TLatex(0.9999487,1.06,"615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43116);
      tex = new TLatex(0.9999502,1.06,"617.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43117);
      tex = new TLatex(0.9999502,1.06,"619.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43118);
      tex = new TLatex(0.9999502,1.06,"621.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43119);
      tex = new TLatex(0.9999506,1.06,"623.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43120);
      tex = new TLatex(0.9999506,1.06,"625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43121);
      tex = new TLatex(0.9999506,1.06,"627.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43122);
      tex = new TLatex(0.9999521,1.06,"629.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43123);
      tex = new TLatex(0.9999536,1.06,"631.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43124);
      tex = new TLatex(0.9999536,1.06,"633.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43125);
      tex = new TLatex(0.9999551,1.06,"635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43126);
      tex = new TLatex(0.9999551,1.06,"637.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43127);
      tex = new TLatex(0.9999551,1.06,"639.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43128);
      tex = new TLatex(0.9999551,1.06,"641.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43129);
      tex = new TLatex(0.9999551,1.06,"643.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43130);
      tex = new TLatex(0.9999551,1.06,"645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43131);
      tex = new TLatex(0.9999557,1.06,"647.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43132);
      tex = new TLatex(0.9999573,1.06,"649.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43133);
      tex = new TLatex(0.9999573,1.06,"651.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43134);
      tex = new TLatex(0.9999573,1.06,"653.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43135);
      tex = new TLatex(0.9999589,1.06,"655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43136);
      tex = new TLatex(0.9999589,1.06,"657.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43137);
      tex = new TLatex(0.9999589,1.06,"659.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43138);
      tex = new TLatex(0.9999608,1.06,"661.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43139);
      tex = new TLatex(0.9999608,1.06,"663.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43140);
      tex = new TLatex(0.9999623,1.06,"665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43141);
      tex = new TLatex(0.9999638,1.06,"667.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43142);
      tex = new TLatex(0.9999638,1.06,"669.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43143);
      tex = new TLatex(0.9999638,1.06,"671.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43144);
      tex = new TLatex(0.9999638,1.06,"673.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43145);
      tex = new TLatex(0.9999638,1.06,"675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43146);
      tex = new TLatex(0.9999638,1.06,"677.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43147);
      tex = new TLatex(0.9999638,1.06,"679.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43148);
      tex = new TLatex(0.9999638,1.06,"681.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43149);
      tex = new TLatex(0.9999638,1.06,"683.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43150);
      tex = new TLatex(0.9999638,1.06,"685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43151);
      tex = new TLatex(0.9999638,1.06,"687.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43152);
      tex = new TLatex(0.9999638,1.06,"689.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43153);
      tex = new TLatex(0.9999638,1.06,"691.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43154);
      tex = new TLatex(0.9999638,1.06,"693.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43155);
      tex = new TLatex(0.9999653,1.06,"695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43156);
      tex = new TLatex(0.9999653,1.06,"697.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43157);
      tex = new TLatex(0.9999653,1.06,"699.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43158);
      tex = new TLatex(0.9999653,1.06,"701.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43159);
      tex = new TLatex(0.9999653,1.06,"703.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43160);
      tex = new TLatex(0.999967,1.06,"705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43161);
      tex = new TLatex(0.999967,1.06,"707.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43162);
      tex = new TLatex(0.999967,1.06,"709.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43163);
      tex = new TLatex(0.999967,1.06,"711.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43164);
      tex = new TLatex(0.999967,1.06,"713.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43165);
      tex = new TLatex(0.999967,1.06,"715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43166);
      tex = new TLatex(0.999967,1.06,"717.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43167);
      tex = new TLatex(0.999967,1.06,"719.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43168);
      tex = new TLatex(0.999967,1.06,"721.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43169);
      tex = new TLatex(0.999967,1.06,"723.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43170);
      tex = new TLatex(0.999967,1.06,"725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43171);
      tex = new TLatex(0.999967,1.06,"727.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43172);
      tex = new TLatex(0.999967,1.06,"729.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43173);
      tex = new TLatex(0.999967,1.06,"731.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43174);
      tex = new TLatex(0.999967,1.06,"733.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43175);
      tex = new TLatex(0.999967,1.06,"735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43176);
      tex = new TLatex(0.999967,1.06,"737.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43177);
      tex = new TLatex(0.9999686,1.06,"739.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43178);
      tex = new TLatex(0.9999686,1.06,"741.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43179);
      tex = new TLatex(0.9999686,1.06,"743.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43180);
      tex = new TLatex(0.9999686,1.06,"745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43181);
      tex = new TLatex(0.9999701,1.06,"747.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43182);
      tex = new TLatex(0.9999701,1.06,"749.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43183);
      tex = new TLatex(0.9999701,1.06,"751.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43184);
      tex = new TLatex(0.9999701,1.06,"753.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43185);
      tex = new TLatex(0.9999701,1.06,"755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43186);
      tex = new TLatex(0.9999701,1.06,"757.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43187);
      tex = new TLatex(0.9999701,1.06,"759.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43188);
      tex = new TLatex(0.9999701,1.06,"761.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43189);
      tex = new TLatex(0.9999701,1.06,"763.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43190);
      tex = new TLatex(0.9999701,1.06,"765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43191);
      tex = new TLatex(0.9999701,1.06,"767.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43192);
      tex = new TLatex(0.9999701,1.06,"769.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43193);
      tex = new TLatex(0.9999701,1.06,"771.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43194);
      tex = new TLatex(0.9999701,1.06,"773.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43195);
      tex = new TLatex(0.9999718,1.06,"775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43196);
      tex = new TLatex(0.9999718,1.06,"777.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43197);
      tex = new TLatex(0.9999718,1.06,"779.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43198);
      tex = new TLatex(0.9999718,1.06,"781.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43199);
      tex = new TLatex(0.9999718,1.06,"783.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43200);
      tex = new TLatex(0.9999837,1.06,"785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43201);
      tex = new TLatex(0.9999837,1.06,"787.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43202);
      tex = new TLatex(0.9999837,1.06,"789.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43203);
      tex = new TLatex(0.9999837,1.06,"791.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43204);
      tex = new TLatex(0.9999837,1.06,"793.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43205);
      tex = new TLatex(0.9999837,1.06,"795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43206);
      tex = new TLatex(0.9999837,1.06,"797.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43207);
      tex = new TLatex(0.9999837,1.06,"799.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43208);
      tex = new TLatex(0.9999837,1.06,"801.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43209);
      tex = new TLatex(0.9999837,1.06,"803.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43210);
      tex = new TLatex(0.9999837,1.06,"805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43211);
      tex = new TLatex(0.9999837,1.06,"807.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43212);
      tex = new TLatex(0.9999837,1.06,"809.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43213);
      tex = new TLatex(0.9999837,1.06,"811.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43214);
      tex = new TLatex(0.9999837,1.06,"813.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43215);
      tex = new TLatex(0.9999837,1.06,"815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43216);
      tex = new TLatex(0.9999837,1.06,"817.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43217);
      tex = new TLatex(0.9999955,1.06,"819.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43218);
      tex = new TLatex(0.9999955,1.06,"821.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43219);
      tex = new TLatex(0.9999955,1.06,"823.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43220);
      tex = new TLatex(0.9999955,1.06,"825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43221);
      tex = new TLatex(0.9999955,1.06,"827.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43222);
      tex = new TLatex(0.9999955,1.06,"829.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43223);
      tex = new TLatex(0.9999955,1.06,"831.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43224);
      tex = new TLatex(0.9999955,1.06,"833.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43225);
      tex = new TLatex(0.9999955,1.06,"835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43226);
      tex = new TLatex(0.9999955,1.06,"837.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43227);
      tex = new TLatex(0.9999955,1.06,"839.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43228);
      tex = new TLatex(0.9999955,1.06,"841.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43229);
      tex = new TLatex(0.9999955,1.06,"843.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43230);
      tex = new TLatex(0.9999955,1.06,"845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43231);
      tex = new TLatex(0.9999955,1.06,"847.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43232);
      tex = new TLatex(0.9999955,1.06,"849.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43233);
      tex = new TLatex(0.9999955,1.06,"851.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43234);
      tex = new TLatex(0.9999955,1.06,"853.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43235);
      tex = new TLatex(0.9999955,1.06,"855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43236);
      tex = new TLatex(0.9999955,1.06,"857.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43237);
      tex = new TLatex(0.9999955,1.06,"859.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43238);
      tex = new TLatex(0.9999955,1.06,"861.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43239);
      tex = new TLatex(0.9999955,1.06,"863.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43240);
      tex = new TLatex(0.9999955,1.06,"865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43241);
      tex = new TLatex(0.9999955,1.06,"867.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43242);
      tex = new TLatex(0.9999955,1.06,"869.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43243);
      tex = new TLatex(0.9999955,1.06,"871.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43244);
      tex = new TLatex(0.9999955,1.06,"873.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43245);
      tex = new TLatex(0.9999955,1.06,"875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43246);
      tex = new TLatex(0.9999955,1.06,"877.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43247);
      tex = new TLatex(0.9999955,1.06,"879.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43248);
      tex = new TLatex(0.9999955,1.06,"881.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43249);
      tex = new TLatex(0.9999955,1.06,"883.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43250);
      tex = new TLatex(0.9999955,1.06,"885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43251);
      tex = new TLatex(0.9999955,1.06,"887.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43252);
      tex = new TLatex(0.9999955,1.06,"889.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43253);
      tex = new TLatex(0.9999955,1.06,"891.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43254);
      tex = new TLatex(0.9999955,1.06,"893.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43255);
      tex = new TLatex(0.9999955,1.06,"895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43256);
      tex = new TLatex(0.9999955,1.06,"897.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43257);
      tex = new TLatex(0.9999955,1.06,"899.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43258);
      tex = new TLatex(0.9999955,1.06,"901.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43259);
      tex = new TLatex(0.9999955,1.06,"903.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43260);
      tex = new TLatex(0.9999955,1.06,"905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43261);
      tex = new TLatex(0.9999971,1.06,"907.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43262);
      tex = new TLatex(0.9999971,1.06,"909.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43263);
      tex = new TLatex(0.9999971,1.06,"911.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43264);
      tex = new TLatex(0.9999986,1.06,"913.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43265);
      tex = new TLatex(0.9999986,1.06,"915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43266);
      tex = new TLatex(0.9999986,1.06,"917.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43267);
      tex = new TLatex(0.9999986,1.06,"919.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43268);
      tex = new TLatex(0.9999986,1.06,"921.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43269);
      tex = new TLatex(0.9999986,1.06,"923.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43270);
      tex = new TLatex(0.9999986,1.06,"925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43271);
      tex = new TLatex(0.9999986,1.06,"927.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43272);
      tex = new TLatex(0.9999986,1.06,"929.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43273);
      tex = new TLatex(0.9999986,1.06,"931.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43274);
      tex = new TLatex(0.9999986,1.06,"933.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43275);
      tex = new TLatex(0.9999986,1.06,"935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43276);
      tex = new TLatex(0.9999986,1.06,"937.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43277);
      tex = new TLatex(0.9999986,1.06,"939.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43278);
      tex = new TLatex(0.9999986,1.06,"941.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43279);
      tex = new TLatex(0.9999986,1.06,"943.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43280);
      tex = new TLatex(0.9999986,1.06,"945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43281);
      tex = new TLatex(0.9999986,1.06,"947.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43282);
      tex = new TLatex(0.9999986,1.06,"949.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43283);
      tex = new TLatex(0.9999986,1.06,"951.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43284);
      tex = new TLatex(0.9999986,1.06,"953.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43285);
      tex = new TLatex(0.9999986,1.06,"955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43286);
      tex = new TLatex(0.9999986,1.06,"957.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43287);
      tex = new TLatex(0.9999986,1.06,"959.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43288);
      tex = new TLatex(0.9999986,1.06,"961.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43289);
      tex = new TLatex(0.9999986,1.06,"963.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43290);
      tex = new TLatex(0.9999986,1.06,"965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43291);
      tex = new TLatex(0.9999986,1.06,"967.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43292);
      tex = new TLatex(0.9999986,1.06,"969.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43293);
      tex = new TLatex(0.9999986,1.06,"971.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43294);
      tex = new TLatex(0.9999986,1.06,"973.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43295);
      tex = new TLatex(0.9999986,1.06,"975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43296);
      tex = new TLatex(0.9999986,1.06,"977.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43297);
      tex = new TLatex(0.9999986,1.06,"979.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43298);
      tex = new TLatex(0.9999986,1.06,"981.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43299);
      tex = new TLatex(1,1.06,"983.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43300);
      tex = new TLatex(1,1.06,"985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43301);
      tex = new TLatex(1,1.06,"987.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43302);
      tex = new TLatex(1,1.06,"989.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43303);
      tex = new TLatex(1,1.06,"991.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43304);
      tex = new TLatex(1,1.06,"993.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43305);
      tex = new TLatex(1,1.06,"995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43306);
      tex = new TLatex(1,1.06,"997.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43307);
      tex = new TLatex(1,1.06,"999.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43308);
      tex = new TLatex(1,1.06,"1001.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43309);
      tex = new TLatex(1,1.06,"1003.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43310);
      tex = new TLatex(1,1.06,"1005.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43311);
      tex = new TLatex(1,1.06,"1007.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43312);
      tex = new TLatex(1,1.06,"1009.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43313);
      tex = new TLatex(1,1.06,"1011.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43314);
      tex = new TLatex(1,1.06,"1013.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43315);
      tex = new TLatex(1,1.06,"1015.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43316);
      tex = new TLatex(1,1.06,"1017.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43317);
      tex = new TLatex(1,1.06,"1019.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43318);
      tex = new TLatex(1,1.06,"1021.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43319);
      tex = new TLatex(1,1.06,"1023.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43320);
      tex = new TLatex(1,1.06,"1025.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43321);
      tex = new TLatex(1,1.06,"1027.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43322);
      tex = new TLatex(1,1.06,"1029.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43323);
      tex = new TLatex(1,1.06,"1031.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43324);
      tex = new TLatex(1,1.06,"1033.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43325);
      tex = new TLatex(1,1.06,"1035.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43326);
      tex = new TLatex(1,1.06,"1037.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43327);
      tex = new TLatex(1,1.06,"1039.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43328);
      tex = new TLatex(1,1.06,"1041.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43329);
      tex = new TLatex(1,1.06,"1043.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43330);
      tex = new TLatex(1,1.06,"1045.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43331);
      tex = new TLatex(1,1.06,"1047.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43332);
      tex = new TLatex(1,1.06,"1049.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43333);
      tex = new TLatex(1,1.06,"1051.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43334);
      tex = new TLatex(1,1.06,"1053.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43335);
      tex = new TLatex(1,1.06,"1055.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43336);
      tex = new TLatex(1,1.06,"1057.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43337);
      tex = new TLatex(1,1.06,"1059.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43338);
      tex = new TLatex(1,1.06,"1061.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43339);
      tex = new TLatex(1,1.06,"1063.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43340);
      tex = new TLatex(1,1.06,"1065.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43341);
      tex = new TLatex(1,1.06,"1067.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43342);
      tex = new TLatex(1,1.06,"1069.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43343);
      tex = new TLatex(1,1.06,"1071.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43344);
      tex = new TLatex(1,1.06,"1073.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43345);
      tex = new TLatex(1,1.06,"1075.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43346);
      tex = new TLatex(1,1.06,"1077.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43347);
      tex = new TLatex(1,1.06,"1079.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43348);
      tex = new TLatex(1,1.06,"1081.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43349);
      tex = new TLatex(1,1.06,"1083.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43350);
      tex = new TLatex(1,1.06,"1085.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43351);
      tex = new TLatex(1,1.06,"1087.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43352);
      tex = new TLatex(1,1.06,"1089.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43353);
      tex = new TLatex(1,1.06,"1091.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43354);
      tex = new TLatex(1,1.06,"1093.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43355);
      tex = new TLatex(1,1.06,"1095.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43356);
      tex = new TLatex(1,1.06,"1097.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43357);
      tex = new TLatex(1,1.06,"1099.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43358);
      tex = new TLatex(1,1.06,"1101.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43359);
      tex = new TLatex(1,1.06,"1103.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43360);
      tex = new TLatex(1,1.06,"1105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43361);
      tex = new TLatex(1,1.06,"1107.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43362);
      tex = new TLatex(1,1.06,"1109.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43363);
      tex = new TLatex(1,1.06,"1111.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43364);
      tex = new TLatex(1,1.06,"1113.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43365);
      tex = new TLatex(1,1.06,"1115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43366);
      tex = new TLatex(1,1.06,"1117.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43367);
      tex = new TLatex(1,1.06,"1119.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43368);
      tex = new TLatex(1,1.06,"1121.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43369);
      tex = new TLatex(1,1.06,"1123.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43370);
      tex = new TLatex(1,1.06,"1125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43371);
      tex = new TLatex(1,1.06,"1127.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43372);
      tex = new TLatex(1,1.06,"1129.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43373);
      tex = new TLatex(1,1.06,"1131.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43374);
      tex = new TLatex(1,1.06,"1133.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43375);
      tex = new TLatex(1,1.06,"1135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43376);
      tex = new TLatex(1,1.06,"1137.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43377);
      tex = new TLatex(1,1.06,"1139.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43378);
      tex = new TLatex(1,1.06,"1141.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43379);
      tex = new TLatex(1,1.06,"1143.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43380);
      tex = new TLatex(1,1.06,"1145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43381);
      tex = new TLatex(1,1.06,"1147.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43382);
      tex = new TLatex(1,1.06,"1149.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43383);
      tex = new TLatex(1,1.06,"1151.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43384);
      tex = new TLatex(1,1.06,"1153.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43385);
      tex = new TLatex(1,1.06,"1155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43386);
      tex = new TLatex(1,1.06,"1157.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43387);
      tex = new TLatex(1,1.06,"1159.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43388);
      tex = new TLatex(1,1.06,"1161.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43389);
      tex = new TLatex(1,1.06,"1163.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43390);
      tex = new TLatex(1,1.06,"1165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43391);
      tex = new TLatex(1,1.06,"1167.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43392);
      tex = new TLatex(1,1.06,"1169.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43393);
      tex = new TLatex(1,1.06,"1171.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43394);
      tex = new TLatex(1,1.06,"1173.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43395);
      tex = new TLatex(1,1.06,"1175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43396);
      tex = new TLatex(1,1.06,"1177.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43397);
      tex = new TLatex(1,1.06,"1179.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43398);
      tex = new TLatex(1,1.06,"1181.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43399);
      tex = new TLatex(1,1.06,"1183.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43400);
      tex = new TLatex(1,1.06,"1185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43401);
      tex = new TLatex(1,1.06,"1187.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43402);
      tex = new TLatex(1,1.06,"1189.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43403);
      tex = new TLatex(1,1.06,"1191.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43404);
      tex = new TLatex(1,1.06,"1193.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43405);
      tex = new TLatex(1,1.06,"1195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43406);
      tex = new TLatex(1,1.06,"1197.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43407);
      tex = new TLatex(1,1.06,"1199.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43408);
      tex = new TLatex(1,1.06,"1201.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43409);
      tex = new TLatex(1,1.06,"1203.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43410);
      tex = new TLatex(1,1.06,"1205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43411);
      tex = new TLatex(1,1.06,"1207.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43412);
      tex = new TLatex(1,1.06,"1209.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43413);
      tex = new TLatex(1,1.06,"1211.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43414);
      tex = new TLatex(1,1.06,"1213.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43415);
      tex = new TLatex(1,1.06,"1215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43416);
      tex = new TLatex(1,1.06,"1217.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43417);
      tex = new TLatex(1,1.06,"1219.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43418);
      tex = new TLatex(1,1.06,"1221.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43419);
      tex = new TLatex(1,1.06,"1223.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43420);
      tex = new TLatex(1,1.06,"1225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43421);
      tex = new TLatex(1,1.06,"1227.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43422);
      tex = new TLatex(1,1.06,"1229.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43423);
      tex = new TLatex(1,1.06,"1231.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43424);
      tex = new TLatex(1,1.06,"1233.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43425);
      tex = new TLatex(1,1.06,"1235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43426);
      tex = new TLatex(1,1.06,"1237.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43427);
      tex = new TLatex(1,1.06,"1239.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43428);
      tex = new TLatex(1,1.06,"1241.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43429);
      tex = new TLatex(1,1.06,"1243.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43430);
      tex = new TLatex(1,1.06,"1245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43431);
      tex = new TLatex(1,1.06,"1247.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43432);
      tex = new TLatex(1,1.06,"1249.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43433);
      tex = new TLatex(1,1.06,"1251.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43434);
      tex = new TLatex(1,1.06,"1253.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43435);
      tex = new TLatex(1,1.06,"1255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43436);
      tex = new TLatex(1,1.06,"1257.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43437);
      tex = new TLatex(1,1.06,"1259.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43438);
      tex = new TLatex(1,1.06,"1261.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43439);
      tex = new TLatex(1,1.06,"1263.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43440);
      tex = new TLatex(1,1.06,"1265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43441);
      tex = new TLatex(1,1.06,"1267.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43442);
      tex = new TLatex(1,1.06,"1269.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43443);
      tex = new TLatex(1,1.06,"1271.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43444);
      tex = new TLatex(1,1.06,"1273.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43445);
      tex = new TLatex(1,1.06,"1275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43446);
      tex = new TLatex(1,1.06,"1277.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43447);
      tex = new TLatex(1,1.06,"1279.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43448);
      tex = new TLatex(1,1.06,"1281.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43449);
      tex = new TLatex(1,1.06,"1283.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43450);
      tex = new TLatex(1,1.06,"1285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43451);
      tex = new TLatex(1,1.06,"1287.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43452);
      tex = new TLatex(1,1.06,"1289.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43453);
      tex = new TLatex(1,1.06,"1291.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43454);
      tex = new TLatex(1,1.06,"1293.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43455);
      tex = new TLatex(1,1.06,"1295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43456);
      tex = new TLatex(1,1.06,"1297.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43457);
      tex = new TLatex(1,1.06,"1299.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43458);
      tex = new TLatex(1,1.06,"1301.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43459);
      tex = new TLatex(1,1.06,"1303.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43460);
      tex = new TLatex(1,1.06,"1305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43461);
      tex = new TLatex(1,1.06,"1307.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43462);
      tex = new TLatex(1,1.06,"1309.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43463);
      tex = new TLatex(1,1.06,"1311.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43464);
      tex = new TLatex(1,1.06,"1313.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43465);
      tex = new TLatex(1,1.06,"1315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43466);
      tex = new TLatex(1,1.06,"1317.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43467);
      tex = new TLatex(1,1.06,"1319.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43468);
      tex = new TLatex(1,1.06,"1321.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43469);
      tex = new TLatex(1,1.06,"1323.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43470);
      tex = new TLatex(1,1.06,"1325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43471);
      tex = new TLatex(1,1.06,"1327.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43472);
      tex = new TLatex(1,1.06,"1329.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43473);
      tex = new TLatex(1,1.06,"1331.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43474);
      tex = new TLatex(1,1.06,"1333.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43475);
      tex = new TLatex(1,1.06,"1335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43476);
      tex = new TLatex(1,1.06,"1337.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43477);
      tex = new TLatex(1,1.06,"1339.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43478);
      tex = new TLatex(1,1.06,"1341.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43479);
      tex = new TLatex(1,1.06,"1343.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43480);
      tex = new TLatex(1,1.06,"1345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43481);
      tex = new TLatex(1,1.06,"1347.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43482);
      tex = new TLatex(1,1.06,"1349.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43483);
      tex = new TLatex(1,1.06,"1351.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43484);
      tex = new TLatex(1,1.06,"1353.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43485);
      tex = new TLatex(1,1.06,"1355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43486);
      tex = new TLatex(1,1.06,"1357.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43487);
      tex = new TLatex(1,1.06,"1359.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43488);
      tex = new TLatex(1,1.06,"1361.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43489);
      tex = new TLatex(1,1.06,"1363.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43490);
      tex = new TLatex(1,1.06,"1365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43491);
      tex = new TLatex(1,1.06,"1367.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43492);
      tex = new TLatex(1,1.06,"1369.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43493);
      tex = new TLatex(1,1.06,"1371.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43494);
      tex = new TLatex(1,1.06,"1373.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43495);
      tex = new TLatex(1,1.06,"1375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43496);
      tex = new TLatex(1,1.06,"1377.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43497);
      tex = new TLatex(1,1.06,"1379.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43498);
      tex = new TLatex(1,1.06,"1381.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43499);
      tex = new TLatex(1,1.06,"1383.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43500);
      tex = new TLatex(1,1.06,"1385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43501);
      tex = new TLatex(1,1.06,"1387.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43502);
      tex = new TLatex(1,1.06,"1389.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43503);
      tex = new TLatex(1,1.06,"1391.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43504);
      tex = new TLatex(1,1.06,"1393.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43505);
      tex = new TLatex(1,1.06,"1395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43506);
      tex = new TLatex(1,1.06,"1397.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43507);
      tex = new TLatex(1,1.06,"1399.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43508);
      tex = new TLatex(1,1.06,"1401.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43509);
      tex = new TLatex(1,1.06,"1403.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43510);
      tex = new TLatex(1,1.06,"1405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43511);
      tex = new TLatex(1,1.06,"1407.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43512);
      tex = new TLatex(1,1.06,"1409.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43513);
      tex = new TLatex(1,1.06,"1411.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43514);
      tex = new TLatex(1,1.06,"1413.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43515);
      tex = new TLatex(1,1.06,"1415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43516);
      tex = new TLatex(1,1.06,"1417.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43517);
      tex = new TLatex(1,1.06,"1419.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43518);
      tex = new TLatex(1,1.06,"1421.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43519);
      tex = new TLatex(1,1.06,"1423.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43520);
      tex = new TLatex(1,1.06,"1425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43521);
      tex = new TLatex(1,1.06,"1427.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43522);
      tex = new TLatex(1,1.06,"1429.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43523);
      tex = new TLatex(1,1.06,"1431.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43524);
      tex = new TLatex(1,1.06,"1433.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43525);
      tex = new TLatex(1,1.06,"1435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43526);
      tex = new TLatex(1,1.06,"1437.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43527);
      tex = new TLatex(1,1.06,"1439.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43528);
      tex = new TLatex(1,1.06,"1441.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43529);
      tex = new TLatex(1,1.06,"1443.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43530);
      tex = new TLatex(1,1.06,"1445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43531);
      tex = new TLatex(1,1.06,"1447.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43532);
      tex = new TLatex(1,1.06,"1449.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43533);
      tex = new TLatex(1,1.06,"1451.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43534);
      tex = new TLatex(1,1.06,"1453.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43535);
      tex = new TLatex(1,1.06,"1455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43536);
      tex = new TLatex(1,1.06,"1457.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43537);
      tex = new TLatex(1,1.06,"1459.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43538);
      tex = new TLatex(1,1.06,"1461.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43539);
      tex = new TLatex(1,1.06,"1463.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43540);
      tex = new TLatex(1,1.06,"1465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43541);
      tex = new TLatex(1,1.06,"1467.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43542);
      tex = new TLatex(1,1.06,"1469.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43543);
      tex = new TLatex(1,1.06,"1471.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43544);
      tex = new TLatex(1,1.06,"1473.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43545);
      tex = new TLatex(1,1.06,"1475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43546);
      tex = new TLatex(1,1.06,"1477.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43547);
      tex = new TLatex(1,1.06,"1479.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43548);
      tex = new TLatex(1,1.06,"1481.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43549);
      tex = new TLatex(1,1.06,"1483.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43550);
      tex = new TLatex(1,1.06,"1485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43551);
      tex = new TLatex(1,1.06,"1487.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43552);
      tex = new TLatex(1,1.06,"1489.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43553);
      tex = new TLatex(1,1.06,"1491.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43554);
      tex = new TLatex(1,1.06,"1493.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43555);
      tex = new TLatex(1,1.06,"1495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43556);
      tex = new TLatex(1,1.06,"1497.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43557);
      tex = new TLatex(1,1.06,"1499.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43558);
      tex = new TLatex(1,1.06,"1501.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43559);
      tex = new TLatex(1,1.06,"1503.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43560);
      tex = new TLatex(1,1.06,"1505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43561);
      tex = new TLatex(1,1.06,"1507.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43562);
      tex = new TLatex(1,1.06,"1509.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43563);
      tex = new TLatex(1,1.06,"1511.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43564);
      tex = new TLatex(1,1.06,"1513.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43565);
      tex = new TLatex(1,1.06,"1515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43566);
      tex = new TLatex(1,1.06,"1517.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43567);
      tex = new TLatex(1,1.06,"1519.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43568);
      tex = new TLatex(1,1.06,"1521.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43569);
      tex = new TLatex(1,1.06,"1523.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43570);
      tex = new TLatex(1,1.06,"1525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43571);
      tex = new TLatex(1,1.06,"1527.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43572);
      tex = new TLatex(1,1.06,"1529.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43573);
      tex = new TLatex(1,1.06,"1531.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43574);
      tex = new TLatex(1,1.06,"1533.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43575);
      tex = new TLatex(1,1.06,"1535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43576);
      tex = new TLatex(1,1.06,"1537.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43577);
      tex = new TLatex(1,1.06,"1539.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43578);
      tex = new TLatex(1,1.06,"1541.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43579);
      tex = new TLatex(1,1.06,"1543.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43580);
      tex = new TLatex(1,1.06,"1545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43581);
      tex = new TLatex(1,1.06,"1547.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43582);
      tex = new TLatex(1,1.06,"1549.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43583);
      tex = new TLatex(1,1.06,"1551.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43584);
      tex = new TLatex(1,1.06,"1553.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43585);
      tex = new TLatex(1,1.06,"1555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43586);
      tex = new TLatex(1,1.06,"1557.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43587);
      tex = new TLatex(1,1.06,"1559.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43588);
      tex = new TLatex(1,1.06,"1561.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43589);
      tex = new TLatex(1,1.06,"1563.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43590);
      tex = new TLatex(1,1.06,"1565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43591);
      tex = new TLatex(1,1.06,"1567.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43592);
      tex = new TLatex(1,1.06,"1569.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43593);
      tex = new TLatex(1,1.06,"1571.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43594);
      tex = new TLatex(1,1.06,"1573.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43595);
      tex = new TLatex(1,1.06,"1575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43596);
      tex = new TLatex(1,1.06,"1577.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43597);
      tex = new TLatex(1,1.06,"1579.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43598);
      tex = new TLatex(1,1.06,"1581.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43599);
      tex = new TLatex(1,1.06,"1583.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43600);
      tex = new TLatex(1,1.06,"1585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43601);
      tex = new TLatex(1,1.06,"1587.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43602);
      tex = new TLatex(1,1.06,"1589.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43603);
      tex = new TLatex(1,1.06,"1591.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43604);
      tex = new TLatex(1,1.06,"1593.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43605);
      tex = new TLatex(1,1.06,"1595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43606);
      tex = new TLatex(1,1.06,"1597.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43607);
      tex = new TLatex(1,1.06,"1599.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43608);
      tex = new TLatex(1,1.06,"1601.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43609);
      tex = new TLatex(1,1.06,"1603.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43610);
      tex = new TLatex(1,1.06,"1605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43611);
      tex = new TLatex(1,1.06,"1607.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43612);
      tex = new TLatex(1,1.06,"1609.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43613);
      tex = new TLatex(1,1.06,"1611.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43614);
      tex = new TLatex(1,1.06,"1613.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43615);
      tex = new TLatex(1,1.06,"1615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43616);
      tex = new TLatex(1,1.06,"1617.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43617);
      tex = new TLatex(1,1.06,"1619.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43618);
      tex = new TLatex(1,1.06,"1621.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43619);
      tex = new TLatex(1,1.06,"1623.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43620);
      tex = new TLatex(1,1.06,"1625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43621);
      tex = new TLatex(1,1.06,"1627.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43622);
      tex = new TLatex(1,1.06,"1629.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43623);
      tex = new TLatex(1,1.06,"1631.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43624);
      tex = new TLatex(1,1.06,"1633.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43625);
      tex = new TLatex(1,1.06,"1635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43626);
      tex = new TLatex(1,1.06,"1637.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43627);
      tex = new TLatex(1,1.06,"1639.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43628);
      tex = new TLatex(1,1.06,"1641.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43629);
      tex = new TLatex(1,1.06,"1643.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43630);
      tex = new TLatex(1,1.06,"1645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43631);
      tex = new TLatex(1,1.06,"1647.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43632);
      tex = new TLatex(1,1.06,"1649.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43633);
      tex = new TLatex(1,1.06,"1651.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43634);
      tex = new TLatex(1,1.06,"1653.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43635);
      tex = new TLatex(1,1.06,"1655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43636);
      tex = new TLatex(1,1.06,"1657.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43637);
      tex = new TLatex(1,1.06,"1659.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43638);
      tex = new TLatex(1,1.06,"1661.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43639);
      tex = new TLatex(1,1.06,"1663.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43640);
      tex = new TLatex(1,1.06,"1665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43641);
      tex = new TLatex(1,1.06,"1667.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43642);
      tex = new TLatex(1,1.06,"1669.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43643);
      tex = new TLatex(1,1.06,"1671.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43644);
      tex = new TLatex(1,1.06,"1673.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43645);
      tex = new TLatex(1,1.06,"1675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43646);
      tex = new TLatex(1,1.06,"1677.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43647);
      tex = new TLatex(1,1.06,"1679.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43648);
      tex = new TLatex(1,1.06,"1681.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43649);
      tex = new TLatex(1,1.06,"1683.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43650);
      tex = new TLatex(1,1.06,"1685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43651);
      tex = new TLatex(1,1.06,"1687.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43652);
      tex = new TLatex(1,1.06,"1689.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43653);
      tex = new TLatex(1,1.06,"1691.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43654);
      tex = new TLatex(1,1.06,"1693.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43655);
      tex = new TLatex(1,1.06,"1695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43656);
      tex = new TLatex(1,1.06,"1697.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43657);
      tex = new TLatex(1,1.06,"1699.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43658);
      tex = new TLatex(1,1.06,"1701.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43659);
      tex = new TLatex(1,1.06,"1703.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43660);
      tex = new TLatex(1,1.06,"1705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43661);
      tex = new TLatex(1,1.06,"1707.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43662);
      tex = new TLatex(1,1.06,"1709.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43663);
      tex = new TLatex(1,1.06,"1711.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43664);
      tex = new TLatex(1,1.06,"1713.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43665);
      tex = new TLatex(1,1.06,"1715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43666);
      tex = new TLatex(1,1.06,"1717.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43667);
      tex = new TLatex(1,1.06,"1719.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43668);
      tex = new TLatex(1,1.06,"1721.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43669);
      tex = new TLatex(1,1.06,"1723.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43670);
      tex = new TLatex(1,1.06,"1725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43671);
      tex = new TLatex(1,1.06,"1727.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43672);
      tex = new TLatex(1,1.06,"1729.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43673);
      tex = new TLatex(1,1.06,"1731.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43674);
      tex = new TLatex(1,1.06,"1733.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43675);
      tex = new TLatex(1,1.06,"1735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43676);
      tex = new TLatex(1,1.06,"1737.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43677);
      tex = new TLatex(1,1.06,"1739.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43678);
      tex = new TLatex(1,1.06,"1741.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43679);
      tex = new TLatex(1,1.06,"1743.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43680);
      tex = new TLatex(1,1.06,"1745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43681);
      tex = new TLatex(1,1.06,"1747.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43682);
      tex = new TLatex(1,1.06,"1749.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43683);
      tex = new TLatex(1,1.06,"1751.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43684);
      tex = new TLatex(1,1.06,"1753.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43685);
      tex = new TLatex(1,1.06,"1755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43686);
      tex = new TLatex(1,1.06,"1757.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43687);
      tex = new TLatex(1,1.06,"1759.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43688);
      tex = new TLatex(1,1.06,"1761.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43689);
      tex = new TLatex(1,1.06,"1763.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43690);
      tex = new TLatex(1,1.06,"1765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43691);
      tex = new TLatex(1,1.06,"1767.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43692);
      tex = new TLatex(1,1.06,"1769.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43693);
      tex = new TLatex(1,1.06,"1771.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43694);
      tex = new TLatex(1,1.06,"1773.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43695);
      tex = new TLatex(1,1.06,"1775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43696);
      tex = new TLatex(1,1.06,"1777.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43697);
      tex = new TLatex(1,1.06,"1779.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43698);
      tex = new TLatex(1,1.06,"1781.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43699);
      tex = new TLatex(1,1.06,"1783.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43700);
      tex = new TLatex(1,1.06,"1785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43701);
      tex = new TLatex(1,1.06,"1787.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43702);
      tex = new TLatex(1,1.06,"1789.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43703);
      tex = new TLatex(1,1.06,"1791.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43704);
      tex = new TLatex(1,1.06,"1793.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43705);
      tex = new TLatex(1,1.06,"1795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43706);
      tex = new TLatex(1,1.06,"1797.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43707);
      tex = new TLatex(1,1.06,"1799.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43708);
      tex = new TLatex(1,1.06,"1801.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43709);
      tex = new TLatex(1,1.06,"1803.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43710);
      tex = new TLatex(1,1.06,"1805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43711);
      tex = new TLatex(1,1.06,"1807.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43712);
      tex = new TLatex(1,1.06,"1809.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43713);
      tex = new TLatex(1,1.06,"1811.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43714);
      tex = new TLatex(1,1.06,"1813.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43715);
      tex = new TLatex(1,1.06,"1815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43716);
      tex = new TLatex(1,1.06,"1817.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43717);
      tex = new TLatex(1,1.06,"1819.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43718);
      tex = new TLatex(1,1.06,"1821.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43719);
      tex = new TLatex(1,1.06,"1823.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43720);
      tex = new TLatex(1,1.06,"1825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43721);
      tex = new TLatex(1,1.06,"1827.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43722);
      tex = new TLatex(1,1.06,"1829.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43723);
      tex = new TLatex(1,1.06,"1831.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43724);
      tex = new TLatex(1,1.06,"1833.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43725);
      tex = new TLatex(1,1.06,"1835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43726);
      tex = new TLatex(1,1.06,"1837.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43727);
      tex = new TLatex(1,1.06,"1839.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43728);
      tex = new TLatex(1,1.06,"1841.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43729);
      tex = new TLatex(1,1.06,"1843.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43730);
      tex = new TLatex(1,1.06,"1845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43731);
      tex = new TLatex(1,1.06,"1847.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43732);
      tex = new TLatex(1,1.06,"1849.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43733);
      tex = new TLatex(1,1.06,"1851.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43734);
      tex = new TLatex(1,1.06,"1853.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43735);
      tex = new TLatex(1,1.06,"1855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43736);
      tex = new TLatex(1,1.06,"1857.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43737);
      tex = new TLatex(1,1.06,"1859.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43738);
      tex = new TLatex(1,1.06,"1861.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43739);
      tex = new TLatex(1,1.06,"1863.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43740);
      tex = new TLatex(1,1.06,"1865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43741);
      tex = new TLatex(1,1.06,"1867.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43742);
      tex = new TLatex(1,1.06,"1869.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43743);
      tex = new TLatex(1,1.06,"1871.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43744);
      tex = new TLatex(1,1.06,"1873.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43745);
      tex = new TLatex(1,1.06,"1875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43746);
      tex = new TLatex(1,1.06,"1877.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43747);
      tex = new TLatex(1,1.06,"1879.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43748);
      tex = new TLatex(1,1.06,"1881.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43749);
      tex = new TLatex(1,1.06,"1883.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43750);
      tex = new TLatex(1,1.06,"1885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43751);
      tex = new TLatex(1,1.06,"1887.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43752);
      tex = new TLatex(1,1.06,"1889.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43753);
      tex = new TLatex(1,1.06,"1891.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43754);
      tex = new TLatex(1,1.06,"1893.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43755);
      tex = new TLatex(1,1.06,"1895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43756);
      tex = new TLatex(1,1.06,"1897.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43757);
      tex = new TLatex(1,1.06,"1899.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43758);
      tex = new TLatex(1,1.06,"1901.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43759);
      tex = new TLatex(1,1.06,"1903.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43760);
      tex = new TLatex(1,1.06,"1905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43761);
      tex = new TLatex(1,1.06,"1907.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43762);
      tex = new TLatex(1,1.06,"1909.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43763);
      tex = new TLatex(1,1.06,"1911.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43764);
      tex = new TLatex(1,1.06,"1913.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43765);
      tex = new TLatex(1,1.06,"1915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43766);
      tex = new TLatex(1,1.06,"1917.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43767);
      tex = new TLatex(1,1.06,"1919.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43768);
      tex = new TLatex(1,1.06,"1921.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43769);
      tex = new TLatex(1,1.06,"1923.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43770);
      tex = new TLatex(1,1.06,"1925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43771);
      tex = new TLatex(1,1.06,"1927.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43772);
      tex = new TLatex(1,1.06,"1929.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43773);
      tex = new TLatex(1,1.06,"1931.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43774);
      tex = new TLatex(1,1.06,"1933.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43775);
      tex = new TLatex(1,1.06,"1935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43776);
      tex = new TLatex(1,1.06,"1937.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43777);
      tex = new TLatex(1,1.06,"1939.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43778);
      tex = new TLatex(1,1.06,"1941.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43779);
      tex = new TLatex(1,1.06,"1943.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43780);
      tex = new TLatex(1,1.06,"1945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43781);
      tex = new TLatex(1,1.06,"1947.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43782);
      tex = new TLatex(1,1.06,"1949.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43783);
      tex = new TLatex(1,1.06,"1951.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43784);
      tex = new TLatex(1,1.06,"1953.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43785);
      tex = new TLatex(1,1.06,"1955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43786);
      tex = new TLatex(1,1.06,"1957.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43787);
      tex = new TLatex(1,1.06,"1959.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43788);
      tex = new TLatex(1,1.06,"1961.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43789);
      tex = new TLatex(1,1.06,"1963.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43790);
      tex = new TLatex(1,1.06,"1965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43791);
      tex = new TLatex(1,1.06,"1967.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43792);
      tex = new TLatex(1,1.06,"1969.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43793);
      tex = new TLatex(1,1.06,"1971.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43794);
      tex = new TLatex(1,1.06,"1973.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43795);
      tex = new TLatex(1,1.06,"1975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43796);
      tex = new TLatex(1,1.06,"1977.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43797);
      tex = new TLatex(1,1.06,"1979.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43798);
      tex = new TLatex(1,1.06,"1981.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43799);
      tex = new TLatex(1,1.06,"1983.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43800);
      tex = new TLatex(1,1.06,"1985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43801);
      tex = new TLatex(1,1.06,"1987.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43802);
      tex = new TLatex(1,1.06,"1989.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43803);
      tex = new TLatex(1,1.06,"1991.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43804);
      tex = new TLatex(1,1.06,"1993.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43805);
      tex = new TLatex(1,1.06,"1995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43806);
      tex = new TLatex(1,1.06,"1997.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43807);
      tex = new TLatex(1,1.06,"1999.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(43808);
   graph->Draw("aw #43765
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
   ROC_jets_pt_cjet2_16->Modified();
   ROC_jets_pt_cjet2_16->cd();
   ROC_jets_pt_cjet2_16->SetSelected(ROC_jets_pt_cjet2_16);
}
