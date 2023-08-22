void H_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Tue Aug 22 09:21:43 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(0,0,1,1);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetFillStyle(4000);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1025.557,6.314516,1024541);
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
   st->SetMaximum(878080.7);
   
   TH1F *st_stack_138 = new TH1F("st_stack_138","",30,0,6);
   st_stack_138->SetMinimum(0.01);
   st_stack_138->SetMaximum(921984.8);
   st_stack_138->SetDirectory(0);
   st_stack_138->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_138->SetLineColor(ci);
   st_stack_138->GetXaxis()->SetRange(1,30);
   st_stack_138->GetXaxis()->SetLabelFont(42);
   st_stack_138->GetXaxis()->SetLabelSize(0.035);
   st_stack_138->GetXaxis()->SetTitleSize(0.035);
   st_stack_138->GetXaxis()->SetTitleFont(42);
   st_stack_138->GetYaxis()->SetTitle("Events/0.2");
   st_stack_138->GetYaxis()->SetLabelFont(42);
   st_stack_138->GetYaxis()->SetLabelSize(0.05);
   st_stack_138->GetYaxis()->SetTitleSize(0.057);
   st_stack_138->GetYaxis()->SetTitleOffset(1.2);
   st_stack_138->GetYaxis()->SetTitleFont(42);
   st_stack_138->GetZaxis()->SetLabelFont(42);
   st_stack_138->GetZaxis()->SetLabelSize(0.035);
   st_stack_138->GetZaxis()->SetTitleSize(0.035);
   st_stack_138->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_138);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,151802.3);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,341635.7);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,269928.8);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,182196.5);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,160365.9);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,84500.36);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,67114);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,60488.25);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,65382.6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,43014.57);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,30988.57);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,31246.03);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,25842.41);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,20750.45);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,11280.77);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,11724.59);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,6361.891);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,5086.105);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,4162.239);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,1878.062);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,1284.574);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,420.7585);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(23,125.8154);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(24,727.4459);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(25,57.80583);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(26,271.6065);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(27,72.2758);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(28,57.80583);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(29,7.234983);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(30,32.52041);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(31,7.234983);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,17346.68);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,18283.74);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,7261.901);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,5712.932);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,24618.58);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,3776.147);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,3190.037);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,3762.956);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,17250.94);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,2842.758);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,2193.874);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,2967.579);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,2129.141);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,2184.421);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,1316.466);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,1465.701);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,992.2802);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,979.983);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,901.0105);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,550.0142);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,472.8086);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,272.0371);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(23,47.02573);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(24,384.3058);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(25,36.48356);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(26,267.5473);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(27,37.89117);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(28,36.48356);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(29,7.234983);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(30,26.30015);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(31,7.234983);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(106115);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,727.3014);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,2536.646);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,2194.768);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,1467.374);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,986.5204);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,697.2995);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,540.8147);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,441.4884);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,369.5565);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,303.6218);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,234.6811);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,197.9504);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,161.4223);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,131.3388);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,106.3058);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,83.80765);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,58.45923);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,43.22798);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,30.5708);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,17.85215);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,11.49516);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,6.504141);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,3.33602);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,3.152351);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,2.832285);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,1.490267);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,1.026825);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.4411401);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.2412652);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(30,0.344634);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(31,0.6219266);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,10.79604);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,19.28075);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,17.90301);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,14.69916);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,12.04748);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,10.05941);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,8.788321);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,8.019526);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,7.242108);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,6.571979);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,5.665091);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,5.299747);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,4.778592);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,4.269549);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,3.80083);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,3.490656);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,2.855772);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,2.378524);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,2.110949);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,1.499308);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,1.239188);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.9436476);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.4764479);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.571442);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.691483);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.3639259);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.2301123);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.147189);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.1078971);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(30,0.1304143);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(31,0.2964697);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(142925);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(1,12840.86);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(2,48042.56);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(3,40489.62);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(4,24397.85);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(5,15133.25);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(6,10401.65);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(7,7803.602);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(8,6254.019);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(9,5060.489);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(10,4097.091);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(11,3315.088);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(12,2784.548);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(13,2374.291);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(14,2077.213);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(15,1740.388);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(16,1432.54);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(17,1089.851);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(18,788.2754);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(19,542.224);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(20,337.5685);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(21,176.0472);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(22,92.34397);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(23,48.73929);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(24,30.71267);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(25,19.37948);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(26,12.95255);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(27,9.432992);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(28,5.242034);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(29,4.99714);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(30,3.328055);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(31,6.634754);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(1,28.97897);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(2,55.78492);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(3,51.08095);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(4,39.56677);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(5,31.10823);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(6,25.74774);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(7,22.27126);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(8,19.93294);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(9,17.92885);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(10,16.13242);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(11,14.5103);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(12,13.29267);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(13,12.30587);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(14,11.5313);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(15,10.5668);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(16,9.597608);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(17,8.378359);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(18,7.11484);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(19,5.915109);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(20,4.6509);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(21,3.337707);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(22,2.403675);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(23,1.745039);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(24,1.375252);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(25,1.099451);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(26,0.8950053);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(27,0.7656559);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(28,0.564002);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(29,0.5510186);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(30,0.4525004);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(31,0.6385468);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetEntries(3114170);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(1,728.4726);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(2,2068.635);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(3,1593.43);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(4,1044.685);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(5,708.5295);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(6,475.9695);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(7,382.9296);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(8,345.1549);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(9,278.7764);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(10,236.7035);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(11,189.9201);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(12,154.4125);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(13,123.1109);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(14,88.59861);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(15,79.89845);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(16,68.38972);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(17,42.31771);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(18,33.20304);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(19,14.60257);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(20,12.56682);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(21,3.705351);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(22,4.329887);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(23,3.939078);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(24,1.968343);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(25,0.6372353);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(26,0.4214551);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(27,0.1695794);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(28,0.6372353);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(29,0.3186177);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(30,0.3853597);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(31,0.7039773);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(1,11.87404);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(2,31.45418);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(3,31.735);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(4,26.11042);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(5,22.02869);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(6,17.76905);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(7,16.10323);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(8,15.03817);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(9,12.57775);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(10,13.85995);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(11,10.64433);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(12,9.82289);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(13,9.899184);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(14,6.104388);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(15,6.757226);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(16,8.305122);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(17,6.045223);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(18,6.546332);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(19,3.478793);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(20,3.460615);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(21,0.9586524);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(22,3.118649);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(23,3.100356);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(24,0.7374057);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(25,0.4505934);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(26,0.3348026);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(27,0.122597);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(28,0.4505934);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(29,0.3186177);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(30,0.325533);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(31,0.4555095);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetEntries(54777);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(1,328.8401);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(2,754.7341);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(3,545.5698);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(4,333.506);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(5,196.1624);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(6,194.7782);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(7,134.2835);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(8,81.44542);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(9,79.06053);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(10,71.27466);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(11,61.07457);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(12,55.97618);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(13,34.65132);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(14,21.38104);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(15,28.57709);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(16,13.82817);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(17,10.22633);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(18,7.489123);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(19,3.590157);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(20,4.94333);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(21,1.71248);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(22,1.781193);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(23,0.3950542);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(24,0.09122051);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(25,0.182441);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(27,0.1695762);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(28,0.09122051);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(29,0.09122051);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(1,12.71228);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(2,33.86253);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(3,31.5997);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(4,22.52712);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(5,11.04826);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(6,20.647);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(7,15.29293);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(8,6.794318);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(9,9.829118);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(10,9.781818);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(11,9.624582);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(12,11.56417);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(13,8.307675);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(14,3.268655);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(15,8.313201);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(16,7.481675);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(17,2.313415);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(18,2.447788);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(19,1.710376);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(20,2.127905);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(21,1.207511);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(22,0.7686951);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(23,0.3950542);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(24,0.09122051);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(25,0.1290053);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(27,0.1695762);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(28,0.09122051);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(29,0.09122051);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetEntries(15759);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(1,4.729588);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(2,5.3602);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(3,5.3602);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(4,4.414282);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(5,0.6306118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(6,0.6306118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(7,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(8,1.576529);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(9,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(10,1.261224);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(11,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(13,0.6306118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(14,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(16,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(1,1.221174);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(2,1.300039);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(3,1.300039);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(4,1.179767);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(5,0.4459099);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(6,0.4459099);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(7,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(8,0.7050454);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(9,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(10,0.6306118);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(11,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(13,0.4459099);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(14,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(16,0.3153059);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetEntries(83);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(1,8.485969);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(2,23.07123);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(3,10.07709);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(4,7.69041);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(5,3.182238);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(6,2.121492);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(7,3.182238);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(8,3.977798);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(9,1.325933);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(10,2.651865);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(11,1.591119);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(12,0.5303731);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(13,1.325933);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(14,1.060746);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(16,0.2651865);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(18,0.2651865);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(19,0.5303731);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(20,0.2651865);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(21,0.5303731);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(1,1.500122);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(2,2.473495);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(3,1.63472);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(4,1.428073);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(5,0.9186331);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(6,0.7500608);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(7,0.9186331);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(8,1.027063);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(9,0.5929751);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(10,0.8385935);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(11,0.6495717);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(12,0.3750304);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(13,0.5929751);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(14,0.5303731);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(16,0.2651865);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(18,0.2651865);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(19,0.3750304);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(20,0.2651865);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(21,0.3750304);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetEntries(272);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(1,18.99192);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(2,32.91933);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(3,16.71289);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(4,10.63548);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(5,6.077415);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(6,5.064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(7,3.545159);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(8,3.545159);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(9,2.785482);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(10,2.025805);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(11,2.532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(12,1.772579);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(13,1.012902);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(14,1.772579);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(15,0.5064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(16,0.7596768);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(17,0.2532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(18,0.5064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(19,0.5064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(21,0.2532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(1,2.192998);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(2,2.887216);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(3,2.057215);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(4,1.64109);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(5,1.240547);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(6,1.132459);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(7,0.9474835);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(8,0.9474835);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(9,0.8398543);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(10,0.7162302);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(11,0.8007697);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(12,0.669972);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(13,0.5064512);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(14,0.669972);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(15,0.3581151);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(16,0.4385996);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(17,0.2532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(18,0.3581151);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(19,0.3581151);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(21,0.2532256);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetEntries(443);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(1,10.31575);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(2,24.57562);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(3,14.81547);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(4,8.183797);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(5,4.504561);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(6,3.096179);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(7,2.548654);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(8,2.256318);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(9,1.846079);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(10,1.487523);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(11,1.248485);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(12,1.053056);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(13,0.8866992);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(14,0.7510293);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(15,0.5685211);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(16,0.4942258);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(17,0.2697245);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(18,0.2325768);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(19,0.1421303);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(20,0.0952919);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(21,0.04845351);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(22,0.0290721);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(23,0.006460468);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(24,0.006460468);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(25,0.003230234);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(27,0.003230234);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(28,0.001615117);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(31,0.003230234);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(1,0.1290781);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(2,0.1992298);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(3,0.1546891);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(4,0.1149686);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(5,0.08529591);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(6,0.07071556);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(7,0.06415898);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(8,0.06036736);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(9,0.05460433);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(10,0.04901554);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(11,0.0449049);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(12,0.04124086);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(13,0.0378434);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(14,0.03482815);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(15,0.03030228);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(16,0.02825301);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(17,0.02087191);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(18,0.0193814);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(19,0.01515114);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(20,0.01240595);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(21,0.008846359);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(22,0.006852361);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(23,0.003230234);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(24,0.003230234);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(25,0.00228412);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(27,0.00228412);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(28,0.001615117);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(31,0.00228412);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetEntries(49206);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(1,3.472095);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(2,11.90672);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(3,9.273018);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(4,5.802397);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(5,3.436691);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(6,2.323909);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(7,1.846441);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(8,1.515999);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(9,1.345861);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(10,1.066068);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(11,0.831513);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(12,0.7115313);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(13,0.6072848);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(14,0.5463104);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(15,0.4563241);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(16,0.3756806);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(17,0.2734011);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(18,0.1794809);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(19,0.1381757);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(20,0.09736226);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(21,0.04228866);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(22,0.0172105);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(23,0.0103263);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(24,0.0068842);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(25,0.005900743);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(26,0.003933829);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(27,0.002458643);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(28,0.0009834572);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(29,0.0009834572);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(31,0.002458643);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(1,0.04131983);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(2,0.07651714);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(3,0.06752635);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(4,0.0534154);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(5,0.04110863);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(6,0.03380433);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(7,0.03013217);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(8,0.02730312);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(9,0.02572544);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(10,0.02289576);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(11,0.02022075);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(12,0.01870509);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(13,0.0172806);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(14,0.01639013);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(15,0.01497957);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(16,0.01359165);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(17,0.01159479);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(18,0.009394461);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(19,0.008242873);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(20,0.006919234);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(21,0.004560103);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(22,0.002909105);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(23,0.002253383);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(24,0.00183988);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(25,0.001703398);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(26,0.001390818);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(27,0.001099539);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(28,0.0006954092);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(29,0.0006954092);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(31,0.001099539);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(1,0.06953105);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(2,0.1690869);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(3,0.1311608);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(4,0.08533356);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(5,0.03318527);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(6,0.03318527);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(7,0.03160502);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(8,0.01738276);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(9,0.01106176);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(10,0.01896301);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(11,0.004740753);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(12,0.01106176);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(13,0.007901256);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(14,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(15,0.007901256);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(16,0.007901256);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(18,0.004740753);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(19,0.003160502);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(22,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(1,0.0104822);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(2,0.01634624);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(3,0.01439677);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(4,0.01161243);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(5,0.00724162);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(6,0.00724162);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(7,0.007067098);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(8,0.0052411);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(9,0.004180952);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(10,0.005474151);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(11,0.002737075);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(12,0.004180952);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(13,0.003533549);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(14,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(15,0.003533549);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(16,0.003533549);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(18,0.002737075);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(19,0.002234813);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(21,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(22,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetEntries(413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(1,0.02491268);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(2,0.07764452);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(3,0.05958282);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(4,0.03550057);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(5,0.02491268);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(6,0.01432479);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(7,0.01224873);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(8,0.009965071);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(9,0.00954986);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(10,0.006020564);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(11,0.004567324);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(12,0.007473804);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(13,0.004152113);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(14,0.002283662);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(15,0.003944507);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(16,0.001868451);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(17,0.00145324);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(18,0.001660845);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(19,0.0008304226);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(20,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(1,0.002274206);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(2,0.004014902);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(3,0.003517063);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(4,0.002714796);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(5,0.002274206);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(6,0.001724502);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(7,0.001594649);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(8,0.001438334);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(9,0.00140805);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(10,0.001117991);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(11,0.0009737568);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(12,0.001245634);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(13,0.0009284407);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(14,0.0006885501);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(15,0.0009049321);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(16,0.000622817);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(17,0.0005492729);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(18,0.0005871975);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(19,0.0004152113);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(20,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetEntries(1460);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj0__378 = new TH1D("VbbHcc_algo_H_dR_Bj0__378","",30,0,6);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(1,23089);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(2,53228);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(3,42488);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(4,28644);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(5,18627);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(6,13502);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(7,10570);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(8,8920);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(9,7326);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(10,6083);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(11,5118);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(12,4095);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(13,3537);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(14,2762);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(15,2196);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(16,1704);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(17,1241);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(18,865);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(19,589);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(20,367);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(21,234);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(22,149);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(23,90);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(24,62);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(25,47);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(26,17);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(27,18);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(28,9);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(29,10);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(30,5);
   VbbHcc_algo_H_dR_Bj0__378->SetBinContent(31,18);
   VbbHcc_algo_H_dR_Bj0__378->SetEntries(235639);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0__378->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0__378->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj0__378->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj0__378->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj0__378->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0__378->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__378->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__378->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__378->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__378->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__378->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__378->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__378->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0__378->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__378->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__378->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__378->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__378->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__378->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fx1275[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fy1275[30] = {
   166473.9,
   395136.3,
   314808.6,
   209476.8,
   177408.3,
   96283.34,
   75987.11,
   67623.26,
   71178.13,
   47731.77,
   34795.86,
   34443.01,
   28540.36,
   23073.43,
   13237.48,
   13325.37,
   7563.543,
   5959.491,
   4754.548,
   2251.451,
   1478.41,
   525.7656,
   182.2416,
   763.3838,
   80.8464,
   286.4747,
   83.08046,
   64.22006,
   12.88421,
   36.57846};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fex1275[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fey1275[30] = {
   17346.71,
   18283.89,
   7262.241,
   5713.192,
   24618.61,
   3776.347,
   3190.205,
   3763.054,
   17250.96,
   2842.862,
   2193.977,
   2967.652,
   2129.222,
   2184.467,
   1316.557,
   1465.78,
   992.3408,
   980.0367,
   901.0409,
   550.051,
   472.8247,
   272.0683,
   47.16417,
   384.3094,
   36.50968,
   267.5492,
   37.90018,
   36.49112,
   7.264302,
   26.30638};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj0_fx1275,Graph_from_VbbHcc_algo_H_dR_Bj0_fy1275,Graph_from_VbbHcc_algo_H_dR_Bj0_fex1275,Graph_from_VbbHcc_algo_H_dR_Bj0_fey1275);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetMinimum(5.057917);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetMaximum(454761.7);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj01275);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj0","MC unc. (stat.)","fl");

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
   H_dR_Bj0_algo_17->cd();
  
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
   
   TH1D *data_mc_ratio__379 = new TH1D("data_mc_ratio__379","",30,0,6);
   data_mc_ratio__379->SetBinContent(1,0.1386944);
   data_mc_ratio__379->SetBinContent(2,0.1347079);
   data_mc_ratio__379->SetBinContent(3,0.1349645);
   data_mc_ratio__379->SetBinContent(4,0.1367407);
   data_mc_ratio__379->SetBinContent(5,0.1049951);
   data_mc_ratio__379->SetBinContent(6,0.1402319);
   data_mc_ratio__379->SetBinContent(7,0.1391025);
   data_mc_ratio__379->SetBinContent(8,0.1319073);
   data_mc_ratio__379->SetBinContent(9,0.1029249);
   data_mc_ratio__379->SetBinContent(10,0.1274413);
   data_mc_ratio__379->SetBinContent(11,0.1470865);
   data_mc_ratio__379->SetBinContent(12,0.1188921);
   data_mc_ratio__379->SetBinContent(13,0.1239298);
   data_mc_ratio__379->SetBinContent(14,0.1197048);
   data_mc_ratio__379->SetBinContent(15,0.1658926);
   data_mc_ratio__379->SetBinContent(16,0.1278763);
   data_mc_ratio__379->SetBinContent(17,0.1640765);
   data_mc_ratio__379->SetBinContent(18,0.1451466);
   data_mc_ratio__379->SetBinContent(19,0.1238814);
   data_mc_ratio__379->SetBinContent(20,0.163006);
   data_mc_ratio__379->SetBinContent(21,0.1582781);
   data_mc_ratio__379->SetBinContent(22,0.2833963);
   data_mc_ratio__379->SetBinContent(23,0.4938499);
   data_mc_ratio__379->SetBinContent(24,0.08121733);
   data_mc_ratio__379->SetBinContent(25,0.5813493);
   data_mc_ratio__379->SetBinContent(26,0.05934207);
   data_mc_ratio__379->SetBinContent(27,0.2166574);
   data_mc_ratio__379->SetBinContent(28,0.1401431);
   data_mc_ratio__379->SetBinContent(29,0.7761438);
   data_mc_ratio__379->SetBinContent(30,0.1366925);
   data_mc_ratio__379->SetBinContent(31,1.184107);
   data_mc_ratio__379->SetBinError(1,0.0009127597);
   data_mc_ratio__379->SetBinError(2,0.0005838793);
   data_mc_ratio__379->SetBinError(3,0.0006547666);
   data_mc_ratio__379->SetBinError(4,0.0008079434);
   data_mc_ratio__379->SetBinError(5,0.0007693033);
   data_mc_ratio__379->SetBinError(6,0.001206835);
   data_mc_ratio__379->SetBinError(7,0.001352999);
   data_mc_ratio__379->SetBinError(8,0.001396646);
   data_mc_ratio__379->SetBinError(9,0.001202505);
   data_mc_ratio__379->SetBinError(10,0.001633997);
   data_mc_ratio__379->SetBinError(11,0.002055997);
   data_mc_ratio__379->SetBinError(12,0.001857915);
   data_mc_ratio__379->SetBinError(13,0.00208381);
   data_mc_ratio__379->SetBinError(14,0.002277717);
   data_mc_ratio__379->SetBinError(15,0.003540061);
   data_mc_ratio__379->SetBinError(16,0.003097814);
   data_mc_ratio__379->SetBinError(17,0.004657583);
   data_mc_ratio__379->SetBinError(18,0.004935134);
   data_mc_ratio__379->SetBinError(19,0.005104444);
   data_mc_ratio__379->SetBinError(20,0.008508844);
   data_mc_ratio__379->SetBinError(21,0.01034696);
   data_mc_ratio__379->SetBinError(22,0.02321673);
   data_mc_ratio__379->SetBinError(23,0.05205635);
   data_mc_ratio__379->SetBinError(24,0.01031461);
   data_mc_ratio__379->SetBinError(25,0.08479851);
   data_mc_ratio__379->SetBinError(26,0.01439257);
   data_mc_ratio__379->SetBinError(27,0.05106665);
   data_mc_ratio__379->SetBinError(28,0.04671437);
   data_mc_ratio__379->SetBinError(29,0.2454382);
   data_mc_ratio__379->SetBinError(30,0.06113073);
   data_mc_ratio__379->SetBinError(31,0.6322745);
   data_mc_ratio__379->SetMinimum(0.4);
   data_mc_ratio__379->SetMaximum(1.6);
   data_mc_ratio__379->SetEntries(75.78825);
   data_mc_ratio__379->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__379->SetLineColor(ci);
   data_mc_ratio__379->SetLineWidth(2);
   data_mc_ratio__379->SetMarkerStyle(20);
   data_mc_ratio__379->SetMarkerSize(1.2);
   data_mc_ratio__379->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__379->GetXaxis()->SetRange(1,30);
   data_mc_ratio__379->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__379->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__379->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__379->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__379->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__379->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__379->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__379->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__379->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__379->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__379->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__379->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__379->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__379->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__379->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__379->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__379->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1276[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1276[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1276[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1276[30] = {
   0.1042008,
   0.04627236,
   0.02306875,
   0.02727363,
   0.1387681,
   0.03922119,
   0.0419835,
   0.05564734,
   0.2423632,
   0.05955912,
   0.06305281,
   0.08616123,
   0.07460389,
   0.09467457,
   0.09945676,
   0.1099991,
   0.1312005,
   0.1644498,
   0.1895114,
   0.2443096,
   0.3198196,
   0.5174707,
   0.2588002,
   0.5034287,
   0.4515932,
   0.9339368,
   0.4561864,
   0.5682199,
   0.5638143,
   0.7191768};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1276,Graph_from_mc_statistical_error_fy1276,Graph_from_mc_statistical_error_fex1276,Graph_from_mc_statistical_error_fey1276);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1276 = new TH1F("Graph_Graph_from_mc_statistical_error1276","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1276->SetMinimum(0.05945691);
   Graph_Graph_from_mc_statistical_error1276->SetMaximum(2.120724);
   Graph_Graph_from_mc_statistical_error1276->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1276->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1276->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1276->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1276->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1276->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1276->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1276);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->SetSelected(H_dR_Bj0_algo_17);
}
