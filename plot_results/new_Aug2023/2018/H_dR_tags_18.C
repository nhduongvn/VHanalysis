void H_dR_tags_18()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Tue Aug 22 09:20:19 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(0,0,1,1);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetFillStyle(4000);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-50.63812,6.525,50597.48);
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
   st->SetMaximum(43364.44);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",30,0,6);
   st_stack_23->SetMinimum(0.01);
   st_stack_23->SetMaximum(45532.67);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetRange(1,31);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetLabelSize(0.035);
   st_stack_23->GetXaxis()->SetTitleSize(0.035);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Events/0.2");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetLabelSize(0.05);
   st_stack_23->GetYaxis()->SetTitleSize(0.057);
   st_stack_23->GetYaxis()->SetTitleOffset(1.2);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetLabelSize(0.035);
   st_stack_23->GetZaxis()->SetTitleSize(0.035);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,13848.14);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,10908.07);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,7948.541);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,6812.299);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,6347.478);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,7670.081);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,7756.818);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,7674.301);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,8694.406);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,10796.14);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,9774.458);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,11772.03);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,12964.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,12806.69);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,12849.76);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,15372.13);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,11554.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,10089.58);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,4746.319);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,4241.627);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,3909.219);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,2597.992);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,2515.806);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,3257.828);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,2781.925);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,1194.918);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,3852.886);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(30,1594.069);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(31,1003.105);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,1911.011);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,1459.716);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,1326.71);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,1186.504);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,1175.448);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,1391.05);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,1328.327);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,1295.182);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,1381.722);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,1703.533);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,1444.538);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,1549.421);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,1923.474);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,1644.421);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,1757.311);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,1914.107);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,1465.888);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,1622.869);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,752.7866);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,691.6553);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,932.2784);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,515.8149);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,803.0605);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,2138.218);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,911.5287);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,299.8701);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,2274.404);
   VbbHcc_tags_H_dR_stack_1->SetBinError(30,644.4988);
   VbbHcc_tags_H_dR_stack_1->SetBinError(31,506.6269);
   VbbHcc_tags_H_dR_stack_1->SetEntries(9459);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,0.06997103);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,45.02514);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,53.82227);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,48.84225);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,47.04138);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,46.8941);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,41.1548);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,46.03232);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,49.6473);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,55.23387);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,61.73923);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,58.15921);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,71.61877);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,77.91242);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,80.71096);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,67.38649);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,64.67971);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,53.1216);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,47.87533);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,40.79478);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,34.40415);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,27.66345);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,19.42366);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,22.79512);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,14.6623);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,11.86789);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,11.19187);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,9.085303);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(30,5.752089);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(31,6.996005);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,0.06997103);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,3.00488);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,3.262672);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,3.080758);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,3.116258);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,3.080457);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,2.782952);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,2.994634);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,3.337989);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,3.288355);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,3.521019);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,3.403135);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,3.872101);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,3.832509);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,4.024088);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,3.611356);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,3.61803);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,3.18928);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,3.031116);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,2.741154);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,2.588523);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,2.254292);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,1.899715);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,2.099769);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,1.690834);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,1.448933);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,1.490376);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,1.445599);
   VbbHcc_tags_H_dR_stack_2->SetBinError(30,1.017236);
   VbbHcc_tags_H_dR_stack_2->SetBinError(31,1.249332);
   VbbHcc_tags_H_dR_stack_2->SetEntries(14001);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_3 = new TH1D("VbbHcc_tags_H_dR_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(2,0.748137);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(3,764.1079);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(4,1062.724);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(5,1065.096);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(6,1097.321);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(7,1068.078);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(8,1059.335);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(9,1041.209);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(10,1075.571);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(11,1135.804);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(12,1237.301);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(13,1342.756);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(14,1440.943);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(15,1540.281);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(16,1602.023);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(17,1522.044);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(18,1377.718);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(19,1209.231);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(20,1052.935);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(21,896.0377);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(22,739.3307);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(23,593.5187);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(24,486.0898);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(25,386.2291);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(26,311.6605);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(27,261.7025);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(28,219.8493);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(29,173.0017);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(30,110.778);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(31,96.03349);
   VbbHcc_tags_H_dR_stack_3->SetBinError(2,0.2353812);
   VbbHcc_tags_H_dR_stack_3->SetBinError(3,8.459357);
   VbbHcc_tags_H_dR_stack_3->SetBinError(4,9.332601);
   VbbHcc_tags_H_dR_stack_3->SetBinError(5,9.136613);
   VbbHcc_tags_H_dR_stack_3->SetBinError(6,9.657297);
   VbbHcc_tags_H_dR_stack_3->SetBinError(7,9.447865);
   VbbHcc_tags_H_dR_stack_3->SetBinError(8,9.224885);
   VbbHcc_tags_H_dR_stack_3->SetBinError(9,9.12175);
   VbbHcc_tags_H_dR_stack_3->SetBinError(10,9.708742);
   VbbHcc_tags_H_dR_stack_3->SetBinError(11,9.481191);
   VbbHcc_tags_H_dR_stack_3->SetBinError(12,10.36727);
   VbbHcc_tags_H_dR_stack_3->SetBinError(13,10.46634);
   VbbHcc_tags_H_dR_stack_3->SetBinError(14,10.69313);
   VbbHcc_tags_H_dR_stack_3->SetBinError(15,11.42392);
   VbbHcc_tags_H_dR_stack_3->SetBinError(16,11.90489);
   VbbHcc_tags_H_dR_stack_3->SetBinError(17,12.10616);
   VbbHcc_tags_H_dR_stack_3->SetBinError(18,10.54958);
   VbbHcc_tags_H_dR_stack_3->SetBinError(19,10.38364);
   VbbHcc_tags_H_dR_stack_3->SetBinError(20,9.807847);
   VbbHcc_tags_H_dR_stack_3->SetBinError(21,8.859279);
   VbbHcc_tags_H_dR_stack_3->SetBinError(22,7.889923);
   VbbHcc_tags_H_dR_stack_3->SetBinError(23,6.930867);
   VbbHcc_tags_H_dR_stack_3->SetBinError(24,7.056383);
   VbbHcc_tags_H_dR_stack_3->SetBinError(25,6.325096);
   VbbHcc_tags_H_dR_stack_3->SetBinError(26,5.012504);
   VbbHcc_tags_H_dR_stack_3->SetBinError(27,6.382717);
   VbbHcc_tags_H_dR_stack_3->SetBinError(28,4.228505);
   VbbHcc_tags_H_dR_stack_3->SetBinError(29,3.657962);
   VbbHcc_tags_H_dR_stack_3->SetBinError(30,2.848175);
   VbbHcc_tags_H_dR_stack_3->SetBinError(31,2.677179);
   VbbHcc_tags_H_dR_stack_3->SetEntries(383722);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_4 = new TH1D("VbbHcc_tags_H_dR_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(3,157.7515);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(4,187.8682);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(5,174.9069);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(6,169.574);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(7,121.4313);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(8,105.8386);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(9,106.3097);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(10,112.8473);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(11,131.4913);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(12,160.691);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(13,172.6372);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(14,192.4755);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(15,201.5658);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(16,249.6309);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(17,211.2077);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(18,213.546);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(19,166.4954);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(20,143.6369);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(21,109.3192);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(22,92.13116);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(23,71.80145);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(24,46.19106);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(25,51.38326);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(26,41.06909);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(27,31.35952);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(28,24.16524);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(29,21.72767);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(30,16.63735);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(31,12.03546);
   VbbHcc_tags_H_dR_stack_4->SetBinError(3,9.267286);
   VbbHcc_tags_H_dR_stack_4->SetBinError(4,7.570143);
   VbbHcc_tags_H_dR_stack_4->SetBinError(5,9.80852);
   VbbHcc_tags_H_dR_stack_4->SetBinError(6,12.38247);
   VbbHcc_tags_H_dR_stack_4->SetBinError(7,7.899643);
   VbbHcc_tags_H_dR_stack_4->SetBinError(8,5.750582);
   VbbHcc_tags_H_dR_stack_4->SetBinError(9,5.835913);
   VbbHcc_tags_H_dR_stack_4->SetBinError(10,8.625142);
   VbbHcc_tags_H_dR_stack_4->SetBinError(11,8.270108);
   VbbHcc_tags_H_dR_stack_4->SetBinError(12,11.07481);
   VbbHcc_tags_H_dR_stack_4->SetBinError(13,9.512675);
   VbbHcc_tags_H_dR_stack_4->SetBinError(14,10.42162);
   VbbHcc_tags_H_dR_stack_4->SetBinError(15,9.159402);
   VbbHcc_tags_H_dR_stack_4->SetBinError(16,18.68218);
   VbbHcc_tags_H_dR_stack_4->SetBinError(17,11.70986);
   VbbHcc_tags_H_dR_stack_4->SetBinError(18,13.96279);
   VbbHcc_tags_H_dR_stack_4->SetBinError(19,10.33012);
   VbbHcc_tags_H_dR_stack_4->SetBinError(20,11.97475);
   VbbHcc_tags_H_dR_stack_4->SetBinError(21,8.705481);
   VbbHcc_tags_H_dR_stack_4->SetBinError(22,10.7296);
   VbbHcc_tags_H_dR_stack_4->SetBinError(23,8.709285);
   VbbHcc_tags_H_dR_stack_4->SetBinError(24,3.705195);
   VbbHcc_tags_H_dR_stack_4->SetBinError(25,7.192973);
   VbbHcc_tags_H_dR_stack_4->SetBinError(26,3.741912);
   VbbHcc_tags_H_dR_stack_4->SetBinError(27,3.411152);
   VbbHcc_tags_H_dR_stack_4->SetBinError(28,2.833494);
   VbbHcc_tags_H_dR_stack_4->SetBinError(29,2.432776);
   VbbHcc_tags_H_dR_stack_4->SetBinError(30,2.347052);
   VbbHcc_tags_H_dR_stack_4->SetBinError(31,1.799616);
   VbbHcc_tags_H_dR_stack_4->SetEntries(17726);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_5 = new TH1D("VbbHcc_tags_H_dR_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(3,15.98935);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(4,15.92199);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(5,10.5134);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(6,17.56657);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(7,9.943479);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(8,11.53923);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(9,14.37488);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(10,8.310686);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(11,18.87328);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(12,21.00539);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(13,13.41152);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(14,24.96474);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(15,15.35174);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(16,15.21462);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(17,20.1827);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(18,17.83938);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(19,17.0702);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(20,12.01562);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(21,7.294813);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(22,8.383658);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(23,7.063231);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(24,3.897465);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(25,8.095259);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(26,1.695655);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(27,3.985771);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(28,2.654007);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(29,1.746496);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(30,1.783652);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(31,0.6845706);
   VbbHcc_tags_H_dR_stack_5->SetBinError(3,3.339466);
   VbbHcc_tags_H_dR_stack_5->SetBinError(4,4.173616);
   VbbHcc_tags_H_dR_stack_5->SetBinError(5,2.599136);
   VbbHcc_tags_H_dR_stack_5->SetBinError(6,9.108075);
   VbbHcc_tags_H_dR_stack_5->SetBinError(7,1.5199);
   VbbHcc_tags_H_dR_stack_5->SetBinError(8,2.625505);
   VbbHcc_tags_H_dR_stack_5->SetBinError(9,2.788631);
   VbbHcc_tags_H_dR_stack_5->SetBinError(10,2.351508);
   VbbHcc_tags_H_dR_stack_5->SetBinError(11,4.541625);
   VbbHcc_tags_H_dR_stack_5->SetBinError(12,4.42411);
   VbbHcc_tags_H_dR_stack_5->SetBinError(13,2.712595);
   VbbHcc_tags_H_dR_stack_5->SetBinError(14,5.469789);
   VbbHcc_tags_H_dR_stack_5->SetBinError(15,2.487121);
   VbbHcc_tags_H_dR_stack_5->SetBinError(16,3.096065);
   VbbHcc_tags_H_dR_stack_5->SetBinError(17,4.220142);
   VbbHcc_tags_H_dR_stack_5->SetBinError(18,4.125182);
   VbbHcc_tags_H_dR_stack_5->SetBinError(19,3.936231);
   VbbHcc_tags_H_dR_stack_5->SetBinError(20,3.635293);
   VbbHcc_tags_H_dR_stack_5->SetBinError(21,1.266648);
   VbbHcc_tags_H_dR_stack_5->SetBinError(22,2.429271);
   VbbHcc_tags_H_dR_stack_5->SetBinError(23,2.18214);
   VbbHcc_tags_H_dR_stack_5->SetBinError(24,0.8981604);
   VbbHcc_tags_H_dR_stack_5->SetBinError(25,3.405674);
   VbbHcc_tags_H_dR_stack_5->SetBinError(26,0.5325324);
   VbbHcc_tags_H_dR_stack_5->SetBinError(27,2.141247);
   VbbHcc_tags_H_dR_stack_5->SetBinError(28,1.106977);
   VbbHcc_tags_H_dR_stack_5->SetBinError(29,0.663563);
   VbbHcc_tags_H_dR_stack_5->SetBinError(30,0.6223849);
   VbbHcc_tags_H_dR_stack_5->SetBinError(31,0.2644694);
   VbbHcc_tags_H_dR_stack_5->SetEntries(2023);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_6 = new TH1D("VbbHcc_tags_H_dR_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(4,0.6225638);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(18,0.4278565);
   VbbHcc_tags_H_dR_stack_6->SetBinError(4,0.6225638);
   VbbHcc_tags_H_dR_stack_6->SetBinError(18,0.4278565);
   VbbHcc_tags_H_dR_stack_6->SetEntries(2);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_7 = new TH1D("VbbHcc_tags_H_dR_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(3,1.239315);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(4,1.714112);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,1.752231);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,0.9354488);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(10,0.4702074);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(11,1.265549);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,0.4671207);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,0.3690103);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(14,0.9636619);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,0.9431891);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,0.962578);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,0.3443727);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,0.6808577);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,0.6158729);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(24,0.4655805);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(30,0.09964461);
   VbbHcc_tags_H_dR_stack_7->SetBinError(3,0.7213064);
   VbbHcc_tags_H_dR_stack_7->SetBinError(4,0.8609608);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,0.8866809);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,0.5463117);
   VbbHcc_tags_H_dR_stack_7->SetBinError(10,0.4702074);
   VbbHcc_tags_H_dR_stack_7->SetBinError(11,0.7368768);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,0.4671207);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,0.3690103);
   VbbHcc_tags_H_dR_stack_7->SetBinError(14,0.9636619);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,0.6684836);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,0.7082202);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,0.3443727);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,0.4814903);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,0.4391213);
   VbbHcc_tags_H_dR_stack_7->SetBinError(24,0.4655805);
   VbbHcc_tags_H_dR_stack_7->SetBinError(30,0.09964461);
   VbbHcc_tags_H_dR_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_8 = new TH1D("VbbHcc_tags_H_dR_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(3,4.268368);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(4,3.439599);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(5,5.341575);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(6,1.524751);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(7,1.666254);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(8,1.343411);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(9,1.197837);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(10,2.205726);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(11,0.884231);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(12,1.777806);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(13,2.057014);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(14,2.496839);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(15,4.576869);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(16,8.288197);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(17,4.692153);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(18,5.555727);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(19,4.263658);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(20,2.030377);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(21,3.182515);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(22,0.6738619);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(23,0.7090299);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(24,0.930273);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(25,0.8018399);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(26,0.9347018);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(27,0.6903554);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(28,1.852129);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(29,0.3400779);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(30,0.1757953);
   VbbHcc_tags_H_dR_stack_8->SetBinError(3,1.152975);
   VbbHcc_tags_H_dR_stack_8->SetBinError(4,1.046152);
   VbbHcc_tags_H_dR_stack_8->SetBinError(5,1.325099);
   VbbHcc_tags_H_dR_stack_8->SetBinError(6,0.646943);
   VbbHcc_tags_H_dR_stack_8->SetBinError(7,0.7166661);
   VbbHcc_tags_H_dR_stack_8->SetBinError(8,0.6809424);
   VbbHcc_tags_H_dR_stack_8->SetBinError(9,0.6274994);
   VbbHcc_tags_H_dR_stack_8->SetBinError(10,0.8169443);
   VbbHcc_tags_H_dR_stack_8->SetBinError(11,0.5187658);
   VbbHcc_tags_H_dR_stack_8->SetBinError(12,0.7618526);
   VbbHcc_tags_H_dR_stack_8->SetBinError(13,0.783855);
   VbbHcc_tags_H_dR_stack_8->SetBinError(14,0.8923397);
   VbbHcc_tags_H_dR_stack_8->SetBinError(15,1.216613);
   VbbHcc_tags_H_dR_stack_8->SetBinError(16,1.636349);
   VbbHcc_tags_H_dR_stack_8->SetBinError(17,1.120122);
   VbbHcc_tags_H_dR_stack_8->SetBinError(18,1.30846);
   VbbHcc_tags_H_dR_stack_8->SetBinError(19,1.151885);
   VbbHcc_tags_H_dR_stack_8->SetBinError(20,0.772797);
   VbbHcc_tags_H_dR_stack_8->SetBinError(21,0.9855693);
   VbbHcc_tags_H_dR_stack_8->SetBinError(22,0.4766341);
   VbbHcc_tags_H_dR_stack_8->SetBinError(23,0.5016847);
   VbbHcc_tags_H_dR_stack_8->SetBinError(24,0.5382781);
   VbbHcc_tags_H_dR_stack_8->SetBinError(25,0.4630472);
   VbbHcc_tags_H_dR_stack_8->SetBinError(26,0.5626331);
   VbbHcc_tags_H_dR_stack_8->SetBinError(27,0.4203153);
   VbbHcc_tags_H_dR_stack_8->SetBinError(28,0.7665401);
   VbbHcc_tags_H_dR_stack_8->SetBinError(29,0.3400779);
   VbbHcc_tags_H_dR_stack_8->SetBinError(30,0.1757953);
   VbbHcc_tags_H_dR_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_9 = new TH1D("VbbHcc_tags_H_dR_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(3,2.721931);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(4,5.038218);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(5,4.586221);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(6,3.63508);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(7,2.326773);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(8,1.504787);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(9,1.219382);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(10,1.309696);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(11,1.49727);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(12,2.173584);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(13,3.16552);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(14,4.018117);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(15,4.85927);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(16,5.312282);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(17,5.18277);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(18,4.473226);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(19,3.217197);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(20,2.254268);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(21,1.502966);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(22,1.084921);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(23,0.6755907);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(24,0.3973574);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(25,0.3953824);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(26,0.4192585);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(27,0.5109217);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(28,0.5751479);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(29,0.4060472);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(30,0.2680921);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(31,0.1253127);
   VbbHcc_tags_H_dR_stack_9->SetBinError(3,0.09652268);
   VbbHcc_tags_H_dR_stack_9->SetBinError(4,0.1312586);
   VbbHcc_tags_H_dR_stack_9->SetBinError(5,0.128234);
   VbbHcc_tags_H_dR_stack_9->SetBinError(6,0.1095803);
   VbbHcc_tags_H_dR_stack_9->SetBinError(7,0.09778776);
   VbbHcc_tags_H_dR_stack_9->SetBinError(8,0.083776);
   VbbHcc_tags_H_dR_stack_9->SetBinError(9,0.06450154);
   VbbHcc_tags_H_dR_stack_9->SetBinError(10,0.06802993);
   VbbHcc_tags_H_dR_stack_9->SetBinError(11,0.06963317);
   VbbHcc_tags_H_dR_stack_9->SetBinError(12,0.08503839);
   VbbHcc_tags_H_dR_stack_9->SetBinError(13,0.1071499);
   VbbHcc_tags_H_dR_stack_9->SetBinError(14,0.1211609);
   VbbHcc_tags_H_dR_stack_9->SetBinError(15,0.1319154);
   VbbHcc_tags_H_dR_stack_9->SetBinError(16,0.1397919);
   VbbHcc_tags_H_dR_stack_9->SetBinError(17,0.1384206);
   VbbHcc_tags_H_dR_stack_9->SetBinError(18,0.1709237);
   VbbHcc_tags_H_dR_stack_9->SetBinError(19,0.1098746);
   VbbHcc_tags_H_dR_stack_9->SetBinError(20,0.09356249);
   VbbHcc_tags_H_dR_stack_9->SetBinError(21,0.06967316);
   VbbHcc_tags_H_dR_stack_9->SetBinError(22,0.06253798);
   VbbHcc_tags_H_dR_stack_9->SetBinError(23,0.04687508);
   VbbHcc_tags_H_dR_stack_9->SetBinError(24,0.03556737);
   VbbHcc_tags_H_dR_stack_9->SetBinError(25,0.03497785);
   VbbHcc_tags_H_dR_stack_9->SetBinError(26,0.03842273);
   VbbHcc_tags_H_dR_stack_9->SetBinError(27,0.04106543);
   VbbHcc_tags_H_dR_stack_9->SetBinError(28,0.04361053);
   VbbHcc_tags_H_dR_stack_9->SetBinError(29,0.04903261);
   VbbHcc_tags_H_dR_stack_9->SetBinError(30,0.02881465);
   VbbHcc_tags_H_dR_stack_9->SetBinError(31,0.01968136);
   VbbHcc_tags_H_dR_stack_9->SetEntries(21953);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_10 = new TH1D("VbbHcc_tags_H_dR_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(3,0.7099348);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(4,1.373925);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(5,1.513236);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(6,1.4043);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(7,1.090653);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(8,0.8503823);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(9,0.7178042);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(10,0.6668591);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(11,0.7385024);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(12,0.8876236);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(13,1.10008);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(14,1.225768);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(15,1.374132);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(16,1.45006);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(17,1.41073);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(18,1.28126);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(19,0.9719505);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(20,0.8325271);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(21,0.6312182);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(22,0.4624555);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(23,0.3150489);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(24,0.2836181);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(25,0.2294743);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(26,0.2371179);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(27,0.2214762);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(28,0.1674655);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(29,0.144633);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(30,0.08483471);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(31,0.05076001);
   VbbHcc_tags_H_dR_stack_10->SetBinError(3,0.02047852);
   VbbHcc_tags_H_dR_stack_10->SetBinError(4,0.02815367);
   VbbHcc_tags_H_dR_stack_10->SetBinError(5,0.02919761);
   VbbHcc_tags_H_dR_stack_10->SetBinError(6,0.02788001);
   VbbHcc_tags_H_dR_stack_10->SetBinError(7,0.02449391);
   VbbHcc_tags_H_dR_stack_10->SetBinError(8,0.02165912);
   VbbHcc_tags_H_dR_stack_10->SetBinError(9,0.02000388);
   VbbHcc_tags_H_dR_stack_10->SetBinError(10,0.01927533);
   VbbHcc_tags_H_dR_stack_10->SetBinError(11,0.02028436);
   VbbHcc_tags_H_dR_stack_10->SetBinError(12,0.02223614);
   VbbHcc_tags_H_dR_stack_10->SetBinError(13,0.02472408);
   VbbHcc_tags_H_dR_stack_10->SetBinError(14,0.02609359);
   VbbHcc_tags_H_dR_stack_10->SetBinError(15,0.02766666);
   VbbHcc_tags_H_dR_stack_10->SetBinError(16,0.0284515);
   VbbHcc_tags_H_dR_stack_10->SetBinError(17,0.02795658);
   VbbHcc_tags_H_dR_stack_10->SetBinError(18,0.02666167);
   VbbHcc_tags_H_dR_stack_10->SetBinError(19,0.023242);
   VbbHcc_tags_H_dR_stack_10->SetBinError(20,0.02146048);
   VbbHcc_tags_H_dR_stack_10->SetBinError(21,0.0187473);
   VbbHcc_tags_H_dR_stack_10->SetBinError(22,0.01609013);
   VbbHcc_tags_H_dR_stack_10->SetBinError(23,0.01318081);
   VbbHcc_tags_H_dR_stack_10->SetBinError(24,0.01251907);
   VbbHcc_tags_H_dR_stack_10->SetBinError(25,0.01132316);
   VbbHcc_tags_H_dR_stack_10->SetBinError(26,0.01152622);
   VbbHcc_tags_H_dR_stack_10->SetBinError(27,0.01103561);
   VbbHcc_tags_H_dR_stack_10->SetBinError(28,0.009690884);
   VbbHcc_tags_H_dR_stack_10->SetBinError(29,0.009070308);
   VbbHcc_tags_H_dR_stack_10->SetBinError(30,0.006917924);
   VbbHcc_tags_H_dR_stack_10->SetBinError(31,0.005303717);
   VbbHcc_tags_H_dR_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_11 = new TH1D("VbbHcc_tags_H_dR_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(3,0.01505562);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.009723994);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.01414115);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.02222124);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.01312788);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(8,0.006112798);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,0.006735684);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,0.008504728);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(11,0.008856905);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(12,0.004503377);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,0.002784056);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,0.002203227);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,0.004680416);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(16,0.002607922);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.006801058);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.007946073);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.004445161);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.003759242);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.002466447);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.01206897);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(25,0.004180665);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(26,0.00441557);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(29,0.004313901);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(30,0.004391015);
   VbbHcc_tags_H_dR_stack_11->SetBinError(3,0.005807058);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.004931511);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.005838752);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.007943504);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.005911487);
   VbbHcc_tags_H_dR_stack_11->SetBinError(8,0.003789232);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.003889547);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.004344675);
   VbbHcc_tags_H_dR_stack_11->SetBinError(11,0.004436278);
   VbbHcc_tags_H_dR_stack_11->SetBinError(12,0.0031847);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.002784056);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.002203227);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.003336775);
   VbbHcc_tags_H_dR_stack_11->SetBinError(16,0.002607922);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.003929853);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.004133672);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.00314325);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.002691162);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.002218895);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.005434636);
   VbbHcc_tags_H_dR_stack_11->SetBinError(25,0.002957052);
   VbbHcc_tags_H_dR_stack_11->SetBinError(26,0.003122376);
   VbbHcc_tags_H_dR_stack_11->SetBinError(29,0.003052019);
   VbbHcc_tags_H_dR_stack_11->SetBinError(30,0.003104924);
   VbbHcc_tags_H_dR_stack_11->SetEntries(77);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_12 = new TH1D("VbbHcc_tags_H_dR_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(3,0.00307274);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(4,0.006074353);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(5,0.009248268);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(6,0.01064199);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(7,0.006388254);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(8,0.00359968);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(9,0.005383322);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(10,0.003551022);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(11,0.005652967);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(12,0.003233695);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(13,0.004502877);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(14,0.002346819);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(15,0.00311462);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(16,0.0029485);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(17,0.001115767);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(18,0.004915233);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(19,0.002279664);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(20,0.002673571);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(21,0.001551174);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(22,0.001622821);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(23,0.001423927);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(24,0.001144914);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(25,0.001137933);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(26,0.0005267563);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(27,0.003137287);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(28,0.000301748);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(29,0.0009053426);
   VbbHcc_tags_H_dR_stack_12->SetBinError(3,0.001020131);
   VbbHcc_tags_H_dR_stack_12->SetBinError(4,0.001428913);
   VbbHcc_tags_H_dR_stack_12->SetBinError(5,0.001727443);
   VbbHcc_tags_H_dR_stack_12->SetBinError(6,0.001922374);
   VbbHcc_tags_H_dR_stack_12->SetBinError(7,0.001453705);
   VbbHcc_tags_H_dR_stack_12->SetBinError(8,0.001091625);
   VbbHcc_tags_H_dR_stack_12->SetBinError(9,0.001355599);
   VbbHcc_tags_H_dR_stack_12->SetBinError(10,0.001054278);
   VbbHcc_tags_H_dR_stack_12->SetBinError(11,0.001356564);
   VbbHcc_tags_H_dR_stack_12->SetBinError(12,0.0009701334);
   VbbHcc_tags_H_dR_stack_12->SetBinError(13,0.001214754);
   VbbHcc_tags_H_dR_stack_12->SetBinError(14,0.0008396449);
   VbbHcc_tags_H_dR_stack_12->SetBinError(15,0.0009869081);
   VbbHcc_tags_H_dR_stack_12->SetBinError(16,0.0009558856);
   VbbHcc_tags_H_dR_stack_12->SetBinError(17,0.000652495);
   VbbHcc_tags_H_dR_stack_12->SetBinError(18,0.001219711);
   VbbHcc_tags_H_dR_stack_12->SetBinError(19,0.0007947417);
   VbbHcc_tags_H_dR_stack_12->SetBinError(20,0.0009796805);
   VbbHcc_tags_H_dR_stack_12->SetBinError(21,0.0007021309);
   VbbHcc_tags_H_dR_stack_12->SetBinError(22,0.000728203);
   VbbHcc_tags_H_dR_stack_12->SetBinError(23,0.0006658265);
   VbbHcc_tags_H_dR_stack_12->SetBinError(24,0.0005861688);
   VbbHcc_tags_H_dR_stack_12->SetBinError(25,0.0006061969);
   VbbHcc_tags_H_dR_stack_12->SetBinError(26,0.0004156935);
   VbbHcc_tags_H_dR_stack_12->SetBinError(27,0.0009626089);
   VbbHcc_tags_H_dR_stack_12->SetBinError(28,0.000301748);
   VbbHcc_tags_H_dR_stack_12->SetBinError(29,0.000678235);
   VbbHcc_tags_H_dR_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR__62 = new TH1D("VbbHcc_tags_H_dR__62","",30,0,6);
   VbbHcc_tags_H_dR__62->SetBinContent(2,13);
   VbbHcc_tags_H_dR__62->SetBinContent(3,14570);
   VbbHcc_tags_H_dR__62->SetBinContent(4,15419);
   VbbHcc_tags_H_dR__62->SetBinContent(5,11654);
   VbbHcc_tags_H_dR__62->SetBinContent(6,10983);
   VbbHcc_tags_H_dR__62->SetBinContent(7,10448);
   VbbHcc_tags_H_dR__62->SetBinContent(8,10460);
   VbbHcc_tags_H_dR__62->SetBinContent(9,10667);
   VbbHcc_tags_H_dR__62->SetBinContent(10,11143);
   VbbHcc_tags_H_dR__62->SetBinContent(11,12128);
   VbbHcc_tags_H_dR__62->SetBinContent(12,13297);
   VbbHcc_tags_H_dR__62->SetBinContent(13,14808);
   VbbHcc_tags_H_dR__62->SetBinContent(14,16857);
   VbbHcc_tags_H_dR__62->SetBinContent(15,18120);
   VbbHcc_tags_H_dR__62->SetBinContent(16,19514);
   VbbHcc_tags_H_dR__62->SetBinContent(17,18782);
   VbbHcc_tags_H_dR__62->SetBinContent(18,17314);
   VbbHcc_tags_H_dR__62->SetBinContent(19,15832);
   VbbHcc_tags_H_dR__62->SetBinContent(20,13661);
   VbbHcc_tags_H_dR__62->SetBinContent(21,11360);
   VbbHcc_tags_H_dR__62->SetBinContent(22,8961);
   VbbHcc_tags_H_dR__62->SetBinContent(23,7176);
   VbbHcc_tags_H_dR__62->SetBinContent(24,5654);
   VbbHcc_tags_H_dR__62->SetBinContent(25,4538);
   VbbHcc_tags_H_dR__62->SetBinContent(26,3560);
   VbbHcc_tags_H_dR__62->SetBinContent(27,2910);
   VbbHcc_tags_H_dR__62->SetBinContent(28,2507);
   VbbHcc_tags_H_dR__62->SetBinContent(29,2290);
   VbbHcc_tags_H_dR__62->SetBinContent(30,1605);
   VbbHcc_tags_H_dR__62->SetBinContent(31,1343);
   VbbHcc_tags_H_dR__62->SetEntries(307603);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR__62->SetLineColor(ci);
   VbbHcc_tags_H_dR__62->SetLineWidth(2);
   VbbHcc_tags_H_dR__62->SetMarkerStyle(20);
   VbbHcc_tags_H_dR__62->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR__62->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR__62->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__62->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__62->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__62->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__62->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__62->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__62->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__62->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR__62->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__62->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__62->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__62->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__62->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__62->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_fx1045[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fy1045[30] = {
   0,
   0.818108,
   14839.97,
   12240.61,
   9261.116,
   8150.4,
   7599.863,
   8891.658,
   8967.891,
   8925.342,
   10040.21,
   12282.19,
   11368.12,
   13510.75,
   14810.13,
   14770.27,
   14682.84,
   17058,
   13009.76,
   11351.78,
   5805.088,
   5118.103,
   4610.969,
   3155.684,
   2985.74,
   3628.512,
   3092.266,
   1455.373,
   4059.343,
   1729.653};
   Double_t Graph_from_VbbHcc_tags_H_dR_fex1045[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fey1045[30] = {
   0,
   0.2455611,
   1911.058,
   1459.776,
   1326.784,
   1186.647,
   1175.518,
   1391.098,
   1328.377,
   1295.254,
   1381.791,
   1703.61,
   1444.614,
   1549.508,
   1923.535,
   1644.579,
   1757.401,
   1914.196,
   1465.971,
   1622.95,
   752.8958,
   691.7928,
   932.3503,
   515.8812,
   803.1277,
   2138.228,
   911.5612,
   299.92,
   2274.409,
   644.5105};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_fx1045,Graph_from_VbbHcc_tags_H_dR_fy1045,Graph_from_VbbHcc_tags_H_dR_fex1045,Graph_from_VbbHcc_tags_H_dR_fey1045);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR1045 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR1045","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetMaximum(20869.41);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR1045->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR1045);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR","MC unc. (stat.)","fl");

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
   H_dR_tags_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9499975,-0.2774193,6.525,1.658065);
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
   
   TH1D *data_mc_ratio__63 = new TH1D("data_mc_ratio__63","",30,0,6);
   data_mc_ratio__63->SetBinContent(2,15.89032);
   data_mc_ratio__63->SetBinContent(3,0.9818078);
   data_mc_ratio__63->SetBinContent(4,1.259659);
   data_mc_ratio__63->SetBinContent(5,1.25838);
   data_mc_ratio__63->SetBinContent(6,1.347541);
   data_mc_ratio__63->SetBinContent(7,1.374762);
   data_mc_ratio__63->SetBinContent(8,1.176384);
   data_mc_ratio__63->SetBinContent(9,1.189466);
   data_mc_ratio__63->SetBinContent(10,1.248468);
   data_mc_ratio__63->SetBinContent(11,1.207943);
   data_mc_ratio__63->SetBinContent(12,1.082624);
   data_mc_ratio__63->SetBinContent(13,1.30259);
   data_mc_ratio__63->SetBinContent(14,1.247674);
   data_mc_ratio__63->SetBinContent(15,1.223487);
   data_mc_ratio__63->SetBinContent(16,1.321167);
   data_mc_ratio__63->SetBinContent(17,1.27918);
   data_mc_ratio__63->SetBinContent(18,1.015008);
   data_mc_ratio__63->SetBinContent(19,1.216932);
   data_mc_ratio__63->SetBinContent(20,1.203424);
   data_mc_ratio__63->SetBinContent(21,1.956904);
   data_mc_ratio__63->SetBinContent(22,1.750844);
   data_mc_ratio__63->SetBinContent(23,1.556289);
   data_mc_ratio__63->SetBinContent(24,1.791688);
   data_mc_ratio__63->SetBinContent(25,1.519891);
   data_mc_ratio__63->SetBinContent(26,0.9811185);
   data_mc_ratio__63->SetBinContent(27,0.9410574);
   data_mc_ratio__63->SetBinContent(28,1.722582);
   data_mc_ratio__63->SetBinContent(29,0.5641307);
   data_mc_ratio__63->SetBinContent(30,0.9279318);
   data_mc_ratio__63->SetBinContent(31,1.200146);
   data_mc_ratio__63->SetBinError(2,4.407183);
   data_mc_ratio__63->SetBinError(3,0.00813386);
   data_mc_ratio__63->SetBinError(4,0.01014437);
   data_mc_ratio__63->SetBinError(5,0.01165666);
   data_mc_ratio__63->SetBinError(6,0.01285824);
   data_mc_ratio__63->SetBinError(7,0.01344964);
   data_mc_ratio__63->SetBinError(8,0.01150226);
   data_mc_ratio__63->SetBinError(9,0.01151677);
   data_mc_ratio__63->SetBinError(10,0.01182704);
   data_mc_ratio__63->SetBinError(11,0.01096862);
   data_mc_ratio__63->SetBinError(12,0.009388603);
   data_mc_ratio__63->SetBinError(13,0.01070433);
   data_mc_ratio__63->SetBinError(14,0.009609722);
   data_mc_ratio__63->SetBinError(15,0.009089085);
   data_mc_ratio__63->SetBinError(16,0.009457681);
   data_mc_ratio__63->SetBinError(17,0.009333851);
   data_mc_ratio__63->SetBinError(18,0.007713841);
   data_mc_ratio__63->SetBinError(19,0.009671605);
   data_mc_ratio__63->SetBinError(20,0.01029621);
   data_mc_ratio__63->SetBinError(21,0.01836032);
   data_mc_ratio__63->SetBinError(22,0.01849563);
   data_mc_ratio__63->SetBinError(23,0.01837169);
   data_mc_ratio__63->SetBinError(24,0.02382783);
   data_mc_ratio__63->SetBinError(25,0.02256214);
   data_mc_ratio__63->SetBinError(26,0.01644358);
   data_mc_ratio__63->SetBinError(27,0.01744495);
   data_mc_ratio__63->SetBinError(28,0.03440352);
   data_mc_ratio__63->SetBinError(29,0.01178859);
   data_mc_ratio__63->SetBinError(30,0.02316213);
   data_mc_ratio__63->SetBinError(31,0.5443499);
   data_mc_ratio__63->SetMinimum(0.4);
   data_mc_ratio__63->SetMaximum(1.6);
   data_mc_ratio__63->SetEntries(60.52139);
   data_mc_ratio__63->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__63->SetLineColor(ci);
   data_mc_ratio__63->SetLineWidth(2);
   data_mc_ratio__63->SetMarkerStyle(20);
   data_mc_ratio__63->SetMarkerSize(1.2);
   data_mc_ratio__63->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__63->GetXaxis()->SetRange(1,31);
   data_mc_ratio__63->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__63->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__63->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__63->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__63->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__63->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__63->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__63->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__63->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__63->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__63->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__63->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__63->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__63->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__63->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__63->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__63->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1046[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1046[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1046[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1046[30] = {
   0,
   0.3001573,
   0.1287777,
   0.1192567,
   0.143264,
   0.1455938,
   0.1546762,
   0.1564498,
   0.1481259,
   0.1451209,
   0.1376258,
   0.1387057,
   0.1270759,
   0.1146871,
   0.1298797,
   0.1113439,
   0.1196908,
   0.1122169,
   0.1126824,
   0.1429688,
   0.1296958,
   0.1351658,
   0.2022027,
   0.1634768,
   0.2689878,
   0.5892852,
   0.2947874,
   0.2060777,
   0.5602899,
   0.3726242};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1046,Graph_from_mc_statistical_error_fy1046,Graph_from_mc_statistical_error_fex1046,Graph_from_mc_statistical_error_fey1046);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1046 = new TH1F("Graph_Graph_from_mc_statistical_error1046","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1046->SetMinimum(0.2928578);
   Graph_Graph_from_mc_statistical_error1046->SetMaximum(1.707142);
   Graph_Graph_from_mc_statistical_error1046->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1046->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1046);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
