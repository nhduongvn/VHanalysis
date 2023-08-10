void Z_dR_Bj0_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_16/Z_dR_Bj0_tags_16
//=========  (Thu Aug 10 12:20:13 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_tags_16 = new TCanvas("Z_dR_Bj0_tags_16", "Z_dR_Bj0_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_16->SetHighLightColor(2);
   Z_dR_Bj0_tags_16->Range(0,0,1,1);
   Z_dR_Bj0_tags_16->SetFillColor(0);
   Z_dR_Bj0_tags_16->SetFillStyle(4000);
   Z_dR_Bj0_tags_16->SetBorderMode(0);
   Z_dR_Bj0_tags_16->SetBorderSize(2);
   Z_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.856577,6.314516,11.89912);
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
   st->SetMaximum(7.848136e+09);
   
   TH1F *st_stack_49 = new TH1F("st_stack_49","",30,0,6);
   st_stack_49->SetMinimum(0.001439391);
   st_stack_49->SetMaximum(2.651849e+10);
   st_stack_49->SetDirectory(0);
   st_stack_49->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_49->SetLineColor(ci);
   st_stack_49->GetXaxis()->SetRange(1,30);
   st_stack_49->GetXaxis()->SetLabelFont(42);
   st_stack_49->GetXaxis()->SetLabelSize(0.035);
   st_stack_49->GetXaxis()->SetTitleSize(0.035);
   st_stack_49->GetXaxis()->SetTitleFont(42);
   st_stack_49->GetYaxis()->SetTitle("Events/0.2");
   st_stack_49->GetYaxis()->SetLabelFont(42);
   st_stack_49->GetYaxis()->SetLabelSize(0.05);
   st_stack_49->GetYaxis()->SetTitleSize(0.057);
   st_stack_49->GetYaxis()->SetTitleOffset(1.2);
   st_stack_49->GetYaxis()->SetTitleFont(42);
   st_stack_49->GetZaxis()->SetLabelFont(42);
   st_stack_49->GetZaxis()->SetLabelSize(0.035);
   st_stack_49->GetZaxis()->SetTitleSize(0.035);
   st_stack_49->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_49);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,4797.927);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,26794.95);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,20267.14);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,16328.14);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,18074.63);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,13474.65);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,6373.098);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,8408.635);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,6117);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,7041.026);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,6874.463);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,6973.883);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,4896.053);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,5138.276);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,2927.936);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,3581.893);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,3777.126);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,2522.361);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,2676.284);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,1063.473);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,1033.798);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,814.1527);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(23,375.1138);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(24,1361.111);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(25,272.9722);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(26,447.6892);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(27,96.35686);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(28,41.12951);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(29,51.71948);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(30,29.21315);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(31,361.3645);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,782.6787);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,2818.198);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,2183.311);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,2089.196);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,3196.667);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,2428.192);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,922.8558);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,1773.686);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,992.0097);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,1727.973);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,1707.834);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,1728.592);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,910.0098);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,1617.532);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,621.7285);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,818.5382);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,860.8172);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,1448.58);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,765.5859);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,390.2086);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,390.4657);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,385.2118);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(23,78.31355);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(24,542.3953);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(25,68.53766);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(26,274.258);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(27,36.53775);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(28,15.46202);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(29,32.89099);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(30,23.89216);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(31,272.7357);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(9435);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,16.43151);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,73.03435);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,87.82781);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,86.1914);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,67.97141);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,61.44667);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,46.80306);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,40.20745);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,36.28075);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,31.49524);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,28.5964);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,27.70573);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,22.0975);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,19.72739);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,19.41811);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,16.09216);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,11.6132);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,10.79363);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,7.441852);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,6.391867);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,4.762026);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,3.068698);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(23,3.906694);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,2.944705);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(25,2.178176);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(26,1.726314);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,0.9377615);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(28,0.8513516);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(29,0.2781962);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(30,0.3851207);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(31,0.1348404);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,1.628258);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,3.363054);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,3.600209);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,3.646995);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,3.203121);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,3.115218);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,2.760431);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,2.522714);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,2.44932);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,2.267202);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,2.071123);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,2.172829);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,1.812256);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,1.795375);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,1.707613);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,1.623354);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,1.335182);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,1.278416);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,1.056036);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,1.033334);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,0.8682095);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,0.5141342);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(23,0.8089232);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,0.6569515);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(25,0.6731352);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(26,0.5604773);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,0.4004506);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(28,0.3977158);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(29,0.1138388);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(30,0.1366591);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(31,0.07785014);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(9214);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(1,199.0088);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(2,1193.242);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(3,1712.31);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(4,1669.027);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(5,1398.892);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(6,1131.038);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(7,913.9896);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(8,774.7116);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(9,664.3257);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(10,597.6918);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(11,547.1852);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(12,482.2844);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(13,434.1182);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(14,385.3179);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(15,323.7624);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(16,273.1119);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(17,223.1797);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(18,188.8122);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(19,153.5358);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(20,122.1689);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(21,97.36029);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(22,71.66364);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(23,57.43971);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(24,39.5177);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(25,29.12526);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(26,21.63547);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(27,14.77987);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(28,9.633748);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(29,6.429438);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(30,3.620295);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinContent(31,6.643922);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(1,3.579563);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(2,8.735947);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(3,10.50005);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(4,10.37715);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(5,9.513666);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(6,8.548354);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(7,7.688698);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(8,7.071087);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(9,6.545947);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(10,6.216281);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(11,5.960423);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(12,5.583521);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(13,5.298497);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(14,4.998842);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(15,4.573162);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(16,4.20368);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(17,3.797609);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(18,3.49428);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(19,3.146026);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(20,2.797966);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(21,2.494359);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(22,2.138338);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(23,1.911916);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(24,1.595445);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(25,1.360131);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(26,1.165745);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(27,0.9694571);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(28,0.7759146);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(29,0.6409308);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(30,0.4764945);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetBinError(31,0.6346957);
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetEntries(221451);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(1,55.32967);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(2,243.9337);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(3,306.5897);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(4,271.9363);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(5,179.1018);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(6,143.2958);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(7,98.47575);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(8,100.4124);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(9,82.5363);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(10,63.31363);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(11,61.45962);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(12,73.646);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(13,57.07238);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(14,56.23765);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(15,39.10652);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(16,36.20189);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(17,31.98498);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(18,29.25736);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(19,24.72597);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(20,15.56694);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(21,13.11104);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(22,7.974709);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(23,5.764913);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(24,6.000952);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(25,4.255945);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(26,2.216866);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(27,2.260345);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(28,0.7790086);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(29,0.634216);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(30,0.1563598);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinContent(31,0.4909223);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(1,2.400754);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(2,8.953771);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(3,13.08407);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(4,14.62836);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(5,11.33696);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(6,9.785219);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(7,6.631591);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(8,8.748214);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(9,7.209988);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(10,5.135397);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(11,5.649743);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(12,7.477318);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(13,5.643261);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(14,6.898023);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(15,4.738462);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(16,4.716563);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(17,5.18593);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(18,3.980973);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(19,3.858389);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(20,2.837837);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(21,2.764205);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(22,1.151762);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(23,0.9664776);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(24,1.005545);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(25,0.7687649);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(26,0.4669408);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(27,0.4681039);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(28,0.2356038);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(29,0.2120373);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(30,0.1105631);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetBinError(31,0.3051497);
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetEntries(14977);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(1,10.0047);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(2,37.71538);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(3,27.17269);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(4,18.83225);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(5,10.58172);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(6,10.1588);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(7,7.374094);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(8,10.4728);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(9,11.63149);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(10,6.934448);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(11,4.318649);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(12,7.333804);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(13,3.947015);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(14,3.134502);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(15,2.263826);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(16,3.469774);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(17,1.418512);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(18,2.845675);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(19,1.483958);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(20,1.578221);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(21,0.544492);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(22,0.8102206);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(23,2.918278);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(24,0.8475439);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(25,0.6213254);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(26,0.4088676);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(27,0.3086552);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(28,0.0922278);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(29,0.008290537);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinContent(30,0.0002566649);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(1,0.9202618);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(2,6.883896);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(3,3.399359);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(4,2.964122);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(5,1.751642);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(6,1.507276);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(7,1.332625);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(8,1.992107);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(9,6.192084);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(10,1.931238);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(11,1.222992);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(12,1.700842);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(13,1.14965);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(14,0.6785975);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(15,0.5175132);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(16,1.225971);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(17,0.3180078);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(18,1.199034);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(19,0.3561126);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(20,0.471746);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(21,0.2229209);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(22,0.2566296);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(23,1.484361);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(24,0.2894698);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(25,0.2789891);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(26,0.1642114);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(27,0.183235);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(28,0.07644384);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(29,0.007785673);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetBinError(30,0.0002566649);
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetEntries(3105);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(1,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(2,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(6,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(7,0.2687386);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(8,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(11,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(13,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(14,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(19,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(1,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(2,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(6,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(7,0.1900269);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(8,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(11,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(13,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(14,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(19,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetBinError(21,0.1343693);
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(1,0.2179625);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(2,1.525737);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(3,0.9808311);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(4,0.2179625);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(5,0.2179625);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(6,0.3269437);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(7,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(8,0.3269437);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(9,0.3269437);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(10,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(11,0.3269437);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(12,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(13,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(17,0.2179625);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinContent(20,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(1,0.1541227);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(2,0.4077705);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(3,0.3269437);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(4,0.1541227);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(5,0.1541227);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(6,0.188761);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(7,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(8,0.188761);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(9,0.188761);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(10,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(11,0.188761);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(12,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(13,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(17,0.1541227);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetBinError(20,0.1089812);
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetEntries(48);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(1,0.7296215);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(2,4.620936);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(3,6.323386);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(4,4.377729);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(5,3.648107);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(6,3.161693);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(7,1.459243);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(8,1.945657);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(9,2.188864);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(10,2.918486);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(11,1.945657);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(12,1.945657);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(13,1.945657);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(14,1.216036);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(15,1.216036);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(16,0.4864143);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(17,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(18,0.9728286);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(20,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(21,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinContent(28,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(1,0.4212471);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(2,1.060115);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(3,1.240118);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(4,1.031841);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(5,0.9419372);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(6,0.8768959);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(7,0.5957334);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(8,0.6878937);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(9,0.7296215);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(10,0.8424943);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(11,0.6878937);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(12,0.6878937);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(13,0.6878937);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(14,0.5438277);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(15,0.5438277);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(16,0.3439469);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(17,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(18,0.4864143);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(20,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(21,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetBinError(28,0.2432072);
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetEntries(173);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(1,0.9246105);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(2,4.652163);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(3,6.084131);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(4,5.303688);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(5,3.86063);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(6,2.67541);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(7,2.127852);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(8,1.730006);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(9,1.549797);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(10,1.594156);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(11,1.527617);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(12,1.45692);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(13,1.361271);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(14,1.064619);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(15,0.7915331);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(16,0.6515246);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(17,0.5226059);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(18,0.3105139);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(19,0.2647685);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(20,0.1552569);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(21,0.1677329);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(22,0.112284);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(23,0.06931113);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(24,0.0554489);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(25,0.05129024);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(26,0.03881423);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(27,0.01663467);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(28,0.01108978);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(29,0.00554489);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinContent(31,0.001386223);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(1,0.03580106);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(2,0.08030525);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(3,0.09183659);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(4,0.08574434);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(5,0.07315526);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(6,0.06089921);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(7,0.05431092);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(8,0.04897115);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(9,0.04635044);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(10,0.0470091);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(11,0.04601758);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(12,0.04494013);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(13,0.04343989);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(14,0.03841613);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(15,0.03312463);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(16,0.03005259);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(17,0.02691557);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(18,0.02074708);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(19,0.01915798);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(20,0.0146704);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(21,0.01524845);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(22,0.012476);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(23,0.009802074);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(24,0.008767241);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(25,0.008432063);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(26,0.0073352);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(27,0.004802016);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(28,0.00392083);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(29,0.002772445);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetBinError(31,0.001386223);
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetEntries(28234);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(1,0.3897736);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(2,2.167084);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(3,2.853315);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(4,2.378481);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(5,1.75757);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(6,1.2551);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(7,0.9453626);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(8,0.7953392);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(9,0.6905382);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(10,0.6840779);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(11,0.6216279);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(12,0.571022);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(13,0.5067775);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(14,0.4113081);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(15,0.3413211);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(16,0.2745643);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(17,0.2185747);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(18,0.1740702);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(19,0.1270533);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(20,0.1001352);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(21,0.08362547);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(22,0.06711572);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(23,0.0567074);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(24,0.03589076);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(25,0.02440572);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(26,0.01794538);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(27,0.01507412);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(28,0.005383614);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(29,0.003589076);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(30,0.0007178152);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinContent(31,0.00143563);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(1,0.01182763);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(2,0.02788876);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(3,0.0320012);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(4,0.02921737);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(5,0.02511584);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(6,0.02122416);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(7,0.01842004);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(8,0.01689536);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(9,0.01574292);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(10,0.0156691);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(11,0.01493677);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(12,0.01431587);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(13,0.01348652);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(14,0.01214996);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(15,0.0110681);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(16,0.009926893);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(17,0.008857095);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(18,0.00790412);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(19,0.006752806);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(20,0.005994939);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(21,0.005478487);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(22,0.004907987);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(23,0.004511398);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(24,0.003589076);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(25,0.002959628);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(26,0.00253786);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(27,0.002325987);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(28,0.001390043);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(29,0.001134965);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(30,0.000507572);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetBinError(31,0.0007178152);
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(2,0.01367504);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(3,0.02461507);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(4,0.01367504);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(5,0.005470015);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(6,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(7,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(8,0.005470015);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(13,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(14,0.01094003);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinContent(17,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(1,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(2,0.006115663);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(3,0.008205022);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(4,0.006115663);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(5,0.003867885);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(6,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(7,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(8,0.003867885);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(9,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(10,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(12,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(13,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(14,0.005470015);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(15,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetBinError(17,0.002735007);
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(1,0.001071798);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(2,0.009288912);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(3,0.007145317);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(4,0.008217114);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(5,0.005001722);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(6,0.001071798);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(7,0.002500861);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(8,0.002143595);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(9,0.001786329);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(11,0.0007145317);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(12,0.001429063);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(13,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(15,0.001071798);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(16,0.001429063);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(17,0.0007145317);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(18,0.001071798);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(1,0.0006188026);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(2,0.001821706);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(3,0.001597741);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(4,0.001713387);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(5,0.001336766);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(6,0.0006188026);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(7,0.0009452366);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(8,0.000875119);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(9,0.0007988707);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(11,0.0005052502);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(12,0.0007145317);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(13,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(15,0.0006188026);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(16,0.0007145317);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(17,0.0005052502);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(18,0.0006188026);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__133 = new TH1D("VbbHcc_tags_Z_dR_Bj0__133","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(1,3457);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(2,13549);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(3,13231);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(4,10637);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(5,8507);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(6,6875);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(7,5450);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(8,4798);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(9,4062);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(10,3568);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(11,3306);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(12,2886);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(13,2648);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(14,2434);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(15,2173);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(16,1866);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(17,1525);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(18,1259);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(19,1031);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(20,859);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(21,732);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(22,603);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(23,451);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(24,345);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(25,314);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(26,236);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(27,137);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(28,89);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(29,70);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(30,38);
   VbbHcc_tags_Z_dR_Bj0__133->SetBinContent(31,49);
   VbbHcc_tags_Z_dR_Bj0__133->SetEntries(97214);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0__133->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0__133->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj0__133->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj0__133->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj0__133->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0__133->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__133->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__133->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__133->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__133->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__133->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__133->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__133->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj0__133->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__133->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__133->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__133->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj0__133->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__133->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1097[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1097[30] = {
   5081.102,
   28356,
   22417.31,
   18386.43,
   19740.67,
   14828.14,
   7444.656,
   9339.38,
   6916.535,
   7745.77,
   7520.579,
   7568.94,
   5417.348,
   5605.531,
   3314.84,
   3912.182,
   4046.528,
   2755.529,
   2863.998,
   1209.786,
   1150.205,
   897.8494,
   445.2694,
   1410.514,
   309.2289,
   473.7335,
   114.6752,
   52.74553,
   59.07876,
   33.3759};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1097[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1097[30] = {
   782.6929,
   2818.236,
   2183.382,
   2089.278,
   3196.703,
   2428.229,
   922.917,
   1773.725,
   992.0801,
   1727.995,
   1707.856,
   1728.619,
   910.0456,
   1617.556,
   621.7662,
   818.5652,
   860.8424,
   1448.591,
   765.6029,
   390.2307,
   390.4846,
   385.2199,
   78.36108,
   542.399,
   68.55934,
   274.2615,
   36.55626,
   15.49047,
   32.89811,
   23.89756};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj0_fx1097,Graph_from_VbbHcc_tags_Z_dR_Bj0_fy1097,Graph_from_VbbHcc_tags_Z_dR_Bj0_fex1097,Graph_from_VbbHcc_tags_Z_dR_Bj0_fey1097);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetMinimum(8.530505);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetMaximum(34290.71);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj01097);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_dR_Bj0","MC unc. (stat.)","fl");

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
   Z_dR_Bj0_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__134 = new TH1D("data_mc_ratio__134","",30,0,6);
   data_mc_ratio__134->SetBinContent(1,0.6803642);
   data_mc_ratio__134->SetBinContent(2,0.4778178);
   data_mc_ratio__134->SetBinContent(3,0.5902135);
   data_mc_ratio__134->SetBinContent(4,0.5785245);
   data_mc_ratio__134->SetBinContent(5,0.4309377);
   data_mc_ratio__134->SetBinContent(6,0.4636453);
   data_mc_ratio__134->SetBinContent(7,0.7320687);
   data_mc_ratio__134->SetBinContent(8,0.5137386);
   data_mc_ratio__134->SetBinContent(9,0.5872883);
   data_mc_ratio__134->SetBinContent(10,0.4606385);
   data_mc_ratio__134->SetBinContent(11,0.4395938);
   data_mc_ratio__134->SetBinContent(12,0.3812951);
   data_mc_ratio__134->SetBinContent(13,0.4888001);
   data_mc_ratio__134->SetBinContent(14,0.434214);
   data_mc_ratio__134->SetBinContent(15,0.655537);
   data_mc_ratio__134->SetBinContent(16,0.4769716);
   data_mc_ratio__134->SetBinContent(17,0.3768663);
   data_mc_ratio__134->SetBinContent(18,0.4568996);
   data_mc_ratio__134->SetBinContent(19,0.3599863);
   data_mc_ratio__134->SetBinContent(20,0.7100429);
   data_mc_ratio__134->SetBinContent(21,0.6364083);
   data_mc_ratio__134->SetBinContent(22,0.6716048);
   data_mc_ratio__134->SetBinContent(23,1.01287);
   data_mc_ratio__134->SetBinContent(24,0.2445918);
   data_mc_ratio__134->SetBinContent(25,1.015429);
   data_mc_ratio__134->SetBinContent(26,0.4981704);
   data_mc_ratio__134->SetBinContent(27,1.194678);
   data_mc_ratio__134->SetBinContent(28,1.687347);
   data_mc_ratio__134->SetBinContent(29,1.184859);
   data_mc_ratio__134->SetBinContent(30,1.138546);
   data_mc_ratio__134->SetBinContent(31,0.1329221);
   data_mc_ratio__134->SetBinError(1,0.01157156);
   data_mc_ratio__134->SetBinError(2,0.004104958);
   data_mc_ratio__134->SetBinError(3,0.005131127);
   data_mc_ratio__134->SetBinError(4,0.005609346);
   data_mc_ratio__134->SetBinError(5,0.004672252);
   data_mc_ratio__134->SetBinError(6,0.005591773);
   data_mc_ratio__134->SetBinError(7,0.00991639);
   data_mc_ratio__134->SetBinError(8,0.007416724);
   data_mc_ratio__134->SetBinError(9,0.009214704);
   data_mc_ratio__134->SetBinError(10,0.007711659);
   data_mc_ratio__134->SetBinError(11,0.007645398);
   data_mc_ratio__134->SetBinError(12,0.007097626);
   data_mc_ratio__134->SetBinError(13,0.009498877);
   data_mc_ratio__134->SetBinError(14,0.008801233);
   data_mc_ratio__134->SetBinError(15,0.01406265);
   data_mc_ratio__134->SetBinError(16,0.01104172);
   data_mc_ratio__134->SetBinError(17,0.009650556);
   data_mc_ratio__134->SetBinError(18,0.0128768);
   data_mc_ratio__134->SetBinError(19,0.01121132);
   data_mc_ratio__134->SetBinError(20,0.02422635);
   data_mc_ratio__134->SetBinError(21,0.02352233);
   data_mc_ratio__134->SetBinError(22,0.02734986);
   data_mc_ratio__134->SetBinError(23,0.04769418);
   data_mc_ratio__134->SetBinError(24,0.01316838);
   data_mc_ratio__134->SetBinError(25,0.05730397);
   data_mc_ratio__134->SetBinError(26,0.03242813);
   data_mc_ratio__134->SetBinError(27,0.1020683);
   data_mc_ratio__134->SetBinError(28,0.1788584);
   data_mc_ratio__134->SetBinError(29,0.1416177);
   data_mc_ratio__134->SetBinError(30,0.1846966);
   data_mc_ratio__134->SetBinError(31,0.1001591);
   data_mc_ratio__134->SetMinimum(0.4);
   data_mc_ratio__134->SetMaximum(1.6);
   data_mc_ratio__134->SetEntries(177.5454);
   data_mc_ratio__134->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__134->SetLineColor(ci);
   data_mc_ratio__134->SetLineWidth(2);
   data_mc_ratio__134->SetMarkerStyle(20);
   data_mc_ratio__134->SetMarkerSize(1.2);
   data_mc_ratio__134->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__134->GetXaxis()->SetRange(1,30);
   data_mc_ratio__134->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__134->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__134->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__134->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__134->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__134->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__134->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__134->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__134->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__134->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__134->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__134->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__134->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__134->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__134->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__134->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__134->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1098[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1098[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1098[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1098[30] = {
   0.15404,
   0.09938765,
   0.09739712,
   0.1136315,
   0.1619348,
   0.1637581,
   0.1239704,
   0.1899189,
   0.143436,
   0.2230888,
   0.227091,
   0.2283833,
   0.1679873,
   0.2885642,
   0.1875705,
   0.2092349,
   0.212736,
   0.5257034,
   0.2673196,
   0.3225617,
   0.3394913,
   0.4290474,
   0.1759858,
   0.3845401,
   0.2217106,
   0.5789363,
   0.3187809,
   0.2936832,
   0.5568518,
   0.7160125};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1098,Graph_from_mc_statistical_error_fy1098,Graph_from_mc_statistical_error_fex1098,Graph_from_mc_statistical_error_fey1098);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1098 = new TH1F("Graph_Graph_from_mc_statistical_error1098","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1098->SetMinimum(0.140785);
   Graph_Graph_from_mc_statistical_error1098->SetMaximum(1.859215);
   Graph_Graph_from_mc_statistical_error1098->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1098->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1098->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1098->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1098->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1098->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1098->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1098);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_tags_16->cd();
   Z_dR_Bj0_tags_16->Modified();
   Z_dR_Bj0_tags_16->cd();
   Z_dR_Bj0_tags_16->SetSelected(Z_dR_Bj0_tags_16);
}
