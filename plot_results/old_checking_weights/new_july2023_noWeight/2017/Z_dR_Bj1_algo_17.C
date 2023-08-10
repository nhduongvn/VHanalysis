void Z_dR_Bj1_algo_17()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_17/Z_dR_Bj1_algo_17
//=========  (Thu Aug  3 12:24:49 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.9193524,-594.4238,6.314516,593839.3);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(508948.5);
   
   TH1F *st_stack_150 = new TH1F("st_stack_150","",30,0,6);
   st_stack_150->SetMinimum(0.01);
   st_stack_150->SetMaximum(534396);
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
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,440.6237);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,118787.2);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,192773.4);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,168372.8);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,145070.2);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,135158.7);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,114370.8);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,96382.78);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,87579);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,66833.36);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,51321.06);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,48581.9);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,42410.1);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,39204.13);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,33393.88);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,28801.67);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,26850.15);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,37816.18);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,18214.6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,18112.14);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(21,16975.36);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,14569.82);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(23,13771.47);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(24,9858.265);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(25,9060.873);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(26,5505.822);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(27,5411.729);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(28,17851.38);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(29,1854.23);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(30,657.1096);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(31,2083.921);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,272.7889);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,4285.643);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,15818.02);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,15679.39);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,5057.794);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,4941.876);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,4685.96);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,4093.121);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,15256.41);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,3671.489);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,2670.322);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,2661.897);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,2863.249);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,2407.298);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,2394.53);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,1934.725);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,1962.357);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,14914.93);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,1471.39);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,1492.699);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(21,1488.142);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,1404.004);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(23,1349.964);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(24,1104.23);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(25,1035.669);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(26,638.504);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(27,783.4886);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(28,14820.42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(29,398.8838);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(30,86.66876);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(31,483.5863);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(116866);

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
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,2.72736);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,699.6283);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,1427.375);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,1513.799);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,1317.042);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,1058.717);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,835.9317);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,673.6847);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,537.3908);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,443.4766);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,363.0661);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,314.166);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,281.7548);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,250.1607);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,220.4818);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,213.2073);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,189.1617);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,176.7504);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,157.1669);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,144.4431);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,123.1299);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(22,112.4834);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(23,90.93901);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(24,71.60487);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(25,48.5078);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(26,36.52831);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(27,23.095);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(28,14.60793);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(29,6.510395);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(30,5.322815);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(31,12.62438);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.6434324);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,10.19538);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,14.32393);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,14.79402);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,13.8566);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,12.36012);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,11.08918);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,9.991093);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,8.90094);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,8.14904);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,7.194881);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,6.665552);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,6.330948);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,5.924148);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,5.444999);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,5.5804);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,5.254808);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,5.120171);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,4.732239);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,4.598719);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,4.156605);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(22,4.038873);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(23,3.599423);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(24,3.195365);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(25,2.589289);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(26,2.308627);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(27,1.79235);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(28,1.457967);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(29,0.8769454);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(30,0.8102581);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(31,1.383439);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(147618);

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
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(1,27.98337);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(2,14744.74);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(3,33072.32);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(4,31006.45);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(5,23135.75);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(6,16514.52);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(7,11912.57);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(8,8881.274);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(9,6868.7);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(10,5610.188);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(11,4726.869);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(12,4144.829);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(13,3683.885);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(14,3348.827);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(15,3130.751);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(16,2911.274);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(17,2664.098);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(18,2526.975);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(19,2356.328);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(20,2242.844);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(21,2050.192);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(22,1785.6);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(23,1408.562);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(24,1022.495);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(25,669.9689);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(26,413.9387);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(27,238.4926);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(28,128.6687);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(29,69.87193);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(30,40.8231);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(31,71.26621);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(1,1.283836);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(2,30.65689);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(3,45.94873);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(4,44.24273);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(5,37.93435);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(6,31.87229);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(7,26.95703);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(8,23.22216);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(9,20.39936);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(10,18.41978);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(11,16.90409);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(12,15.83074);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(13,14.94161);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(14,14.24177);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(15,13.8008);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(16,13.31125);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(17,12.76547);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(18,12.45741);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(19,12.03174);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(20,11.78217);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(21,11.27548);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(22,10.55029);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(23,9.36986);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(24,7.981485);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(25,6.432405);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(26,5.045767);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(27,3.807026);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(28,2.779105);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(29,2.024823);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(30,1.527546);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(31,2.026387);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetEntries(3230340);

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
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(1,2.443681);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(2,760.3576);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(3,1282.167);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(4,1092.629);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(5,936.3398);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(6,719.2583);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(7,593.8232);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(8,485.918);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(9,376.7873);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(10,308.5382);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(11,251.1222);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(12,246.9202);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(13,209.4119);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(14,182.7563);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(15,159.9677);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(16,177.2675);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(17,127.9395);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(18,129.4028);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(19,116.217);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(20,97.23654);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(21,92.01487);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(22,78.30118);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(23,70.44926);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(24,55.96774);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(25,45.75636);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(26,24.93701);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(27,16.58105);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(28,12.79244);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(29,7.654885);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(30,4.353376);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(31,7.923816);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(1,0.7655831);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(2,17.3682);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(3,26.81089);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(4,27.48591);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(5,25.22326);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(6,19.5695);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(7,18.40634);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(8,16.20345);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(9,13.69903);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(10,12.8487);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(11,10.49048);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(12,12.04302);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(13,11.30489);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(14,8.650211);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(15,7.47352);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(16,11.06094);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(17,8.343746);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(18,8.021729);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(19,8.631501);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(20,6.014646);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(21,6.439423);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(22,5.625729);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(23,5.430272);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(24,5.035794);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(25,5.454964);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(26,2.165388);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(27,1.605107);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(28,1.519334);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(29,1.136072);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(30,0.8602531);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(31,1.284246);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetEntries(52708);

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
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(1,0.692821);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(2,269.3835);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(3,398.7497);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(4,309.8296);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(5,283.0149);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(6,255.5961);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(7,212.0627);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(8,145.8677);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(9,138.0692);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(10,124.7008);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(11,92.67124);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(12,94.28223);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(13,73.1416);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(14,77.2418);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(15,58.43175);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(16,61.21557);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(17,46.46958);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(18,54.82709);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(19,35.12854);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(20,44.43167);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(21,32.05041);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(22,23.84995);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(23,23.31973);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(24,21.11065);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(25,18.24119);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(26,13.60958);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(27,16.32724);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(28,6.867024);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(29,4.611656);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(30,1.03944);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(31,2.762945);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(1,0.2641763);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(2,17.41064);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(3,22.16414);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(4,22.2672);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(5,18.24958);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(6,19.84962);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(7,18.87772);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(8,9.04697);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(9,12.53178);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(10,15.12467);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(11,11.39177);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(12,11.68123);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(13,8.750579);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(14,12.75184);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(15,8.238537);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(16,5.851279);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(17,8.097896);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(18,8.662724);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(19,4.315775);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(20,8.097777);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(21,4.351642);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(22,3.432875);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(23,3.424769);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(24,3.174665);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(25,2.916923);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(26,2.789711);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(27,6.98244);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(28,1.789431);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(29,1.409272);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(30,0.339655);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(31,0.5679286);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetEntries(17207);

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
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(1,0.03230234);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(2,12.20705);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(3,19.59944);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(4,12.20221);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(5,7.037064);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(6,4.42865);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(7,3.231849);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(8,2.627795);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(9,2.227246);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(10,1.881611);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(11,1.649034);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(12,1.472987);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(13,1.308245);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(14,1.217798);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(15,1.16773);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(16,0.994912);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(17,0.870548);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(18,0.8398608);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(19,0.69127);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(20,0.7009607);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(21,0.649277);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(22,0.6848096);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(23,0.5378339);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(24,0.4926106);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(25,0.3052571);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(26,0.1921989);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(27,0.1114431);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(28,0.05652909);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(29,0.02261164);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(30,0.01292094);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(31,0.0193814);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(1,0.007223022);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(2,0.140413);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(3,0.1779196);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(4,0.1403852);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(5,0.1066099);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(6,0.08457416);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(7,0.07224828);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(8,0.0651475);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(9,0.05997719);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(10,0.05512732);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(11,0.05160798);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(12,0.04877546);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(13,0.04596703);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(14,0.04434959);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(15,0.04342833);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(16,0.04008615);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(17,0.03749716);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(18,0.03683033);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(19,0.0334138);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(20,0.03364719);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(21,0.03238299);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(22,0.03325729);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(23,0.02947312);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(24,0.0282068);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(25,0.02220419);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(26,0.01761885);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(27,0.01341617);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(28,0.00955516);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(29,0.006043214);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(30,0.00456824);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(31,0.005594929);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetEntries(49206);

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
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(1,0.008292511);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(2,3.900797);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(3,9.042154);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(4,7.577282);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(5,5.212672);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(6,3.511049);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(7,2.529216);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(8,1.996007);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(9,1.654771);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(10,1.381947);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(11,1.194536);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(12,1.030759);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(13,0.931249);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(14,0.8400313);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(15,0.8076905);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(16,0.7264239);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(17,0.6468158);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(18,0.5829635);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(19,0.5510373);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(20,0.497136);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(21,0.457332);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(22,0.4349422);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(23,0.3561633);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(24,0.2578971);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(25,0.1724842);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(26,0.1268754);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(27,0.07504722);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(28,0.03317004);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(29,0.0194874);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(30,0.01160952);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(31,0.0161704);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(1,0.001854262);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(2,0.04021654);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(3,0.06122996);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(4,0.05605118);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(5,0.04648986);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(6,0.03815456);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(7,0.03238329);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(8,0.02876796);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(9,0.0261937);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(10,0.02393722);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(11,0.022255);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(12,0.02067315);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(13,0.01964993);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(14,0.01866276);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(15,0.01829998);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(16,0.01735494);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(17,0.0163764);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(18,0.01554708);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(19,0.01511536);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(20,0.01435706);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(21,0.01377031);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(22,0.013429);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(23,0.01215214);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(24,0.01034073);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(25,0.008456735);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(26,0.007252985);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(27,0.005578216);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(28,0.003708524);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(29,0.002842529);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(30,0.002193992);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(31,0.002589336);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetEntries(112352);

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
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(1,64);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(2,20145);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(3,29885);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(4,27970);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(5,26742);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(6,22687);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(7,18918);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(8,15313);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(9,12635);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(10,10477);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(11,9116);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(12,7945);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(13,7026);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(14,6153);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(15,5753);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(16,5358);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(17,4557);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(18,4002);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(19,3532);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(20,3267);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(21,2949);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(22,2519);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(23,2115);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(24,1722);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(25,1372);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(26,983);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(27,733);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(28,521);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(29,325);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(30,221);
   VbbHcc_algo_Z_dR_Bj1__411->SetBinContent(31,334);
   VbbHcc_algo_Z_dR_Bj1__411->SetEntries(255368);

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
   474.7647,
   135308.3,
   229026.8,
   202338.7,
   170769.5,
   153730.4,
   127942.9,
   106583.5,
   95511.59,
   73330.72,
   56763.36,
   53389.95,
   46665.39,
   43069.72,
   36968.01,
   32169.51,
   29882.87,
   40707.82,
   20882.69,
   20645.82,
   19275.19,
   16571.93,
   15366.9,
   11031.71,
   9845.079,
   5996.974,
   5706.413,
   18014.41,
   1943.176,
   708.6729};
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
   272.794,
   4285.837,
   15818.13,
   15679.5,
   5058.052,
   4942.074,
   4686.125,
   4093.242,
   15256.43,
   3671.598,
   2670.431,
   2662.006,
   2863.33,
   2407.397,
   2394.602,
   1934.82,
   1962.44,
   14914.94,
   1471.478,
   1492.787,
   1488.211,
   1404.065,
   1350.016,
   1104.279,
   1035.711,
   638.5382,
   783.5326,
   14820.42,
   398.894,
   86.69094};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1299,Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1299,Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1299,Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1299);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->SetMinimum(181.7737);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11299->SetMaximum(269309.3);
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
   data_mc_ratio__412->SetBinContent(1,0.1348036);
   data_mc_ratio__412->SetBinContent(2,0.1488823);
   data_mc_ratio__412->SetBinContent(3,0.1304869);
   data_mc_ratio__412->SetBinContent(4,0.1382336);
   data_mc_ratio__412->SetBinContent(5,0.1565971);
   data_mc_ratio__412->SetBinContent(6,0.1475765);
   data_mc_ratio__412->SetBinContent(7,0.1478629);
   data_mc_ratio__412->SetBinContent(8,0.1436714);
   data_mc_ratio__412->SetBinContent(9,0.1322876);
   data_mc_ratio__412->SetBinContent(10,0.1428733);
   data_mc_ratio__412->SetBinContent(11,0.1605966);
   data_mc_ratio__412->SetBinContent(12,0.1488108);
   data_mc_ratio__412->SetBinContent(13,0.1505613);
   data_mc_ratio__412->SetBinContent(14,0.1428614);
   data_mc_ratio__412->SetBinContent(15,0.155621);
   data_mc_ratio__412->SetBinContent(16,0.1665552);
   data_mc_ratio__412->SetBinContent(17,0.1524954);
   data_mc_ratio__412->SetBinContent(18,0.09831035);
   data_mc_ratio__412->SetBinContent(19,0.1691353);
   data_mc_ratio__412->SetBinContent(20,0.1582403);
   data_mc_ratio__412->SetBinContent(21,0.1529946);
   data_mc_ratio__412->SetBinContent(22,0.152004);
   data_mc_ratio__412->SetBinContent(23,0.1376335);
   data_mc_ratio__412->SetBinContent(24,0.1560955);
   data_mc_ratio__412->SetBinContent(25,0.139359);
   data_mc_ratio__412->SetBinContent(26,0.163916);
   data_mc_ratio__412->SetBinContent(27,0.128452);
   data_mc_ratio__412->SetBinContent(28,0.02892129);
   data_mc_ratio__412->SetBinContent(29,0.167252);
   data_mc_ratio__412->SetBinContent(30,0.3118505);
   data_mc_ratio__412->SetBinContent(31,0.1533141);
   data_mc_ratio__412->SetBinError(1,0.01685045);
   data_mc_ratio__412->SetBinError(2,0.001048961);
   data_mc_ratio__412->SetBinError(3,0.0007548145);
   data_mc_ratio__412->SetBinError(4,0.0008265465);
   data_mc_ratio__412->SetBinError(5,0.0009576055);
   data_mc_ratio__412->SetBinError(6,0.0009797802);
   data_mc_ratio__412->SetBinError(7,0.001075032);
   data_mc_ratio__412->SetBinError(8,0.001161021);
   data_mc_ratio__412->SetBinError(9,0.001176878);
   data_mc_ratio__412->SetBinError(10,0.00139583);
   data_mc_ratio__412->SetBinError(11,0.001682031);
   data_mc_ratio__412->SetBinError(12,0.001669504);
   data_mc_ratio__412->SetBinError(13,0.001796219);
   data_mc_ratio__412->SetBinError(14,0.001821258);
   data_mc_ratio__412->SetBinError(15,0.002051734);
   data_mc_ratio__412->SetBinError(16,0.002275396);
   data_mc_ratio__412->SetBinError(17,0.002259005);
   data_mc_ratio__412->SetBinError(18,0.001554035);
   data_mc_ratio__412->SetBinError(19,0.002845928);
   data_mc_ratio__412->SetBinError(20,0.002768487);
   data_mc_ratio__412->SetBinError(21,0.002817337);
   data_mc_ratio__412->SetBinError(22,0.003028593);
   data_mc_ratio__412->SetBinError(23,0.00299274);
   data_mc_ratio__412->SetBinError(24,0.003761609);
   data_mc_ratio__412->SetBinError(25,0.003762339);
   data_mc_ratio__412->SetBinError(26,0.005228108);
   data_mc_ratio__412->SetBinError(27,0.004744482);
   data_mc_ratio__412->SetBinError(28,0.001267065);
   data_mc_ratio__412->SetBinError(29,0.009277471);
   data_mc_ratio__412->SetBinError(30,0.02097734);
   data_mc_ratio__412->SetBinError(31,0.03505159);
   data_mc_ratio__412->SetMinimum(0.4);
   data_mc_ratio__412->SetMaximum(1.6);
   data_mc_ratio__412->SetEntries(1360.76);
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
   0.5745878,
   0.03167461,
   0.06906671,
   0.07749136,
   0.02961918,
   0.03214766,
   0.0366267,
   0.03840408,
   0.1597339,
   0.05006903,
   0.04704497,
   0.04985968,
   0.06135876,
   0.05589535,
   0.06477499,
   0.06014453,
   0.06567107,
   0.36639,
   0.07046402,
   0.07230457,
   0.07720864,
   0.08472546,
   0.08785223,
   0.1001005,
   0.1052008,
   0.1064767,
   0.1373074,
   0.8226979,
   0.2052794,
   0.1223286};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1300,Graph_from_mc_statistical_error_fy1300,Graph_from_mc_statistical_error_fex1300,Graph_from_mc_statistical_error_fey1300);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1300 = new TH1F("Graph_Graph_from_mc_statistical_error1300","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1300->SetMinimum(0.01276256);
   Graph_Graph_from_mc_statistical_error1300->SetMaximum(1.987237);
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
