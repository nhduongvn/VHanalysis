void Z_dR_tags_17()
{
//=========Macro generated from canvas: Z_dR_tags_17/Z_dR_tags_17
//=========  (Tue Aug 22 09:20:16 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_17 = new TCanvas("Z_dR_tags_17", "Z_dR_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_17->SetHighLightColor(2);
   Z_dR_tags_17->Range(0,0,1,1);
   Z_dR_tags_17->SetFillColor(0);
   Z_dR_tags_17->SetFillStyle(4000);
   Z_dR_tags_17->SetBorderMode(0);
   Z_dR_tags_17->SetBorderSize(2);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-82.0726,6.314516,82000.52);
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
   st->SetMaximum(70278.34);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",30,0,6);
   st_stack_18->SetMinimum(0.01);
   st_stack_18->SetMaximum(73792.26);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetRange(1,30);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetLabelSize(0.035);
   st_stack_18->GetXaxis()->SetTitleSize(0.035);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Events/0.2");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetLabelSize(0.05);
   st_stack_18->GetYaxis()->SetTitleSize(0.057);
   st_stack_18->GetYaxis()->SetTitleOffset(1.2);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetLabelSize(0.035);
   st_stack_18->GetZaxis()->SetTitleSize(0.035);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,8557.514);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,9790.177);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,7983.298);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,6078.081);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,6584.339);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,5732.973);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,4086.094);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,5241.661);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,7955.12);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,5925.332);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,9067.386);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,8481.262);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,30310);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,25270.67);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,9293.601);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,6452.107);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,7757.357);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,5611.26);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,4654.769);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,3267.028);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,3349.831);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,3069.802);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,2424.498);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,1767.849);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,1774.339);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(28,1560.44);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(29,1091.106);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(30,776.4718);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(31,1105.775);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,991.6049);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,1165.086);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,1042.821);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,919.0844);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,1079.405);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,921.686);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,607.3082);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,868.3231);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,1313.343);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,922.6885);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,1685.629);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,1126.638);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,20626.84);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,16561.71);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,1149.465);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,856.2486);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,1028);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,874.6003);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,807.1059);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,554.2153);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,680.0063);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,682.529);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,637.8138);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,540.2381);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,491.8906);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(28,446.3909);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(29,316.9168);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(30,383.611);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(31,463.4286);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(9351);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,0.05316449);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,20.45026);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,32.04302);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,27.81006);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,32.06066);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,28.07344);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,31.9211);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,39.63526);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,39.77251);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,42.26699);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,46.39509);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,49.20693);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,55.26507);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,52.44789);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,56.03987);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,43.10859);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,44.42229);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,33.72899);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,33.87049);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,26.92693);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,22.90598);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,21.48975);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,15.12326);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,12.41569);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,10.14369);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,8.708138);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,8.321216);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,5.957528);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(30,2.742374);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(31,2.469012);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,0.05316449);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,1.900717);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,2.330973);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,2.138094);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,2.39638);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,2.10596);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,2.307242);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,2.573137);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,2.582379);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,2.762625);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,2.83576);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,2.845707);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,3.146664);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,3.090757);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,3.156182);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,2.676277);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,2.805732);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,2.35527);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,2.347719);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,2.177636);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,1.958088);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,2.010362);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,1.610754);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,1.456597);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,1.273333);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,1.274546);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,1.231613);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,1.106777);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(30,0.65871);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(31,0.6483839);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(11598);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_3 = new TH1D("VbbHcc_tags_Z_dR_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(2,0.3982144);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(3,374.5732);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(4,577.1024);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(5,617.9451);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(6,666.2257);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(7,708.2484);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(8,749.6945);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(9,782.9119);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(10,814.7082);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(11,887.3909);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(12,943.0317);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(13,1034.255);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(14,1077.902);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(15,1122.493);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(16,1149.482);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(17,1075.13);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(18,985.3251);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(19,874.2572);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(20,739.8059);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(21,627.5347);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(22,504.8596);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(23,415.1916);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(24,328.2523);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(25,251.0125);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(26,206.6772);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(27,164.9346);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(28,128.3165);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(29,93.9034);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(30,60.08005);
   VbbHcc_tags_Z_dR_stack_3->SetBinContent(31,50.58014);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(2,0.1487987);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(3,5.005883);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(4,6.188867);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(5,6.409224);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(6,6.649512);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(7,6.84512);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(8,7.012618);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(9,7.148238);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(10,7.2867);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(11,7.611588);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(12,7.873198);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(13,8.247967);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(14,8.430531);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(15,8.639564);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(16,8.755304);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(17,8.481797);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(18,8.137209);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(19,7.635036);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(20,7.012668);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(21,6.455228);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(22,5.763607);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(23,5.229719);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(24,4.661869);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(25,4.024684);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(26,3.686249);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(27,3.277558);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(28,2.896886);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(29,2.470765);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(30,1.992194);
   VbbHcc_tags_Z_dR_stack_3->SetBinError(31,1.823657);
   VbbHcc_tags_Z_dR_stack_3->SetEntries(305979);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_4 = new TH1D("VbbHcc_tags_Z_dR_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(3,100.5084);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(4,144.2061);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(5,143.6742);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(6,141.5523);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(7,98.03018);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(8,90.56988);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(9,81.74566);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(10,73.20401);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(11,95.16113);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(12,90.99307);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(13,114.335);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(14,135.3364);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(15,121.3028);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(16,118.2686);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(17,122.3753);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(18,110.1813);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(19,101.2494);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(20,76.80557);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(21,52.9511);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(22,45.37196);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(23,48.63385);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(24,31.11018);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(25,26.53355);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(26,27.31051);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(27,21.56277);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(28,16.05966);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(29,13.30123);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(30,6.680117);
   VbbHcc_tags_Z_dR_stack_4->SetBinContent(31,6.290043);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(3,3.550137);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(4,4.715748);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(5,6.667418);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(6,8.013958);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(7,5.019694);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(8,5.697391);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(9,5.290562);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(10,4.430335);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(11,7.506552);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(12,5.659492);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(13,8.730828);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(14,8.755864);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(15,7.522247);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(16,5.659394);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(17,5.597853);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(18,5.20075);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(19,7.53434);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(20,5.268318);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(21,3.409604);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(22,3.550097);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(23,5.475907);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(24,2.416664);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(25,3.464623);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(26,4.730859);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(27,2.089637);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(28,1.466511);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(29,1.368307);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(30,1.016526);
   VbbHcc_tags_Z_dR_stack_4->SetBinError(31,1.019137);
   VbbHcc_tags_Z_dR_stack_4->SetEntries(17592);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_5 = new TH1D("VbbHcc_tags_Z_dR_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(3,23.70877);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(4,25.08762);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(5,8.766076);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(6,15.80653);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(7,14.51711);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(8,10.74821);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(9,7.882464);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(10,5.744145);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(11,16.33046);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(12,9.700451);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(13,9.080449);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(14,11.49121);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(15,11.13634);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(16,9.547938);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(17,5.480471);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(18,9.962104);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(19,6.055785);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(20,5.759951);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(21,5.254616);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(22,3.428896);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(23,5.151326);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(24,3.40604);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(25,2.633894);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(26,4.08429);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(27,1.51752);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(28,3.222899);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(29,2.676548);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(30,1.917387);
   VbbHcc_tags_Z_dR_stack_5->SetBinContent(31,0.5534586);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(3,3.002758);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(4,3.636892);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(5,1.076915);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(6,2.715049);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(7,5.437942);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(8,2.267902);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(9,1.539463);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(10,0.8983548);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(11,8.01881);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(12,2.384468);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(13,1.650663);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(14,2.510733);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(15,1.876171);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(16,2.137482);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(17,0.8271502);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(18,2.148414);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(19,0.9125033);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(20,0.9363603);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(21,0.8975875);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(22,0.6289175);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(23,1.581532);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(24,1.167828);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(25,0.8091872);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(26,1.665185);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(27,0.406795);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(28,1.360335);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(29,0.7400296);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(30,0.6528299);
   VbbHcc_tags_Z_dR_stack_5->SetBinError(31,0.2915598);
   VbbHcc_tags_Z_dR_stack_5->SetEntries(2041);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_6 = new TH1D("VbbHcc_tags_Z_dR_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(3,0.3752659);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(9,0.5405161);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(16,0.2950387);
   VbbHcc_tags_Z_dR_stack_6->SetBinContent(17,0.232904);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(3,0.3752659);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(9,0.3853357);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(16,0.2950387);
   VbbHcc_tags_Z_dR_stack_6->SetBinError(17,0.232904);
   VbbHcc_tags_Z_dR_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_7 = new TH1D("VbbHcc_tags_Z_dR_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(3,0.9237803);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(4,0.878935);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(5,0.2774426);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(6,0.4237883);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(7,0.2167551);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(8,0.2275793);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(10,0.2734067);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(11,0.2711943);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(13,0.3158821);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(14,0.5182622);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(15,0.4344674);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(16,0.1465374);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(17,0.2329143);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(19,0.24863);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(22,0.2454468);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(25,0.1753319);
   VbbHcc_tags_Z_dR_stack_7->SetBinContent(28,0.2962674);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(3,0.5358643);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(4,0.5083255);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(5,0.2774426);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(6,0.3060047);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(7,0.2167551);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(8,0.2275793);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(10,0.2734067);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(11,0.2711943);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(13,0.3158821);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(14,0.3682743);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(15,0.3113313);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(16,0.1465374);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(17,0.2329143);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(19,0.24863);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(22,0.2454468);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(25,0.1753319);
   VbbHcc_tags_Z_dR_stack_7->SetBinError(28,0.2962674);
   VbbHcc_tags_Z_dR_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_8 = new TH1D("VbbHcc_tags_Z_dR_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(3,2.355426);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(4,3.492247);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(5,5.317162);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(6,1.866051);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(7,1.005431);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(8,0.7731571);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(9,1.304534);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(10,0.9335974);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(11,0.7693111);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(12,0.3636173);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(13,1.409839);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(14,2.239326);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(15,3.547371);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(16,2.714155);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(17,3.070571);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(18,1.696354);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(19,1.947728);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(20,2.032383);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(21,1.028571);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(22,0.4598251);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(23,0.5662893);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(24,0.9779921);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(25,0.3271961);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(27,0.2198757);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(28,0.7352413);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(3,0.7734621);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(4,0.8867439);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(5,1.146631);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(6,0.6705362);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(7,0.5101676);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(8,0.4467556);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(9,0.5880547);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(10,0.4902132);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(11,0.4527871);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(12,0.257121);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(13,0.5868231);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(14,0.7354702);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(15,0.9618895);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(16,0.8328499);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(17,0.8504293);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(18,0.646464);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(19,0.6548548);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(20,0.6836812);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(21,0.5203895);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(22,0.3252653);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(23,0.3284999);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(24,0.4911433);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(25,0.3271961);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(27,0.2198757);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(28,0.4370992);
   VbbHcc_tags_Z_dR_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_9 = new TH1D("VbbHcc_tags_Z_dR_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(3,1.617936);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(4,3.14541);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(5,3.083317);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(6,2.539188);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(7,1.81097);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(8,1.165126);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(9,0.8962466);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(10,0.9895449);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(11,1.195111);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(12,1.505402);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(13,1.957143);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(14,2.385654);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(15,3.015542);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(16,3.333527);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(17,3.07008);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(18,2.655591);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(19,2.021912);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(20,1.498534);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(21,0.9916732);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(22,0.6139075);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(23,0.4208161);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(24,0.3418246);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(25,0.2765334);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(26,0.2835658);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(27,0.3217772);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(28,0.3338018);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(29,0.2876571);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(30,0.1422696);
   VbbHcc_tags_Z_dR_stack_9->SetBinContent(31,0.0853708);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(3,0.05326666);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(4,0.07242277);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(5,0.07036743);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(6,0.06299952);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(7,0.05304877);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(8,0.04277605);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(9,0.03734459);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(10,0.03947918);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(11,0.0435438);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(12,0.04909233);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(13,0.05554784);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(14,0.06234916);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(15,0.06971343);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(16,0.07403738);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(17,0.07033557);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(18,0.06570513);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(19,0.05735366);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(20,0.04905405);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(21,0.04024652);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(22,0.03084976);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(23,0.02612062);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(24,0.02313607);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(25,0.02055718);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(26,0.02078475);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(27,0.02261262);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(28,0.02344863);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(29,0.02169131);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(30,0.01510428);
   VbbHcc_tags_Z_dR_stack_9->SetBinError(31,0.01176865);
   VbbHcc_tags_Z_dR_stack_9->SetEntries(28819);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_10 = new TH1D("VbbHcc_tags_Z_dR_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(3,0.4788796);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(4,1.006114);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(5,1.170772);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(6,1.108266);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(7,0.8884915);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(8,0.6443781);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(9,0.5292885);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(10,0.5070264);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(11,0.5236333);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(12,0.6463333);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(13,0.7407124);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(14,0.8301492);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(15,0.8706545);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(16,0.9245737);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(17,0.8593368);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(18,0.7731236);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(19,0.6421806);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(20,0.5056009);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(21,0.4086674);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(22,0.3035113);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(23,0.2299332);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(24,0.1828059);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(25,0.1636444);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(26,0.1584589);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(27,0.166112);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(28,0.1332156);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(29,0.09900878);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(30,0.06814686);
   VbbHcc_tags_Z_dR_stack_10->SetBinContent(31,0.03579939);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(3,0.01412882);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(4,0.02012543);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(5,0.0214632);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(6,0.02070803);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(7,0.01850093);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(8,0.0157603);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(9,0.01432868);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(10,0.01406067);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(11,0.01422548);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(12,0.0158022);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(13,0.0168711);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(14,0.0178573);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(15,0.01832847);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(16,0.0188616);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(17,0.01817551);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(18,0.0172484);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(19,0.01571297);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(20,0.01392382);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(21,0.01255297);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(22,0.01083399);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(23,0.009419807);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(24,0.008362097);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(25,0.007946229);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(26,0.007775283);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(27,0.008040029);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(28,0.007222937);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(29,0.006284279);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(30,0.005192461);
   VbbHcc_tags_Z_dR_stack_10->SetBinError(31,0.003789438);
   VbbHcc_tags_Z_dR_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_11 = new TH1D("VbbHcc_tags_Z_dR_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(3,0.01753901);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(4,0.01261355);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(5,0.02981936);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(6,0.01299391);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(7,0.006284637);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(8,0.008541436);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(10,0.003973526);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(11,0.001917841);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(12,0.01256188);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(13,0.002627027);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(14,0.001310475);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(15,0.003574018);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(16,0.002484214);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(17,0.001621248);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(18,0.001610586);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(19,0.001470723);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(20,0.0003846095);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(23,0.001689974);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(25,0.001860547);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(26,0.00344075);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(27,0.001174952);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(28,0.001937955);
   VbbHcc_tags_Z_dR_stack_11->SetBinContent(31,0.001291342);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(3,0.005333833);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(4,0.00454047);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(5,0.006966069);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(6,0.004370528);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(7,0.002944362);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(8,0.003865841);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(10,0.002306276);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(11,0.001917841);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(12,0.004497373);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(13,0.001893882);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(14,0.001310475);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(15,0.00257689);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(16,0.001777704);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(17,0.001621248);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(18,0.001610586);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(19,0.001470723);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(20,0.0003846095);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(23,0.001689974);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(25,0.001860547);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(26,0.002438184);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(27,0.001174952);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(28,0.001937955);
   VbbHcc_tags_Z_dR_stack_11->SetBinError(31,0.001291342);
   VbbHcc_tags_Z_dR_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_12 = new TH1D("VbbHcc_tags_Z_dR_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(3,0.005241708);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(4,0.008674008);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(5,0.008222873);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(6,0.005037595);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(7,0.003084514);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(8,0.00152967);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(9,0.001668109);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(10,0.001525823);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(11,0.001048361);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(12,0.002014645);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(13,0.001938464);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(14,0.00145164);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(15,0.001893317);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(16,0.001646673);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(17,0.001647186);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(18,0.001613747);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(19,0.000904389);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(20,0.000276777);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(21,0.0007346994);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(22,0.001026519);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(23,0.000447394);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(25,0.0007490155);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(26,0.0002267968);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(27,0.00103433);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(28,0.0003966934);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(29,0.0003648148);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(30,0.0006385351);
   VbbHcc_tags_Z_dR_stack_12->SetBinContent(31,0.0002487778);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(3,0.00108592);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(4,0.001373924);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(5,0.001315549);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(6,0.001000491);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(7,0.0007900028);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(8,0.0005483442);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(9,0.0005955145);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(10,0.0005453282);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(11,0.0004702458);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(12,0.0006464126);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(13,0.0006541715);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(14,0.0005281994);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(15,0.0006130549);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(16,0.0005693003);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(17,0.0005612753);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(18,0.0005799499);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(19,0.0004587698);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(20,0.0002207301);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(21,0.0004277384);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(22,0.0004611503);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(23,0.0002677818);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(25,0.0003757999);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(26,0.0002267968);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(27,0.0004274964);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(28,0.0002819945);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(29,0.0002618145);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(30,0.0003720091);
   VbbHcc_tags_Z_dR_stack_12->SetBinError(31,0.0002487778);
   VbbHcc_tags_Z_dR_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR__48 = new TH1D("VbbHcc_tags_Z_dR__48","",30,0,6);
   VbbHcc_tags_Z_dR__48->SetBinContent(2,2);
   VbbHcc_tags_Z_dR__48->SetBinContent(3,3596);
   VbbHcc_tags_Z_dR__48->SetBinContent(4,4219);
   VbbHcc_tags_Z_dR__48->SetBinContent(5,3196);
   VbbHcc_tags_Z_dR__48->SetBinContent(6,2873);
   VbbHcc_tags_Z_dR__48->SetBinContent(7,2652);
   VbbHcc_tags_Z_dR__48->SetBinContent(8,2670);
   VbbHcc_tags_Z_dR__48->SetBinContent(9,2554);
   VbbHcc_tags_Z_dR__48->SetBinContent(10,2620);
   VbbHcc_tags_Z_dR__48->SetBinContent(11,2633);
   VbbHcc_tags_Z_dR__48->SetBinContent(12,2740);
   VbbHcc_tags_Z_dR__48->SetBinContent(13,2943);
   VbbHcc_tags_Z_dR__48->SetBinContent(14,3122);
   VbbHcc_tags_Z_dR__48->SetBinContent(15,3350);
   VbbHcc_tags_Z_dR__48->SetBinContent(16,3388);
   VbbHcc_tags_Z_dR__48->SetBinContent(17,3103);
   VbbHcc_tags_Z_dR__48->SetBinContent(18,3018);
   VbbHcc_tags_Z_dR__48->SetBinContent(19,2623);
   VbbHcc_tags_Z_dR__48->SetBinContent(20,2247);
   VbbHcc_tags_Z_dR__48->SetBinContent(21,1834);
   VbbHcc_tags_Z_dR__48->SetBinContent(22,1608);
   VbbHcc_tags_Z_dR__48->SetBinContent(23,1255);
   VbbHcc_tags_Z_dR__48->SetBinContent(24,1065);
   VbbHcc_tags_Z_dR__48->SetBinContent(25,875);
   VbbHcc_tags_Z_dR__48->SetBinContent(26,735);
   VbbHcc_tags_Z_dR__48->SetBinContent(27,618);
   VbbHcc_tags_Z_dR__48->SetBinContent(28,559);
   VbbHcc_tags_Z_dR__48->SetBinContent(29,478);
   VbbHcc_tags_Z_dR__48->SetBinContent(30,311);
   VbbHcc_tags_Z_dR__48->SetBinContent(31,232);
   VbbHcc_tags_Z_dR__48->SetEntries(63148);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR__48->SetLineColor(ci);
   VbbHcc_tags_Z_dR__48->SetLineWidth(2);
   VbbHcc_tags_Z_dR__48->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR__48->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR__48->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR__48->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__48->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__48->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__48->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__48->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__48->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__48->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__48->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR__48->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__48->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR__48->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR__48->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR__48->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR__48->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_fx1035[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fy1035[30] = {
   0,
   0.4513788,
   9082.529,
   10577.16,
   8791.38,
   6939.682,
   7437.139,
   6618.727,
   5001.542,
   6177.799,
   8999.032,
   7017.983,
   10278.69,
   9767.233,
   31625.25,
   26611.42,
   10547.16,
   7607.126,
   8777.511,
   6471.539,
   5369.866,
   3845.218,
   3841.517,
   3449.196,
   2718.039,
   2016.511,
   1971.772,
   1717.861,
   1207.332,
   848.1028};
   Double_t Graph_from_VbbHcc_tags_Z_dR_fex1035[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_fey1035[30] = {
   0,
   0.1580112,
   991.6308,
   1165.12,
   1042.865,
   919.1508,
   1079.455,
   921.7361,
   607.3811,
   868.3695,
   1313.414,
   922.7469,
   1685.675,
   1126.711,
   20626.85,
   16561.71,
   1149.514,
   856.3106,
   1028.059,
   874.6482,
   807.1425,
   554.2606,
   680.0534,
   682.5523,
   637.8382,
   540.2754,
   491.9079,
   446.4068,
   316.9322,
   383.6186};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_fx1035,Graph_from_VbbHcc_tags_Z_dR_fy1035,Graph_from_VbbHcc_tags_Z_dR_fex1035,Graph_from_VbbHcc_tags_Z_dR_fey1035);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR1035 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR1035","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetMaximum(57477.31);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR1035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR1035);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__49 = new TH1D("data_mc_ratio__49","",30,0,6);
   data_mc_ratio__49->SetBinContent(2,4.430868);
   data_mc_ratio__49->SetBinContent(3,0.395925);
   data_mc_ratio__49->SetBinContent(4,0.3988783);
   data_mc_ratio__49->SetBinContent(5,0.3635379);
   data_mc_ratio__49->SetBinContent(6,0.4139959);
   data_mc_ratio__49->SetBinContent(7,0.3565887);
   data_mc_ratio__49->SetBinContent(8,0.4034008);
   data_mc_ratio__49->SetBinContent(9,0.5106426);
   data_mc_ratio__49->SetBinContent(10,0.4240993);
   data_mc_ratio__49->SetBinContent(11,0.292587);
   data_mc_ratio__49->SetBinContent(12,0.3904256);
   data_mc_ratio__49->SetBinContent(13,0.2863205);
   data_mc_ratio__49->SetBinContent(14,0.3196402);
   data_mc_ratio__49->SetBinContent(15,0.105928);
   data_mc_ratio__49->SetBinContent(16,0.1273137);
   data_mc_ratio__49->SetBinContent(17,0.2942023);
   data_mc_ratio__49->SetBinContent(18,0.3967333);
   data_mc_ratio__49->SetBinContent(19,0.2988319);
   data_mc_ratio__49->SetBinContent(20,0.3472126);
   data_mc_ratio__49->SetBinContent(21,0.3415355);
   data_mc_ratio__49->SetBinContent(22,0.4181817);
   data_mc_ratio__49->SetBinContent(23,0.3266938);
   data_mc_ratio__49->SetBinContent(24,0.3087676);
   data_mc_ratio__49->SetBinContent(25,0.3219233);
   data_mc_ratio__49->SetBinContent(26,0.364491);
   data_mc_ratio__49->SetBinContent(27,0.3134236);
   data_mc_ratio__49->SetBinContent(28,0.3254046);
   data_mc_ratio__49->SetBinContent(29,0.3959143);
   data_mc_ratio__49->SetBinContent(30,0.3667008);
   data_mc_ratio__49->SetBinContent(31,0.1990067);
   data_mc_ratio__49->SetBinError(2,3.133097);
   data_mc_ratio__49->SetBinError(3,0.006602419);
   data_mc_ratio__49->SetBinError(4,0.006140952);
   data_mc_ratio__49->SetBinError(5,0.006430523);
   data_mc_ratio__49->SetBinError(6,0.007723751);
   data_mc_ratio__49->SetBinError(7,0.006924379);
   data_mc_ratio__49->SetBinError(8,0.007806945);
   data_mc_ratio__49->SetBinError(9,0.01010431);
   data_mc_ratio__49->SetBinError(10,0.008285465);
   data_mc_ratio__49->SetBinError(11,0.005702032);
   data_mc_ratio__49->SetBinError(12,0.007458697);
   data_mc_ratio__49->SetBinError(13,0.005277853);
   data_mc_ratio__49->SetBinError(14,0.005720644);
   data_mc_ratio__49->SetBinError(15,0.001830157);
   data_mc_ratio__49->SetBinError(16,0.002187276);
   data_mc_ratio__49->SetBinError(17,0.005281475);
   data_mc_ratio__49->SetBinError(18,0.007221693);
   data_mc_ratio__49->SetBinError(19,0.005834824);
   data_mc_ratio__49->SetBinError(20,0.007324769);
   data_mc_ratio__49->SetBinError(21,0.007975101);
   data_mc_ratio__49->SetBinError(22,0.0104285);
   data_mc_ratio__49->SetBinError(23,0.009221872);
   data_mc_ratio__49->SetBinError(24,0.009461433);
   data_mc_ratio__49->SetBinError(25,0.01088299);
   data_mc_ratio__49->SetBinError(26,0.01344445);
   data_mc_ratio__49->SetBinError(27,0.01260775);
   data_mc_ratio__49->SetBinError(28,0.01376315);
   data_mc_ratio__49->SetBinError(29,0.0181087);
   data_mc_ratio__49->SetBinError(30,0.0207937);
   data_mc_ratio__49->SetBinError(31,0.08018233);
   data_mc_ratio__49->SetMinimum(0.4);
   data_mc_ratio__49->SetMaximum(1.6);
   data_mc_ratio__49->SetEntries(15.95868);
   data_mc_ratio__49->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__49->SetLineColor(ci);
   data_mc_ratio__49->SetLineWidth(2);
   data_mc_ratio__49->SetMarkerStyle(20);
   data_mc_ratio__49->SetMarkerSize(1.2);
   data_mc_ratio__49->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__49->GetXaxis()->SetRange(1,30);
   data_mc_ratio__49->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__49->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__49->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__49->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__49->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__49->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__49->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__49->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__49->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__49->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__49->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__49->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__49->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__49->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__49->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__49->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__49->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1036[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1036[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1036[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1036[30] = {
   0,
   0.3500633,
   0.10918,
   0.1101544,
   0.1186236,
   0.1324486,
   0.1451438,
   0.1392618,
   0.1214388,
   0.1405629,
   0.1459505,
   0.1314832,
   0.163997,
   0.1153562,
   0.6522271,
   0.6223535,
   0.1089879,
   0.1125669,
   0.1171242,
   0.135153,
   0.1503096,
   0.1441428,
   0.1770273,
   0.1978874,
   0.2346685,
   0.2679259,
   0.249475,
   0.2598619,
   0.2625062,
   0.4523256};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1036,Graph_from_mc_statistical_error_fy1036,Graph_from_mc_statistical_error_fex1036,Graph_from_mc_statistical_error_fey1036);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1036 = new TH1F("Graph_Graph_from_mc_statistical_error1036","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1036->SetMinimum(0.2173275);
   Graph_Graph_from_mc_statistical_error1036->SetMaximum(1.782672);
   Graph_Graph_from_mc_statistical_error1036->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1036->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1036->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1036->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1036);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->SetSelected(Z_dR_tags_17);
}
