void H_dR_Bj1_both_16()
{
//=========Macro generated from canvas: H_dR_Bj1_both_16/H_dR_Bj1_both_16
//=========  (Mon Jul 24 10:12:18 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_16 = new TCanvas("H_dR_Bj1_both_16", "H_dR_Bj1_both_16",0,0,600,600);
   H_dR_Bj1_both_16->SetHighLightColor(2);
   H_dR_Bj1_both_16->Range(0,0,1,1);
   H_dR_Bj1_both_16->SetFillColor(0);
   H_dR_Bj1_both_16->SetFillStyle(4000);
   H_dR_Bj1_both_16->SetBorderMode(0);
   H_dR_Bj1_both_16->SetBorderSize(2);
   H_dR_Bj1_both_16->SetFrameFillStyle(1000);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1069.27,6.314516,1068211);
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
   st->SetMaximum(915507.3);
   
   TH1F *st_stack_237 = new TH1F("st_stack_237","",30,0,6);
   st_stack_237->SetMinimum(0.01);
   st_stack_237->SetMaximum(961282.7);
   st_stack_237->SetDirectory(0);
   st_stack_237->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_237->SetLineColor(ci);
   st_stack_237->GetXaxis()->SetRange(1,30);
   st_stack_237->GetXaxis()->SetLabelFont(42);
   st_stack_237->GetXaxis()->SetLabelSize(0.035);
   st_stack_237->GetXaxis()->SetTitleSize(0.035);
   st_stack_237->GetXaxis()->SetTitleFont(42);
   st_stack_237->GetYaxis()->SetTitle("Events/0.2");
   st_stack_237->GetYaxis()->SetLabelFont(42);
   st_stack_237->GetYaxis()->SetLabelSize(0.05);
   st_stack_237->GetYaxis()->SetTitleSize(0.057);
   st_stack_237->GetYaxis()->SetTitleOffset(1.2);
   st_stack_237->GetYaxis()->SetTitleFont(42);
   st_stack_237->GetZaxis()->SetLabelFont(42);
   st_stack_237->GetZaxis()->SetLabelSize(0.035);
   st_stack_237->GetZaxis()->SetTitleSize(0.035);
   st_stack_237->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_237);
   
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(1,99842.74);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(2,353032);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(3,331856.6);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(4,272173.8);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(5,224459.9);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(6,214375.7);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(7,185388);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(8,152333.9);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(9,130133.3);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(10,100587.5);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(11,104869.1);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(12,83440.79);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(13,87513.43);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(14,78629.56);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(15,74581.25);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(16,63635.14);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(17,58608.25);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(18,42110.13);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(19,25215.69);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(20,18990.95);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(21,17398.87);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(22,13106.75);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(23,7030.869);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(24,5991.907);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(25,3337.517);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(26,2011.234);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(27,1748.313);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(28,794.3986);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(29,960.8456);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(30,344.1404);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinContent(31,76.54789);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(1,3520.141);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(2,8623.023);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(3,8144.352);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(4,8436.77);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(5,8001.793);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(6,21936.22);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(7,21835.02);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(8,21513.56);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(9,6810.164);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(10,4987.589);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(11,5324.599);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(12,4821.546);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(13,5237.265);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(14,4549.381);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(15,4510.8);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(16,3782.361);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(17,4659.801);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(18,3971.583);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(19,2347.377);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(20,2112.193);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(21,2794.305);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(22,1973.241);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(23,998.037);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(24,954.5675);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(25,725.9354);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(26,485.7178);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(27,546.8317);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(28,385.2973);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(29,468.4357);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(30,270.9037);
   VbbHcc_both_H_dR_Bj1_stack_1->SetBinError(31,33.73531);
   VbbHcc_both_H_dR_Bj1_stack_1->SetEntries(182810);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(1,1178.906);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(2,3770.606);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(3,4292.653);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(4,3590.479);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(5,2797.892);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(6,2170.486);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(7,1768.146);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(8,1518.518);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(9,1327.673);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(10,1187.556);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(11,1045.197);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(12,962.9874);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(13,872.917);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(14,832.9147);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(15,792.2906);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(16,717.0634);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(17,481.9588);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(18,354.265);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(19,246.9708);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(20,192.0498);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(21,132.882);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(22,92.18219);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(23,70.21203);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(24,47.81215);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(25,30.51568);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(26,20.39474);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(27,11.86269);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(28,6.980602);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(29,2.598741);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(30,1.273348);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinContent(31,3.173298);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(1,14.47198);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(2,24.57178);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(3,25.5861);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(4,23.07822);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(5,20.47683);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(6,18.15013);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(7,16.31981);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(8,15.24111);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(9,14.23862);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(10,13.44743);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(11,12.53814);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(12,12.00268);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(13,11.25435);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(14,10.97923);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(15,10.83486);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(16,10.13388);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(17,8.025717);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(18,6.744658);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(19,5.379116);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(20,4.749192);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(21,3.870442);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(22,3.104285);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(23,2.746409);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(24,2.137497);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(25,1.611254);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(26,1.353267);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(27,1.010555);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(28,0.8543747);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(29,0.4230878);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(30,0.3437187);
   VbbHcc_both_H_dR_Bj1_stack_2->SetBinError(31,0.6631513);
   VbbHcc_both_H_dR_Bj1_stack_2->SetEntries(401943);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(1,12934.67);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(2,50749.27);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(3,65777.35);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(4,59781.29);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(5,47646.96);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(6,37903.53);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(7,31217.74);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(8,26427.05);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(9,22735.47);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(10,19897.22);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(11,17584.94);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(12,15898.47);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(13,14495.7);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(14,13347.85);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(15,12445.23);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(16,11292.35);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(17,7178.155);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(18,4925.879);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(19,3455.479);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(20,2405.837);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(21,1674.806);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(22,1163.646);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(23,782.9588);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(24,538.5684);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(25,343.4586);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(26,215.7046);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(27,128.2808);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(28,71.46932);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(29,40.0482);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(30,25.61519);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinContent(31,42.58645);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(1,28.23506);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(2,55.97138);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(3,63.84884);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(4,60.99252);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(5,54.53759);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(6,48.70059);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(7,44.2237);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(8,40.70946);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(9,37.76903);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(10,35.34551);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(11,33.23108);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(12,31.59691);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(13,30.17299);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(14,28.95659);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(15,27.95873);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(16,26.63279);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(17,21.20678);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(18,17.55961);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(19,14.6831);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(20,12.23426);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(21,10.18609);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(22,8.486947);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(23,6.955849);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(24,5.766486);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(25,4.594573);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(26,3.644818);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(27,2.80687);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(28,2.097857);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(29,1.568696);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(30,1.261891);
   VbbHcc_both_H_dR_Bj1_stack_3->SetBinError(31,1.629926);
   VbbHcc_both_H_dR_Bj1_stack_3->SetEntries(7926175);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(1,1051.414);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(2,2628.597);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(3,2782.552);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(4,2267.774);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(5,1819.735);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(6,1506.702);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(7,1302.34);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(8,1021.77);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(9,906.0813);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(10,815.9457);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(11,737.361);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(12,690.3032);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(13,637.207);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(14,597.4506);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(15,575.0363);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(16,498.9052);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(17,319.2547);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(18,228.8522);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(19,150.0916);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(20,128.8304);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(21,92.24086);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(22,60.3217);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(23,46.4181);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(24,26.61065);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(25,18.72469);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(26,15.12676);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(27,10.17881);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(28,5.781343);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(29,2.640743);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(30,0.7803567);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinContent(31,0.9367165);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(1,13.51479);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(2,32.37165);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(3,40.62874);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(4,38.60672);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(5,34.942);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(6,32.45226);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(7,31.129);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(8,24.77287);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(9,22.79469);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(10,22.59508);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(11,19.88176);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(12,19.84305);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(13,18.31061);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(14,17.52469);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(15,17.24648);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(16,13.79637);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(17,12.18679);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(18,9.791606);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(19,7.45188);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(20,8.184609);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(21,6.89856);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(22,4.724707);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(23,4.541865);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(24,2.027888);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(25,3.110718);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(26,3.972149);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(27,2.922824);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(28,2.775366);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(29,0.6468597);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(30,0.3379275);
   VbbHcc_both_H_dR_Bj1_stack_4->SetBinError(31,0.3555547);
   VbbHcc_both_H_dR_Bj1_stack_4->SetEntries(171964);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(1,680.6658);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(2,1714.006);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(3,1678.181);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(4,1413.261);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(5,962.7845);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(6,855.481);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(7,688.3883);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(8,528.3614);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(9,548.8668);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(10,421.4693);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(11,390.26);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(12,361.0858);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(13,355.498);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(14,326.3176);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(15,299.7246);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(16,274.97);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(17,165.5635);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(18,136.6953);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(19,108.3161);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(20,59.34677);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(21,44.52453);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(22,34.97714);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(23,18.80836);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(24,18.02257);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(25,20.1237);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(26,7.193951);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(27,2.166366);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(28,0.934413);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(29,0.8127484);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(30,0.3270767);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinContent(31,0.5304359);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(1,13.85944);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(2,41.68479);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(3,47.53089);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(4,48.24671);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(5,35.50131);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(6,37.4371);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(7,34.40623);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(8,24.62463);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(9,30.70543);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(10,24.07606);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(11,21.51629);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(12,21.9448);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(13,20.26877);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(14,19.85242);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(15,17.38287);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(16,17.13773);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(17,11.73696);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(18,14.15733);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(19,14.90348);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(20,4.954086);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(21,4.240327);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(22,7.122948);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(23,2.459528);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(24,2.95111);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(25,8.938262);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(26,1.717847);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(27,0.5668704);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(28,0.2886849);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(29,0.3016762);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(30,0.1477684);
   VbbHcc_both_H_dR_Bj1_stack_5->SetBinError(31,0.2148613);
   VbbHcc_both_H_dR_Bj1_stack_5->SetEntries(118385);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(1,3.007178);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(2,9.279293);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(3,9.880728);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(4,6.701711);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(5,5.842518);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(6,4.467808);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(7,4.811485);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(8,2.921259);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(9,3.264936);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(10,2.491662);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(11,2.233904);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(12,1.890226);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(13,2.405743);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(14,2.405743);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(15,1.460629);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(16,1.202871);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(17,0.8591938);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(18,0.4295969);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(19,0.4295969);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(20,0.3436775);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(21,0.3436775);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinContent(22,0.08591938);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(1,0.5083059);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(2,0.8929003);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(3,0.9213826);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(4,0.7588194);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(5,0.7085093);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(6,0.6195734);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(7,0.6429617);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(8,0.5009917);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(9,0.5296426);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(10,0.46269);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(11,0.4381046);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(12,0.4029976);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(13,0.4546426);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(14,0.4546426);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(15,0.3542547);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(16,0.3214809);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(17,0.2717009);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(18,0.1921216);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(19,0.1921216);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(20,0.1718388);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(21,0.1718388);
   VbbHcc_both_H_dR_Bj1_stack_6->SetBinError(22,0.08591938);
   VbbHcc_both_H_dR_Bj1_stack_6->SetEntries(777);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(1,11.53225);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(2,25.99535);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(3,27.65192);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(4,17.33023);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(5,11.27739);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(6,9.875685);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(7,10.25797);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(8,6.562552);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(9,6.753694);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(10,5.479412);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(11,5.734269);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(12,4.778557);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(13,4.268844);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(14,4.268844);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(15,2.102565);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(16,2.48485);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(17,2.675992);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(18,1.274282);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(19,0.5097128);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(20,0.637141);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(21,0.4459987);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(22,0.2548564);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(23,0.2548564);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(24,0.1911423);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(25,0.0637141);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(26,0.0637141);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(27,0.0637141);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(31,0.1274282);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(1,0.8571855);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(2,1.286962);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(3,1.327335);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(4,1.0508);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(5,0.8476609);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(6,0.7932341);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(7,0.8084412);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(8,0.6466275);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(9,0.6559768);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(10,0.5908602);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(11,0.604445);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(12,0.5517803);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(13,0.5215224);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(14,0.5215224);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(15,0.3660096);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(16,0.3978944);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(17,0.4129145);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(18,0.2849381);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(19,0.1802107);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(20,0.2014817);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(21,0.1685717);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(22,0.1274282);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(23,0.1274282);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(24,0.1103561);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(25,0.0637141);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(26,0.0637141);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(27,0.0637141);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(31,0.09010534);
   VbbHcc_both_H_dR_Bj1_stack_7->SetEntries(2557);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(1,8.610418);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(2,23.85803);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(3,25.47249);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(4,18.6559);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(5,12.19809);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(6,10.94241);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(7,8.969185);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(8,6.816581);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(9,4.84336);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(10,4.484592);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(11,4.663976);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(12,5.740278);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(13,4.484592);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(14,3.767058);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(15,3.946441);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(16,2.870139);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(17,1.614453);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(18,1.614453);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(19,1.255686);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(20,0.3587674);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(21,0.1793837);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(23,0.1793837);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(28,0.1793837);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(1,1.242807);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(2,2.068754);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(3,2.137603);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(4,1.829362);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(5,1.479236);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(6,1.401031);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(7,1.268434);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(8,1.105795);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(9,0.932105);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(10,0.8969185);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(11,0.914681);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(12,1.014747);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(13,0.8969185);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(14,0.8220394);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(15,0.8413841);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(16,0.7175348);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(17,0.5381511);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(18,0.5381511);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(19,0.4746047);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(20,0.2536869);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(21,0.1793837);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(23,0.1793837);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(28,0.1793837);
   VbbHcc_both_H_dR_Bj1_stack_8->SetEntries(868);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(1,5.236155);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(2,16.16228);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(3,16.28643);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(4,11.98964);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(5,8.459783);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(6,6.434842);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(7,5.142356);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(8,4.420937);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(9,3.859526);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(10,3.324324);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(11,3.140865);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(12,2.698082);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(13,2.579454);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(14,2.558764);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(15,2.311853);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(16,2.07184);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(17,1.245587);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(18,0.7738363);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(19,0.5241672);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(20,0.3586407);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(21,0.2289783);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(22,0.1682853);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(23,0.1006953);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(24,0.07448692);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(25,0.05241672);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(26,0.02758775);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(27,0.0220702);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(28,0.00551755);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(29,0.00551755);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(30,0.002758775);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinContent(31,0.006896937);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(1,0.08498639);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(2,0.1493119);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(3,0.1498843);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(4,0.1286015);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(5,0.1080246);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(6,0.09421327);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(7,0.08422174);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(8,0.07809087);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(9,0.07296425);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(10,0.06771654);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(11,0.0658215);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(12,0.06100574);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(13,0.05964953);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(14,0.05940982);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(15,0.05647071);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(16,0.05345905);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(17,0.04145053);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(18,0.0326714);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(19,0.02688921);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(20,0.02224195);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(21,0.01777216);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(22,0.01523583);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(23,0.01178549);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(24,0.01013639);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(25,0.008503115);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(26,0.006168808);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(27,0.00551755);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(28,0.002758775);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(29,0.002758775);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(30,0.001950748);
   VbbHcc_both_H_dR_Bj1_stack_9->SetBinError(31,0.003084404);
   VbbHcc_both_H_dR_Bj1_stack_9->SetEntries(72695);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(1,2.67747);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(2,7.966528);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(3,8.143045);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(4,5.96684);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(5,4.024081);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(6,3.077049);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(7,2.547141);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(8,2.14219);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(9,1.833555);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(10,1.621949);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(11,1.467631);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(12,1.326561);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(13,1.246001);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(14,1.162576);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(15,1.123191);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(16,0.9663667);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(17,0.60474);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(18,0.395283);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(19,0.278918);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(20,0.1636271);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(21,0.131761);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(22,0.08915351);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(23,0.06301613);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(24,0.03723681);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(25,0.02577933);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(26,0.01682817);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(27,0.006802878);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(28,0.004296554);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(29,0.003222416);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(30,0.001074139);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinContent(31,0.001074139);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(1,0.0309622);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(2,0.05340773);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(3,0.05399617);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(4,0.04622126);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(5,0.03795796);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(6,0.03319225);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(7,0.03019924);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(8,0.02769482);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(9,0.0256222);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(10,0.0240984);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(11,0.02292335);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(12,0.02179381);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(13,0.02112169);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(14,0.02040235);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(15,0.02005378);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(16,0.01860118);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(17,0.01471478);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(18,0.01189662);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(19,0.009993274);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(20,0.007654154);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(21,0.006868517);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(22,0.005649874);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(23,0.00475002);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(24,0.003651369);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(25,0.003038123);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(26,0.002454641);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(27,0.001560687);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(28,0.001240308);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(29,0.001074139);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(30,0.0006201542);
   VbbHcc_both_H_dR_Bj1_stack_10->SetBinError(31,0.0006201542);
   VbbHcc_both_H_dR_Bj1_stack_10->SetEntries(137175);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(1,0.08478523);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(2,0.369226);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(3,0.4239262);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(4,0.3883711);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(5,0.3172609);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(6,0.1914505);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(7,0.1340154);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(8,0.1094003);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(9,0.06017016);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(10,0.06564018);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(11,0.04376012);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(12,0.05196514);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(13,0.04649513);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(14,0.04376012);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(15,0.04923013);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(16,0.03282009);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(17,0.02461507);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(18,0.01914505);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(19,0.01367504);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(20,0.008205022);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(21,0.005470015);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(22,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinContent(25,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(1,0.01522788);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(2,0.03177791);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(3,0.03405057);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(4,0.03259138);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(5,0.02945693);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(6,0.02288271);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(7,0.01914505);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(8,0.01729771);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(9,0.01282832);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(10,0.01339875);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(11,0.01094003);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(12,0.01192162);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(13,0.01127672);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(14,0.01094003);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(15,0.01160365);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(16,0.009474344);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(17,0.008205022);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(18,0.00723615);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(19,0.006115663);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(20,0.004737172);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(21,0.003867885);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(22,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetBinError(25,0.002735007);
   VbbHcc_both_H_dR_Bj1_stack_11->SetEntries(910);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(1,0.03358299);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(2,0.1596978);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(3,0.1993543);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(4,0.1779184);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(5,0.1446927);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(6,0.09324639);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(7,0.06037793);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(8,0.04858816);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(9,0.03465479);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(10,0.0292958);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(11,0.02250775);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(12,0.02500861);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(13,0.01822056);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(14,0.02072142);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(15,0.01750603);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(16,0.0157197);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(17,0.01000344);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(18,0.005716254);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(19,0.003929924);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(20,0.002858127);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(21,0.002143595);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(22,0.001071798);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(23,0.001429063);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(24,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(25,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(28,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(1,0.003463821);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(2,0.007553448);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(3,0.008439342);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(4,0.007972714);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(5,0.007189836);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(6,0.005771806);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(7,0.004644456);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(8,0.0041664);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(9,0.003518661);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(10,0.00323518);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(11,0.00283571);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(12,0.002989101);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(13,0.002551388);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(14,0.002720856);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(15,0.002500861);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(16,0.002369834);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(17,0.001890473);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(18,0.001429063);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(19,0.001184917);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(20,0.0010105);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(21,0.000875119);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(22,0.0006188026);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(23,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(24,0.0005052502);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(25,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(28,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_12->SetEntries(3163);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj1__473 = new TH1D("VbbHcc_both_H_dR_Bj1__473","",30,0,6);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(1,83878);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(2,209825);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(3,202433);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(4,162230);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(5,133088);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(6,109723);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(7,92675);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(8,79955);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(9,69990);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(10,62241);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(11,56460);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(12,52212);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(13,48951);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(14,46560);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(15,44511);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(16,40868);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(17,27364);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(18,20032);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(19,14998);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(20,11270);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(21,8532);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(22,6306);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(23,4459);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(24,3228);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(25,2139);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(26,1330);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(27,805);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(28,436);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(29,198);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(30,117);
   VbbHcc_both_H_dR_Bj1__473->SetBinContent(31,188);
   VbbHcc_both_H_dR_Bj1__473->SetEntries(1597031);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj1__473->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj1__473->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj1__473->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj1__473->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj1__473->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj1__473->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__473->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__473->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__473->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__473->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__473->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__473->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__473->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1__473->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__473->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1__473->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1__473->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1__473->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1__473->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fx1473[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fy1473[30] = {
   115719.6,
   411978.3,
   406475.4,
   339287.8,
   277729.6,
   256847,
   220396.5,
   181852.6,
   155672.1,
   122927.2,
   124644.2,
   101370.1,
   103889.8,
   93748.32,
   88704.55,
   76428.07,
   66760.21,
   47760.33,
   29179.56,
   21778.88,
   19344.66,
   14458.48,
   7949.865,
   6623.224,
   3750.485,
   2269.762,
   1900.894,
   879.7538,
   1006.955,
   372.1402};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fex1473[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj1_fey1473[30] = {
   3520.338,
   8623.402,
   8144.883,
   8437.249,
   8002.16,
   21936.34,
   21835.12,
   21513.64,
   6810.391,
   4987.842,
   5324.798,
   4821.755,
   5237.435,
   4549.564,
   4510.966,
   3782.533,
   4659.887,
   3971.665,
   2347.489,
   2112.255,
   2794.338,
   1973.28,
   998.0784,
   954.5941,
   726.0134,
   485.7526,
   546.848,
   385.3142,
   468.439,
   270.9071};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj1_fx1473,Graph_from_VbbHcc_both_H_dR_Bj1_fy1473,Graph_from_VbbHcc_both_H_dR_Bj1_fex1473,Graph_from_VbbHcc_both_H_dR_Bj1_fey1473);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj11473 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj11473","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetMinimum(91.10983);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetMaximum(462651.7);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj11473->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj11473);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__474 = new TH1D("data_mc_ratio__474","",30,0,6);
   data_mc_ratio__474->SetBinContent(1,0.7248384);
   data_mc_ratio__474->SetBinContent(2,0.5093108);
   data_mc_ratio__474->SetBinContent(3,0.4980203);
   data_mc_ratio__474->SetBinContent(4,0.4781486);
   data_mc_ratio__474->SetBinContent(5,0.4792);
   data_mc_ratio__474->SetBinContent(6,0.4271921);
   data_mc_ratio__474->SetBinContent(7,0.4204921);
   data_mc_ratio__474->SetBinContent(8,0.4396693);
   data_mc_ratio__474->SetBinContent(9,0.4495989);
   data_mc_ratio__474->SetBinContent(10,0.5063241);
   data_mc_ratio__474->SetBinContent(11,0.4529693);
   data_mc_ratio__474->SetBinContent(12,0.5150629);
   data_mc_ratio__474->SetBinContent(13,0.471182);
   data_mc_ratio__474->SetBinContent(14,0.4966489);
   data_mc_ratio__474->SetBinContent(15,0.5017894);
   data_mc_ratio__474->SetBinContent(16,0.534725);
   data_mc_ratio__474->SetBinContent(17,0.4098849);
   data_mc_ratio__474->SetBinContent(18,0.4194276);
   data_mc_ratio__474->SetBinContent(19,0.5139899);
   data_mc_ratio__474->SetBinContent(20,0.5174737);
   data_mc_ratio__474->SetBinContent(21,0.4410519);
   data_mc_ratio__474->SetBinContent(22,0.4361454);
   data_mc_ratio__474->SetBinContent(23,0.56089);
   data_mc_ratio__474->SetBinContent(24,0.4873759);
   data_mc_ratio__474->SetBinContent(25,0.5703262);
   data_mc_ratio__474->SetBinContent(26,0.5859645);
   data_mc_ratio__474->SetBinContent(27,0.423485);
   data_mc_ratio__474->SetBinContent(28,0.4955932);
   data_mc_ratio__474->SetBinContent(29,0.1966324);
   data_mc_ratio__474->SetBinContent(30,0.3143976);
   data_mc_ratio__474->SetBinContent(31,1.517228);
   data_mc_ratio__474->SetBinError(1,0.002502748);
   data_mc_ratio__474->SetBinError(2,0.001111871);
   data_mc_ratio__474->SetBinError(3,0.001106895);
   data_mc_ratio__474->SetBinError(4,0.001187127);
   data_mc_ratio__474->SetBinError(5,0.001313552);
   data_mc_ratio__474->SetBinError(6,0.001289657);
   data_mc_ratio__474->SetBinError(7,0.001381263);
   data_mc_ratio__474->SetBinError(8,0.001554903);
   data_mc_ratio__474->SetBinError(9,0.001699446);
   data_mc_ratio__474->SetBinError(10,0.002029506);
   data_mc_ratio__474->SetBinError(11,0.001906331);
   data_mc_ratio__474->SetBinError(12,0.00225411);
   data_mc_ratio__474->SetBinError(13,0.002129648);
   data_mc_ratio__474->SetBinError(14,0.00230167);
   data_mc_ratio__474->SetBinError(15,0.002378416);
   data_mc_ratio__474->SetBinError(16,0.00264508);
   data_mc_ratio__474->SetBinError(17,0.002477833);
   data_mc_ratio__474->SetBinError(18,0.002963431);
   data_mc_ratio__474->SetBinError(19,0.00419699);
   data_mc_ratio__474->SetBinError(20,0.004874458);
   data_mc_ratio__474->SetBinError(21,0.0047749);
   data_mc_ratio__474->SetBinError(22,0.005492301);
   data_mc_ratio__474->SetBinError(23,0.008399607);
   data_mc_ratio__474->SetBinError(24,0.008578222);
   data_mc_ratio__474->SetBinError(25,0.01233156);
   data_mc_ratio__474->SetBinError(26,0.0160674);
   data_mc_ratio__474->SetBinError(27,0.01492588);
   data_mc_ratio__474->SetBinError(28,0.02373461);
   data_mc_ratio__474->SetBinError(29,0.01397406);
   data_mc_ratio__474->SetBinError(30,0.02906607);
   data_mc_ratio__474->SetBinError(31,0.4282132);
   data_mc_ratio__474->SetMinimum(0.4);
   data_mc_ratio__474->SetMaximum(1.6);
   data_mc_ratio__474->SetEntries(1084.281);
   data_mc_ratio__474->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__474->SetLineColor(ci);
   data_mc_ratio__474->SetLineWidth(2);
   data_mc_ratio__474->SetMarkerStyle(20);
   data_mc_ratio__474->SetMarkerSize(1.2);
   data_mc_ratio__474->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__474->GetXaxis()->SetRange(1,30);
   data_mc_ratio__474->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__474->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__474->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__474->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__474->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__474->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__474->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__474->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__474->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__474->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__474->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__474->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__474->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__474->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__474->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__474->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__474->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1474[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1474[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1474[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1474[30] = {
   0.03042128,
   0.02093169,
   0.02003782,
   0.02486753,
   0.02881278,
   0.08540625,
   0.09907196,
   0.1183026,
   0.04374831,
   0.04057558,
   0.04271998,
   0.04756583,
   0.05041338,
   0.04852955,
   0.05085383,
   0.04949141,
   0.06980036,
   0.08315823,
   0.08044975,
   0.09698638,
   0.1444501,
   0.1364791,
   0.1255466,
   0.1441283,
   0.1935785,
   0.2140104,
   0.2876794,
   0.4379795,
   0.4652035,
   0.7279704};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1474,Graph_from_mc_statistical_error_fy1474,Graph_from_mc_statistical_error_fex1474,Graph_from_mc_statistical_error_fey1474);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1474 = new TH1F("Graph_Graph_from_mc_statistical_error1474","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1474->SetMinimum(0.1264355);
   Graph_Graph_from_mc_statistical_error1474->SetMaximum(1.873565);
   Graph_Graph_from_mc_statistical_error1474->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1474->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1474->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1474);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_both_16->cd();
   H_dR_Bj1_both_16->Modified();
   H_dR_Bj1_both_16->cd();
   H_dR_Bj1_both_16->SetSelected(H_dR_Bj1_both_16);
}
