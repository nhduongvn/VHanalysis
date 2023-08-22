void H_dR_Bj0_both_17()
{
//=========Macro generated from canvas: H_dR_Bj0_both_17/H_dR_Bj0_both_17
//=========  (Tue Aug 22 09:23:02 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_both_17 = new TCanvas("H_dR_Bj0_both_17", "H_dR_Bj0_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_both_17->SetHighLightColor(2);
   H_dR_Bj0_both_17->Range(0,0,1,1);
   H_dR_Bj0_both_17->SetFillColor(0);
   H_dR_Bj0_both_17->SetFillStyle(4000);
   H_dR_Bj0_both_17->SetBorderMode(0);
   H_dR_Bj0_both_17->SetBorderSize(2);
   H_dR_Bj0_both_17->SetFrameFillStyle(1000);
   H_dR_Bj0_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-116.9419,6.314516,116834.9);
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
   st->SetMaximum(100133.1);
   
   TH1F *st_stack_234 = new TH1F("st_stack_234","",30,0,6);
   st_stack_234->SetMinimum(0.01);
   st_stack_234->SetMaximum(105139.8);
   st_stack_234->SetDirectory(0);
   st_stack_234->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_234->SetLineColor(ci);
   st_stack_234->GetXaxis()->SetRange(1,30);
   st_stack_234->GetXaxis()->SetLabelFont(42);
   st_stack_234->GetXaxis()->SetLabelSize(0.035);
   st_stack_234->GetXaxis()->SetTitleSize(0.035);
   st_stack_234->GetXaxis()->SetTitleFont(42);
   st_stack_234->GetYaxis()->SetTitle("Events/0.2");
   st_stack_234->GetYaxis()->SetLabelFont(42);
   st_stack_234->GetYaxis()->SetLabelSize(0.05);
   st_stack_234->GetYaxis()->SetTitleSize(0.057);
   st_stack_234->GetYaxis()->SetTitleOffset(1.2);
   st_stack_234->GetYaxis()->SetTitleFont(42);
   st_stack_234->GetZaxis()->SetLabelFont(42);
   st_stack_234->GetZaxis()->SetLabelSize(0.035);
   st_stack_234->GetZaxis()->SetTitleSize(0.035);
   st_stack_234->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_234);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,5605.271);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,42497.25);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,24693.6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,16470.72);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,15091.08);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,10680.58);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,7891.814);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,11203.64);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,23964.43);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,7792.642);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,6669.837);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,8155.818);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,6358.146);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,5848.913);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,6399.787);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,5351.414);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,3041.408);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,2008.33);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,1732.341);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,1041.964);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,1261.579);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,768.5221);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,435.9485);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,134.9829);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,11.63092);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,15.03684);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(27,14.46997);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(28,33.08728);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,701.3399);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,17142.79);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,1981.147);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,1563.394);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,1596.461);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,1316.963);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,1070.94);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,2047.93);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,17056.98);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,1159.459);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,1059.801);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,1189.701);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,991.2858);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,952.2482);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,958.3484);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,873.9854);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,623.2897);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,486.2914);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,482.1518);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,389.3248);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,472.6109);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,384.0182);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,273.874);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,47.79244);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,8.316861);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,10.2475);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(27,10.23181);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(28,26.30626);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(9795);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,36.1247);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,103.9163);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,124.0493);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,106.5815);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,92.63978);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,76.53585);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,69.41482);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,56.38451);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,51.13877);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,45.18097);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,39.03579);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,41.24081);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,34.27894);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,37.58221);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,34.84794);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,32.59235);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,17.95308);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,14.11229);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,9.210417);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,7.550047);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,4.23141);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,3.271159);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,2.37344);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,1.919127);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,1.016527);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.5725128);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,0.2412652);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(28,0.3186829);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,2.521376);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,3.9697);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,4.430938);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,4.030676);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,3.833418);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,3.476263);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,3.325499);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,3.028849);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,2.811046);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,2.620413);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,2.393012);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,2.581688);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,2.244449);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,2.434109);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,2.299489);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,2.297908);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,1.641121);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,1.433012);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,1.117006);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,1.053232);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.7404785);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.6237215);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.5371991);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.5662037);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.4036436);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.2914711);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.1078971);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(28,0.2692682);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(12402);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(1,511.2151);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(2,2072.541);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(3,2636.685);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(4,2373.77);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(5,1973.028);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(6,1639.409);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(7,1362.569);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(8,1153.721);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(9,999.6388);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(10,904.3374);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(11,792.4389);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(12,745.9569);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(13,662.548);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(14,632.5619);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(15,586.4772);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(16,540.3946);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(17,333.3446);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(18,221.4141);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(19,151.5575);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(20,104.9585);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(21,69.99503);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(22,45.00568);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(23,30.43981);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(24,20.5296);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(25,12.59286);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(26,6.805462);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(27,3.462449);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(28,1.910679);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(29,1.812601);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(30,0.5494307);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(31,1.415821);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(1,5.749138);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(2,11.58642);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(3,13.09446);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(4,12.41328);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(5,11.30513);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(6,10.29818);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(7,9.376483);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(8,8.614809);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(9,8.014569);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(10,7.637088);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(11,7.146402);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(12,6.942813);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(13,6.531267);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(14,6.391579);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(15,6.157397);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(16,5.91516);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(17,4.632741);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(18,3.777513);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(19,3.123912);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(20,2.592394);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(21,2.116993);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(22,1.704149);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(23,1.394111);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(24,1.149029);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(25,0.9046543);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(26,0.6511008);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(27,0.4658371);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(28,0.3604186);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(29,0.3487072);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(30,0.1870884);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(31,0.2906093);
   VbbHcc_both_H_dR_Bj0_stack_3->SetEntries(333238);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(1,96.11543);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(2,338.256);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(3,346.1409);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(4,264.0739);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(5,183.6108);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(6,153.8589);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(7,139.7046);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(8,125.5941);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(9,94.17078);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(10,98.75619);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(11,107.4422);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(12,87.98762);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(13,76.23453);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(14,80.43076);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(15,79.46539);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(16,75.46142);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(17,40.07827);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(18,24.35623);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(19,14.11499);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(20,11.61297);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(21,8.605685);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(22,4.372771);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(23,2.419982);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(24,1.813394);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(25,1.500687);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(26,0.2363214);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(27,0.1695794);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(29,0.066742);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(30,0.3186177);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(1,4.64305);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(2,11.14066);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(3,12.84365);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(4,11.96114);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(5,8.544869);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(6,8.163656);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(7,8.513025);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(8,8.872884);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(9,5.207552);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(10,6.750475);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(11,8.624397);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(12,7.76006);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(13,4.841547);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(14,4.852112);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(15,4.86758);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(16,5.596736);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(17,2.785444);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(18,2.179108);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(19,1.522036);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(20,1.57255);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(21,1.263636);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(22,0.9816106);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(23,0.705245);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(24,0.5409894);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(25,0.5964585);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(26,0.139587);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(27,0.122597);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(29,0.066742);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(30,0.3186177);
   VbbHcc_both_H_dR_Bj0_stack_4->SetEntries(18334);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(1,13.34631);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(2,28.31752);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(3,42.29449);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(4,20.50198);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(5,23.5489);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(6,15.3059);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(7,11.99962);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(8,17.29916);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(9,7.968154);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(10,15.55211);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(11,10.43022);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(12,12.63374);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(13,7.940092);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(14,7.877338);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(15,8.195707);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(16,7.053435);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(17,2.754426);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(18,6.409712);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(19,2.396817);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(20,0.9636169);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(21,0.5039483);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(22,2.327831);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(23,0.3817195);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(24,0.0448957);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(25,0.182441);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(26,0.1695762);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(1,2.104431);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(2,2.927562);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(3,8.488678);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(4,2.786523);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(5,3.693877);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(6,2.449029);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(7,2.329051);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(8,7.66038);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(9,1.096753);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(10,3.123341);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(11,2.338263);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(12,2.593924);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(13,1.83541);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(14,1.092454);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(15,1.611259);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(16,1.475421);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(17,0.5431352);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(18,1.88061);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(19,0.6071226);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(20,0.3250484);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(21,0.2426327);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(22,1.282712);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(23,0.1831133);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(24,0.0448957);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(25,0.1290053);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(26,0.1695762);
   VbbHcc_both_H_dR_Bj0_stack_5->SetEntries(2217);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(10,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(16,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(18,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(2,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(4,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(10,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(16,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(18,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(2,0.5303731);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(3,1.060746);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(4,1.060746);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(5,0.2651865);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(8,0.7955596);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(9,0.2651865);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(10,0.5303731);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(11,0.5303731);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(12,0.2651865);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(14,0.5303731);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(16,0.5303731);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(18,0.2651865);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(22,0.2651865);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(2,0.3750304);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(3,0.5303731);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(4,0.5303731);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(5,0.2651865);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(8,0.4593166);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(9,0.2651865);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(10,0.3750304);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(11,0.3750304);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(12,0.2651865);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(14,0.3750304);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(16,0.3750304);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(18,0.2651865);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(22,0.2651865);
   VbbHcc_both_H_dR_Bj0_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(1,2.532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(2,7.343543);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(3,6.837091);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(4,5.824189);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(5,2.532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(6,1.519354);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(7,2.532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(8,1.772579);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(9,2.025805);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(10,1.519354);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(11,0.5064512);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(12,1.012902);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(13,2.532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(14,2.532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(15,1.266128);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(16,1.772579);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(17,1.519354);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(18,0.7596768);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(19,0.2532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(1,0.8007697);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(2,1.363662);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(3,1.315799);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(4,1.214427);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(5,0.8007697);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(6,0.6202735);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(7,0.8007697);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(8,0.669972);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(9,0.7162302);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(10,0.6202735);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(11,0.3581151);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(12,0.5064512);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(13,0.8007697);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(14,0.8007697);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(15,0.5662297);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(16,0.669972);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(17,0.6202735);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(18,0.4385996);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(19,0.2532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(1,1.847694);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(2,8.233866);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(3,8.369536);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(4,5.704593);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(5,3.574254);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(6,2.524428);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(7,1.996284);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(8,1.778244);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(9,1.644189);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(10,1.544052);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(11,1.535976);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(12,1.413227);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(13,1.461681);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(14,1.368004);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(15,1.389001);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(16,1.235564);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(17,0.7154968);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(18,0.4441571);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(19,0.248728);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(20,0.1211338);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(21,0.08560119);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(22,0.06621979);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(23,0.02745699);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(24,0.01453605);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(25,0.01292094);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(26,0.006460468);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(27,0.003230234);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(28,0.001615117);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(29,0.001615117);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(1,0.05462821);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(2,0.1153198);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(3,0.116266);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(4,0.09598742);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(5,0.07597919);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(6,0.06385331);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(7,0.05678233);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(8,0.05359171);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(9,0.0515321);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(10,0.0499382);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(11,0.04980744);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(12,0.0477758);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(13,0.04858791);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(14,0.04700517);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(15,0.04736452);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(16,0.04467193);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(17,0.03399428);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(18,0.02678368);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(19,0.02004307);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(20,0.01398732);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(21,0.01175823);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(22,0.01034179);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(23,0.006659297);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(24,0.004845351);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(25,0.00456824);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(26,0.003230234);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(27,0.00228412);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(28,0.001615117);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(29,0.001615117);
   VbbHcc_both_H_dR_Bj0_stack_9->SetEntries(29329);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(1,0.68842);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(2,3.150997);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(3,3.719927);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(4,2.806787);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(5,1.836115);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(6,1.317833);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(7,1.017386);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(8,0.8492153);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(9,0.7710304);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(10,0.6889117);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(11,0.6205615);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(12,0.5649961);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(13,0.5222157);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(14,0.5123812);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(15,0.4617331);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(16,0.436655);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(17,0.2547154);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(18,0.1529276);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(19,0.08998633);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(20,0.05064804);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(21,0.02999544);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(22,0.01770223);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(23,0.01524359);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(24,0.008359386);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(25,0.005409014);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(26,0.0034421);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(27,0.001966914);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(28,0.001475186);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(29,0.0009834572);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(31,0.0009834572);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(1,0.0183988);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(2,0.03936286);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(3,0.04276908);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(4,0.03715074);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(5,0.03004779);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(6,0.02545616);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(7,0.02236689);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(8,0.02043486);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(9,0.01947146);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(10,0.01840537);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(11,0.01746848);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(12,0.01666808);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(13,0.01602462);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(14,0.01587301);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(15,0.01506809);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(16,0.01465318);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(17,0.01119155);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(18,0.008671728);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(19,0.006651981);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(20,0.0049905);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(21,0.003840523);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(22,0.002950371);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(23,0.002737829);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(24,0.002027449);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(25,0.001630879);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(26,0.001300992);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(27,0.0009834572);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(28,0.0008516989);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(29,0.0006954092);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(31,0.0006954092);
   VbbHcc_both_H_dR_Bj0_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(1,0.004740753);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(2,0.02686427);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(3,0.03318527);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(4,0.02054326);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(5,0.01422226);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(6,0.009481507);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(7,0.009481507);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(8,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(9,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(10,0.006321005);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(11,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(12,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(14,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(15,0.004740753);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(16,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(17,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(1,0.002737075);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(2,0.006515542);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(3,0.00724162);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(4,0.005697677);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(5,0.004740753);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(6,0.003870809);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(7,0.003870809);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(8,0.002234813);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(9,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(10,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(11,0.002234813);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(12,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(14,0.002234813);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(15,0.002737075);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(16,0.002234813);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(17,0.002234813);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(19,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(1,0.002283662);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(2,0.008304226);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(3,0.01058789);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(4,0.01038028);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(5,0.005397747);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(6,0.00477493);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(7,0.003529296);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(8,0.003114085);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(9,0.002906479);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(10,0.002698874);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(11,0.001660845);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(12,0.001038028);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(13,0.001660845);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(14,0.000622817);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(15,0.00145324);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(16,0.001038028);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(18,0.001245634);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(19,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(20,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(21,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(23,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(29,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(1,0.0006885501);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(2,0.001313013);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(3,0.001482601);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(4,0.001467994);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(5,0.001058585);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(6,0.0009956417);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(7,0.00085598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(8,0.0008040532);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(9,0.0007767892);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(10,0.0007485328);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(11,0.0005871975);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(12,0.0004642204);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(13,0.0005871975);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(14,0.0003595835);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(15,0.0005492729);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(16,0.0004642204);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(18,0.0005085279);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(19,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(20,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(21,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(23,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(29,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj0__642 = new TH1D("VbbHcc_both_H_dR_Bj0__642","",30,0,6);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(1,2764);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(2,8615);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(3,8636);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(4,6786);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(5,5597);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(6,4642);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(7,4039);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(8,3545);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(9,3003);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(10,2753);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(11,2521);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(12,2326);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(13,2123);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(14,2140);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(15,2045);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(16,1802);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(17,1166);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(18,808);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(19,573);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(20,419);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(21,255);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(22,172);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(23,119);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(24,87);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(25,44);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(26,22);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(27,15);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(28,7);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(29,4);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(30,3);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(31,5);
   VbbHcc_both_H_dR_Bj0__642->SetEntries(67065);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0__642->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0__642->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj0__642->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj0__642->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj0__642->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0__642->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__642->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__642->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__642->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__642->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__642->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__642->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__642->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0__642->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__642->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__642->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__642->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__642->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__642->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fx1467[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fy1467[30] = {
   6267.148,
   45059.89,
   27862.8,
   19251.39,
   17372.13,
   12571.06,
   9481.061,
   12561.84,
   25122.06,
   8861.076,
   7622.382,
   9046.896,
   7143.665,
   6612.312,
   7111.896,
   6011.21,
   3438.031,
   2276.561,
   1910.214,
   1167.221,
   1345.031,
   823.8488,
   471.6064,
   159.3128,
   26.94177,
   22.83061,
   18.34846,
   35.31973,
   1.882149,
   0.8680483};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fex1467[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fey1467[30] = {
   701.387,
   17142.8,
   1981.256,
   1563.497,
   1596.533,
   1317.035,
   1071.023,
   2047.984,
   17056.99,
   1159.511,
   1059.866,
   1189.752,
   991.3237,
   952.2862,
   958.3848,
   874.028,
   623.3159,
   486.3171,
   482.1661,
   389.3382,
   472.6179,
   384.026,
   273.879,
   47.81268,
   8.397853,
   10.27465,
   10.24371,
   26.3101,
   0.3550413,
   0.3694852};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj0_fx1467,Graph_from_VbbHcc_both_H_dR_Bj0_fy1467,Graph_from_VbbHcc_both_H_dR_Bj0_fex1467,Graph_from_VbbHcc_both_H_dR_Bj0_fey1467);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj01467 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj01467","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetMinimum(0.4487069);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetMaximum(68422.91);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj01467);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj0","MC unc. (stat.)","fl");

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
   H_dR_Bj0_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__643 = new TH1D("data_mc_ratio__643","",30,0,6);
   data_mc_ratio__643->SetBinContent(1,0.44103);
   data_mc_ratio__643->SetBinContent(2,0.19119);
   data_mc_ratio__643->SetBinContent(3,0.3099473);
   data_mc_ratio__643->SetBinContent(4,0.352494);
   data_mc_ratio__643->SetBinContent(5,0.3221827);
   data_mc_ratio__643->SetBinContent(6,0.3692608);
   data_mc_ratio__643->SetBinContent(7,0.4260072);
   data_mc_ratio__643->SetBinContent(8,0.2822039);
   data_mc_ratio__643->SetBinContent(9,0.1195364);
   data_mc_ratio__643->SetBinContent(10,0.3106846);
   data_mc_ratio__643->SetBinContent(11,0.3307365);
   data_mc_ratio__643->SetBinContent(12,0.2571048);
   data_mc_ratio__643->SetBinContent(13,0.2971864);
   data_mc_ratio__643->SetBinContent(14,0.3236387);
   data_mc_ratio__643->SetBinContent(15,0.2875464);
   data_mc_ratio__643->SetBinContent(16,0.2997733);
   data_mc_ratio__643->SetBinContent(17,0.3391476);
   data_mc_ratio__643->SetBinContent(18,0.3549213);
   data_mc_ratio__643->SetBinContent(19,0.2999664);
   data_mc_ratio__643->SetBinContent(20,0.3589722);
   data_mc_ratio__643->SetBinContent(21,0.1895867);
   data_mc_ratio__643->SetBinContent(22,0.2087762);
   data_mc_ratio__643->SetBinContent(23,0.2523291);
   data_mc_ratio__643->SetBinContent(24,0.5460956);
   data_mc_ratio__643->SetBinContent(25,1.633152);
   data_mc_ratio__643->SetBinContent(26,0.9636185);
   data_mc_ratio__643->SetBinContent(27,0.8175075);
   data_mc_ratio__643->SetBinContent(28,0.1981895);
   data_mc_ratio__643->SetBinContent(29,2.12523);
   data_mc_ratio__643->SetBinContent(30,3.456029);
   data_mc_ratio__643->SetBinContent(31,3.529069);
   data_mc_ratio__643->SetBinError(1,0.008388786);
   data_mc_ratio__643->SetBinError(2,0.002059859);
   data_mc_ratio__643->SetBinError(3,0.003335275);
   data_mc_ratio__643->SetBinError(4,0.004279025);
   data_mc_ratio__643->SetBinError(5,0.004306501);
   data_mc_ratio__643->SetBinError(6,0.005419767);
   data_mc_ratio__643->SetBinError(7,0.006703166);
   data_mc_ratio__643->SetBinError(8,0.004739745);
   data_mc_ratio__643->SetBinError(9,0.002181335);
   data_mc_ratio__643->SetBinError(10,0.005921294);
   data_mc_ratio__643->SetBinError(11,0.006587122);
   data_mc_ratio__643->SetBinError(12,0.005330958);
   data_mc_ratio__643->SetBinError(13,0.006449914);
   data_mc_ratio__643->SetBinError(14,0.00699606);
   data_mc_ratio__643->SetBinError(15,0.006358596);
   data_mc_ratio__643->SetBinError(16,0.007061801);
   data_mc_ratio__643->SetBinError(17,0.009932064);
   data_mc_ratio__643->SetBinError(18,0.01248609);
   data_mc_ratio__643->SetBinError(19,0.01253127);
   data_mc_ratio__643->SetBinError(20,0.01753694);
   data_mc_ratio__643->SetBinError(21,0.01187238);
   data_mc_ratio__643->SetBinError(22,0.01591903);
   data_mc_ratio__643->SetBinError(23,0.02313097);
   data_mc_ratio__643->SetBinError(24,0.05854759);
   data_mc_ratio__643->SetBinError(25,0.2462069);
   data_mc_ratio__643->SetBinError(26,0.2054442);
   data_mc_ratio__643->SetBinError(27,0.2110795);
   data_mc_ratio__643->SetBinError(28,0.07490859);
   data_mc_ratio__643->SetBinError(29,1.062615);
   data_mc_ratio__643->SetBinError(30,1.995339);
   data_mc_ratio__643->SetBinError(31,1.736334);
   data_mc_ratio__643->SetMinimum(0.4);
   data_mc_ratio__643->SetMaximum(1.6);
   data_mc_ratio__643->SetEntries(33.06781);
   data_mc_ratio__643->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__643->SetLineColor(ci);
   data_mc_ratio__643->SetLineWidth(2);
   data_mc_ratio__643->SetMarkerStyle(20);
   data_mc_ratio__643->SetMarkerSize(1.2);
   data_mc_ratio__643->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__643->GetXaxis()->SetRange(1,30);
   data_mc_ratio__643->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__643->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__643->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__643->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__643->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__643->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__643->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__643->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__643->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__643->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__643->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__643->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__643->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__643->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__643->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__643->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__643->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1468[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1468[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1468[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1468[30] = {
   0.1119149,
   0.3804447,
   0.07110756,
   0.08121477,
   0.09190194,
   0.1047672,
   0.1129645,
   0.1630322,
   0.6789645,
   0.1308545,
   0.1390466,
   0.1315095,
   0.1387696,
   0.1440171,
   0.134758,
   0.1453997,
   0.1813003,
   0.2136192,
   0.2524147,
   0.3335598,
   0.3513807,
   0.4661365,
   0.5807365,
   0.3001183,
   0.3117039,
   0.4500383,
   0.5582874,
   0.7449123,
   0.1886361,
   0.4256504};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1468,Graph_from_mc_statistical_error_fy1468,Graph_from_mc_statistical_error_fex1468,Graph_from_mc_statistical_error_fey1468);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1468 = new TH1F("Graph_Graph_from_mc_statistical_error1468","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1468->SetMinimum(0.1061053);
   Graph_Graph_from_mc_statistical_error1468->SetMaximum(1.893895);
   Graph_Graph_from_mc_statistical_error1468->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1468->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1468->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1468);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_both_17->cd();
   H_dR_Bj0_both_17->Modified();
   H_dR_Bj0_both_17->cd();
   H_dR_Bj0_both_17->SetSelected(H_dR_Bj0_both_17);
}
