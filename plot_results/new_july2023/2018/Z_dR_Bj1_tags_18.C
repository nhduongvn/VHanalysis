void Z_dR_Bj1_tags_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_18/Z_dR_Bj1_tags_18
//=========  (Fri Jul 14 13:38:02 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_tags_18 = new TCanvas("Z_dR_Bj1_tags_18", "Z_dR_Bj1_tags_18",0,0,600,600);
   Z_dR_Bj1_tags_18->SetHighLightColor(2);
   Z_dR_Bj1_tags_18->Range(0,0,1,1);
   Z_dR_Bj1_tags_18->SetFillColor(0);
   Z_dR_Bj1_tags_18->SetFillStyle(4000);
   Z_dR_Bj1_tags_18->SetBorderMode(0);
   Z_dR_Bj1_tags_18->SetBorderSize(2);
   Z_dR_Bj1_tags_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1241.329,6.314516,1240097);
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
   st->SetMaximum(1062822);
   
   TH1F *st_stack_55 = new TH1F("st_stack_55","",30,0,6);
   st_stack_55->SetMinimum(0.01);
   st_stack_55->SetMaximum(1115963);
   st_stack_55->SetDirectory(0);
   st_stack_55->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_55->SetLineColor(ci);
   st_stack_55->GetXaxis()->SetRange(1,30);
   st_stack_55->GetXaxis()->SetLabelFont(42);
   st_stack_55->GetXaxis()->SetLabelSize(0.035);
   st_stack_55->GetXaxis()->SetTitleSize(0.035);
   st_stack_55->GetXaxis()->SetTitleFont(42);
   st_stack_55->GetYaxis()->SetTitle("Events/0.2");
   st_stack_55->GetYaxis()->SetLabelFont(42);
   st_stack_55->GetYaxis()->SetLabelSize(0.05);
   st_stack_55->GetYaxis()->SetTitleSize(0.057);
   st_stack_55->GetYaxis()->SetTitleOffset(1.2);
   st_stack_55->GetYaxis()->SetTitleFont(42);
   st_stack_55->GetZaxis()->SetLabelFont(42);
   st_stack_55->GetZaxis()->SetLabelSize(0.035);
   st_stack_55->GetZaxis()->SetTitleSize(0.035);
   st_stack_55->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_55);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,92440.83);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,314100.2);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,249709.8);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,177845.4);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,130881.8);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,101693);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,78899.85);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,63443.09);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,58681.18);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,50141.53);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,45975.21);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,40583.72);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,37259.6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,37033.34);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,29121.83);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,29103.49);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,20161.5);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,18374.11);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,19294.22);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(20,13544.61);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,11370.07);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,8756.983);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,10604.02);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(24,5830.899);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,6693.135);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(26,4463.207);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(27,3592.541);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(28,2088.963);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(29,910.6968);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(30,739.637);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(31,757.0946);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,2177.262);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,5861.81);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,5699.597);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,5654.186);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,4814.009);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,4894.708);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,3896.032);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,2942.741);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,3377.192);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,3058.185);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,2539.79);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,2331.639);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,2269.653);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,3237.951);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,2025.62);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,2982.279);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,1614.058);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,2151.539);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,1807.159);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(20,1303.91);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,1200.733);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,913.6063);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,1368.698);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(24,740.8428);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,1844.262);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(26,725.7952);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(27,714.3843);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(28,508.4738);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(29,125.5172);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(30,353.2892);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(31,353.7423);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(155876);

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
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,379.6707);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,1872.887);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,2411.285);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,2269.472);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,1918.764);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,1609);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,1323.934);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,1161.515);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,1005.842);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,896.7516);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,823.9079);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,713.3225);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,644.3603);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,586.9625);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,486.8684);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,420.152);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,361.955);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,304.5622);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,238.3181);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,209.3199);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,169.098);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,128.3025);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,112.6307);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,79.69991);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(25,62.85251);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(26,46.70196);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(27,32.15913);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(28,19.7638);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(29,14.86377);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(30,9.110738);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(31,14.71719);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,8.349226);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,17.6475);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,19.9539);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,19.36232);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,17.71527);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,16.31256);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,14.78423);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,13.784);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,12.85192);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,12.20489);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,11.69646);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,10.73727);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,10.33978);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,9.857993);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,8.917243);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,8.265939);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,7.74488);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,7.207286);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,6.260537);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,6.027771);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,5.520269);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,4.736386);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,4.499828);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,3.79912);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(25,3.47055);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(26,2.998202);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(27,2.451246);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(28,1.899961);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(29,1.679606);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(30,1.229322);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(31,1.626865);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(222347);

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
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(1,3663.597);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(2,25356.31);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(3,39913.41);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(4,40650.77);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(5,35683.21);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(6,29225.24);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(7,24015.1);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(8,20269.44);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(9,17801.37);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(10,16179.13);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(11,14907.82);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(12,13798.19);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(13,12459.53);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(14,10841.43);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(15,9270.202);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(16,7783.366);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(17,6307.058);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(18,5096.189);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(19,4048.313);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(20,3193.681);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(21,2451.055);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(22,1861.572);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(23,1390.304);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(24,1000.803);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(25,711.9996);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(26,501.4668);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(27,326.0365);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(28,207.199);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(29,133.3421);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(30,87.88516);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinContent(31,144.6212);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(1,15.10089);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(2,39.73401);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(3,49.96268);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(4,50.47669);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(5,47.30239);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(6,42.79658);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(7,38.79186);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(8,35.63271);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(9,33.40386);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(10,31.85697);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(11,30.5907);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(12,29.44862);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(13,27.98504);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(14,26.1016);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(15,24.1205);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(16,22.0946);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(17,19.88208);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(18,17.87066);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(19,15.92213);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(20,14.12863);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(21,12.37576);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(22,10.77435);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(23,9.298222);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(24,7.892339);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(25,6.646422);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(26,5.580878);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(27,4.491881);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(28,3.574768);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(29,2.871053);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(30,2.328754);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetBinError(31,2.995341);
   VbbHcc_tags_Z_dR_Bj1_stack_3->SetEntries(5745643);

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
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(1,796.8676);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(2,2499.394);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(3,2550.738);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(4,1708.533);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(5,1008.078);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(6,696.6781);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(7,616.0645);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(8,448.7729);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(9,406.9583);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(10,357.9544);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(11,322.7464);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(12,282.1965);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(13,283.9919);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(14,251.0914);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(15,216.3469);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(16,199.7316);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(17,160.24);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(18,140.1151);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(19,123.9356);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(20,103.591);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(21,93.78192);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(22,76.24855);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(23,74.19462);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(24,55.74882);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(25,46.3233);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(26,28.62527);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(27,24.9318);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(28,13.48068);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(29,7.163658);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(30,5.344937);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinContent(31,6.192647);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(1,11.39435);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(2,26.80257);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(3,32.35766);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(4,30.78528);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(5,22.07181);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(6,17.31437);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(7,18.87023);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(8,14.0148);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(9,14.20035);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(10,13.14991);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(11,12.82318);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(12,11.67085);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(13,13.60268);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(14,12.53421);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(15,10.89256);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(16,11.98317);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(17,7.606467);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(18,9.032135);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(19,7.943677);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(20,5.256139);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(21,6.253036);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(22,4.532285);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(23,6.928623);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(24,5.313207);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(25,5.056819);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(26,2.263939);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(27,2.28934);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(28,1.645666);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(29,1.296362);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(30,1.146178);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetBinError(31,1.272753);
   VbbHcc_tags_Z_dR_Bj1_stack_4->SetEntries(86588);

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
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(1,440.7331);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(2,1478.874);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(3,1128.831);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(4,728.6485);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(5,583.1047);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(6,367.337);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(7,320.8781);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(8,261.3241);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(9,234.1298);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(10,218.8653);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(11,178.149);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(12,166.7441);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(13,140.8303);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(14,131.4594);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(15,118.3609);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(16,107.7277);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(17,83.26911);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(18,83.09699);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(19,70.05871);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(20,50.18346);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(21,58.04982);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(22,47.12398);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(23,48.77963);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(24,27.19281);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(25,24.6185);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(26,25.01059);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(27,11.82091);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(28,6.388716);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(29,5.687554);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(30,5.502037);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinContent(31,2.268873);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(1,14.48356);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(2,43.57542);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(3,39.15683);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(4,32.53297);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(5,31.96199);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(6,17.39355);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(7,21.71787);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(8,17.96069);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(9,20.04858);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(10,14.67989);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(11,18.46761);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(12,18.54523);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(13,9.901432);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(14,10.62248);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(15,10.04254);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(16,16.54941);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(17,7.971581);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(18,12.83386);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(19,8.050332);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(20,5.782613);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(21,12.286);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(22,6.386503);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(23,11.72329);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(24,4.588322);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(25,4.529848);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(26,4.954678);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(27,3.18239);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(28,1.085114);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(29,1.107396);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(30,2.977815);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetBinError(31,0.6003622);
   VbbHcc_tags_Z_dR_Bj1_stack_5->SetEntries(38399);

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
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(1,1.445242);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(2,6.359064);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(3,3.46858);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(4,3.179532);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(5,4.335725);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(6,2.601435);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(7,3.46858);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(8,1.73429);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(9,1.156193);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(10,2.023338);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(11,1.445242);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(12,1.445242);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(13,1.156193);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(14,1.156193);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(15,1.156193);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(16,0.2890483);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(18,0.867145);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(19,1.156193);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(20,0.867145);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(21,0.5780967);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(22,0.5780967);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(24,0.5780967);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinContent(27,0.5780967);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(1,0.6463317);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(2,1.355757);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(3,1.001293);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(4,0.9586649);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(5,1.119479);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(6,0.867145);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(7,1.001293);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(8,0.708021);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(9,0.5780967);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(10,0.76475);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(11,0.6463317);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(12,0.6463317);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(13,0.5780967);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(14,0.5780967);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(15,0.5780967);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(16,0.2890483);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(18,0.5006464);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(19,0.5780967);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(20,0.5006464);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(21,0.4087761);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(22,0.4087761);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(24,0.4087761);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetBinError(27,0.4087761);
   VbbHcc_tags_Z_dR_Bj1_stack_6->SetEntries(144);

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
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(1,7.4639);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(2,25.50166);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(3,21.35505);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(4,15.54979);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(5,9.329876);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(6,2.695297);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(7,2.487967);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(8,2.695297);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(9,2.073306);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(10,1.865975);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(11,2.073306);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(12,2.280636);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(13,1.451314);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(14,1.865975);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(15,1.658645);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(16,0.4146611);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(17,0.2073306);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(18,1.036653);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(19,0.6219917);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(20,0.2073306);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(21,1.243983);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(23,0.4146611);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(24,0.6219917);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(26,0.2073306);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(29,0.2073306);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(30,0.2073306);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(31,0.4146611);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(1,1.243983);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(2,2.299407);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(3,2.104175);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(4,1.795535);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(5,1.390816);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(6,0.747541);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(7,0.7182142);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(8,0.747541);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(9,0.6556368);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(10,0.6219917);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(11,0.6556368);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(12,0.6876377);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(13,0.5485451);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(14,0.6219917);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(15,0.5864194);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(16,0.2932097);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(17,0.2073306);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(18,0.4636052);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(19,0.3591071);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(20,0.2073306);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(21,0.5078541);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(23,0.2932097);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(24,0.3591071);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(26,0.2073306);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(29,0.2073306);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(30,0.2073306);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(31,0.2932097);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetEntries(512);

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
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(1,6.182678);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(2,22.05155);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(3,23.70026);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(4,11.95318);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(5,6.800945);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(6,4.533964);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(7,5.152231);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(8,3.297428);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(9,2.88525);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(10,2.67916);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(11,1.648714);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(12,2.67916);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(13,2.266982);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(14,1.236536);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(15,1.030446);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(16,0.6182678);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(17,1.030446);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(18,1.030446);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(19,0.6182678);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(20,0.824357);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(21,0.824357);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(22,0.2060893);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(23,0.6182678);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(24,0.2060893);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(26,0.4121785);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(27,0.2060893);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinContent(31,0.2060893);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(1,1.128797);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(2,2.131804);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(3,2.210061);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(4,1.569529);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(5,1.183893);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(6,0.9666443);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(7,1.030446);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(8,0.824357);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(9,0.7711154);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(10,0.7430654);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(11,0.5829084);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(12,0.7430654);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(13,0.6835207);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(14,0.5048135);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(15,0.4608296);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(16,0.3569571);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(17,0.4608296);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(18,0.4608296);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(19,0.3569571);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(20,0.4121785);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(21,0.4121785);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(22,0.2060893);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(23,0.3569571);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(24,0.2060893);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(26,0.2914542);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(27,0.2060893);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetBinError(31,0.2060893);
   VbbHcc_tags_Z_dR_Bj1_stack_8->SetEntries(509);

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
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(1,2.811508);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(2,11.98662);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(3,13.70324);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(4,10.85745);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(5,7.271062);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(6,4.596701);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(7,3.341808);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(8,2.516642);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(9,2.096059);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(10,2.155489);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(11,2.054915);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(12,1.924626);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(13,1.611474);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(14,1.398897);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(15,1.067459);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(16,0.9943137);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(17,0.8708817);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(18,0.6423038);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(19,0.5805878);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(20,0.4731562);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(21,0.4502984);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(22,0.3291521);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(23,0.3154375);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(24,0.278865);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(25,0.1691476);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(26,0.1211463);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(27,0.07085914);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(28,0.02971512);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(29,0.009143115);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(30,0.004571557);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinContent(31,0.002285779);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(1,0.08016536);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(2,0.1655257);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(3,0.1769819);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(4,0.1575364);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(5,0.1289187);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(6,0.1025039);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(7,0.08739928);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(8,0.07584515);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(9,0.06921797);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(10,0.07019239);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(11,0.06853525);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(12,0.06632698);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(13,0.06069162);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(14,0.05654704);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(15,0.04939609);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(16,0.04767369);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(17,0.04461662);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(18,0.03831663);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(19,0.03642932);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(20,0.03288663);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(21,0.03208243);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(22,0.02742934);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(23,0.02685182);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(24,0.02524725);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(25,0.01966301);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(26,0.01664072);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(27,0.01272668);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(28,0.008241492);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(29,0.004571557);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(30,0.003232579);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetBinError(31,0.002285779);
   VbbHcc_tags_Z_dR_Bj1_stack_9->SetEntries(32696);

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
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(1,3.144663);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(2,11.96462);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(3,14.06842);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(4,11.49009);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(5,7.7004);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(6,4.871694);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(7,3.279988);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(8,2.457904);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(9,2.059084);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(10,1.797376);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(11,1.577399);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(12,1.417632);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(13,1.324633);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(14,1.162482);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(15,0.9550237);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(16,0.8232757);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(17,0.7368348);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(18,0.6456246);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(19,0.5782603);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(20,0.5019538);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(21,0.4465123);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(22,0.3803403);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(23,0.3111875);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(24,0.2563422);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(25,0.2086506);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(26,0.1174405);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(27,0.09419085);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(28,0.04173012);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(29,0.01907663);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(30,0.00894217);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinContent(31,0.00774988);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(1,0.04329751);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(2,0.08445499);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(3,0.09157954);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(4,0.08276326);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(5,0.06775362);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(6,0.05389095);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(7,0.04421931);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(8,0.0382788);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(9,0.03503586);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(10,0.03273372);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(11,0.03066525);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(12,0.02907084);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(13,0.02810112);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(14,0.02632503);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(15,0.02386068);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(16,0.02215381);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(17,0.02095853);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(18,0.0196185);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(19,0.01856682);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(20,0.01729847);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(21,0.01631521);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(22,0.01505782);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(23,0.01362031);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(24,0.01236192);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(25,0.01115284);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(26,0.008367289);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(27,0.007493422);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(28,0.004987704);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(29,0.003372303);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(30,0.002308858);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetBinError(31,0.00214943);
   VbbHcc_tags_Z_dR_Bj1_stack_10->SetEntries(124885);

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
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(1,0.1388215);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(2,0.5552859);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(3,0.4346705);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(4,0.2639884);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(5,0.1115123);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(6,0.08192743);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(7,0.08647895);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(8,0.05006676);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(9,0.03413643);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(10,0.03868795);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(11,0.04096371);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(12,0.05006676);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(13,0.0182061);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(14,0.0182061);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(15,0.02275762);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(16,0.006827286);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(17,0.02275762);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(18,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(19,0.0295849);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(20,0.009103048);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(21,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(22,0.009103048);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(23,0.006827286);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(24,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(25,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(26,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(27,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinContent(28,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(1,0.01777427);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(2,0.03554854);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(3,0.03145166);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(4,0.02451071);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(5,0.01593033);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(6,0.01365457);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(7,0.01402874);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(8,0.01067427);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(9,0.008813988);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(10,0.009383207);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(11,0.00965524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(12,0.01067427);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(13,0.006436827);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(14,0.006436827);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(15,0.007196591);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(16,0.003941735);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(17,0.007196591);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(18,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(19,0.008205376);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(20,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(21,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(22,0.004551524);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(23,0.003941735);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(24,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(25,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(26,0.003218413);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(27,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetBinError(28,0.002275762);
   VbbHcc_tags_Z_dR_Bj1_stack_11->SetEntries(903);

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
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(1,0.05184063);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(2,0.2517117);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(3,0.2307357);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(4,0.141438);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(5,0.05753411);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(6,0.03865573);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(7,0.02906671);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(8,0.02397254);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(9,0.02127563);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(10,0.01648112);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(11,0.01767975);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(12,0.01797941);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(13,0.01498284);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(14,0.01378421);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(15,0.01138696);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(16,0.009888674);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(17,0.005993136);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(18,0.007191763);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(19,0.00659245);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(20,0.00659245);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(21,0.004494852);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(22,0.005094166);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(23,0.003595882);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(24,0.005693479);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(25,0.002397254);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(26,0.001498284);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinContent(27,0.002097598);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(1,0.00394137);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(2,0.008684879);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(3,0.008315139);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(4,0.006510212);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(5,0.004152166);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(6,0.003403447);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(7,0.002951277);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(8,0.002680212);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(9,0.002524953);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(10,0.002222314);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(11,0.002301708);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(12,0.002321132);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(13,0.002118894);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(14,0.002032371);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(15,0.001847209);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(16,0.001721397);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(17,0.001340106);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(18,0.001468013);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(19,0.001405515);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(20,0.001405515);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(21,0.001160566);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(22,0.001235517);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(23,0.001038042);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(24,0.001306174);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(25,0.0008475574);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(26,0.000670053);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetBinError(27,0.0007928174);
   VbbHcc_tags_Z_dR_Bj1_stack_12->SetEntries(3336);

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
   
   TH1D *VbbHcc_tags_Z_dR_Bj1__109 = new TH1D("VbbHcc_tags_Z_dR_Bj1__109","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(1,112164);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(2,478270);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(3,431192);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(4,319803);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(5,249145);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(6,197442);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(7,160113);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(8,133089);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(9,115124);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(10,101944);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(11,91653);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(12,83607);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(13,75963);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(14,67603);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(15,60203);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(16,53459);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(17,44198);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(18,37291);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(19,32210);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(20,27388);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(21,22985);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(22,19125);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(23,15622);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(24,12821);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(25,9744);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(26,7122);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(27,4814);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(28,2962);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(29,1936);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(30,1106);
   VbbHcc_tags_Z_dR_Bj1__109->SetBinContent(31,2008);
   VbbHcc_tags_Z_dR_Bj1__109->SetEntries(2972106);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1__109->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1__109->SetLineWidth(2);
   VbbHcc_tags_Z_dR_Bj1__109->SetMarkerStyle(20);
   VbbHcc_tags_Z_dR_Bj1__109->SetMarkerSize(1.2);
   VbbHcc_tags_Z_dR_Bj1__109->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1__109->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__109->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__109->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__109->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__109->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__109->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__109->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__109->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1__109->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__109->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1__109->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__109->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1__109->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1__109->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1109[30] = {
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1109[30] = {
   97742.94,
   345386.3,
   295791.1,
   223256.3,
   170110.6,
   133610.7,
   105193.7,
   85596.92,
   78139.81,
   67804.81,
   62216.68,
   55553.99,
   50796.16,
   48851.14,
   39219.51,
   37617.62,
   27076.9,
   24002.31,
   23778.44,
   17104.28,
   14145.61,
   10871.74,
   12231.6,
   6996.295,
   7539.312,
   5065.875,
   3988.443,
   2335.869,
   1071.989,
   847.7008};
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1109[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1109[30] = {
   2177.409,
   5862.196,
   5700.078,
   5654.622,
   4814.431,
   4894.984,
   3896.36,
   2943.078,
   3377.471,
   3058.439,
   2540.101,
   2331.953,
   2269.912,
   3238.113,
   2025.838,
   2982.442,
   1614.236,
   2151.682,
   1807.276,
   1304.024,
   1200.889,
   913.7158,
   1368.805,
   740.928,
   1844.29,
   725.8434,
   714.4135,
   508.4938,
   125.573,
   353.3135};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_Z_dR_Bj1_fx1109,Graph_from_VbbHcc_tags_Z_dR_Bj1_fy1109,Graph_from_VbbHcc_tags_Z_dR_Bj1_fex1109,Graph_from_VbbHcc_tags_Z_dR_Bj1_fey1109);
   gre->SetName("Graph_from_VbbHcc_tags_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->SetMinimum(444.9485);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->SetMaximum(386323.9);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_dR_Bj11109);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj1_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__110 = new TH1D("data_mc_ratio__110","",30,0,6);
   data_mc_ratio__110->SetBinContent(1,1.147541);
   data_mc_ratio__110->SetBinContent(2,1.384739);
   data_mc_ratio__110->SetBinContent(3,1.457759);
   data_mc_ratio__110->SetBinContent(4,1.432448);
   data_mc_ratio__110->SetBinContent(5,1.464606);
   data_mc_ratio__110->SetBinContent(6,1.477741);
   data_mc_ratio__110->SetBinContent(7,1.522078);
   data_mc_ratio__110->SetBinContent(8,1.554834);
   data_mc_ratio__110->SetBinContent(9,1.473308);
   data_mc_ratio__110->SetBinContent(10,1.503492);
   data_mc_ratio__110->SetBinContent(11,1.473126);
   data_mc_ratio__110->SetBinContent(12,1.504968);
   data_mc_ratio__110->SetBinContent(13,1.495448);
   data_mc_ratio__110->SetBinContent(14,1.383857);
   data_mc_ratio__110->SetBinContent(15,1.535027);
   data_mc_ratio__110->SetBinContent(16,1.421116);
   data_mc_ratio__110->SetBinContent(17,1.632314);
   data_mc_ratio__110->SetBinContent(18,1.553642);
   data_mc_ratio__110->SetBinContent(19,1.354589);
   data_mc_ratio__110->SetBinContent(20,1.601237);
   data_mc_ratio__110->SetBinContent(21,1.624886);
   data_mc_ratio__110->SetBinContent(22,1.759149);
   data_mc_ratio__110->SetBinContent(23,1.277184);
   data_mc_ratio__110->SetBinContent(24,1.832541);
   data_mc_ratio__110->SetBinContent(25,1.292426);
   data_mc_ratio__110->SetBinContent(26,1.405877);
   data_mc_ratio__110->SetBinContent(27,1.206987);
   data_mc_ratio__110->SetBinContent(28,1.26805);
   data_mc_ratio__110->SetBinContent(29,1.805988);
   data_mc_ratio__110->SetBinContent(30,1.304706);
   data_mc_ratio__110->SetBinContent(31,2.169579);
   data_mc_ratio__110->SetBinError(1,0.003426426);
   data_mc_ratio__110->SetBinError(2,0.002002311);
   data_mc_ratio__110->SetBinError(3,0.002219986);
   data_mc_ratio__110->SetBinError(4,0.002533014);
   data_mc_ratio__110->SetBinError(5,0.002934235);
   data_mc_ratio__110->SetBinError(6,0.003325666);
   data_mc_ratio__110->SetBinError(7,0.003803852);
   data_mc_ratio__110->SetBinError(8,0.004261995);
   data_mc_ratio__110->SetBinError(9,0.004342208);
   data_mc_ratio__110->SetBinError(10,0.00470891);
   data_mc_ratio__110->SetBinError(11,0.004865937);
   data_mc_ratio__110->SetBinError(12,0.005204824);
   data_mc_ratio__110->SetBinError(13,0.00542588);
   data_mc_ratio__110->SetBinError(14,0.00532241);
   data_mc_ratio__110->SetBinError(15,0.006256147);
   data_mc_ratio__110->SetBinError(16,0.006146375);
   data_mc_ratio__110->SetBinError(17,0.007764301);
   data_mc_ratio__110->SetBinError(18,0.008045425);
   data_mc_ratio__110->SetBinError(19,0.007547655);
   data_mc_ratio__110->SetBinError(20,0.009675546);
   data_mc_ratio__110->SetBinError(21,0.01071767);
   data_mc_ratio__110->SetBinError(22,0.01272043);
   data_mc_ratio__110->SetBinError(23,0.01021845);
   data_mc_ratio__110->SetBinError(24,0.01618426);
   data_mc_ratio__110->SetBinError(25,0.01309293);
   data_mc_ratio__110->SetBinError(26,0.01665891);
   data_mc_ratio__110->SetBinError(27,0.01739601);
   data_mc_ratio__110->SetBinError(28,0.02329936);
   data_mc_ratio__110->SetBinError(29,0.04104518);
   data_mc_ratio__110->SetBinError(30,0.03923151);
   data_mc_ratio__110->SetBinError(31,0.8306861);
   data_mc_ratio__110->SetMinimum(0.4);
   data_mc_ratio__110->SetMaximum(1.6);
   data_mc_ratio__110->SetEntries(2362.455);
   data_mc_ratio__110->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__110->SetLineColor(ci);
   data_mc_ratio__110->SetLineWidth(2);
   data_mc_ratio__110->SetMarkerStyle(20);
   data_mc_ratio__110->SetMarkerSize(1.2);
   data_mc_ratio__110->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__110->GetXaxis()->SetRange(1,30);
   data_mc_ratio__110->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__110->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__110->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__110->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__110->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__110->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__110->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__110->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__110->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__110->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__110->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__110->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__110->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__110->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__110->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__110->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__110->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1110[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1110[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1110[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1110[30] = {
   0.0222769,
   0.01697287,
   0.01927062,
   0.02532794,
   0.02830178,
   0.03663618,
   0.03703987,
   0.03438299,
   0.04322344,
   0.04510653,
   0.04082669,
   0.04197634,
   0.04468668,
   0.06628532,
   0.05165383,
   0.07928311,
   0.05961673,
   0.0896448,
   0.07600482,
   0.07623965,
   0.08489483,
   0.08404506,
   0.1119073,
   0.1059029,
   0.2446231,
   0.1432809,
   0.1791209,
   0.2176893,
   0.1171401,
   0.4167903};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1110,Graph_from_mc_statistical_error_fy1110,Graph_from_mc_statistical_error_fex1110,Graph_from_mc_statistical_error_fey1110);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1110 = new TH1F("Graph_Graph_from_mc_statistical_error1110","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1110->SetMinimum(0.4998516);
   Graph_Graph_from_mc_statistical_error1110->SetMaximum(1.500148);
   Graph_Graph_from_mc_statistical_error1110->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1110->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1110->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1110->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1110->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1110->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1110->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1110->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1110->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1110->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1110->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1110->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1110->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1110->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1110->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1110->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1110);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_tags_18->cd();
   Z_dR_Bj1_tags_18->Modified();
   Z_dR_Bj1_tags_18->cd();
   Z_dR_Bj1_tags_18->SetSelected(Z_dR_Bj1_tags_18);
}
