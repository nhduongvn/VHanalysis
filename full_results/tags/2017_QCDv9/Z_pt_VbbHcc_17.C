void Z_pt_VbbHcc_17()
{
//=========Macro generated from canvas: Z_pt_VbbHcc_17/Z_pt_VbbHcc_17
//=========  (Mon Nov 21 09:33:06 2022) by ROOT version 6.14/09
   TCanvas *Z_pt_VbbHcc_17 = new TCanvas("Z_pt_VbbHcc_17", "Z_pt_VbbHcc_17",0,0,600,600);
   Z_pt_VbbHcc_17->SetHighLightColor(2);
   Z_pt_VbbHcc_17->Range(0,0,1,1);
   Z_pt_VbbHcc_17->SetFillColor(0);
   Z_pt_VbbHcc_17->SetFillStyle(4000);
   Z_pt_VbbHcc_17->SetBorderMode(0);
   Z_pt_VbbHcc_17->SetBorderSize(2);
   Z_pt_VbbHcc_17->SetFrameFillStyle(1000);
   Z_pt_VbbHcc_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-28326.28,1562.903,2.829796e+07);
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
   st->SetMaximum(2.42527e+07);
   
   TH1F *st_stack_10 = new TH1F("st_stack_10","",40,0,2000);
   st_stack_10->SetMinimum(0.01);
   st_stack_10->SetMaximum(2.546533e+07);
   st_stack_10->SetDirectory(0);
   st_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_10->SetLineColor(ci);
   st_stack_10->GetXaxis()->SetRange(7,30);
   st_stack_10->GetXaxis()->SetLabelFont(42);
   st_stack_10->GetXaxis()->SetLabelSize(0.035);
   st_stack_10->GetXaxis()->SetTitleSize(0.035);
   st_stack_10->GetXaxis()->SetTitleFont(42);
   st_stack_10->GetYaxis()->SetTitle("Events/50.0");
   st_stack_10->GetYaxis()->SetLabelFont(42);
   st_stack_10->GetYaxis()->SetLabelSize(0.05);
   st_stack_10->GetYaxis()->SetTitleSize(0.057);
   st_stack_10->GetYaxis()->SetTitleOffset(1.2);
   st_stack_10->GetYaxis()->SetTitleFont(42);
   st_stack_10->GetZaxis()->SetLabelFont(42);
   st_stack_10->GetZaxis()->SetLabelSize(0.035);
   st_stack_10->GetZaxis()->SetTitleSize(0.035);
   st_stack_10->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_10);
   
   
   TH1D *VbbHcc_tags_Z_pt_stack_1 = new TH1D("VbbHcc_tags_Z_pt_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(1,43423.38);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(2,83005.31);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(3,50800.01);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(4,21400.42);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(5,9556.283);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(6,4707.786);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(7,2500.639);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(8,1391.529);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(9,833.5988);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(10,520.9652);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(11,344.6336);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(12,229.1912);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(13,146.722);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(14,108.6509);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(15,74.63604);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(16,49.26116);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(17,37.43483);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(18,27.71614);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(19,17.86308);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(20,14.23634);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(21,9.901549);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(22,7.152318);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(23,7.491804);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(24,4.663298);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(25,6.28865);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(26,2.567029);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(27,1.878187);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(28,2.426079);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(29,0.5789772);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(30,1.158189);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(31,0.4767477);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(32,0.3312761);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(33,0.9207568);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(34,0.6031513);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(36,0.3935729);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(39,0.05330684);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(40,0.2403569);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(41,0.04595925);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(1,84.20046);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(2,117.0529);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(3,94.18733);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(4,63.4819);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(5,43.58863);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(6,31.36803);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(7,23.40042);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(8,17.81496);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(9,14.07939);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(10,11.1912);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(11,9.190403);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(12,7.615528);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(13,6.119923);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(14,5.311259);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(15,4.52503);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(16,3.619058);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(17,3.117977);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(18,2.719426);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(19,2.186871);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(20,1.985205);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(21,1.765533);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(22,1.426943);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(23,1.490827);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(24,1.135892);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(25,1.387353);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(26,0.8224443);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(27,0.7792854);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(28,0.8335086);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(29,0.4042088);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(30,0.5834041);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(31,0.3802778);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(32,0.2861043);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(33,0.5127644);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(34,0.4267978);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(36,0.3388402);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(39,0.05330684);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(40,0.2403569);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(41,0.04595925);
   VbbHcc_tags_Z_pt_stack_1->SetEntries(2959104);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_2 = new TH1D("VbbHcc_tags_Z_pt_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(1,670948.2);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(2,1264406);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(3,822574.9);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(4,252359.5);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(5,86163.38);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(6,35832.56);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(7,17109.99);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(8,8922.594);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(9,5098.868);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(10,3112.857);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(11,1941.26);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(12,1282.514);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(13,866.7456);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(14,596.4214);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(15,410.0354);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(16,283.4904);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(17,211.2333);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(18,149.9105);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(19,111.6119);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(20,81.97714);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(21,59.55745);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(22,43.27076);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(23,31.08949);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(24,25.06141);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(25,16.74568);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(26,11.04108);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(27,10.35711);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(28,6.756711);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(29,5.000267);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(30,3.613176);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(31,2.455293);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(32,1.742852);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(33,1.780127);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(34,1.562794);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(35,0.8841043);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(36,0.5973422);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(37,0.3700268);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(38,0.4434265);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(39,0.141852);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(40,0.1050595);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(41,0.7131675);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(1,221.556);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(2,303.8632);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(3,244.7037);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(4,134.8802);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(5,78.69965);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(6,50.81404);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(7,35.20525);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(8,25.49987);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(9,19.3678);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(10,15.18196);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(11,12.03934);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(12,9.804889);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(13,8.08766);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(14,6.728556);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(15,5.589949);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(16,4.650364);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(17,3.998961);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(18,3.384366);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(19,2.92914);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(20,2.519327);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(21,2.161187);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(22,1.805281);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(23,1.538348);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(24,1.375927);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(25,1.126957);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(26,0.9304051);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(27,0.89015);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(28,0.7012342);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(29,0.6345493);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(30,0.512873);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(31,0.4498493);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(32,0.3671789);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(33,0.3994324);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(34,0.348855);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(35,0.2689132);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(36,0.2158085);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(37,0.1628398);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(38,0.1858353);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(39,0.1035883);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(40,0.1050595);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(41,0.2456714);
   VbbHcc_tags_Z_pt_stack_2->SetEntries(4.843218e+07);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_2,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_3 = new TH1D("VbbHcc_tags_Z_pt_stack_3","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(1,6385.818);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(2,14570.89);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(3,15317.58);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(4,10833.97);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(5,4595.831);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(6,969.082);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(7,71.90145);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(8,5.103018);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(9,1.24426);
   VbbHcc_tags_Z_pt_stack_3->SetBinContent(15,0.4299679);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(1,49.89086);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(2,75.43403);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(3,77.36712);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(4,65.12963);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(5,42.50301);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(6,19.50423);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(7,5.356681);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(8,1.431239);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(9,0.7451185);
   VbbHcc_tags_Z_pt_stack_3->SetBinError(15,0.4299679);
   VbbHcc_tags_Z_pt_stack_3->SetEntries(141537);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Z_pt_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_3->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_3,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_4 = new TH1D("VbbHcc_tags_Z_pt_stack_4","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_4->SetBinContent(1,3829.835);
   VbbHcc_tags_Z_pt_stack_4->SetBinContent(2,9061.43);
   VbbHcc_tags_Z_pt_stack_4->SetBinContent(3,9240.713);
   VbbHcc_tags_Z_pt_stack_4->SetBinContent(4,6570.52);
   VbbHcc_tags_Z_pt_stack_4->SetBinContent(5,3000.765);
   VbbHcc_tags_Z_pt_stack_4->SetBinContent(6,709.7729);
   VbbHcc_tags_Z_pt_stack_4->SetBinContent(7,87.97098);
   VbbHcc_tags_Z_pt_stack_4->SetBinContent(8,15.98567);
   VbbHcc_tags_Z_pt_stack_4->SetBinContent(9,1.850886);
   VbbHcc_tags_Z_pt_stack_4->SetBinError(1,71.26592);
   VbbHcc_tags_Z_pt_stack_4->SetBinError(2,109.3518);
   VbbHcc_tags_Z_pt_stack_4->SetBinError(3,110.808);
   VbbHcc_tags_Z_pt_stack_4->SetBinError(4,93.43072);
   VbbHcc_tags_Z_pt_stack_4->SetBinError(5,63.24254);
   VbbHcc_tags_Z_pt_stack_4->SetBinError(6,30.87471);
   VbbHcc_tags_Z_pt_stack_4->SetBinError(7,10.65049);
   VbbHcc_tags_Z_pt_stack_4->SetBinError(8,4.690281);
   VbbHcc_tags_Z_pt_stack_4->SetBinError(9,1.311169);
   VbbHcc_tags_Z_pt_stack_4->SetEntries(25853);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Z_pt_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_4->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_4,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_5 = new TH1D("VbbHcc_tags_Z_pt_stack_5","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(1,279.3571);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(2,400.4048);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(3,185.9559);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(4,75.5111);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(5,44.29688);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(6,23.80128);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(7,13.68313);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(8,11.25586);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(9,6.787811);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(10,5.318599);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(11,2.749628);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(12,1.929872);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(13,1.588739);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(14,1.861759);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(15,0.4073792);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(16,0.2848627);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(17,0.2532061);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(19,0.1916607);
   VbbHcc_tags_Z_pt_stack_5->SetBinContent(25,0.2562129);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(1,8.11656);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(2,9.675053);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(3,6.603668);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(4,4.173098);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(5,3.211762);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(6,2.363497);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(7,1.767802);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(8,1.572865);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(9,1.268489);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(10,1.130959);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(11,0.8029052);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(12,0.6478236);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(13,0.6033372);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(14,0.6494372);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(15,0.2936104);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(16,0.2483733);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(17,0.2532061);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(19,0.1916607);
   VbbHcc_tags_Z_pt_stack_5->SetBinError(25,0.2562129);
   VbbHcc_tags_Z_pt_stack_5->SetEntries(4750);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_pt_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_5->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_5,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_6 = new TH1D("VbbHcc_tags_Z_pt_stack_6","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(1,491.2996);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(2,640.0649);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(3,373.8458);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(4,180.9856);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(5,104.1564);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(6,53.04713);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(7,31.88327);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(8,21.06967);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(9,10.344);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(10,4.221392);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(11,2.672471);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(12,2.138372);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(13,0.6116261);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(14,0.7028437);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(15,0.3271381);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(17,0.1849707);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(18,0.5236105);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(19,0.1676428);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(21,0.1837929);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(22,0.1236251);
   VbbHcc_tags_Z_pt_stack_6->SetBinContent(25,0.1336818);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(1,9.133905);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(2,10.40816);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(3,7.934404);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(4,5.486542);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(5,4.192128);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(6,2.972057);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(7,2.289696);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(8,1.900969);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(9,1.330308);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(10,0.8278451);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(11,0.6580767);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(12,0.6042958);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(13,0.3127807);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(14,0.3524461);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(15,0.2313973);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(17,0.1849707);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(18,0.3029253);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(19,0.1676428);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(21,0.1837929);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(22,0.1236251);
   VbbHcc_tags_Z_pt_stack_6->SetBinError(25,0.1336818);
   VbbHcc_tags_Z_pt_stack_6->SetEntries(11906);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_pt_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_6->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_6,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_7 = new TH1D("VbbHcc_tags_Z_pt_stack_7","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(1,537.5309);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(2,608.5032);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(3,305.536);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(4,152.9578);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(5,75.74022);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(6,36.91843);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(7,22.82714);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(8,9.642401);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(9,5.931589);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(10,3.460447);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(11,2.190182);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(12,1.578033);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(13,0.7368253);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(14,0.4584697);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(15,0.2177781);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(16,0.2363491);
   VbbHcc_tags_Z_pt_stack_7->SetBinContent(17,0.271006);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(1,10.88564);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(2,11.50931);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(3,8.162662);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(4,5.787868);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(5,4.07275);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(6,2.812555);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(7,2.188049);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(8,1.441069);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(9,1.137715);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(10,0.8395678);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(11,0.6984608);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(12,0.5986513);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(13,0.4266737);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(14,0.324197);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(15,0.2177781);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(16,0.2363491);
   VbbHcc_tags_Z_pt_stack_7->SetBinError(17,0.271006);
   VbbHcc_tags_Z_pt_stack_7->SetEntries(8452);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_pt_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_7->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_7,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_8 = new TH1D("VbbHcc_tags_Z_pt_stack_8","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(1,131.2994);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(2,201.5258);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(3,123.7846);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(4,63.21217);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(5,32.47655);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(6,17.91239);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(7,10.14848);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(8,5.907536);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(9,3.214639);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(10,1.778041);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(11,0.9317194);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(12,0.5804009);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(13,0.3066167);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(14,0.1770967);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(15,0.114799);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(16,0.08024246);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(17,0.0608344);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(18,0.03701942);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(19,0.02357715);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(20,0.02628329);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(21,0.009926486);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(22,0.005892338);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(23,0.008145246);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(24,0.005463356);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(25,0.007884451);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(26,0.002051783);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(27,0.00246972);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(31,0.00202901);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(32,0.001911414);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(38,0.00197611);
   VbbHcc_tags_Z_pt_stack_8->SetBinContent(39,0.001772933);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(1,0.5046252);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(2,0.6244466);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(3,0.4881035);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(4,0.3484447);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(5,0.2495489);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(6,0.1850896);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(7,0.1396362);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(8,0.1065403);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(9,0.07821384);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(10,0.05851047);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(11,0.04193336);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(12,0.03297084);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(13,0.02402477);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(14,0.01811412);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(15,0.01501711);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(16,0.012222);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(17,0.01072395);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(18,0.008323494);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(19,0.006656541);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(20,0.007322229);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(21,0.004467416);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(22,0.003443258);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(23,0.003695058);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(24,0.003180457);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(25,0.003945026);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(26,0.002051783);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(27,0.00246972);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(31,0.00202901);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(32,0.001911414);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(38,0.00197611);
   VbbHcc_tags_Z_pt_stack_8->SetBinError(39,0.001772933);
   VbbHcc_tags_Z_pt_stack_8->SetEntries(337563);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Z_pt_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_8->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_8,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_9 = new TH1D("VbbHcc_tags_Z_pt_stack_9","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(1,16.965);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(2,38.04017);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(3,39.51922);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(4,26.69624);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(5,15.10965);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(6,8.442331);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(7,5.009943);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(8,2.98509);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(9,1.843026);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(10,1.16227);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(11,0.7572993);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(12,0.4839676);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(13,0.3059318);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(14,0.2050126);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(15,0.1448063);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(16,0.1127268);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(17,0.06999698);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(18,0.05648857);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(19,0.04158856);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(20,0.04070997);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(21,0.02838199);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(22,0.01869918);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(23,0.01574217);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(24,0.01562568);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(25,0.01253661);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(26,0.006680363);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(27,0.007779006);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(28,0.00275137);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(29,0.005091216);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(30,0.002697811);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(31,0.001142838);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(32,0.002201387);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(33,0.00217029);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(34,0.002903104);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(36,0.000873334);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(37,0.0002089966);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(39,0.0008855725);
   VbbHcc_tags_Z_pt_stack_9->SetBinContent(41,0.001376237);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(1,0.08682721);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(2,0.1299829);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(3,0.1324754);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(4,0.108786);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(5,0.08170421);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(6,0.06106908);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(7,0.04702177);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(8,0.03625622);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(9,0.02849011);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(10,0.02265175);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(11,0.0182679);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(12,0.01462134);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(13,0.01163658);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(14,0.009509475);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(15,0.007994489);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(16,0.007079287);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(17,0.005580022);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(18,0.005015333);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(19,0.004291068);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(20,0.004257058);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(21,0.00350353);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(22,0.002879041);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(23,0.002621672);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(24,0.002620698);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(25,0.002359234);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(26,0.001717211);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(27,0.001890133);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(28,0.00112447);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(29,0.00147602);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(30,0.00110386);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(31,0.0006800375);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(32,0.0009856424);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(33,0.0009719137);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(34,0.001111227);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(36,0.0006178203);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(37,0.0002089966);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(39,0.0006262728);
   VbbHcc_tags_Z_pt_stack_9->SetBinError(41,0.000796222);
   VbbHcc_tags_Z_pt_stack_9->SetEntries(363165);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Z_pt_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_9->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_9,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_10 = new TH1D("VbbHcc_tags_Z_pt_stack_10","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(1,2.063271);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(2,3.410767);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(3,2.082232);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(4,0.9210333);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(5,0.4105711);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(6,0.2246259);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(7,0.1204865);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(8,0.06815246);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(9,0.03996523);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(10,0.01536258);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(11,0.01379929);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(12,0.0001533372);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(13,0.001259297);
   VbbHcc_tags_Z_pt_stack_10->SetBinContent(14,0.002631403);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(1,0.06159331);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(2,0.07914423);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(3,0.06173413);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(4,0.04090009);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(5,0.02702442);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(6,0.01983198);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(7,0.01563233);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(8,0.0114363);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(9,0.008489307);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(10,0.005219914);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(11,0.004825729);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(12,0.0001533372);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(13,0.001259297);
   VbbHcc_tags_Z_pt_stack_10->SetBinError(14,0.001949608);
   VbbHcc_tags_Z_pt_stack_10->SetEntries(6268);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_10->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_10,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_11 = new TH1D("VbbHcc_tags_Z_pt_stack_11","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(1,5997.404);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(2,14572.19);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(3,16625.22);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(4,9797.521);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(5,4373.894);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(6,2024.233);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(7,965.7407);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(8,477.4766);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(9,161.9182);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(10,91.10721);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(11,47.63072);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(12,12.24692);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(13,9.609056);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(14,3.705986);
   VbbHcc_tags_Z_pt_stack_11->SetBinContent(15,5.923359);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(1,176.5637);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(2,275.8771);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(3,294.9062);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(4,225.9356);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(5,150.4863);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(6,102.9302);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(7,71.09164);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(8,49.48951);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(9,28.99358);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(10,21.69611);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(11,16.40059);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(12,6.781685);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(13,5.574485);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(14,3.530154);
   VbbHcc_tags_Z_pt_stack_11->SetBinError(15,5.923359);
   VbbHcc_tags_Z_pt_stack_11->SetEntries(12187);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_11->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_11,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Z_pt__19 = new TH1D("VbbHcc_tags_Z_pt__19","",40,0,2000);
   VbbHcc_tags_Z_pt__19->SetBinContent(1,5898825);
   VbbHcc_tags_Z_pt__19->SetBinContent(2,1.091371e+07);
   VbbHcc_tags_Z_pt__19->SetBinContent(3,4187686);
   VbbHcc_tags_Z_pt__19->SetBinContent(4,273608.2);
   VbbHcc_tags_Z_pt__19->SetBinContent(5,22918.68);
   VbbHcc_tags_Z_pt__19->SetBinContent(6,1863.676);
   VbbHcc_tags_Z_pt__19->SetBinContent(7,2797.812);
   VbbHcc_tags_Z_pt__19->SetBinContent(8,2177.196);
   VbbHcc_tags_Z_pt__19->SetBinContent(15,1023.624);
   VbbHcc_tags_Z_pt__19->SetBinContent(16,153.2016);
   VbbHcc_tags_Z_pt__19->SetBinError(1,87810.7);
   VbbHcc_tags_Z_pt__19->SetBinError(2,119539.7);
   VbbHcc_tags_Z_pt__19->SetBinError(3,74182.52);
   VbbHcc_tags_Z_pt__19->SetBinError(4,18884.67);
   VbbHcc_tags_Z_pt__19->SetBinError(5,5326.256);
   VbbHcc_tags_Z_pt__19->SetBinError(6,1323.955);
   VbbHcc_tags_Z_pt__19->SetBinError(7,1792.823);
   VbbHcc_tags_Z_pt__19->SetBinError(8,1567.756);
   VbbHcc_tags_Z_pt__19->SetBinError(15,1023.624);
   VbbHcc_tags_Z_pt__19->SetBinError(16,153.2016);
   VbbHcc_tags_Z_pt__19->SetEntries(17117);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt__19->SetLineColor(ci);
   VbbHcc_tags_Z_pt__19->SetLineWidth(2);
   VbbHcc_tags_Z_pt__19->SetMarkerStyle(20);
   VbbHcc_tags_Z_pt__19->SetMarkerSize(1.2);
   VbbHcc_tags_Z_pt__19->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt__19->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt__19->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt__19->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt__19->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt__19->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt__19->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt__19->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt__19->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_pt__19->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt__19->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt__19->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_pt__19->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_pt__19->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt__19->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Z_pt_fx1019[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_tags_Z_pt_fy1019[40] = {
   732043.1,
   1387508,
   915589.1,
   301462.2,
   107962.3,
   44383.78,
   20819.92,
   10863.62,
   6125.641,
   3740.886,
   2342.84,
   1530.663,
   1026.628,
   712.1861,
   492.2367,
   333.4657,
   249.5082,
   178.2438,
   129.8995,
   96.28048,
   69.6811,
   50.57129,
   38.60518,
   29.7458,
   23.44465,
   13.61684,
   12.24554,
   9.185541,
   5.584336,
   4.774063,
   2.935212,
   2.078241,
   2.703054,
   2.168849,
   0.8841043,
   0.9917884,
   0.3702358,
   0.4454026,
   0.1978173,
   0.3454164};
   Double_t Graph_from_VbbHcc_tags_Z_pt_fex1019[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_tags_Z_pt_fey1019[40] = {
   308.5247,
   447.3537,
   417.3229,
   293.8057,
   191.2862,
   124.566,
   83.64398,
   58.72863,
   37.69513,
   28.79461,
   22.35971,
   14.18689,
   11.601,
   9.305721,
   9.337128,
   5.902645,
   5.087768,
   4.352134,
   3.66431,
   3.20751,
   2.796721,
   2.304454,
   2.142218,
   1.784221,
   1.810612,
   1.241803,
   1.183073,
   1.089251,
   0.7523562,
   0.7767885,
   0.5890503,
   0.4654897,
   0.6499804,
   0.5512327,
   0.2689132,
   0.4017292,
   0.1628399,
   0.1858458,
   0.1165148,
   0.2623146};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_Z_pt_fx1019,Graph_from_VbbHcc_tags_Z_pt_fy1019,Graph_from_VbbHcc_tags_Z_pt_fex1019,Graph_from_VbbHcc_tags_Z_pt_fey1019);
   gre->SetName("Graph_from_VbbHcc_tags_Z_pt");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Z_pt1019 = new TH1F("Graph_Graph_from_VbbHcc_tags_Z_pt1019","",100,0,2200);
   Graph_Graph_from_VbbHcc_tags_Z_pt1019->SetMinimum(0.0731723);
   Graph_Graph_from_VbbHcc_tags_Z_pt1019->SetMaximum(1526751);
   Graph_Graph_from_VbbHcc_tags_Z_pt1019->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Z_pt1019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Z_pt1019->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Z_pt1019->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_pt1019->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_pt1019->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_pt1019->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_pt1019->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_pt1019->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_pt1019->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_pt1019->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Z_pt1019->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_pt1019->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Z_pt1019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_pt1019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Z_pt1019->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Z_pt1019);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt","QCD","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_11","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_10","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_9","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_8","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_7","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_6","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_5","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_4","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_3","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Z_pt","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_pt_VbbHcc_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
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
   
   TH1D *data_mc_ratio__20 = new TH1D("data_mc_ratio__20","",40,0,2000);
   data_mc_ratio__20->SetBinContent(1,8.058029);
   data_mc_ratio__20->SetBinContent(2,7.865695);
   data_mc_ratio__20->SetBinContent(3,4.573761);
   data_mc_ratio__20->SetBinContent(4,0.9076038);
   data_mc_ratio__20->SetBinContent(5,0.212284);
   data_mc_ratio__20->SetBinContent(6,0.04199004);
   data_mc_ratio__20->SetBinContent(7,0.1343815);
   data_mc_ratio__20->SetBinContent(8,0.2004117);
   data_mc_ratio__20->SetBinContent(15,2.079536);
   data_mc_ratio__20->SetBinContent(16,0.4594223);
   data_mc_ratio__20->SetBinError(1,0.1199529);
   data_mc_ratio__20->SetBinError(2,0.08615423);
   data_mc_ratio__20->SetBinError(3,0.08102163);
   data_mc_ratio__20->SetBinError(4,0.06264358);
   data_mc_ratio__20->SetBinError(5,0.04933439);
   data_mc_ratio__20->SetBinError(6,0.02982971);
   data_mc_ratio__20->SetBinError(7,0.08611095);
   data_mc_ratio__20->SetBinError(8,0.1443125);
   data_mc_ratio__20->SetBinError(15,2.079536);
   data_mc_ratio__20->SetBinError(16,0.4594223);
   data_mc_ratio__20->SetMinimum(0.4);
   data_mc_ratio__20->SetMaximum(1.6);
   data_mc_ratio__20->SetEntries(130.8123);
   data_mc_ratio__20->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__20->SetLineColor(ci);
   data_mc_ratio__20->SetLineWidth(2);
   data_mc_ratio__20->SetMarkerStyle(20);
   data_mc_ratio__20->SetMarkerSize(1.2);
   data_mc_ratio__20->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   data_mc_ratio__20->GetXaxis()->SetRange(7,30);
   data_mc_ratio__20->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__20->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__20->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__20->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__20->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__20->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__20->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__20->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__20->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__20->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__20->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__20->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__20->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__20->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__20->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__20->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__20->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1020[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1020[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1020[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1020[40] = {
   0.000421457,
   0.0003224153,
   0.0004557971,
   0.0009746024,
   0.001771786,
   0.002806566,
   0.004017499,
   0.005405993,
   0.006153663,
   0.00769727,
   0.009543847,
   0.00926846,
   0.0113001,
   0.01306642,
   0.01896878,
   0.01770091,
   0.02039119,
   0.02441675,
   0.02820881,
   0.03331423,
   0.040136,
   0.04556842,
   0.05549044,
   0.05998228,
   0.07722926,
   0.09119616,
   0.09661258,
   0.1185832,
   0.1347262,
   0.1627102,
   0.200684,
   0.2239825,
   0.2404615,
   0.2541591,
   0.3041646,
   0.4050554,
   0.4398275,
   0.4172535,
   0.5890019,
   0.7594155};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1020,Graph_from_mc_statistical_error_fy1020,Graph_from_mc_statistical_error_fex1020,Graph_from_mc_statistical_error_fey1020);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1020 = new TH1F("Graph_Graph_from_mc_statistical_error1020","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1020->SetMinimum(0.08870135);
   Graph_Graph_from_mc_statistical_error1020->SetMaximum(1.911299);
   Graph_Graph_from_mc_statistical_error1020->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1020->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1020->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1020->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1020->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1020->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1020);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   Z_pt_VbbHcc_17->cd();
   Z_pt_VbbHcc_17->Modified();
   Z_pt_VbbHcc_17->cd();
   Z_pt_VbbHcc_17->SetSelected(Z_pt_VbbHcc_17);
}
