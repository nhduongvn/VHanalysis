void Z_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Thu Aug  3 12:24:47 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(0,0,1,1);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetFillStyle(4000);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1157.679,6.314516,1156531);
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
   st->SetMaximum(991201.8);
   
   TH1F *st_stack_147 = new TH1F("st_stack_147","",30,0,6);
   st_stack_147->SetMinimum(0.01);
   st_stack_147->SetMaximum(1040762);
   st_stack_147->SetDirectory(0);
   st_stack_147->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_147->SetLineColor(ci);
   st_stack_147->GetXaxis()->SetRange(1,30);
   st_stack_147->GetXaxis()->SetLabelFont(42);
   st_stack_147->GetXaxis()->SetLabelSize(0.035);
   st_stack_147->GetXaxis()->SetTitleSize(0.035);
   st_stack_147->GetXaxis()->SetTitleFont(42);
   st_stack_147->GetYaxis()->SetTitle("Events/0.2");
   st_stack_147->GetYaxis()->SetLabelFont(42);
   st_stack_147->GetYaxis()->SetLabelSize(0.05);
   st_stack_147->GetYaxis()->SetTitleSize(0.057);
   st_stack_147->GetYaxis()->SetTitleOffset(1.2);
   st_stack_147->GetYaxis()->SetTitleFont(42);
   st_stack_147->GetZaxis()->SetLabelFont(42);
   st_stack_147->GetZaxis()->SetLabelSize(0.035);
   st_stack_147->GetZaxis()->SetTitleSize(0.035);
   st_stack_147->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_147);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,126280.9);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,384761.4);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,342873.9);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,268549.7);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,171832);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,114841.3);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,78664.28);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,58179.59);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,51886.29);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,36559.29);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,31105.86);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,28821.15);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(13,24966.88);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,21660.12);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(15,20138.79);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(16,15799.84);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(17,11240.66);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(18,11649.35);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(19,9128.853);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(20,5702.684);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(21,3964.174);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(22,4086.971);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(23,1677.482);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(24,1575.826);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(25,227.1665);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(26,239.0657);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(27,30.89564);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(28,822.8846);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(29,77.73068);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(30,32.23734);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(31,145.4945);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,3133.113);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,7828.013);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,8291.62);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,21275.23);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,6420.751);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,5250.339);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,4257.428);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,4238.755);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,3646.484);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,2644.959);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,2498.148);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,2876.259);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(13,2724.053);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,2636.827);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(15,2079.182);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(16,1859.37);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(17,1477.819);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(18,1608.114);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(19,1419.38);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(20,1133.395);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(21,929.5145);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(22,1825.908);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(23,651.0006);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(24,649.7439);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(25,65.4118);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(26,75.82682);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(27,16.99034);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(28,525.568);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(29,37.91958);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(30,31.92926);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(31,59.48028);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(114901);

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
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,535.8516);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,2719.694);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,2807.226);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,1965.91);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,1277.306);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,861.1925);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,605.1122);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,458.8354);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,355.5637);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,297.3052);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,241.3671);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,203.0346);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,176.7695);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,156.3052);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,135.7586);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(16,117.1271);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(17,104.1884);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(18,85.81481);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(19,65.5102);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(20,46.3258);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(21,26.117);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(22,17.69308);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(23,8.268453);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(24,9.20262);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(25,4.474317);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(26,3.54829);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(27,1.665474);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(28,1.898099);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(29,1.09124);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(30,0.5839278);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(31,1.314344);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,9.496263);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,20.81382);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,21.08355);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,17.66263);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,14.25802);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,11.72844);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,9.837209);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,8.498846);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,7.513272);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,6.834123);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,6.054442);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,5.581328);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,5.306974);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,4.964951);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,4.676601);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(16,4.25497);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(17,4.069061);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(18,3.686921);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(19,3.217735);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(20,2.648686);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(21,1.909123);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(22,1.538403);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(23,1.048315);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(24,1.260696);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(25,0.6800764);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(26,0.7490923);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(27,0.2903783);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(28,0.5381835);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(29,0.4155594);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(30,0.1762962);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(31,0.3529156);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(162879);

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
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(1,8873.637);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(2,54855.75);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(3,53366.08);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(4,33279.61);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(5,19743.72);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(6,12709.72);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(7,8973.479);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(8,6736.04);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(9,5376.615);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(10,4438.25);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(11,3752.603);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(12,3210.535);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(13,2803.235);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(14,2441.021);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(15,2179.241);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(16,1936.087);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(17,1686.718);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(18,1418.294);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(19,1101.372);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(20,775.5411);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(21,429.5758);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(22,199.7989);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(23,99.28258);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(24,60.23596);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(25,38.13417);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(26,24.8682);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(27,16.92962);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(28,12.57043);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(29,9.515733);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(30,6.198397);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinContent(31,16.39118);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(1,23.59403);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(2,58.49544);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(3,57.35448);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(4,45.04146);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(5,34.61501);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(6,27.74512);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(7,23.3004);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(8,20.17194);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(9,18.02807);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(10,16.3794);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(11,15.05756);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(12,13.93081);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(13,13.02296);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(14,12.16023);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(15,11.51431);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(16,10.86651);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(17,10.1484);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(18,9.321444);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(19,8.213602);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(20,6.892579);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(21,5.116027);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(22,3.468089);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(23,2.423322);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(24,1.879985);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(25,1.492119);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(26,1.198423);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(27,0.9949239);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(28,0.8404554);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(29,0.7509281);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(30,0.5963126);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetBinError(31,0.9841906);
   VbbHcc_algo_Z_dR_Bj0_stack_3->SetEntries(3891102);

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
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(1,730.4081);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(2,2771.826);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(3,2200.957);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(4,1471.973);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(5,975.326);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(6,647.1266);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(7,488.8191);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(8,356.6942);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(9,274.1655);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(10,257.0261);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(11,206.005);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(12,167.169);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(13,135.4018);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(14,117.0276);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(15,113.4683);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(16,99.50801);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(17,63.47118);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(18,55.23348);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(19,54.44173);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(20,27.79172);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(21,26.92536);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(22,6.867287);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(23,4.624406);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(24,4.954916);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(25,4.829138);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(26,2.249314);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(27,1.588294);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(28,1.323117);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(29,1.018769);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(30,0.4894939);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinContent(31,0.5292756);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(1,13.794);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(2,36.92526);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(3,36.59267);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(4,29.95672);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(5,25.11486);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(6,20.79012);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(7,18.13486);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(8,16.21779);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(9,12.79516);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(10,16.17664);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(11,12.54464);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(12,10.80194);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(13,8.603001);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(14,8.303449);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(15,10.61929);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(16,8.87366);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(17,4.561195);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(18,4.286587);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(19,5.78496);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(20,3.124662);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(21,3.111131);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(22,1.369907);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(23,1.277273);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(24,1.359397);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(25,1.353565);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(26,0.8987785);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(27,0.6121565);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(28,0.7207071);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(29,0.5449348);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(30,0.4894939);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetBinError(31,0.2394779);
   VbbHcc_algo_Z_dR_Bj0_stack_4->SetEntries(56536);

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
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(1,256.4113);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(2,785.9683);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(3,695.2327);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(4,442.5466);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(5,315.8387);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(6,240.0519);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(7,149.8373);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(8,115.8694);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(9,77.88491);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(10,71.84973);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(11,73.28762);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(12,66.0277);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(13,31.63631);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(14,54.25247);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(15,29.3157);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(16,30.5074);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(17,16.09088);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(18,10.68704);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(19,16.30581);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(20,19.41385);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(21,4.759538);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(22,3.791695);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(23,5.105135);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(24,0.8986984);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(25,2.220479);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(26,0.6149425);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(27,0.4883762);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(28,0.47698);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinContent(31,0.6578089);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(1,11.2255);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(2,32.88652);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(3,40.89281);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(4,30.40371);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(5,30.31135);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(6,25.82012);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(7,16.51818);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(8,17.80306);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(9,13.25473);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(10,9.04154);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(11,13.63535);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(12,16.30528);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(13,5.161153);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(14,12.99608);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(15,5.474141);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(16,6.455841);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(17,3.901572);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(18,3.187444);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(19,4.39864);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(20,4.910338);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(21,1.097603);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(22,2.179444);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(23,2.980803);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(24,0.4274778);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(25,2.08555);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(26,0.3314295);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(27,0.3063111);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(28,0.3883875);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetBinError(31,0.388393);
   VbbHcc_algo_Z_dR_Bj0_stack_5->SetEntries(15329);

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
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(1,2.260213);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(2,9.492896);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(3,6.78064);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(4,4.068384);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(5,3.164299);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(6,3.616341);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(7,1.356128);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(8,0.9040853);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(9,0.9040853);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(13,0.4520427);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(15,1.356128);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(21,0.4520427);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(1,1.010798);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(2,2.07152);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(3,1.750754);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(4,1.356128);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(5,1.195992);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(6,1.27857);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(7,0.7829609);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(8,0.6392849);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(9,0.6392849);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(13,0.4520427);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(15,0.7829609);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(21,0.4520427);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetEntries(77);

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
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(1,7.438181);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(2,27.27333);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(3,14.52216);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(4,7.438181);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(5,6.021385);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(6,4.604589);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(7,5.312987);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(8,2.479394);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(9,2.125195);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(10,1.770996);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(11,3.187792);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(12,0.7083982);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(13,1.062597);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(14,1.770996);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(15,1.416796);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(19,0.3541991);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(1,1.623144);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(2,3.108085);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(3,2.267981);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(4,1.623144);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(5,1.4604);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(6,1.277083);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(7,1.371807);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(8,0.9371228);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(9,0.8676071);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(10,0.7920133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(11,1.062597);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(12,0.5009132);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(13,0.6134909);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(14,0.7920133);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(15,0.7083982);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(19,0.3541991);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetEntries(247);

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
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(1,12.29423);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(2,52.25048);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(3,31.01499);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(4,13.13247);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(5,10.05892);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(6,4.750044);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(7,5.308873);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(8,4.750044);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(9,3.352972);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(10,2.514729);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(11,1.676486);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(12,1.397072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(13,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(14,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(15,2.514729);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(16,1.397072);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(17,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(18,0.5588287);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(19,0.5588287);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(20,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinContent(21,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(1,1.853425);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(2,3.820934);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(3,2.943813);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(4,1.915568);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(5,1.676486);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(6,1.152055);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(7,1.217939);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(8,1.152055);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(9,0.9679197);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(10,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(11,0.6844226);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(12,0.6247895);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(13,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(14,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(15,0.8382431);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(16,0.6247895);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(17,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(18,0.3951516);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(19,0.3951516);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(20,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetBinError(21,0.4839599);
   VbbHcc_algo_Z_dR_Bj0_stack_8->SetEntries(543);

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
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(1,8.882536);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(2,39.81826);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(3,21.50232);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(4,10.61287);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(5,5.84245);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(6,4.262977);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(7,3.122374);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(8,2.509785);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(9,2.219491);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(10,1.833194);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(11,1.584045);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(12,1.220606);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(13,1.170319);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(14,0.8663101);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(15,0.7840221);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(16,0.6948767);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(17,0.5028713);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(18,0.4388695);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(19,0.340581);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(20,0.2697219);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(21,0.1714334);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(22,0.0754307);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(23,0.03428668);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(24,0.02514357);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(25,0.009143115);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(26,0.004571557);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(28,0.002285779);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(30,0.004571557);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinContent(31,0.006857336);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(1,0.1424904);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(2,0.3016881);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(3,0.221697);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(4,0.155752);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(5,0.1155619);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(6,0.09871283);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(7,0.08448109);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(8,0.07574175);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(9,0.07122686);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(10,0.06473235);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(11,0.06017288);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(12,0.05282078);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(13,0.05172127);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(14,0.04449936);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(15,0.04233321);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(16,0.03985391);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(17,0.03390358);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(18,0.03167268);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(19,0.02790148);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(20,0.02482991);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(21,0.01979542);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(22,0.0131308);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(23,0.008852783);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(24,0.00758107);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(25,0.004571557);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(26,0.003232579);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(28,0.002285779);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(30,0.003232579);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetBinError(31,0.003959085);
   VbbHcc_algo_Z_dR_Bj0_stack_9->SetEntries(47604);

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
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(1,2.705901);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(2,16.90607);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(3,15.35907);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(4,9.008342);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(5,5.259784);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(6,3.442735);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(7,2.558057);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(8,2.082929);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(9,1.740146);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(10,1.346691);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(11,1.097502);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(12,0.9389278);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(13,0.8310256);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(14,0.7392194);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(15,0.7141813);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(16,0.5806449);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(17,0.482281);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(18,0.3922632);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(19,0.2891302);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(20,0.2158044);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(21,0.1394978);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(22,0.05961446);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(23,0.02921109);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(24,0.02146121);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(25,0.005365302);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(26,0.01013446);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(27,0.004173012);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(28,0.005961446);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(29,0.002384579);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(30,0.004173012);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinContent(31,0.005365302);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(1,0.04016352);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(2,0.1003915);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(3,0.09568818);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(4,0.07328216);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(5,0.05599636);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(6,0.04530307);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(7,0.03905089);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(8,0.03523815);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(9,0.03220837);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(10,0.02833412);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(11,0.0255787);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(12,0.02365876);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(13,0.02225784);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(14,0.02099242);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(15,0.02063384);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(16,0.01860506);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(17,0.0169561);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(18,0.01529201);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(19,0.01312872);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(20,0.01134243);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(21,0.009119259);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(22,0.005961446);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(23,0.004173012);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(24,0.003576868);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(25,0.001788434);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(26,0.002457967);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(27,0.00157725);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(28,0.001885175);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(29,0.001192289);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(30,0.00157725);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetBinError(31,0.001788434);
   VbbHcc_algo_Z_dR_Bj0_stack_10->SetEntries(112352);

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
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(1,0.05461829);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(2,0.2912975);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(3,0.1593033);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(4,0.06827286);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(5,0.05461829);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(6,0.03641219);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(7,0.01365457);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(8,0.03413643);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(9,0.0182061);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(10,0.01137881);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(11,0.009103048);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(12,0.01365457);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(13,0.009103048);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(14,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(15,0.006827286);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(16,0.006827286);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(17,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(19,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(20,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(1,0.01114891);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(2,0.02574731);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(3,0.01904039);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(4,0.01246486);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(5,0.01114891);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(6,0.009103048);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(7,0.005574455);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(8,0.008813988);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(9,0.006436827);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(10,0.005088758);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(11,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(12,0.005574455);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(13,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(14,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(15,0.003941735);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(16,0.003941735);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(17,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(19,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(20,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetEntries(352);

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
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(1,0.01767975);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(2,0.1141692);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(3,0.07821042);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(4,0.04374989);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(5,0.02577048);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(6,0.02037666);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(7,0.01288524);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(8,0.01078764);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(9,0.009888674);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(10,0.007191763);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(11,0.00659245);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(12,0.007791077);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(13,0.004794509);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(14,0.005393822);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(15,0.005094166);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(16,0.003895538);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(17,0.002397254);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(18,0.001198627);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(19,0.001198627);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(20,0.0005993136);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(22,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(1,0.002301708);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(2,0.005849067);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(3,0.004841104);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(4,0.003620767);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(5,0.002778903);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(6,0.002471033);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(7,0.001964981);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(8,0.001797941);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(9,0.001721397);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(10,0.001468013);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(11,0.001405515);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(12,0.001527956);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(13,0.001198627);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(14,0.001271336);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(15,0.001235517);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(16,0.001080428);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(17,0.0008475574);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(18,0.0005993136);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(19,0.0005993136);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(20,0.0004237787);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(22,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_stack_12->SetEntries(1270);

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
   
   TH1D *VbbHcc_algo_Z_dR_Bj0__403 = new TH1D("VbbHcc_algo_Z_dR_Bj0__403","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(1,98879);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(2,445615);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(3,422381);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(4,313101);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(5,205764);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(6,137897);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(7,99539);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(8,75433);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(9,60555);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(10,49335);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(11,41280);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(12,35058);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(13,30077);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(14,25945);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(15,22453);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(16,19230);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(17,15953);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(18,13076);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(19,10360);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(20,7419);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(21,4801);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(22,3079);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(23,1929);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(24,1385);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(25,984);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(26,694);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(27,494);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(28,340);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(29,227);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(30,151);
   VbbHcc_algo_Z_dR_Bj0__403->SetBinContent(31,466);
   VbbHcc_algo_Z_dR_Bj0__403->SetEntries(2143929);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0__403->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0__403->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj0__403->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj0__403->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj0__403->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0__403->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__403->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__403->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__403->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__403->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__403->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__403->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__403->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0__403->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__403->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0__403->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__403->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0__403->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0__403->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1293[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1293[30] = {
   136710.8,
   446040.8,
   402032.8,
   305754.1,
   194174.6,
   129320.1,
   88899.21,
   65859.8,
   57980.89,
   41631.21,
   35386.69,
   32472.2,
   28118.29,
   24432.95,
   22603.37,
   17985.76,
   13112.96,
   13220.77,
   10368.03,
   6573.083,
   4453.154,
   4315.257,
   1794.826,
   1651.165,
   276.8391,
   270.3615,
   51.57157,
   839.1615,
   89.3588,
   39.51791};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1293[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1293[30] = {
   3133.268,
   7828.417,
   8292.027,
   21275.33,
   6420.981,
   5250.531,
   4257.574,
   4238.881,
   3646.584,
   2645.083,
   2498.27,
   2876.365,
   2724.108,
   2636.905,
   2079.254,
   1859.439,
   1477.872,
   1608.155,
   1419.426,
   1133.434,
   929.5366,
   1825.914,
   651.014,
   649.7494,
   65.47957,
   75.84604,
   17.03568,
   525.5695,
   37.93321,
   31.93906};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj0_fx1293,Graph_from_VbbHcc_algo_Z_dR_Bj0_fy1293,Graph_from_VbbHcc_algo_Z_dR_Bj0_fex1293,Graph_from_VbbHcc_algo_Z_dR_Bj0_fey1293);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetMinimum(6.820961);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetMaximum(499255.4);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj01293);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__404 = new TH1D("data_mc_ratio__404","",30,0,6);
   data_mc_ratio__404->SetBinContent(1,0.7232711);
   data_mc_ratio__404->SetBinContent(2,0.9990453);
   data_mc_ratio__404->SetBinContent(3,1.050613);
   data_mc_ratio__404->SetBinContent(4,1.024029);
   data_mc_ratio__404->SetBinContent(5,1.059686);
   data_mc_ratio__404->SetBinContent(6,1.066323);
   data_mc_ratio__404->SetBinContent(7,1.119684);
   data_mc_ratio__404->SetBinContent(8,1.145357);
   data_mc_ratio__404->SetBinContent(9,1.044396);
   data_mc_ratio__404->SetBinContent(10,1.185048);
   data_mc_ratio__404->SetBinContent(11,1.16654);
   data_mc_ratio__404->SetBinContent(12,1.079631);
   data_mc_ratio__404->SetBinContent(13,1.06966);
   data_mc_ratio__404->SetBinContent(14,1.061886);
   data_mc_ratio__404->SetBinContent(15,0.9933476);
   data_mc_ratio__404->SetBinContent(16,1.069179);
   data_mc_ratio__404->SetBinContent(17,1.216583);
   data_mc_ratio__404->SetBinContent(18,0.9890499);
   data_mc_ratio__404->SetBinContent(19,0.9992254);
   data_mc_ratio__404->SetBinContent(20,1.128694);
   data_mc_ratio__404->SetBinContent(21,1.078112);
   data_mc_ratio__404->SetBinContent(22,0.7135148);
   data_mc_ratio__404->SetBinContent(23,1.074756);
   data_mc_ratio__404->SetBinContent(24,0.8388017);
   data_mc_ratio__404->SetBinContent(25,3.554411);
   data_mc_ratio__404->SetBinContent(26,2.566934);
   data_mc_ratio__404->SetBinContent(27,9.57892);
   data_mc_ratio__404->SetBinContent(28,0.4051664);
   data_mc_ratio__404->SetBinContent(29,2.54032);
   data_mc_ratio__404->SetBinContent(30,3.821053);
   data_mc_ratio__404->SetBinContent(31,2.834561);
   data_mc_ratio__404->SetBinError(1,0.002300112);
   data_mc_ratio__404->SetBinError(2,0.001496598);
   data_mc_ratio__404->SetBinError(3,0.001616556);
   data_mc_ratio__404->SetBinError(4,0.001830079);
   data_mc_ratio__404->SetBinError(5,0.002336105);
   data_mc_ratio__404->SetBinError(6,0.002871517);
   data_mc_ratio__404->SetBinError(7,0.003548941);
   data_mc_ratio__404->SetBinError(8,0.004170233);
   data_mc_ratio__404->SetBinError(9,0.004244144);
   data_mc_ratio__404->SetBinError(10,0.005335296);
   data_mc_ratio__404->SetBinError(11,0.005741561);
   data_mc_ratio__404->SetBinError(12,0.005766095);
   data_mc_ratio__404->SetBinError(13,0.006167773);
   data_mc_ratio__404->SetBinError(14,0.006592513);
   data_mc_ratio__404->SetBinError(15,0.006629245);
   data_mc_ratio__404->SetBinError(16,0.007710116);
   data_mc_ratio__404->SetBinError(17,0.00963209);
   data_mc_ratio__404->SetBinError(18,0.008649296);
   data_mc_ratio__404->SetBinError(19,0.009817109);
   data_mc_ratio__404->SetBinError(20,0.01310399);
   data_mc_ratio__404->SetBinError(21,0.01555959);
   data_mc_ratio__404->SetBinError(22,0.01285873);
   data_mc_ratio__404->SetBinError(23,0.02447055);
   data_mc_ratio__404->SetBinError(24,0.02253899);
   data_mc_ratio__404->SetBinError(25,0.1133105);
   data_mc_ratio__404->SetBinError(26,0.09743946);
   data_mc_ratio__404->SetBinError(27,0.430976);
   data_mc_ratio__404->SetBinError(28,0.02197323);
   data_mc_ratio__404->SetBinError(29,0.168607);
   data_mc_ratio__404->SetBinError(30,0.3109528);
   data_mc_ratio__404->SetBinError(31,1.034114);
   data_mc_ratio__404->SetMinimum(0.4);
   data_mc_ratio__404->SetMaximum(1.6);
   data_mc_ratio__404->SetEntries(97.88022);
   data_mc_ratio__404->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__404->SetLineColor(ci);
   data_mc_ratio__404->SetLineWidth(2);
   data_mc_ratio__404->SetMarkerStyle(20);
   data_mc_ratio__404->SetMarkerSize(1.2);
   data_mc_ratio__404->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__404->GetXaxis()->SetRange(1,30);
   data_mc_ratio__404->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__404->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__404->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__404->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__404->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__404->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__404->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__404->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__404->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__404->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__404->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__404->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__404->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__404->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__404->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__404->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__404->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1294[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1294[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1294[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1294[30] = {
   0.02291894,
   0.0175509,
   0.02062525,
   0.06958313,
   0.03306808,
   0.04060104,
   0.04789215,
   0.06436218,
   0.06289285,
   0.06353607,
   0.07059915,
   0.0885793,
   0.09688028,
   0.1079241,
   0.09198867,
   0.103384,
   0.1127031,
   0.1216385,
   0.1369041,
   0.1724357,
   0.2087367,
   0.4231298,
   0.362717,
   0.3935097,
   0.2365257,
   0.2805357,
   0.3303309,
   0.6263032,
   0.4245044,
   0.8082174};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1294,Graph_from_mc_statistical_error_fy1294,Graph_from_mc_statistical_error_fex1294,Graph_from_mc_statistical_error_fey1294);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1294 = new TH1F("Graph_Graph_from_mc_statistical_error1294","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1294->SetMinimum(0.03013908);
   Graph_Graph_from_mc_statistical_error1294->SetMaximum(1.969861);
   Graph_Graph_from_mc_statistical_error1294->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1294->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1294->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1294->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1294->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1294->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1294->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1294);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->SetSelected(Z_dR_Bj0_algo_18);
}
