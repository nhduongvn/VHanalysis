void H_dR_tags_17_logY()
{
//=========Macro generated from canvas: H_dR_tags_17/H_dR_tags_17
//=========  (Tue Aug 22 09:16:05 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_17 = new TCanvas("H_dR_tags_17", "H_dR_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_17->SetHighLightColor(2);
   H_dR_tags_17->Range(0,0,1,1);
   H_dR_tags_17->SetFillColor(0);
   H_dR_tags_17->SetFillStyle(4000);
   H_dR_tags_17->SetBorderMode(0);
   H_dR_tags_17->SetBorderSize(2);
   H_dR_tags_17->SetFrameFillStyle(1000);
   H_dR_tags_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9499975,-2.860496,6.525,12.03785);
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
   st->SetMaximum(1.037833e+10);
   
   TH1F *st_stack_22 = new TH1F("st_stack_22","",30,0,6);
   st_stack_22->SetMinimum(0.001426928);
   st_stack_22->SetMaximum(3.531979e+10);
   st_stack_22->SetDirectory(0);
   st_stack_22->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_22->SetLineColor(ci);
   st_stack_22->GetXaxis()->SetRange(1,31);
   st_stack_22->GetXaxis()->SetLabelFont(42);
   st_stack_22->GetXaxis()->SetLabelSize(0.035);
   st_stack_22->GetXaxis()->SetTitleSize(0.035);
   st_stack_22->GetXaxis()->SetTitleFont(42);
   st_stack_22->GetYaxis()->SetTitle("Events/0.2");
   st_stack_22->GetYaxis()->SetLabelFont(42);
   st_stack_22->GetYaxis()->SetLabelSize(0.05);
   st_stack_22->GetYaxis()->SetTitleSize(0.057);
   st_stack_22->GetYaxis()->SetTitleOffset(1.2);
   st_stack_22->GetYaxis()->SetTitleFont(42);
   st_stack_22->GetZaxis()->SetLabelFont(42);
   st_stack_22->GetZaxis()->SetLabelSize(0.035);
   st_stack_22->GetZaxis()->SetTitleSize(0.035);
   st_stack_22->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_22);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,7703.881);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,9838.601);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,6296.85);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,5272.267);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,4983.172);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,4613.608);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,3583.664);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,6424.326);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,6373.962);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,6507.469);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,7636.423);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,10973.28);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,8106.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,30827.35);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,11202.37);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,10493.92);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,8185.877);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,6771.491);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,5204.35);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,2760.042);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,2648.978);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,19860.87);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,2087.758);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,1399.577);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,1413.396);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,1136.436);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,1155.05);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(30,645.9474);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(31,912.7202);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,1004.829);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,1230.094);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,989.6046);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,870.1234);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,884.2034);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,820.7541);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,575.6901);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,1043.388);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,1175.253);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,909.8241);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,1035.573);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,1308.484);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,1045.947);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,20624.77);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,1284.159);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,1243.627);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,1059.373);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,1469.021);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,852.2409);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,508.9604);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,557.8916);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,16542.49);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,569.6623);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,420.0422);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,405.137);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,404.5727);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,355.9386);
   VbbHcc_tags_H_dR_stack_1->SetBinError(30,305.0978);
   VbbHcc_tags_H_dR_stack_1->SetBinError(31,375.183);
   VbbHcc_tags_H_dR_stack_1->SetEntries(9351);

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
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,-0.05477226);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,28.10836);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,39.01564);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,31.68778);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,32.35143);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,31.80394);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,31.06918);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,35.76675);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,38.06034);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,32.81062);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,40.81179);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,42.82308);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,43.64121);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,47.93384);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,58.487);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,49.83494);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,40.53755);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,40.40677);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,34.26292);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,29.47847);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,24.68921);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,19.26731);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,17.49946);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,14.09937);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,10.29736);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,9.890864);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,7.517799);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,5.056909);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(30,4.985667);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(31,3.634463);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,0.05477226);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,2.270237);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,2.696629);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,2.360919);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,2.377073);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,2.352665);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,2.338399);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,2.486802);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,2.614101);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,2.379305);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,2.705373);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,2.751057);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,2.672534);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,2.876662);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,3.267116);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,2.95512);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,2.462508);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,2.590404);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,2.378008);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,2.228545);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,2.061078);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,1.80448);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,1.663456);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,1.487656);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,1.302645);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,1.326935);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,1.200307);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.8567546);
   VbbHcc_tags_H_dR_stack_2->SetBinError(30,0.8992994);
   VbbHcc_tags_H_dR_stack_2->SetBinError(31,0.7073564);
   VbbHcc_tags_H_dR_stack_2->SetEntries(11598);

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
   VbbHcc_tags_H_dR_stack_3->SetBinContent(2,0.740946);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(3,517.3196);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(4,735.9336);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(5,735.1765);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(6,760.8361);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(7,741.7601);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(8,729.6385);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(9,715.7003);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(10,740.6136);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(11,796.2699);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(12,846.9194);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(13,912.9064);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(14,984.4258);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(15,1064.322);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(16,1108.455);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(17,1042.028);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(18,958.8521);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(19,863.2291);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(20,739.9193);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(21,618.649);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(22,506.1382);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(23,417.6224);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(24,348.0741);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(25,271.8945);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(26,226.5301);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(27,190.7183);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(28,152.089);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(29,123.766);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(30,86.17175);
   VbbHcc_tags_H_dR_stack_3->SetBinContent(31,75.523);
   VbbHcc_tags_H_dR_stack_3->SetBinError(2,0.2436129);
   VbbHcc_tags_H_dR_stack_3->SetBinError(3,5.910102);
   VbbHcc_tags_H_dR_stack_3->SetBinError(4,7.016199);
   VbbHcc_tags_H_dR_stack_3->SetBinError(5,7.000309);
   VbbHcc_tags_H_dR_stack_3->SetBinError(6,7.092138);
   VbbHcc_tags_H_dR_stack_3->SetBinError(7,6.985872);
   VbbHcc_tags_H_dR_stack_3->SetBinError(8,6.92564);
   VbbHcc_tags_H_dR_stack_3->SetBinError(9,6.843907);
   VbbHcc_tags_H_dR_stack_3->SetBinError(10,6.938372);
   VbbHcc_tags_H_dR_stack_3->SetBinError(11,7.226282);
   VbbHcc_tags_H_dR_stack_3->SetBinError(12,7.447852);
   VbbHcc_tags_H_dR_stack_3->SetBinError(13,7.749505);
   VbbHcc_tags_H_dR_stack_3->SetBinError(14,8.0582);
   VbbHcc_tags_H_dR_stack_3->SetBinError(15,8.414604);
   VbbHcc_tags_H_dR_stack_3->SetBinError(16,8.601099);
   VbbHcc_tags_H_dR_stack_3->SetBinError(17,8.348572);
   VbbHcc_tags_H_dR_stack_3->SetBinError(18,8.025372);
   VbbHcc_tags_H_dR_stack_3->SetBinError(19,7.582744);
   VbbHcc_tags_H_dR_stack_3->SetBinError(20,7.019863);
   VbbHcc_tags_H_dR_stack_3->SetBinError(21,6.396297);
   VbbHcc_tags_H_dR_stack_3->SetBinError(22,5.758699);
   VbbHcc_tags_H_dR_stack_3->SetBinError(23,5.227985);
   VbbHcc_tags_H_dR_stack_3->SetBinError(24,4.768307);
   VbbHcc_tags_H_dR_stack_3->SetBinError(25,4.20349);
   VbbHcc_tags_H_dR_stack_3->SetBinError(26,3.846765);
   VbbHcc_tags_H_dR_stack_3->SetBinError(27,3.528114);
   VbbHcc_tags_H_dR_stack_3->SetBinError(28,3.15586);
   VbbHcc_tags_H_dR_stack_3->SetBinError(29,2.83293);
   VbbHcc_tags_H_dR_stack_3->SetBinError(30,2.365026);
   VbbHcc_tags_H_dR_stack_3->SetBinError(31,2.213145);
   VbbHcc_tags_H_dR_stack_3->SetEntries(305979);

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
   VbbHcc_tags_H_dR_stack_4->SetBinContent(3,96.40546);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(4,125.38);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(5,107.0364);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(6,85.06339);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(7,80.53773);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(8,76.93592);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(9,85.39963);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(10,74.66381);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(11,86.60111);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(12,101.5072);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(13,107.8002);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(14,126.1577);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(15,138.4606);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(16,142.8287);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(17,139.6844);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(18,118.9009);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(19,117.2636);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(20,103.2526);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(21,73.0555);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(22,56.08679);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(23,52.94202);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(24,35.48015);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(25,27.52585);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(26,24.84135);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(27,19.13836);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(28,18.61769);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(29,15.62662);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(30,11.02033);
   VbbHcc_tags_H_dR_stack_4->SetBinContent(31,7.090222);
   VbbHcc_tags_H_dR_stack_4->SetBinError(3,5.908827);
   VbbHcc_tags_H_dR_stack_4->SetBinError(4,6.250587);
   VbbHcc_tags_H_dR_stack_4->SetBinError(5,6.411324);
   VbbHcc_tags_H_dR_stack_4->SetBinError(6,4.371256);
   VbbHcc_tags_H_dR_stack_4->SetBinError(7,5.749399);
   VbbHcc_tags_H_dR_stack_4->SetBinError(8,4.550837);
   VbbHcc_tags_H_dR_stack_4->SetBinError(9,7.242944);
   VbbHcc_tags_H_dR_stack_4->SetBinError(10,4.258507);
   VbbHcc_tags_H_dR_stack_4->SetBinError(11,5.522466);
   VbbHcc_tags_H_dR_stack_4->SetBinError(12,6.910034);
   VbbHcc_tags_H_dR_stack_4->SetBinError(13,5.753015);
   VbbHcc_tags_H_dR_stack_4->SetBinError(14,7.943109);
   VbbHcc_tags_H_dR_stack_4->SetBinError(15,6.854579);
   VbbHcc_tags_H_dR_stack_4->SetBinError(16,6.609774);
   VbbHcc_tags_H_dR_stack_4->SetBinError(17,6.635128);
   VbbHcc_tags_H_dR_stack_4->SetBinError(18,5.987339);
   VbbHcc_tags_H_dR_stack_4->SetBinError(19,7.672049);
   VbbHcc_tags_H_dR_stack_4->SetBinError(20,6.993319);
   VbbHcc_tags_H_dR_stack_4->SetBinError(21,5.200186);
   VbbHcc_tags_H_dR_stack_4->SetBinError(22,4.362567);
   VbbHcc_tags_H_dR_stack_4->SetBinError(23,4.262232);
   VbbHcc_tags_H_dR_stack_4->SetBinError(24,3.378618);
   VbbHcc_tags_H_dR_stack_4->SetBinError(25,3.048106);
   VbbHcc_tags_H_dR_stack_4->SetBinError(26,3.346828);
   VbbHcc_tags_H_dR_stack_4->SetBinError(27,1.848775);
   VbbHcc_tags_H_dR_stack_4->SetBinError(28,1.805845);
   VbbHcc_tags_H_dR_stack_4->SetBinError(29,1.627084);
   VbbHcc_tags_H_dR_stack_4->SetBinError(30,2.91142);
   VbbHcc_tags_H_dR_stack_4->SetBinError(31,1.106957);
   VbbHcc_tags_H_dR_stack_4->SetEntries(17592);

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
   VbbHcc_tags_H_dR_stack_5->SetBinContent(3,11.05241);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(4,12.6391);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(5,11.53105);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(6,4.840971);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(7,7.423846);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(8,16.155);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(9,13.33357);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(10,9.526746);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(11,8.430474);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(12,8.184257);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(13,12.98235);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(14,11.88338);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(15,14.74351);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(16,9.776748);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(17,12.97709);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(18,13.29795);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(19,16.9025);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(20,9.37193);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(21,6.29356);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(22,4.606473);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(23,5.915767);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(24,3.312259);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(25,1.799898);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(26,1.864765);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(27,3.716717);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(28,3.977263);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(29,2.090927);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(30,1.106329);
   VbbHcc_tags_H_dR_stack_5->SetBinContent(31,0.9161084);
   VbbHcc_tags_H_dR_stack_5->SetBinError(3,1.611155);
   VbbHcc_tags_H_dR_stack_5->SetBinError(4,2.169249);
   VbbHcc_tags_H_dR_stack_5->SetBinError(5,2.323356);
   VbbHcc_tags_H_dR_stack_5->SetBinError(6,0.7276386);
   VbbHcc_tags_H_dR_stack_5->SetBinError(7,1.681069);
   VbbHcc_tags_H_dR_stack_5->SetBinError(8,8.007482);
   VbbHcc_tags_H_dR_stack_5->SetBinError(9,5.494731);
   VbbHcc_tags_H_dR_stack_5->SetBinError(10,1.565304);
   VbbHcc_tags_H_dR_stack_5->SetBinError(11,1.498411);
   VbbHcc_tags_H_dR_stack_5->SetBinError(12,1.587868);
   VbbHcc_tags_H_dR_stack_5->SetBinError(13,2.3994);
   VbbHcc_tags_H_dR_stack_5->SetBinError(14,1.514079);
   VbbHcc_tags_H_dR_stack_5->SetBinError(15,2.446467);
   VbbHcc_tags_H_dR_stack_5->SetBinError(16,1.841739);
   VbbHcc_tags_H_dR_stack_5->SetBinError(17,2.134798);
   VbbHcc_tags_H_dR_stack_5->SetBinError(18,2.83488);
   VbbHcc_tags_H_dR_stack_5->SetBinError(19,3.098013);
   VbbHcc_tags_H_dR_stack_5->SetBinError(20,1.630876);
   VbbHcc_tags_H_dR_stack_5->SetBinError(21,1.012335);
   VbbHcc_tags_H_dR_stack_5->SetBinError(22,1.425954);
   VbbHcc_tags_H_dR_stack_5->SetBinError(23,1.68526);
   VbbHcc_tags_H_dR_stack_5->SetBinError(24,0.9141903);
   VbbHcc_tags_H_dR_stack_5->SetBinError(25,0.5148119);
   VbbHcc_tags_H_dR_stack_5->SetBinError(26,0.5838222);
   VbbHcc_tags_H_dR_stack_5->SetBinError(27,1.427604);
   VbbHcc_tags_H_dR_stack_5->SetBinError(28,1.757727);
   VbbHcc_tags_H_dR_stack_5->SetBinError(29,1.331266);
   VbbHcc_tags_H_dR_stack_5->SetBinError(30,0.3380825);
   VbbHcc_tags_H_dR_stack_5->SetBinError(31,0.3646832);
   VbbHcc_tags_H_dR_stack_5->SetEntries(2041);

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
   VbbHcc_tags_H_dR_stack_6->SetBinContent(3,0.6801996);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(4,0.2950387);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(5,0.2355824);
   VbbHcc_tags_H_dR_stack_6->SetBinContent(24,0.232904);
   VbbHcc_tags_H_dR_stack_6->SetBinError(3,0.4835381);
   VbbHcc_tags_H_dR_stack_6->SetBinError(4,0.2950387);
   VbbHcc_tags_H_dR_stack_6->SetBinError(5,0.2355824);
   VbbHcc_tags_H_dR_stack_6->SetBinError(24,0.232904);
   VbbHcc_tags_H_dR_stack_6->SetEntries(5);

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
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,0.2167551);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,0.269206);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(8,0.2711943);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,0.4949362);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,0.5562115);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(15,0.2849003);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,0.2333619);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,1.249871);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,0.3388179);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,0.8099589);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,0.2774426);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(21,0.957428);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(22,0.1465374);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,0.2167551);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,0.269206);
   VbbHcc_tags_H_dR_stack_7->SetBinError(8,0.2711943);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,0.3511012);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,0.3945735);
   VbbHcc_tags_H_dR_stack_7->SetBinError(15,0.2849003);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,0.2333619);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,0.5765929);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,0.3388179);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,0.4710016);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,0.2774426);
   VbbHcc_tags_H_dR_stack_7->SetBinError(21,0.4865495);
   VbbHcc_tags_H_dR_stack_7->SetBinError(22,0.1465374);
   VbbHcc_tags_H_dR_stack_7->SetEntries(24);

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
   VbbHcc_tags_H_dR_stack_8->SetBinContent(3,3.929526);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(4,2.473947);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(5,2.890291);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(6,1.399583);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(7,0.8742006);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(8,0.4765252);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(9,0.2321659);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(10,0.2468568);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(11,1.13095);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(12,1.264142);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(13,0.726598);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(14,2.694694);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(15,2.736348);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(16,4.081519);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(17,1.57454);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(18,3.999493);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(19,3.934811);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(20,1.647687);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(21,0.5191384);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(22,1.391625);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(23,0.2792848);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(24,0.643286);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(26,0.5653497);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(27,0.1838999);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(28,0.6660673);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(29,0.1701374);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(30,0.2647488);
   VbbHcc_tags_H_dR_stack_8->SetBinContent(31,0.1558356);
   VbbHcc_tags_H_dR_stack_8->SetBinError(3,1.00792);
   VbbHcc_tags_H_dR_stack_8->SetBinError(4,0.7784578);
   VbbHcc_tags_H_dR_stack_8->SetBinError(5,0.8117526);
   VbbHcc_tags_H_dR_stack_8->SetBinError(6,0.5838344);
   VbbHcc_tags_H_dR_stack_8->SetBinError(7,0.3982594);
   VbbHcc_tags_H_dR_stack_8->SetBinError(8,0.2761514);
   VbbHcc_tags_H_dR_stack_8->SetBinError(9,0.220219);
   VbbHcc_tags_H_dR_stack_8->SetBinError(10,0.2468568);
   VbbHcc_tags_H_dR_stack_8->SetBinError(11,0.5099615);
   VbbHcc_tags_H_dR_stack_8->SetBinError(12,0.5669202);
   VbbHcc_tags_H_dR_stack_8->SetBinError(13,0.4096643);
   VbbHcc_tags_H_dR_stack_8->SetBinError(14,0.8582036);
   VbbHcc_tags_H_dR_stack_8->SetBinError(15,0.8132227);
   VbbHcc_tags_H_dR_stack_8->SetBinError(16,0.9923832);
   VbbHcc_tags_H_dR_stack_8->SetBinError(17,0.6245749);
   VbbHcc_tags_H_dR_stack_8->SetBinError(18,0.9871287);
   VbbHcc_tags_H_dR_stack_8->SetBinError(19,0.9955164);
   VbbHcc_tags_H_dR_stack_8->SetBinError(20,0.6791664);
   VbbHcc_tags_H_dR_stack_8->SetBinError(21,0.3671366);
   VbbHcc_tags_H_dR_stack_8->SetBinError(22,0.58132);
   VbbHcc_tags_H_dR_stack_8->SetBinError(23,0.2792848);
   VbbHcc_tags_H_dR_stack_8->SetBinError(24,0.3793526);
   VbbHcc_tags_H_dR_stack_8->SetBinError(26,0.4061893);
   VbbHcc_tags_H_dR_stack_8->SetBinError(27,0.1838999);
   VbbHcc_tags_H_dR_stack_8->SetBinError(28,0.3850042);
   VbbHcc_tags_H_dR_stack_8->SetBinError(29,0.1701374);
   VbbHcc_tags_H_dR_stack_8->SetBinError(30,0.2647488);
   VbbHcc_tags_H_dR_stack_8->SetBinError(31,0.1558356);
   VbbHcc_tags_H_dR_stack_8->SetEntries(178);

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
   VbbHcc_tags_H_dR_stack_9->SetBinContent(3,1.793461);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(4,3.116631);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(5,2.960763);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(6,2.264925);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(7,1.567957);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(8,0.9815856);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(9,0.8806559);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(10,0.861866);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(11,1.043983);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(12,1.47018);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(13,1.9518);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(14,2.508958);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(15,3.047175);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(16,3.42621);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(17,3.369659);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(18,2.738033);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(19,2.09922);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(20,1.495383);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(21,1.087771);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(22,0.7294932);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(23,0.4796472);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(24,0.3359229);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(25,0.2626762);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(26,0.3277345);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(27,0.3128442);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(28,0.3760325);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(29,0.2344976);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(30,0.1698092);
   VbbHcc_tags_H_dR_stack_9->SetBinContent(31,0.09055993);
   VbbHcc_tags_H_dR_stack_9->SetBinError(3,0.056041);
   VbbHcc_tags_H_dR_stack_9->SetBinError(4,0.07197707);
   VbbHcc_tags_H_dR_stack_9->SetBinError(5,0.06887682);
   VbbHcc_tags_H_dR_stack_9->SetBinError(6,0.05957151);
   VbbHcc_tags_H_dR_stack_9->SetBinError(7,0.04911875);
   VbbHcc_tags_H_dR_stack_9->SetBinError(8,0.0391971);
   VbbHcc_tags_H_dR_stack_9->SetBinError(9,0.03729712);
   VbbHcc_tags_H_dR_stack_9->SetBinError(10,0.03669254);
   VbbHcc_tags_H_dR_stack_9->SetBinError(11,0.04092349);
   VbbHcc_tags_H_dR_stack_9->SetBinError(12,0.04843893);
   VbbHcc_tags_H_dR_stack_9->SetBinError(13,0.05568822);
   VbbHcc_tags_H_dR_stack_9->SetBinError(14,0.06374113);
   VbbHcc_tags_H_dR_stack_9->SetBinError(15,0.07042959);
   VbbHcc_tags_H_dR_stack_9->SetBinError(16,0.07497082);
   VbbHcc_tags_H_dR_stack_9->SetBinError(17,0.07413711);
   VbbHcc_tags_H_dR_stack_9->SetBinError(18,0.06671159);
   VbbHcc_tags_H_dR_stack_9->SetBinError(19,0.05778032);
   VbbHcc_tags_H_dR_stack_9->SetBinError(20,0.04899995);
   VbbHcc_tags_H_dR_stack_9->SetBinError(21,0.04138798);
   VbbHcc_tags_H_dR_stack_9->SetBinError(22,0.03396636);
   VbbHcc_tags_H_dR_stack_9->SetBinError(23,0.02780809);
   VbbHcc_tags_H_dR_stack_9->SetBinError(24,0.02269386);
   VbbHcc_tags_H_dR_stack_9->SetBinError(25,0.02041839);
   VbbHcc_tags_H_dR_stack_9->SetBinError(26,0.02254465);
   VbbHcc_tags_H_dR_stack_9->SetBinError(27,0.02233781);
   VbbHcc_tags_H_dR_stack_9->SetBinError(28,0.02440197);
   VbbHcc_tags_H_dR_stack_9->SetBinError(29,0.01937896);
   VbbHcc_tags_H_dR_stack_9->SetBinError(30,0.01678524);
   VbbHcc_tags_H_dR_stack_9->SetBinError(31,0.0117392);
   VbbHcc_tags_H_dR_stack_9->SetEntries(28819);

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
   VbbHcc_tags_H_dR_stack_10->SetBinContent(3,0.4937679);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(4,0.9555805);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(5,1.052473);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(6,0.9767072);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(7,0.758562);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(8,0.5914508);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(9,0.4992412);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(10,0.4638083);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(11,0.513637);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(12,0.6173525);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(13,0.7651187);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(14,0.8525362);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(15,0.9557251);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(16,1.008533);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(17,0.9811793);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(18,0.8911309);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(19,0.6760029);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(20,0.5790323);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(21,0.4390196);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(22,0.3216432);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(23,0.2191202);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(24,0.1972597);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(25,0.159602);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(26,0.1649183);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(27,0.1540393);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(28,0.1164742);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(29,0.1005939);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(30,0.05900353);
   VbbHcc_tags_H_dR_stack_10->SetBinContent(31,0.03530418);
   VbbHcc_tags_H_dR_stack_10->SetBinError(3,0.01424305);
   VbbHcc_tags_H_dR_stack_10->SetBinError(4,0.0195812);
   VbbHcc_tags_H_dR_stack_10->SetBinError(5,0.02030728);
   VbbHcc_tags_H_dR_stack_10->SetBinError(6,0.01939087);
   VbbHcc_tags_H_dR_stack_10->SetBinError(7,0.0170358);
   VbbHcc_tags_H_dR_stack_10->SetBinError(8,0.01506417);
   VbbHcc_tags_H_dR_stack_10->SetBinError(9,0.01391293);
   VbbHcc_tags_H_dR_stack_10->SetBinError(10,0.01340621);
   VbbHcc_tags_H_dR_stack_10->SetBinError(11,0.01410801);
   VbbHcc_tags_H_dR_stack_10->SetBinError(12,0.0154655);
   VbbHcc_tags_H_dR_stack_10->SetBinError(13,0.01719588);
   VbbHcc_tags_H_dR_stack_10->SetBinError(14,0.0181484);
   VbbHcc_tags_H_dR_stack_10->SetBinError(15,0.01924248);
   VbbHcc_tags_H_dR_stack_10->SetBinError(16,0.01978835);
   VbbHcc_tags_H_dR_stack_10->SetBinError(17,0.01944412);
   VbbHcc_tags_H_dR_stack_10->SetBinError(18,0.0185435);
   VbbHcc_tags_H_dR_stack_10->SetBinError(19,0.01616508);
   VbbHcc_tags_H_dR_stack_10->SetBinError(20,0.01492601);
   VbbHcc_tags_H_dR_stack_10->SetBinError(21,0.01303897);
   VbbHcc_tags_H_dR_stack_10->SetBinError(22,0.01119087);
   VbbHcc_tags_H_dR_stack_10->SetBinError(23,0.009167404);
   VbbHcc_tags_H_dR_stack_10->SetBinError(24,0.008707161);
   VbbHcc_tags_H_dR_stack_10->SetBinError(25,0.007875387);
   VbbHcc_tags_H_dR_stack_10->SetBinError(26,0.008016622);
   VbbHcc_tags_H_dR_stack_10->SetBinError(27,0.007675398);
   VbbHcc_tags_H_dR_stack_10->SetBinError(28,0.006740122);
   VbbHcc_tags_H_dR_stack_10->SetBinError(29,0.006308505);
   VbbHcc_tags_H_dR_stack_10->SetBinError(30,0.004811497);
   VbbHcc_tags_H_dR_stack_10->SetBinError(31,0.003688797);
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
   VbbHcc_tags_H_dR_stack_11->SetBinContent(3,0.003434412);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(4,0.02044904);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(5,0.01094471);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(6,0.008895585);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(7,0.01405405);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(8,0.004350791);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(9,0.006826389);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(10,0.001741739);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(11,0.003638415);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(12,0.005811575);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(13,0.001995194);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(14,0.003276931);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(15,0.001144273);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(16,0.002881987);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(17,0.008868423);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(18,0.003750265);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(19,0.005468848);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(20,0.00182132);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(21,0.001860547);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(22,0.004407051);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(23,0.00333849);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(24,0.001433186);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(25,0.003676154);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(26,0.0006310176);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(27,0.001470723);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(28,0.001856351);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(29,0.003548486);
   VbbHcc_tags_H_dR_stack_11->SetBinContent(31,0.001147613);
   VbbHcc_tags_H_dR_stack_11->SetBinError(3,0.002502062);
   VbbHcc_tags_H_dR_stack_11->SetBinError(4,0.00592883);
   VbbHcc_tags_H_dR_stack_11->SetBinError(5,0.004171628);
   VbbHcc_tags_H_dR_stack_11->SetBinError(6,0.003643037);
   VbbHcc_tags_H_dR_stack_11->SetBinError(7,0.004266218);
   VbbHcc_tags_H_dR_stack_11->SetBinError(8,0.00251899);
   VbbHcc_tags_H_dR_stack_11->SetBinError(9,0.00306847);
   VbbHcc_tags_H_dR_stack_11->SetBinError(10,0.001741739);
   VbbHcc_tags_H_dR_stack_11->SetBinError(11,0.00259356);
   VbbHcc_tags_H_dR_stack_11->SetBinError(12,0.002969566);
   VbbHcc_tags_H_dR_stack_11->SetBinError(13,0.00165587);
   VbbHcc_tags_H_dR_stack_11->SetBinError(14,0.002335651);
   VbbHcc_tags_H_dR_stack_11->SetBinError(15,0.001144273);
   VbbHcc_tags_H_dR_stack_11->SetBinError(16,0.002111924);
   VbbHcc_tags_H_dR_stack_11->SetBinError(17,0.003648806);
   VbbHcc_tags_H_dR_stack_11->SetBinError(18,0.002652526);
   VbbHcc_tags_H_dR_stack_11->SetBinError(19,0.003187452);
   VbbHcc_tags_H_dR_stack_11->SetBinError(20,0.00182132);
   VbbHcc_tags_H_dR_stack_11->SetBinError(21,0.001860547);
   VbbHcc_tags_H_dR_stack_11->SetBinError(22,0.002630999);
   VbbHcc_tags_H_dR_stack_11->SetBinError(23,0.002362539);
   VbbHcc_tags_H_dR_stack_11->SetBinError(24,0.001433186);
   VbbHcc_tags_H_dR_stack_11->SetBinError(25,0.002672275);
   VbbHcc_tags_H_dR_stack_11->SetBinError(26,0.0006310176);
   VbbHcc_tags_H_dR_stack_11->SetBinError(27,0.001470723);
   VbbHcc_tags_H_dR_stack_11->SetBinError(28,0.001856351);
   VbbHcc_tags_H_dR_stack_11->SetBinError(29,0.002516179);
   VbbHcc_tags_H_dR_stack_11->SetBinError(31,0.001147613);
   VbbHcc_tags_H_dR_stack_11->SetEntries(87);

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
   VbbHcc_tags_H_dR_stack_12->SetBinContent(3,0.001105915);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(4,0.002011231);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(5,0.004593808);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(6,0.003799968);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(7,0.005128895);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(8,0.0031633);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(9,0.002404266);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(10,0.002388782);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(11,0.002216136);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(12,0.002162741);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(13,0.002304257);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(14,0.001911986);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(15,0.003165679);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(16,0.002380349);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(17,0.001535866);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(18,0.0026804);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(19,0.001625055);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(20,0.00104368);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(21,0.0006973984);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(22,0.001001889);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(23,0.001060828);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(24,0.001277395);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(25,0.001244643);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(26,0.0007065485);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(27,0.001342689);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(28,0.0007433498);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(29,0.0003862864);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(30,0.0005925856);
   VbbHcc_tags_H_dR_stack_12->SetBinContent(31,0.0006111487);
   VbbHcc_tags_H_dR_stack_12->SetBinError(3,0.0005018623);
   VbbHcc_tags_H_dR_stack_12->SetBinError(4,0.0006735056);
   VbbHcc_tags_H_dR_stack_12->SetBinError(5,0.0009798861);
   VbbHcc_tags_H_dR_stack_12->SetBinError(6,0.0008832567);
   VbbHcc_tags_H_dR_stack_12->SetBinError(7,0.001037814);
   VbbHcc_tags_H_dR_stack_12->SetBinError(8,0.0008021608);
   VbbHcc_tags_H_dR_stack_12->SetBinError(9,0.0007266929);
   VbbHcc_tags_H_dR_stack_12->SetBinError(10,0.0006810779);
   VbbHcc_tags_H_dR_stack_12->SetBinError(11,0.0006796701);
   VbbHcc_tags_H_dR_stack_12->SetBinError(12,0.0006636098);
   VbbHcc_tags_H_dR_stack_12->SetBinError(13,0.0007039361);
   VbbHcc_tags_H_dR_stack_12->SetBinError(14,0.000610072);
   VbbHcc_tags_H_dR_stack_12->SetBinError(15,0.0008080059);
   VbbHcc_tags_H_dR_stack_12->SetBinError(16,0.0006926413);
   VbbHcc_tags_H_dR_stack_12->SetBinError(17,0.000551947);
   VbbHcc_tags_H_dR_stack_12->SetBinError(18,0.0007528326);
   VbbHcc_tags_H_dR_stack_12->SetBinError(19,0.0006111518);
   VbbHcc_tags_H_dR_stack_12->SetBinError(20,0.0004701965);
   VbbHcc_tags_H_dR_stack_12->SetBinError(21,0.0004079555);
   VbbHcc_tags_H_dR_stack_12->SetBinError(22,0.0004300009);
   VbbHcc_tags_H_dR_stack_12->SetBinError(23,0.0004793199);
   VbbHcc_tags_H_dR_stack_12->SetBinError(24,0.0004930389);
   VbbHcc_tags_H_dR_stack_12->SetBinError(25,0.000515011);
   VbbHcc_tags_H_dR_stack_12->SetBinError(26,0.0003577721);
   VbbHcc_tags_H_dR_stack_12->SetBinError(27,0.0005546344);
   VbbHcc_tags_H_dR_stack_12->SetBinError(28,0.0003788013);
   VbbHcc_tags_H_dR_stack_12->SetBinError(29,0.0002778053);
   VbbHcc_tags_H_dR_stack_12->SetBinError(30,0.000346917);
   VbbHcc_tags_H_dR_stack_12->SetBinError(31,0.000360407);
   VbbHcc_tags_H_dR_stack_12->SetEntries(277);

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
   
   TH1D *VbbHcc_tags_H_dR__59 = new TH1D("VbbHcc_tags_H_dR__59","",30,0,6);
   VbbHcc_tags_H_dR__59->SetBinContent(2,4);
   VbbHcc_tags_H_dR__59->SetBinContent(3,3092);
   VbbHcc_tags_H_dR__59->SetBinContent(4,3325);
   VbbHcc_tags_H_dR__59->SetBinContent(5,2539);
   VbbHcc_tags_H_dR__59->SetBinContent(6,2390);
   VbbHcc_tags_H_dR__59->SetBinContent(7,2338);
   VbbHcc_tags_H_dR__59->SetBinContent(8,2303);
   VbbHcc_tags_H_dR__59->SetBinContent(9,2278);
   VbbHcc_tags_H_dR__59->SetBinContent(10,2455);
   VbbHcc_tags_H_dR__59->SetBinContent(11,2565);
   VbbHcc_tags_H_dR__59->SetBinContent(12,2809);
   VbbHcc_tags_H_dR__59->SetBinContent(13,3038);
   VbbHcc_tags_H_dR__59->SetBinContent(14,3284);
   VbbHcc_tags_H_dR__59->SetBinContent(15,3548);
   VbbHcc_tags_H_dR__59->SetBinContent(16,3772);
   VbbHcc_tags_H_dR__59->SetBinContent(17,3585);
   VbbHcc_tags_H_dR__59->SetBinContent(18,3336);
   VbbHcc_tags_H_dR__59->SetBinContent(19,2938);
   VbbHcc_tags_H_dR__59->SetBinContent(20,2545);
   VbbHcc_tags_H_dR__59->SetBinContent(21,2273);
   VbbHcc_tags_H_dR__59->SetBinContent(22,1772);
   VbbHcc_tags_H_dR__59->SetBinContent(23,1525);
   VbbHcc_tags_H_dR__59->SetBinContent(24,1218);
   VbbHcc_tags_H_dR__59->SetBinContent(25,956);
   VbbHcc_tags_H_dR__59->SetBinContent(26,809);
   VbbHcc_tags_H_dR__59->SetBinContent(27,708);
   VbbHcc_tags_H_dR__59->SetBinContent(28,539);
   VbbHcc_tags_H_dR__59->SetBinContent(29,493);
   VbbHcc_tags_H_dR__59->SetBinContent(30,366);
   VbbHcc_tags_H_dR__59->SetBinContent(31,316);
   VbbHcc_tags_H_dR__59->SetEntries(63148);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR__59->SetLineColor(ci);
   VbbHcc_tags_H_dR__59->SetLineWidth(2);
   VbbHcc_tags_H_dR__59->SetMarkerStyle(20);
   VbbHcc_tags_H_dR__59->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR__59->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR__59->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__59->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__59->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__59->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__59->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__59->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__59->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__59->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR__59->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__59->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__59->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR__59->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR__59->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__59->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_fx1043[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fy1043[30] = {
   0,
   0.6861737,
   8363.669,
   10758.43,
   7189.653,
   6160.013,
   5848.187,
   5469.735,
   4435.486,
   7288.767,
   7300.769,
   7508.746,
   8716.939,
   12145.45,
   9378.989,
   32155.65,
   12454.08,
   11633.49,
   9231.206,
   7662.3,
   5934.833,
   3354.157,
   3145.708,
   20266.64,
   2403.505,
   1664.17,
   1637.513,
   1319.799,
   1302.1,
   749.7256};
   Double_t Graph_from_VbbHcc_tags_H_dR_fex1043[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_fey1043[30] = {
   0,
   0.2496943,
   1004.868,
   1230.135,
   989.6561,
   870.167,
   884.2545,
   820.8384,
   575.808,
   1043.424,
   1175.292,
   909.8864,
   1035.625,
   1308.536,
   1046.01,
   20624.77,
   1284.209,
   1243.674,
   1059.437,
   1469.057,
   852.2845,
   509.0182,
   557.9379,
   16542.49,
   569.6882,
   420.0757,
   405.1613,
   404.5948,
   355.9571,
   305.1225};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_fx1043,Graph_from_VbbHcc_tags_H_dR_fy1043,Graph_from_VbbHcc_tags_H_dR_fex1043,Graph_from_VbbHcc_tags_H_dR_fey1043);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR1043 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR1043","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetMinimum(58.05847);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetMaximum(58058.47);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR1043->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR1043);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_tags_17->cd();
  
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
   
   TH1D *data_mc_ratio__60 = new TH1D("data_mc_ratio__60","",30,0,6);
   data_mc_ratio__60->SetBinContent(2,5.829428);
   data_mc_ratio__60->SetBinContent(3,0.3696942);
   data_mc_ratio__60->SetBinContent(4,0.3090599);
   data_mc_ratio__60->SetBinContent(5,0.3531464);
   data_mc_ratio__60->SetBinContent(6,0.3879862);
   data_mc_ratio__60->SetBinContent(7,0.399782);
   data_mc_ratio__60->SetBinContent(8,0.4210441);
   data_mc_ratio__60->SetBinContent(9,0.5135852);
   data_mc_ratio__60->SetBinContent(10,0.3368197);
   data_mc_ratio__60->SetBinContent(11,0.3513329);
   data_mc_ratio__60->SetBinContent(12,0.3740971);
   data_mc_ratio__60->SetBinContent(13,0.3485168);
   data_mc_ratio__60->SetBinContent(14,0.2703894);
   data_mc_ratio__60->SetBinContent(15,0.3782924);
   data_mc_ratio__60->SetBinContent(16,0.1173044);
   data_mc_ratio__60->SetBinContent(17,0.2878574);
   data_mc_ratio__60->SetBinContent(18,0.2867584);
   data_mc_ratio__60->SetBinContent(19,0.3182683);
   data_mc_ratio__60->SetBinContent(20,0.3321457);
   data_mc_ratio__60->SetBinContent(21,0.3829931);
   data_mc_ratio__60->SetBinContent(22,0.5282996);
   data_mc_ratio__60->SetBinContent(23,0.4847875);
   data_mc_ratio__60->SetBinContent(24,0.06009875);
   data_mc_ratio__60->SetBinContent(25,0.3977524);
   data_mc_ratio__60->SetBinContent(26,0.4861282);
   data_mc_ratio__60->SetBinContent(27,0.4323629);
   data_mc_ratio__60->SetBinContent(28,0.4083954);
   data_mc_ratio__60->SetBinContent(29,0.3786192);
   data_mc_ratio__60->SetBinContent(30,0.4881786);
   data_mc_ratio__60->SetBinContent(31,0.3159471);
   data_mc_ratio__60->SetBinError(2,2.914714);
   data_mc_ratio__60->SetBinError(3,0.006648489);
   data_mc_ratio__60->SetBinError(4,0.005359778);
   data_mc_ratio__60->SetBinError(5,0.007008473);
   data_mc_ratio__60->SetBinError(6,0.007936286);
   data_mc_ratio__60->SetBinError(7,0.00826801);
   data_mc_ratio__60->SetBinError(8,0.008773657);
   data_mc_ratio__60->SetBinError(9,0.01076058);
   data_mc_ratio__60->SetBinError(10,0.006797852);
   data_mc_ratio__60->SetBinError(11,0.006937054);
   data_mc_ratio__60->SetBinError(12,0.007058435);
   data_mc_ratio__60->SetBinError(13,0.006323097);
   data_mc_ratio__60->SetBinError(14,0.004718327);
   data_mc_ratio__60->SetBinError(15,0.006350907);
   data_mc_ratio__60->SetBinError(16,0.001909979);
   data_mc_ratio__60->SetBinError(17,0.004807649);
   data_mc_ratio__60->SetBinError(18,0.004964816);
   data_mc_ratio__60->SetBinError(19,0.005871748);
   data_mc_ratio__60->SetBinError(20,0.006583923);
   data_mc_ratio__60->SetBinError(21,0.008033249);
   data_mc_ratio__60->SetBinError(22,0.01255014);
   data_mc_ratio__60->SetBinError(23,0.01241414);
   data_mc_ratio__60->SetBinError(24,0.001722034);
   data_mc_ratio__60->SetBinError(25,0.01286423);
   data_mc_ratio__60->SetBinError(26,0.01709136);
   data_mc_ratio__60->SetBinError(27,0.01624919);
   data_mc_ratio__60->SetBinError(28,0.01759084);
   data_mc_ratio__60->SetBinError(29,0.01705215);
   data_mc_ratio__60->SetBinError(30,0.0255175);
   data_mc_ratio__60->SetBinError(31,0.1198462);
   data_mc_ratio__60->SetMinimum(0.4);
   data_mc_ratio__60->SetMaximum(1.6);
   data_mc_ratio__60->SetEntries(19.52671);
   data_mc_ratio__60->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__60->SetLineColor(ci);
   data_mc_ratio__60->SetLineWidth(2);
   data_mc_ratio__60->SetMarkerStyle(20);
   data_mc_ratio__60->SetMarkerSize(1.2);
   data_mc_ratio__60->GetXaxis()->SetTitle("#DeltaR(c,c)");
   data_mc_ratio__60->GetXaxis()->SetRange(1,31);
   data_mc_ratio__60->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__60->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__60->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__60->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__60->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__60->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__60->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__60->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__60->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__60->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__60->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__60->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__60->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__60->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__60->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__60->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__60->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1044[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1044[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1044[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1044[30] = {
   0,
   0.3638937,
   0.1201468,
   0.1143415,
   0.1376501,
   0.1412606,
   0.1512015,
   0.1500691,
   0.1298185,
   0.1431551,
   0.1609819,
   0.1211769,
   0.118806,
   0.1077388,
   0.111527,
   0.6414043,
   0.1031155,
   0.1069046,
   0.1147669,
   0.1917253,
   0.1436072,
   0.1517574,
   0.1773648,
   0.8162422,
   0.2370239,
   0.2524236,
   0.2474247,
   0.3065578,
   0.2733716,
   0.4069789};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1044,Graph_from_mc_statistical_error_fy1044,Graph_from_mc_statistical_error_fex1044,Graph_from_mc_statistical_error_fey1044);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1044 = new TH1F("Graph_Graph_from_mc_statistical_error1044","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1044->SetMinimum(0.02050934);
   Graph_Graph_from_mc_statistical_error1044->SetMaximum(1.979491);
   Graph_Graph_from_mc_statistical_error1044->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1044->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1044->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1044);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_tags_17->cd();
   H_dR_tags_17->Modified();
   H_dR_tags_17->cd();
   H_dR_tags_17->SetSelected(H_dR_tags_17);
}
