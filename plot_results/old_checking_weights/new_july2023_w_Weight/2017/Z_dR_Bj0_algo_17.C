void Z_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_17/Z_dR_Bj0_algo_17
//=========  (Thu Aug 10 10:42:24 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_17 = new TCanvas("Z_dR_Bj0_algo_17", "Z_dR_Bj0_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_17->SetHighLightColor(2);
   Z_dR_Bj0_algo_17->Range(0,0,1,1);
   Z_dR_Bj0_algo_17->SetFillColor(0);
   Z_dR_Bj0_algo_17->SetFillStyle(4000);
   Z_dR_Bj0_algo_17->SetBorderMode(0);
   Z_dR_Bj0_algo_17->SetBorderSize(2);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.930714,6.314516,14.72526);
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
   st->SetMaximum(2.352189e+12);
   
   TH1F *st_stack_146 = new TH1F("st_stack_146","",30,0,6);
   st_stack_146->SetMinimum(0.001221637);
   st_stack_146->SetMaximum(9.113073e+12);
   st_stack_146->SetDirectory(0);
   st_stack_146->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_146->SetLineColor(ci);
   st_stack_146->GetXaxis()->SetRange(1,30);
   st_stack_146->GetXaxis()->SetLabelFont(42);
   st_stack_146->GetXaxis()->SetLabelSize(0.035);
   st_stack_146->GetXaxis()->SetTitleSize(0.035);
   st_stack_146->GetXaxis()->SetTitleFont(42);
   st_stack_146->GetYaxis()->SetTitle("Events/0.2");
   st_stack_146->GetYaxis()->SetLabelFont(42);
   st_stack_146->GetYaxis()->SetLabelSize(0.05);
   st_stack_146->GetYaxis()->SetTitleSize(0.057);
   st_stack_146->GetYaxis()->SetTitleOffset(1.2);
   st_stack_146->GetYaxis()->SetTitleFont(42);
   st_stack_146->GetZaxis()->SetLabelFont(42);
   st_stack_146->GetZaxis()->SetLabelSize(0.035);
   st_stack_146->GetZaxis()->SetTitleSize(0.035);
   st_stack_146->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_146);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,92258.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,320814.9);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,289786.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,217815.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,148419.8);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,86741.43);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,83876.62);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,57167.05);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,45034.64);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,45931.56);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,32660.47);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,36055.97);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,20520.79);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,17649.98);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,15815.23);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,12730.35);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,11104.72);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,5689.637);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,7243.581);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,7072.844);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,2921.318);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,2593.74);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,2770.802);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,806.7069);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,462.7094);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,124.2523);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(27,40.21417);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(28,78.83528);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(29,108.1971);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(30,0.2153231);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(31,185.855);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,2383.471);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,16243.11);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,6996.649);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,6384.581);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,15606.6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,3802.787);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,15195.91);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,3379.584);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,3278.592);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,15023.79);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,2955.293);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,14926.56);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,1872.08);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,2110.985);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,1676.965);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,1471.962);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,1413.056);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,875.0491);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,1152.936);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,1653.657);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,673.1992);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,716.9171);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,1410.809);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,383.7241);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,273.3181);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,46.70478);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(27,26.92822);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(28,38.07114);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(29,45.74684);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(30,0.2153231);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(31,63.21692);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(112106);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,424.7078);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,2203.037);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,2429.812);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,1746.94);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,1114.614);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,745.2807);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,509.9898);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,391.0002);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,318.8585);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,243.7964);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,207.4413);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,180.7068);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,153.4853);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,126.5615);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,123.1319);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,108.7618);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,91.82984);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,78.19513);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,65.58218);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,43.13617);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,23.61488);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,13.7175);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,8.991161);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,6.577191);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,2.262159);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,3.213786);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,1.943998);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,1.948862);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,0.7904142);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,1.107714);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,2.471119);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,8.192756);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,18.05464);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,18.83747);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,16.06022);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,12.72482);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,10.50646);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,8.641999);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,7.522377);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,6.873826);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,5.892861);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,5.482252);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,5.103846);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,4.727821);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,4.184036);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,4.292802);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,3.952815);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,3.585127);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,3.418952);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,3.201904);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,2.544771);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,1.814114);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,1.331178);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,1.092382);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,0.9481079);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.4792477);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.7080294);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.4618399);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.5696167);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.3118127);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.4739881);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.5930777);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(138653);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(1,6828.574);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(2,43281.81);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(3,44739.96);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(4,28486.93);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(5,16930.41);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(6,10852.88);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(7,7549.158);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(8,5720.572);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(9,4517.742);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(10,3696.307);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(11,3124.16);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(12,2663.378);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(13,2353.766);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(14,2063.081);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(15,1844.158);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(16,1653.047);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(17,1437.313);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(18,1238.718);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(19,980.0071);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(20,659.3626);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(21,369.7932);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(22,171.9559);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(23,86.74708);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(24,45.58913);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(25,31.15789);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(26,19.58104);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(27,14.59899);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(28,10.21382);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(29,7.764822);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(30,3.896861);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(31,12.71305);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(1,21.05621);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(2,52.83251);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(3,53.43752);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(4,42.43847);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(5,32.6463);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(6,26.10591);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(7,21.7582);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(8,18.92124);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(9,16.81697);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(10,15.18899);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(11,13.98098);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(12,12.91293);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(13,12.14419);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(14,11.36909);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(15,10.78383);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(16,10.22729);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(17,9.536005);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(18,8.87078);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(19,7.899392);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(20,6.471177);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(21,4.831258);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(22,3.28033);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(23,2.303466);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(24,1.662366);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(25,1.371102);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(26,1.082323);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(27,0.9457395);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(28,0.7807472);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(29,0.6816478);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(30,0.4765628);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(31,0.8714699);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetEntries(3113082);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(1,514.4925);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(2,2000.239);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(3,1803.353);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(4,1199.411);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(5,783.1198);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(6,490.9481);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(7,371.5085);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(8,292.8723);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(9,224.6965);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(10,181.1628);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(11,139.8274);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(12,129.1951);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(13,99.73415);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(14,94.57248);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(15,74.27669);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(16,79.18452);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(17,57.94554);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(18,52.17207);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(19,32.30176);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(20,19.12243);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(21,13.04928);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(22,6.751792);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(23,5.039961);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(24,4.282395);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(25,1.096183);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(26,2.792093);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(27,1.764994);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(28,3.050229);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(29,0.4311207);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(30,0.08992428);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(31,1.585145);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(1,10.35859);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(2,28.13212);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(3,34.7545);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(4,27.99326);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(5,22.35795);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(6,16.69053);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(7,16.06678);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(8,14.62756);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(9,11.41879);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(10,8.907741);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(11,7.856498);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(12,8.9084);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(13,6.706268);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(14,7.115557);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(15,5.643626);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(16,8.584998);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(17,6.455582);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(18,5.83827);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(19,3.872575);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(20,2.116532);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(21,1.812413);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(22,1.36323);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(23,1.10553);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(24,1.026477);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(25,0.4371066);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(26,0.9116556);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(27,0.67037);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(28,2.732364);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(29,0.1935118);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(30,0.08992428);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(31,0.658197);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetEntries(54522);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(1,233.7644);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(2,711.919);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(3,521.3179);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(4,412.9114);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(5,262.5751);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(6,173.9928);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(7,124.3683);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(8,108.8494);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(9,72.64963);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(10,64.68236);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(11,45.16434);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(12,36.69219);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(13,29.11225);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(14,49.39578);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(15,24.46097);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(16,17.99877);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(17,15.27521);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(18,16.32772);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(19,12.16001);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(20,8.83681);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(21,1.95496);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(22,1.450845);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(23,1.812262);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(24,0.8064408);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(25,1.506776);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(26,1.495162);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(28,1.201524);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(29,0.2144719);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(30,0.1695762);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(31,0.3631266);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(1,8.29391);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(2,30.78465);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(3,23.4403);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(4,27.13407);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(5,20.21591);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(6,15.11568);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(7,12.71182);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(8,15.10275);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(9,9.319016);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(10,8.953837);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(11,5.340904);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(12,4.534749);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(13,4.234584);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(14,13.80991);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(15,3.945249);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(16,3.511712);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(17,3.063704);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(18,3.376205);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(19,2.998957);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(20,2.710295);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(21,0.5009473);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(22,0.4403086);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(23,0.6465124);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(24,0.3085626);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(25,1.17514);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(26,1.175082);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(28,1.1575);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(29,0.1754187);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(30,0.1695762);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(31,0.2186078);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetEntries(16864);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(1,2.522447);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(2,7.567341);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(3,4.414282);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(4,3.783671);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(5,1.261224);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(6,0.9459177);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(7,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(8,0.6306118);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(9,1.576529);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(10,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(12,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(13,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(14,0.6306118);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(17,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(18,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(19,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(24,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(1,0.8918197);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(2,1.544677);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(3,1.179767);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(4,1.092252);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(5,0.6306118);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(6,0.5461258);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(7,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(8,0.4459099);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(9,0.7050454);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(10,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(11,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(12,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(13,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(14,0.4459099);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(17,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(18,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(19,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(24,0.3153059);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(1,5.70267);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(2,21.57097);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(3,13.14094);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(4,8.430034);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(5,3.471191);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(6,3.223248);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(7,2.975306);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(8,1.735595);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(9,2.727364);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(10,1.487653);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(11,0.9917687);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(12,0.4958844);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(13,0.7438266);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(14,0.9917687);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(15,1.487653);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(16,0.7438266);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(17,0.4958844);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(18,0.4958844);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(20,0.4958844);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(22,0.2479422);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(25,0.2479422);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(1,1.189089);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(2,2.312651);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(3,1.805046);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(4,1.445739);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(5,0.9277147);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(6,0.8939683);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(7,0.8588969);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(8,0.6559934);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(9,0.8223312);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(10,0.6073318);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(11,0.4958844);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(12,0.3506432);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(13,0.4294485);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(14,0.4958844);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(15,0.6073318);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(16,0.4294485);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(17,0.3506432);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(18,0.3506432);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(20,0.3506432);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(22,0.2479422);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(25,0.2479422);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetEntries(290);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(1,8.609671);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(2,35.19836);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(3,24.81611);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(4,10.63548);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(5,9.875799);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(6,3.291933);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(7,4.05161);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(8,3.038707);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(9,2.27903);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(10,2.025805);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(11,1.012902);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(12,2.025805);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(13,0.2532256);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(14,1.266128);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(15,1.519354);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(16,0.7596768);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(17,0.5064512);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(18,0.2532256);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(21,0.7596768);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(1,1.476546);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(2,2.985486);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(3,2.506806);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(4,1.64109);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(5,1.581393);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(6,0.9130179);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(7,1.012902);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(8,0.8771992);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(9,0.7596768);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(10,0.7162302);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(11,0.5064512);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(12,0.7162302);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(13,0.2532256);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(14,0.5662297);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(15,0.6202735);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(16,0.4385996);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(17,0.3581151);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(18,0.2532256);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(21,0.4385996);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(1,5.947569);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(2,27.40249);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(3,16.66753);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(4,8.10623);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(5,4.519019);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(6,3.173815);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(7,2.39203);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(8,2.073648);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(9,1.713593);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(10,1.386877);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(11,1.183513);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(12,0.8667982);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(13,0.766783);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(14,0.7551146);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(15,0.643431);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(16,0.4717382);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(17,0.393393);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(18,0.3583877);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(19,0.3267162);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(20,0.1966965);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(21,0.1133505);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(22,0.05834218);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(23,0.0166692);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(24,0.01000152);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(25,0.006667678);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(26,0.008334598);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(30,0.00166692);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(31,0.005000759);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(1,0.09956967);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(2,0.2137235);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(3,0.1666836);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(4,0.116243);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(5,0.08679194);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(6,0.07273578);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(7,0.06314524);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(8,0.05879289);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(9,0.05344551);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(10,0.04808131);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(11,0.04441645);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(12,0.03801161);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(13,0.03575144);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(14,0.03547838);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(15,0.03274977);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(16,0.02804193);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(17,0.0256077);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(18,0.02444184);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(19,0.02333687);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(20,0.01810738);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(21,0.01374577);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(22,0.009861629);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(23,0.005271263);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(24,0.004083102);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(25,0.003333839);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(26,0.003727345);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(30,0.00166692);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(31,0.002887189);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetEntries(47732);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(1,1.881525);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(2,11.75756);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(3,10.68151);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(4,6.266348);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(5,3.659561);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(6,2.393157);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(7,1.77762);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(8,1.450524);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(9,1.209879);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(10,0.9363987);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(11,0.7634995);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(12,0.6533594);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(13,0.577716);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(14,0.5137101);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(15,0.4954227);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(16,0.4039856);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(17,0.3358234);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(18,0.2726487);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(19,0.2007459);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(20,0.1504555);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(21,0.09684017);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(22,0.0415623);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(23,0.02036553);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(24,0.01496243);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(25,0.003740607);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(26,0.007065592);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(27,0.002909361);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(28,0.00415623);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(29,0.001662492);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(30,0.002909361);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(31,0.003740607);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(1,0.02796436);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(2,0.06990503);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(3,0.06662944);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(4,0.0510337);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(5,0.03899997);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(6,0.03153809);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(7,0.02718124);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(8,0.02455344);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(9,0.02242439);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(10,0.01972787);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(11,0.0178137);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(12,0.01647881);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(13,0.01549555);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(14,0.01461197);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(15,0.01434953);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(16,0.01295784);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(17,0.01181423);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(18,0.01064514);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(19,0.009134256);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(20,0.007907767);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(21,0.00634421);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(22,0.00415623);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(23,0.002909361);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(24,0.002493738);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(25,0.001246869);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(26,0.001713658);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(27,0.001099635);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(28,0.001314315);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(29,0.0008312461);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(30,0.001099635);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(31,0.001246869);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetEntries(112076);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(1,0.06162979);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(2,0.1975314);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(3,0.1311608);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(4,0.0679508);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(5,0.02844452);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(6,0.03476553);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(7,0.02054326);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(8,0.01422226);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(9,0.02212352);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(10,0.01896301);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(11,0.007901256);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(12,0.01106176);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(13,0.004740753);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(14,0.006321005);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(15,0.006321005);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(17,0.009481507);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(19,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(20,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(1,0.009868665);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(2,0.01766774);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(3,0.01439677);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(4,0.0103624);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(5,0.006704438);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(6,0.007412035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(7,0.005697677);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(8,0.004740753);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(9,0.005912758);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(10,0.005474151);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(11,0.003533549);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(12,0.004180952);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(13,0.002737075);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(14,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(15,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(17,0.003870809);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(19,0.002234813);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(20,0.002234813);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(21,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(23,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(1,0.01162592);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(2,0.07556846);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(3,0.06581099);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(4,0.04193634);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(5,0.02055296);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(6,0.0184769);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(7,0.01287155);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(8,0.01058789);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(9,0.008096621);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(10,0.009342254);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(11,0.004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(12,0.004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(13,0.004359719);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(14,0.002491268);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(15,0.002283662);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(16,0.003529296);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(17,0.002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(18,0.001660845);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(19,0.00145324);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(20,0.000622817);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(21,0.0008304226);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(23,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(1,0.001553578);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(2,0.003960863);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(3,0.003696314);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(4,0.002950631);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(5,0.00206565);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(6,0.001958548);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(7,0.001634689);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(8,0.001482601);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(9,0.001296497);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(10,0.001392661);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(11,0.0009284407);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(12,0.0009284407);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(13,0.0009513686);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(14,0.0007191671);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(15,0.0006885501);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(16,0.00085598);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(17,0.0006565067);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(18,0.0005871975);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(19,0.0005492729);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(20,0.0003595835);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(21,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(23,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(27,0.0002076057);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0__400 = new TH1D("VbbHcc_algo_Z_dR_Bj0__400","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(1,14684);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(2,48734);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(3,44392);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(4,33595);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(5,22392);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(6,14678);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(7,10764);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(8,8147);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(9,6548);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(10,5515);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(11,4572);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(12,3911);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(13,3268);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(14,2740);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(15,2444);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(16,2113);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(17,1729);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(18,1382);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(19,1057);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(20,802);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(21,522);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(22,290);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(23,166);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(24,124);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(25,99);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(26,59);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(27,48);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(28,42);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(29,23);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(30,24);
   VbbHcc_algo_Z_dR_Bj0__400->SetBinContent(31,44);
   VbbHcc_algo_Z_dR_Bj0__400->SetEntries(234937);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0__400->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0__400->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj0__400->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj0__400->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj0__400->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0__400->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__400->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__400->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__400->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__400->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__400->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__400->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__400->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0__400->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__400->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__400->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__400->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__400->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__400->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1291[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1291[30] = {
   100284.6,
   369115.7,
   339350.7,
   249698.8,
   167533.4,
   99017.62,
   92443.19,
   63689.3,
   50178.13,
   50123.69,
   36181.34,
   39070.31,
   23159.55,
   19987.76,
   17885.41,
   14591.72,
   12709.14,
   7076.747,
   8334.48,
   7804.149,
   3330.703,
   2787.964,
   2873.431,
   864.3023,
   498.9908,
   151.3498,
   58.52527,
   95.25387,
   117.3996,
   5.483975};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1291[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1291[30] = {
   2383.616,
   16243.26,
   6997.005,
   6384.862,
   15606.67,
   3802.958,
   15195.94,
   3379.711,
   3278.675,
   15023.81,
   2955.346,
   14926.56,
   1872.142,
   2111.077,
   1677.02,
   1472.032,
   1413.111,
   875.1269,
   1152.978,
   1653.675,
   673.2218,
   716.9273,
   1410.812,
   383.7305,
   273.325,
   46.74635,
   26.95711,
   38.19884,
   45.75373,
   0.7314283};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1291,Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1291,Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1291,Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1291);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetMinimum(4.277292);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetMaximum(423894.4);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01291);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__401 = new TH1D("data_mc_ratio__401","",30,0,6);
   data_mc_ratio__401->SetBinContent(1,0.1464233);
   data_mc_ratio__401->SetBinContent(2,0.1320291);
   data_mc_ratio__401->SetBinContent(3,0.1308145);
   data_mc_ratio__401->SetBinContent(4,0.1345421);
   data_mc_ratio__401->SetBinContent(5,0.1336569);
   data_mc_ratio__401->SetBinContent(6,0.1482362);
   data_mc_ratio__401->SetBinContent(7,0.1164391);
   data_mc_ratio__401->SetBinContent(8,0.1279179);
   data_mc_ratio__401->SetBinContent(9,0.1304951);
   data_mc_ratio__401->SetBinContent(10,0.1100278);
   data_mc_ratio__401->SetBinContent(11,0.1263635);
   data_mc_ratio__401->SetBinContent(12,0.1001016);
   data_mc_ratio__401->SetBinContent(13,0.1411081);
   data_mc_ratio__401->SetBinContent(14,0.1370839);
   data_mc_ratio__401->SetBinContent(15,0.1366477);
   data_mc_ratio__401->SetBinContent(16,0.1448081);
   data_mc_ratio__401->SetBinContent(17,0.1360438);
   data_mc_ratio__401->SetBinContent(18,0.1952875);
   data_mc_ratio__401->SetBinContent(19,0.1268226);
   data_mc_ratio__401->SetBinContent(20,0.1027659);
   data_mc_ratio__401->SetBinContent(21,0.1567237);
   data_mc_ratio__401->SetBinContent(22,0.1040186);
   data_mc_ratio__401->SetBinContent(23,0.05777065);
   data_mc_ratio__401->SetBinContent(24,0.1434683);
   data_mc_ratio__401->SetBinContent(25,0.1984004);
   data_mc_ratio__401->SetBinContent(26,0.3898255);
   data_mc_ratio__401->SetBinContent(27,0.8201586);
   data_mc_ratio__401->SetBinContent(28,0.440927);
   data_mc_ratio__401->SetBinContent(29,0.1959121);
   data_mc_ratio__401->SetBinContent(30,4.376388);
   data_mc_ratio__401->SetBinContent(31,0.2167528);
   data_mc_ratio__401->SetBinError(1,0.001208337);
   data_mc_ratio__401->SetBinError(2,0.0005980721);
   data_mc_ratio__401->SetBinError(3,0.0006208742);
   data_mc_ratio__401->SetBinError(4,0.0007340419);
   data_mc_ratio__401->SetBinError(5,0.0008931925);
   data_mc_ratio__401->SetBinError(6,0.001223548);
   data_mc_ratio__401->SetBinError(7,0.001122308);
   data_mc_ratio__401->SetBinError(8,0.001417204);
   data_mc_ratio__401->SetBinError(9,0.001612649);
   data_mc_ratio__401->SetBinError(10,0.001481596);
   data_mc_ratio__401->SetBinError(11,0.001868824);
   data_mc_ratio__401->SetBinError(12,0.001600652);
   data_mc_ratio__401->SetBinError(13,0.002468374);
   data_mc_ratio__401->SetBinError(14,0.002618853);
   data_mc_ratio__401->SetBinError(15,0.002764087);
   data_mc_ratio__401->SetBinError(16,0.003150237);
   data_mc_ratio__401->SetBinError(17,0.00327176);
   data_mc_ratio__401->SetBinError(18,0.005253157);
   data_mc_ratio__401->SetBinError(19,0.003900848);
   data_mc_ratio__401->SetBinError(20,0.003628789);
   data_mc_ratio__401->SetBinError(21,0.006859609);
   data_mc_ratio__401->SetBinError(22,0.00610818);
   data_mc_ratio__401->SetBinError(23,0.004483872);
   data_mc_ratio__401->SetBinError(24,0.01288384);
   data_mc_ratio__401->SetBinError(25,0.01994);
   data_mc_ratio__401->SetBinError(26,0.05075096);
   data_mc_ratio__401->SetBinError(27,0.1183797);
   data_mc_ratio__401->SetBinError(28,0.06803651);
   data_mc_ratio__401->SetBinError(29,0.0408505);
   data_mc_ratio__401->SetBinError(30,0.8933264);
   data_mc_ratio__401->SetBinError(31,0.07500645);
   data_mc_ratio__401->SetMinimum(0.4);
   data_mc_ratio__401->SetMaximum(1.6);
   data_mc_ratio__401->SetEntries(65.92832);
   data_mc_ratio__401->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__401->SetLineColor(ci);
   data_mc_ratio__401->SetLineWidth(2);
   data_mc_ratio__401->SetMarkerStyle(20);
   data_mc_ratio__401->SetMarkerSize(1.2);
   data_mc_ratio__401->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__401->GetXaxis()->SetRange(1,30);
   data_mc_ratio__401->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__401->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__401->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__401->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__401->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__401->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__401->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__401->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__401->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__401->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__401->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__401->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__401->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__401->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__401->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__401->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__401->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1292[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1292[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1292[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1292[30] = {
   0.02376852,
   0.04400587,
   0.0206188,
   0.02557025,
   0.09315559,
   0.03840688,
   0.1643814,
   0.0530656,
   0.06534073,
   0.2997347,
   0.08168151,
   0.3820437,
   0.08083671,
   0.1056185,
   0.09376467,
   0.1008813,
   0.1111886,
   0.1236623,
   0.1383384,
   0.2118969,
   0.202126,
   0.2571509,
   0.4909852,
   0.4439772,
   0.5477556,
   0.308863,
   0.4606064,
   0.4010214,
   0.3897265,
   0.1333756};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1292,Graph_from_mc_statistical_error_fy1292,Graph_from_mc_statistical_error_fex1292,Graph_from_mc_statistical_error_fey1292);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1292 = new TH1F("Graph_Graph_from_mc_statistical_error1292","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1292->SetMinimum(0.3426933);
   Graph_Graph_from_mc_statistical_error1292->SetMaximum(1.657307);
   Graph_Graph_from_mc_statistical_error1292->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1292->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1292->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1292->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1292->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1292->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1292->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1292);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->SetSelected(Z_dR_Bj0_algo_17);
}
