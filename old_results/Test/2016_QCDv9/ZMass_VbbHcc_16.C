void ZMass_VbbHcc_16()
{
//=========Macro generated from canvas: ZMass_VbbHcc_16/ZMass_VbbHcc_16
//=========  (Tue Sep 20 13:13:08 2022) by ROOT version 6.14/09
   TCanvas *ZMass_VbbHcc_16 = new TCanvas("ZMass_VbbHcc_16", "ZMass_VbbHcc_16",0,0,600,600);
   ZMass_VbbHcc_16->SetHighLightColor(2);
   ZMass_VbbHcc_16->Range(0,0,1,1);
   ZMass_VbbHcc_16->SetFillColor(0);
   ZMass_VbbHcc_16->SetFillStyle(4000);
   ZMass_VbbHcc_16->SetBorderMode(0);
   ZMass_VbbHcc_16->SetBorderSize(2);
   ZMass_VbbHcc_16->SetFrameFillStyle(1000);
   ZMass_VbbHcc_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-99.44498,315.7258,99355.53);
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
   st->SetMaximum(85152.41);
   
   TH1F *st_stack_1 = new TH1F("st_stack_1","",30,0,300);
   st_stack_1->SetMinimum(0.01);
   st_stack_1->SetMaximum(89410.03);
   st_stack_1->SetDirectory(0);
   st_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_1->SetLineColor(ci);
   st_stack_1->GetXaxis()->SetRange(1,30);
   st_stack_1->GetXaxis()->SetLabelFont(42);
   st_stack_1->GetXaxis()->SetLabelSize(0.035);
   st_stack_1->GetXaxis()->SetTitleSize(0.035);
   st_stack_1->GetXaxis()->SetTitleFont(42);
   st_stack_1->GetYaxis()->SetTitle("Events/10.0");
   st_stack_1->GetYaxis()->SetLabelFont(42);
   st_stack_1->GetYaxis()->SetLabelSize(0.05);
   st_stack_1->GetYaxis()->SetTitleSize(0.057);
   st_stack_1->GetYaxis()->SetTitleOffset(1.2);
   st_stack_1->GetYaxis()->SetTitleFont(42);
   st_stack_1->GetZaxis()->SetLabelFont(42);
   st_stack_1->GetZaxis()->SetLabelSize(0.035);
   st_stack_1->GetZaxis()->SetTitleSize(0.035);
   st_stack_1->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_1);
   
   
   TH1D *VbbHcc_ZMass_stack_1 = new TH1D("VbbHcc_ZMass_stack_1","",30,0,300);
   VbbHcc_ZMass_stack_1->SetBinContent(2,133.2528);
   VbbHcc_ZMass_stack_1->SetBinContent(3,7920.612);
   VbbHcc_ZMass_stack_1->SetBinContent(4,25883.79);
   VbbHcc_ZMass_stack_1->SetBinContent(5,36166.63);
   VbbHcc_ZMass_stack_1->SetBinContent(6,35387.62);
   VbbHcc_ZMass_stack_1->SetBinContent(7,29797.17);
   VbbHcc_ZMass_stack_1->SetBinContent(8,24222.46);
   VbbHcc_ZMass_stack_1->SetBinContent(9,24354.73);
   VbbHcc_ZMass_stack_1->SetBinContent(10,21009.2);
   VbbHcc_ZMass_stack_1->SetBinContent(11,21464.12);
   VbbHcc_ZMass_stack_1->SetBinContent(12,22594.76);
   VbbHcc_ZMass_stack_1->SetBinContent(13,19827.94);
   VbbHcc_ZMass_stack_1->SetBinContent(14,15891.56);
   VbbHcc_ZMass_stack_1->SetBinContent(15,19811.31);
   VbbHcc_ZMass_stack_1->SetBinContent(16,17902.61);
   VbbHcc_ZMass_stack_1->SetBinContent(17,18801.5);
   VbbHcc_ZMass_stack_1->SetBinContent(18,13424.04);
   VbbHcc_ZMass_stack_1->SetBinContent(19,14071.88);
   VbbHcc_ZMass_stack_1->SetBinContent(20,13922.07);
   VbbHcc_ZMass_stack_1->SetBinContent(21,11693.58);
   VbbHcc_ZMass_stack_1->SetBinContent(22,11235.47);
   VbbHcc_ZMass_stack_1->SetBinContent(23,10775.57);
   VbbHcc_ZMass_stack_1->SetBinContent(24,11749.48);
   VbbHcc_ZMass_stack_1->SetBinContent(25,7478.052);
   VbbHcc_ZMass_stack_1->SetBinContent(26,7894.494);
   VbbHcc_ZMass_stack_1->SetBinContent(27,5844.049);
   VbbHcc_ZMass_stack_1->SetBinContent(28,5166.045);
   VbbHcc_ZMass_stack_1->SetBinContent(29,5797.341);
   VbbHcc_ZMass_stack_1->SetBinContent(30,4725.828);
   VbbHcc_ZMass_stack_1->SetBinContent(31,58681.05);
   VbbHcc_ZMass_stack_1->SetBinError(2,133.2528);
   VbbHcc_ZMass_stack_1->SetBinError(3,1426.98);
   VbbHcc_ZMass_stack_1->SetBinError(4,2618.748);
   VbbHcc_ZMass_stack_1->SetBinError(5,3077.992);
   VbbHcc_ZMass_stack_1->SetBinError(6,2968.547);
   VbbHcc_ZMass_stack_1->SetBinError(7,2634.188);
   VbbHcc_ZMass_stack_1->SetBinError(8,2286.318);
   VbbHcc_ZMass_stack_1->SetBinError(9,2389.779);
   VbbHcc_ZMass_stack_1->SetBinError(10,2161.104);
   VbbHcc_ZMass_stack_1->SetBinError(11,2248.767);
   VbbHcc_ZMass_stack_1->SetBinError(12,2346.273);
   VbbHcc_ZMass_stack_1->SetBinError(13,2173.835);
   VbbHcc_ZMass_stack_1->SetBinError(14,1867.379);
   VbbHcc_ZMass_stack_1->SetBinError(15,2206.086);
   VbbHcc_ZMass_stack_1->SetBinError(16,2011.887);
   VbbHcc_ZMass_stack_1->SetBinError(17,2111.443);
   VbbHcc_ZMass_stack_1->SetBinError(18,1729.016);
   VbbHcc_ZMass_stack_1->SetBinError(19,1776.651);
   VbbHcc_ZMass_stack_1->SetBinError(20,1766.398);
   VbbHcc_ZMass_stack_1->SetBinError(21,1617.079);
   VbbHcc_ZMass_stack_1->SetBinError(22,1563.165);
   VbbHcc_ZMass_stack_1->SetBinError(23,1541.752);
   VbbHcc_ZMass_stack_1->SetBinError(24,1635.54);
   VbbHcc_ZMass_stack_1->SetBinError(25,1263.816);
   VbbHcc_ZMass_stack_1->SetBinError(26,1266.478);
   VbbHcc_ZMass_stack_1->SetBinError(27,1051.811);
   VbbHcc_ZMass_stack_1->SetBinError(28,915.4091);
   VbbHcc_ZMass_stack_1->SetBinError(29,1030.841);
   VbbHcc_ZMass_stack_1->SetBinError(30,947.25);
   VbbHcc_ZMass_stack_1->SetBinError(31,2820.902);
   VbbHcc_ZMass_stack_1->SetEntries(15068);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_ZMass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_1->SetLineColor(ci);
   VbbHcc_ZMass_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_1,"");
   
   TH1D *VbbHcc_ZMass_stack_2 = new TH1D("VbbHcc_ZMass_stack_2","",30,0,300);
   VbbHcc_ZMass_stack_2->SetBinContent(2,0.09849798);
   VbbHcc_ZMass_stack_2->SetBinContent(3,18.96956);
   VbbHcc_ZMass_stack_2->SetBinContent(4,67.3549);
   VbbHcc_ZMass_stack_2->SetBinContent(5,115.9483);
   VbbHcc_ZMass_stack_2->SetBinContent(6,135.2163);
   VbbHcc_ZMass_stack_2->SetBinContent(7,153.5584);
   VbbHcc_ZMass_stack_2->SetBinContent(8,162.6777);
   VbbHcc_ZMass_stack_2->SetBinContent(9,182.1344);
   VbbHcc_ZMass_stack_2->SetBinContent(10,196.6063);
   VbbHcc_ZMass_stack_2->SetBinContent(11,195.8844);
   VbbHcc_ZMass_stack_2->SetBinContent(12,190.4994);
   VbbHcc_ZMass_stack_2->SetBinContent(13,191.8614);
   VbbHcc_ZMass_stack_2->SetBinContent(14,170.6321);
   VbbHcc_ZMass_stack_2->SetBinContent(15,162.9449);
   VbbHcc_ZMass_stack_2->SetBinContent(16,150.0379);
   VbbHcc_ZMass_stack_2->SetBinContent(17,142.0307);
   VbbHcc_ZMass_stack_2->SetBinContent(18,123.5786);
   VbbHcc_ZMass_stack_2->SetBinContent(19,124.9279);
   VbbHcc_ZMass_stack_2->SetBinContent(20,103.3211);
   VbbHcc_ZMass_stack_2->SetBinContent(21,101.5243);
   VbbHcc_ZMass_stack_2->SetBinContent(22,84.83204);
   VbbHcc_ZMass_stack_2->SetBinContent(23,85.71541);
   VbbHcc_ZMass_stack_2->SetBinContent(24,79.61551);
   VbbHcc_ZMass_stack_2->SetBinContent(25,81.43022);
   VbbHcc_ZMass_stack_2->SetBinContent(26,72.03507);
   VbbHcc_ZMass_stack_2->SetBinContent(27,67.75297);
   VbbHcc_ZMass_stack_2->SetBinContent(28,64.01395);
   VbbHcc_ZMass_stack_2->SetBinContent(29,54.16542);
   VbbHcc_ZMass_stack_2->SetBinContent(30,41.33844);
   VbbHcc_ZMass_stack_2->SetBinContent(31,672.0591);
   VbbHcc_ZMass_stack_2->SetBinError(2,0.06974011);
   VbbHcc_ZMass_stack_2->SetBinError(3,1.682419);
   VbbHcc_ZMass_stack_2->SetBinError(4,3.212401);
   VbbHcc_ZMass_stack_2->SetBinError(5,4.258605);
   VbbHcc_ZMass_stack_2->SetBinError(6,4.664458);
   VbbHcc_ZMass_stack_2->SetBinError(7,4.95939);
   VbbHcc_ZMass_stack_2->SetBinError(8,5.091504);
   VbbHcc_ZMass_stack_2->SetBinError(9,5.499677);
   VbbHcc_ZMass_stack_2->SetBinError(10,5.79637);
   VbbHcc_ZMass_stack_2->SetBinError(11,5.781026);
   VbbHcc_ZMass_stack_2->SetBinError(12,5.675537);
   VbbHcc_ZMass_stack_2->SetBinError(13,5.770444);
   VbbHcc_ZMass_stack_2->SetBinError(14,5.355902);
   VbbHcc_ZMass_stack_2->SetBinError(15,5.283428);
   VbbHcc_ZMass_stack_2->SetBinError(16,5.108365);
   VbbHcc_ZMass_stack_2->SetBinError(17,5.068502);
   VbbHcc_ZMass_stack_2->SetBinError(18,4.659742);
   VbbHcc_ZMass_stack_2->SetBinError(19,4.811166);
   VbbHcc_ZMass_stack_2->SetBinError(20,4.380411);
   VbbHcc_ZMass_stack_2->SetBinError(21,4.356208);
   VbbHcc_ZMass_stack_2->SetBinError(22,3.885487);
   VbbHcc_ZMass_stack_2->SetBinError(23,3.934134);
   VbbHcc_ZMass_stack_2->SetBinError(24,3.86154);
   VbbHcc_ZMass_stack_2->SetBinError(25,4.025247);
   VbbHcc_ZMass_stack_2->SetBinError(26,3.690261);
   VbbHcc_ZMass_stack_2->SetBinError(27,3.639022);
   VbbHcc_ZMass_stack_2->SetBinError(28,3.582017);
   VbbHcc_ZMass_stack_2->SetBinError(29,3.296998);
   VbbHcc_ZMass_stack_2->SetBinError(30,2.698216);
   VbbHcc_ZMass_stack_2->SetBinError(31,11.73567);
   VbbHcc_ZMass_stack_2->SetEntries(54400);

   ci = TColor::GetColor("#660066");
   VbbHcc_ZMass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_2->SetLineColor(ci);
   VbbHcc_ZMass_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_2,"");
   
   TH1D *VbbHcc_ZMass_stack_3 = new TH1D("VbbHcc_ZMass_stack_3","",30,0,300);
   VbbHcc_ZMass_stack_3->SetBinContent(2,4.309287);
   VbbHcc_ZMass_stack_3->SetBinContent(3,296.1895);
   VbbHcc_ZMass_stack_3->SetBinContent(4,1213.283);
   VbbHcc_ZMass_stack_3->SetBinContent(5,1927.568);
   VbbHcc_ZMass_stack_3->SetBinContent(6,2396.565);
   VbbHcc_ZMass_stack_3->SetBinContent(7,2706.382);
   VbbHcc_ZMass_stack_3->SetBinContent(8,3044.899);
   VbbHcc_ZMass_stack_3->SetBinContent(9,3354.749);
   VbbHcc_ZMass_stack_3->SetBinContent(10,3557.539);
   VbbHcc_ZMass_stack_3->SetBinContent(11,3664.283);
   VbbHcc_ZMass_stack_3->SetBinContent(12,3746.158);
   VbbHcc_ZMass_stack_3->SetBinContent(13,3673.126);
   VbbHcc_ZMass_stack_3->SetBinContent(14,3483.169);
   VbbHcc_ZMass_stack_3->SetBinContent(15,3175.551);
   VbbHcc_ZMass_stack_3->SetBinContent(16,2838.148);
   VbbHcc_ZMass_stack_3->SetBinContent(17,2553.15);
   VbbHcc_ZMass_stack_3->SetBinContent(18,2282.614);
   VbbHcc_ZMass_stack_3->SetBinContent(19,2066.094);
   VbbHcc_ZMass_stack_3->SetBinContent(20,1866.755);
   VbbHcc_ZMass_stack_3->SetBinContent(21,1669.709);
   VbbHcc_ZMass_stack_3->SetBinContent(22,1540.77);
   VbbHcc_ZMass_stack_3->SetBinContent(23,1390.403);
   VbbHcc_ZMass_stack_3->SetBinContent(24,1262.096);
   VbbHcc_ZMass_stack_3->SetBinContent(25,1127.066);
   VbbHcc_ZMass_stack_3->SetBinContent(26,1036.679);
   VbbHcc_ZMass_stack_3->SetBinContent(27,919.8411);
   VbbHcc_ZMass_stack_3->SetBinContent(28,844.6976);
   VbbHcc_ZMass_stack_3->SetBinContent(29,747.6493);
   VbbHcc_ZMass_stack_3->SetBinContent(30,689.6034);
   VbbHcc_ZMass_stack_3->SetBinContent(31,7648.037);
   VbbHcc_ZMass_stack_3->SetBinError(2,0.5280812);
   VbbHcc_ZMass_stack_3->SetBinError(3,4.457848);
   VbbHcc_ZMass_stack_3->SetBinError(4,9.044863);
   VbbHcc_ZMass_stack_3->SetBinError(5,11.39385);
   VbbHcc_ZMass_stack_3->SetBinError(6,12.70132);
   VbbHcc_ZMass_stack_3->SetBinError(7,13.49847);
   VbbHcc_ZMass_stack_3->SetBinError(8,14.31927);
   VbbHcc_ZMass_stack_3->SetBinError(9,15.04114);
   VbbHcc_ZMass_stack_3->SetBinError(10,15.50939);
   VbbHcc_ZMass_stack_3->SetBinError(11,15.73862);
   VbbHcc_ZMass_stack_3->SetBinError(12,15.93979);
   VbbHcc_ZMass_stack_3->SetBinError(13,15.76658);
   VbbHcc_ZMass_stack_3->SetBinError(14,15.36292);
   VbbHcc_ZMass_stack_3->SetBinError(15,14.6462);
   VbbHcc_ZMass_stack_3->SetBinError(16,13.82668);
   VbbHcc_ZMass_stack_3->SetBinError(17,13.10067);
   VbbHcc_ZMass_stack_3->SetBinError(18,12.38145);
   VbbHcc_ZMass_stack_3->SetBinError(19,11.76931);
   VbbHcc_ZMass_stack_3->SetBinError(20,11.17653);
   VbbHcc_ZMass_stack_3->SetBinError(21,10.57394);
   VbbHcc_ZMass_stack_3->SetBinError(22,10.15162);
   VbbHcc_ZMass_stack_3->SetBinError(23,9.640581);
   VbbHcc_ZMass_stack_3->SetBinError(24,9.202897);
   VbbHcc_ZMass_stack_3->SetBinError(25,8.689375);
   VbbHcc_ZMass_stack_3->SetBinError(26,8.324138);
   VbbHcc_ZMass_stack_3->SetBinError(27,7.85411);
   VbbHcc_ZMass_stack_3->SetBinError(28,7.536227);
   VbbHcc_ZMass_stack_3->SetBinError(29,7.085797);
   VbbHcc_ZMass_stack_3->SetBinError(30,6.786408);
   VbbHcc_ZMass_stack_3->SetBinError(31,22.67467);
   VbbHcc_ZMass_stack_3->SetEntries(1044436);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_ZMass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_3->SetLineColor(ci);
   VbbHcc_ZMass_stack_3->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_3,"");
   
   TH1D *VbbHcc_ZMass_stack_4 = new TH1D("VbbHcc_ZMass_stack_4","",30,0,300);
   VbbHcc_ZMass_stack_4->SetBinContent(3,8.988488);
   VbbHcc_ZMass_stack_4->SetBinContent(4,36.70251);
   VbbHcc_ZMass_stack_4->SetBinContent(5,63.12122);
   VbbHcc_ZMass_stack_4->SetBinContent(6,105.852);
   VbbHcc_ZMass_stack_4->SetBinContent(7,169.1072);
   VbbHcc_ZMass_stack_4->SetBinContent(8,250.3218);
   VbbHcc_ZMass_stack_4->SetBinContent(9,368.5271);
   VbbHcc_ZMass_stack_4->SetBinContent(10,313.7354);
   VbbHcc_ZMass_stack_4->SetBinContent(11,179.2092);
   VbbHcc_ZMass_stack_4->SetBinContent(12,129.9276);
   VbbHcc_ZMass_stack_4->SetBinContent(13,95.18896);
   VbbHcc_ZMass_stack_4->SetBinContent(14,108.1295);
   VbbHcc_ZMass_stack_4->SetBinContent(15,106.8976);
   VbbHcc_ZMass_stack_4->SetBinContent(16,93.37266);
   VbbHcc_ZMass_stack_4->SetBinContent(17,96.85017);
   VbbHcc_ZMass_stack_4->SetBinContent(18,91.6823);
   VbbHcc_ZMass_stack_4->SetBinContent(19,95.14452);
   VbbHcc_ZMass_stack_4->SetBinContent(20,89.78093);
   VbbHcc_ZMass_stack_4->SetBinContent(21,88.10842);
   VbbHcc_ZMass_stack_4->SetBinContent(22,71.08821);
   VbbHcc_ZMass_stack_4->SetBinContent(23,75.07511);
   VbbHcc_ZMass_stack_4->SetBinContent(24,73.47143);
   VbbHcc_ZMass_stack_4->SetBinContent(25,58.71908);
   VbbHcc_ZMass_stack_4->SetBinContent(26,56.09483);
   VbbHcc_ZMass_stack_4->SetBinContent(27,56.92347);
   VbbHcc_ZMass_stack_4->SetBinContent(28,51.07081);
   VbbHcc_ZMass_stack_4->SetBinContent(29,47.4388);
   VbbHcc_ZMass_stack_4->SetBinContent(30,48.03881);
   VbbHcc_ZMass_stack_4->SetBinContent(31,606.2169);
   VbbHcc_ZMass_stack_4->SetBinError(3,1.536658);
   VbbHcc_ZMass_stack_4->SetBinError(4,3.066271);
   VbbHcc_ZMass_stack_4->SetBinError(5,3.975197);
   VbbHcc_ZMass_stack_4->SetBinError(6,5.111168);
   VbbHcc_ZMass_stack_4->SetBinError(7,6.344461);
   VbbHcc_ZMass_stack_4->SetBinError(8,7.561745);
   VbbHcc_ZMass_stack_4->SetBinError(9,9.152972);
   VbbHcc_ZMass_stack_4->SetBinError(10,8.247371);
   VbbHcc_ZMass_stack_4->SetBinError(11,6.216815);
   VbbHcc_ZMass_stack_4->SetBinError(12,5.543322);
   VbbHcc_ZMass_stack_4->SetBinError(13,4.738158);
   VbbHcc_ZMass_stack_4->SetBinError(14,5.095052);
   VbbHcc_ZMass_stack_4->SetBinError(15,5.019403);
   VbbHcc_ZMass_stack_4->SetBinError(16,4.659846);
   VbbHcc_ZMass_stack_4->SetBinError(17,4.79971);
   VbbHcc_ZMass_stack_4->SetBinError(18,4.589694);
   VbbHcc_ZMass_stack_4->SetBinError(19,4.737253);
   VbbHcc_ZMass_stack_4->SetBinError(20,4.563433);
   VbbHcc_ZMass_stack_4->SetBinError(21,4.523575);
   VbbHcc_ZMass_stack_4->SetBinError(22,3.959875);
   VbbHcc_ZMass_stack_4->SetBinError(23,4.131388);
   VbbHcc_ZMass_stack_4->SetBinError(24,3.990971);
   VbbHcc_ZMass_stack_4->SetBinError(25,3.48694);
   VbbHcc_ZMass_stack_4->SetBinError(26,3.487291);
   VbbHcc_ZMass_stack_4->SetBinError(27,3.538991);
   VbbHcc_ZMass_stack_4->SetBinError(28,3.221881);
   VbbHcc_ZMass_stack_4->SetBinError(29,3.15441);
   VbbHcc_ZMass_stack_4->SetBinError(30,3.167157);
   VbbHcc_ZMass_stack_4->SetBinError(31,9.701131);
   VbbHcc_ZMass_stack_4->SetEntries(25079);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_ZMass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_4->SetLineColor(ci);
   VbbHcc_ZMass_stack_4->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_4,"");
   
   TH1D *VbbHcc_ZMass_stack_5 = new TH1D("VbbHcc_ZMass_stack_5","",30,0,300);
   VbbHcc_ZMass_stack_5->SetBinContent(3,3.929696);
   VbbHcc_ZMass_stack_5->SetBinContent(4,28.69613);
   VbbHcc_ZMass_stack_5->SetBinContent(5,37.74609);
   VbbHcc_ZMass_stack_5->SetBinContent(6,49.43821);
   VbbHcc_ZMass_stack_5->SetBinContent(7,52.29812);
   VbbHcc_ZMass_stack_5->SetBinContent(8,44.98289);
   VbbHcc_ZMass_stack_5->SetBinContent(9,28.85383);
   VbbHcc_ZMass_stack_5->SetBinContent(10,26.85211);
   VbbHcc_ZMass_stack_5->SetBinContent(11,28.44338);
   VbbHcc_ZMass_stack_5->SetBinContent(12,30.13912);
   VbbHcc_ZMass_stack_5->SetBinContent(13,24.47214);
   VbbHcc_ZMass_stack_5->SetBinContent(14,26.68159);
   VbbHcc_ZMass_stack_5->SetBinContent(15,30.99125);
   VbbHcc_ZMass_stack_5->SetBinContent(16,20.06764);
   VbbHcc_ZMass_stack_5->SetBinContent(17,18.82986);
   VbbHcc_ZMass_stack_5->SetBinContent(18,21.54299);
   VbbHcc_ZMass_stack_5->SetBinContent(19,13.85806);
   VbbHcc_ZMass_stack_5->SetBinContent(20,25.01071);
   VbbHcc_ZMass_stack_5->SetBinContent(21,19.15395);
   VbbHcc_ZMass_stack_5->SetBinContent(22,20.76355);
   VbbHcc_ZMass_stack_5->SetBinContent(23,21.1549);
   VbbHcc_ZMass_stack_5->SetBinContent(24,14.94026);
   VbbHcc_ZMass_stack_5->SetBinContent(25,17.53183);
   VbbHcc_ZMass_stack_5->SetBinContent(26,11.29857);
   VbbHcc_ZMass_stack_5->SetBinContent(27,10.0241);
   VbbHcc_ZMass_stack_5->SetBinContent(28,7.927772);
   VbbHcc_ZMass_stack_5->SetBinContent(29,8.617284);
   VbbHcc_ZMass_stack_5->SetBinContent(30,11.12005);
   VbbHcc_ZMass_stack_5->SetBinContent(31,181.3238);
   VbbHcc_ZMass_stack_5->SetBinError(3,1.725693);
   VbbHcc_ZMass_stack_5->SetBinError(4,4.764201);
   VbbHcc_ZMass_stack_5->SetBinError(5,5.505115);
   VbbHcc_ZMass_stack_5->SetBinError(6,6.037706);
   VbbHcc_ZMass_stack_5->SetBinError(7,5.966281);
   VbbHcc_ZMass_stack_5->SetBinError(8,5.51211);
   VbbHcc_ZMass_stack_5->SetBinError(9,3.749503);
   VbbHcc_ZMass_stack_5->SetBinError(10,3.675658);
   VbbHcc_ZMass_stack_5->SetBinError(11,3.867302);
   VbbHcc_ZMass_stack_5->SetBinError(12,4.180436);
   VbbHcc_ZMass_stack_5->SetBinError(13,3.763982);
   VbbHcc_ZMass_stack_5->SetBinError(14,4.04401);
   VbbHcc_ZMass_stack_5->SetBinError(15,4.511906);
   VbbHcc_ZMass_stack_5->SetBinError(16,3.583947);
   VbbHcc_ZMass_stack_5->SetBinError(17,3.277097);
   VbbHcc_ZMass_stack_5->SetBinError(18,3.713036);
   VbbHcc_ZMass_stack_5->SetBinError(19,2.348715);
   VbbHcc_ZMass_stack_5->SetBinError(20,4.267189);
   VbbHcc_ZMass_stack_5->SetBinError(21,3.438861);
   VbbHcc_ZMass_stack_5->SetBinError(22,3.780203);
   VbbHcc_ZMass_stack_5->SetBinError(23,3.76935);
   VbbHcc_ZMass_stack_5->SetBinError(24,3.190783);
   VbbHcc_ZMass_stack_5->SetBinError(25,3.59877);
   VbbHcc_ZMass_stack_5->SetBinError(26,2.281322);
   VbbHcc_ZMass_stack_5->SetBinError(27,2.132364);
   VbbHcc_ZMass_stack_5->SetBinError(28,1.763323);
   VbbHcc_ZMass_stack_5->SetBinError(29,1.899897);
   VbbHcc_ZMass_stack_5->SetBinError(30,2.666002);
   VbbHcc_ZMass_stack_5->SetBinError(31,7.99465);
   VbbHcc_ZMass_stack_5->SetEntries(6309);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_ZMass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_5->SetLineColor(ci);
   VbbHcc_ZMass_stack_5->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_5,"");
   
   TH1D *VbbHcc_ZMass_stack_6 = new TH1D("VbbHcc_ZMass_stack_6","",30,0,300);
   VbbHcc_ZMass_stack_6->SetBinContent(3,0.3657136);
   VbbHcc_ZMass_stack_6->SetBinContent(4,0.392144);
   VbbHcc_ZMass_stack_6->SetBinContent(5,0.5221263);
   VbbHcc_ZMass_stack_6->SetBinContent(6,0.3904178);
   VbbHcc_ZMass_stack_6->SetBinContent(7,0.355109);
   VbbHcc_ZMass_stack_6->SetBinContent(8,0.391448);
   VbbHcc_ZMass_stack_6->SetBinContent(9,0.2828636);
   VbbHcc_ZMass_stack_6->SetBinContent(10,0.4730255);
   VbbHcc_ZMass_stack_6->SetBinContent(11,0.2719295);
   VbbHcc_ZMass_stack_6->SetBinContent(12,0.2966967);
   VbbHcc_ZMass_stack_6->SetBinContent(13,0.3758089);
   VbbHcc_ZMass_stack_6->SetBinContent(14,0.4915975);
   VbbHcc_ZMass_stack_6->SetBinContent(15,0.384533);
   VbbHcc_ZMass_stack_6->SetBinContent(16,0.4780609);
   VbbHcc_ZMass_stack_6->SetBinContent(17,0.3931691);
   VbbHcc_ZMass_stack_6->SetBinContent(18,0.2748858);
   VbbHcc_ZMass_stack_6->SetBinContent(19,0.4488461);
   VbbHcc_ZMass_stack_6->SetBinContent(20,0.1876959);
   VbbHcc_ZMass_stack_6->SetBinContent(22,0.3595818);
   VbbHcc_ZMass_stack_6->SetBinContent(24,0.07685865);
   VbbHcc_ZMass_stack_6->SetBinContent(25,0.270727);
   VbbHcc_ZMass_stack_6->SetBinContent(26,0.1772698);
   VbbHcc_ZMass_stack_6->SetBinContent(28,0.1754551);
   VbbHcc_ZMass_stack_6->SetBinContent(29,0.09243995);
   VbbHcc_ZMass_stack_6->SetBinContent(30,0.1903831);
   VbbHcc_ZMass_stack_6->SetBinContent(31,1.984392);
   VbbHcc_ZMass_stack_6->SetBinError(3,0.1828825);
   VbbHcc_ZMass_stack_6->SetBinError(4,0.1963325);
   VbbHcc_ZMass_stack_6->SetBinError(5,0.2188949);
   VbbHcc_ZMass_stack_6->SetBinError(6,0.189155);
   VbbHcc_ZMass_stack_6->SetBinError(7,0.1787632);
   VbbHcc_ZMass_stack_6->SetBinError(8,0.1959686);
   VbbHcc_ZMass_stack_6->SetBinError(9,0.1636587);
   VbbHcc_ZMass_stack_6->SetBinError(10,0.2118124);
   VbbHcc_ZMass_stack_6->SetBinError(11,0.15701);
   VbbHcc_ZMass_stack_6->SetBinError(12,0.1715975);
   VbbHcc_ZMass_stack_6->SetBinError(13,0.1879895);
   VbbHcc_ZMass_stack_6->SetBinError(14,0.2200525);
   VbbHcc_ZMass_stack_6->SetBinError(15,0.1926915);
   VbbHcc_ZMass_stack_6->SetBinError(16,0.2141696);
   VbbHcc_ZMass_stack_6->SetBinError(17,0.1894386);
   VbbHcc_ZMass_stack_6->SetBinError(18,0.1592088);
   VbbHcc_ZMass_stack_6->SetBinError(19,0.2007673);
   VbbHcc_ZMass_stack_6->SetBinError(20,0.1327947);
   VbbHcc_ZMass_stack_6->SetBinError(22,0.1818773);
   VbbHcc_ZMass_stack_6->SetBinError(24,0.07685865);
   VbbHcc_ZMass_stack_6->SetBinError(25,0.1563044);
   VbbHcc_ZMass_stack_6->SetBinError(26,0.1254042);
   VbbHcc_ZMass_stack_6->SetBinError(28,0.1241353);
   VbbHcc_ZMass_stack_6->SetBinError(29,0.09243995);
   VbbHcc_ZMass_stack_6->SetBinError(30,0.1347283);
   VbbHcc_ZMass_stack_6->SetBinError(31,0.4337394);
   VbbHcc_ZMass_stack_6->SetEntries(110);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_ZMass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_6->SetLineColor(ci);
   VbbHcc_ZMass_stack_6->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_6,"");
   
   TH1D *VbbHcc_ZMass_stack_7 = new TH1D("VbbHcc_ZMass_stack_7","",30,0,300);
   VbbHcc_ZMass_stack_7->SetBinContent(4,0.63221);
   VbbHcc_ZMass_stack_7->SetBinContent(5,0.9036048);
   VbbHcc_ZMass_stack_7->SetBinContent(6,1.041423);
   VbbHcc_ZMass_stack_7->SetBinContent(7,2.410308);
   VbbHcc_ZMass_stack_7->SetBinContent(8,3.746204);
   VbbHcc_ZMass_stack_7->SetBinContent(9,5.400109);
   VbbHcc_ZMass_stack_7->SetBinContent(10,4.758639);
   VbbHcc_ZMass_stack_7->SetBinContent(11,1.738845);
   VbbHcc_ZMass_stack_7->SetBinContent(12,0.6786531);
   VbbHcc_ZMass_stack_7->SetBinContent(13,0.6671235);
   VbbHcc_ZMass_stack_7->SetBinContent(14,0.6923869);
   VbbHcc_ZMass_stack_7->SetBinContent(15,0.2831689);
   VbbHcc_ZMass_stack_7->SetBinContent(16,0.3979334);
   VbbHcc_ZMass_stack_7->SetBinContent(17,0.1920534);
   VbbHcc_ZMass_stack_7->SetBinContent(18,0.2203452);
   VbbHcc_ZMass_stack_7->SetBinContent(19,0.4980089);
   VbbHcc_ZMass_stack_7->SetBinContent(20,0.4613639);
   VbbHcc_ZMass_stack_7->SetBinContent(21,0.4119924);
   VbbHcc_ZMass_stack_7->SetBinContent(22,0.4156861);
   VbbHcc_ZMass_stack_7->SetBinContent(24,0.1304281);
   VbbHcc_ZMass_stack_7->SetBinContent(25,0.2857176);
   VbbHcc_ZMass_stack_7->SetBinContent(26,0.0755788);
   VbbHcc_ZMass_stack_7->SetBinContent(27,0.06982639);
   VbbHcc_ZMass_stack_7->SetBinContent(28,0.1894793);
   VbbHcc_ZMass_stack_7->SetBinContent(29,0.1401654);
   VbbHcc_ZMass_stack_7->SetBinContent(30,0.0750334);
   VbbHcc_ZMass_stack_7->SetBinContent(31,2.283674);
   VbbHcc_ZMass_stack_7->SetBinError(4,0.2110551);
   VbbHcc_ZMass_stack_7->SetBinError(5,0.2508043);
   VbbHcc_ZMass_stack_7->SetBinError(6,0.2649365);
   VbbHcc_ZMass_stack_7->SetBinError(7,0.4046549);
   VbbHcc_ZMass_stack_7->SetBinError(8,0.5111569);
   VbbHcc_ZMass_stack_7->SetBinError(9,0.6045384);
   VbbHcc_ZMass_stack_7->SetBinError(10,0.5705038);
   VbbHcc_ZMass_stack_7->SetBinError(11,0.3481653);
   VbbHcc_ZMass_stack_7->SetBinError(12,0.2154574);
   VbbHcc_ZMass_stack_7->SetBinError(13,0.2112615);
   VbbHcc_ZMass_stack_7->SetBinError(14,0.2197809);
   VbbHcc_ZMass_stack_7->SetBinError(15,0.141934);
   VbbHcc_ZMass_stack_7->SetBinError(16,0.1632635);
   VbbHcc_ZMass_stack_7->SetBinError(17,0.1118738);
   VbbHcc_ZMass_stack_7->SetBinError(18,0.1274738);
   VbbHcc_ZMass_stack_7->SetBinError(19,0.1885708);
   VbbHcc_ZMass_stack_7->SetBinError(20,0.176045);
   VbbHcc_ZMass_stack_7->SetBinError(21,0.169453);
   VbbHcc_ZMass_stack_7->SetBinError(22,0.169828);
   VbbHcc_ZMass_stack_7->SetBinError(24,0.09248151);
   VbbHcc_ZMass_stack_7->SetBinError(25,0.1429746);
   VbbHcc_ZMass_stack_7->SetBinError(26,0.0755788);
   VbbHcc_ZMass_stack_7->SetBinError(27,0.06982639);
   VbbHcc_ZMass_stack_7->SetBinError(28,0.1098587);
   VbbHcc_ZMass_stack_7->SetBinError(29,0.09935196);
   VbbHcc_ZMass_stack_7->SetBinError(30,0.0750334);
   VbbHcc_ZMass_stack_7->SetBinError(31,0.3937451);
   VbbHcc_ZMass_stack_7->SetEntries(424);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_ZMass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_7->SetLineColor(ci);
   VbbHcc_ZMass_stack_7->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_7,"");
   
   TH1D *VbbHcc_ZMass_stack_8 = new TH1D("VbbHcc_ZMass_stack_8","",30,0,300);
   VbbHcc_ZMass_stack_8->SetBinContent(2,0.2005009);
   VbbHcc_ZMass_stack_8->SetBinContent(3,0.6345718);
   VbbHcc_ZMass_stack_8->SetBinContent(4,2.967256);
   VbbHcc_ZMass_stack_8->SetBinContent(5,3.596122);
   VbbHcc_ZMass_stack_8->SetBinContent(6,5.913028);
   VbbHcc_ZMass_stack_8->SetBinContent(7,9.494607);
   VbbHcc_ZMass_stack_8->SetBinContent(8,16.74349);
   VbbHcc_ZMass_stack_8->SetBinContent(9,23.02764);
   VbbHcc_ZMass_stack_8->SetBinContent(10,19.36904);
   VbbHcc_ZMass_stack_8->SetBinContent(11,9.413947);
   VbbHcc_ZMass_stack_8->SetBinContent(12,5.686124);
   VbbHcc_ZMass_stack_8->SetBinContent(13,5.503434);
   VbbHcc_ZMass_stack_8->SetBinContent(14,2.407117);
   VbbHcc_ZMass_stack_8->SetBinContent(15,3.731286);
   VbbHcc_ZMass_stack_8->SetBinContent(16,4.143933);
   VbbHcc_ZMass_stack_8->SetBinContent(17,2.376175);
   VbbHcc_ZMass_stack_8->SetBinContent(18,1.629188);
   VbbHcc_ZMass_stack_8->SetBinContent(19,2.376312);
   VbbHcc_ZMass_stack_8->SetBinContent(20,2.426665);
   VbbHcc_ZMass_stack_8->SetBinContent(21,2.17815);
   VbbHcc_ZMass_stack_8->SetBinContent(22,1.311836);
   VbbHcc_ZMass_stack_8->SetBinContent(23,0.3425666);
   VbbHcc_ZMass_stack_8->SetBinContent(24,0.5713233);
   VbbHcc_ZMass_stack_8->SetBinContent(25,1.132832);
   VbbHcc_ZMass_stack_8->SetBinContent(26,1.131286);
   VbbHcc_ZMass_stack_8->SetBinContent(27,0.9848874);
   VbbHcc_ZMass_stack_8->SetBinContent(28,0.9651248);
   VbbHcc_ZMass_stack_8->SetBinContent(29,0.3840285);
   VbbHcc_ZMass_stack_8->SetBinContent(30,0.5854225);
   VbbHcc_ZMass_stack_8->SetBinContent(31,5.972111);
   VbbHcc_ZMass_stack_8->SetBinError(2,0.2005009);
   VbbHcc_ZMass_stack_8->SetBinError(3,0.3664101);
   VbbHcc_ZMass_stack_8->SetBinError(4,0.7472846);
   VbbHcc_ZMass_stack_8->SetBinError(5,0.8334277);
   VbbHcc_ZMass_stack_8->SetBinError(6,1.082411);
   VbbHcc_ZMass_stack_8->SetBinError(7,1.365486);
   VbbHcc_ZMass_stack_8->SetBinError(8,1.800781);
   VbbHcc_ZMass_stack_8->SetBinError(9,2.112227);
   VbbHcc_ZMass_stack_8->SetBinError(10,1.929371);
   VbbHcc_ZMass_stack_8->SetBinError(11,1.361499);
   VbbHcc_ZMass_stack_8->SetBinError(12,1.057208);
   VbbHcc_ZMass_stack_8->SetBinError(13,1.035207);
   VbbHcc_ZMass_stack_8->SetBinError(14,0.6960665);
   VbbHcc_ZMass_stack_8->SetBinError(15,0.8575099);
   VbbHcc_ZMass_stack_8->SetBinError(16,0.9053094);
   VbbHcc_ZMass_stack_8->SetBinError(17,0.6876555);
   VbbHcc_ZMass_stack_8->SetBinError(18,0.5791451);
   VbbHcc_ZMass_stack_8->SetBinError(19,0.687456);
   VbbHcc_ZMass_stack_8->SetBinError(20,0.6815322);
   VbbHcc_ZMass_stack_8->SetBinError(21,0.6572801);
   VbbHcc_ZMass_stack_8->SetBinError(22,0.4961821);
   VbbHcc_ZMass_stack_8->SetBinError(23,0.2505862);
   VbbHcc_ZMass_stack_8->SetBinError(24,0.329894);
   VbbHcc_ZMass_stack_8->SetBinError(25,0.4670105);
   VbbHcc_ZMass_stack_8->SetBinError(26,0.4652528);
   VbbHcc_ZMass_stack_8->SetBinError(27,0.4412845);
   VbbHcc_ZMass_stack_8->SetBinError(28,0.4320086);
   VbbHcc_ZMass_stack_8->SetBinError(29,0.2718284);
   VbbHcc_ZMass_stack_8->SetBinError(30,0.3389521);
   VbbHcc_ZMass_stack_8->SetBinError(31,1.067252);
   VbbHcc_ZMass_stack_8->SetEntries(712);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_ZMass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_8->SetLineColor(ci);
   VbbHcc_ZMass_stack_8->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_8,"");
   
   TH1D *VbbHcc_ZMass_stack_9 = new TH1D("VbbHcc_ZMass_stack_9","",30,0,300);
   VbbHcc_ZMass_stack_9->SetBinContent(2,0.004434765);
   VbbHcc_ZMass_stack_9->SetBinContent(3,0.4304283);
   VbbHcc_ZMass_stack_9->SetBinContent(4,1.419976);
   VbbHcc_ZMass_stack_9->SetBinContent(5,2.196349);
   VbbHcc_ZMass_stack_9->SetBinContent(6,2.726473);
   VbbHcc_ZMass_stack_9->SetBinContent(7,3.979413);
   VbbHcc_ZMass_stack_9->SetBinContent(8,6.238008);
   VbbHcc_ZMass_stack_9->SetBinContent(9,8.95721);
   VbbHcc_ZMass_stack_9->SetBinContent(10,9.668565);
   VbbHcc_ZMass_stack_9->SetBinContent(11,9.340333);
   VbbHcc_ZMass_stack_9->SetBinContent(12,10.00067);
   VbbHcc_ZMass_stack_9->SetBinContent(13,8.9803);
   VbbHcc_ZMass_stack_9->SetBinContent(14,5.697374);
   VbbHcc_ZMass_stack_9->SetBinContent(15,3.341894);
   VbbHcc_ZMass_stack_9->SetBinContent(16,2.266909);
   VbbHcc_ZMass_stack_9->SetBinContent(17,1.880725);
   VbbHcc_ZMass_stack_9->SetBinContent(18,1.775379);
   VbbHcc_ZMass_stack_9->SetBinContent(19,1.59302);
   VbbHcc_ZMass_stack_9->SetBinContent(20,1.42718);
   VbbHcc_ZMass_stack_9->SetBinContent(21,1.167675);
   VbbHcc_ZMass_stack_9->SetBinContent(22,1.111973);
   VbbHcc_ZMass_stack_9->SetBinContent(23,1.000957);
   VbbHcc_ZMass_stack_9->SetBinContent(24,0.9109984);
   VbbHcc_ZMass_stack_9->SetBinContent(25,0.8296255);
   VbbHcc_ZMass_stack_9->SetBinContent(26,0.8008855);
   VbbHcc_ZMass_stack_9->SetBinContent(27,0.6504286);
   VbbHcc_ZMass_stack_9->SetBinContent(28,0.5923984);
   VbbHcc_ZMass_stack_9->SetBinContent(29,0.5673349);
   VbbHcc_ZMass_stack_9->SetBinContent(30,0.4883053);
   VbbHcc_ZMass_stack_9->SetBinContent(31,4.728071);
   VbbHcc_ZMass_stack_9->SetBinError(2,0.002581227);
   VbbHcc_ZMass_stack_9->SetBinError(3,0.02561373);
   VbbHcc_ZMass_stack_9->SetBinError(4,0.0467668);
   VbbHcc_ZMass_stack_9->SetBinError(5,0.05835442);
   VbbHcc_ZMass_stack_9->SetBinError(6,0.06520918);
   VbbHcc_ZMass_stack_9->SetBinError(7,0.0788983);
   VbbHcc_ZMass_stack_9->SetBinError(8,0.09838221);
   VbbHcc_ZMass_stack_9->SetBinError(9,0.1184635);
   VbbHcc_ZMass_stack_9->SetBinError(10,0.122443);
   VbbHcc_ZMass_stack_9->SetBinError(11,0.1206302);
   VbbHcc_ZMass_stack_9->SetBinError(12,0.1248144);
   VbbHcc_ZMass_stack_9->SetBinError(13,0.1180518);
   VbbHcc_ZMass_stack_9->SetBinError(14,0.0936572);
   VbbHcc_ZMass_stack_9->SetBinError(15,0.07163293);
   VbbHcc_ZMass_stack_9->SetBinError(16,0.05975001);
   VbbHcc_ZMass_stack_9->SetBinError(17,0.05383916);
   VbbHcc_ZMass_stack_9->SetBinError(18,0.05249107);
   VbbHcc_ZMass_stack_9->SetBinError(19,0.0500358);
   VbbHcc_ZMass_stack_9->SetBinError(20,0.04699122);
   VbbHcc_ZMass_stack_9->SetBinError(21,0.04245374);
   VbbHcc_ZMass_stack_9->SetBinError(22,0.04123348);
   VbbHcc_ZMass_stack_9->SetBinError(23,0.03946536);
   VbbHcc_ZMass_stack_9->SetBinError(24,0.03729833);
   VbbHcc_ZMass_stack_9->SetBinError(25,0.03629202);
   VbbHcc_ZMass_stack_9->SetBinError(26,0.03527234);
   VbbHcc_ZMass_stack_9->SetBinError(27,0.03172531);
   VbbHcc_ZMass_stack_9->SetBinError(28,0.03011998);
   VbbHcc_ZMass_stack_9->SetBinError(29,0.02985671);
   VbbHcc_ZMass_stack_9->SetBinError(30,0.02751769);
   VbbHcc_ZMass_stack_9->SetBinError(31,0.08557223);
   VbbHcc_ZMass_stack_9->SetEntries(66921);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_ZMass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_9->SetLineColor(ci);
   VbbHcc_ZMass_stack_9->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_9,"");
   
   TH1D *VbbHcc_ZMass_stack_10 = new TH1D("VbbHcc_ZMass_stack_10","",30,0,300);
   VbbHcc_ZMass_stack_10->SetBinContent(2,0.0003756165);
   VbbHcc_ZMass_stack_10->SetBinContent(3,0.01627509);
   VbbHcc_ZMass_stack_10->SetBinContent(4,0.108797);
   VbbHcc_ZMass_stack_10->SetBinContent(5,0.2236394);
   VbbHcc_ZMass_stack_10->SetBinContent(6,0.4338842);
   VbbHcc_ZMass_stack_10->SetBinContent(7,0.8574124);
   VbbHcc_ZMass_stack_10->SetBinContent(8,1.67769);
   VbbHcc_ZMass_stack_10->SetBinContent(9,2.563077);
   VbbHcc_ZMass_stack_10->SetBinContent(10,2.860461);
   VbbHcc_ZMass_stack_10->SetBinContent(11,2.826958);
   VbbHcc_ZMass_stack_10->SetBinContent(12,3.075943);
   VbbHcc_ZMass_stack_10->SetBinContent(13,2.761199);
   VbbHcc_ZMass_stack_10->SetBinContent(14,1.795394);
   VbbHcc_ZMass_stack_10->SetBinContent(15,0.9956417);
   VbbHcc_ZMass_stack_10->SetBinContent(16,0.7416493);
   VbbHcc_ZMass_stack_10->SetBinContent(17,0.6461724);
   VbbHcc_ZMass_stack_10->SetBinContent(18,0.624518);
   VbbHcc_ZMass_stack_10->SetBinContent(19,0.5511713);
   VbbHcc_ZMass_stack_10->SetBinContent(20,0.5291964);
   VbbHcc_ZMass_stack_10->SetBinContent(21,0.4886677);
   VbbHcc_ZMass_stack_10->SetBinContent(22,0.4399094);
   VbbHcc_ZMass_stack_10->SetBinContent(23,0.3949743);
   VbbHcc_ZMass_stack_10->SetBinContent(24,0.356592);
   VbbHcc_ZMass_stack_10->SetBinContent(25,0.31126);
   VbbHcc_ZMass_stack_10->SetBinContent(26,0.267938);
   VbbHcc_ZMass_stack_10->SetBinContent(27,0.2534927);
   VbbHcc_ZMass_stack_10->SetBinContent(28,0.219);
   VbbHcc_ZMass_stack_10->SetBinContent(29,0.1919033);
   VbbHcc_ZMass_stack_10->SetBinContent(30,0.1819676);
   VbbHcc_ZMass_stack_10->SetBinContent(31,1.533355);
   VbbHcc_ZMass_stack_10->SetBinError(2,0.0003756165);
   VbbHcc_ZMass_stack_10->SetBinError(3,0.002527938);
   VbbHcc_ZMass_stack_10->SetBinError(4,0.006493683);
   VbbHcc_ZMass_stack_10->SetBinError(5,0.009314065);
   VbbHcc_ZMass_stack_10->SetBinError(6,0.01299805);
   VbbHcc_ZMass_stack_10->SetBinError(7,0.01824964);
   VbbHcc_ZMass_stack_10->SetBinError(8,0.02549655);
   VbbHcc_ZMass_stack_10->SetBinError(9,0.03155312);
   VbbHcc_ZMass_stack_10->SetBinError(10,0.03333355);
   VbbHcc_ZMass_stack_10->SetBinError(11,0.03309172);
   VbbHcc_ZMass_stack_10->SetBinError(12,0.03453568);
   VbbHcc_ZMass_stack_10->SetBinError(13,0.0327387);
   VbbHcc_ZMass_stack_10->SetBinError(14,0.02642569);
   VbbHcc_ZMass_stack_10->SetBinError(15,0.01967311);
   VbbHcc_ZMass_stack_10->SetBinError(16,0.01697723);
   VbbHcc_ZMass_stack_10->SetBinError(17,0.01580748);
   VbbHcc_ZMass_stack_10->SetBinError(18,0.01555398);
   VbbHcc_ZMass_stack_10->SetBinError(19,0.01461032);
   VbbHcc_ZMass_stack_10->SetBinError(20,0.01435079);
   VbbHcc_ZMass_stack_10->SetBinError(21,0.01374972);
   VbbHcc_ZMass_stack_10->SetBinError(22,0.01306878);
   VbbHcc_ZMass_stack_10->SetBinError(23,0.01238296);
   VbbHcc_ZMass_stack_10->SetBinError(24,0.01177624);
   VbbHcc_ZMass_stack_10->SetBinError(25,0.01099095);
   VbbHcc_ZMass_stack_10->SetBinError(26,0.01020098);
   VbbHcc_ZMass_stack_10->SetBinError(27,0.009907336);
   VbbHcc_ZMass_stack_10->SetBinError(28,0.009205317);
   VbbHcc_ZMass_stack_10->SetBinError(29,0.008636467);
   VbbHcc_ZMass_stack_10->SetBinError(30,0.008399139);
   VbbHcc_ZMass_stack_10->SetBinError(31,0.02433985);
   VbbHcc_ZMass_stack_10->SetEntries(72910);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_ZMass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_10->SetLineColor(ci);
   VbbHcc_ZMass_stack_10->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_10,"");
   
   TH1D *VbbHcc_ZMass_stack_11 = new TH1D("VbbHcc_ZMass_stack_11","",30,0,300);
   VbbHcc_ZMass_stack_11->SetBinContent(2,0.001545187);
   VbbHcc_ZMass_stack_11->SetBinContent(3,0.02019004);
   VbbHcc_ZMass_stack_11->SetBinContent(4,0.0711094);
   VbbHcc_ZMass_stack_11->SetBinContent(5,0.1017094);
   VbbHcc_ZMass_stack_11->SetBinContent(6,0.1618173);
   VbbHcc_ZMass_stack_11->SetBinContent(7,0.3156283);
   VbbHcc_ZMass_stack_11->SetBinContent(8,0.63337);
   VbbHcc_ZMass_stack_11->SetBinContent(9,0.8350135);
   VbbHcc_ZMass_stack_11->SetBinContent(10,0.7342211);
   VbbHcc_ZMass_stack_11->SetBinContent(11,0.3665657);
   VbbHcc_ZMass_stack_11->SetBinContent(12,0.225662);
   VbbHcc_ZMass_stack_11->SetBinContent(13,0.1932193);
   VbbHcc_ZMass_stack_11->SetBinContent(14,0.1290722);
   VbbHcc_ZMass_stack_11->SetBinContent(15,0.1065255);
   VbbHcc_ZMass_stack_11->SetBinContent(16,0.07212416);
   VbbHcc_ZMass_stack_11->SetBinContent(17,0.08494942);
   VbbHcc_ZMass_stack_11->SetBinContent(18,0.05557744);
   VbbHcc_ZMass_stack_11->SetBinContent(19,0.0441813);
   VbbHcc_ZMass_stack_11->SetBinContent(20,0.0414416);
   VbbHcc_ZMass_stack_11->SetBinContent(21,0.04907379);
   VbbHcc_ZMass_stack_11->SetBinContent(22,0.03681495);
   VbbHcc_ZMass_stack_11->SetBinContent(23,0.01932145);
   VbbHcc_ZMass_stack_11->SetBinContent(24,0.02475823);
   VbbHcc_ZMass_stack_11->SetBinContent(25,0.03360819);
   VbbHcc_ZMass_stack_11->SetBinContent(26,0.03223467);
   VbbHcc_ZMass_stack_11->SetBinContent(27,0.01520657);
   VbbHcc_ZMass_stack_11->SetBinContent(28,0.01913059);
   VbbHcc_ZMass_stack_11->SetBinContent(29,0.01436035);
   VbbHcc_ZMass_stack_11->SetBinContent(30,0.02636255);
   VbbHcc_ZMass_stack_11->SetBinContent(31,0.2296375);
   VbbHcc_ZMass_stack_11->SetBinError(2,0.001545187);
   VbbHcc_ZMass_stack_11->SetBinError(3,0.005604967);
   VbbHcc_ZMass_stack_11->SetBinError(4,0.01062432);
   VbbHcc_ZMass_stack_11->SetBinError(5,0.01245027);
   VbbHcc_ZMass_stack_11->SetBinError(6,0.01615561);
   VbbHcc_ZMass_stack_11->SetBinError(7,0.02236691);
   VbbHcc_ZMass_stack_11->SetBinError(8,0.03145074);
   VbbHcc_ZMass_stack_11->SetBinError(9,0.0364733);
   VbbHcc_ZMass_stack_11->SetBinError(10,0.03399419);
   VbbHcc_ZMass_stack_11->SetBinError(11,0.02374725);
   VbbHcc_ZMass_stack_11->SetBinError(12,0.01868793);
   VbbHcc_ZMass_stack_11->SetBinError(13,0.01716773);
   VbbHcc_ZMass_stack_11->SetBinError(14,0.01401271);
   VbbHcc_ZMass_stack_11->SetBinError(15,0.01274046);
   VbbHcc_ZMass_stack_11->SetBinError(16,0.01071404);
   VbbHcc_ZMass_stack_11->SetBinError(17,0.01127479);
   VbbHcc_ZMass_stack_11->SetBinError(18,0.009255664);
   VbbHcc_ZMass_stack_11->SetBinError(19,0.008169787);
   VbbHcc_ZMass_stack_11->SetBinError(20,0.007971202);
   VbbHcc_ZMass_stack_11->SetBinError(21,0.008750944);
   VbbHcc_ZMass_stack_11->SetBinError(22,0.007535289);
   VbbHcc_ZMass_stack_11->SetBinError(23,0.005403528);
   VbbHcc_ZMass_stack_11->SetBinError(24,0.006057331);
   VbbHcc_ZMass_stack_11->SetBinError(25,0.007186596);
   VbbHcc_ZMass_stack_11->SetBinError(26,0.006933308);
   VbbHcc_ZMass_stack_11->SetBinError(27,0.004785926);
   VbbHcc_ZMass_stack_11->SetBinError(28,0.005227276);
   VbbHcc_ZMass_stack_11->SetBinError(29,0.004795172);
   VbbHcc_ZMass_stack_11->SetBinError(30,0.006322266);
   VbbHcc_ZMass_stack_11->SetBinError(31,0.01866446);
   VbbHcc_ZMass_stack_11->SetEntries(3413);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_ZMass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_11->SetLineColor(ci);
   VbbHcc_ZMass_stack_11->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_11,"");
   
   TH1D *VbbHcc_ZMass_stack_12 = new TH1D("VbbHcc_ZMass_stack_12","",30,0,300);
   VbbHcc_ZMass_stack_12->SetBinContent(3,0.002182119);
   VbbHcc_ZMass_stack_12->SetBinContent(4,0.01093119);
   VbbHcc_ZMass_stack_12->SetBinContent(5,0.02468165);
   VbbHcc_ZMass_stack_12->SetBinContent(6,0.04387538);
   VbbHcc_ZMass_stack_12->SetBinContent(7,0.1009102);
   VbbHcc_ZMass_stack_12->SetBinContent(8,0.1965096);
   VbbHcc_ZMass_stack_12->SetBinContent(9,0.2924161);
   VbbHcc_ZMass_stack_12->SetBinContent(10,0.2375009);
   VbbHcc_ZMass_stack_12->SetBinContent(11,0.1049246);
   VbbHcc_ZMass_stack_12->SetBinContent(12,0.06330434);
   VbbHcc_ZMass_stack_12->SetBinContent(13,0.05631799);
   VbbHcc_ZMass_stack_12->SetBinContent(14,0.0486766);
   VbbHcc_ZMass_stack_12->SetBinContent(15,0.02971359);
   VbbHcc_ZMass_stack_12->SetBinContent(16,0.02489948);
   VbbHcc_ZMass_stack_12->SetBinContent(17,0.02375718);
   VbbHcc_ZMass_stack_12->SetBinContent(18,0.0229069);
   VbbHcc_ZMass_stack_12->SetBinContent(19,0.02220801);
   VbbHcc_ZMass_stack_12->SetBinContent(20,0.01903079);
   VbbHcc_ZMass_stack_12->SetBinContent(21,0.0175093);
   VbbHcc_ZMass_stack_12->SetBinContent(22,0.01588035);
   VbbHcc_ZMass_stack_12->SetBinContent(23,0.01507962);
   VbbHcc_ZMass_stack_12->SetBinContent(24,0.01400439);
   VbbHcc_ZMass_stack_12->SetBinContent(25,0.01336057);
   VbbHcc_ZMass_stack_12->SetBinContent(26,0.01297487);
   VbbHcc_ZMass_stack_12->SetBinContent(27,0.01076572);
   VbbHcc_ZMass_stack_12->SetBinContent(28,0.009636338);
   VbbHcc_ZMass_stack_12->SetBinContent(29,0.007463062);
   VbbHcc_ZMass_stack_12->SetBinContent(30,0.006522864);
   VbbHcc_ZMass_stack_12->SetBinContent(31,0.1185016);
   VbbHcc_ZMass_stack_12->SetBinError(3,0.0006451679);
   VbbHcc_ZMass_stack_12->SetBinError(4,0.001445327);
   VbbHcc_ZMass_stack_12->SetBinError(5,0.002177389);
   VbbHcc_ZMass_stack_12->SetBinError(6,0.002912458);
   VbbHcc_ZMass_stack_12->SetBinError(7,0.004401299);
   VbbHcc_ZMass_stack_12->SetBinError(8,0.006129773);
   VbbHcc_ZMass_stack_12->SetBinError(9,0.00746649);
   VbbHcc_ZMass_stack_12->SetBinError(10,0.006716807);
   VbbHcc_ZMass_stack_12->SetBinError(11,0.004480042);
   VbbHcc_ZMass_stack_12->SetBinError(12,0.003470032);
   VbbHcc_ZMass_stack_12->SetBinError(13,0.003272882);
   VbbHcc_ZMass_stack_12->SetBinError(14,0.003043828);
   VbbHcc_ZMass_stack_12->SetBinError(15,0.002367925);
   VbbHcc_ZMass_stack_12->SetBinError(16,0.002165872);
   VbbHcc_ZMass_stack_12->SetBinError(17,0.002116526);
   VbbHcc_ZMass_stack_12->SetBinError(18,0.002092975);
   VbbHcc_ZMass_stack_12->SetBinError(19,0.002054102);
   VbbHcc_ZMass_stack_12->SetBinError(20,0.001892602);
   VbbHcc_ZMass_stack_12->SetBinError(21,0.001812317);
   VbbHcc_ZMass_stack_12->SetBinError(22,0.001742621);
   VbbHcc_ZMass_stack_12->SetBinError(23,0.001703215);
   VbbHcc_ZMass_stack_12->SetBinError(24,0.001633283);
   VbbHcc_ZMass_stack_12->SetBinError(25,0.001600054);
   VbbHcc_ZMass_stack_12->SetBinError(26,0.001574928);
   VbbHcc_ZMass_stack_12->SetBinError(27,0.001423076);
   VbbHcc_ZMass_stack_12->SetBinError(28,0.001320901);
   VbbHcc_ZMass_stack_12->SetBinError(29,0.001197404);
   VbbHcc_ZMass_stack_12->SetBinError(30,0.00109751);
   VbbHcc_ZMass_stack_12->SetBinError(31,0.00472891);
   VbbHcc_ZMass_stack_12->SetEntries(8846);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_ZMass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass_stack_12->SetLineColor(ci);
   VbbHcc_ZMass_stack_12->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_ZMass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_ZMass__1 = new TH1D("VbbHcc_ZMass__1","",30,0,300);
   VbbHcc_ZMass__1->SetBinContent(2,22);
   VbbHcc_ZMass__1->SetBinContent(3,1290);
   VbbHcc_ZMass__1->SetBinContent(4,4884);
   VbbHcc_ZMass__1->SetBinContent(5,7756);
   VbbHcc_ZMass__1->SetBinContent(6,9358);
   VbbHcc_ZMass__1->SetBinContent(7,9662);
   VbbHcc_ZMass__1->SetBinContent(8,9547);
   VbbHcc_ZMass__1->SetBinContent(9,9093);
   VbbHcc_ZMass__1->SetBinContent(10,8556);
   VbbHcc_ZMass__1->SetBinContent(11,7793);
   VbbHcc_ZMass__1->SetBinContent(12,7617);
   VbbHcc_ZMass__1->SetBinContent(13,7140);
   VbbHcc_ZMass__1->SetBinContent(14,7053);
   VbbHcc_ZMass__1->SetBinContent(15,6458);
   VbbHcc_ZMass__1->SetBinContent(16,6075);
   VbbHcc_ZMass__1->SetBinContent(17,5927);
   VbbHcc_ZMass__1->SetBinContent(18,5547);
   VbbHcc_ZMass__1->SetBinContent(19,5216);
   VbbHcc_ZMass__1->SetBinContent(20,4961);
   VbbHcc_ZMass__1->SetBinContent(21,4613);
   VbbHcc_ZMass__1->SetBinContent(22,4207);
   VbbHcc_ZMass__1->SetBinContent(23,3953);
   VbbHcc_ZMass__1->SetBinContent(24,3710);
   VbbHcc_ZMass__1->SetBinContent(25,3652);
   VbbHcc_ZMass__1->SetBinContent(26,3283);
   VbbHcc_ZMass__1->SetBinContent(27,3079);
   VbbHcc_ZMass__1->SetBinContent(28,2842);
   VbbHcc_ZMass__1->SetBinContent(29,2565);
   VbbHcc_ZMass__1->SetBinContent(30,2400);
   VbbHcc_ZMass__1->SetBinContent(31,40065);
   VbbHcc_ZMass__1->SetBinError(2,4.690416);
   VbbHcc_ZMass__1->SetBinError(3,35.91657);
   VbbHcc_ZMass__1->SetBinError(4,69.88562);
   VbbHcc_ZMass__1->SetBinError(5,88.06816);
   VbbHcc_ZMass__1->SetBinError(6,96.73676);
   VbbHcc_ZMass__1->SetBinError(7,98.29547);
   VbbHcc_ZMass__1->SetBinError(8,97.70875);
   VbbHcc_ZMass__1->SetBinError(9,95.35722);
   VbbHcc_ZMass__1->SetBinError(10,92.49865);
   VbbHcc_ZMass__1->SetBinError(11,88.27797);
   VbbHcc_ZMass__1->SetBinError(12,87.27543);
   VbbHcc_ZMass__1->SetBinError(13,84.49852);
   VbbHcc_ZMass__1->SetBinError(14,83.98214);
   VbbHcc_ZMass__1->SetBinError(15,80.36168);
   VbbHcc_ZMass__1->SetBinError(16,77.94229);
   VbbHcc_ZMass__1->SetBinError(17,76.98701);
   VbbHcc_ZMass__1->SetBinError(18,74.47818);
   VbbHcc_ZMass__1->SetBinError(19,72.22188);
   VbbHcc_ZMass__1->SetBinError(20,70.43437);
   VbbHcc_ZMass__1->SetBinError(21,67.91907);
   VbbHcc_ZMass__1->SetBinError(22,64.86139);
   VbbHcc_ZMass__1->SetBinError(23,62.87289);
   VbbHcc_ZMass__1->SetBinError(24,60.90977);
   VbbHcc_ZMass__1->SetBinError(25,60.43178);
   VbbHcc_ZMass__1->SetBinError(26,57.29747);
   VbbHcc_ZMass__1->SetBinError(27,55.48874);
   VbbHcc_ZMass__1->SetBinError(28,53.31041);
   VbbHcc_ZMass__1->SetBinError(29,50.64583);
   VbbHcc_ZMass__1->SetBinError(30,48.98979);
   VbbHcc_ZMass__1->SetBinError(31,200.1624);
   VbbHcc_ZMass__1->SetEntries(198324);

   ci = TColor::GetColor("#000099");
   VbbHcc_ZMass__1->SetLineColor(ci);
   VbbHcc_ZMass__1->SetLineWidth(2);
   VbbHcc_ZMass__1->SetMarkerStyle(20);
   VbbHcc_ZMass__1->SetMarkerSize(1.2);
   VbbHcc_ZMass__1->GetXaxis()->SetRange(1,300);
   VbbHcc_ZMass__1->GetXaxis()->SetLabelFont(42);
   VbbHcc_ZMass__1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass__1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass__1->GetXaxis()->SetTitleFont(42);
   VbbHcc_ZMass__1->GetYaxis()->SetLabelFont(42);
   VbbHcc_ZMass__1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass__1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass__1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_ZMass__1->GetYaxis()->SetTitleFont(42);
   VbbHcc_ZMass__1->GetZaxis()->SetLabelFont(42);
   VbbHcc_ZMass__1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_ZMass__1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_ZMass__1->GetZaxis()->SetTitleFont(42);
   VbbHcc_ZMass__1->Draw("same E");
   
   Double_t Graph_from_VbbHcc_ZMass_fx1001[30] = {
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
   Double_t Graph_from_VbbHcc_ZMass_fy1001[30] = {
   0,
   137.8674,
   8250.159,
   27235.43,
   38318.58,
   38085.4,
   32896.03,
   27754.96,
   28330.35,
   25142.03,
   25556,
   26711.51,
   23831.12,
   19691.43,
   23296.57,
   21012.36,
   21617.96,
   15948.06,
   16377.44,
   16012.03,
   13576.39,
   12956.61,
   12349.69,
   13181.69,
   8765.676,
   9073.1,
   6900.575,
   6135.925,
   6656.61,
   5517.483};
   Double_t Graph_from_VbbHcc_ZMass_fex1001[30] = {
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
   Double_t Graph_from_VbbHcc_ZMass_fey1001[30] = {
   0,
   133.254,
   1426.99,
   2618.772,
   3078.024,
   2968.588,
   2634.242,
   2286.388,
   2389.854,
   2161.187,
   2248.841,
   2346.344,
   2173.909,
   1867.461,
   2206.152,
   2011.95,
   2111.498,
   1729.076,
   1776.705,
   1766.45,
   1617.129,
   1563.212,
   1541.798,
   1635.578,
   1263.863,
   1266.518,
   1051.855,
   915.4546,
   1030.877,
   947.2872};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_ZMass_fx1001,Graph_from_VbbHcc_ZMass_fy1001,Graph_from_VbbHcc_ZMass_fex1001,Graph_from_VbbHcc_ZMass_fey1001);
   gre->SetName("Graph_from_VbbHcc_ZMass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_ZMass1001 = new TH1F("Graph_Graph_from_VbbHcc_ZMass1001","",100,0,330);
   Graph_Graph_from_VbbHcc_ZMass1001->SetMinimum(0);
   Graph_Graph_from_VbbHcc_ZMass1001->SetMaximum(45536.27);
   Graph_Graph_from_VbbHcc_ZMass1001->SetDirectory(0);
   Graph_Graph_from_VbbHcc_ZMass1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_ZMass1001->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_ZMass1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZMass1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_ZMass1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZMass1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass1001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_ZMass1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_ZMass1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_ZMass1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_ZMass1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_ZMass1001);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_ZMass","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_ZMass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_ZMass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_ZMass","MC unc. (stat.)","fl");

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
   ZMass_VbbHcc_16->cd();
  
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
   
   TH1D *data_mc_ratio__2 = new TH1D("data_mc_ratio__2","",30,0,300);
   data_mc_ratio__2->SetBinContent(2,0.1595736);
   data_mc_ratio__2->SetBinContent(3,0.1563606);
   data_mc_ratio__2->SetBinContent(4,0.1793252);
   data_mc_ratio__2->SetBinContent(5,0.2024083);
   data_mc_ratio__2->SetBinContent(6,0.2457109);
   data_mc_ratio__2->SetBinContent(7,0.2937132);
   data_mc_ratio__2->SetBinContent(8,0.3439745);
   data_mc_ratio__2->SetBinContent(9,0.3209632);
   data_mc_ratio__2->SetBinContent(10,0.3403066);
   data_mc_ratio__2->SetBinContent(11,0.3049382);
   data_mc_ratio__2->SetBinContent(12,0.285158);
   data_mc_ratio__2->SetBinContent(13,0.2996082);
   data_mc_ratio__2->SetBinContent(14,0.3581761);
   data_mc_ratio__2->SetBinContent(15,0.2772082);
   data_mc_ratio__2->SetBinContent(16,0.2891155);
   data_mc_ratio__2->SetBinContent(17,0.2741702);
   data_mc_ratio__2->SetBinContent(18,0.3478166);
   data_mc_ratio__2->SetBinContent(19,0.3184869);
   data_mc_ratio__2->SetBinContent(20,0.3098295);
   data_mc_ratio__2->SetBinContent(21,0.339781);
   data_mc_ratio__2->SetBinContent(22,0.324699);
   data_mc_ratio__2->SetBinContent(23,0.320089);
   data_mc_ratio__2->SetBinContent(24,0.2814511);
   data_mc_ratio__2->SetBinContent(25,0.416625);
   data_mc_ratio__2->SetBinContent(26,0.3618389);
   data_mc_ratio__2->SetBinContent(27,0.4461947);
   data_mc_ratio__2->SetBinContent(28,0.4631738);
   data_mc_ratio__2->SetBinContent(29,0.3853313);
   data_mc_ratio__2->SetBinContent(30,0.434981);
   data_mc_ratio__2->SetBinContent(31,0.590881);
   data_mc_ratio__2->SetBinError(2,0.0340212);
   data_mc_ratio__2->SetBinError(3,0.00435344);
   data_mc_ratio__2->SetBinError(4,0.002565982);
   data_mc_ratio__2->SetBinError(5,0.002298314);
   data_mc_ratio__2->SetBinError(6,0.002539996);
   data_mc_ratio__2->SetBinError(7,0.002988065);
   data_mc_ratio__2->SetBinError(8,0.003520406);
   data_mc_ratio__2->SetBinError(9,0.003365903);
   data_mc_ratio__2->SetBinError(10,0.003679044);
   data_mc_ratio__2->SetBinError(11,0.003454295);
   data_mc_ratio__2->SetBinError(12,0.003267334);
   data_mc_ratio__2->SetBinError(13,0.003545721);
   data_mc_ratio__2->SetBinError(14,0.004264908);
   data_mc_ratio__2->SetBinError(15,0.003449507);
   data_mc_ratio__2->SetBinError(16,0.003709353);
   data_mc_ratio__2->SetBinError(17,0.003561252);
   data_mc_ratio__2->SetBinError(18,0.004670047);
   data_mc_ratio__2->SetBinError(19,0.00440984);
   data_mc_ratio__2->SetBinError(20,0.004398841);
   data_mc_ratio__2->SetBinError(21,0.005002733);
   data_mc_ratio__2->SetBinError(22,0.005006045);
   data_mc_ratio__2->SetBinError(23,0.00509105);
   data_mc_ratio__2->SetBinError(24,0.004620787);
   data_mc_ratio__2->SetBinError(25,0.006894138);
   data_mc_ratio__2->SetBinError(26,0.006315093);
   data_mc_ratio__2->SetBinError(27,0.008041176);
   data_mc_ratio__2->SetBinError(28,0.008688243);
   data_mc_ratio__2->SetBinError(29,0.007608352);
   data_mc_ratio__2->SetBinError(30,0.008879011);
   data_mc_ratio__2->SetBinError(31,0.02476018);
   data_mc_ratio__2->SetMinimum(0.4);
   data_mc_ratio__2->SetMaximum(1.6);
   data_mc_ratio__2->SetEntries(1175.7);
   data_mc_ratio__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__2->SetLineColor(ci);
   data_mc_ratio__2->SetLineWidth(2);
   data_mc_ratio__2->SetMarkerStyle(20);
   data_mc_ratio__2->SetMarkerSize(1.2);
   data_mc_ratio__2->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__2->GetXaxis()->SetRange(1,30);
   data_mc_ratio__2->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__2->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__2->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__2->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__2->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__2->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__2->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__2->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__2->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__2->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__2->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__2->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__2->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__2->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__2->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__2->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__2->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1002[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1002[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1002[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1002[30] = {
   0,
   0.9665372,
   0.1729651,
   0.09615314,
   0.08032719,
   0.07794557,
   0.08007779,
   0.08237764,
   0.08435666,
   0.08595913,
   0.08799661,
   0.08784019,
   0.0912214,
   0.09483624,
   0.09469856,
   0.09575078,
   0.0976733,
   0.1084192,
   0.1084849,
   0.1103202,
   0.1191133,
   0.1206497,
   0.1248451,
   0.1240796,
   0.1441832,
   0.1395904,
   0.15243,
   0.1491958,
   0.1548652,
   0.1716883};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1002,Graph_from_mc_statistical_error_fy1002,Graph_from_mc_statistical_error_fex1002,Graph_from_mc_statistical_error_fey1002);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1002 = new TH1F("Graph_Graph_from_mc_statistical_error1002","",100,0,330);
   Graph_Graph_from_mc_statistical_error1002->SetMinimum(0.03011649);
   Graph_Graph_from_mc_statistical_error1002->SetMaximum(2.159845);
   Graph_Graph_from_mc_statistical_error1002->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1002->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1002);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   ZMass_VbbHcc_16->cd();
   ZMass_VbbHcc_16->Modified();
   ZMass_VbbHcc_16->cd();
   ZMass_VbbHcc_16->SetSelected(ZMass_VbbHcc_16);
}
