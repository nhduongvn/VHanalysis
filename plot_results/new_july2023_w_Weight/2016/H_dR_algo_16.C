void H_dR_algo_16()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Thu Aug 10 10:41:58 2023) by ROOT version 6.14/09
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(0,0,1,1);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetFillStyle(4000);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetFrameFillStyle(1000);
   H_dR_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-2.922357,6.525,14.38449);
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
   st->SetMaximum(1.181335e+12);
   
   TH1F *st_stack_117 = new TH1F("st_stack_117","",30,0,6);
   st_stack_117->SetMinimum(0.001244371);
   st_stack_117->SetMaximum(4.506173e+12);
   st_stack_117->SetDirectory(0);
   st_stack_117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_117->SetLineColor(ci);
   st_stack_117->GetXaxis()->SetRange(1,31);
   st_stack_117->GetXaxis()->SetLabelFont(42);
   st_stack_117->GetXaxis()->SetLabelSize(0.035);
   st_stack_117->GetXaxis()->SetTitleSize(0.035);
   st_stack_117->GetXaxis()->SetTitleFont(42);
   st_stack_117->GetYaxis()->SetTitle("Events/0.2");
   st_stack_117->GetYaxis()->SetLabelFont(42);
   st_stack_117->GetYaxis()->SetLabelSize(0.05);
   st_stack_117->GetYaxis()->SetTitleSize(0.057);
   st_stack_117->GetYaxis()->SetTitleOffset(1.2);
   st_stack_117->GetYaxis()->SetTitleFont(42);
   st_stack_117->GetZaxis()->SetLabelFont(42);
   st_stack_117->GetZaxis()->SetLabelSize(0.035);
   st_stack_117->GetZaxis()->SetTitleSize(0.035);
   st_stack_117->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_117);
   
   
   TH1D *VbbHcc_algo_H_dR_stack_1 = new TH1D("VbbHcc_algo_H_dR_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(2,23.99755);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(3,70854.27);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(4,105869.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(5,91542.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(6,85691.25);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(7,114139.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(8,114087.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(9,133749.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(10,143495.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(11,156272.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(12,190878.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(13,215831.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(14,250791.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(15,221214.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(16,243744.8);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(17,187000.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(18,185354.5);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(19,183879.2);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(20,176416.3);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(21,142411.7);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(22,114539.6);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(23,94602.71);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(24,66251.72);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(25,55486.53);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(26,58798.27);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(27,36232.57);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(28,23400.95);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(29,20459.45);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(30,11989.93);
   VbbHcc_algo_H_dR_stack_1->SetBinContent(31,12592.18);
   VbbHcc_algo_H_dR_stack_1->SetBinError(2,23.99755);
   VbbHcc_algo_H_dR_stack_1->SetBinError(3,4446.277);
   VbbHcc_algo_H_dR_stack_1->SetBinError(4,5955.649);
   VbbHcc_algo_H_dR_stack_1->SetBinError(5,5927.352);
   VbbHcc_algo_H_dR_stack_1->SetBinError(6,5140.119);
   VbbHcc_algo_H_dR_stack_1->SetBinError(7,7199.234);
   VbbHcc_algo_H_dR_stack_1->SetBinError(8,6211.341);
   VbbHcc_algo_H_dR_stack_1->SetBinError(9,7018.154);
   VbbHcc_algo_H_dR_stack_1->SetBinError(10,7270.77);
   VbbHcc_algo_H_dR_stack_1->SetBinError(11,7205.884);
   VbbHcc_algo_H_dR_stack_1->SetBinError(12,23142.89);
   VbbHcc_algo_H_dR_stack_1->SetBinError(13,9229.716);
   VbbHcc_algo_H_dR_stack_1->SetBinError(14,20839.65);
   VbbHcc_algo_H_dR_stack_1->SetBinError(15,9302.073);
   VbbHcc_algo_H_dR_stack_1->SetBinError(16,24174.33);
   VbbHcc_algo_H_dR_stack_1->SetBinError(17,7442.04);
   VbbHcc_algo_H_dR_stack_1->SetBinError(18,7528.372);
   VbbHcc_algo_H_dR_stack_1->SetBinError(19,7722.973);
   VbbHcc_algo_H_dR_stack_1->SetBinError(20,8119.031);
   VbbHcc_algo_H_dR_stack_1->SetBinError(21,7324.94);
   VbbHcc_algo_H_dR_stack_1->SetBinError(22,6384.56);
   VbbHcc_algo_H_dR_stack_1->SetBinError(23,5554.973);
   VbbHcc_algo_H_dR_stack_1->SetBinError(24,5403.219);
   VbbHcc_algo_H_dR_stack_1->SetBinError(25,4722.765);
   VbbHcc_algo_H_dR_stack_1->SetBinError(26,22409.64);
   VbbHcc_algo_H_dR_stack_1->SetBinError(27,4363.612);
   VbbHcc_algo_H_dR_stack_1->SetBinError(28,3615.331);
   VbbHcc_algo_H_dR_stack_1->SetBinError(29,2882.257);
   VbbHcc_algo_H_dR_stack_1->SetBinError(30,2500.328);
   VbbHcc_algo_H_dR_stack_1->SetBinError(31,2828.123);
   VbbHcc_algo_H_dR_stack_1->SetEntries(131372);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_2 = new TH1D("VbbHcc_algo_H_dR_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(2,-0.04623254);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(3,398.1454);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(4,690.4061);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(5,791.0031);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(6,889.3034);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(7,965.0395);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(8,989.809);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(9,1088.498);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(10,1161.493);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(11,1217.415);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(12,1328.529);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(13,1369.312);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(14,1330.004);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(15,1262.189);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(16,1223.319);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(17,1119.677);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(18,1050.107);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(19,978.968);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(20,919.8121);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(21,840.4174);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(22,718.8371);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(23,569.0968);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(24,483.5446);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(25,388.3507);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(26,298.589);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(27,229.0612);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(28,158.3941);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(29,127.2481);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(30,77.19548);
   VbbHcc_algo_H_dR_stack_2->SetBinContent(31,61.43297);
   VbbHcc_algo_H_dR_stack_2->SetBinError(2,0.04623254);
   VbbHcc_algo_H_dR_stack_2->SetBinError(3,8.634938);
   VbbHcc_algo_H_dR_stack_2->SetBinError(4,11.17962);
   VbbHcc_algo_H_dR_stack_2->SetBinError(5,11.76717);
   VbbHcc_algo_H_dR_stack_2->SetBinError(6,12.37037);
   VbbHcc_algo_H_dR_stack_2->SetBinError(7,12.81789);
   VbbHcc_algo_H_dR_stack_2->SetBinError(8,12.94757);
   VbbHcc_algo_H_dR_stack_2->SetBinError(9,13.55169);
   VbbHcc_algo_H_dR_stack_2->SetBinError(10,14.02094);
   VbbHcc_algo_H_dR_stack_2->SetBinError(11,14.2246);
   VbbHcc_algo_H_dR_stack_2->SetBinError(12,15.00979);
   VbbHcc_algo_H_dR_stack_2->SetBinError(13,15.09718);
   VbbHcc_algo_H_dR_stack_2->SetBinError(14,14.79639);
   VbbHcc_algo_H_dR_stack_2->SetBinError(15,14.15457);
   VbbHcc_algo_H_dR_stack_2->SetBinError(16,13.83577);
   VbbHcc_algo_H_dR_stack_2->SetBinError(17,13.20854);
   VbbHcc_algo_H_dR_stack_2->SetBinError(18,12.8399);
   VbbHcc_algo_H_dR_stack_2->SetBinError(19,12.5096);
   VbbHcc_algo_H_dR_stack_2->SetBinError(20,12.09954);
   VbbHcc_algo_H_dR_stack_2->SetBinError(21,11.68381);
   VbbHcc_algo_H_dR_stack_2->SetBinError(22,10.86339);
   VbbHcc_algo_H_dR_stack_2->SetBinError(23,9.396323);
   VbbHcc_algo_H_dR_stack_2->SetBinError(24,8.827978);
   VbbHcc_algo_H_dR_stack_2->SetBinError(25,7.924202);
   VbbHcc_algo_H_dR_stack_2->SetBinError(26,6.884899);
   VbbHcc_algo_H_dR_stack_2->SetBinError(27,6.073532);
   VbbHcc_algo_H_dR_stack_2->SetBinError(28,4.872138);
   VbbHcc_algo_H_dR_stack_2->SetBinError(29,4.570568);
   VbbHcc_algo_H_dR_stack_2->SetBinError(30,3.621234);
   VbbHcc_algo_H_dR_stack_2->SetBinError(31,3.153023);
   VbbHcc_algo_H_dR_stack_2->SetEntries(347069);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_3 = new TH1D("VbbHcc_algo_H_dR_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(2,4.465972);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(3,11142.27);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(4,22710.05);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(5,27913.53);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(6,29677.47);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(7,28292.69);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(8,25712.01);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(9,23169.34);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(10,21119.13);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(11,20151.44);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(12,19625.96);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(13,18843.35);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(14,17173.7);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(15,15330.57);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(16,13992.35);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(17,12728.31);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(18,12152.22);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(19,12088.93);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(20,12118.79);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(21,11467.6);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(22,10450.75);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(23,9483.951);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(24,8584.936);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(25,7641.999);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(26,6596.969);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(27,5430.199);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(28,4279.36);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(29,3071.644);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(30,1737.986);
   VbbHcc_algo_H_dR_stack_3->SetBinContent(31,1171.179);
   VbbHcc_algo_H_dR_stack_3->SetBinError(2,0.5271045);
   VbbHcc_algo_H_dR_stack_3->SetBinError(3,28.21789);
   VbbHcc_algo_H_dR_stack_3->SetBinError(4,40.3344);
   VbbHcc_algo_H_dR_stack_3->SetBinError(5,44.67231);
   VbbHcc_algo_H_dR_stack_3->SetBinError(6,45.99411);
   VbbHcc_algo_H_dR_stack_3->SetBinError(7,44.79176);
   VbbHcc_algo_H_dR_stack_3->SetBinError(8,42.58168);
   VbbHcc_algo_H_dR_stack_3->SetBinError(9,40.24027);
   VbbHcc_algo_H_dR_stack_3->SetBinError(10,38.25697);
   VbbHcc_algo_H_dR_stack_3->SetBinError(11,37.19816);
   VbbHcc_algo_H_dR_stack_3->SetBinError(12,36.64345);
   VbbHcc_algo_H_dR_stack_3->SetBinError(13,35.86436);
   VbbHcc_algo_H_dR_stack_3->SetBinError(14,34.17892);
   VbbHcc_algo_H_dR_stack_3->SetBinError(15,32.24153);
   VbbHcc_algo_H_dR_stack_3->SetBinError(16,30.78754);
   VbbHcc_algo_H_dR_stack_3->SetBinError(17,29.37986);
   VbbHcc_algo_H_dR_stack_3->SetBinError(18,28.76952);
   VbbHcc_algo_H_dR_stack_3->SetBinError(19,28.73163);
   VbbHcc_algo_H_dR_stack_3->SetBinError(20,28.81856);
   VbbHcc_algo_H_dR_stack_3->SetBinError(21,28.04257);
   VbbHcc_algo_H_dR_stack_3->SetBinError(22,26.81633);
   VbbHcc_algo_H_dR_stack_3->SetBinError(23,25.56847);
   VbbHcc_algo_H_dR_stack_3->SetBinError(24,24.40858);
   VbbHcc_algo_H_dR_stack_3->SetBinError(25,23.0906);
   VbbHcc_algo_H_dR_stack_3->SetBinError(26,21.4984);
   VbbHcc_algo_H_dR_stack_3->SetBinError(27,19.53671);
   VbbHcc_algo_H_dR_stack_3->SetBinError(28,17.34581);
   VbbHcc_algo_H_dR_stack_3->SetBinError(29,14.67881);
   VbbHcc_algo_H_dR_stack_3->SetBinError(30,11.01817);
   VbbHcc_algo_H_dR_stack_3->SetBinError(31,8.971485);
   VbbHcc_algo_H_dR_stack_3->SetEntries(6426049);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_4 = new TH1D("VbbHcc_algo_H_dR_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(2,0.1550195);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(3,359.3086);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(4,565.1224);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(5,607.6201);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(6,557.4875);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(7,578.7227);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(8,596.4724);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(9,682.7995);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(10,719.927);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(11,775.3117);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(12,861.1796);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(13,970.3059);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(14,947.0951);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(15,932.5377);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(16,909.8627);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(17,836.544);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(18,786.3412);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(19,772.4881);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(20,736.642);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(21,625.873);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(22,538.5968);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(23,404.9824);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(24,282.9037);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(25,219.6575);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(26,197.0574);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(27,161.8677);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(28,102.7248);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(29,87.21648);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(30,53.78777);
   VbbHcc_algo_H_dR_stack_4->SetBinContent(31,43.57652);
   VbbHcc_algo_H_dR_stack_4->SetBinError(2,0.1098004);
   VbbHcc_algo_H_dR_stack_4->SetBinError(3,11.29563);
   VbbHcc_algo_H_dR_stack_4->SetBinError(4,16.61388);
   VbbHcc_algo_H_dR_stack_4->SetBinError(5,22.79108);
   VbbHcc_algo_H_dR_stack_4->SetBinError(6,24.38121);
   VbbHcc_algo_H_dR_stack_4->SetBinError(7,24.84076);
   VbbHcc_algo_H_dR_stack_4->SetBinError(8,24.51391);
   VbbHcc_algo_H_dR_stack_4->SetBinError(9,26.6944);
   VbbHcc_algo_H_dR_stack_4->SetBinError(10,25.38126);
   VbbHcc_algo_H_dR_stack_4->SetBinError(11,26.34262);
   VbbHcc_algo_H_dR_stack_4->SetBinError(12,26.1781);
   VbbHcc_algo_H_dR_stack_4->SetBinError(13,29.54169);
   VbbHcc_algo_H_dR_stack_4->SetBinError(14,26.81044);
   VbbHcc_algo_H_dR_stack_4->SetBinError(15,25.49967);
   VbbHcc_algo_H_dR_stack_4->SetBinError(16,24.33486);
   VbbHcc_algo_H_dR_stack_4->SetBinError(17,22.17544);
   VbbHcc_algo_H_dR_stack_4->SetBinError(18,22.1488);
   VbbHcc_algo_H_dR_stack_4->SetBinError(19,22.56048);
   VbbHcc_algo_H_dR_stack_4->SetBinError(20,24.01289);
   VbbHcc_algo_H_dR_stack_4->SetBinError(21,21.98253);
   VbbHcc_algo_H_dR_stack_4->SetBinError(22,22.39188);
   VbbHcc_algo_H_dR_stack_4->SetBinError(23,19.37822);
   VbbHcc_algo_H_dR_stack_4->SetBinError(24,15.4928);
   VbbHcc_algo_H_dR_stack_4->SetBinError(25,14.27382);
   VbbHcc_algo_H_dR_stack_4->SetBinError(26,15.1646);
   VbbHcc_algo_H_dR_stack_4->SetBinError(27,13.36574);
   VbbHcc_algo_H_dR_stack_4->SetBinError(28,9.262217);
   VbbHcc_algo_H_dR_stack_4->SetBinError(29,8.754641);
   VbbHcc_algo_H_dR_stack_4->SetBinError(30,6.798149);
   VbbHcc_algo_H_dR_stack_4->SetBinError(31,6.928928);
   VbbHcc_algo_H_dR_stack_4->SetEntries(94081);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_5 = new TH1D("VbbHcc_algo_H_dR_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(2,0.2947036);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(3,238.0275);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(4,299.6037);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(5,251.8378);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(6,265.5158);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(7,245.375);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(8,265.301);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(9,286.2479);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(10,361.6365);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(11,412.5542);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(12,446.7007);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(13,463.9069);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(14,484.1334);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(15,447.7596);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(16,454.6287);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(17,461.1861);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(18,416.4471);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(19,427.2796);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(20,362.8921);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(21,340.6878);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(22,263.4435);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(23,248.2639);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(24,172.9719);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(25,101.3617);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(26,92.78516);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(27,86.95148);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(28,41.13798);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(29,54.30667);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(30,34.47376);
   VbbHcc_algo_H_dR_stack_5->SetBinContent(31,29.70606);
   VbbHcc_algo_H_dR_stack_5->SetBinError(2,0.182849);
   VbbHcc_algo_H_dR_stack_5->SetBinError(3,16.76136);
   VbbHcc_algo_H_dR_stack_5->SetBinError(4,24.15217);
   VbbHcc_algo_H_dR_stack_5->SetBinError(5,22.25935);
   VbbHcc_algo_H_dR_stack_5->SetBinError(6,25.56881);
   VbbHcc_algo_H_dR_stack_5->SetBinError(7,22.65084);
   VbbHcc_algo_H_dR_stack_5->SetBinError(8,24.05798);
   VbbHcc_algo_H_dR_stack_5->SetBinError(9,24.13166);
   VbbHcc_algo_H_dR_stack_5->SetBinError(10,29.60891);
   VbbHcc_algo_H_dR_stack_5->SetBinError(11,31.95699);
   VbbHcc_algo_H_dR_stack_5->SetBinError(12,29.89632);
   VbbHcc_algo_H_dR_stack_5->SetBinError(13,28.24186);
   VbbHcc_algo_H_dR_stack_5->SetBinError(14,27.3608);
   VbbHcc_algo_H_dR_stack_5->SetBinError(15,23.12338);
   VbbHcc_algo_H_dR_stack_5->SetBinError(16,23.27544);
   VbbHcc_algo_H_dR_stack_5->SetBinError(17,26.05842);
   VbbHcc_algo_H_dR_stack_5->SetBinError(18,22.93198);
   VbbHcc_algo_H_dR_stack_5->SetBinError(19,27.48583);
   VbbHcc_algo_H_dR_stack_5->SetBinError(20,25.09029);
   VbbHcc_algo_H_dR_stack_5->SetBinError(21,26.23282);
   VbbHcc_algo_H_dR_stack_5->SetBinError(22,22.50736);
   VbbHcc_algo_H_dR_stack_5->SetBinError(23,22.28721);
   VbbHcc_algo_H_dR_stack_5->SetBinError(24,17.42818);
   VbbHcc_algo_H_dR_stack_5->SetBinError(25,13.14502);
   VbbHcc_algo_H_dR_stack_5->SetBinError(26,13.58925);
   VbbHcc_algo_H_dR_stack_5->SetBinError(27,16.34828);
   VbbHcc_algo_H_dR_stack_5->SetBinError(28,8.368132);
   VbbHcc_algo_H_dR_stack_5->SetBinError(29,14.45889);
   VbbHcc_algo_H_dR_stack_5->SetBinError(30,9.79612);
   VbbHcc_algo_H_dR_stack_5->SetBinError(31,9.495191);
   VbbHcc_algo_H_dR_stack_5->SetEntries(65948);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_6 = new TH1D("VbbHcc_algo_H_dR_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(3,2.250726);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(4,5.350519);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(5,3.581051);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(6,5.806425);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(7,2.02329);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(8,1.890503);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(9,2.749749);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(10,3.316388);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(11,2.822334);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(12,5.544509);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(13,4.095947);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(14,3.812679);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(15,5.091332);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(16,3.638271);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(17,6.085013);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(18,4.056124);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(19,3.184992);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(20,3.64602);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(21,2.673246);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(22,1.140498);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(23,3.508681);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(24,1.133308);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(25,0.8362339);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(26,0.6073172);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(27,0.2841506);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(28,0.6256864);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(29,0.4429245);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(30,0.1360876);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(31,0.1208122);
   VbbHcc_algo_H_dR_stack_6->SetBinError(3,0.5664447);
   VbbHcc_algo_H_dR_stack_6->SetBinError(4,0.8813874);
   VbbHcc_algo_H_dR_stack_6->SetBinError(5,0.7273525);
   VbbHcc_algo_H_dR_stack_6->SetBinError(6,0.9103453);
   VbbHcc_algo_H_dR_stack_6->SetBinError(7,0.5415459);
   VbbHcc_algo_H_dR_stack_6->SetBinError(8,0.5251295);
   VbbHcc_algo_H_dR_stack_6->SetBinError(9,0.6180108);
   VbbHcc_algo_H_dR_stack_6->SetBinError(10,0.6927156);
   VbbHcc_algo_H_dR_stack_6->SetBinError(11,0.6288383);
   VbbHcc_algo_H_dR_stack_6->SetBinError(12,0.8946955);
   VbbHcc_algo_H_dR_stack_6->SetBinError(13,0.7639751);
   VbbHcc_algo_H_dR_stack_6->SetBinError(14,0.7491198);
   VbbHcc_algo_H_dR_stack_6->SetBinError(15,0.8449988);
   VbbHcc_algo_H_dR_stack_6->SetBinError(16,0.7297119);
   VbbHcc_algo_H_dR_stack_6->SetBinError(17,0.9260222);
   VbbHcc_algo_H_dR_stack_6->SetBinError(18,0.7577516);
   VbbHcc_algo_H_dR_stack_6->SetBinError(19,0.6799106);
   VbbHcc_algo_H_dR_stack_6->SetBinError(20,0.7288156);
   VbbHcc_algo_H_dR_stack_6->SetBinError(21,0.6124172);
   VbbHcc_algo_H_dR_stack_6->SetBinError(22,0.4046988);
   VbbHcc_algo_H_dR_stack_6->SetBinError(23,0.7190281);
   VbbHcc_algo_H_dR_stack_6->SetBinError(24,0.4030603);
   VbbHcc_algo_H_dR_stack_6->SetBinError(25,0.3415842);
   VbbHcc_algo_H_dR_stack_6->SetBinError(26,0.3040496);
   VbbHcc_algo_H_dR_stack_6->SetBinError(27,0.2009285);
   VbbHcc_algo_H_dR_stack_6->SetBinError(28,0.2914202);
   VbbHcc_algo_H_dR_stack_6->SetBinError(29,0.2560223);
   VbbHcc_algo_H_dR_stack_6->SetBinError(30,0.1360876);
   VbbHcc_algo_H_dR_stack_6->SetBinError(31,0.1208122);
   VbbHcc_algo_H_dR_stack_6->SetEntries(573);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_7 = new TH1D("VbbHcc_algo_H_dR_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(3,8.102982);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(4,13.2522);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(5,8.853872);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(6,7.043649);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(7,4.883278);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(8,3.255588);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(9,3.637152);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(10,3.639259);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(11,3.642072);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(12,4.92296);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(13,7.2948);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(14,6.471825);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(15,6.098817);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(16,7.124193);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(17,6.005683);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(18,7.590571);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(19,6.762612);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(20,5.759603);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(21,2.950579);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(22,2.227754);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(23,2.800498);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(24,2.82793);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(25,1.871459);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(26,1.485412);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(27,1.619734);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(28,1.936907);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(29,1.19358);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(30,0.620546);
   VbbHcc_algo_H_dR_stack_7->SetBinContent(31,0.3607092);
   VbbHcc_algo_H_dR_stack_7->SetBinError(3,0.9768875);
   VbbHcc_algo_H_dR_stack_7->SetBinError(4,1.250367);
   VbbHcc_algo_H_dR_stack_7->SetBinError(5,1.011482);
   VbbHcc_algo_H_dR_stack_7->SetBinError(6,0.9056045);
   VbbHcc_algo_H_dR_stack_7->SetBinError(7,0.7525656);
   VbbHcc_algo_H_dR_stack_7->SetBinError(8,0.6189129);
   VbbHcc_algo_H_dR_stack_7->SetBinError(9,0.6568062);
   VbbHcc_algo_H_dR_stack_7->SetBinError(10,0.6549524);
   VbbHcc_algo_H_dR_stack_7->SetBinError(11,0.6534085);
   VbbHcc_algo_H_dR_stack_7->SetBinError(12,0.7615349);
   VbbHcc_algo_H_dR_stack_7->SetBinError(13,0.9289615);
   VbbHcc_algo_H_dR_stack_7->SetBinError(14,0.8745277);
   VbbHcc_algo_H_dR_stack_7->SetBinError(15,0.8446168);
   VbbHcc_algo_H_dR_stack_7->SetBinError(16,0.9148769);
   VbbHcc_algo_H_dR_stack_7->SetBinError(17,0.8381712);
   VbbHcc_algo_H_dR_stack_7->SetBinError(18,0.9398651);
   VbbHcc_algo_H_dR_stack_7->SetBinError(19,0.8851297);
   VbbHcc_algo_H_dR_stack_7->SetBinError(20,0.8180427);
   VbbHcc_algo_H_dR_stack_7->SetBinError(21,0.5917515);
   VbbHcc_algo_H_dR_stack_7->SetBinError(22,0.5122502);
   VbbHcc_algo_H_dR_stack_7->SetBinError(23,0.5732218);
   VbbHcc_algo_H_dR_stack_7->SetBinError(24,0.5696844);
   VbbHcc_algo_H_dR_stack_7->SetBinError(25,0.4707359);
   VbbHcc_algo_H_dR_stack_7->SetBinError(26,0.4138076);
   VbbHcc_algo_H_dR_stack_7->SetBinError(27,0.4365027);
   VbbHcc_algo_H_dR_stack_7->SetBinError(28,0.4782358);
   VbbHcc_algo_H_dR_stack_7->SetBinError(29,0.378091);
   VbbHcc_algo_H_dR_stack_7->SetBinError(30,0.2779381);
   VbbHcc_algo_H_dR_stack_7->SetBinError(31,0.2086518);
   VbbHcc_algo_H_dR_stack_7->SetEntries(1163);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_8 = new TH1D("VbbHcc_algo_H_dR_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(3,8.954907);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(4,13.15032);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(5,12.73504);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(6,13.10877);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(7,8.125806);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(8,7.419873);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(9,7.972809);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(10,5.413786);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(11,5.93881);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(12,6.333215);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(13,7.448315);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(14,6.910979);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(15,5.942239);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(16,8.449002);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(17,5.789903);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(18,7.257235);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(19,7.616602);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(20,6.906119);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(21,5.495238);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(22,4.148793);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(23,3.649004);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(24,1.453957);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(25,3.100401);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(26,2.64183);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(27,3.188066);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(28,1.310757);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(29,0.7826233);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(30,0.2458286);
   VbbHcc_algo_H_dR_stack_8->SetBinContent(31,0.55196);
   VbbHcc_algo_H_dR_stack_8->SetBinError(3,1.523791);
   VbbHcc_algo_H_dR_stack_8->SetBinError(4,1.864584);
   VbbHcc_algo_H_dR_stack_8->SetBinError(5,1.821864);
   VbbHcc_algo_H_dR_stack_8->SetBinError(6,1.850975);
   VbbHcc_algo_H_dR_stack_8->SetBinError(7,1.466178);
   VbbHcc_algo_H_dR_stack_8->SetBinError(8,1.403845);
   VbbHcc_algo_H_dR_stack_8->SetBinError(9,1.458154);
   VbbHcc_algo_H_dR_stack_8->SetBinError(10,1.19174);
   VbbHcc_algo_H_dR_stack_8->SetBinError(11,1.268421);
   VbbHcc_algo_H_dR_stack_8->SetBinError(12,1.282405);
   VbbHcc_algo_H_dR_stack_8->SetBinError(13,1.387714);
   VbbHcc_algo_H_dR_stack_8->SetBinError(14,1.336796);
   VbbHcc_algo_H_dR_stack_8->SetBinError(15,1.245725);
   VbbHcc_algo_H_dR_stack_8->SetBinError(16,1.495558);
   VbbHcc_algo_H_dR_stack_8->SetBinError(17,1.213852);
   VbbHcc_algo_H_dR_stack_8->SetBinError(18,1.399525);
   VbbHcc_algo_H_dR_stack_8->SetBinError(19,1.410321);
   VbbHcc_algo_H_dR_stack_8->SetBinError(20,1.356923);
   VbbHcc_algo_H_dR_stack_8->SetBinError(21,1.191054);
   VbbHcc_algo_H_dR_stack_8->SetBinError(22,1.027912);
   VbbHcc_algo_H_dR_stack_8->SetBinError(23,0.9763766);
   VbbHcc_algo_H_dR_stack_8->SetBinError(24,0.598167);
   VbbHcc_algo_H_dR_stack_8->SetBinError(25,0.8982382);
   VbbHcc_algo_H_dR_stack_8->SetBinError(26,0.8368652);
   VbbHcc_algo_H_dR_stack_8->SetBinError(27,0.9216577);
   VbbHcc_algo_H_dR_stack_8->SetBinError(28,0.5874768);
   VbbHcc_algo_H_dR_stack_8->SetBinError(29,0.4518711);
   VbbHcc_algo_H_dR_stack_8->SetBinError(30,0.2458286);
   VbbHcc_algo_H_dR_stack_8->SetBinError(31,0.3909247);
   VbbHcc_algo_H_dR_stack_8->SetEntries(665);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_9 = new TH1D("VbbHcc_algo_H_dR_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(2,0.002982604);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(3,4.728155);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(4,8.991471);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(5,9.909625);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(6,9.081337);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(7,7.155432);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(8,5.463416);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(9,4.296075);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(10,3.595157);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(11,3.881881);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(12,4.02572);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(13,4.387462);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(14,4.248035);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(15,3.697172);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(16,3.252975);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(17,3.082213);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(18,3.039335);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(19,3.106707);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(20,2.780821);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(21,2.476789);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(22,1.943761);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(23,1.723145);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(24,1.568301);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(25,1.528433);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(26,1.442311);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(27,1.449132);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(28,1.163342);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(29,0.9121663);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(30,0.5091238);
   VbbHcc_algo_H_dR_stack_9->SetBinContent(31,0.3043666);
   VbbHcc_algo_H_dR_stack_9->SetBinError(2,0.002109034);
   VbbHcc_algo_H_dR_stack_9->SetBinError(3,0.08605648);
   VbbHcc_algo_H_dR_stack_9->SetBinError(4,0.1187691);
   VbbHcc_algo_H_dR_stack_9->SetBinError(5,0.1244967);
   VbbHcc_algo_H_dR_stack_9->SetBinError(6,0.1187974);
   VbbHcc_algo_H_dR_stack_9->SetBinError(7,0.1058385);
   VbbHcc_algo_H_dR_stack_9->SetBinError(8,0.09160786);
   VbbHcc_algo_H_dR_stack_9->SetBinError(9,0.08085211);
   VbbHcc_algo_H_dR_stack_9->SetBinError(10,0.07379149);
   VbbHcc_algo_H_dR_stack_9->SetBinError(11,0.07672377);
   VbbHcc_algo_H_dR_stack_9->SetBinError(12,0.07797981);
   VbbHcc_algo_H_dR_stack_9->SetBinError(13,0.08145504);
   VbbHcc_algo_H_dR_stack_9->SetBinError(14,0.08018016);
   VbbHcc_algo_H_dR_stack_9->SetBinError(15,0.07484644);
   VbbHcc_algo_H_dR_stack_9->SetBinError(16,0.06999559);
   VbbHcc_algo_H_dR_stack_9->SetBinError(17,0.06813408);
   VbbHcc_algo_H_dR_stack_9->SetBinError(18,0.06784118);
   VbbHcc_algo_H_dR_stack_9->SetBinError(19,0.06889813);
   VbbHcc_algo_H_dR_stack_9->SetBinError(20,0.06478206);
   VbbHcc_algo_H_dR_stack_9->SetBinError(21,0.06131136);
   VbbHcc_algo_H_dR_stack_9->SetBinError(22,0.05444865);
   VbbHcc_algo_H_dR_stack_9->SetBinError(23,0.050968);
   VbbHcc_algo_H_dR_stack_9->SetBinError(24,0.0490161);
   VbbHcc_algo_H_dR_stack_9->SetBinError(25,0.04842832);
   VbbHcc_algo_H_dR_stack_9->SetBinError(26,0.04717192);
   VbbHcc_algo_H_dR_stack_9->SetBinError(27,0.04740825);
   VbbHcc_algo_H_dR_stack_9->SetBinError(28,0.04291424);
   VbbHcc_algo_H_dR_stack_9->SetBinError(29,0.03764547);
   VbbHcc_algo_H_dR_stack_9->SetBinError(30,0.02781229);
   VbbHcc_algo_H_dR_stack_9->SetBinError(31,0.02158689);
   VbbHcc_algo_H_dR_stack_9->SetEntries(72116);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_10 = new TH1D("VbbHcc_algo_H_dR_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(2,0.0003502932);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(3,1.052463);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(4,2.737635);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(5,3.545857);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(6,3.646802);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(7,2.937199);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(8,2.119427);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(9,1.586137);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(10,1.452915);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(11,1.615352);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(12,1.868464);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(13,2.032071);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(14,1.996268);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(15,1.768924);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(16,1.690162);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(17,1.489327);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(18,1.511638);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(19,1.510249);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(20,1.458155);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(21,1.247476);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(22,1.040694);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(23,0.746874);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(24,0.6919611);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(25,0.6706331);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(26,0.6280765);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(27,0.5495691);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(28,0.4524477);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(29,0.3266511);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(30,0.1655164);
   VbbHcc_algo_H_dR_stack_10->SetBinContent(31,0.107425);
   VbbHcc_algo_H_dR_stack_10->SetBinError(2,0.0003502932);
   VbbHcc_algo_H_dR_stack_10->SetBinError(3,0.02005639);
   VbbHcc_algo_H_dR_stack_10->SetBinError(4,0.03249228);
   VbbHcc_algo_H_dR_stack_10->SetBinError(5,0.03705733);
   VbbHcc_algo_H_dR_stack_10->SetBinError(6,0.03760931);
   VbbHcc_algo_H_dR_stack_10->SetBinError(7,0.03378486);
   VbbHcc_algo_H_dR_stack_10->SetBinError(8,0.0286708);
   VbbHcc_algo_H_dR_stack_10->SetBinError(9,0.02478555);
   VbbHcc_algo_H_dR_stack_10->SetBinError(10,0.02367409);
   VbbHcc_algo_H_dR_stack_10->SetBinError(11,0.02497638);
   VbbHcc_algo_H_dR_stack_10->SetBinError(12,0.02686728);
   VbbHcc_algo_H_dR_stack_10->SetBinError(13,0.02804529);
   VbbHcc_algo_H_dR_stack_10->SetBinError(14,0.02776494);
   VbbHcc_algo_H_dR_stack_10->SetBinError(15,0.02611073);
   VbbHcc_algo_H_dR_stack_10->SetBinError(16,0.02553357);
   VbbHcc_algo_H_dR_stack_10->SetBinError(17,0.02396442);
   VbbHcc_algo_H_dR_stack_10->SetBinError(18,0.02413724);
   VbbHcc_algo_H_dR_stack_10->SetBinError(19,0.02415628);
   VbbHcc_algo_H_dR_stack_10->SetBinError(20,0.02370912);
   VbbHcc_algo_H_dR_stack_10->SetBinError(21,0.02192299);
   VbbHcc_algo_H_dR_stack_10->SetBinError(22,0.0200502);
   VbbHcc_algo_H_dR_stack_10->SetBinError(23,0.01697187);
   VbbHcc_algo_H_dR_stack_10->SetBinError(24,0.01635307);
   VbbHcc_algo_H_dR_stack_10->SetBinError(25,0.0161292);
   VbbHcc_algo_H_dR_stack_10->SetBinError(26,0.01559463);
   VbbHcc_algo_H_dR_stack_10->SetBinError(27,0.01456929);
   VbbHcc_algo_H_dR_stack_10->SetBinError(28,0.01322886);
   VbbHcc_algo_H_dR_stack_10->SetBinError(29,0.01120709);
   VbbHcc_algo_H_dR_stack_10->SetBinError(30,0.007967075);
   VbbHcc_algo_H_dR_stack_10->SetBinError(31,0.006390915);
   VbbHcc_algo_H_dR_stack_10->SetEntries(112076);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_11 = new TH1D("VbbHcc_algo_H_dR_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(3,0.03702166);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(4,0.07767463);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(5,0.08919613);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(6,0.04929097);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(7,0.06910452);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(8,0.05330178);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(9,0.03073916);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(10,0.0467743);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(11,0.03677401);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(12,0.04952895);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(13,0.07214181);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(14,0.03462736);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(15,0.05436473);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(16,0.0397881);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(17,0.0186619);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(18,0.05037602);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(19,0.04875384);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(20,0.03083083);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(21,0.02276258);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(22,0.01712854);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(23,0.02601831);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(24,0.01116981);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(25,0.002937063);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(26,0.01300511);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(27,0.0112292);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(28,0.01541781);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(29,0.02315664);
   VbbHcc_algo_H_dR_stack_11->SetBinContent(31,0.008992435);
   VbbHcc_algo_H_dR_stack_11->SetBinError(3,0.01034436);
   VbbHcc_algo_H_dR_stack_11->SetBinError(4,0.01509047);
   VbbHcc_algo_H_dR_stack_11->SetBinError(5,0.01739389);
   VbbHcc_algo_H_dR_stack_11->SetBinError(6,0.01341838);
   VbbHcc_algo_H_dR_stack_11->SetBinError(7,0.01417182);
   VbbHcc_algo_H_dR_stack_11->SetBinError(8,0.01275141);
   VbbHcc_algo_H_dR_stack_11->SetBinError(9,0.009738505);
   VbbHcc_algo_H_dR_stack_11->SetBinError(10,0.01171821);
   VbbHcc_algo_H_dR_stack_11->SetBinError(11,0.01022519);
   VbbHcc_algo_H_dR_stack_11->SetBinError(12,0.01204165);
   VbbHcc_algo_H_dR_stack_11->SetBinError(13,0.01475371);
   VbbHcc_algo_H_dR_stack_11->SetBinError(14,0.009915667);
   VbbHcc_algo_H_dR_stack_11->SetBinError(15,0.01264526);
   VbbHcc_algo_H_dR_stack_11->SetBinError(16,0.01069139);
   VbbHcc_algo_H_dR_stack_11->SetBinError(17,0.007276408);
   VbbHcc_algo_H_dR_stack_11->SetBinError(18,0.01223954);
   VbbHcc_algo_H_dR_stack_11->SetBinError(19,0.01199829);
   VbbHcc_algo_H_dR_stack_11->SetBinError(20,0.009761345);
   VbbHcc_algo_H_dR_stack_11->SetBinError(21,0.008055014);
   VbbHcc_algo_H_dR_stack_11->SetBinError(22,0.007020016);
   VbbHcc_algo_H_dR_stack_11->SetBinError(23,0.008728817);
   VbbHcc_algo_H_dR_stack_11->SetBinError(24,0.005590013);
   VbbHcc_algo_H_dR_stack_11->SetBinError(25,0.002937063);
   VbbHcc_algo_H_dR_stack_11->SetBinError(26,0.005925139);
   VbbHcc_algo_H_dR_stack_11->SetBinError(27,0.005703441);
   VbbHcc_algo_H_dR_stack_11->SetBinError(28,0.006716087);
   VbbHcc_algo_H_dR_stack_11->SetBinError(29,0.008207964);
   VbbHcc_algo_H_dR_stack_11->SetBinError(31,0.005202199);
   VbbHcc_algo_H_dR_stack_11->SetEntries(376);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_stack_12 = new TH1D("VbbHcc_algo_H_dR_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(3,0.007006986);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(4,0.01981086);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(5,0.03300677);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(6,0.0303058);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(7,0.0317175);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(8,0.02383924);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(9,0.01440507);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(10,0.01333908);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(11,0.0160685);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(12,0.02272104);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(13,0.02000373);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(14,0.02159101);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(15,0.01979152);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(16,0.01877687);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(17,0.01466915);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(18,0.0131078);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(19,0.02075777);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(20,0.01841564);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(21,0.01237232);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(22,0.007778793);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(23,0.009550715);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(24,0.006572275);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(25,0.009724304);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(26,0.006406968);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(27,0.005068868);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(28,0.005336152);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(29,0.002347428);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(30,0.0008009432);
   VbbHcc_algo_H_dR_stack_12->SetBinContent(31,0.001150377);
   VbbHcc_algo_H_dR_stack_12->SetBinError(3,0.001653599);
   VbbHcc_algo_H_dR_stack_12->SetBinError(4,0.002737965);
   VbbHcc_algo_H_dR_stack_12->SetBinError(5,0.003565277);
   VbbHcc_algo_H_dR_stack_12->SetBinError(6,0.00342498);
   VbbHcc_algo_H_dR_stack_12->SetBinError(7,0.00349163);
   VbbHcc_algo_H_dR_stack_12->SetBinError(8,0.003036319);
   VbbHcc_algo_H_dR_stack_12->SetBinError(9,0.002335304);
   VbbHcc_algo_H_dR_stack_12->SetBinError(10,0.002231542);
   VbbHcc_algo_H_dR_stack_12->SetBinError(11,0.002467239);
   VbbHcc_algo_H_dR_stack_12->SetBinError(12,0.002921666);
   VbbHcc_algo_H_dR_stack_12->SetBinError(13,0.002766055);
   VbbHcc_algo_H_dR_stack_12->SetBinError(14,0.002890583);
   VbbHcc_algo_H_dR_stack_12->SetBinError(15,0.002749165);
   VbbHcc_algo_H_dR_stack_12->SetBinError(16,0.002693452);
   VbbHcc_algo_H_dR_stack_12->SetBinError(17,0.002371801);
   VbbHcc_algo_H_dR_stack_12->SetBinError(18,0.002241225);
   VbbHcc_algo_H_dR_stack_12->SetBinError(19,0.00281737);
   VbbHcc_algo_H_dR_stack_12->SetBinError(20,0.002680234);
   VbbHcc_algo_H_dR_stack_12->SetBinError(21,0.00218427);
   VbbHcc_algo_H_dR_stack_12->SetBinError(22,0.001719951);
   VbbHcc_algo_H_dR_stack_12->SetBinError(23,0.001899695);
   VbbHcc_algo_H_dR_stack_12->SetBinError(24,0.001599862);
   VbbHcc_algo_H_dR_stack_12->SetBinError(25,0.001947013);
   VbbHcc_algo_H_dR_stack_12->SetBinError(26,0.001531347);
   VbbHcc_algo_H_dR_stack_12->SetBinError(27,0.001410186);
   VbbHcc_algo_H_dR_stack_12->SetBinError(28,0.001434403);
   VbbHcc_algo_H_dR_stack_12->SetBinError(29,0.0009595597);
   VbbHcc_algo_H_dR_stack_12->SetBinError(30,0.0005677328);
   VbbHcc_algo_H_dR_stack_12->SetBinError(31,0.0006662072);
   VbbHcc_algo_H_dR_stack_12->SetEntries(1132);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR__320 = new TH1D("VbbHcc_algo_H_dR__320","",30,0,6);
   VbbHcc_algo_H_dR__320->SetBinContent(2,12);
   VbbHcc_algo_H_dR__320->SetBinContent(3,25631);
   VbbHcc_algo_H_dR__320->SetBinContent(4,32527);
   VbbHcc_algo_H_dR__320->SetBinContent(5,27893);
   VbbHcc_algo_H_dR__320->SetBinContent(6,28042);
   VbbHcc_algo_H_dR__320->SetBinContent(7,28216);
   VbbHcc_algo_H_dR__320->SetBinContent(8,29607);
   VbbHcc_algo_H_dR__320->SetBinContent(9,32064);
   VbbHcc_algo_H_dR__320->SetBinContent(10,34910);
   VbbHcc_algo_H_dR__320->SetBinContent(11,39177);
   VbbHcc_algo_H_dR__320->SetBinContent(12,43671);
   VbbHcc_algo_H_dR__320->SetBinContent(13,48600);
   VbbHcc_algo_H_dR__320->SetBinContent(14,51825);
   VbbHcc_algo_H_dR__320->SetBinContent(15,53111);
   VbbHcc_algo_H_dR__320->SetBinContent(16,52794);
   VbbHcc_algo_H_dR__320->SetBinContent(17,50651);
   VbbHcc_algo_H_dR__320->SetBinContent(18,47669);
   VbbHcc_algo_H_dR__320->SetBinContent(19,44205);
   VbbHcc_algo_H_dR__320->SetBinContent(20,39674);
   VbbHcc_algo_H_dR__320->SetBinContent(21,33448);
   VbbHcc_algo_H_dR__320->SetBinContent(22,26890);
   VbbHcc_algo_H_dR__320->SetBinContent(23,21492);
   VbbHcc_algo_H_dR__320->SetBinContent(24,16765);
   VbbHcc_algo_H_dR__320->SetBinContent(25,12861);
   VbbHcc_algo_H_dR__320->SetBinContent(26,9828);
   VbbHcc_algo_H_dR__320->SetBinContent(27,7778);
   VbbHcc_algo_H_dR__320->SetBinContent(28,6061);
   VbbHcc_algo_H_dR__320->SetBinContent(29,4980);
   VbbHcc_algo_H_dR__320->SetBinContent(30,3237);
   VbbHcc_algo_H_dR__320->SetBinContent(31,2429);
   VbbHcc_algo_H_dR__320->SetEntries(856077);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR__320->SetLineColor(ci);
   VbbHcc_algo_H_dR__320->SetLineWidth(2);
   VbbHcc_algo_H_dR__320->SetMarkerStyle(20);
   VbbHcc_algo_H_dR__320->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR__320->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR__320->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__320->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__320->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__320->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__320->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__320->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__320->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__320->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR__320->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__320->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__320->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR__320->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR__320->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__320->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_fx1233[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fy1233[30] = {
   0,
   28.87035,
   83017.15,
   130178.6,
   121145.5,
   117119.8,
   144246.7,
   141671.6,
   158996.4,
   166874.9,
   178847.2,
   213163.4,
   237503.4,
   270749.6,
   239209.9,
   260349.1,
   202168.4,
   199783.1,
   198169.1,
   190575,
   155701.2,
   126521.7,
   105321.5,
   75783.77,
   63845.92,
   65990.5,
   42147.76,
   27988.08,
   23803.55,
   13895.05};
   Double_t Graph_from_VbbHcc_algo_H_dR_fex1233[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_fey1233[30] = {
   0,
   24.00433,
   4446.421,
   5955.868,
   5927.618,
   5140.462,
   7199.463,
   6211.595,
   7018.375,
   7270.989,
   7206.114,
   23142.96,
   9229.889,
   20839.72,
   9302.204,
   24174.37,
   7442.189,
   7528.505,
   7723.118,
   8119.166,
   7325.083,
   6384.704,
   5555.118,
   5403.332,
   4722.868,
   22409.66,
   4363.712,
   3615.398,
   2882.347,
   2500.383};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_fx1233,Graph_from_VbbHcc_algo_H_dR_fy1233,Graph_from_VbbHcc_algo_H_dR_fex1233,Graph_from_VbbHcc_algo_H_dR_fey1233);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR1233 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR1233","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetMinimum(320.7483);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetMaximum(320748.3);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR1233->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR1233->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR1233);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_algo_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__321 = new TH1D("data_mc_ratio__321","",30,0,6);
   data_mc_ratio__321->SetBinContent(2,0.4156514);
   data_mc_ratio__321->SetBinContent(3,0.3087434);
   data_mc_ratio__321->SetBinContent(4,0.2498644);
   data_mc_ratio__321->SetBinContent(5,0.2302437);
   data_mc_ratio__321->SetBinContent(6,0.2394301);
   data_mc_ratio__321->SetBinContent(7,0.1956094);
   data_mc_ratio__321->SetBinContent(8,0.2089834);
   data_mc_ratio__321->SetBinContent(9,0.2016649);
   data_mc_ratio__321->SetBinContent(10,0.2091987);
   data_mc_ratio__321->SetBinContent(11,0.2190529);
   data_mc_ratio__321->SetBinContent(12,0.204871);
   data_mc_ratio__321->SetBinContent(13,0.2046286);
   data_mc_ratio__321->SetBinContent(14,0.191413);
   data_mc_ratio__321->SetBinContent(15,0.2220268);
   data_mc_ratio__321->SetBinContent(16,0.2027815);
   data_mc_ratio__321->SetBinContent(17,0.2505387);
   data_mc_ratio__321->SetBinContent(18,0.2386037);
   data_mc_ratio__321->SetBinContent(19,0.2230671);
   data_mc_ratio__321->SetBinContent(20,0.2081805);
   data_mc_ratio__321->SetBinContent(21,0.2148218);
   data_mc_ratio__321->SetBinContent(22,0.2125327);
   data_mc_ratio__321->SetBinContent(23,0.204061);
   data_mc_ratio__321->SetBinContent(24,0.2212215);
   data_mc_ratio__321->SetBinContent(25,0.2014381);
   data_mc_ratio__321->SetBinContent(26,0.1489305);
   data_mc_ratio__321->SetBinContent(27,0.1845412);
   data_mc_ratio__321->SetBinContent(28,0.2165565);
   data_mc_ratio__321->SetBinContent(29,0.2092125);
   data_mc_ratio__321->SetBinContent(30,0.2329606);
   data_mc_ratio__321->SetBinContent(31,0.1747541);
   data_mc_ratio__321->SetBinError(2,0.1199882);
   data_mc_ratio__321->SetBinError(3,0.001928479);
   data_mc_ratio__321->SetBinError(4,0.001385423);
   data_mc_ratio__321->SetBinError(5,0.001378606);
   data_mc_ratio__321->SetBinError(6,0.001429796);
   data_mc_ratio__321->SetBinError(7,0.001164506);
   data_mc_ratio__321->SetBinError(8,0.001214547);
   data_mc_ratio__321->SetBinError(9,0.001126216);
   data_mc_ratio__321->SetBinError(10,0.001119654);
   data_mc_ratio__321->SetBinError(11,0.001106709);
   data_mc_ratio__321->SetBinError(12,0.0009803563);
   data_mc_ratio__321->SetBinError(13,0.0009282143);
   data_mc_ratio__321->SetBinError(14,0.0008408175);
   data_mc_ratio__321->SetBinError(15,0.0009634143);
   data_mc_ratio__321->SetBinError(16,0.0008825435);
   data_mc_ratio__321->SetBinError(17,0.00111322);
   data_mc_ratio__321->SetBinError(18,0.001092847);
   data_mc_ratio__321->SetBinError(19,0.001060962);
   data_mc_ratio__321->SetBinError(20,0.00104517);
   data_mc_ratio__321->SetBinError(21,0.001174609);
   data_mc_ratio__321->SetBinError(22,0.001296076);
   data_mc_ratio__321->SetBinError(23,0.001391943);
   data_mc_ratio__321->SetBinError(24,0.001708542);
   data_mc_ratio__321->SetBinError(25,0.00177625);
   data_mc_ratio__321->SetBinError(26,0.001502281);
   data_mc_ratio__321->SetBinError(27,0.002092471);
   data_mc_ratio__321->SetBinError(28,0.002781628);
   data_mc_ratio__321->SetBinError(29,0.002964647);
   data_mc_ratio__321->SetBinError(30,0.004094597);
   data_mc_ratio__321->SetBinError(31,0.03573389);
   data_mc_ratio__321->SetMinimum(0.4);
   data_mc_ratio__321->SetMaximum(1.6);
   data_mc_ratio__321->SetEntries(291.9869);
   data_mc_ratio__321->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__321->SetLineColor(ci);
   data_mc_ratio__321->SetLineWidth(2);
   data_mc_ratio__321->SetMarkerStyle(20);
   data_mc_ratio__321->SetMarkerSize(1.2);
   data_mc_ratio__321->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__321->GetXaxis()->SetRange(1,31);
   data_mc_ratio__321->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__321->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__321->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__321->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__321->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__321->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__321->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__321->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__321->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__321->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__321->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__321->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__321->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__321->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__321->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__321->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__321->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1234[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1234[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1234[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1234[30] = {
   0,
   0.8314528,
   0.05356028,
   0.04575152,
   0.04892972,
   0.04389063,
   0.04991077,
   0.04384504,
   0.04414172,
   0.0435715,
   0.04029201,
   0.1085691,
   0.03886213,
   0.07697045,
   0.0388872,
   0.09285367,
   0.03681184,
   0.03768339,
   0.03897237,
   0.04260352,
   0.04704578,
   0.05046331,
   0.05274441,
   0.07129932,
   0.0739729,
   0.3395893,
   0.1035337,
   0.1291763,
   0.121089,
   0.1799477};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1234,Graph_from_mc_statistical_error_fy1234,Graph_from_mc_statistical_error_fex1234,Graph_from_mc_statistical_error_fey1234);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1234 = new TH1F("Graph_Graph_from_mc_statistical_error1234","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1234->SetMinimum(0.002256607);
   Graph_Graph_from_mc_statistical_error1234->SetMaximum(1.997743);
   Graph_Graph_from_mc_statistical_error1234->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1234->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1234->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1234->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1234->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1234);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}
