void Z_dR_Bj1_tags_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_16/Z_dR_Bj1_tags_16
//=========  (Thu Aug  3 12:23:29 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_tags_16 = new TCanvas("Z_dR_Bj1_tags_16", "Z_dR_Bj1_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_tags_16->SetHighLightColor(2);
   Z_dR_Bj1_tags_16->Range(0,0,1,1);
   Z_dR_Bj1_tags_16->SetFillColor(0);
   Z_dR_Bj1_tags_16->SetFillStyle(4000);
   Z_dR_Bj1_tags_16->SetBorderMode(0);
   Z_dR_Bj1_tags_16->SetBorderSize(2);
   Z_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-70.44763,6.314516,70387.17);
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
   st->SetMaximum(60325.15);
   
   TH1F *st_stack_53 = new TH1F("st_stack_53","",30,0,6);
   st_stack_53->SetMinimum(0.01);
   st_stack_53->SetMaximum(63341.41);
   st_stack_53->SetDirectory(0);
   st_stack_53->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_53->SetLineColor(ci);
   st_stack_53->GetXaxis()->SetRange(1,30);
   st_stack_53->GetXaxis()->SetLabelFont(42);
   st_stack_53->GetXaxis()->SetLabelSize(0.035);
   st_stack_53->GetXaxis()->SetTitleSize(0.035);
   st_stack_53->GetXaxis()->SetTitleFont(42);
   st_stack_53->GetYaxis()->SetTitle("Events/0.2");
   st_stack_53->GetYaxis()->SetLabelFont(42);
   st_stack_53->GetYaxis()->SetLabelSize(0.05);
   st_stack_53->GetYaxis()->SetTitleSize(0.057);
   st_stack_53->GetYaxis()->SetTitleOffset(1.2);
   st_stack_53->GetYaxis()->SetTitleFont(42);
   st_stack_53->GetZaxis()->SetLabelFont(42);
   st_stack_53->GetZaxis()->SetLabelSize(0.035);
   st_stack_53->GetZaxis()->SetTitleSize(0.035);
   st_stack_53->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_53);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,3826.842);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,21473.68);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,24999.6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,16494.23);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,13833.46);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,13661.52);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,12285.85);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,9545.047);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,6380.626);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,6864.156);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,8017.543);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,7418.862);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,4755.936);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,6184.48);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,3064.713);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,2271.758);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,1949.595);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,1750.674);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,1100.765);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,2682.023);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,1186.334);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,620.1056);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,817.7965);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,534.5445);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,531.5254);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(26,385.4465);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(27,85.53249);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(28,67.7844);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(29,26.99145);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(30,9.870471);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(31,48.58389);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,504.5068);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,1805.255);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,3069.938);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,2121.037);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,2011.09);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,2414.859);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,2381.709);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,1871.319);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,1025.61);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,1707.548);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,1790.522);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,1787.529);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,1572.765);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,1684.297);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,674.8612);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,612.7955);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,486.117);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,547.1252);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,291.3684);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,1472.73);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,472.121);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,279.5923);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,385.9432);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,276.8212);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,276.837);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(26,271.3326);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(27,34.14117);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(28,33.21285);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(29,10.93176);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(30,6.8744);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(31,31.6025);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(9717);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,22.10737);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,79.60939);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,93.19559);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,84.01951);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,63.0982);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,58.21861);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,49.79498);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,38.30602);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,37.61179);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,31.20579);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,26.8676);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,22.84938);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,21.45529);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,20.34434);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,17.7383);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,15.63046);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,12.7516);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,8.242095);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,7.71079);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,6.413585);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,4.871346);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,6.416882);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,1.879471);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,2.934418);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,1.691967);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,1.103483);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(27,1.343902);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(28,0.2833795);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(29,0.1312021);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(30,0.08746809);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(31,0.4468063);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,2.061874);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,3.576346);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,3.828508);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,3.589684);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,3.014592);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,2.966744);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,2.767577);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,2.365568);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,2.481419);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,2.20345);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,1.987117);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,1.86129);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,1.729793);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,1.830849);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,1.645019);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,1.613615);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,1.393175);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,1.148253);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,1.033736);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,1.03171);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,0.8675981);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,1.082486);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,0.3808269);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,0.6998607);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,0.5076206);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,0.4134622);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(27,0.4871063);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(28,0.1160057);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(29,0.07574959);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(30,0.06184928);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(31,0.2801279);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(9491);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(1,231.098);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(2,1217.583);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(3,1697.618);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(4,1661.824);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(5,1412.635);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(6,1139.191);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(7,919.4969);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(8,769.115);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(9,665.4534);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(10,592.4136);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(11,527.9124);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(12,473.1787);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(13,423.4343);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(14,378.707);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(15,329.0317);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(16,278.6426);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(17,224.8844);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(18,185.0929);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(19,151.2128);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(20,118.557);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(21,96.71048);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(22,70.49816);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(23,56.36378);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(24,40.85369);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(25,30.03936);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(26,21.87524);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(27,15.2967);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(28,8.753112);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(29,6.704418);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(30,2.845253);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(31,7.948717);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(1,3.80774);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(2,8.72197);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(3,10.33716);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(4,10.22776);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(5,9.445001);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(6,8.472269);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(7,7.611103);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(8,6.94642);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(9,6.472212);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(10,6.112267);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(11,5.775857);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(12,5.467327);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(13,5.163026);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(14,4.884718);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(15,4.566418);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(16,4.188909);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(17,3.750284);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(18,3.408824);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(19,3.082239);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(20,2.722929);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(21,2.458027);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(22,2.10089);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(23,1.875063);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(24,1.583205);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(25,1.362163);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(26,1.168233);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(27,0.9655613);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(28,0.7265419);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(29,0.6425168);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(30,0.4235798);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(31,0.708427);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetEntries(225965);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(1,64.12603);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(2,254.5077);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(3,311.9138);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(4,239.4085);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(5,177.028);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(6,140.8699);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(7,112.0393);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(8,103.6516);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(9,96.34192);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(10,80.08868);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(11,61.70499);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(12,64.0988);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(13,55.30475);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(14,44.50936);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(15,39.51045);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(16,27.10023);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(17,26.30683);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(18,22.65693);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(19,19.31464);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(20,17.2951);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(21,10.43043);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(22,9.131);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(23,7.03744);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(24,6.179225);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(25,7.073129);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(26,6.339992);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(27,5.273303);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(28,1.391628);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(29,0.6241197);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(30,0.3797856);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(31,0.2114526);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(1,2.506286);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(2,10.58591);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(3,13.72893);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(4,12.81705);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(5,11.21778);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(6,9.642202);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(7,8.967607);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(8,8.923386);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(9,9.54243);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(10,7.852886);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(11,6.109245);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(12,7.203586);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(13,6.051912);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(14,5.284252);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(15,5.183878);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(16,3.333073);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(17,3.374471);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(18,4.133028);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(19,4.076025);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(20,4.043561);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(21,1.273623);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(22,1.305047);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(23,1.068463);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(24,0.9537235);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(25,2.781636);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(26,2.792917);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(27,2.769616);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(28,0.394768);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(29,0.3193587);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(30,0.1701689);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(31,0.1224572);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetEntries(14953);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(1,13.7232);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(2,41.12755);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(3,28.01514);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(4,12.31265);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(5,14.26969);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(6,14.55278);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(7,6.41912);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(8,8.370125);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(9,4.298776);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(10,6.737676);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(11,4.414934);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(12,6.962977);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(13,4.452331);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(14,2.191932);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(15,3.065639);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(16,1.797088);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(17,7.999094);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(18,1.536017);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(19,1.133539);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(20,1.96021);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(21,0.5594959);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(22,0.7806209);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(23,1.544662);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(24,0.5810094);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(25,0.3530791);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(26,0.1239716);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(27,0.1031478);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(28,0.116408);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(29,0.1421551);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(31,0.07097071);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(1,1.552969);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(2,7.146987);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(3,3.288691);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(4,1.495242);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(5,2.330511);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(6,2.539164);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(7,1.275978);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(8,1.804563);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(9,0.6989727);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(10,1.691066);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(11,0.6662676);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(12,1.912754);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(13,1.214065);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(14,0.4471801);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(15,1.113772);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(16,0.3932405);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(17,6.082952);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(18,0.4728643);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(19,0.3185472);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(20,1.077401);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(21,0.1933548);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(22,0.4248622);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(23,1.048888);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(24,0.2276449);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(25,0.1494515);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(26,0.084286);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(27,0.0726568);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(28,0.0839267);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(29,0.100368);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(31,0.07097071);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetEntries(3420);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(3,0.2687386);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(4,0.4031079);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(5,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(6,0.2687386);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(8,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(14,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(3,0.1900269);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(4,0.2327345);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(5,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(6,0.1900269);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(7,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(8,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(14,0.1343693);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(1,0.5452932);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(2,0.9815278);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(3,0.8724691);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(4,0.7634105);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(5,0.3271759);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(6,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(7,0.2181173);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(8,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(9,0.2181173);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(10,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(11,0.3271759);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(12,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(15,0.2181173);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(17,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(24,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(1,0.2438625);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(2,0.3271759);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(3,0.3084644);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(4,0.288542);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(5,0.1888951);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(6,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(7,0.1542322);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(8,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(9,0.1542322);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(10,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(11,0.1888951);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(12,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(14,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(15,0.1542322);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(17,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(24,0.1090586);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetEntries(48);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(1,0.9728286);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(2,4.134522);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(3,6.080179);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(4,3.648107);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(5,5.593764);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(6,3.648107);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(7,2.188864);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(8,3.4049);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(9,1.70245);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(10,1.216036);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(11,0.7296215);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(12,1.459243);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(13,1.70245);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(14,1.459243);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(15,1.216036);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(16,0.4864143);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(17,0.9728286);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(18,0.2432072);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(19,0.4864143);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(24,0.4864143);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(25,0.2432072);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(1,0.4864143);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(2,1.002769);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(3,1.216036);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(4,0.9419372);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(5,1.166381);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(6,0.9419372);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(7,0.7296215);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(8,0.9099978);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(9,0.6434656);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(10,0.5438277);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(11,0.4212471);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(12,0.5957334);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(13,0.6434656);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(14,0.5957334);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(15,0.5438277);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(16,0.3439469);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(17,0.4864143);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(18,0.2432072);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(19,0.3439469);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(24,0.3439469);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(25,0.2432072);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetEntries(173);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(1,0.9658874);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(2,4.573882);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(3,5.935467);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(4,5.172925);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(5,3.860802);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(6,2.783624);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(7,2.087031);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(8,1.716065);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(9,1.608896);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(10,1.632254);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(11,1.537451);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(12,1.500354);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(13,1.367081);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(14,1.078551);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(15,0.9164252);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(16,0.6540006);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(17,0.4547777);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(18,0.3572272);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(19,0.2404414);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(20,0.1456388);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(21,0.1607522);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(22,0.1167858);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(23,0.1044203);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(24,0.05907988);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(25,0.06732359);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(26,0.04121852);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(27,0.01923531);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(28,0.008243705);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(29,0.005495803);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(30,0.001373951);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(31,0.001373951);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(1,0.03642913);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(2,0.07927351);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(3,0.09030526);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(4,0.08430506);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(5,0.07283235);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(6,0.06184305);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(7,0.05354884);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(8,0.04855706);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(9,0.04701643);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(10,0.04735648);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(11,0.04596066);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(12,0.04540279);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(13,0.04333938);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(14,0.03849515);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(15,0.03548412);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(16,0.02997607);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(17,0.02499684);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(18,0.02215429);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(19,0.01817566);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(20,0.01414569);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(21,0.01486155);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(22,0.0126672);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(23,0.01197783);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(24,0.009009598);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(25,0.009617655);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(26,0.007525438);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(27,0.005140853);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(28,0.003365478);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(29,0.002747902);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(30,0.001373951);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(31,0.001373951);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetEntries(28512);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(1,0.4375325);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(2,2.103163);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(3,2.800279);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(4,2.365969);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(5,1.787009);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(6,1.289324);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(7,0.9384391);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(8,0.7952206);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(9,0.7214631);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(10,0.6545085);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(11,0.6294452);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(12,0.5524653);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(13,0.4869428);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(14,0.4403968);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(15,0.3594784);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(16,0.2581513);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(17,0.2291496);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(18,0.1650593);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(19,0.13928);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(20,0.0991788);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(21,0.08915351);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(22,0.07017706);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(23,0.05549716);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(24,0.04153336);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(25,0.02577933);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(26,0.02291496);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(27,0.009667248);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(28,0.004654601);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(29,0.002506323);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(30,0.001432185);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(31,0.0007160924);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(1,0.01251626);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(2,0.02744139);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(3,0.03166432);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(4,0.02910544);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(5,0.02529489);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(6,0.02148576);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(7,0.01833043);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(8,0.01687382);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(9,0.01607225);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(10,0.01530831);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(11,0.01501234);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(12,0.01406443);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(13,0.01320409);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(14,0.01255717);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(15,0.01134504);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(16,0.009614057);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(17,0.009057932);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(18,0.007687578);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(19,0.007061775);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(20,0.005959077);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(21,0.005649874);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(22,0.005012647);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(23,0.004457639);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(24,0.003856276);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(25,0.003038123);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(26,0.00286437);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(27,0.001860463);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(28,0.001290954);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(29,0.0009473012);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(30,0.0007160924);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(31,0.0005063538);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetEntries(49090);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(1,0.008205022);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(2,0.01641004);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(3,0.01641004);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(4,0.03008508);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(5,0.005470015);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(6,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(7,0.005470015);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(24,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(25,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(26,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(1,0.004737172);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(2,0.006699373);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(3,0.006699373);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(4,0.009070994);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(5,0.003867885);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(6,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(7,0.003867885);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(9,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(14,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(24,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(25,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(26,0.002735007);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(1,0.003215393);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(2,0.008217114);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(3,0.007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(4,0.008217114);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(5,0.002500861);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(6,0.002143595);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(7,0.001429063);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(8,0.001071798);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(9,0.002500861);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(10,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(11,0.0007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(12,0.001786329);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(13,0.001071798);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(14,0.001071798);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(15,0.0007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(17,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(18,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(19,0.0007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(20,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(23,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(24,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(27,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(1,0.001071798);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(2,0.001713387);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(3,0.001597741);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(4,0.001713387);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(5,0.0009452366);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(6,0.000875119);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(7,0.0007145317);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(8,0.0006188026);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(9,0.0009452366);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(10,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(11,0.0005052502);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(12,0.0007988707);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(13,0.0006188026);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(14,0.0006188026);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(15,0.0005052502);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(17,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(18,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(19,0.0005052502);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(20,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(23,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(24,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(27,0.0003572658);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1__144 = new TH1D("VbbHcc_tags_Z_dR_Bj1__144","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(1,3999);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(2,13793);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(3,13270);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(4,10293);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(5,8515);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(6,6567);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(7,5435);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(8,4637);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(9,3981);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(10,3498);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(11,3164);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(12,2978);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(13,2604);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(14,2328);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(15,2083);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(16,1808);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(17,1455);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(18,1241);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(19,1043);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(20,897);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(21,705);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(22,529);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(23,497);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(24,381);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(25,259);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(26,203);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(27,130);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(28,102);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(29,65);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(30,37);
   VbbHcc_tags_Z_dR_Bj1__144->SetBinContent(31,48);
   VbbHcc_tags_Z_dR_Bj1__144->SetEntries(96574);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1__144->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1__144->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj1__144->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj1__144->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj1__144->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1__144->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__144->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__144->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__144->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__144->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__144->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__144->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__144->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1__144->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__144->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__144->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__144->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__144->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__144->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1105[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1105[30] = {
   4160.829,
   23078.32,
   27146.32,
   18504.19,
   15512.2,
   15022.46,
   13379.17,
   10470.65,
   7188.588,
   7578.214,
   8641.668,
   7989.575,
   5264.14,
   6633.458,
   3456.77,
   2596.327,
   2223.303,
   1968.968,
   1281.003,
   2826.494,
   1299.155,
   707.1192,
   884.7821,
   585.7921,
   571.0223,
   414.9561,
   107.5788,
   78.34182,
   34.60134,
   13.18578};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1105[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1105[30] = {
   504.5343,
   1805.326,
   3069.99,
   2121.104,
   2011.147,
   2414.897,
   2381.74,
   1871.356,
   1025.678,
   1707.579,
   1790.543,
   1787.554,
   1572.786,
   1684.313,
   674.8998,
   612.8213,
   486.1835,
   547.1528,
   291.4155,
   1472.739,
   472.13,
   279.6056,
   385.9509,
   276.8286,
   276.855,
   271.3498,
   34.27047,
   33.22345,
   10.956,
   6.889817};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1105,Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1105,Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1105,Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1105);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetMinimum(5.666369);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetMaximum(33237.31);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11105);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__145 = new TH1D("data_mc_ratio__145","",30,0,6);
   data_mc_ratio__145->SetBinContent(1,0.9611065);
   data_mc_ratio__145->SetBinContent(2,0.5976605);
   data_mc_ratio__145->SetBinContent(3,0.4888324);
   data_mc_ratio__145->SetBinContent(4,0.5562524);
   data_mc_ratio__145->SetBinContent(5,0.5489226);
   data_mc_ratio__145->SetBinContent(6,0.4371455);
   data_mc_ratio__145->SetBinContent(7,0.4062285);
   data_mc_ratio__145->SetBinContent(8,0.4428569);
   data_mc_ratio__145->SetBinContent(9,0.5537944);
   data_mc_ratio__145->SetBinContent(10,0.4615863);
   data_mc_ratio__145->SetBinContent(11,0.366133);
   data_mc_ratio__145->SetBinContent(12,0.3727357);
   data_mc_ratio__145->SetBinContent(13,0.4946677);
   data_mc_ratio__145->SetBinContent(14,0.3509482);
   data_mc_ratio__145->SetBinContent(15,0.6025857);
   data_mc_ratio__145->SetBinContent(16,0.6963684);
   data_mc_ratio__145->SetBinContent(17,0.6544316);
   data_mc_ratio__145->SetBinContent(18,0.6302795);
   data_mc_ratio__145->SetBinContent(19,0.8142055);
   data_mc_ratio__145->SetBinContent(20,0.3173543);
   data_mc_ratio__145->SetBinContent(21,0.5426603);
   data_mc_ratio__145->SetBinContent(22,0.7481058);
   data_mc_ratio__145->SetBinContent(23,0.5617202);
   data_mc_ratio__145->SetBinContent(24,0.6504014);
   data_mc_ratio__145->SetBinContent(25,0.4535725);
   data_mc_ratio__145->SetBinContent(26,0.4892084);
   data_mc_ratio__145->SetBinContent(27,1.208417);
   data_mc_ratio__145->SetBinContent(28,1.301987);
   data_mc_ratio__145->SetBinContent(29,1.87854);
   data_mc_ratio__145->SetBinContent(30,2.806052);
   data_mc_ratio__145->SetBinContent(31,0.838224);
   data_mc_ratio__145->SetBinError(1,0.01519833);
   data_mc_ratio__145->SetBinError(2,0.005088915);
   data_mc_ratio__145->SetBinError(3,0.004243503);
   data_mc_ratio__145->SetBinError(4,0.005482781);
   data_mc_ratio__145->SetBinError(5,0.005948655);
   data_mc_ratio__145->SetBinError(6,0.005394391);
   data_mc_ratio__145->SetBinError(7,0.005510241);
   data_mc_ratio__145->SetBinError(8,0.006503466);
   data_mc_ratio__145->SetBinError(9,0.008777129);
   data_mc_ratio__145->SetBinError(10,0.007804463);
   data_mc_ratio__145->SetBinError(11,0.006509096);
   data_mc_ratio__145->SetBinError(12,0.006830283);
   data_mc_ratio__145->SetBinError(13,0.009693777);
   data_mc_ratio__145->SetBinError(14,0.007273635);
   data_mc_ratio__145->SetBinError(15,0.01320305);
   data_mc_ratio__145->SetBinError(16,0.01637721);
   data_mc_ratio__145->SetBinError(17,0.01715666);
   data_mc_ratio__145->SetBinError(18,0.01789152);
   data_mc_ratio__145->SetBinError(19,0.0252111);
   data_mc_ratio__145->SetBinError(20,0.01059615);
   data_mc_ratio__145->SetBinError(21,0.02043777);
   data_mc_ratio__145->SetBinError(22,0.03252634);
   data_mc_ratio__145->SetBinError(23,0.0251966);
   data_mc_ratio__145->SetBinError(24,0.03332108);
   data_mc_ratio__145->SetBinError(25,0.02818362);
   data_mc_ratio__145->SetBinError(26,0.0343357);
   data_mc_ratio__145->SetBinError(27,0.1059851);
   data_mc_ratio__145->SetBinError(28,0.1289159);
   data_mc_ratio__145->SetBinError(29,0.2330042);
   data_mc_ratio__145->SetBinError(30,0.4613122);
   data_mc_ratio__145->SetBinError(31,0.4782887);
   data_mc_ratio__145->SetMinimum(0.4);
   data_mc_ratio__145->SetMaximum(1.6);
   data_mc_ratio__145->SetEntries(115.9228);
   data_mc_ratio__145->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__145->SetLineColor(ci);
   data_mc_ratio__145->SetLineWidth(2);
   data_mc_ratio__145->SetMarkerStyle(20);
   data_mc_ratio__145->SetMarkerSize(1.2);
   data_mc_ratio__145->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__145->GetXaxis()->SetRange(1,30);
   data_mc_ratio__145->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__145->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__145->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__145->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__145->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__145->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__145->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__145->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__145->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__145->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__145->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__145->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__145->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__145->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__145->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__145->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__145->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1106[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1106[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1106[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1106[30] = {
   0.1212581,
   0.07822604,
   0.1130905,
   0.1146283,
   0.1296493,
   0.1607524,
   0.1780185,
   0.1787239,
   0.1426815,
   0.2253274,
   0.2071987,
   0.2237358,
   0.2987736,
   0.2539118,
   0.19524,
   0.2360339,
   0.2186762,
   0.2778882,
   0.22749,
   0.5210479,
   0.3634131,
   0.3954151,
   0.4362101,
   0.4725714,
   0.4848409,
   0.6539242,
   0.3185616,
   0.4240832,
   0.3166352,
   0.5225186};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1106,Graph_from_mc_statistical_error_fy1106,Graph_from_mc_statistical_error_fex1106,Graph_from_mc_statistical_error_fey1106);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1106 = new TH1F("Graph_Graph_from_mc_statistical_error1106","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1106->SetMinimum(0.215291);
   Graph_Graph_from_mc_statistical_error1106->SetMaximum(1.784709);
   Graph_Graph_from_mc_statistical_error1106->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1106->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1106->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1106->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1106->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1106->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1106->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1106);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_tags_16->cd();
   Z_dR_Bj1_tags_16->Modified();
   Z_dR_Bj1_tags_16->cd();
   Z_dR_Bj1_tags_16->SetSelected(Z_dR_Bj1_tags_16);
}
