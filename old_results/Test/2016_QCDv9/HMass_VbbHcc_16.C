void HMass_VbbHcc_16()
{
//=========Macro generated from canvas: HMass_VbbHcc_16/HMass_VbbHcc_16
//=========  (Tue Sep 20 13:13:08 2022) by ROOT version 6.14/09
   TCanvas *HMass_VbbHcc_16 = new TCanvas("HMass_VbbHcc_16", "HMass_VbbHcc_16",0,0,600,600);
   HMass_VbbHcc_16->SetHighLightColor(2);
   HMass_VbbHcc_16->Range(0,0,1,1);
   HMass_VbbHcc_16->SetFillColor(0);
   HMass_VbbHcc_16->SetFillStyle(4000);
   HMass_VbbHcc_16->SetBorderMode(0);
   HMass_VbbHcc_16->SetBorderSize(2);
   HMass_VbbHcc_16->SetFrameFillStyle(1000);
   HMass_VbbHcc_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-85.77595,315.7258,85700.17);
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
   st->SetMaximum(73449.12);
   
   TH1F *st_stack_5 = new TH1F("st_stack_5","",30,0,300);
   st_stack_5->SetMinimum(0.01);
   st_stack_5->SetMaximum(77121.58);
   st_stack_5->SetDirectory(0);
   st_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_5->SetLineColor(ci);
   st_stack_5->GetXaxis()->SetRange(1,30);
   st_stack_5->GetXaxis()->SetLabelFont(42);
   st_stack_5->GetXaxis()->SetLabelSize(0.035);
   st_stack_5->GetXaxis()->SetTitleSize(0.035);
   st_stack_5->GetXaxis()->SetTitleFont(42);
   st_stack_5->GetYaxis()->SetTitle("Events/10.0");
   st_stack_5->GetYaxis()->SetLabelFont(42);
   st_stack_5->GetYaxis()->SetLabelSize(0.05);
   st_stack_5->GetYaxis()->SetTitleSize(0.057);
   st_stack_5->GetYaxis()->SetTitleOffset(1.2);
   st_stack_5->GetYaxis()->SetTitleFont(42);
   st_stack_5->GetZaxis()->SetLabelFont(42);
   st_stack_5->GetZaxis()->SetLabelSize(0.035);
   st_stack_5->GetZaxis()->SetTitleSize(0.035);
   st_stack_5->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_5);
   
   
   TH1D *VbbHcc_HMass_stack_1 = new TH1D("VbbHcc_HMass_stack_1","",30,0,300);
   VbbHcc_HMass_stack_1->SetBinContent(2,25.99935);
   VbbHcc_HMass_stack_1->SetBinContent(3,6138.77);
   VbbHcc_HMass_stack_1->SetBinContent(4,21759.07);
   VbbHcc_HMass_stack_1->SetBinContent(5,27887.76);
   VbbHcc_HMass_stack_1->SetBinContent(6,30608.83);
   VbbHcc_HMass_stack_1->SetBinContent(7,24409.29);
   VbbHcc_HMass_stack_1->SetBinContent(8,24190.02);
   VbbHcc_HMass_stack_1->SetBinContent(9,21900.73);
   VbbHcc_HMass_stack_1->SetBinContent(10,20601);
   VbbHcc_HMass_stack_1->SetBinContent(11,19087.16);
   VbbHcc_HMass_stack_1->SetBinContent(12,25791.72);
   VbbHcc_HMass_stack_1->SetBinContent(13,17648.01);
   VbbHcc_HMass_stack_1->SetBinContent(14,18881.71);
   VbbHcc_HMass_stack_1->SetBinContent(15,18964.74);
   VbbHcc_HMass_stack_1->SetBinContent(16,15599.41);
   VbbHcc_HMass_stack_1->SetBinContent(17,18562.37);
   VbbHcc_HMass_stack_1->SetBinContent(18,17660.16);
   VbbHcc_HMass_stack_1->SetBinContent(19,14606.81);
   VbbHcc_HMass_stack_1->SetBinContent(20,13904.68);
   VbbHcc_HMass_stack_1->SetBinContent(21,15035.14);
   VbbHcc_HMass_stack_1->SetBinContent(22,12363.16);
   VbbHcc_HMass_stack_1->SetBinContent(23,12562.22);
   VbbHcc_HMass_stack_1->SetBinContent(24,8286.349);
   VbbHcc_HMass_stack_1->SetBinContent(25,9304.862);
   VbbHcc_HMass_stack_1->SetBinContent(26,7512.746);
   VbbHcc_HMass_stack_1->SetBinContent(27,7890.354);
   VbbHcc_HMass_stack_1->SetBinContent(28,6125.212);
   VbbHcc_HMass_stack_1->SetBinContent(29,7159.162);
   VbbHcc_HMass_stack_1->SetBinContent(30,3998.901);
   VbbHcc_HMass_stack_1->SetBinContent(31,75161.85);
   VbbHcc_HMass_stack_1->SetBinError(2,22.73723);
   VbbHcc_HMass_stack_1->SetBinError(3,1306.951);
   VbbHcc_HMass_stack_1->SetBinError(4,2399.336);
   VbbHcc_HMass_stack_1->SetBinError(5,2665.938);
   VbbHcc_HMass_stack_1->SetBinError(6,2778.338);
   VbbHcc_HMass_stack_1->SetBinError(7,2378.303);
   VbbHcc_HMass_stack_1->SetBinError(8,2364.959);
   VbbHcc_HMass_stack_1->SetBinError(9,2263.771);
   VbbHcc_HMass_stack_1->SetBinError(10,2182.496);
   VbbHcc_HMass_stack_1->SetBinError(11,2086.99);
   VbbHcc_HMass_stack_1->SetBinError(12,2545.474);
   VbbHcc_HMass_stack_1->SetBinError(13,2008.678);
   VbbHcc_HMass_stack_1->SetBinError(14,2093.785);
   VbbHcc_HMass_stack_1->SetBinError(15,2133.909);
   VbbHcc_HMass_stack_1->SetBinError(16,1829.158);
   VbbHcc_HMass_stack_1->SetBinError(17,2105.138);
   VbbHcc_HMass_stack_1->SetBinError(18,2036.249);
   VbbHcc_HMass_stack_1->SetBinError(19,1793.073);
   VbbHcc_HMass_stack_1->SetBinError(20,1756.538);
   VbbHcc_HMass_stack_1->SetBinError(21,1918.474);
   VbbHcc_HMass_stack_1->SetBinError(22,1695.806);
   VbbHcc_HMass_stack_1->SetBinError(23,1670.218);
   VbbHcc_HMass_stack_1->SetBinError(24,1259.348);
   VbbHcc_HMass_stack_1->SetBinError(25,1381.47);
   VbbHcc_HMass_stack_1->SetBinError(26,1229.334);
   VbbHcc_HMass_stack_1->SetBinError(27,1297.655);
   VbbHcc_HMass_stack_1->SetBinError(28,1074.145);
   VbbHcc_HMass_stack_1->SetBinError(29,1195.333);
   VbbHcc_HMass_stack_1->SetBinError(30,715.4934);
   VbbHcc_HMass_stack_1->SetBinError(31,3426.632);
   VbbHcc_HMass_stack_1->SetEntries(15068);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_HMass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_1->SetLineColor(ci);
   VbbHcc_HMass_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_1,"");
   
   TH1D *VbbHcc_HMass_stack_2 = new TH1D("VbbHcc_HMass_stack_2","",30,0,300);
   VbbHcc_HMass_stack_2->SetBinContent(2,1.269518);
   VbbHcc_HMass_stack_2->SetBinContent(3,19.78869);
   VbbHcc_HMass_stack_2->SetBinContent(4,55.23116);
   VbbHcc_HMass_stack_2->SetBinContent(5,84.34207);
   VbbHcc_HMass_stack_2->SetBinContent(6,106.336);
   VbbHcc_HMass_stack_2->SetBinContent(7,165.2029);
   VbbHcc_HMass_stack_2->SetBinContent(8,256.3864);
   VbbHcc_HMass_stack_2->SetBinContent(9,291.774);
   VbbHcc_HMass_stack_2->SetBinContent(10,226.4957);
   VbbHcc_HMass_stack_2->SetBinContent(11,187.0885);
   VbbHcc_HMass_stack_2->SetBinContent(12,188.3709);
   VbbHcc_HMass_stack_2->SetBinContent(13,177.9083);
   VbbHcc_HMass_stack_2->SetBinContent(14,172.2555);
   VbbHcc_HMass_stack_2->SetBinContent(15,155.9479);
   VbbHcc_HMass_stack_2->SetBinContent(16,142.2206);
   VbbHcc_HMass_stack_2->SetBinContent(17,127.5806);
   VbbHcc_HMass_stack_2->SetBinContent(18,124.4825);
   VbbHcc_HMass_stack_2->SetBinContent(19,117.5914);
   VbbHcc_HMass_stack_2->SetBinContent(20,100.1243);
   VbbHcc_HMass_stack_2->SetBinContent(21,90.36244);
   VbbHcc_HMass_stack_2->SetBinContent(22,79.97729);
   VbbHcc_HMass_stack_2->SetBinContent(23,77.2128);
   VbbHcc_HMass_stack_2->SetBinContent(24,73.70119);
   VbbHcc_HMass_stack_2->SetBinContent(25,66.73607);
   VbbHcc_HMass_stack_2->SetBinContent(26,64.60568);
   VbbHcc_HMass_stack_2->SetBinContent(27,65.50877);
   VbbHcc_HMass_stack_2->SetBinContent(28,54.80582);
   VbbHcc_HMass_stack_2->SetBinContent(29,48.49604);
   VbbHcc_HMass_stack_2->SetBinContent(30,43.54201);
   VbbHcc_HMass_stack_2->SetBinContent(31,627.4201);
   VbbHcc_HMass_stack_2->SetBinError(2,0.5408371);
   VbbHcc_HMass_stack_2->SetBinError(3,1.881907);
   VbbHcc_HMass_stack_2->SetBinError(4,3.066986);
   VbbHcc_HMass_stack_2->SetBinError(5,3.954389);
   VbbHcc_HMass_stack_2->SetBinError(6,4.360523);
   VbbHcc_HMass_stack_2->SetBinError(7,5.366133);
   VbbHcc_HMass_stack_2->SetBinError(8,6.727136);
   VbbHcc_HMass_stack_2->SetBinError(9,7.401889);
   VbbHcc_HMass_stack_2->SetBinError(10,6.516084);
   VbbHcc_HMass_stack_2->SetBinError(11,5.826344);
   VbbHcc_HMass_stack_2->SetBinError(12,5.902829);
   VbbHcc_HMass_stack_2->SetBinError(13,5.607589);
   VbbHcc_HMass_stack_2->SetBinError(14,5.578314);
   VbbHcc_HMass_stack_2->SetBinError(15,5.381137);
   VbbHcc_HMass_stack_2->SetBinError(16,5.101124);
   VbbHcc_HMass_stack_2->SetBinError(17,4.785443);
   VbbHcc_HMass_stack_2->SetBinError(18,4.87618);
   VbbHcc_HMass_stack_2->SetBinError(19,4.610949);
   VbbHcc_HMass_stack_2->SetBinError(20,4.255757);
   VbbHcc_HMass_stack_2->SetBinError(21,3.980562);
   VbbHcc_HMass_stack_2->SetBinError(22,3.807489);
   VbbHcc_HMass_stack_2->SetBinError(23,3.790152);
   VbbHcc_HMass_stack_2->SetBinError(24,3.575501);
   VbbHcc_HMass_stack_2->SetBinError(25,3.465373);
   VbbHcc_HMass_stack_2->SetBinError(26,3.387251);
   VbbHcc_HMass_stack_2->SetBinError(27,3.483516);
   VbbHcc_HMass_stack_2->SetBinError(28,3.111085);
   VbbHcc_HMass_stack_2->SetBinError(29,2.916977);
   VbbHcc_HMass_stack_2->SetBinError(30,2.636705);
   VbbHcc_HMass_stack_2->SetBinError(31,10.25625);
   VbbHcc_HMass_stack_2->SetEntries(54400);

   ci = TColor::GetColor("#660066");
   VbbHcc_HMass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_2->SetLineColor(ci);
   VbbHcc_HMass_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_2,"");
   
   TH1D *VbbHcc_HMass_stack_3 = new TH1D("VbbHcc_HMass_stack_3","",30,0,300);
   VbbHcc_HMass_stack_3->SetBinContent(2,13.94405);
   VbbHcc_HMass_stack_3->SetBinContent(3,380.8315);
   VbbHcc_HMass_stack_3->SetBinContent(4,1121.185);
   VbbHcc_HMass_stack_3->SetBinContent(5,1667.303);
   VbbHcc_HMass_stack_3->SetBinContent(6,2206.799);
   VbbHcc_HMass_stack_3->SetBinContent(7,3021.681);
   VbbHcc_HMass_stack_3->SetBinContent(8,4224.346);
   VbbHcc_HMass_stack_3->SetBinContent(9,4760.624);
   VbbHcc_HMass_stack_3->SetBinContent(10,4372.399);
   VbbHcc_HMass_stack_3->SetBinContent(11,4123.149);
   VbbHcc_HMass_stack_3->SetBinContent(12,4040.665);
   VbbHcc_HMass_stack_3->SetBinContent(13,3830.926);
   VbbHcc_HMass_stack_3->SetBinContent(14,3494.162);
   VbbHcc_HMass_stack_3->SetBinContent(15,3042.175);
   VbbHcc_HMass_stack_3->SetBinContent(16,2641.155);
   VbbHcc_HMass_stack_3->SetBinContent(17,2279.074);
   VbbHcc_HMass_stack_3->SetBinContent(18,2040.938);
   VbbHcc_HMass_stack_3->SetBinContent(19,1801.167);
   VbbHcc_HMass_stack_3->SetBinContent(20,1612.136);
   VbbHcc_HMass_stack_3->SetBinContent(21,1458.26);
   VbbHcc_HMass_stack_3->SetBinContent(22,1283.861);
   VbbHcc_HMass_stack_3->SetBinContent(23,1178.386);
   VbbHcc_HMass_stack_3->SetBinContent(24,1063.346);
   VbbHcc_HMass_stack_3->SetBinContent(25,949.7745);
   VbbHcc_HMass_stack_3->SetBinContent(26,857.3321);
   VbbHcc_HMass_stack_3->SetBinContent(27,777.7922);
   VbbHcc_HMass_stack_3->SetBinContent(28,696.8592);
   VbbHcc_HMass_stack_3->SetBinContent(29,637.3002);
   VbbHcc_HMass_stack_3->SetBinContent(30,570.186);
   VbbHcc_HMass_stack_3->SetBinContent(31,6579.328);
   VbbHcc_HMass_stack_3->SetBinError(2,0.9382101);
   VbbHcc_HMass_stack_3->SetBinError(3,5.027488);
   VbbHcc_HMass_stack_3->SetBinError(4,8.658822);
   VbbHcc_HMass_stack_3->SetBinError(5,10.55779);
   VbbHcc_HMass_stack_3->SetBinError(6,12.14235);
   VbbHcc_HMass_stack_3->SetBinError(7,14.2154);
   VbbHcc_HMass_stack_3->SetBinError(8,16.81038);
   VbbHcc_HMass_stack_3->SetBinError(9,17.8802);
   VbbHcc_HMass_stack_3->SetBinError(10,17.15576);
   VbbHcc_HMass_stack_3->SetBinError(11,16.6741);
   VbbHcc_HMass_stack_3->SetBinError(12,16.5284);
   VbbHcc_HMass_stack_3->SetBinError(13,16.10351);
   VbbHcc_HMass_stack_3->SetBinError(14,15.38998);
   VbbHcc_HMass_stack_3->SetBinError(15,14.3492);
   VbbHcc_HMass_stack_3->SetBinError(16,13.3702);
   VbbHcc_HMass_stack_3->SetBinError(17,12.42238);
   VbbHcc_HMass_stack_3->SetBinError(18,11.75107);
   VbbHcc_HMass_stack_3->SetBinError(19,11.03535);
   VbbHcc_HMass_stack_3->SetBinError(20,10.43606);
   VbbHcc_HMass_stack_3->SetBinError(21,9.917793);
   VbbHcc_HMass_stack_3->SetBinError(22,9.298869);
   VbbHcc_HMass_stack_3->SetBinError(23,8.913462);
   VbbHcc_HMass_stack_3->SetBinError(24,8.47649);
   VbbHcc_HMass_stack_3->SetBinError(25,8.008549);
   VbbHcc_HMass_stack_3->SetBinError(26,7.604066);
   VbbHcc_HMass_stack_3->SetBinError(27,7.258628);
   VbbHcc_HMass_stack_3->SetBinError(28,6.864512);
   VbbHcc_HMass_stack_3->SetBinError(29,6.55704);
   VbbHcc_HMass_stack_3->SetBinError(30,6.190421);
   VbbHcc_HMass_stack_3->SetBinError(31,20.99197);
   VbbHcc_HMass_stack_3->SetEntries(1044436);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_HMass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_3->SetLineColor(ci);
   VbbHcc_HMass_stack_3->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_3,"");
   
   TH1D *VbbHcc_HMass_stack_4 = new TH1D("VbbHcc_HMass_stack_4","",30,0,300);
   VbbHcc_HMass_stack_4->SetBinContent(2,0.9334156);
   VbbHcc_HMass_stack_4->SetBinContent(3,10.76913);
   VbbHcc_HMass_stack_4->SetBinContent(4,42.40606);
   VbbHcc_HMass_stack_4->SetBinContent(5,65.43841);
   VbbHcc_HMass_stack_4->SetBinContent(6,96.79041);
   VbbHcc_HMass_stack_4->SetBinContent(7,145.9633);
   VbbHcc_HMass_stack_4->SetBinContent(8,186.7798);
   VbbHcc_HMass_stack_4->SetBinContent(9,258.1679);
   VbbHcc_HMass_stack_4->SetBinContent(10,251.2231);
   VbbHcc_HMass_stack_4->SetBinContent(11,175.7034);
   VbbHcc_HMass_stack_4->SetBinContent(12,130.7209);
   VbbHcc_HMass_stack_4->SetBinContent(13,110.2902);
   VbbHcc_HMass_stack_4->SetBinContent(14,109.5374);
   VbbHcc_HMass_stack_4->SetBinContent(15,116.0619);
   VbbHcc_HMass_stack_4->SetBinContent(16,118.7919);
   VbbHcc_HMass_stack_4->SetBinContent(17,105.096);
   VbbHcc_HMass_stack_4->SetBinContent(18,104.7217);
   VbbHcc_HMass_stack_4->SetBinContent(19,100.3059);
   VbbHcc_HMass_stack_4->SetBinContent(20,92.55247);
   VbbHcc_HMass_stack_4->SetBinContent(21,93.42167);
   VbbHcc_HMass_stack_4->SetBinContent(22,86.48573);
   VbbHcc_HMass_stack_4->SetBinContent(23,80.08766);
   VbbHcc_HMass_stack_4->SetBinContent(24,81.11831);
   VbbHcc_HMass_stack_4->SetBinContent(25,68.46215);
   VbbHcc_HMass_stack_4->SetBinContent(26,59.09119);
   VbbHcc_HMass_stack_4->SetBinContent(27,61.56859);
   VbbHcc_HMass_stack_4->SetBinContent(28,52.8082);
   VbbHcc_HMass_stack_4->SetBinContent(29,54.00265);
   VbbHcc_HMass_stack_4->SetBinContent(30,53.03347);
   VbbHcc_HMass_stack_4->SetBinContent(31,722.4522);
   VbbHcc_HMass_stack_4->SetBinError(2,0.4819382);
   VbbHcc_HMass_stack_4->SetBinError(3,1.639895);
   VbbHcc_HMass_stack_4->SetBinError(4,3.312681);
   VbbHcc_HMass_stack_4->SetBinError(5,4.08009);
   VbbHcc_HMass_stack_4->SetBinError(6,4.881003);
   VbbHcc_HMass_stack_4->SetBinError(7,5.983905);
   VbbHcc_HMass_stack_4->SetBinError(8,6.595557);
   VbbHcc_HMass_stack_4->SetBinError(9,7.650798);
   VbbHcc_HMass_stack_4->SetBinError(10,7.446594);
   VbbHcc_HMass_stack_4->SetBinError(11,6.420357);
   VbbHcc_HMass_stack_4->SetBinError(12,5.520006);
   VbbHcc_HMass_stack_4->SetBinError(13,5.063519);
   VbbHcc_HMass_stack_4->SetBinError(14,5.084823);
   VbbHcc_HMass_stack_4->SetBinError(15,5.279571);
   VbbHcc_HMass_stack_4->SetBinError(16,5.293565);
   VbbHcc_HMass_stack_4->SetBinError(17,4.975903);
   VbbHcc_HMass_stack_4->SetBinError(18,4.955486);
   VbbHcc_HMass_stack_4->SetBinError(19,4.80102);
   VbbHcc_HMass_stack_4->SetBinError(20,4.549757);
   VbbHcc_HMass_stack_4->SetBinError(21,4.622746);
   VbbHcc_HMass_stack_4->SetBinError(22,4.521385);
   VbbHcc_HMass_stack_4->SetBinError(23,4.218892);
   VbbHcc_HMass_stack_4->SetBinError(24,4.305324);
   VbbHcc_HMass_stack_4->SetBinError(25,3.827152);
   VbbHcc_HMass_stack_4->SetBinError(26,3.462575);
   VbbHcc_HMass_stack_4->SetBinError(27,3.636645);
   VbbHcc_HMass_stack_4->SetBinError(28,3.304313);
   VbbHcc_HMass_stack_4->SetBinError(29,3.302041);
   VbbHcc_HMass_stack_4->SetBinError(30,3.352356);
   VbbHcc_HMass_stack_4->SetBinError(31,10.70329);
   VbbHcc_HMass_stack_4->SetEntries(25079);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_HMass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_4->SetLineColor(ci);
   VbbHcc_HMass_stack_4->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_4,"");
   
   TH1D *VbbHcc_HMass_stack_5 = new TH1D("VbbHcc_HMass_stack_5","",30,0,300);
   VbbHcc_HMass_stack_5->SetBinContent(2,0.05907329);
   VbbHcc_HMass_stack_5->SetBinContent(3,1.39712);
   VbbHcc_HMass_stack_5->SetBinContent(4,4.895772);
   VbbHcc_HMass_stack_5->SetBinContent(5,14.83499);
   VbbHcc_HMass_stack_5->SetBinContent(6,21.03878);
   VbbHcc_HMass_stack_5->SetBinContent(7,27.16074);
   VbbHcc_HMass_stack_5->SetBinContent(8,37.86793);
   VbbHcc_HMass_stack_5->SetBinContent(9,46.47109);
   VbbHcc_HMass_stack_5->SetBinContent(10,29.26098);
   VbbHcc_HMass_stack_5->SetBinContent(11,32.0411);
   VbbHcc_HMass_stack_5->SetBinContent(12,27.52535);
   VbbHcc_HMass_stack_5->SetBinContent(13,30.14803);
   VbbHcc_HMass_stack_5->SetBinContent(14,24.91);
   VbbHcc_HMass_stack_5->SetBinContent(15,22.9734);
   VbbHcc_HMass_stack_5->SetBinContent(16,30.21932);
   VbbHcc_HMass_stack_5->SetBinContent(17,29.19053);
   VbbHcc_HMass_stack_5->SetBinContent(18,18.19316);
   VbbHcc_HMass_stack_5->SetBinContent(19,20.1641);
   VbbHcc_HMass_stack_5->SetBinContent(20,22.69359);
   VbbHcc_HMass_stack_5->SetBinContent(21,23.41157);
   VbbHcc_HMass_stack_5->SetBinContent(22,23.94023);
   VbbHcc_HMass_stack_5->SetBinContent(23,16.0148);
   VbbHcc_HMass_stack_5->SetBinContent(24,20.60181);
   VbbHcc_HMass_stack_5->SetBinContent(25,24.17476);
   VbbHcc_HMass_stack_5->SetBinContent(26,14.17514);
   VbbHcc_HMass_stack_5->SetBinContent(27,10.84998);
   VbbHcc_HMass_stack_5->SetBinContent(28,18.27216);
   VbbHcc_HMass_stack_5->SetBinContent(29,16.82321);
   VbbHcc_HMass_stack_5->SetBinContent(30,15.25816);
   VbbHcc_HMass_stack_5->SetBinContent(31,212.123);
   VbbHcc_HMass_stack_5->SetBinError(2,0.05907329);
   VbbHcc_HMass_stack_5->SetBinError(3,0.5469148);
   VbbHcc_HMass_stack_5->SetBinError(4,1.683856);
   VbbHcc_HMass_stack_5->SetBinError(5,2.920778);
   VbbHcc_HMass_stack_5->SetBinError(6,4.121797);
   VbbHcc_HMass_stack_5->SetBinError(7,4.506357);
   VbbHcc_HMass_stack_5->SetBinError(8,4.875855);
   VbbHcc_HMass_stack_5->SetBinError(9,5.528255);
   VbbHcc_HMass_stack_5->SetBinError(10,4.040084);
   VbbHcc_HMass_stack_5->SetBinError(11,5.090746);
   VbbHcc_HMass_stack_5->SetBinError(12,4.301342);
   VbbHcc_HMass_stack_5->SetBinError(13,4.544365);
   VbbHcc_HMass_stack_5->SetBinError(14,3.807783);
   VbbHcc_HMass_stack_5->SetBinError(15,3.743043);
   VbbHcc_HMass_stack_5->SetBinError(16,4.587448);
   VbbHcc_HMass_stack_5->SetBinError(17,4.347652);
   VbbHcc_HMass_stack_5->SetBinError(18,3.046892);
   VbbHcc_HMass_stack_5->SetBinError(19,3.471832);
   VbbHcc_HMass_stack_5->SetBinError(20,3.668296);
   VbbHcc_HMass_stack_5->SetBinError(21,3.592119);
   VbbHcc_HMass_stack_5->SetBinError(22,3.665133);
   VbbHcc_HMass_stack_5->SetBinError(23,2.81565);
   VbbHcc_HMass_stack_5->SetBinError(24,3.718429);
   VbbHcc_HMass_stack_5->SetBinError(25,4.320412);
   VbbHcc_HMass_stack_5->SetBinError(26,2.63166);
   VbbHcc_HMass_stack_5->SetBinError(27,1.679723);
   VbbHcc_HMass_stack_5->SetBinError(28,3.349106);
   VbbHcc_HMass_stack_5->SetBinError(29,3.222709);
   VbbHcc_HMass_stack_5->SetBinError(30,3.054443);
   VbbHcc_HMass_stack_5->SetBinError(31,9.271589);
   VbbHcc_HMass_stack_5->SetEntries(6309);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_HMass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_5->SetLineColor(ci);
   VbbHcc_HMass_stack_5->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_5,"");
   
   TH1D *VbbHcc_HMass_stack_6 = new TH1D("VbbHcc_HMass_stack_6","",30,0,300);
   VbbHcc_HMass_stack_6->SetBinContent(4,0.3758536);
   VbbHcc_HMass_stack_6->SetBinContent(5,0.3796339);
   VbbHcc_HMass_stack_6->SetBinContent(6,0.4919437);
   VbbHcc_HMass_stack_6->SetBinContent(7,0.5786716);
   VbbHcc_HMass_stack_6->SetBinContent(8,0.8439532);
   VbbHcc_HMass_stack_6->SetBinContent(9,0.8353831);
   VbbHcc_HMass_stack_6->SetBinContent(10,0.6475416);
   VbbHcc_HMass_stack_6->SetBinContent(11,0.2580575);
   VbbHcc_HMass_stack_6->SetBinContent(12,0.4808314);
   VbbHcc_HMass_stack_6->SetBinContent(13,0.512719);
   VbbHcc_HMass_stack_6->SetBinContent(14,0.5348375);
   VbbHcc_HMass_stack_6->SetBinContent(15,0.5720907);
   VbbHcc_HMass_stack_6->SetBinContent(16,0.2945484);
   VbbHcc_HMass_stack_6->SetBinContent(17,0.4645);
   VbbHcc_HMass_stack_6->SetBinContent(18,0.356048);
   VbbHcc_HMass_stack_6->SetBinContent(19,0.2881818);
   VbbHcc_HMass_stack_6->SetBinContent(20,0.192486);
   VbbHcc_HMass_stack_6->SetBinContent(21,0.2808183);
   VbbHcc_HMass_stack_6->SetBinContent(22,0.09631005);
   VbbHcc_HMass_stack_6->SetBinContent(23,0.07311008);
   VbbHcc_HMass_stack_6->SetBinContent(24,0.09210225);
   VbbHcc_HMass_stack_6->SetBinContent(25,0.1015083);
   VbbHcc_HMass_stack_6->SetBinContent(26,0.1849431);
   VbbHcc_HMass_stack_6->SetBinContent(27,0.09243995);
   VbbHcc_HMass_stack_6->SetBinContent(28,0.2068062);
   VbbHcc_HMass_stack_6->SetBinContent(29,0.09406532);
   VbbHcc_HMass_stack_6->SetBinContent(31,0.7737937);
   VbbHcc_HMass_stack_6->SetBinError(4,0.1881187);
   VbbHcc_HMass_stack_6->SetBinError(5,0.1900586);
   VbbHcc_HMass_stack_6->SetBinError(6,0.2202544);
   VbbHcc_HMass_stack_6->SetBinError(7,0.230589);
   VbbHcc_HMass_stack_6->SetBinError(8,0.2820095);
   VbbHcc_HMass_stack_6->SetBinError(9,0.2787665);
   VbbHcc_HMass_stack_6->SetBinError(10,0.2448317);
   VbbHcc_HMass_stack_6->SetBinError(11,0.1494274);
   VbbHcc_HMass_stack_6->SetBinError(12,0.2096705);
   VbbHcc_HMass_stack_6->SetBinError(13,0.215022);
   VbbHcc_HMass_stack_6->SetBinError(14,0.2200216);
   VbbHcc_HMass_stack_6->SetBinError(15,0.2339033);
   VbbHcc_HMass_stack_6->SetBinError(16,0.1701069);
   VbbHcc_HMass_stack_6->SetBinError(17,0.2080813);
   VbbHcc_HMass_stack_6->SetBinError(18,0.1781533);
   VbbHcc_HMass_stack_6->SetBinError(19,0.1666359);
   VbbHcc_HMass_stack_6->SetBinError(20,0.1361749);
   VbbHcc_HMass_stack_6->SetBinError(21,0.1622155);
   VbbHcc_HMass_stack_6->SetBinError(22,0.09631005);
   VbbHcc_HMass_stack_6->SetBinError(23,0.07311008);
   VbbHcc_HMass_stack_6->SetBinError(24,0.09210225);
   VbbHcc_HMass_stack_6->SetBinError(25,0.1015083);
   VbbHcc_HMass_stack_6->SetBinError(26,0.1308462);
   VbbHcc_HMass_stack_6->SetBinError(27,0.09243995);
   VbbHcc_HMass_stack_6->SetBinError(28,0.146235);
   VbbHcc_HMass_stack_6->SetBinError(29,0.09406532);
   VbbHcc_HMass_stack_6->SetBinError(31,0.2742005);
   VbbHcc_HMass_stack_6->SetEntries(110);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_HMass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_6->SetLineColor(ci);
   VbbHcc_HMass_stack_6->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_6,"");
   
   TH1D *VbbHcc_HMass_stack_7 = new TH1D("VbbHcc_HMass_stack_7","",30,0,300);
   VbbHcc_HMass_stack_7->SetBinContent(3,0.07282831);
   VbbHcc_HMass_stack_7->SetBinContent(4,0.7183958);
   VbbHcc_HMass_stack_7->SetBinContent(5,0.6194418);
   VbbHcc_HMass_stack_7->SetBinContent(6,1.116583);
   VbbHcc_HMass_stack_7->SetBinContent(7,1.720379);
   VbbHcc_HMass_stack_7->SetBinContent(8,2.760949);
   VbbHcc_HMass_stack_7->SetBinContent(9,3.290424);
   VbbHcc_HMass_stack_7->SetBinContent(10,2.168677);
   VbbHcc_HMass_stack_7->SetBinContent(11,1.915975);
   VbbHcc_HMass_stack_7->SetBinContent(12,1.533968);
   VbbHcc_HMass_stack_7->SetBinContent(13,0.4289191);
   VbbHcc_HMass_stack_7->SetBinContent(14,1.29492);
   VbbHcc_HMass_stack_7->SetBinContent(15,0.9430492);
   VbbHcc_HMass_stack_7->SetBinContent(16,1.221279);
   VbbHcc_HMass_stack_7->SetBinContent(17,0.9004005);
   VbbHcc_HMass_stack_7->SetBinContent(18,0.5000522);
   VbbHcc_HMass_stack_7->SetBinContent(19,0.6355307);
   VbbHcc_HMass_stack_7->SetBinContent(20,0.6060659);
   VbbHcc_HMass_stack_7->SetBinContent(21,0.5923367);
   VbbHcc_HMass_stack_7->SetBinContent(22,0.3378297);
   VbbHcc_HMass_stack_7->SetBinContent(23,0.4601133);
   VbbHcc_HMass_stack_7->SetBinContent(24,0.3277552);
   VbbHcc_HMass_stack_7->SetBinContent(25,0.162825);
   VbbHcc_HMass_stack_7->SetBinContent(26,0.3329994);
   VbbHcc_HMass_stack_7->SetBinContent(27,0.2787737);
   VbbHcc_HMass_stack_7->SetBinContent(28,0.4300039);
   VbbHcc_HMass_stack_7->SetBinContent(29,0.0566316);
   VbbHcc_HMass_stack_7->SetBinContent(30,0.1630529);
   VbbHcc_HMass_stack_7->SetBinContent(31,3.209805);
   VbbHcc_HMass_stack_7->SetBinError(3,0.07282831);
   VbbHcc_HMass_stack_7->SetBinError(4,0.2189792);
   VbbHcc_HMass_stack_7->SetBinError(5,0.2065165);
   VbbHcc_HMass_stack_7->SetBinError(6,0.2801866);
   VbbHcc_HMass_stack_7->SetBinError(7,0.338735);
   VbbHcc_HMass_stack_7->SetBinError(8,0.4373627);
   VbbHcc_HMass_stack_7->SetBinError(9,0.4776277);
   VbbHcc_HMass_stack_7->SetBinError(10,0.3846835);
   VbbHcc_HMass_stack_7->SetBinError(11,0.3659661);
   VbbHcc_HMass_stack_7->SetBinError(12,0.3278828);
   VbbHcc_HMass_stack_7->SetBinError(13,0.1759374);
   VbbHcc_HMass_stack_7->SetBinError(14,0.2976964);
   VbbHcc_HMass_stack_7->SetBinError(15,0.2531688);
   VbbHcc_HMass_stack_7->SetBinError(16,0.2882562);
   VbbHcc_HMass_stack_7->SetBinError(17,0.2500921);
   VbbHcc_HMass_stack_7->SetBinError(18,0.1893309);
   VbbHcc_HMass_stack_7->SetBinError(19,0.2121012);
   VbbHcc_HMass_stack_7->SetBinError(20,0.2024383);
   VbbHcc_HMass_stack_7->SetBinError(21,0.1989395);
   VbbHcc_HMass_stack_7->SetBinError(22,0.1510996);
   VbbHcc_HMass_stack_7->SetBinError(23,0.1751402);
   VbbHcc_HMass_stack_7->SetBinError(24,0.1472513);
   VbbHcc_HMass_stack_7->SetBinError(25,0.09443945);
   VbbHcc_HMass_stack_7->SetBinError(26,0.1490367);
   VbbHcc_HMass_stack_7->SetBinError(27,0.1395997);
   VbbHcc_HMass_stack_7->SetBinError(28,0.1673754);
   VbbHcc_HMass_stack_7->SetBinError(29,0.0566316);
   VbbHcc_HMass_stack_7->SetBinError(30,0.09572161);
   VbbHcc_HMass_stack_7->SetBinError(31,0.4702823);
   VbbHcc_HMass_stack_7->SetEntries(424);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_HMass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_7->SetLineColor(ci);
   VbbHcc_HMass_stack_7->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_7,"");
   
   TH1D *VbbHcc_HMass_stack_8 = new TH1D("VbbHcc_HMass_stack_8","",30,0,300);
   VbbHcc_HMass_stack_8->SetBinContent(3,1.975673);
   VbbHcc_HMass_stack_8->SetBinContent(4,2.532116);
   VbbHcc_HMass_stack_8->SetBinContent(5,6.092421);
   VbbHcc_HMass_stack_8->SetBinContent(6,6.32214);
   VbbHcc_HMass_stack_8->SetBinContent(7,10.56084);
   VbbHcc_HMass_stack_8->SetBinContent(8,15.66409);
   VbbHcc_HMass_stack_8->SetBinContent(9,21.19536);
   VbbHcc_HMass_stack_8->SetBinContent(10,15.67117);
   VbbHcc_HMass_stack_8->SetBinContent(11,6.396427);
   VbbHcc_HMass_stack_8->SetBinContent(12,6.464885);
   VbbHcc_HMass_stack_8->SetBinContent(13,4.296603);
   VbbHcc_HMass_stack_8->SetBinContent(14,3.398149);
   VbbHcc_HMass_stack_8->SetBinContent(15,3.511517);
   VbbHcc_HMass_stack_8->SetBinContent(16,2.942818);
   VbbHcc_HMass_stack_8->SetBinContent(17,3.527591);
   VbbHcc_HMass_stack_8->SetBinContent(18,3.964754);
   VbbHcc_HMass_stack_8->SetBinContent(19,3.674259);
   VbbHcc_HMass_stack_8->SetBinContent(20,0.8066355);
   VbbHcc_HMass_stack_8->SetBinContent(21,1.176571);
   VbbHcc_HMass_stack_8->SetBinContent(22,1.529423);
   VbbHcc_HMass_stack_8->SetBinContent(23,1.777884);
   VbbHcc_HMass_stack_8->SetBinContent(24,0.9508927);
   VbbHcc_HMass_stack_8->SetBinContent(25,0.5771692);
   VbbHcc_HMass_stack_8->SetBinContent(26,0.5664819);
   VbbHcc_HMass_stack_8->SetBinContent(27,1.412203);
   VbbHcc_HMass_stack_8->SetBinContent(28,0.78601);
   VbbHcc_HMass_stack_8->SetBinContent(29,0.368692);
   VbbHcc_HMass_stack_8->SetBinContent(30,0.5744057);
   VbbHcc_HMass_stack_8->SetBinContent(31,8.482824);
   VbbHcc_HMass_stack_8->SetBinError(3,0.6257113);
   VbbHcc_HMass_stack_8->SetBinError(4,0.7036239);
   VbbHcc_HMass_stack_8->SetBinError(5,1.095644);
   VbbHcc_HMass_stack_8->SetBinError(6,1.119613);
   VbbHcc_HMass_stack_8->SetBinError(7,1.429857);
   VbbHcc_HMass_stack_8->SetBinError(8,1.736541);
   VbbHcc_HMass_stack_8->SetBinError(9,2.02473);
   VbbHcc_HMass_stack_8->SetBinError(10,1.750128);
   VbbHcc_HMass_stack_8->SetBinError(11,1.111602);
   VbbHcc_HMass_stack_8->SetBinError(12,1.127235);
   VbbHcc_HMass_stack_8->SetBinError(13,0.9172849);
   VbbHcc_HMass_stack_8->SetBinError(14,0.8250886);
   VbbHcc_HMass_stack_8->SetBinError(15,0.829403);
   VbbHcc_HMass_stack_8->SetBinError(16,0.7607858);
   VbbHcc_HMass_stack_8->SetBinError(17,0.8153392);
   VbbHcc_HMass_stack_8->SetBinError(18,0.8720082);
   VbbHcc_HMass_stack_8->SetBinError(19,0.8473205);
   VbbHcc_HMass_stack_8->SetBinError(20,0.4042165);
   VbbHcc_HMass_stack_8->SetBinError(21,0.4808855);
   VbbHcc_HMass_stack_8->SetBinError(22,0.5428204);
   VbbHcc_HMass_stack_8->SetBinError(23,0.5931071);
   VbbHcc_HMass_stack_8->SetBinError(24,0.4318375);
   VbbHcc_HMass_stack_8->SetBinError(25,0.3347032);
   VbbHcc_HMass_stack_8->SetBinError(26,0.3277482);
   VbbHcc_HMass_stack_8->SetBinError(27,0.5345551);
   VbbHcc_HMass_stack_8->SetBinError(28,0.3936294);
   VbbHcc_HMass_stack_8->SetBinError(29,0.2607612);
   VbbHcc_HMass_stack_8->SetBinError(30,0.3316894);
   VbbHcc_HMass_stack_8->SetBinError(31,1.282439);
   VbbHcc_HMass_stack_8->SetEntries(712);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_HMass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_8->SetLineColor(ci);
   VbbHcc_HMass_stack_8->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_8,"");
   
   TH1D *VbbHcc_HMass_stack_9 = new TH1D("VbbHcc_HMass_stack_9","",30,0,300);
   VbbHcc_HMass_stack_9->SetBinContent(2,0.01827694);
   VbbHcc_HMass_stack_9->SetBinContent(3,0.5418111);
   VbbHcc_HMass_stack_9->SetBinContent(4,1.520197);
   VbbHcc_HMass_stack_9->SetBinContent(5,2.212986);
   VbbHcc_HMass_stack_9->SetBinContent(6,3.535362);
   VbbHcc_HMass_stack_9->SetBinContent(7,5.555112);
   VbbHcc_HMass_stack_9->SetBinContent(8,9.041634);
   VbbHcc_HMass_stack_9->SetBinContent(9,11.96854);
   VbbHcc_HMass_stack_9->SetBinContent(10,11.75799);
   VbbHcc_HMass_stack_9->SetBinContent(11,8.572801);
   VbbHcc_HMass_stack_9->SetBinContent(12,6.495511);
   VbbHcc_HMass_stack_9->SetBinContent(13,5.28693);
   VbbHcc_HMass_stack_9->SetBinContent(14,3.703533);
   VbbHcc_HMass_stack_9->SetBinContent(15,2.762336);
   VbbHcc_HMass_stack_9->SetBinContent(16,2.242293);
   VbbHcc_HMass_stack_9->SetBinContent(17,1.937112);
   VbbHcc_HMass_stack_9->SetBinContent(18,1.750365);
   VbbHcc_HMass_stack_9->SetBinContent(19,1.516241);
   VbbHcc_HMass_stack_9->SetBinContent(20,1.361155);
   VbbHcc_HMass_stack_9->SetBinContent(21,1.223894);
   VbbHcc_HMass_stack_9->SetBinContent(22,1.067271);
   VbbHcc_HMass_stack_9->SetBinContent(23,0.9453922);
   VbbHcc_HMass_stack_9->SetBinContent(24,0.8502784);
   VbbHcc_HMass_stack_9->SetBinContent(25,0.8185322);
   VbbHcc_HMass_stack_9->SetBinContent(26,0.7738533);
   VbbHcc_HMass_stack_9->SetBinContent(27,0.7167301);
   VbbHcc_HMass_stack_9->SetBinContent(28,0.6270097);
   VbbHcc_HMass_stack_9->SetBinContent(29,0.570995);
   VbbHcc_HMass_stack_9->SetBinContent(30,0.4896726);
   VbbHcc_HMass_stack_9->SetBinContent(31,4.909483);
   VbbHcc_HMass_stack_9->SetBinError(2,0.005284584);
   VbbHcc_HMass_stack_9->SetBinError(3,0.02908539);
   VbbHcc_HMass_stack_9->SetBinError(4,0.04910324);
   VbbHcc_HMass_stack_9->SetBinError(5,0.05860142);
   VbbHcc_HMass_stack_9->SetBinError(6,0.07408934);
   VbbHcc_HMass_stack_9->SetBinError(7,0.09309229);
   VbbHcc_HMass_stack_9->SetBinError(8,0.1184821);
   VbbHcc_HMass_stack_9->SetBinError(9,0.1366464);
   VbbHcc_HMass_stack_9->SetBinError(10,0.1349718);
   VbbHcc_HMass_stack_9->SetBinError(11,0.1153587);
   VbbHcc_HMass_stack_9->SetBinError(12,0.1006576);
   VbbHcc_HMass_stack_9->SetBinError(13,0.09065726);
   VbbHcc_HMass_stack_9->SetBinError(14,0.07599563);
   VbbHcc_HMass_stack_9->SetBinError(15,0.06555264);
   VbbHcc_HMass_stack_9->SetBinError(16,0.05862327);
   VbbHcc_HMass_stack_9->SetBinError(17,0.05467964);
   VbbHcc_HMass_stack_9->SetBinError(18,0.05191953);
   VbbHcc_HMass_stack_9->SetBinError(19,0.04857182);
   VbbHcc_HMass_stack_9->SetBinError(20,0.04600134);
   VbbHcc_HMass_stack_9->SetBinError(21,0.04371697);
   VbbHcc_HMass_stack_9->SetBinError(22,0.04106906);
   VbbHcc_HMass_stack_9->SetBinError(23,0.03785352);
   VbbHcc_HMass_stack_9->SetBinError(24,0.03638684);
   VbbHcc_HMass_stack_9->SetBinError(25,0.03560602);
   VbbHcc_HMass_stack_9->SetBinError(26,0.0347125);
   VbbHcc_HMass_stack_9->SetBinError(27,0.03295296);
   VbbHcc_HMass_stack_9->SetBinError(28,0.03122995);
   VbbHcc_HMass_stack_9->SetBinError(29,0.02955288);
   VbbHcc_HMass_stack_9->SetBinError(30,0.027748);
   VbbHcc_HMass_stack_9->SetBinError(31,0.08704768);
   VbbHcc_HMass_stack_9->SetEntries(66921);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_HMass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_9->SetLineColor(ci);
   VbbHcc_HMass_stack_9->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_9,"");
   
   TH1D *VbbHcc_HMass_stack_10 = new TH1D("VbbHcc_HMass_stack_10","",30,0,300);
   VbbHcc_HMass_stack_10->SetBinContent(2,0.001148047);
   VbbHcc_HMass_stack_10->SetBinContent(3,0.04365106);
   VbbHcc_HMass_stack_10->SetBinContent(4,0.1597037);
   VbbHcc_HMass_stack_10->SetBinContent(5,0.3692224);
   VbbHcc_HMass_stack_10->SetBinContent(6,0.6541043);
   VbbHcc_HMass_stack_10->SetBinContent(7,1.362361);
   VbbHcc_HMass_stack_10->SetBinContent(8,2.444451);
   VbbHcc_HMass_stack_10->SetBinContent(9,3.495488);
   VbbHcc_HMass_stack_10->SetBinContent(10,3.417025);
   VbbHcc_HMass_stack_10->SetBinContent(11,2.535643);
   VbbHcc_HMass_stack_10->SetBinContent(12,1.949653);
   VbbHcc_HMass_stack_10->SetBinContent(13,1.560349);
   VbbHcc_HMass_stack_10->SetBinContent(14,1.128691);
   VbbHcc_HMass_stack_10->SetBinContent(15,0.8420602);
   VbbHcc_HMass_stack_10->SetBinContent(16,0.7250281);
   VbbHcc_HMass_stack_10->SetBinContent(17,0.6550277);
   VbbHcc_HMass_stack_10->SetBinContent(18,0.6006592);
   VbbHcc_HMass_stack_10->SetBinContent(19,0.5658631);
   VbbHcc_HMass_stack_10->SetBinContent(20,0.5169848);
   VbbHcc_HMass_stack_10->SetBinContent(21,0.4611764);
   VbbHcc_HMass_stack_10->SetBinContent(22,0.4125516);
   VbbHcc_HMass_stack_10->SetBinContent(23,0.3667834);
   VbbHcc_HMass_stack_10->SetBinContent(24,0.3585741);
   VbbHcc_HMass_stack_10->SetBinContent(25,0.2894958);
   VbbHcc_HMass_stack_10->SetBinContent(26,0.268498);
   VbbHcc_HMass_stack_10->SetBinContent(27,0.2335687);
   VbbHcc_HMass_stack_10->SetBinContent(28,0.2149146);
   VbbHcc_HMass_stack_10->SetBinContent(29,0.1904562);
   VbbHcc_HMass_stack_10->SetBinContent(30,0.1688309);
   VbbHcc_HMass_stack_10->SetBinContent(31,1.936551);
   VbbHcc_HMass_stack_10->SetBinError(2,0.0006629244);
   VbbHcc_HMass_stack_10->SetBinError(3,0.004127284);
   VbbHcc_HMass_stack_10->SetBinError(4,0.007863735);
   VbbHcc_HMass_stack_10->SetBinError(5,0.01198394);
   VbbHcc_HMass_stack_10->SetBinError(6,0.01591707);
   VbbHcc_HMass_stack_10->SetBinError(7,0.02301032);
   VbbHcc_HMass_stack_10->SetBinError(8,0.03083286);
   VbbHcc_HMass_stack_10->SetBinError(9,0.03685233);
   VbbHcc_HMass_stack_10->SetBinError(10,0.0364283);
   VbbHcc_HMass_stack_10->SetBinError(11,0.03136924);
   VbbHcc_HMass_stack_10->SetBinError(12,0.02751357);
   VbbHcc_HMass_stack_10->SetBinError(13,0.02461544);
   VbbHcc_HMass_stack_10->SetBinError(14,0.02092455);
   VbbHcc_HMass_stack_10->SetBinError(15,0.01808884);
   VbbHcc_HMass_stack_10->SetBinError(16,0.01677004);
   VbbHcc_HMass_stack_10->SetBinError(17,0.01592708);
   VbbHcc_HMass_stack_10->SetBinError(18,0.01527308);
   VbbHcc_HMass_stack_10->SetBinError(19,0.01480258);
   VbbHcc_HMass_stack_10->SetBinError(20,0.01417663);
   VbbHcc_HMass_stack_10->SetBinError(21,0.01338139);
   VbbHcc_HMass_stack_10->SetBinError(22,0.01266184);
   VbbHcc_HMass_stack_10->SetBinError(23,0.01193007);
   VbbHcc_HMass_stack_10->SetBinError(24,0.01177366);
   VbbHcc_HMass_stack_10->SetBinError(25,0.01059299);
   VbbHcc_HMass_stack_10->SetBinError(26,0.01016912);
   VbbHcc_HMass_stack_10->SetBinError(27,0.009510255);
   VbbHcc_HMass_stack_10->SetBinError(28,0.009116176);
   VbbHcc_HMass_stack_10->SetBinError(29,0.008586261);
   VbbHcc_HMass_stack_10->SetBinError(30,0.008085628);
   VbbHcc_HMass_stack_10->SetBinError(31,0.02730237);
   VbbHcc_HMass_stack_10->SetEntries(72910);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_HMass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_10->SetLineColor(ci);
   VbbHcc_HMass_stack_10->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_10,"");
   
   TH1D *VbbHcc_HMass_stack_11 = new TH1D("VbbHcc_HMass_stack_11","",30,0,300);
   VbbHcc_HMass_stack_11->SetBinContent(2,0.003269354);
   VbbHcc_HMass_stack_11->SetBinContent(3,0.01693474);
   VbbHcc_HMass_stack_11->SetBinContent(4,0.09898591);
   VbbHcc_HMass_stack_11->SetBinContent(5,0.1220052);
   VbbHcc_HMass_stack_11->SetBinContent(6,0.148877);
   VbbHcc_HMass_stack_11->SetBinContent(7,0.1820832);
   VbbHcc_HMass_stack_11->SetBinContent(8,0.220357);
   VbbHcc_HMass_stack_11->SetBinContent(9,0.2818135);
   VbbHcc_HMass_stack_11->SetBinContent(10,0.3306169);
   VbbHcc_HMass_stack_11->SetBinContent(11,0.4337809);
   VbbHcc_HMass_stack_11->SetBinContent(12,0.4507531);
   VbbHcc_HMass_stack_11->SetBinContent(13,0.4332363);
   VbbHcc_HMass_stack_11->SetBinContent(14,0.2691843);
   VbbHcc_HMass_stack_11->SetBinContent(15,0.1939128);
   VbbHcc_HMass_stack_11->SetBinContent(16,0.1473294);
   VbbHcc_HMass_stack_11->SetBinContent(17,0.1057928);
   VbbHcc_HMass_stack_11->SetBinContent(18,0.0990333);
   VbbHcc_HMass_stack_11->SetBinContent(19,0.08337547);
   VbbHcc_HMass_stack_11->SetBinContent(20,0.06301349);
   VbbHcc_HMass_stack_11->SetBinContent(21,0.07400813);
   VbbHcc_HMass_stack_11->SetBinContent(22,0.07378291);
   VbbHcc_HMass_stack_11->SetBinContent(23,0.07998526);
   VbbHcc_HMass_stack_11->SetBinContent(24,0.06992545);
   VbbHcc_HMass_stack_11->SetBinContent(25,0.04729019);
   VbbHcc_HMass_stack_11->SetBinContent(26,0.05512967);
   VbbHcc_HMass_stack_11->SetBinContent(27,0.03505932);
   VbbHcc_HMass_stack_11->SetBinContent(28,0.04459842);
   VbbHcc_HMass_stack_11->SetBinContent(29,0.04724356);
   VbbHcc_HMass_stack_11->SetBinContent(30,0.03368173);
   VbbHcc_HMass_stack_11->SetBinContent(31,0.4493724);
   VbbHcc_HMass_stack_11->SetBinError(2,0.002296496);
   VbbHcc_HMass_stack_11->SetBinError(3,0.005108837);
   VbbHcc_HMass_stack_11->SetBinError(4,0.01227001);
   VbbHcc_HMass_stack_11->SetBinError(5,0.01389044);
   VbbHcc_HMass_stack_11->SetBinError(6,0.01532369);
   VbbHcc_HMass_stack_11->SetBinError(7,0.01675301);
   VbbHcc_HMass_stack_11->SetBinError(8,0.01869573);
   VbbHcc_HMass_stack_11->SetBinError(9,0.02100128);
   VbbHcc_HMass_stack_11->SetBinError(10,0.02265792);
   VbbHcc_HMass_stack_11->SetBinError(11,0.02624006);
   VbbHcc_HMass_stack_11->SetBinError(12,0.02647603);
   VbbHcc_HMass_stack_11->SetBinError(13,0.02640751);
   VbbHcc_HMass_stack_11->SetBinError(14,0.0207806);
   VbbHcc_HMass_stack_11->SetBinError(15,0.0175594);
   VbbHcc_HMass_stack_11->SetBinError(16,0.01494223);
   VbbHcc_HMass_stack_11->SetBinError(17,0.01269919);
   VbbHcc_HMass_stack_11->SetBinError(18,0.01220582);
   VbbHcc_HMass_stack_11->SetBinError(19,0.01154701);
   VbbHcc_HMass_stack_11->SetBinError(20,0.009904571);
   VbbHcc_HMass_stack_11->SetBinError(21,0.01060478);
   VbbHcc_HMass_stack_11->SetBinError(22,0.01069171);
   VbbHcc_HMass_stack_11->SetBinError(23,0.01113567);
   VbbHcc_HMass_stack_11->SetBinError(24,0.01033444);
   VbbHcc_HMass_stack_11->SetBinError(25,0.008402312);
   VbbHcc_HMass_stack_11->SetBinError(26,0.00897181);
   VbbHcc_HMass_stack_11->SetBinError(27,0.007268499);
   VbbHcc_HMass_stack_11->SetBinError(28,0.008267401);
   VbbHcc_HMass_stack_11->SetBinError(29,0.008510784);
   VbbHcc_HMass_stack_11->SetBinError(30,0.007219986);
   VbbHcc_HMass_stack_11->SetBinError(31,0.02612017);
   VbbHcc_HMass_stack_11->SetEntries(3413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_HMass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_11->SetLineColor(ci);
   VbbHcc_HMass_stack_11->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_11,"");
   
   TH1D *VbbHcc_HMass_stack_12 = new TH1D("VbbHcc_HMass_stack_12","",30,0,300);
   VbbHcc_HMass_stack_12->SetBinContent(2,0.0001875738);
   VbbHcc_HMass_stack_12->SetBinContent(3,0.002630864);
   VbbHcc_HMass_stack_12->SetBinContent(4,0.01644616);
   VbbHcc_HMass_stack_12->SetBinContent(5,0.0279404);
   VbbHcc_HMass_stack_12->SetBinContent(6,0.03733506);
   VbbHcc_HMass_stack_12->SetBinContent(7,0.04478809);
   VbbHcc_HMass_stack_12->SetBinContent(8,0.05233255);
   VbbHcc_HMass_stack_12->SetBinContent(9,0.07321912);
   VbbHcc_HMass_stack_12->SetBinContent(10,0.08101785);
   VbbHcc_HMass_stack_12->SetBinContent(11,0.09952904);
   VbbHcc_HMass_stack_12->SetBinContent(12,0.1201324);
   VbbHcc_HMass_stack_12->SetBinContent(13,0.1159571);
   VbbHcc_HMass_stack_12->SetBinContent(14,0.08583753);
   VbbHcc_HMass_stack_12->SetBinContent(15,0.0555439);
   VbbHcc_HMass_stack_12->SetBinContent(16,0.03811142);
   VbbHcc_HMass_stack_12->SetBinContent(17,0.04053392);
   VbbHcc_HMass_stack_12->SetBinContent(18,0.03961904);
   VbbHcc_HMass_stack_12->SetBinContent(19,0.039847);
   VbbHcc_HMass_stack_12->SetBinContent(20,0.03367499);
   VbbHcc_HMass_stack_12->SetBinContent(21,0.03477602);
   VbbHcc_HMass_stack_12->SetBinContent(22,0.02870366);
   VbbHcc_HMass_stack_12->SetBinContent(23,0.02764225);
   VbbHcc_HMass_stack_12->SetBinContent(24,0.02548085);
   VbbHcc_HMass_stack_12->SetBinContent(25,0.02825699);
   VbbHcc_HMass_stack_12->SetBinContent(26,0.02275262);
   VbbHcc_HMass_stack_12->SetBinContent(27,0.02549993);
   VbbHcc_HMass_stack_12->SetBinContent(28,0.0266725);
   VbbHcc_HMass_stack_12->SetBinContent(29,0.01928001);
   VbbHcc_HMass_stack_12->SetBinContent(30,0.01739442);
   VbbHcc_HMass_stack_12->SetBinContent(31,0.305302);
   VbbHcc_HMass_stack_12->SetBinError(2,0.0001875738);
   VbbHcc_HMass_stack_12->SetBinError(3,0.0007059694);
   VbbHcc_HMass_stack_12->SetBinError(4,0.001778111);
   VbbHcc_HMass_stack_12->SetBinError(5,0.002317566);
   VbbHcc_HMass_stack_12->SetBinError(6,0.002668238);
   VbbHcc_HMass_stack_12->SetBinError(7,0.002905304);
   VbbHcc_HMass_stack_12->SetBinError(8,0.003159821);
   VbbHcc_HMass_stack_12->SetBinError(9,0.003745951);
   VbbHcc_HMass_stack_12->SetBinError(10,0.003947448);
   VbbHcc_HMass_stack_12->SetBinError(11,0.004364004);
   VbbHcc_HMass_stack_12->SetBinError(12,0.004796835);
   VbbHcc_HMass_stack_12->SetBinError(13,0.004708891);
   VbbHcc_HMass_stack_12->SetBinError(14,0.00404243);
   VbbHcc_HMass_stack_12->SetBinError(15,0.003262382);
   VbbHcc_HMass_stack_12->SetBinError(16,0.002694849);
   VbbHcc_HMass_stack_12->SetBinError(17,0.002784608);
   VbbHcc_HMass_stack_12->SetBinError(18,0.002735224);
   VbbHcc_HMass_stack_12->SetBinError(19,0.002750893);
   VbbHcc_HMass_stack_12->SetBinError(20,0.002539859);
   VbbHcc_HMass_stack_12->SetBinError(21,0.002573743);
   VbbHcc_HMass_stack_12->SetBinError(22,0.002347929);
   VbbHcc_HMass_stack_12->SetBinError(23,0.002282831);
   VbbHcc_HMass_stack_12->SetBinError(24,0.002210617);
   VbbHcc_HMass_stack_12->SetBinError(25,0.00231047);
   VbbHcc_HMass_stack_12->SetBinError(26,0.002092264);
   VbbHcc_HMass_stack_12->SetBinError(27,0.00219731);
   VbbHcc_HMass_stack_12->SetBinError(28,0.002267758);
   VbbHcc_HMass_stack_12->SetBinError(29,0.001912287);
   VbbHcc_HMass_stack_12->SetBinError(30,0.001813703);
   VbbHcc_HMass_stack_12->SetBinError(31,0.007580601);
   VbbHcc_HMass_stack_12->SetEntries(8846);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_HMass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass_stack_12->SetLineColor(ci);
   VbbHcc_HMass_stack_12->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_HMass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_HMass__9 = new TH1D("VbbHcc_HMass__9","",30,0,300);
   VbbHcc_HMass__9->SetBinContent(2,29);
   VbbHcc_HMass__9->SetBinContent(3,1242);
   VbbHcc_HMass__9->SetBinContent(4,3870);
   VbbHcc_HMass__9->SetBinContent(5,6084);
   VbbHcc_HMass__9->SetBinContent(6,7362);
   VbbHcc_HMass__9->SetBinContent(7,7929);
   VbbHcc_HMass__9->SetBinContent(8,8659);
   VbbHcc_HMass__9->SetBinContent(9,8597);
   VbbHcc_HMass__9->SetBinContent(10,8416);
   VbbHcc_HMass__9->SetBinContent(11,8214);
   VbbHcc_HMass__9->SetBinContent(12,7873);
   VbbHcc_HMass__9->SetBinContent(13,7365);
   VbbHcc_HMass__9->SetBinContent(14,7250);
   VbbHcc_HMass__9->SetBinContent(15,6736);
   VbbHcc_HMass__9->SetBinContent(16,6388);
   VbbHcc_HMass__9->SetBinContent(17,6139);
   VbbHcc_HMass__9->SetBinContent(18,5745);
   VbbHcc_HMass__9->SetBinContent(19,5479);
   VbbHcc_HMass__9->SetBinContent(20,5048);
   VbbHcc_HMass__9->SetBinContent(21,4801);
   VbbHcc_HMass__9->SetBinContent(22,4443);
   VbbHcc_HMass__9->SetBinContent(23,4198);
   VbbHcc_HMass__9->SetBinContent(24,3939);
   VbbHcc_HMass__9->SetBinContent(25,3683);
   VbbHcc_HMass__9->SetBinContent(26,3372);
   VbbHcc_HMass__9->SetBinContent(27,3183);
   VbbHcc_HMass__9->SetBinContent(28,2905);
   VbbHcc_HMass__9->SetBinContent(29,2679);
   VbbHcc_HMass__9->SetBinContent(30,2569);
   VbbHcc_HMass__9->SetBinContent(31,44127);
   VbbHcc_HMass__9->SetBinError(2,5.385165);
   VbbHcc_HMass__9->SetBinError(3,35.24202);
   VbbHcc_HMass__9->SetBinError(4,62.20932);
   VbbHcc_HMass__9->SetBinError(5,78);
   VbbHcc_HMass__9->SetBinError(6,85.8021);
   VbbHcc_HMass__9->SetBinError(7,89.04493);
   VbbHcc_HMass__9->SetBinError(8,93.05375);
   VbbHcc_HMass__9->SetBinError(9,92.72001);
   VbbHcc_HMass__9->SetBinError(10,91.73876);
   VbbHcc_HMass__9->SetBinError(11,90.63112);
   VbbHcc_HMass__9->SetBinError(12,88.72993);
   VbbHcc_HMass__9->SetBinError(13,85.81958);
   VbbHcc_HMass__9->SetBinError(14,85.14693);
   VbbHcc_HMass__9->SetBinError(15,82.07314);
   VbbHcc_HMass__9->SetBinError(16,79.92496);
   VbbHcc_HMass__9->SetBinError(17,78.35177);
   VbbHcc_HMass__9->SetBinError(18,75.79578);
   VbbHcc_HMass__9->SetBinError(19,74.02027);
   VbbHcc_HMass__9->SetBinError(20,71.04928);
   VbbHcc_HMass__9->SetBinError(21,69.28925);
   VbbHcc_HMass__9->SetBinError(22,66.65583);
   VbbHcc_HMass__9->SetBinError(23,64.79197);
   VbbHcc_HMass__9->SetBinError(24,62.76145);
   VbbHcc_HMass__9->SetBinError(25,60.68773);
   VbbHcc_HMass__9->SetBinError(26,58.06892);
   VbbHcc_HMass__9->SetBinError(27,56.41808);
   VbbHcc_HMass__9->SetBinError(28,53.89805);
   VbbHcc_HMass__9->SetBinError(29,51.75906);
   VbbHcc_HMass__9->SetBinError(30,50.6853);
   VbbHcc_HMass__9->SetBinError(31,210.0643);
   VbbHcc_HMass__9->SetEntries(198324);

   ci = TColor::GetColor("#000099");
   VbbHcc_HMass__9->SetLineColor(ci);
   VbbHcc_HMass__9->SetLineWidth(2);
   VbbHcc_HMass__9->SetMarkerStyle(20);
   VbbHcc_HMass__9->SetMarkerSize(1.2);
   VbbHcc_HMass__9->GetXaxis()->SetRange(1,300);
   VbbHcc_HMass__9->GetXaxis()->SetLabelFont(42);
   VbbHcc_HMass__9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_HMass__9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_HMass__9->GetXaxis()->SetTitleFont(42);
   VbbHcc_HMass__9->GetYaxis()->SetLabelFont(42);
   VbbHcc_HMass__9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_HMass__9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_HMass__9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_HMass__9->GetYaxis()->SetTitleFont(42);
   VbbHcc_HMass__9->GetZaxis()->SetLabelFont(42);
   VbbHcc_HMass__9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_HMass__9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_HMass__9->GetZaxis()->SetTitleFont(42);
   VbbHcc_HMass__9->Draw("same E");
   
   Double_t Graph_from_VbbHcc_HMass_fx1009[30] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295};
   Double_t Graph_from_VbbHcc_HMass_fy1009[30] = {
   0,
   42.22829,
   6554.21,
   22988.21,
   29729.5,
   33052.1,
   27789.3,
   28926.43,
   27298.91,
   25514.46,
   23625.35,
   30196.5,
   21809.92,
   22692.98,
   22310.78,
   18539.41,
   21110.94,
   19955.81,
   16652.84,
   15735.77,
   16704.44,
   13840.97,
   13917.65,
   9527.791,
   10416.03,
   8510.155,
   8808.867,
   6950.293,
   7917.131,
   4682.368};
   Double_t Graph_from_VbbHcc_HMass_fex1009[30] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_VbbHcc_HMass_fey1009[30] = {
   0,
   22.76818,
   1306.963,
   2399.357,
   2665.967,
   2778.376,
   2378.364,
   2365.044,
   2263.874,
   2182.591,
   2087.081,
   2545.545,
   2008.762,
   2093.859,
   2133.974,
   1829.228,
   2105.191,
   2036.297,
   1793.123,
   1756.584,
   1918.513,
   1695.846,
   1670.254,
   1259.395,
   1381.51,
   1229.37,
   1297.686,
   1074.182,
   1195.363,
   715.5395};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_HMass_fx1009,Graph_from_VbbHcc_HMass_fy1009,Graph_from_VbbHcc_HMass_fex1009,Graph_from_VbbHcc_HMass_fey1009);
   gre->SetName("Graph_from_VbbHcc_HMass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_HMass1009 = new TH1F("Graph_Graph_from_VbbHcc_HMass1009","",100,0,330);
   Graph_Graph_from_VbbHcc_HMass1009->SetMinimum(0);
   Graph_Graph_from_VbbHcc_HMass1009->SetMaximum(39413.53);
   Graph_Graph_from_VbbHcc_HMass1009->SetDirectory(0);
   Graph_Graph_from_VbbHcc_HMass1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_HMass1009->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_HMass1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HMass1009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HMass1009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HMass1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_HMass1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HMass1009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HMass1009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HMass1009->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_HMass1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_HMass1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_HMass1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_HMass1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_HMass1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_HMass1009);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_HMass","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_HMass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_HMass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_HMass","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   HMass_VbbHcc_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
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
   
   TH1D *data_mc_ratio__10 = new TH1D("data_mc_ratio__10","",30,0,300);
   data_mc_ratio__10->SetBinContent(2,0.6867435);
   data_mc_ratio__10->SetBinContent(3,0.1894965);
   data_mc_ratio__10->SetBinContent(4,0.1683472);
   data_mc_ratio__10->SetBinContent(5,0.2046452);
   data_mc_ratio__10->SetBinContent(6,0.2227392);
   data_mc_ratio__10->SetBinContent(7,0.2853256);
   data_mc_ratio__10->SetBinContent(8,0.2993456);
   data_mc_ratio__10->SetBinContent(9,0.314921);
   data_mc_ratio__10->SetBinContent(10,0.3298522);
   data_mc_ratio__10->SetBinContent(11,0.3476773);
   data_mc_ratio__10->SetBinContent(12,0.2607256);
   data_mc_ratio__10->SetBinContent(13,0.3376904);
   data_mc_ratio__10->SetBinContent(14,0.319482);
   data_mc_ratio__10->SetBinContent(15,0.3019169);
   data_mc_ratio__10->SetBinContent(16,0.3445633);
   data_mc_ratio__10->SetBinContent(17,0.2907971);
   data_mc_ratio__10->SetBinContent(18,0.2878861);
   data_mc_ratio__10->SetBinContent(19,0.329013);
   data_mc_ratio__10->SetBinContent(20,0.3207979);
   data_mc_ratio__10->SetBinContent(21,0.2874086);
   data_mc_ratio__10->SetBinContent(22,0.3210036);
   data_mc_ratio__10->SetBinContent(23,0.3016313);
   data_mc_ratio__10->SetBinContent(24,0.4134222);
   data_mc_ratio__10->SetBinContent(25,0.3535895);
   data_mc_ratio__10->SetBinContent(26,0.3962325);
   data_mc_ratio__10->SetBinContent(27,0.3613404);
   data_mc_ratio__10->SetBinContent(28,0.417968);
   data_mc_ratio__10->SetBinContent(29,0.3383801);
   data_mc_ratio__10->SetBinContent(30,0.548654);
   data_mc_ratio__10->SetBinContent(31,0.5295882);
   data_mc_ratio__10->SetBinError(2,0.1275251);
   data_mc_ratio__10->SetBinError(3,0.005377005);
   data_mc_ratio__10->SetBinError(4,0.00270614);
   data_mc_ratio__10->SetBinError(5,0.002623657);
   data_mc_ratio__10->SetBinError(6,0.002595965);
   data_mc_ratio__10->SetBinError(7,0.003204288);
   data_mc_ratio__10->SetBinError(8,0.003216911);
   data_mc_ratio__10->SetBinError(9,0.003396473);
   data_mc_ratio__10->SetBinError(10,0.00359556);
   data_mc_ratio__10->SetBinError(11,0.00383618);
   data_mc_ratio__10->SetBinError(12,0.002938418);
   data_mc_ratio__10->SetBinError(13,0.003934887);
   data_mc_ratio__10->SetBinError(14,0.003752126);
   data_mc_ratio__10->SetBinError(15,0.003678632);
   data_mc_ratio__10->SetBinError(16,0.004311085);
   data_mc_ratio__10->SetBinError(17,0.003711429);
   data_mc_ratio__10->SetBinError(18,0.003798181);
   data_mc_ratio__10->SetBinError(19,0.004444904);
   data_mc_ratio__10->SetBinError(20,0.004515146);
   data_mc_ratio__10->SetBinError(21,0.004147954);
   data_mc_ratio__10->SetBinError(22,0.004815837);
   data_mc_ratio__10->SetBinError(23,0.004655381);
   data_mc_ratio__10->SetBinError(24,0.006587199);
   data_mc_ratio__10->SetBinError(25,0.005826375);
   data_mc_ratio__10->SetBinError(26,0.006823486);
   data_mc_ratio__10->SetBinError(27,0.006404692);
   data_mc_ratio__10->SetBinError(28,0.007754788);
   data_mc_ratio__10->SetBinError(29,0.006537602);
   data_mc_ratio__10->SetBinError(30,0.01082472);
   data_mc_ratio__10->SetBinError(31,0.02192521);
   data_mc_ratio__10->SetMinimum(0.4);
   data_mc_ratio__10->SetMaximum(1.6);
   data_mc_ratio__10->SetEntries(464.3638);
   data_mc_ratio__10->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__10->SetLineColor(ci);
   data_mc_ratio__10->SetLineWidth(2);
   data_mc_ratio__10->SetMarkerStyle(20);
   data_mc_ratio__10->SetMarkerSize(1.2);
   data_mc_ratio__10->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__10->GetXaxis()->SetRange(1,30);
   data_mc_ratio__10->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__10->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__10->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__10->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__10->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__10->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__10->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__10->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__10->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__10->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__10->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__10->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__10->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__10->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__10->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__10->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__10->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1010[30] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295};
   Double_t Graph_from_mc_statistical_error_fy1010[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1010[30] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_mc_statistical_error_fey1010[30] = {
   0,
   0.5391689,
   0.1994082,
   0.1043734,
   0.08967413,
   0.08406048,
   0.08558559,
   0.08176064,
   0.0829291,
   0.08554329,
   0.08834074,
   0.08429933,
   0.09210312,
   0.09226898,
   0.09564766,
   0.098667,
   0.09972036,
   0.1020403,
   0.1076767,
   0.11163,
   0.1148505,
   0.1225237,
   0.1200098,
   0.1321812,
   0.132633,
   0.1444592,
   0.1473159,
   0.154552,
   0.1509844,
   0.1528157};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1010,Graph_from_mc_statistical_error_fy1010,Graph_from_mc_statistical_error_fex1010,Graph_from_mc_statistical_error_fey1010);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1010 = new TH1F("Graph_Graph_from_mc_statistical_error1010","",100,0,330);
   Graph_Graph_from_mc_statistical_error1010->SetMinimum(0.3529973);
   Graph_Graph_from_mc_statistical_error1010->SetMaximum(1.647003);
   Graph_Graph_from_mc_statistical_error1010->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1010->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1010);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   HMass_VbbHcc_16->cd();
   HMass_VbbHcc_16->Modified();
   HMass_VbbHcc_16->cd();
   HMass_VbbHcc_16->SetSelected(HMass_VbbHcc_16);
}
