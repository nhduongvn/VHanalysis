void Z_dR_both_18()
{
//=========Macro generated from canvas: Z_dR_both_18/Z_dR_both_18
//=========  (Tue Aug 22 09:22:42 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_18 = new TCanvas("Z_dR_both_18", "Z_dR_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_18->SetHighLightColor(2);
   Z_dR_both_18->Range(0,0,1,1);
   Z_dR_both_18->SetFillColor(0);
   Z_dR_both_18->SetFillStyle(4000);
   Z_dR_both_18->SetBorderMode(0);
   Z_dR_both_18->SetBorderSize(2);
   Z_dR_both_18->SetFrameFillStyle(1000);
   Z_dR_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-65.21691,6.314516,65161.69);
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
   st->SetMaximum(55846.67);
   
   TH1F *st_stack_211 = new TH1F("st_stack_211","",30,0,6);
   st_stack_211->SetMinimum(0.01);
   st_stack_211->SetMaximum(58639);
   st_stack_211->SetDirectory(0);
   st_stack_211->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_211->SetLineColor(ci);
   st_stack_211->GetXaxis()->SetRange(1,30);
   st_stack_211->GetXaxis()->SetLabelFont(42);
   st_stack_211->GetXaxis()->SetLabelSize(0.035);
   st_stack_211->GetXaxis()->SetTitleSize(0.035);
   st_stack_211->GetXaxis()->SetTitleFont(42);
   st_stack_211->GetYaxis()->SetTitle("Events/0.2");
   st_stack_211->GetYaxis()->SetLabelFont(42);
   st_stack_211->GetYaxis()->SetLabelSize(0.05);
   st_stack_211->GetYaxis()->SetTitleSize(0.057);
   st_stack_211->GetYaxis()->SetTitleOffset(1.2);
   st_stack_211->GetYaxis()->SetTitleFont(42);
   st_stack_211->GetZaxis()->SetLabelFont(42);
   st_stack_211->GetZaxis()->SetLabelSize(0.035);
   st_stack_211->GetZaxis()->SetTitleSize(0.035);
   st_stack_211->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_211);
   
   
   TH1D *VbbHcc_both_Z_dR_stack_1 = new TH1D("VbbHcc_both_Z_dR_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(3,17465.56);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(4,17498.27);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(5,15902.47);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(6,10283.88);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(7,8927.808);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(8,11769.7);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(9,6912.966);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(10,7723.023);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(11,7414.271);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(12,10033.18);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(13,8060.901);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(14,11384.94);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(15,11133.27);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(16,9291.705);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(17,11735.18);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(18,10186.09);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(19,8275.042);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(20,7927.523);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(21,5865.942);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(22,4873.183);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(23,2858.689);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(24,4691.261);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(25,3656.17);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(26,1484.77);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(27,1353.481);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(28,2170.763);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(29,1408.04);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(30,740.3329);
   VbbHcc_both_Z_dR_stack_1->SetBinContent(31,838.3969);
   VbbHcc_both_Z_dR_stack_1->SetBinError(3,1715.142);
   VbbHcc_both_Z_dR_stack_1->SetBinError(4,1891.133);
   VbbHcc_both_Z_dR_stack_1->SetBinError(5,3018.834);
   VbbHcc_both_Z_dR_stack_1->SetBinError(6,1400.646);
   VbbHcc_both_Z_dR_stack_1->SetBinError(7,1279.643);
   VbbHcc_both_Z_dR_stack_1->SetBinError(8,2672.539);
   VbbHcc_both_Z_dR_stack_1->SetBinError(9,1041.972);
   VbbHcc_both_Z_dR_stack_1->SetBinError(10,1205.134);
   VbbHcc_both_Z_dR_stack_1->SetBinError(11,1046.324);
   VbbHcc_both_Z_dR_stack_1->SetBinError(12,1797.433);
   VbbHcc_both_Z_dR_stack_1->SetBinError(13,1412.757);
   VbbHcc_both_Z_dR_stack_1->SetBinError(14,1794.902);
   VbbHcc_both_Z_dR_stack_1->SetBinError(15,1593.549);
   VbbHcc_both_Z_dR_stack_1->SetBinError(16,1264.311);
   VbbHcc_both_Z_dR_stack_1->SetBinError(17,1726.306);
   VbbHcc_both_Z_dR_stack_1->SetBinError(18,1553.728);
   VbbHcc_both_Z_dR_stack_1->SetBinError(19,1404.004);
   VbbHcc_both_Z_dR_stack_1->SetBinError(20,1430.531);
   VbbHcc_both_Z_dR_stack_1->SetBinError(21,1133.873);
   VbbHcc_both_Z_dR_stack_1->SetBinError(22,1040.691);
   VbbHcc_both_Z_dR_stack_1->SetBinError(23,674.9391);
   VbbHcc_both_Z_dR_stack_1->SetBinError(24,1133.936);
   VbbHcc_both_Z_dR_stack_1->SetBinError(25,995.0735);
   VbbHcc_both_Z_dR_stack_1->SetBinError(26,422.1946);
   VbbHcc_both_Z_dR_stack_1->SetBinError(27,417.4938);
   VbbHcc_both_Z_dR_stack_1->SetBinError(28,594.398);
   VbbHcc_both_Z_dR_stack_1->SetBinError(29,401.7536);
   VbbHcc_both_Z_dR_stack_1->SetBinError(30,142.4481);
   VbbHcc_both_Z_dR_stack_1->SetBinError(31,398.2219);
   VbbHcc_both_Z_dR_stack_1->SetEntries(9895);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_2 = new TH1D("VbbHcc_both_Z_dR_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(2,0.06997103);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(3,51.46314);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(4,72.39944);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(5,62.47306);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(6,74.5295);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(7,70.02485);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(8,67.82035);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(9,66.91841);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(10,62.78978);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(11,65.47408);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(12,64.49903);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(13,68.49383);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(14,60.48067);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(15,69.15139);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(16,60.25272);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(17,54.74976);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(18,49.28803);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(19,42.61598);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(20,37.89451);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(21,36.84396);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(22,32.43544);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(23,30.72576);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(24,20.69645);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(25,21.89466);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(26,21.20058);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(27,13.72535);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(28,19.32185);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(29,11.43672);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(30,9.238237);
   VbbHcc_both_Z_dR_stack_2->SetBinContent(31,6.740112);
   VbbHcc_both_Z_dR_stack_2->SetBinError(2,0.06997103);
   VbbHcc_both_Z_dR_stack_2->SetBinError(3,3.201212);
   VbbHcc_both_Z_dR_stack_2->SetBinError(4,3.800865);
   VbbHcc_both_Z_dR_stack_2->SetBinError(5,3.496462);
   VbbHcc_both_Z_dR_stack_2->SetBinError(6,3.962922);
   VbbHcc_both_Z_dR_stack_2->SetBinError(7,3.758181);
   VbbHcc_both_Z_dR_stack_2->SetBinError(8,3.702402);
   VbbHcc_both_Z_dR_stack_2->SetBinError(9,3.676766);
   VbbHcc_both_Z_dR_stack_2->SetBinError(10,3.578167);
   VbbHcc_both_Z_dR_stack_2->SetBinError(11,3.523436);
   VbbHcc_both_Z_dR_stack_2->SetBinError(12,3.524169);
   VbbHcc_both_Z_dR_stack_2->SetBinError(13,3.833706);
   VbbHcc_both_Z_dR_stack_2->SetBinError(14,3.409537);
   VbbHcc_both_Z_dR_stack_2->SetBinError(15,3.888276);
   VbbHcc_both_Z_dR_stack_2->SetBinError(16,3.33897);
   VbbHcc_both_Z_dR_stack_2->SetBinError(17,3.289206);
   VbbHcc_both_Z_dR_stack_2->SetBinError(18,3.091171);
   VbbHcc_both_Z_dR_stack_2->SetBinError(19,2.830158);
   VbbHcc_both_Z_dR_stack_2->SetBinError(20,2.688584);
   VbbHcc_both_Z_dR_stack_2->SetBinError(21,2.676467);
   VbbHcc_both_Z_dR_stack_2->SetBinError(22,2.468005);
   VbbHcc_both_Z_dR_stack_2->SetBinError(23,2.542216);
   VbbHcc_both_Z_dR_stack_2->SetBinError(24,1.987622);
   VbbHcc_both_Z_dR_stack_2->SetBinError(25,2.043157);
   VbbHcc_both_Z_dR_stack_2->SetBinError(26,2.12458);
   VbbHcc_both_Z_dR_stack_2->SetBinError(27,1.568696);
   VbbHcc_both_Z_dR_stack_2->SetBinError(28,2.983806);
   VbbHcc_both_Z_dR_stack_2->SetBinError(29,1.450643);
   VbbHcc_both_Z_dR_stack_2->SetBinError(30,1.33413);
   VbbHcc_both_Z_dR_stack_2->SetBinError(31,1.166561);
   VbbHcc_both_Z_dR_stack_2->SetEntries(14948);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_3 = new TH1D("VbbHcc_both_Z_dR_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(2,0.9268589);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(3,987.133);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(4,1468.547);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(5,1521.584);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(6,1581.605);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(7,1547.434);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(8,1494.411);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(9,1434.187);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(10,1398.279);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(11,1380.163);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(12,1371.275);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(13,1362.43);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(14,1357.59);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(15,1337.924);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(16,1291.727);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(17,1206.366);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(18,1100.332);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(19,983.5517);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(20,890.4102);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(21,783.9124);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(22,698.8023);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(23,601.8259);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(24,524.7978);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(25,446.2749);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(26,396.003);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(27,346.257);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(28,274.9723);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(29,219.8354);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(30,143.5753);
   VbbHcc_both_Z_dR_stack_3->SetBinContent(31,108.9596);
   VbbHcc_both_Z_dR_stack_3->SetBinError(2,0.2715363);
   VbbHcc_both_Z_dR_stack_3->SetBinError(3,8.942013);
   VbbHcc_both_Z_dR_stack_3->SetBinError(4,11.38432);
   VbbHcc_both_Z_dR_stack_3->SetBinError(5,11.20904);
   VbbHcc_both_Z_dR_stack_3->SetBinError(6,11.35333);
   VbbHcc_both_Z_dR_stack_3->SetBinError(7,11.44311);
   VbbHcc_both_Z_dR_stack_3->SetBinError(8,11.58);
   VbbHcc_both_Z_dR_stack_3->SetBinError(9,11.34435);
   VbbHcc_both_Z_dR_stack_3->SetBinError(10,10.75575);
   VbbHcc_both_Z_dR_stack_3->SetBinError(11,10.58047);
   VbbHcc_both_Z_dR_stack_3->SetBinError(12,10.73671);
   VbbHcc_both_Z_dR_stack_3->SetBinError(13,10.50443);
   VbbHcc_both_Z_dR_stack_3->SetBinError(14,10.6327);
   VbbHcc_both_Z_dR_stack_3->SetBinError(15,10.50309);
   VbbHcc_both_Z_dR_stack_3->SetBinError(16,10.63773);
   VbbHcc_both_Z_dR_stack_3->SetBinError(17,10.32802);
   VbbHcc_both_Z_dR_stack_3->SetBinError(18,10.30944);
   VbbHcc_both_Z_dR_stack_3->SetBinError(19,8.993357);
   VbbHcc_both_Z_dR_stack_3->SetBinError(20,8.973221);
   VbbHcc_both_Z_dR_stack_3->SetBinError(21,8.238356);
   VbbHcc_both_Z_dR_stack_3->SetBinError(22,7.621236);
   VbbHcc_both_Z_dR_stack_3->SetBinError(23,6.854797);
   VbbHcc_both_Z_dR_stack_3->SetBinError(24,6.518016);
   VbbHcc_both_Z_dR_stack_3->SetBinError(25,5.91307);
   VbbHcc_both_Z_dR_stack_3->SetBinError(26,5.774359);
   VbbHcc_both_Z_dR_stack_3->SetBinError(27,6.851695);
   VbbHcc_both_Z_dR_stack_3->SetBinError(28,5.57221);
   VbbHcc_both_Z_dR_stack_3->SetBinError(29,4.688475);
   VbbHcc_both_Z_dR_stack_3->SetBinError(30,3.437189);
   VbbHcc_both_Z_dR_stack_3->SetBinError(31,2.957544);
   VbbHcc_both_Z_dR_stack_3->SetEntries(416844);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_4 = new TH1D("VbbHcc_both_Z_dR_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(3,196.6262);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(4,300.5432);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(5,275.8672);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(6,239.8056);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(7,182.0201);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(8,152.8169);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(9,138.2605);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(10,119.0207);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(11,136.6385);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(12,143.7208);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(13,149.5282);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(14,172.7609);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(15,156.1639);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(16,168.5169);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(17,132.498);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(18,133.9356);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(19,128.0737);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(20,119.9552);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(21,89.404);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(22,81.05034);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(23,61.92886);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(24,52.30417);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(25,52.83733);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(26,62.44351);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(27,36.00813);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(28,34.16405);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(29,37.65808);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(30,29.5636);
   VbbHcc_both_Z_dR_stack_4->SetBinContent(31,12.04985);
   VbbHcc_both_Z_dR_stack_4->SetBinError(3,6.388923);
   VbbHcc_both_Z_dR_stack_4->SetBinError(4,9.999607);
   VbbHcc_both_Z_dR_stack_4->SetBinError(5,11.81124);
   VbbHcc_both_Z_dR_stack_4->SetBinError(6,17.09893);
   VbbHcc_both_Z_dR_stack_4->SetBinError(7,10.61138);
   VbbHcc_both_Z_dR_stack_4->SetBinError(8,7.294309);
   VbbHcc_both_Z_dR_stack_4->SetBinError(9,8.936213);
   VbbHcc_both_Z_dR_stack_4->SetBinError(10,7.493478);
   VbbHcc_both_Z_dR_stack_4->SetBinError(11,13.54804);
   VbbHcc_both_Z_dR_stack_4->SetBinError(12,8.054205);
   VbbHcc_both_Z_dR_stack_4->SetBinError(13,13.21642);
   VbbHcc_both_Z_dR_stack_4->SetBinError(14,12.01737);
   VbbHcc_both_Z_dR_stack_4->SetBinError(15,9.134097);
   VbbHcc_both_Z_dR_stack_4->SetBinError(16,11.96617);
   VbbHcc_both_Z_dR_stack_4->SetBinError(17,7.868732);
   VbbHcc_both_Z_dR_stack_4->SetBinError(18,7.932644);
   VbbHcc_both_Z_dR_stack_4->SetBinError(19,12.52476);
   VbbHcc_both_Z_dR_stack_4->SetBinError(20,11.03651);
   VbbHcc_both_Z_dR_stack_4->SetBinError(21,5.417019);
   VbbHcc_both_Z_dR_stack_4->SetBinError(22,5.298279);
   VbbHcc_both_Z_dR_stack_4->SetBinError(23,4.750456);
   VbbHcc_both_Z_dR_stack_4->SetBinError(24,6.121913);
   VbbHcc_both_Z_dR_stack_4->SetBinError(25,4.457371);
   VbbHcc_both_Z_dR_stack_4->SetBinError(26,9.327593);
   VbbHcc_both_Z_dR_stack_4->SetBinError(27,3.509195);
   VbbHcc_both_Z_dR_stack_4->SetBinError(28,3.371168);
   VbbHcc_both_Z_dR_stack_4->SetBinError(29,5.72763);
   VbbHcc_both_Z_dR_stack_4->SetBinError(30,6.996374);
   VbbHcc_both_Z_dR_stack_4->SetBinError(31,1.910901);
   VbbHcc_both_Z_dR_stack_4->SetEntries(18425);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_5 = new TH1D("VbbHcc_both_Z_dR_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(3,34.27658);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(4,32.43346);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(5,13.91769);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(6,22.25221);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(7,11.21896);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(8,21.41716);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(9,19.36474);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(10,11.3476);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(11,19.36677);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(12,11.63524);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(13,13.09627);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(14,12.82739);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(15,17.61984);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(16,22.0652);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(17,12.75104);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(18,7.956756);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(19,8.137892);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(20,9.347121);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(21,10.64996);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(22,4.529726);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(23,7.460709);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(24,3.358575);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(25,2.223963);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(26,7.930268);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(27,1.993305);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(28,2.871073);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(29,3.867578);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(30,3.674017);
   VbbHcc_both_Z_dR_stack_5->SetBinContent(31,1.207632);
   VbbHcc_both_Z_dR_stack_5->SetBinError(3,4.427407);
   VbbHcc_both_Z_dR_stack_5->SetBinError(4,5.118659);
   VbbHcc_both_Z_dR_stack_5->SetBinError(5,2.681812);
   VbbHcc_both_Z_dR_stack_5->SetBinError(6,8.944399);
   VbbHcc_both_Z_dR_stack_5->SetBinError(7,1.462528);
   VbbHcc_both_Z_dR_stack_5->SetBinError(8,5.146199);
   VbbHcc_both_Z_dR_stack_5->SetBinError(9,3.960684);
   VbbHcc_both_Z_dR_stack_5->SetBinError(10,3.504199);
   VbbHcc_both_Z_dR_stack_5->SetBinError(11,4.814668);
   VbbHcc_both_Z_dR_stack_5->SetBinError(12,2.619696);
   VbbHcc_both_Z_dR_stack_5->SetBinError(13,3.683362);
   VbbHcc_both_Z_dR_stack_5->SetBinError(14,3.351872);
   VbbHcc_both_Z_dR_stack_5->SetBinError(15,4.090694);
   VbbHcc_both_Z_dR_stack_5->SetBinError(16,4.990922);
   VbbHcc_both_Z_dR_stack_5->SetBinError(17,3.122254);
   VbbHcc_both_Z_dR_stack_5->SetBinError(18,1.266644);
   VbbHcc_both_Z_dR_stack_5->SetBinError(19,1.408482);
   VbbHcc_both_Z_dR_stack_5->SetBinError(20,3.064207);
   VbbHcc_both_Z_dR_stack_5->SetBinError(21,2.698741);
   VbbHcc_both_Z_dR_stack_5->SetBinError(22,1.004904);
   VbbHcc_both_Z_dR_stack_5->SetBinError(23,2.675645);
   VbbHcc_both_Z_dR_stack_5->SetBinError(24,0.8388104);
   VbbHcc_both_Z_dR_stack_5->SetBinError(25,0.6492896);
   VbbHcc_both_Z_dR_stack_5->SetBinError(26,3.564882);
   VbbHcc_both_Z_dR_stack_5->SetBinError(27,0.5464366);
   VbbHcc_both_Z_dR_stack_5->SetBinError(28,0.7634759);
   VbbHcc_both_Z_dR_stack_5->SetBinError(29,1.125172);
   VbbHcc_both_Z_dR_stack_5->SetBinError(30,1.022171);
   VbbHcc_both_Z_dR_stack_5->SetBinError(31,0.5518057);
   VbbHcc_both_Z_dR_stack_5->SetEntries(2210);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_6 = new TH1D("VbbHcc_both_Z_dR_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(4,0.6225638);
   VbbHcc_both_Z_dR_stack_6->SetBinContent(9,0.4278565);
   VbbHcc_both_Z_dR_stack_6->SetBinError(4,0.6225638);
   VbbHcc_both_Z_dR_stack_6->SetBinError(9,0.4278565);
   VbbHcc_both_Z_dR_stack_6->SetEntries(2);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_7 = new TH1D("VbbHcc_both_Z_dR_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(3,2.161388);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(4,2.336919);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(5,1.702794);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(6,0.8133779);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(7,0.8515815);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(9,0.7819011);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(10,0.6196682);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(12,1.332672);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(13,0.3453961);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(14,0.8114295);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(21,0.2680755);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(26,0.4394432);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(27,0.4536609);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(28,0.3759891);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(29,0.3354616);
   VbbHcc_both_Z_dR_stack_7->SetBinError(3,0.9351062);
   VbbHcc_both_Z_dR_stack_7->SetBinError(4,0.9725588);
   VbbHcc_both_Z_dR_stack_7->SetBinError(5,0.8692755);
   VbbHcc_both_Z_dR_stack_7->SetBinError(6,0.5811439);
   VbbHcc_both_Z_dR_stack_7->SetBinError(7,0.6121679);
   VbbHcc_both_Z_dR_stack_7->SetBinError(9,0.5567977);
   VbbHcc_both_Z_dR_stack_7->SetBinError(10,0.6196682);
   VbbHcc_both_Z_dR_stack_7->SetBinError(12,1.031898);
   VbbHcc_both_Z_dR_stack_7->SetBinError(13,0.3453961);
   VbbHcc_both_Z_dR_stack_7->SetBinError(14,0.5803019);
   VbbHcc_both_Z_dR_stack_7->SetBinError(21,0.2680755);
   VbbHcc_both_Z_dR_stack_7->SetBinError(26,0.4394432);
   VbbHcc_both_Z_dR_stack_7->SetBinError(27,0.4536609);
   VbbHcc_both_Z_dR_stack_7->SetBinError(28,0.3759891);
   VbbHcc_both_Z_dR_stack_7->SetBinError(29,0.3354616);
   VbbHcc_both_Z_dR_stack_7->SetEntries(33);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_8 = new TH1D("VbbHcc_both_Z_dR_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(3,5.261443);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(4,7.087223);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(5,9.514929);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(6,3.813893);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(7,2.800758);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(8,2.201439);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(9,1.836073);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(10,0.4195403);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(11,0.9135046);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(12,1.278358);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(13,1.919025);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(14,4.112732);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(15,5.33397);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(16,2.719525);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(17,2.23839);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(18,2.328543);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(19,2.053947);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(20,2.341896);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(21,1.711001);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(22,0.7767488);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(23,2.076326);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(24,0.6100766);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(25,0.5555366);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(26,1.169668);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(27,0.267111);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(28,2.060951);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(29,0.2743643);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(30,0.56251);
   VbbHcc_both_Z_dR_stack_8->SetBinContent(31,0.3107587);
   VbbHcc_both_Z_dR_stack_8->SetBinError(3,1.229251);
   VbbHcc_both_Z_dR_stack_8->SetBinError(4,1.518071);
   VbbHcc_both_Z_dR_stack_8->SetBinError(5,1.747828);
   VbbHcc_both_Z_dR_stack_8->SetBinError(6,1.070731);
   VbbHcc_both_Z_dR_stack_8->SetBinError(7,0.9551456);
   VbbHcc_both_Z_dR_stack_8->SetBinError(8,0.8389019);
   VbbHcc_both_Z_dR_stack_8->SetBinError(9,0.7578188);
   VbbHcc_both_Z_dR_stack_8->SetBinError(10,0.3215047);
   VbbHcc_both_Z_dR_stack_8->SetBinError(11,0.464575);
   VbbHcc_both_Z_dR_stack_8->SetBinError(12,0.6280418);
   VbbHcc_both_Z_dR_stack_8->SetBinError(13,0.7920714);
   VbbHcc_both_Z_dR_stack_8->SetBinError(14,1.090606);
   VbbHcc_both_Z_dR_stack_8->SetBinError(15,1.317408);
   VbbHcc_both_Z_dR_stack_8->SetBinError(16,0.9452787);
   VbbHcc_both_Z_dR_stack_8->SetBinError(17,0.7921278);
   VbbHcc_both_Z_dR_stack_8->SetBinError(18,0.837953);
   VbbHcc_both_Z_dR_stack_8->SetBinError(19,0.7968543);
   VbbHcc_both_Z_dR_stack_8->SetBinError(20,0.8968654);
   VbbHcc_both_Z_dR_stack_8->SetBinError(21,0.7115734);
   VbbHcc_both_Z_dR_stack_8->SetBinError(22,0.4502151);
   VbbHcc_both_Z_dR_stack_8->SetBinError(23,0.8587455);
   VbbHcc_both_Z_dR_stack_8->SetBinError(24,0.4326865);
   VbbHcc_both_Z_dR_stack_8->SetBinError(25,0.450279);
   VbbHcc_both_Z_dR_stack_8->SetBinError(26,0.5866045);
   VbbHcc_both_Z_dR_stack_8->SetBinError(27,0.267111);
   VbbHcc_both_Z_dR_stack_8->SetBinError(28,0.7887783);
   VbbHcc_both_Z_dR_stack_8->SetBinError(29,0.2743643);
   VbbHcc_both_Z_dR_stack_8->SetBinError(30,0.3983122);
   VbbHcc_both_Z_dR_stack_8->SetBinError(31,0.3107587);
   VbbHcc_both_Z_dR_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_9 = new TH1D("VbbHcc_both_Z_dR_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(3,4.003231);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(4,7.449632);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(5,7.177636);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(6,5.354062);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(7,3.332937);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(8,1.905862);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(9,1.351628);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(10,1.370501);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(11,1.699272);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(12,2.018604);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(13,2.536416);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(14,3.249178);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(15,3.211653);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(16,3.512672);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(17,3.30382);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(18,2.89202);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(19,2.48329);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(20,1.774618);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(21,1.270848);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(22,0.9422794);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(23,0.8500748);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(24,0.5147588);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(25,0.4821225);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(26,0.6236957);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(27,0.63146);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(28,0.7785836);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(29,0.6600351);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(30,0.4077598);
   VbbHcc_both_Z_dR_stack_9->SetBinContent(31,0.1879569);
   VbbHcc_both_Z_dR_stack_9->SetBinError(3,0.1137971);
   VbbHcc_both_Z_dR_stack_9->SetBinError(4,0.1656839);
   VbbHcc_both_Z_dR_stack_9->SetBinError(5,0.1540699);
   VbbHcc_both_Z_dR_stack_9->SetBinError(6,0.1388812);
   VbbHcc_both_Z_dR_stack_9->SetBinError(7,0.1143611);
   VbbHcc_both_Z_dR_stack_9->SetBinError(8,0.08008395);
   VbbHcc_both_Z_dR_stack_9->SetBinError(9,0.06598927);
   VbbHcc_both_Z_dR_stack_9->SetBinError(10,0.06645187);
   VbbHcc_both_Z_dR_stack_9->SetBinError(11,0.07866908);
   VbbHcc_both_Z_dR_stack_9->SetBinError(12,0.09058297);
   VbbHcc_both_Z_dR_stack_9->SetBinError(13,0.09411791);
   VbbHcc_both_Z_dR_stack_9->SetBinError(14,0.1109116);
   VbbHcc_both_Z_dR_stack_9->SetBinError(15,0.1059567);
   VbbHcc_both_Z_dR_stack_9->SetBinError(16,0.1192712);
   VbbHcc_both_Z_dR_stack_9->SetBinError(17,0.1137861);
   VbbHcc_both_Z_dR_stack_9->SetBinError(18,0.1004498);
   VbbHcc_both_Z_dR_stack_9->SetBinError(19,0.09691471);
   VbbHcc_both_Z_dR_stack_9->SetBinError(20,0.07772138);
   VbbHcc_both_Z_dR_stack_9->SetBinError(21,0.06796544);
   VbbHcc_both_Z_dR_stack_9->SetBinError(22,0.055651);
   VbbHcc_both_Z_dR_stack_9->SetBinError(23,0.129126);
   VbbHcc_both_Z_dR_stack_9->SetBinError(24,0.04663556);
   VbbHcc_both_Z_dR_stack_9->SetBinError(25,0.0391534);
   VbbHcc_both_Z_dR_stack_9->SetBinError(26,0.04446716);
   VbbHcc_both_Z_dR_stack_9->SetBinError(27,0.04676145);
   VbbHcc_both_Z_dR_stack_9->SetBinError(28,0.05544239);
   VbbHcc_both_Z_dR_stack_9->SetBinError(29,0.0465127);
   VbbHcc_both_Z_dR_stack_9->SetBinError(30,0.03693831);
   VbbHcc_both_Z_dR_stack_9->SetBinError(31,0.0236635);
   VbbHcc_both_Z_dR_stack_9->SetEntries(22331);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_10 = new TH1D("VbbHcc_both_Z_dR_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(3,1.001354);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(4,2.043954);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(5,2.424021);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(6,2.155803);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(7,1.590134);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(8,1.102657);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(9,0.8283363);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(10,0.7553932);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(11,0.7404301);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(12,0.8030714);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(13,0.8890586);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(14,0.9037512);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(15,0.9190647);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(16,0.8976781);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(17,0.864371);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(18,0.7939718);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(19,0.6725616);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(20,0.5806475);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(21,0.480762);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(22,0.4071915);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(23,0.302036);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(24,0.2734542);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(25,0.2737926);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(26,0.2874091);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(27,0.3116776);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(28,0.2589674);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(29,0.2108001);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(30,0.1293127);
   VbbHcc_both_Z_dR_stack_10->SetBinContent(31,0.06742194);
   VbbHcc_both_Z_dR_stack_10->SetBinError(3,0.02443691);
   VbbHcc_both_Z_dR_stack_10->SetBinError(4,0.03429184);
   VbbHcc_both_Z_dR_stack_10->SetBinError(5,0.03692806);
   VbbHcc_both_Z_dR_stack_10->SetBinError(6,0.03451013);
   VbbHcc_both_Z_dR_stack_10->SetBinError(7,0.02954254);
   VbbHcc_both_Z_dR_stack_10->SetBinError(8,0.02461778);
   VbbHcc_both_Z_dR_stack_10->SetBinError(9,0.02137729);
   VbbHcc_both_Z_dR_stack_10->SetBinError(10,0.02049937);
   VbbHcc_both_Z_dR_stack_10->SetBinError(11,0.02030878);
   VbbHcc_both_Z_dR_stack_10->SetBinError(12,0.02113457);
   VbbHcc_both_Z_dR_stack_10->SetBinError(13,0.02219585);
   VbbHcc_both_Z_dR_stack_10->SetBinError(14,0.02239692);
   VbbHcc_both_Z_dR_stack_10->SetBinError(15,0.02263969);
   VbbHcc_both_Z_dR_stack_10->SetBinError(16,0.02235706);
   VbbHcc_both_Z_dR_stack_10->SetBinError(17,0.02193577);
   VbbHcc_both_Z_dR_stack_10->SetBinError(18,0.02099276);
   VbbHcc_both_Z_dR_stack_10->SetBinError(19,0.01934416);
   VbbHcc_both_Z_dR_stack_10->SetBinError(20,0.01793475);
   VbbHcc_both_Z_dR_stack_10->SetBinError(21,0.01637746);
   VbbHcc_both_Z_dR_stack_10->SetBinError(22,0.01507608);
   VbbHcc_both_Z_dR_stack_10->SetBinError(23,0.01294025);
   VbbHcc_both_Z_dR_stack_10->SetBinError(24,0.01228391);
   VbbHcc_both_Z_dR_stack_10->SetBinError(25,0.0123363);
   VbbHcc_both_Z_dR_stack_10->SetBinError(26,0.01254998);
   VbbHcc_both_Z_dR_stack_10->SetBinError(27,0.01314546);
   VbbHcc_both_Z_dR_stack_10->SetBinError(28,0.01204659);
   VbbHcc_both_Z_dR_stack_10->SetBinError(29,0.01096719);
   VbbHcc_both_Z_dR_stack_10->SetBinError(30,0.008586922);
   VbbHcc_both_Z_dR_stack_10->SetBinError(31,0.006204722);
   VbbHcc_both_Z_dR_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_11 = new TH1D("VbbHcc_both_Z_dR_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(3,0.03197139);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(4,0.03933641);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(5,0.03179839);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(6,0.01868695);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(7,0.008942432);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(8,0.004693953);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(9,0.002141222);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(11,0.00459408);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(12,0.001009086);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(13,0.009137762);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(14,0.004487402);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(15,0.007386181);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(16,0.004208021);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(17,0.004715082);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(23,0.009935369);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(27,0.002219202);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(29,0.00281116);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(30,0.002200582);
   VbbHcc_both_Z_dR_stack_11->SetBinError(3,0.008661162);
   VbbHcc_both_Z_dR_stack_11->SetBinError(4,0.009637722);
   VbbHcc_both_Z_dR_stack_11->SetBinError(5,0.008888716);
   VbbHcc_both_Z_dR_stack_11->SetBinError(6,0.006588966);
   VbbHcc_both_Z_dR_stack_11->SetBinError(7,0.004483448);
   VbbHcc_both_Z_dR_stack_11->SetBinError(8,0.003319966);
   VbbHcc_both_Z_dR_stack_11->SetBinError(9,0.002141222);
   VbbHcc_both_Z_dR_stack_11->SetBinError(11,0.003251213);
   VbbHcc_both_Z_dR_stack_11->SetBinError(12,0.001009086);
   VbbHcc_both_Z_dR_stack_11->SetBinError(13,0.004571245);
   VbbHcc_both_Z_dR_stack_11->SetBinError(14,0.003173589);
   VbbHcc_both_Z_dR_stack_11->SetBinError(15,0.004298464);
   VbbHcc_both_Z_dR_stack_11->SetBinError(16,0.003070892);
   VbbHcc_both_Z_dR_stack_11->SetBinError(17,0.003352817);
   VbbHcc_both_Z_dR_stack_11->SetBinError(23,0.005004397);
   VbbHcc_both_Z_dR_stack_11->SetBinError(27,0.002219202);
   VbbHcc_both_Z_dR_stack_11->SetBinError(29,0.00281116);
   VbbHcc_both_Z_dR_stack_11->SetBinError(30,0.002200582);
   VbbHcc_both_Z_dR_stack_11->SetEntries(84);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_stack_12 = new TH1D("VbbHcc_both_Z_dR_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(3,0.008028019);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(4,0.01375403);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(5,0.01727159);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(6,0.01098661);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(7,0.007107971);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(8,0.003134197);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(9,0.002968989);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(10,0.00250144);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(11,0.003498508);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(12,0.002970447);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(13,0.002579795);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(14,0.002435342);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(15,0.002103628);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(16,0.001835306);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(17,0.001962237);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(18,0.002540538);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(19,0.001614731);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(20,0.003459467);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(21,0.001642522);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(22,0.001005247);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(23,0.001835617);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(25,0.0006216417);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(26,0.001285301);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(27,0.001362645);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(28,0.003155836);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(29,0.0006203983);
   VbbHcc_both_Z_dR_stack_12->SetBinContent(30,0.0003203421);
   VbbHcc_both_Z_dR_stack_12->SetBinError(3,0.001623652);
   VbbHcc_both_Z_dR_stack_12->SetBinError(4,0.00216197);
   VbbHcc_both_Z_dR_stack_12->SetBinError(5,0.002364733);
   VbbHcc_both_Z_dR_stack_12->SetBinError(6,0.001906441);
   VbbHcc_both_Z_dR_stack_12->SetBinError(7,0.001591795);
   VbbHcc_both_Z_dR_stack_12->SetBinError(8,0.001001973);
   VbbHcc_both_Z_dR_stack_12->SetBinError(9,0.001002991);
   VbbHcc_both_Z_dR_stack_12->SetBinError(10,0.0008943992);
   VbbHcc_both_Z_dR_stack_12->SetBinError(11,0.001125301);
   VbbHcc_both_Z_dR_stack_12->SetBinError(12,0.0009506498);
   VbbHcc_both_Z_dR_stack_12->SetBinError(13,0.0009208944);
   VbbHcc_both_Z_dR_stack_12->SetBinError(14,0.0008711787);
   VbbHcc_both_Z_dR_stack_12->SetBinError(15,0.0007679647);
   VbbHcc_both_Z_dR_stack_12->SetBinError(16,0.0007806327);
   VbbHcc_both_Z_dR_stack_12->SetBinError(17,0.0008064967);
   VbbHcc_both_Z_dR_stack_12->SetBinError(18,0.0008787864);
   VbbHcc_both_Z_dR_stack_12->SetBinError(19,0.0007275933);
   VbbHcc_both_Z_dR_stack_12->SetBinError(20,0.001019933);
   VbbHcc_both_Z_dR_stack_12->SetBinError(21,0.0007389747);
   VbbHcc_both_Z_dR_stack_12->SetBinError(22,0.0005105052);
   VbbHcc_both_Z_dR_stack_12->SetBinError(23,0.0007716817);
   VbbHcc_both_Z_dR_stack_12->SetBinError(25,0.0003796343);
   VbbHcc_both_Z_dR_stack_12->SetBinError(26,0.0005922807);
   VbbHcc_both_Z_dR_stack_12->SetBinError(27,0.0006851489);
   VbbHcc_both_Z_dR_stack_12->SetBinError(28,0.001004983);
   VbbHcc_both_Z_dR_stack_12->SetBinError(29,0.0004392657);
   VbbHcc_both_Z_dR_stack_12->SetBinError(30,0.0003203421);
   VbbHcc_both_Z_dR_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR__579 = new TH1D("VbbHcc_both_Z_dR__579","",30,0,6);
   VbbHcc_both_Z_dR__579->SetBinContent(2,19);
   VbbHcc_both_Z_dR__579->SetBinContent(3,22324);
   VbbHcc_both_Z_dR__579->SetBinContent(4,25131);
   VbbHcc_both_Z_dR__579->SetBinContent(5,19128);
   VbbHcc_both_Z_dR__579->SetBinContent(6,16892);
   VbbHcc_both_Z_dR__579->SetBinContent(7,15242);
   VbbHcc_both_Z_dR__579->SetBinContent(8,14099);
   VbbHcc_both_Z_dR__579->SetBinContent(9,13598);
   VbbHcc_both_Z_dR__579->SetBinContent(10,13070);
   VbbHcc_both_Z_dR__579->SetBinContent(11,13134);
   VbbHcc_both_Z_dR__579->SetBinContent(12,13278);
   VbbHcc_both_Z_dR__579->SetBinContent(13,13660);
   VbbHcc_both_Z_dR__579->SetBinContent(14,14089);
   VbbHcc_both_Z_dR__579->SetBinContent(15,14585);
   VbbHcc_both_Z_dR__579->SetBinContent(16,14397);
   VbbHcc_both_Z_dR__579->SetBinContent(17,13551);
   VbbHcc_both_Z_dR__579->SetBinContent(18,12418);
   VbbHcc_both_Z_dR__579->SetBinContent(19,11212);
   VbbHcc_both_Z_dR__579->SetBinContent(20,10009);
   VbbHcc_both_Z_dR__579->SetBinContent(21,8596);
   VbbHcc_both_Z_dR__579->SetBinContent(22,7334);
   VbbHcc_both_Z_dR__579->SetBinContent(23,6019);
   VbbHcc_both_Z_dR__579->SetBinContent(24,5407);
   VbbHcc_both_Z_dR__579->SetBinContent(25,4573);
   VbbHcc_both_Z_dR__579->SetBinContent(26,3976);
   VbbHcc_both_Z_dR__579->SetBinContent(27,3529);
   VbbHcc_both_Z_dR__579->SetBinContent(28,3311);
   VbbHcc_both_Z_dR__579->SetBinContent(29,3132);
   VbbHcc_both_Z_dR__579->SetBinContent(30,2129);
   VbbHcc_both_Z_dR__579->SetBinContent(31,1580);
   VbbHcc_both_Z_dR__579->SetEntries(319451);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR__579->SetLineColor(ci);
   VbbHcc_both_Z_dR__579->SetLineWidth(2);
   VbbHcc_both_Z_dR__579->SetMarkerStyle(20);
   VbbHcc_both_Z_dR__579->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR__579->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR__579->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__579->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__579->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__579->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__579->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__579->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__579->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__579->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR__579->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__579->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__579->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR__579->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR__579->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__579->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_fx1421[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fy1421[30] = {
   0,
   0.9968299,
   18747.53,
   19391.78,
   17797.18,
   12214.24,
   10747.1,
   13511.38,
   8576.927,
   9317.627,
   9019.275,
   11629.75,
   9660.151,
   12997.68,
   12723.6,
   10841.4,
   13147.96,
   11483.62,
   9442.632,
   8989.83,
   6790.484,
   5692.128,
   3563.87,
   5293.817,
   4180.713,
   1974.869,
   1753.132,
   2505.57,
   1682.322,
   927.4861};
   Double_t Graph_from_VbbHcc_both_Z_dR_fex1421[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_Z_dR_fey1421[30] = {
   0,
   0.2804067,
   1715.186,
   1891.206,
   3018.882,
   1400.831,
   1279.745,
   2672.581,
   1042.086,
   1205.216,
   1046.482,
   1797.489,
   1412.868,
   1794.981,
   1593.621,
   1264.427,
   1726.361,
   1553.787,
   1404.093,
   1430.608,
   1133.923,
   1040.736,
   675.0013,
   1133.973,
   995.1035,
   422.3582,
   417.5684,
   594.4423,
   401.8262,
   142.6717};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_fx1421,Graph_from_VbbHcc_both_Z_dR_fy1421,Graph_from_VbbHcc_both_Z_dR_fex1421,Graph_from_VbbHcc_both_Z_dR_fey1421);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR1421 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR1421","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->SetMaximum(23411.29);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR1421->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR1421->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR1421);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_both_18->cd();
  
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
   
   TH1D *data_mc_ratio__580 = new TH1D("data_mc_ratio__580","",30,0,6);
   data_mc_ratio__580->SetBinContent(2,19.06042);
   data_mc_ratio__580->SetBinContent(3,1.19077);
   data_mc_ratio__580->SetBinContent(4,1.295961);
   data_mc_ratio__580->SetBinContent(5,1.074777);
   data_mc_ratio__580->SetBinContent(6,1.382976);
   data_mc_ratio__580->SetBinContent(7,1.418243);
   data_mc_ratio__580->SetBinContent(8,1.043491);
   data_mc_ratio__580->SetBinContent(9,1.585416);
   data_mc_ratio__580->SetBinContent(10,1.402718);
   data_mc_ratio__580->SetBinContent(11,1.456215);
   data_mc_ratio__580->SetBinContent(12,1.141727);
   data_mc_ratio__580->SetBinContent(13,1.414057);
   data_mc_ratio__580->SetBinContent(14,1.083963);
   data_mc_ratio__580->SetBinContent(15,1.146295);
   data_mc_ratio__580->SetBinContent(16,1.327965);
   data_mc_ratio__580->SetBinContent(17,1.030654);
   data_mc_ratio__580->SetBinContent(18,1.081366);
   data_mc_ratio__580->SetBinContent(19,1.187381);
   data_mc_ratio__580->SetBinContent(20,1.113369);
   data_mc_ratio__580->SetBinContent(21,1.265889);
   data_mc_ratio__580->SetBinContent(22,1.288446);
   data_mc_ratio__580->SetBinContent(23,1.688894);
   data_mc_ratio__580->SetBinContent(24,1.02138);
   data_mc_ratio__580->SetBinContent(25,1.093833);
   data_mc_ratio__580->SetBinContent(26,2.013298);
   data_mc_ratio__580->SetBinContent(27,2.012969);
   data_mc_ratio__580->SetBinContent(28,1.321456);
   data_mc_ratio__580->SetBinContent(29,1.861713);
   data_mc_ratio__580->SetBinContent(30,2.295452);
   data_mc_ratio__580->SetBinContent(31,1.632366);
   data_mc_ratio__580->SetBinError(2,4.372761);
   data_mc_ratio__580->SetBinError(3,0.007969701);
   data_mc_ratio__580->SetBinError(4,0.008174988);
   data_mc_ratio__580->SetBinError(5,0.00777112);
   data_mc_ratio__580->SetBinError(6,0.01064079);
   data_mc_ratio__580->SetBinError(7,0.01148761);
   data_mc_ratio__580->SetBinError(8,0.008788088);
   data_mc_ratio__580->SetBinError(9,0.01359583);
   data_mc_ratio__580->SetBinError(10,0.01226966);
   data_mc_ratio__580->SetBinError(11,0.01270653);
   data_mc_ratio__580->SetBinError(12,0.009908226);
   data_mc_ratio__580->SetBinError(13,0.01209878);
   data_mc_ratio__580->SetBinError(14,0.009132174);
   data_mc_ratio__580->SetBinError(15,0.009491682);
   data_mc_ratio__580->SetBinError(16,0.01106752);
   data_mc_ratio__580->SetBinError(17,0.008853753);
   data_mc_ratio__580->SetBinError(18,0.009703912);
   data_mc_ratio__580->SetBinError(19,0.01121369);
   data_mc_ratio__580->SetBinError(20,0.01112869);
   data_mc_ratio__580->SetBinError(21,0.01365361);
   data_mc_ratio__580->SetBinError(22,0.01504513);
   data_mc_ratio__580->SetBinError(23,0.02176909);
   data_mc_ratio__580->SetBinError(24,0.01389023);
   data_mc_ratio__580->SetBinError(25,0.01617522);
   data_mc_ratio__580->SetBinError(26,0.03192897);
   data_mc_ratio__580->SetBinError(27,0.03388529);
   data_mc_ratio__580->SetBinError(28,0.02296535);
   data_mc_ratio__580->SetBinError(29,0.03326609);
   data_mc_ratio__580->SetBinError(30,0.04974855);
   data_mc_ratio__580->SetBinError(31,0.6728726);
   data_mc_ratio__580->SetMinimum(0.4);
   data_mc_ratio__580->SetMaximum(1.6);
   data_mc_ratio__580->SetEntries(66.28959);
   data_mc_ratio__580->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__580->SetLineColor(ci);
   data_mc_ratio__580->SetLineWidth(2);
   data_mc_ratio__580->SetMarkerStyle(20);
   data_mc_ratio__580->SetMarkerSize(1.2);
   data_mc_ratio__580->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__580->GetXaxis()->SetRange(1,30);
   data_mc_ratio__580->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__580->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__580->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__580->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__580->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__580->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__580->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__580->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__580->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__580->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__580->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__580->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__580->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__580->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__580->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__580->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__580->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1422[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1422[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1422[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1422[30] = {
   0,
   0.2812984,
   0.09148867,
   0.09752614,
   0.169627,
   0.1146883,
   0.1190782,
   0.1978022,
   0.1214988,
   0.1293479,
   0.1160273,
   0.1545595,
   0.1462574,
   0.1381,
   0.1252492,
   0.1166295,
   0.1313026,
   0.1353046,
   0.1486971,
   0.1591363,
   0.166987,
   0.1828377,
   0.1894012,
   0.2142072,
   0.2380225,
   0.2138665,
   0.2381843,
   0.2372483,
   0.2388521,
   0.1538263};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1422,Graph_from_mc_statistical_error_fy1422,Graph_from_mc_statistical_error_fex1422,Graph_from_mc_statistical_error_fey1422);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1422 = new TH1F("Graph_Graph_from_mc_statistical_error1422","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1422->SetMinimum(0.6624419);
   Graph_Graph_from_mc_statistical_error1422->SetMaximum(1.337558);
   Graph_Graph_from_mc_statistical_error1422->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1422->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1422->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1422->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1422->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1422->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1422->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1422->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1422->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1422->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1422->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1422->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1422->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1422->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1422->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1422->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1422);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_both_18->cd();
   Z_dR_both_18->Modified();
   Z_dR_both_18->cd();
   Z_dR_both_18->SetSelected(Z_dR_both_18);
}
