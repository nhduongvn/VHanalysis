void H_dR_Bj0_tags_17()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_17/H_dR_Bj0_tags_17
//=========  (Tue Aug 22 09:20:33 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_tags_17 = new TCanvas("H_dR_Bj0_tags_17", "H_dR_Bj0_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_tags_17->SetHighLightColor(2);
   H_dR_Bj0_tags_17->Range(0,0,1,1);
   H_dR_Bj0_tags_17->SetFillColor(0);
   H_dR_Bj0_tags_17->SetFillStyle(4000);
   H_dR_Bj0_tags_17->SetBorderMode(0);
   H_dR_Bj0_tags_17->SetBorderSize(2);
   H_dR_Bj0_tags_17->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-81.22332,6.314516,81152.09);
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
   st->SetMaximum(69551.2);
   
   TH1F *st_stack_42 = new TH1F("st_stack_42","",30,0,6);
   st_stack_42->SetMinimum(0.01);
   st_stack_42->SetMaximum(73028.76);
   st_stack_42->SetDirectory(0);
   st_stack_42->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_42->SetLineColor(ci);
   st_stack_42->GetXaxis()->SetRange(1,30);
   st_stack_42->GetXaxis()->SetLabelFont(42);
   st_stack_42->GetXaxis()->SetLabelSize(0.035);
   st_stack_42->GetXaxis()->SetTitleSize(0.035);
   st_stack_42->GetXaxis()->SetTitleFont(42);
   st_stack_42->GetYaxis()->SetTitle("Events/0.2");
   st_stack_42->GetYaxis()->SetLabelFont(42);
   st_stack_42->GetYaxis()->SetLabelSize(0.05);
   st_stack_42->GetYaxis()->SetTitleSize(0.057);
   st_stack_42->GetYaxis()->SetTitleOffset(1.2);
   st_stack_42->GetYaxis()->SetTitleFont(42);
   st_stack_42->GetZaxis()->SetLabelFont(42);
   st_stack_42->GetZaxis()->SetLabelSize(0.035);
   st_stack_42->GetZaxis()->SetTitleSize(0.035);
   st_stack_42->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_42);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,4560.091);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,20605.93);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,22119.38);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,16271.65);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,12763.02);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,29609.53);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,10865.58);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,10778.27);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,10483.4);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,7261.877);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,5490.761);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,6356.769);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,7371.915);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,5354.896);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,5055.549);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,4905.409);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,4100.039);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,2258.336);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,19748.3);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,941.9641);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,1614.496);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,483.1336);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,660.5415);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,535.8667);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,599.2343);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,328.7055);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(27,372.0582);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(28,154.9825);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(29,62.46317);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(30,38.61696);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(31,91.83906);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,686.9897);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,1688.389);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,1829.637);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,1623.867);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,1379.9);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,17091.24);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,1691.229);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,1390.299);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,1728.605);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,1065.447);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,913.1082);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,991.8558);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,1154.962);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,913.1751);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,907.9745);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,907.6588);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,823.7256);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,493.4985);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,17040.96);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,285.6094);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,543.8935);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,85.98466);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,279.7763);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,274.943);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,278.3185);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,79.997);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(27,270.4422);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(28,49.0538);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(29,36.71653);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(30,26.6362);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(31,44.76816);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(9351);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,25.22019);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,98.68843);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,122.3967);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,98.64514);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,79.94326);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,69.67313);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,59.68804);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,48.78011);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,45.47515);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,36.32319);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,35.86406);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,33.48132);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,32.66456);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,30.09254);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,27.73016);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,22.48847);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,20.30035);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,13.18004);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,14.46529);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,11.34885);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,9.597672);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,6.14196);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,5.3366);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,3.861046);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,5.748298);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,3.34398);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,1.118182);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(28,1.18531);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(29,1.015367);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(30,0.3514968);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(31,1.126759);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,2.030664);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,3.971534);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,4.421902);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,3.971877);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,3.445328);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,3.267503);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,3.075066);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,2.759071);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,2.593617);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,2.362156);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,2.347544);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,2.2697);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,2.237013);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,2.131786);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,2.102494);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,1.806339);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,1.743559);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,1.204407);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,1.459306);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,1.256913);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,1.198693);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,0.9013812);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,0.8157031);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.6017303);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,0.9812152);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.7483098);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.3355542);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(28,0.2477004);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(29,0.4028866);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(30,0.1331063);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(31,0.4111006);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(11598);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(1,373.5941);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(2,1805.155);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(3,2340.846);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(4,2116.626);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(5,1783.3);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(6,1429.386);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(7,1184.531);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(8,997.9041);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(9,874.5504);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(10,779.2159);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(11,703.9321);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(12,670.2427);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(13,606.0192);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(14,543.284);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(15,491.3661);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(16,426.9945);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(17,347.9702);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(18,290.8901);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(19,235.1535);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(20,197.9813);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(21,156.0489);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(22,133.1592);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(23,99.64553);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(24,76.43341);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(25,60.24701);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(26,44.63624);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(27,30.23316);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(28,19.98196);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(29,15.06018);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(30,8.832288);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(31,15.88946);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(1,4.882189);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(2,10.749);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(3,12.28883);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(4,11.70285);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(5,10.74693);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(6,9.617372);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(7,8.744651);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(8,8.023977);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(9,7.523702);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(10,7.104032);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(11,6.749759);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(12,6.59403);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(13,6.269607);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(14,5.936646);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(15,5.642765);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(16,5.243741);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(17,4.733659);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(18,4.3325);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(19,3.881924);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(20,3.561505);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(21,3.161347);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(22,2.910026);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(23,2.512407);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(24,2.197758);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(25,1.968923);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(26,1.690685);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(27,1.388772);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(28,1.116963);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(29,0.9812003);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(30,0.7383175);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(31,0.9965214);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetEntries(305979);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(1,61.43315);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(2,279.6032);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(3,305.4943);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(4,255.6533);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(5,199.7901);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(6,168.819);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(7,126.6223);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(8,123.1536);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(9,112.5946);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(10,92.61265);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(11,90.39416);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(12,80.06485);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(13,84.45288);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(14,68.37808);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(15,63.34701);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(16,65.71147);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(17,40.79453);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(18,34.78906);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(19,26.32909);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(20,21.17391);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(21,21.77578);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(22,13.9712);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(23,11.0218);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(24,13.02046);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(25,10.63897);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(26,4.352098);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(27,3.231784);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(28,2.835527);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(29,1.258455);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(30,0.2363214);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(31,1.3462);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(1,4.019444);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(2,10.67066);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(3,11.08443);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(4,12.24272);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(5,8.738091);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(6,10.66724);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(7,7.186998);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(8,7.175592);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(9,7.019212);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(10,4.265567);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(11,6.566618);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(12,4.918362);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(13,7.163011);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(14,3.623015);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(15,5.425912);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(16,6.972722);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(17,5.007167);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(18,3.915997);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(19,2.233029);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(20,1.962029);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(21,4.643113);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(22,1.67833);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(23,1.406388);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(24,1.652594);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(25,3.280929);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(26,0.8167958);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(27,0.7525952);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(28,0.6669728);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(29,0.4143281);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(30,0.139587);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(31,0.511359);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetEntries(17592);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(1,7.026783);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(2,27.41962);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(3,32.60706);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(4,22.44468);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(5,35.53883);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(6,12.83143);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(7,8.950991);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(8,14.21955);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(9,11.56946);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(10,9.330346);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(11,10.30543);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(12,6.771234);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(13,7.182828);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(14,7.577731);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(15,5.727668);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(16,4.776444);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(17,4.591826);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(18,4.42158);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(19,3.609112);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(20,3.358895);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(21,1.345435);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(22,4.939245);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(23,0.600164);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(24,1.023398);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(25,0.5629532);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(26,0.890448);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(27,2.165916);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(28,0.2930983);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(29,0.2764268);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(30,0.5999057);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(31,0.1226656);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(1,0.8681949);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(2,3.46747);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(3,3.653905);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(4,3.406875);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(5,11.00229);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(6,1.833369);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(7,1.115452);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(8,2.962445);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(9,2.556512);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(10,2.257991);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(11,2.506122);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(12,1.530064);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(13,1.443168);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(14,1.139392);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(15,1.765638);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(16,1.348837);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(17,0.9051052);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(18,1.389579);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(19,1.288238);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(20,1.272175);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(21,0.4951369);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(22,2.076737);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(23,0.2768784);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(24,0.3315403);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(25,0.2239897);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(26,0.3461195);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(27,1.262262);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(28,0.1676404);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(29,0.1931879);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(30,0.4357913);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(31,0.1081706);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetEntries(2041);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(2,1.261224);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(25,0.3153059);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(2,0.6306118);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(25,0.3153059);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(2,0.5303731);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(3,1.060746);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(4,0.7955596);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(5,0.5303731);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(6,0.5303731);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(10,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(11,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(12,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(13,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(15,1.325933);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(16,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(17,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(2,0.3750304);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(3,0.5303731);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(4,0.4593166);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(5,0.3750304);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(6,0.3750304);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(10,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(11,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(12,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(13,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(15,0.5929751);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(16,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(17,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetEntries(24);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(1,1.519354);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(2,7.849994);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(3,5.317738);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(4,4.811287);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(5,2.27903);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(6,2.785482);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(7,1.266128);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(8,2.532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(9,1.266128);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(10,2.025805);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(11,1.519354);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(12,2.532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(13,0.7596768);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(14,1.519354);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(15,1.519354);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(16,1.772579);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(17,0.7596768);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(18,1.012902);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(21,0.5064512);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(22,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(23,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(24,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(26,0.5064512);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(28,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(1,0.6202735);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(2,1.409901);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(3,1.160426);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(4,1.103785);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(5,0.7596768);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(6,0.8398543);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(7,0.5662297);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(8,0.8007697);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(9,0.5662297);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(10,0.7162302);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(11,0.6202735);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(12,0.8007697);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(13,0.4385996);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(14,0.6202735);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(15,0.6202735);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(16,0.669972);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(17,0.4385996);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(18,0.5064512);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(21,0.3581151);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(22,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(23,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(24,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(26,0.3581151);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(28,0.2532256);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetEntries(178);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(1,1.145118);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(2,5.59315);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(3,6.911085);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(4,5.717514);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(5,4.155696);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(6,3.007348);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(7,2.324153);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(8,2.120648);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(9,2.031817);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(10,1.970443);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(11,2.00436);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(12,1.912298);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(13,1.755632);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(14,1.430994);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(15,1.18065);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(16,0.9157713);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(17,0.6008235);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(18,0.4506176);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(19,0.3262536);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(20,0.2148105);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(21,0.193814);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(22,0.1502059);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(23,0.1292094);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(24,0.1227489);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(25,0.05975932);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(26,0.05168374);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(27,0.0290721);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(28,0.02261164);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(29,0.008075584);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(30,0.004845351);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(31,0.004845351);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(1,0.0430058);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(2,0.0950452);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(3,0.1056514);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(4,0.09609606);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(5,0.0819264);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(6,0.06969374);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(7,0.06126809);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(8,0.05852431);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(9,0.05728544);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(10,0.05641361);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(11,0.05689706);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(12,0.05557504);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(13,0.05324989);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(14,0.04807517);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(15,0.04366793);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(16,0.03845878);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(17,0.03115125);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(18,0.02697777);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(19,0.02295512);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(20,0.01862644);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(21,0.01769272);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(22,0.01557562);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(23,0.01444604);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(24,0.01408026);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(25,0.009824372);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(26,0.009136481);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(27,0.006852361);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(28,0.006043214);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(29,0.003611511);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(30,0.002797464);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(31,0.002797464);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetEntries(28819);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(1,0.4646835);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(2,2.29293);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(3,2.974466);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(4,2.645991);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(5,1.990026);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(6,1.455025);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(7,1.109831);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(8,0.9495279);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(9,0.8516739);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(10,0.762671);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(11,0.7641462);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(12,0.6889117);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(13,0.6185945);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(14,0.5522112);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(15,0.447473);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(16,0.360437);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(17,0.2950371);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(18,0.2139019);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(19,0.1716133);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(20,0.1307998);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(21,0.1022795);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(22,0.08359386);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(23,0.06835027);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(24,0.0516315);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(25,0.03196236);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(26,0.02016087);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(27,0.01770223);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(28,0.0068842);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(29,0.005900743);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(30,0.001966914);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(31,0.004917286);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(1,0.01511616);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(2,0.03357826);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(3,0.03824435);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(4,0.0360709);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(5,0.03128182);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(6,0.02674841);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(7,0.02336099);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(8,0.0216081);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(9,0.02046442);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(10,0.01936562);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(11,0.01938434);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(12,0.01840537);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(13,0.01744077);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(14,0.01647841);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(15,0.01483359);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(16,0.01331305);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(17,0.01204484);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(18,0.01025581);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(19,0.009186248);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(20,0.00801985);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(21,0.00709181);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(22,0.006411356);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(23,0.005797394);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(24,0.005038719);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(25,0.003964443);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(26,0.003148599);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(27,0.002950371);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(28,0.00183988);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(29,0.001703398);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(30,0.0009834572);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(31,0.001554982);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetEntries(40948);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(1,0.009481507);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(2,0.02212352);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(3,0.01738276);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(4,0.02370377);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(5,0.01106176);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(6,0.01106176);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(7,0.006321005);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(8,0.006321005);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(9,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(10,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(14,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(16,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(17,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(18,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(19,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(20,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(22,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(23,0.004740753);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(1,0.003870809);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(2,0.005912758);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(3,0.0052411);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(4,0.006120286);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(5,0.004180952);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(6,0.004180952);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(7,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(8,0.003160502);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(9,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(10,0.002234813);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(13,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(14,0.002234813);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(15,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(16,0.002234813);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(17,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(18,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(19,0.002234813);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(20,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(21,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(22,0.001580251);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(23,0.002737075);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetEntries(87);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(1,0.001038028);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(2,0.00622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(3,0.008719438);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(4,0.007681409);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(5,0.005397747);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(6,0.005812958);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(7,0.002906479);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(8,0.003114085);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(9,0.001868451);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(10,0.002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(11,0.001868451);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(12,0.002698874);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(13,0.00145324);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(14,0.00145324);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(15,0.000622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(16,0.000622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(17,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(18,0.0008304226);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(19,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(20,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(21,0.000622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(23,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(24,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(25,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(26,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(28,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(1,0.0004642204);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(2,0.001137103);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(3,0.001345438);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(4,0.001262816);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(5,0.001058585);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(6,0.001098546);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(7,0.0007767892);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(8,0.0008040532);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(9,0.000622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(10,0.0006565067);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(11,0.000622817);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(12,0.0007485328);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(13,0.0005492729);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(14,0.0005492729);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(15,0.0003595835);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(16,0.0003595835);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(17,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(18,0.0004152113);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(19,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(20,0.0002935987);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(21,0.0003595835);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(23,0.0002935987);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(24,0.0002935987);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(25,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(26,0.0002935987);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(28,0.0002076057);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetEntries(277);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj0__114 = new TH1D("VbbHcc_tags_H_dR_Bj0__114","",30,0,6);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(1,2131);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(2,7482);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(3,7804);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(4,6346);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(5,5240);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(6,4348);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(7,3660);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(8,3139);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(9,2828);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(10,2569);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(11,2331);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(12,2160);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(13,1934);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(14,1842);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(15,1652);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(16,1395);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(17,1148);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(18,957);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(19,818);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(20,720);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(21,544);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(22,521);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(23,406);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(24,325);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(25,225);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(26,204);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(27,124);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(28,97);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(29,57);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(30,54);
   VbbHcc_tags_H_dR_Bj0__114->SetBinContent(31,58);
   VbbHcc_tags_H_dR_Bj0__114->SetEntries(63148);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0__114->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0__114->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj0__114->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj0__114->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj0__114->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0__114->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__114->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__114->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__114->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__114->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__114->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__114->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__114->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0__114->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__114->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__114->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__114->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__114->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__114->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fx1083[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fy1083[30] = {
   5030.505,
   22834.36,
   24937.02,
   18779.02,
   14870.56,
   31298.04,
   12250.08,
   11967.94,
   11531.74,
   8184.389,
   6335.812,
   7152.73,
   8105.637,
   6007.735,
   5648.195,
   5428.698,
   4515.618,
   2603.297,
   20028.36,
   1176.175,
   1804.068,
   641.8337,
   777.6016,
   630.6331,
   676.8388,
   382.507,
   408.854,
   179.5613,
   80.08757,
   48.64378};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fex1083[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fey1083[30] = {
   687.0226,
   1688.466,
   1829.721,
   1623.965,
   1380.018,
   17091.25,
   1691.27,
   1390.347,
   1728.64,
   1065.484,
   913.1634,
   991.894,
   1155.005,
   913.205,
   908.0128,
   907.7038,
   823.7569,
   493.5368,
   17040.96,
   285.6439,
   543.9241,
   86.08041,
   279.7925,
   274.9578,
   278.3468,
   80.02408,
   270.45,
   49.07261,
   36.73469,
   26.65069};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj0_fx1083,Graph_from_VbbHcc_tags_H_dR_Bj0_fy1083,Graph_from_VbbHcc_tags_H_dR_Bj0_fex1083,Graph_from_VbbHcc_tags_H_dR_Bj0_fey1083);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetMinimum(19.79378);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetMaximum(53226.02);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj01083);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj0","MC unc. (stat.)","fl");

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
   H_dR_Bj0_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__115 = new TH1D("data_mc_ratio__115","",30,0,6);
   data_mc_ratio__115->SetBinContent(1,0.4236155);
   data_mc_ratio__115->SetBinContent(2,0.3276642);
   data_mc_ratio__115->SetBinContent(3,0.3129484);
   data_mc_ratio__115->SetBinContent(4,0.3379303);
   data_mc_ratio__115->SetBinContent(5,0.352374);
   data_mc_ratio__115->SetBinContent(6,0.1389224);
   data_mc_ratio__115->SetBinContent(7,0.2987736);
   data_mc_ratio__115->SetBinContent(8,0.2622841);
   data_mc_ratio__115->SetBinContent(9,0.2452362);
   data_mc_ratio__115->SetBinContent(10,0.3138903);
   data_mc_ratio__115->SetBinContent(11,0.3679087);
   data_mc_ratio__115->SetBinContent(12,0.3019826);
   data_mc_ratio__115->SetBinContent(13,0.2385994);
   data_mc_ratio__115->SetBinContent(14,0.3066047);
   data_mc_ratio__115->SetBinContent(15,0.2924828);
   data_mc_ratio__115->SetBinContent(16,0.2569677);
   data_mc_ratio__115->SetBinContent(17,0.2542287);
   data_mc_ratio__115->SetBinContent(18,0.3676108);
   data_mc_ratio__115->SetBinContent(19,0.04084208);
   data_mc_ratio__115->SetBinContent(20,0.612154);
   data_mc_ratio__115->SetBinContent(21,0.3015407);
   data_mc_ratio__115->SetBinContent(22,0.8117367);
   data_mc_ratio__115->SetBinContent(23,0.5221183);
   data_mc_ratio__115->SetBinContent(24,0.5153551);
   data_mc_ratio__115->SetBinContent(25,0.3324278);
   data_mc_ratio__115->SetBinContent(26,0.5333236);
   data_mc_ratio__115->SetBinContent(27,0.3032868);
   data_mc_ratio__115->SetBinContent(28,0.5402054);
   data_mc_ratio__115->SetBinContent(29,0.711721);
   data_mc_ratio__115->SetBinContent(30,1.110111);
   data_mc_ratio__115->SetBinContent(31,0.5256771);
   data_mc_ratio__115->SetBinError(1,0.009176564);
   data_mc_ratio__115->SetBinError(2,0.003788088);
   data_mc_ratio__115->SetBinError(3,0.003542535);
   data_mc_ratio__115->SetBinError(4,0.004242063);
   data_mc_ratio__115->SetBinError(5,0.004867861);
   data_mc_ratio__115->SetBinError(6,0.002106821);
   data_mc_ratio__115->SetBinError(7,0.004938575);
   data_mc_ratio__115->SetBinError(8,0.004681405);
   data_mc_ratio__115->SetBinError(9,0.004611529);
   data_mc_ratio__115->SetBinError(10,0.006192925);
   data_mc_ratio__115->SetBinError(11,0.007620244);
   data_mc_ratio__115->SetBinError(12,0.006497631);
   data_mc_ratio__115->SetBinError(13,0.005425517);
   data_mc_ratio__115->SetBinError(14,0.007143878);
   data_mc_ratio__115->SetBinError(15,0.007196069);
   data_mc_ratio__115->SetBinError(16,0.006880047);
   data_mc_ratio__115->SetBinError(17,0.007503324);
   data_mc_ratio__115->SetBinError(18,0.01188317);
   data_mc_ratio__115->SetBinError(19,0.00142801);
   data_mc_ratio__115->SetBinError(20,0.02281363);
   data_mc_ratio__115->SetBinError(21,0.01292845);
   data_mc_ratio__115->SetBinError(22,0.03556283);
   data_mc_ratio__115->SetBinError(23,0.0259123);
   data_mc_ratio__115->SetBinError(24,0.02858676);
   data_mc_ratio__115->SetBinError(25,0.02216185);
   data_mc_ratio__115->SetBinError(26,0.03734012);
   data_mc_ratio__115->SetBinError(27,0.02723596);
   data_mc_ratio__115->SetBinError(28,0.05484955);
   data_mc_ratio__115->SetBinError(29,0.09426974);
   data_mc_ratio__115->SetBinError(30,0.151067);
   data_mc_ratio__115->SetBinError(31,0.2242576);
   data_mc_ratio__115->SetMinimum(0.4);
   data_mc_ratio__115->SetMaximum(1.6);
   data_mc_ratio__115->SetEntries(177.1947);
   data_mc_ratio__115->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__115->SetLineColor(ci);
   data_mc_ratio__115->SetLineWidth(2);
   data_mc_ratio__115->SetMarkerStyle(20);
   data_mc_ratio__115->SetMarkerSize(1.2);
   data_mc_ratio__115->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__115->GetXaxis()->SetRange(1,30);
   data_mc_ratio__115->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__115->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__115->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__115->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__115->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__115->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__115->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__115->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__115->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__115->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__115->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__115->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__115->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__115->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__115->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__115->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__115->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1084[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1084[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1084[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1084[30] = {
   0.1365713,
   0.07394408,
   0.0733737,
   0.0864776,
   0.092802,
   0.5460805,
   0.138062,
   0.1161726,
   0.1499028,
   0.1301849,
   0.1441273,
   0.1386735,
   0.142494,
   0.1520049,
   0.1607616,
   0.1672047,
   0.1824239,
   0.1895815,
   0.8508414,
   0.2428584,
   0.3014986,
   0.1341164,
   0.3598148,
   0.4360028,
   0.4112453,
   0.2092095,
   0.6614831,
   0.2732916,
   0.4586816,
   0.5478745};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1084,Graph_from_mc_statistical_error_fy1084,Graph_from_mc_statistical_error_fex1084,Graph_from_mc_statistical_error_fey1084);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1084 = new TH1F("Graph_Graph_from_mc_statistical_error1084","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1084->SetMinimum(0.1342427);
   Graph_Graph_from_mc_statistical_error1084->SetMaximum(2.02101);
   Graph_Graph_from_mc_statistical_error1084->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1084->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1084->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1084->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1084->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1084->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1084->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1084);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_tags_17->cd();
   H_dR_Bj0_tags_17->Modified();
   H_dR_Bj0_tags_17->cd();
   H_dR_Bj0_tags_17->SetSelected(H_dR_Bj0_tags_17);
}
