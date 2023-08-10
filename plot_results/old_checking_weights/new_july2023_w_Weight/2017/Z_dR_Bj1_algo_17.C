void Z_dR_Bj1_algo_17()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_17/Z_dR_Bj1_algo_17
//=========  (Thu Aug 10 10:42:25 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_algo_17 = new TCanvas("Z_dR_Bj1_algo_17", "Z_dR_Bj1_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_algo_17->SetHighLightColor(2);
   Z_dR_Bj1_algo_17->Range(0,0,1,1);
   Z_dR_Bj1_algo_17->SetFillColor(0);
   Z_dR_Bj1_algo_17->SetFillStyle(4000);
   Z_dR_Bj1_algo_17->SetBorderMode(0);
   Z_dR_Bj1_algo_17->SetBorderSize(2);
   Z_dR_Bj1_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.917672,6.314516,14.19601);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(8.072089e+11);
   
   TH1F *st_stack_150 = new TH1F("st_stack_150","",30,0,6);
   st_stack_150->SetMinimum(0.001257309);
   st_stack_150->SetMaximum(3.052378e+12);
   st_stack_150->SetDirectory(0);
   st_stack_150->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_150->SetLineColor(ci);
   st_stack_150->GetXaxis()->SetRange(1,30);
   st_stack_150->GetXaxis()->SetLabelFont(42);
   st_stack_150->GetXaxis()->SetLabelSize(0.035);
   st_stack_150->GetXaxis()->SetTitleSize(0.035);
   st_stack_150->GetXaxis()->SetTitleFont(42);
   st_stack_150->GetYaxis()->SetTitle("Events/0.2");
   st_stack_150->GetYaxis()->SetLabelFont(42);
   st_stack_150->GetYaxis()->SetLabelSize(0.05);
   st_stack_150->GetYaxis()->SetTitleSize(0.057);
   st_stack_150->GetYaxis()->SetTitleOffset(1.2);
   st_stack_150->GetYaxis()->SetTitleFont(42);
   st_stack_150->GetZaxis()->SetLabelFont(42);
   st_stack_150->GetZaxis()->SetLabelSize(0.035);
   st_stack_150->GetZaxis()->SetTitleSize(0.035);
   st_stack_150->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_150);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,455.4009);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,117429.2);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,191848.4);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,168736.6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,143925.7);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,135935.1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,113522.1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,95423.26);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,87850.86);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,67277.63);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,51222.33);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,48727.01);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,42702.13);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,38709.1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,33422.23);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,28831.35);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,26679.54);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,37694.98);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,18448.68);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,17769.11);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(21,17133.17);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,14387.24);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(23,13869.73);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(24,9833.795);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(25,9221.766);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(26,5506.927);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(27,5368.498);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(28,17866.72);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(29,1887.772);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(30,681.2688);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(31,2114.775);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,273.094);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,4163.617);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,15814.64);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,15720.57);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,4988.953);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,5063.022);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,4651.124);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,3971.968);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,15297.03);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,3816.044);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,2682.378);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,2686.487);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,2987.479);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,2404.297);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,2468.749);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,1935.945);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,1961.007);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,14919.98);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,1475.108);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,1491.389);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(21,1490.027);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,1402.409);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(23,1350.888);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(24,1103.944);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(25,1068.859);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(26,640.5472);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(27,783.1374);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(28,14825.55);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(29,400.9135);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(30,95.26037);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(31,485.2389);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(112106);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,2.68047);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,700.7431);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,1429.549);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,1513.842);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,1318.172);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,1060.359);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,836.2251);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,673.9337);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,536.5854);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,442.8387);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,363.5194);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,313.8129);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,283.5259);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,250.3206);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,220.8989);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,212.7325);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,189.9213);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,176.8311);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,157.3289);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,143.9791);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,123.3544);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(22,112.0048);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(23,91.22439);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(24,71.48209);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(25,47.9177);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(26,36.34924);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(27,23.51566);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(28,14.83314);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(29,6.62306);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(30,5.470677);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(31,12.93179);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.645605);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,10.26727);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,14.4291);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,14.89761);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,13.9534);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,12.44894);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,11.16237);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,10.05628);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,8.957154);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,8.198938);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,7.248372);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,6.712037);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,6.383813);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,5.968779);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,5.490637);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,5.616549);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,5.293528);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,5.153551);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,4.766307);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,4.626728);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,4.189838);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(22,4.063491);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(23,3.626549);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(24,3.217219);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(25,2.603893);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(26,2.323099);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(27,1.812357);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(28,1.471637);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(29,0.8889954);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(30,0.8223897);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(31,1.397207);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(138653);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(1,28.14542);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(2,14746.83);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(3,33078.72);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(4,31005.25);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(5,23128.11);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(6,16517.97);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(7,11909.56);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(8,8884.78);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(9,6865.707);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(10,5611.911);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(11,4720.271);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(12,4144.428);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(13,3683.704);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(14,3347.683);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(15,3127.637);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(16,2912.453);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(17,2664.859);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(18,2526.562);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(19,2353.042);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(20,2243.173);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(21,2046.171);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(22,1784.772);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(23,1407.934);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(24,1020.888);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(25,670.1479);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(26,413.711);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(27,239.0123);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(28,129.1978);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(29,70.61781);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(30,41.17376);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(31,70.93894);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(1,1.306036);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(2,30.92658);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(3,46.35044);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(4,44.66827);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(5,38.34143);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(6,32.24912);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(7,27.28976);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(8,23.52273);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(9,20.66066);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(10,18.66333);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(11,17.11755);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(12,16.03863);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(13,15.13536);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(14,14.42521);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(15,13.9693);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(16,13.48155);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(17,12.92277);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(18,12.60484);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(19,12.16807);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(20,11.91534);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(21,11.39104);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(22,10.6596);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(23,9.466831);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(24,8.060275);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(25,6.505987);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(26,5.102327);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(27,3.857378);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(28,2.820478);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(29,2.065273);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(30,1.559198);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(31,2.055822);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetEntries(3113082);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(1,2.625826);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(2,764.947);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(3,1280.018);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(4,1094.845);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(5,937.3992);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(6,718.6218);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(7,597.8458);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(8,486.5847);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(9,376.2259);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(10,306.3013);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(11,251.2814);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(12,245.8269);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(13,210.4436);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(14,182.0578);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(15,160.2204);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(16,177.5384);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(17,127.9164);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(18,129.7632);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(19,117.0302);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(20,95.96355);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(21,92.11773);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(22,79.38803);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(23,70.66024);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(24,55.18138);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(25,45.33243);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(26,25.58101);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(27,16.9448);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(28,12.51558);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(29,7.591539);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(30,3.838857);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(31,7.461348);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(1,0.7844299);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(2,17.37986);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(3,26.8016);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(4,27.50678);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(5,25.23875);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(6,19.57999);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(7,18.44226);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(8,16.20844);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(9,13.68022);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(10,12.83711);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(11,10.50092);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(12,12.04386);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(13,11.31439);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(14,8.644949);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(15,7.468791);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(16,11.07065);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(17,8.352284);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(18,8.013511);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(19,8.62912);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(20,6.005882);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(21,6.462111);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(22,5.656121);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(23,5.426016);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(24,5.017565);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(25,5.455775);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(26,2.165457);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(27,1.60524);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(28,1.518771);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(29,1.142357);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(30,0.7772859);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(31,1.232027);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetEntries(54522);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(1,0.7179678);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(2,269.1281);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(3,400.0631);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(4,310.6234);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(5,283.8386);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(6,255.0073);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(7,212.5514);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(8,148.7576);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(9,139.1844);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(10,126.0242);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(11,92.90254);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(12,94.51664);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(13,74.3769);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(14,78.38029);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(15,58.34903);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(16,61.15292);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(17,47.13398);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(18,54.93068);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(19,36.64685);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(20,44.5845);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(21,32.24066);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(22,24.04745);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(23,23.26025);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(24,21.12213);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(25,18.73855);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(26,13.57192);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(27,16.35509);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(28,6.874344);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(29,4.558933);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(30,1.052238);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(31,2.737692);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(1,0.2708605);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(2,17.4235);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(3,22.21114);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(4,22.3206);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(5,18.32341);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(6,19.89137);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(7,18.96077);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(8,9.100787);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(9,12.60172);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(10,15.21465);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(11,11.46518);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(12,11.74833);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(13,8.840363);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(14,12.84655);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(15,8.251421);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(16,5.822506);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(17,8.130756);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(18,8.67517);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(19,4.456756);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(20,8.115746);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(21,4.330385);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(22,3.420297);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(23,3.408082);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(24,3.158881);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(25,2.920827);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(26,2.771254);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(27,7.011162);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(28,1.780022);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(29,1.409179);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(30,0.3391353);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(31,0.5654319);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetEntries(16864);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(2,2.522447);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(3,6.306118);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(4,3.153059);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(5,2.837753);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(6,1.576529);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(7,1.576529);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(8,1.261224);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(9,0.9459177);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(10,1.891835);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(11,0.9459177);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(12,0.3153059);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(13,0.3153059);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(14,1.261224);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(16,0.6306118);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(21,0.3153059);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(26,0.3153059);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(2,0.8918197);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(3,1.410091);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(4,0.9970848);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(5,0.9459177);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(6,0.7050454);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(7,0.7050454);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(8,0.6306118);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(9,0.5461258);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(10,0.7723385);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(11,0.5461258);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(12,0.3153059);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(13,0.3153059);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(14,0.6306118);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(16,0.4459099);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(21,0.3153059);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(26,0.3153059);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(2,9.669745);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(3,13.63682);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(4,6.694439);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(5,6.942381);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(6,5.950612);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(7,4.215017);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(8,2.479422);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(9,2.479422);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(10,1.983537);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(11,2.479422);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(12,2.23148);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(13,1.983537);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(14,0.7438266);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(15,0.9917687);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(16,0.9917687);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(17,1.487653);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(18,1.239711);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(19,1.239711);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(20,1.487653);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(21,0.2479422);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(22,0.4958844);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(23,0.4958844);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(24,0.2479422);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(25,0.7438266);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(26,0.7438266);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(2,1.548398);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(3,1.838788);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(4,1.288345);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(5,1.311987);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(6,1.214664);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(7,1.022292);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(8,0.784062);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(9,0.784062);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(10,0.7012864);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(11,0.784062);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(12,0.7438266);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(13,0.7012864);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(14,0.4294485);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(15,0.4958844);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(16,0.4958844);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(17,0.6073318);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(18,0.5544156);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(19,0.5544156);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(20,0.6073318);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(21,0.2479422);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(22,0.3506432);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(23,0.3506432);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(24,0.2479422);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(25,0.4294485);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(26,0.4294485);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetEntries(290);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(1,0.2532256);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(2,18.48547);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(3,24.05643);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(4,13.42096);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(5,5.064512);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(6,8.10322);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(7,6.077415);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(8,5.570963);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(9,4.304835);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(10,3.291933);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(11,2.27903);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(12,2.785482);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(13,2.532256);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(14,2.532256);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(15,1.519354);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(16,1.519354);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(17,2.025805);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(18,1.012902);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(19,0.7596768);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(20,2.025805);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(21,0.7596768);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(22,0.2532256);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(23,0.7596768);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(24,1.266128);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(25,0.5064512);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(26,0.7596768);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(29,0.2532256);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(1,0.2532256);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(2,2.163561);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(3,2.468138);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(4,1.84351);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(5,1.132459);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(6,1.43246);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(7,1.240547);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(8,1.187733);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(9,1.044076);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(10,0.9130179);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(11,0.7596768);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(12,0.8398543);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(13,0.8007697);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(14,0.8007697);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(15,0.6202735);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(16,0.6202735);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(17,0.7162302);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(18,0.5064512);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(19,0.4385996);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(20,0.7162302);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(21,0.4385996);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(22,0.2532256);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(23,0.4385996);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(24,0.5662297);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(25,0.3581151);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(26,0.4385996);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(29,0.2532256);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(1,0.03167147);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(2,12.19852);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(3,19.66632);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(4,12.23019);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(5,7.016064);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(6,4.419004);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(7,3.233824);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(8,2.632066);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(9,2.230338);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(10,1.891954);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(11,1.656918);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(12,1.475224);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(13,1.29853);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(14,1.221852);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(15,1.168511);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(16,0.9934841);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(17,0.8767997);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(18,0.8484621);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(19,0.6884378);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(20,0.6951055);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(21,0.6517656);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(22,0.6867709);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(23,0.5334143);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(24,0.498409);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(25,0.310047);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(26,0.1916958);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(27,0.1083498);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(28,0.05834218);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(29,0.02333687);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(30,0.01166844);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(31,0.01833612);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(1,0.007265934);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(2,0.1425972);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(3,0.1810585);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(4,0.1427821);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(5,0.1081444);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(6,0.08582613);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(7,0.07342019);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(8,0.06623777);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(9,0.06097372);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(10,0.05615812);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(11,0.05255425);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(12,0.04958911);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(13,0.04652468);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(14,0.04513014);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(15,0.04413404);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(16,0.04069469);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(17,0.03823028);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(18,0.03760742);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(19,0.03387581);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(20,0.03403946);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(21,0.0329612);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(22,0.03383477);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(23,0.02981876);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(24,0.02882373);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(25,0.02273375);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(26,0.01787572);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(27,0.01343914);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(28,0.009861629);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(29,0.006237042);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(30,0.004410255);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(31,0.005528547);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetEntries(47732);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(1,0.008312461);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(2,3.901038);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(3,9.043957);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(4,7.575561);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(5,5.212328);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(6,3.509936);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(7,2.531144);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(8,1.994991);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(9,1.655842);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(10,1.382362);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(11,1.194085);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(12,1.029914);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(13,0.9297487);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(14,0.8408054);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(15,0.8088024);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(16,0.7273403);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(17,0.6454626);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(18,0.5814566);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(19,0.5507005);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(20,0.498332);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(21,0.4571853);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(22,0.4339104);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(23,0.3549421);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(24,0.2576863);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(25,0.1728992);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(26,0.1271806);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(27,0.07522777);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(28,0.03283422);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(29,0.01953428);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(30,0.01163744);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(31,0.0162093);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(1,0.001858723);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(2,0.04026613);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(3,0.06130968);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(4,0.05611219);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(5,0.04654421);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(6,0.03819438);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(7,0.03243458);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(8,0.02879521);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(9,0.02623368);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(10,0.0239696);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(11,0.02227755);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(12,0.02068951);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(13,0.0196577);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(14,0.0186938);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(15,0.01833458);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(16,0.01738676);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(17,0.01637892);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(18,0.01554563);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(19,0.01512891);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(20,0.0143916);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(21,0.01378466);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(22,0.01342919);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(23,0.01214587);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(24,0.01034893);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(25,0.00847708);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(26,0.007270434);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(27,0.005591636);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(28,0.003694138);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(29,0.002849368);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(30,0.00219927);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(31,0.002595565);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetEntries(112076);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(2,0.09639532);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(3,0.1517041);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(4,0.1074571);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(5,0.04898779);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(6,0.04266678);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(7,0.03002477);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(8,0.02370377);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(9,0.01264201);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(10,0.02054326);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(11,0.01264201);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(12,0.01106176);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(13,0.01580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(14,0.006321005);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(15,0.009481507);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(16,0.007901256);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(17,0.007901256);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(18,0.01106176);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(19,0.004740753);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(20,0.006321005);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(21,0.006321005);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(22,0.004740753);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(23,0.006321005);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(24,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(25,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(27,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(28,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(29,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(2,0.01234216);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(3,0.01548324);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(4,0.01303108);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(5,0.008798466);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(6,0.008211226);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(7,0.006888155);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(8,0.006120286);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(9,0.004469625);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(10,0.005697677);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(11,0.004469625);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(12,0.004180952);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(13,0.004997193);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(14,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(15,0.003870809);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(16,0.003533549);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(17,0.003533549);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(18,0.004180952);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(19,0.002737075);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(20,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(21,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(22,0.002737075);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(23,0.003160502);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(24,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(25,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(27,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(28,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(29,0.001580251);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(2,0.02906479);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(3,0.05584592);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(4,0.04961775);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(5,0.03363212);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(6,0.02117578);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(7,0.02055296);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(8,0.01515521);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(9,0.009965071);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(10,0.009757466);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(11,0.007681409);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(12,0.006020564);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(13,0.007889015);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(14,0.003529296);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(15,0.005812958);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(16,0.004982536);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(17,0.00332169);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(18,0.001868451);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(19,0.002906479);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(20,0.002491268);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(21,0.002698874);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(22,0.00145324);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(23,0.002698874);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(24,0.002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(25,0.00145324);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(26,0.0008304226);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(29,0.0004152113);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(2,0.002456423);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(3,0.003404986);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(4,0.003209506);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(5,0.002642389);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(6,0.002096714);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(7,0.00206565);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(8,0.001773783);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(9,0.001438334);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(10,0.001423273);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(11,0.001262816);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(12,0.001117991);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(13,0.001279767);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(14,0.00085598);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(15,0.001098546);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(16,0.001017056);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(17,0.0008304226);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(18,0.000622817);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(19,0.0007767892);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(20,0.0007191671);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(21,0.0007485328);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(22,0.0005492729);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(23,0.0007485328);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(24,0.0006565067);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(25,0.0005492729);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(26,0.0004152113);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(29,0.0002935987);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1__411 = new TH1D("VbbHcc_algo_Z_dR_Bj1__411","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(1,59);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(2,18405);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(3,27536);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(4,25759);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(5,24614);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(6,20878);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(7,17454);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(8,14186);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(9,11599);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(10,9604);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(11,8424);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(12,7316);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(13,6446);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(14,5637);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(15,5297);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(16,4930);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(17,4225);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(18,3644);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(19,3229);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(20,3001);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(21,2723);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(22,2333);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(23,1944);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(24,1570);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(25,1246);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(26,905);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(27,671);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(28,468);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(29,294);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(30,202);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(31,309);
   VbbHcc_algo_Z_dR_Bj1__411->SetEntries(234937);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1__411->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1__411->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj1__411->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj1__411->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj1__411->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1__411->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__411->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__411->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__411->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__411->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__411->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__411->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__411->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1__411->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__411->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__411->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__411->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__411->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__411->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1299[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1299[30] = {
   489.8638,
   133957.7,
   228109.7,
   202704.3,
   169620.4,
   154510.7,
   127096,
   105631.3,
   95780.2,
   73775.17,
   56658.88,
   53533.45,
   46961.26,
   42574.16,
   36993.84,
   32200.1,
   29714.42,
   40586.76,
   21115.97,
   20301.53,
   19429.5,
   16389.33,
   15464.96,
   11004.74,
   10005.64,
   5998.279,
   5664.511,
   18030.23,
   1977.462,
   732.8277};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1299[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1299[30] = {
   273.0993,
   4163.819,
   15814.76,
   15720.68,
   4989.218,
   5063.217,
   4651.293,
   3972.094,
   15297.06,
   3816.151,
   2682.488,
   2686.596,
   2987.559,
   2404.398,
   2468.82,
   1936.041,
   1961.092,
   14919.99,
   1475.199,
   1491.479,
   1490.097,
   1402.471,
   1350.941,
   1103.994,
   1068.9,
   640.5818,
   783.182,
   14825.55,
   400.924,
   95.28045};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1299,Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1299,Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1299,Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1299);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->SetMinimum(195.0881);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->SetMaximum(268295.2);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_12","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_11","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_10","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_9","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_8","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_7","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_6","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_5","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_4","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj1","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj1_algo_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__412 = new TH1D("data_mc_ratio__412","",30,0,6);
   data_mc_ratio__412->SetBinContent(1,0.1204416);
   data_mc_ratio__412->SetBinContent(2,0.1373941);
   data_mc_ratio__412->SetBinContent(3,0.1207139);
   data_mc_ratio__412->SetBinContent(4,0.1270767);
   data_mc_ratio__412->SetBinContent(5,0.1451123);
   data_mc_ratio__412->SetBinContent(6,0.1351233);
   data_mc_ratio__412->SetBinContent(7,0.1373293);
   data_mc_ratio__412->SetBinContent(8,0.1342973);
   data_mc_ratio__412->SetBinContent(9,0.1211002);
   data_mc_ratio__412->SetBinContent(10,0.1301793);
   data_mc_ratio__412->SetBinContent(11,0.1486793);
   data_mc_ratio__412->SetBinContent(12,0.1366622);
   data_mc_ratio__412->SetBinContent(13,0.1372621);
   data_mc_ratio__412->SetBinContent(14,0.1324043);
   data_mc_ratio__412->SetBinContent(15,0.143186);
   data_mc_ratio__412->SetBinContent(16,0.1531051);
   data_mc_ratio__412->SetBinContent(17,0.1421869);
   data_mc_ratio__412->SetBinContent(18,0.08978297);
   data_mc_ratio__412->SetBinContent(19,0.1529174);
   data_mc_ratio__412->SetBinContent(20,0.1478214);
   data_mc_ratio__412->SetBinContent(21,0.1401477);
   data_mc_ratio__412->SetBinContent(22,0.1423487);
   data_mc_ratio__412->SetBinContent(23,0.1257035);
   data_mc_ratio__412->SetBinContent(24,0.1426658);
   data_mc_ratio__412->SetBinContent(25,0.1245298);
   data_mc_ratio__412->SetBinContent(26,0.1508766);
   data_mc_ratio__412->SetBinContent(27,0.1184568);
   data_mc_ratio__412->SetBinContent(28,0.02595641);
   data_mc_ratio__412->SetBinContent(29,0.1486754);
   data_mc_ratio__412->SetBinContent(30,0.2756446);
   data_mc_ratio__412->SetBinContent(31,0.1398899);
   data_mc_ratio__412->SetBinError(1,0.01568017);
   data_mc_ratio__412->SetBinError(2,0.001012745);
   data_mc_ratio__412->SetBinError(3,0.000727456);
   data_mc_ratio__412->SetBinError(4,0.0007917744);
   data_mc_ratio__412->SetBinError(5,0.0009249388);
   data_mc_ratio__412->SetBinError(6,0.00093516);
   data_mc_ratio__412->SetBinError(7,0.001039479);
   data_mc_ratio__412->SetBinError(8,0.001127554);
   data_mc_ratio__412->SetBinError(9,0.001124435);
   data_mc_ratio__412->SetBinError(10,0.00132836);
   data_mc_ratio__412->SetBinError(11,0.001619911);
   data_mc_ratio__412->SetBinError(12,0.00159776);
   data_mc_ratio__412->SetBinError(13,0.001709643);
   data_mc_ratio__412->SetBinError(14,0.00176351);
   data_mc_ratio__412->SetBinError(15,0.001967368);
   data_mc_ratio__412->SetBinError(16,0.002180551);
   data_mc_ratio__412->SetBinError(17,0.00218749);
   data_mc_ratio__412->SetBinError(18,0.001487321);
   data_mc_ratio__412->SetBinError(19,0.002691057);
   data_mc_ratio__412->SetBinError(20,0.002698387);
   data_mc_ratio__412->SetBinError(21,0.00268573);
   data_mc_ratio__412->SetBinError(22,0.002947109);
   data_mc_ratio__412->SetBinError(23,0.002851014);
   data_mc_ratio__412->SetBinError(24,0.003600559);
   data_mc_ratio__412->SetBinError(25,0.003527883);
   data_mc_ratio__412->SetBinError(26,0.005015308);
   data_mc_ratio__412->SetBinError(27,0.004572975);
   data_mc_ratio__412->SetBinError(28,0.001199835);
   data_mc_ratio__412->SetBinError(29,0.008670928);
   data_mc_ratio__412->SetBinError(30,0.01939429);
   data_mc_ratio__412->SetBinError(31,0.03174474);
   data_mc_ratio__412->SetMinimum(0.4);
   data_mc_ratio__412->SetMaximum(1.6);
   data_mc_ratio__412->SetEntries(1415.643);
   data_mc_ratio__412->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__412->SetLineColor(ci);
   data_mc_ratio__412->SetLineWidth(2);
   data_mc_ratio__412->SetMarkerStyle(20);
   data_mc_ratio__412->SetMarkerSize(1.2);
   data_mc_ratio__412->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__412->GetXaxis()->SetRange(1,30);
   data_mc_ratio__412->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__412->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__412->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__412->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__412->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__412->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__412->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__412->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__412->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__412->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__412->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__412->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__412->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__412->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__412->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__412->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__412->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1300[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1300[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1300[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1300[30] = {
   0.5575004,
   0.03108308,
   0.06932962,
   0.07755472,
   0.02941402,
   0.03276936,
   0.03659669,
   0.03760338,
   0.15971,
   0.05172676,
   0.04734453,
   0.05018537,
   0.06361751,
   0.05647553,
   0.06673597,
   0.06012532,
   0.06599799,
   0.3676074,
   0.06986174,
   0.07346631,
   0.07669253,
   0.08557223,
   0.08735498,
   0.1003198,
   0.1068298,
   0.1067943,
   0.1382612,
   0.8222609,
   0.2027468,
   0.1300175};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1300,Graph_from_mc_statistical_error_fy1300,Graph_from_mc_statistical_error_fex1300,Graph_from_mc_statistical_error_fey1300);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1300 = new TH1F("Graph_Graph_from_mc_statistical_error1300","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1300->SetMinimum(0.01328694);
   Graph_Graph_from_mc_statistical_error1300->SetMaximum(1.986713);
   Graph_Graph_from_mc_statistical_error1300->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1300->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1300->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1300->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1300->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1300->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1300->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1300->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1300->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1300->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1300->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1300->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1300->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1300->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1300->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1300->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1300);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_algo_17->cd();
   Z_dR_Bj1_algo_17->Modified();
   Z_dR_Bj1_algo_17->cd();
   Z_dR_Bj1_algo_17->SetSelected(Z_dR_Bj1_algo_17);
}
