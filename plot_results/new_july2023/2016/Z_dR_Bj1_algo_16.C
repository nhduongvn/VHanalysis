void Z_dR_Bj1_algo_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_16/Z_dR_Bj1_algo_16
//=========  (Mon Jul 24 10:11:50 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_algo_16 = new TCanvas("Z_dR_Bj1_algo_16", "Z_dR_Bj1_algo_16",0,0,600,600);
   Z_dR_Bj1_algo_16->SetHighLightColor(2);
   Z_dR_Bj1_algo_16->Range(0,0,1,1);
   Z_dR_Bj1_algo_16->SetFillColor(0);
   Z_dR_Bj1_algo_16->SetFillStyle(4000);
   Z_dR_Bj1_algo_16->SetBorderMode(0);
   Z_dR_Bj1_algo_16->SetBorderSize(2);
   Z_dR_Bj1_algo_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-219.278,6.314516,219068.7);
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
   st->SetMaximum(187752.3);
   
   TH1F *st_stack_149 = new TH1F("st_stack_149","",30,0,6);
   st_stack_149->SetMinimum(0.01);
   st_stack_149->SetMaximum(197139.9);
   st_stack_149->SetDirectory(0);
   st_stack_149->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_149->SetLineColor(ci);
   st_stack_149->GetXaxis()->SetRange(1,30);
   st_stack_149->GetXaxis()->SetLabelFont(42);
   st_stack_149->GetXaxis()->SetLabelSize(0.035);
   st_stack_149->GetXaxis()->SetTitleSize(0.035);
   st_stack_149->GetXaxis()->SetTitleFont(42);
   st_stack_149->GetYaxis()->SetTitle("Events/0.2");
   st_stack_149->GetYaxis()->SetLabelFont(42);
   st_stack_149->GetYaxis()->SetLabelSize(0.05);
   st_stack_149->GetYaxis()->SetTitleSize(0.057);
   st_stack_149->GetYaxis()->SetTitleOffset(1.2);
   st_stack_149->GetYaxis()->SetTitleFont(42);
   st_stack_149->GetZaxis()->SetLabelFont(42);
   st_stack_149->GetZaxis()->SetLabelSize(0.035);
   st_stack_149->GetZaxis()->SetTitleSize(0.035);
   st_stack_149->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_149);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,333.642);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,82518.92);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,75221.49);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,42399.98);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,31735.85);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,29783.97);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,21177.27);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,19035.64);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,10340.99);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,12443.18);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,10774.03);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,7120.358);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,5580.764);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,6668.811);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,6300.786);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,2970.531);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,4201.352);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,4739.601);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,5685.116);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,5515.978);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(21,3442.927);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,3910.012);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(23,2043.105);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(24,2251.753);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(25,1190.025);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(26,1728.322);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(27,739.7946);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(28,820.103);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(29,376.5066);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(30,74.59225);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(31,884.9211);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,270.1812);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,20864.37);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,5558.847);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,3088.91);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,3291.228);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,3276.108);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,2993.611);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,3220.541);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,1839.854);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,2396.739);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,2347.873);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,1185.33);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,987.4333);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,1706.969);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,1704.637);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,622.9404);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,902.1004);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,1615.286);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,1681.935);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,1680.999);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(21,774.6088);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,1546.948);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(23,551.3389);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(24,613.5015);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(25,392.7676);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(26,547.5926);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(27,282.0708);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(28,385.0204);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(29,271.214);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(30,27.26237);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(31,466.4417);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(15710);

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
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,0.8466209);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,121.8778);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,267.004);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,352.1201);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,317.7593);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,263.5109);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,210.7668);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,166.7562);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,133.4439);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,108.9995);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,89.35265);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,74.00365);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,65.78);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,57.11972);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,53.32473);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,51.85361);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,41.41604);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,43.02148);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,41.69716);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,32.62034);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,30.67277);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(22,25.10352);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(23,19.82395);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(24,17.19209);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(25,9.925754);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(26,9.413515);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(27,5.46576);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(28,2.950931);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(29,3.056468);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(30,1.272094);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(31,2.824785);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.3952855);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,4.362821);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,6.04485);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,6.832927);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,6.348658);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,5.726287);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,5.16459);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,4.532592);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,4.047894);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,3.691036);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,3.283696);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,2.951538);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,2.907252);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,2.578885);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,2.531126);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,2.601633);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,2.121733);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,2.336285);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,2.29577);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,1.993274);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,1.952954);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(22,1.726731);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(23,1.636258);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(24,1.653821);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(25,1.135015);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(26,1.172691);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(27,0.9190204);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(28,0.6567999);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(29,0.7000657);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(30,0.4219054);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(31,0.6499044);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(39281);

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
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(1,4.674232);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(2,1239.795);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(3,3064.074);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(4,3799.924);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(5,3454.956);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(6,2703.156);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(7,2068.84);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(8,1591.752);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(9,1228.278);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(10,983.7169);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(11,806.6752);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(12,684.4807);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(13,602.3068);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(14,541.3052);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(15,486.7499);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(16,457.5024);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(17,425.161);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(18,388.1728);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(19,363.5068);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(20,317.7214);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(21,285.0308);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(22,225.1811);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(23,164.9354);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(24,117.7454);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(25,77.05117);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(26,49.80185);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(27,28.86472);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(28,19.05293);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(29,12.02545);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(30,6.5695);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(31,10.25637);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(1,0.5219564);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(2,8.724034);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(3,13.72707);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(4,15.24284);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(5,14.46946);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(6,12.7565);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(7,11.13561);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(8,9.756439);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(9,8.554213);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(10,7.644653);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(11,6.917695);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(12,6.379218);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(13,5.982393);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(14,5.66962);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(15,5.371876);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(16,5.221681);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(17,5.043898);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(18,4.826054);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(19,4.667805);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(20,4.374806);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(21,4.133122);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(22,3.692988);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(23,3.136895);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(24,2.661661);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(25,2.144828);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(26,1.725157);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(27,1.308181);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(28,1.057863);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(29,0.8445154);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(30,0.614651);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(31,0.7747307);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetEntries(446835);

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
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(1,1.101627);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(2,354.3767);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(3,599.3102);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(4,442.4486);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(5,238.6566);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(6,132.3026);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(7,98.68309);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(8,94.02289);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(9,61.90799);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(10,52.33852);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(11,41.87974);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(12,37.85897);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(13,28.83016);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(14,33.11704);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(15,36.36531);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(16,29.10354);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(17,21.23035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(18,30.76854);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(19,16.27579);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(20,24.41432);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(21,22.08984);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(22,23.8116);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(23,17.27487);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(24,14.69621);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(25,9.577052);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(26,9.146182);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(27,7.319488);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(28,4.103121);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(29,1.524287);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(30,3.804738);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(31,0.6588116);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(1,0.3669826);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(2,10.65364);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(3,19.65179);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(4,22.77784);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(5,16.95268);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(6,10.56042);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(7,9.193319);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(8,9.165161);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(9,7.115448);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(10,5.995561);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(11,3.783446);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(12,5.148661);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(13,4.2883);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(14,5.126166);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(15,6.318937);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(16,5.05278);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(17,3.2306);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(18,5.703495);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(19,1.689684);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(20,3.389319);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(21,3.286575);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(22,4.239588);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(23,3.11419);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(24,3.054768);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(25,1.154228);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(26,1.23687);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(27,0.9350724);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(28,0.8018682);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(29,0.4057455);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(30,2.696262);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(31,0.3271244);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetEntries(15848);

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
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(1,0.7442842);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(2,239.0116);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(3,288.6077);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(4,173.1695);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(5,105.9514);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(6,113.6487);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(7,62.55472);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(8,50.06815);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(9,39.87853);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(10,34.34642);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(11,27.42458);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(12,21.09149);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(13,18.08957);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(14,20.65462);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(15,19.21436);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(16,14.00619);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(17,19.38045);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(18,17.26321);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(19,13.92566);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(20,11.0936);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(21,8.775449);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(22,16.56386);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(23,16.3726);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(24,8.780363);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(25,6.303063);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(26,2.590222);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(27,3.285953);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(28,2.163979);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(29,1.444759);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(30,0.6599543);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(31,2.302108);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(1,0.3137104);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(2,21.98879);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(3,25.50381);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(4,18.38693);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(5,11.26946);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(6,16.71337);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(7,8.313959);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(8,9.709027);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(9,9.460378);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(10,7.293272);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(11,4.064919);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(12,3.340715);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(13,2.833936);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(14,6.772271);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(15,6.563763);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(16,2.694638);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(17,6.708129);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(18,6.617135);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(19,2.950858);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(20,2.657366);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(21,1.975649);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(22,6.538377);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(23,6.551168);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(24,2.196975);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(25,1.638413);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(26,0.5075445);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(27,1.12362);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(28,0.421283);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(29,0.4885247);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(30,0.263412);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(31,1.089556);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetEntries(9338);

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
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(2,0.7732744);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(3,0.8591938);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(4,0.5155163);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(5,0.687355);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(6,0.2577581);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(7,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(8,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(11,0.2577581);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(12,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(13,0.2577581);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(15,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(16,0.1718388);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(17,0.1718388);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(18,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(19,0.1718388);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(21,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(22,0.1718388);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(24,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(2,0.2577581);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(3,0.2717009);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(4,0.2104586);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(5,0.2430167);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(6,0.1488167);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(7,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(8,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(11,0.1488167);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(12,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(13,0.1488167);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(15,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(16,0.1215083);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(17,0.1215083);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(18,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(19,0.1215083);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(21,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(22,0.1215083);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(24,0.08591938);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetEntries(57);

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
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(2,5.861697);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(3,10.51283);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(4,5.543126);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(5,1.592852);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(6,0.7008551);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(7,0.3185705);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(8,0.637141);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(9,0.5097128);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(10,0.2548564);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(11,0.1274282);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(12,0.1911423);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(13,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(14,0.1911423);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(15,0.1911423);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(16,0.1911423);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(17,0.4459987);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(18,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(20,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(21,0.2548564);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(22,0.5097128);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(23,0.3185705);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(24,0.3185705);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(25,0.1274282);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(26,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(29,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(30,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(2,0.6111241);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(3,0.8184224);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(4,0.5942855);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(5,0.3185705);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(6,0.2113157);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(7,0.142469);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(8,0.2014817);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(9,0.1802107);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(10,0.1274282);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(11,0.09010534);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(12,0.1103561);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(13,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(14,0.1103561);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(15,0.1103561);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(16,0.1103561);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(17,0.1685717);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(18,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(20,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(21,0.1274282);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(22,0.1802107);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(23,0.142469);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(24,0.142469);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(25,0.09010534);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(26,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(29,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(30,0.0637141);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetEntries(458);

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
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(2,5.381511);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(3,7.892883);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(4,5.022744);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(5,2.870139);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(6,0.3587674);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(7,0.8969185);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(8,0.5381511);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(9,0.3587674);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(10,0.1793837);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(11,1.076302);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(12,0.1793837);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(13,0.3587674);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(14,0.5381511);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(15,0.3587674);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(17,0.1793837);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(20,0.7175348);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(21,0.3587674);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(23,0.3587674);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(24,0.1793837);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(27,0.1793837);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(2,0.982525);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(3,1.189897);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(4,0.9492093);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(5,0.7175348);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(6,0.2536869);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(7,0.4011141);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(8,0.3107017);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(9,0.2536869);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(10,0.1793837);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(11,0.4393985);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(12,0.1793837);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(13,0.2536869);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(14,0.3107017);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(15,0.2536869);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(17,0.1793837);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(20,0.3587674);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(21,0.2536869);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(23,0.2536869);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(24,0.1793837);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(27,0.1793837);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetEntries(156);

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
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(1,0.00551755);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(2,1.762857);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(3,3.757451);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(4,3.070516);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(5,1.762857);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(6,0.9586742);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(7,0.5283054);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(8,0.3365705);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(9,0.2979477);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(10,0.2193226);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(11,0.1875967);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(12,0.1655265);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(13,0.1338006);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(14,0.128283);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(15,0.1503532);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(16,0.08966018);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(17,0.1365594);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(18,0.1131098);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(19,0.13518);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(20,0.110351);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(21,0.1462151);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(22,0.13518);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(23,0.1089716);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(24,0.09517773);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(25,0.05793427);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(26,0.03448469);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(27,0.01793204);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(28,0.01241449);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(29,0.006896937);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(30,0.004138162);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(1,0.002758775);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(2,0.04931189);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(3,0.07199292);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(4,0.06508019);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(5,0.04931189);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(6,0.03636459);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(7,0.02699514);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(8,0.02154672);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(9,0.02027277);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(10,0.01739341);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(11,0.01608628);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(12,0.01511043);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(13,0.01358539);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(14,0.01330233);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(15,0.01440123);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(16,0.01112098);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(17,0.01372473);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(18,0.01249088);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(19,0.01365524);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(20,0.01233762);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(21,0.01420166);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(22,0.01365524);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(23,0.01226026);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(24,0.01145805);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(25,0.008939452);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(26,0.006896937);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(27,0.004973452);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(28,0.004138162);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(29,0.003084404);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(30,0.002389169);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetEntries(10635);

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
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(1,0.00286437);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(2,0.5993694);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(3,1.3194);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(4,1.189071);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(5,0.7168085);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(6,0.4174819);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(7,0.2509904);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(8,0.170788);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(9,0.1328351);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(10,0.08951155);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(11,0.09631443);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(12,0.0658805);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(13,0.06874487);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(14,0.05979372);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(15,0.05084256);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(16,0.06230004);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(17,0.05513912);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(18,0.06194199);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(19,0.05836153);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(20,0.05728739);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(21,0.05979372);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(22,0.05907762);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(23,0.0519167);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(24,0.03365634);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(25,0.02685347);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(26,0.01145748);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(27,0.01253162);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(28,0.003580462);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(29,0.001432185);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(30,0.001432185);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(31,0.001074139);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(1,0.001012708);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(2,0.0146493);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(3,0.02173491);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(4,0.02063353);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(5,0.01602032);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(6,0.01222611);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(7,0.009479776);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(8,0.007819847);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(9,0.006896457);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(10,0.005661208);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(11,0.005872394);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(12,0.004856775);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(13,0.004961234);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(14,0.004626977);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(15,0.004266613);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(16,0.004722954);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(17,0.004443237);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(18,0.004709363);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(19,0.004571228);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(20,0.004528966);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(21,0.004626977);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(22,0.004599187);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(23,0.004311447);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(24,0.003471387);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(25,0.003100771);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(26,0.002025415);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(27,0.00211823);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(28,0.001132242);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(29,0.0007160924);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(30,0.0007160924);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(31,0.0006201542);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetEntries(16167);

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
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(2,0.1340154);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(3,0.1914505);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(4,0.1422204);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(5,0.04923013);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(6,0.01094003);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(7,0.01367504);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(8,0.008205022);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(10,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(11,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(13,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(16,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(17,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(19,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(20,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(21,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(22,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(23,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(24,0.008205022);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(25,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(26,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(2,0.01914505);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(3,0.02288271);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(4,0.01972242);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(5,0.01160365);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(6,0.005470015);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(7,0.006115663);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(8,0.004737172);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(10,0.003867885);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(11,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(13,0.003867885);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(16,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(17,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(19,0.003867885);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(20,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(21,0.003867885);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(22,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(23,0.003867885);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(24,0.004737172);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(25,0.002735007);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(26,0.003867885);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetEntries(222);

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
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(2,0.03965651);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(3,0.07359676);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(4,0.04930269);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(5,0.01714876);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(6,0.007502583);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(7,0.002500861);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(8,0.003929924);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(9,0.002143595);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(10,0.002143595);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(11,0.002858127);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(12,0.001071798);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(13,0.001786329);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(14,0.001071798);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(15,0.001071798);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(16,0.0007145317);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(17,0.002500861);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(18,0.001071798);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(19,0.001429063);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(20,0.001786329);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(21,0.002500861);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(22,0.002500861);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(23,0.0007145317);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(24,0.001429063);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(25,0.0007145317);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(26,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(2,0.003764029);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(3,0.00512773);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(4,0.004196923);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(5,0.00247521);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(6,0.001637198);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(7,0.0009452366);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(8,0.001184917);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(9,0.000875119);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(10,0.000875119);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(11,0.0010105);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(12,0.0006188026);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(13,0.0007988707);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(14,0.0006188026);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(15,0.0006188026);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(16,0.0005052502);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(17,0.0009452366);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(18,0.0006188026);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(19,0.0007145317);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(20,0.0007988707);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(21,0.0009452366);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(22,0.0009452366);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(23,0.0005052502);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(24,0.0007145317);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(25,0.0005052502);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(26,0.0003572658);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetEntries(620);

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
   
   TH1D *VbbHcc_algo_Z_dR_Bj1__297 = new TH1D("VbbHcc_algo_Z_dR_Bj1__297","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(1,57);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(2,14488);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(3,17109);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(4,12587);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(5,10366);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(6,8390);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(7,6475);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(8,5243);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(9,4245);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(10,3480);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(11,2939);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(12,2554);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(13,2156);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(14,1940);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(15,1920);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(16,1669);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(17,1506);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(18,1320);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(19,1289);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(20,1249);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(21,1169);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(22,1080);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(23,956);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(24,803);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(25,640);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(26,531);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(27,337);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(28,235);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(29,139);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(30,58);
   VbbHcc_algo_Z_dR_Bj1__297->SetBinContent(31,103);
   VbbHcc_algo_Z_dR_Bj1__297->SetEntries(107062);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1__297->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1__297->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj1__297->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj1__297->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj1__297->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1__297->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__297->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__297->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__297->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__297->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__297->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__297->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__297->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1__297->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__297->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__297->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__297->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__297->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__297->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1297[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1297[30] = {
   341.0171,
   84488.54,
   79465.09,
   47183.17,
   35860.87,
   32999.3,
   23620.22,
   20940.02,
   11805.8,
   13623.33,
   11741.11,
   7938.482,
   6296.66,
   7321.926,
   6897.278,
   3523.515,
   4709.534,
   5219.152,
   6120.894,
   5902.781,
   3790.41,
   4201.553,
   2262.356,
   2410.889,
   1293.098,
   1799.389,
   784.9403,
   848.39,
   394.6296,
   86.96782};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1297[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1297[30] = {
   270.1825,
   20864.39,
   5558.961,
   3089.094,
   3291.329,
   3276.197,
   2993.662,
   3220.587,
   1839.916,
   2396.772,
   2347.892,
   1185.367,
   987.4691,
   1707.002,
   1704.672,
   622.9941,
   902.1478,
   1615.318,
   1681.946,
   1681.011,
   774.6318,
   1546.973,
   551.3981,
   613.5211,
   392.7802,
   547.5982,
   282.0792,
   385.0235,
   271.217,
   27.40686};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1297,Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1297,Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1297,Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1297);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetMinimum(53.60487);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetMaximum(115882.3);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11297);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj1_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__298 = new TH1D("data_mc_ratio__298","",30,0,6);
   data_mc_ratio__298->SetBinContent(1,0.167147);
   data_mc_ratio__298->SetBinContent(2,0.1714789);
   data_mc_ratio__298->SetBinContent(3,0.2153021);
   data_mc_ratio__298->SetBinContent(4,0.2667688);
   data_mc_ratio__298->SetBinContent(5,0.2890616);
   data_mc_ratio__298->SetBinContent(6,0.2542478);
   data_mc_ratio__298->SetBinContent(7,0.2741296);
   data_mc_ratio__298->SetBinContent(8,0.2503818);
   data_mc_ratio__298->SetBinContent(9,0.3595691);
   data_mc_ratio__298->SetBinContent(10,0.2554442);
   data_mc_ratio__298->SetBinContent(11,0.250317);
   data_mc_ratio__298->SetBinContent(12,0.321724);
   data_mc_ratio__298->SetBinContent(13,0.3424037);
   data_mc_ratio__298->SetBinContent(14,0.2649576);
   data_mc_ratio__298->SetBinContent(15,0.2783707);
   data_mc_ratio__298->SetBinContent(16,0.4736747);
   data_mc_ratio__298->SetBinContent(17,0.3197769);
   data_mc_ratio__298->SetBinContent(18,0.2529146);
   data_mc_ratio__298->SetBinContent(19,0.2105902);
   data_mc_ratio__298->SetBinContent(20,0.2115952);
   data_mc_ratio__298->SetBinContent(21,0.3084099);
   data_mc_ratio__298->SetBinContent(22,0.2570478);
   data_mc_ratio__298->SetBinContent(23,0.4225683);
   data_mc_ratio__298->SetBinContent(24,0.3330721);
   data_mc_ratio__298->SetBinContent(25,0.4949355);
   data_mc_ratio__298->SetBinContent(26,0.2951001);
   data_mc_ratio__298->SetBinContent(27,0.429332);
   data_mc_ratio__298->SetBinContent(28,0.2769953);
   data_mc_ratio__298->SetBinContent(29,0.352229);
   data_mc_ratio__298->SetBinContent(30,0.6669133);
   data_mc_ratio__298->SetBinContent(31,0.114322);
   data_mc_ratio__298->SetBinError(1,0.02213916);
   data_mc_ratio__298->SetBinError(2,0.001424644);
   data_mc_ratio__298->SetBinError(3,0.001646023);
   data_mc_ratio__298->SetBinError(4,0.002377793);
   data_mc_ratio__298->SetBinError(5,0.002839127);
   data_mc_ratio__298->SetBinError(6,0.002775724);
   data_mc_ratio__298->SetBinError(7,0.003406717);
   data_mc_ratio__298->SetBinError(8,0.003457904);
   data_mc_ratio__298->SetBinError(9,0.005518785);
   data_mc_ratio__298->SetBinError(10,0.004330184);
   data_mc_ratio__298->SetBinError(11,0.004617326);
   data_mc_ratio__298->SetBinError(12,0.006366093);
   data_mc_ratio__298->SetBinError(13,0.007374186);
   data_mc_ratio__298->SetBinError(14,0.006015553);
   data_mc_ratio__298->SetBinError(15,0.006352913);
   data_mc_ratio__298->SetBinError(16,0.0115945);
   data_mc_ratio__298->SetBinError(17,0.008240139);
   data_mc_ratio__298->SetBinError(18,0.006961246);
   data_mc_ratio__298->SetBinError(19,0.005865589);
   data_mc_ratio__298->SetBinError(20,0.00598721);
   data_mc_ratio__298->SetBinError(21,0.009020303);
   data_mc_ratio__298->SetBinError(22,0.007821716);
   data_mc_ratio__298->SetBinError(23,0.01366684);
   data_mc_ratio__298->SetBinError(24,0.01175386);
   data_mc_ratio__298->SetBinError(25,0.01956404);
   data_mc_ratio__298->SetBinError(26,0.01280625);
   data_mc_ratio__298->SetBinError(27,0.0233872);
   data_mc_ratio__298->SetBinError(28,0.01806918);
   data_mc_ratio__298->SetBinError(29,0.02987567);
   data_mc_ratio__298->SetBinError(30,0.08757001);
   data_mc_ratio__298->SetBinError(31,0.06024879);
   data_mc_ratio__298->SetMinimum(0.4);
   data_mc_ratio__298->SetMaximum(1.6);
   data_mc_ratio__298->SetEntries(301.8275);
   data_mc_ratio__298->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__298->SetLineColor(ci);
   data_mc_ratio__298->SetLineWidth(2);
   data_mc_ratio__298->SetMarkerStyle(20);
   data_mc_ratio__298->SetMarkerSize(1.2);
   data_mc_ratio__298->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__298->GetXaxis()->SetRange(1,30);
   data_mc_ratio__298->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__298->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__298->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__298->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__298->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__298->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__298->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__298->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__298->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__298->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__298->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__298->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__298->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__298->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__298->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__298->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__298->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1298[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1298[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1298[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1298[30] = {
   0.7922841,
   0.2469493,
   0.06995475,
   0.06547025,
   0.09178053,
   0.09928082,
   0.1267415,
   0.1538006,
   0.1558485,
   0.1759315,
   0.1999719,
   0.1493191,
   0.1568243,
   0.2331356,
   0.2471514,
   0.1768104,
   0.1915578,
   0.3094982,
   0.2747877,
   0.2847829,
   0.2043663,
   0.3681908,
   0.2437274,
   0.2544792,
   0.3037514,
   0.3043245,
   0.3593639,
   0.4538284,
   0.6872698,
   0.3151379};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1298,Graph_from_mc_statistical_error_fy1298,Graph_from_mc_statistical_error_fex1298,Graph_from_mc_statistical_error_fey1298);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1298 = new TH1F("Graph_Graph_from_mc_statistical_error1298","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1298->SetMinimum(0.0492591);
   Graph_Graph_from_mc_statistical_error1298->SetMaximum(1.950741);
   Graph_Graph_from_mc_statistical_error1298->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1298->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1298->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1298->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1298->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1298->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1298->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1298);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_algo_16->cd();
   Z_dR_Bj1_algo_16->Modified();
   Z_dR_Bj1_algo_16->cd();
   Z_dR_Bj1_algo_16->SetSelected(Z_dR_Bj1_algo_16);
}
