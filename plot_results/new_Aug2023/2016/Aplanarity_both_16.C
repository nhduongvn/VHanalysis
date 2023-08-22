void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Tue Aug 22 09:23:16 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(0,0,1,1);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetFillStyle(4000);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetFrameFillStyle(1000);
   Aplanarity_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-233.3958,1.052419,233172.4);
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
   st->SetMaximum(199839.8);
   
   TH1F *st_stack_253 = new TH1F("st_stack_253","",50,0,1);
   st_stack_253->SetMinimum(0.01);
   st_stack_253->SetMaximum(209831.8);
   st_stack_253->SetDirectory(0);
   st_stack_253->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_253->SetLineColor(ci);
   st_stack_253->GetXaxis()->SetRange(1,50);
   st_stack_253->GetXaxis()->SetLabelFont(42);
   st_stack_253->GetXaxis()->SetLabelSize(0.035);
   st_stack_253->GetXaxis()->SetTitleSize(0.035);
   st_stack_253->GetXaxis()->SetTitleFont(42);
   st_stack_253->GetYaxis()->SetTitle("Events/0.02");
   st_stack_253->GetYaxis()->SetLabelFont(42);
   st_stack_253->GetYaxis()->SetLabelSize(0.05);
   st_stack_253->GetYaxis()->SetTitleSize(0.057);
   st_stack_253->GetYaxis()->SetTitleOffset(1.2);
   st_stack_253->GetYaxis()->SetTitleFont(42);
   st_stack_253->GetZaxis()->SetLabelFont(42);
   st_stack_253->GetZaxis()->SetLabelSize(0.035);
   st_stack_253->GetZaxis()->SetTitleSize(0.035);
   st_stack_253->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_253);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,81929.22);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,22816.36);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,12562.86);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,4587.672);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,4518.469);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,3260.135);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,2056.656);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,818.2736);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,451.7506);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,385.5793);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,519.1234);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,41.26618);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,78.5423);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,78.93539);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,26.82709);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,5.559013);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,3.422499);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,4350.515);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,2224.334);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,1994.992);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,721.9947);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,1329.265);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,749.6123);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,1086.817);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,324.4805);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,238.795);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,213.2602);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,286.1893);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,25.02299);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,34.24846);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,33.36435);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,23.79433);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,5.559013);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,3.422499);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(9183);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,338.1182);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,101.6522);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,51.96367);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,29.25031);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,17.75016);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,13.2668);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,8.375188);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,3.72404);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,3.14212);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,1.778097);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,1.727199);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.8120264);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.6475052);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.3315866);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.7304208);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.3756664);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.2635683);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.2526541);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,0.03624783);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,6.936177);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,3.770917);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,2.758428);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,2.066585);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,1.564255);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,1.47505);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.166943);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.6901417);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.6731612);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.4764558);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.538703);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.3736753);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.2576679);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.1362519);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.3350303);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.230739);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.1975928);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.2526541);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,0.03624783);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(9517);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,6568.238);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,2174.53);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,1071.813);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,616.8366);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,387.8353);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,252.1832);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,173.829);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,115.0456);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,80.91706);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,53.65013);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,38.18067);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,26.17271);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,18.71333);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,12.37297);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,7.15519);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,4.858176);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,3.130126);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,2.039573);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,1.419027);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.7078819);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.1738623);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(22,0.05733812);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(24,0.06405613);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,18.7842);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,10.75395);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,7.548858);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,5.722395);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,4.535914);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,3.662665);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,3.037464);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,2.467631);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,2.070471);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,1.690468);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,1.420871);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,1.174469);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,0.9943935);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,0.8035871);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,0.6067801);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,0.5064258);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.4019708);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.3244305);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.2737675);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.1920869);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.08740361);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(22,0.05733812);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(24,0.06405613);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(232621);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,941.3761);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,293.351);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,141.7151);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,72.54704);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,38.98244);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,29.51117);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,19.31255);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,15.20942);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,8.159033);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,6.483533);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,5.544125);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,2.477908);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,1.211948);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,0.972862);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,2.554352);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,0.6533908);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,0.4136932);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(18,0.2818163);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(20,0.07009327);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,17.30319);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,11.65535);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,8.411022);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,5.396786);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,3.242183);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,3.893384);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,3.233288);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,2.793462);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,1.15089);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,1.830301);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,1.704641);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,0.6697702);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,0.413048);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.318433);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,1.655726);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.3846487);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.2669867);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(18,0.2818163);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(20,0.07009327);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(15013);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,102.8466);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,28.97034);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,16.83353);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,6.930609);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,3.315419);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,2.537537);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,1.009089);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,0.4611955);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.6179477);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,0.1398866);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.6361452);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,0.3106758);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.0002539495);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.0002488406);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(17,1.832965e-05);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,4.895098);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,6.07486);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,5.595874);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,1.654468);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,0.968545);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,0.8379419);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,0.3483581);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.1940988);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.3359561);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.1229845);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.3567504);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,0.1911365);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.0002539495);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.0002488406);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(17,1.832965e-05);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(3486);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_6 = new TH1D("VbbHcc_both_Aplanarity_stack_6","",50,0,1);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(1,0.817618);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(2,0.3673602);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(1,0.3124421);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(2,0.212126);
   VbbHcc_both_Aplanarity_stack_6->SetEntries(10);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_7 = new TH1D("VbbHcc_both_Aplanarity_stack_7","",50,0,1);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(1,2.633012);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(2,0.6908081);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(3,0.5549639);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(4,0.223366);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(5,0.1860331);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(10,0.0778465);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(1,0.4915516);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(2,0.2453729);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(3,0.2269886);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(4,0.134995);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(5,0.1317153);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(10,0.0778465);
   VbbHcc_both_Aplanarity_stack_7->SetEntries(49);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_8 = new TH1D("VbbHcc_both_Aplanarity_stack_8","",50,0,1);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(1,19.71188);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(2,5.974623);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(3,3.417575);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(4,1.652349);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(5,0.2354808);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(6,0.6484551);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(7,0.1769931);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(8,0.2923105);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(9,0.1416337);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(1,2.027607);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(2,1.117238);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(3,0.8414391);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(4,0.5860549);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(5,0.2354808);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(6,0.3747039);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(7,0.1769931);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(8,0.2923105);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(9,0.1416337);
   VbbHcc_both_Aplanarity_stack_8->SetEntries(158);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,17.17759);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,5.243018);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,2.610827);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,1.511952);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,0.9619253);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,0.6131679);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.405096);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.2719898);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.1708102);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.1092428);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.06785967);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.05391494);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.03161488);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.02055928);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.01212756);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.006969318);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.007555835);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.003089239);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.002245122);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(20,0.0009130579);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(22,0.001087504);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.138138);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.07597099);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.0533061);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.04052016);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.03218966);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.02581899);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.02065045);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.0171577);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.0133667);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.01068629);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.008621262);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.007597196);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.005645738);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.004543674);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.003523815);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.00263942);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.002871895);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.001785111);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.001591907);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(20,0.0009130579);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(22,0.001087504);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(28929);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,7.707461);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,2.546985);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,1.319387);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,0.7743023);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,0.485484);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.3104605);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.2153426);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.155095);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.09556566);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.06465525);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.0358125);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.03184542);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.02150173);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.01626069);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.004568932);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.004282602);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.003981463);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.0006297819);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.001376791);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.0003005912);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.05104886);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.02916844);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.02097262);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.01603429);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.01270064);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.01012738);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.008433714);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.007158131);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.005610028);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.004610946);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.003394677);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.003263359);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.002652741);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.002295936);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.001226856);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.001195745);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.001116002);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.0004500812);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.0006909095);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0003005912);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(41891);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_11 = new TH1D("VbbHcc_both_Aplanarity_stack_11","",50,0,1);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(1,0.05225417);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(2,0.01295679);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(3,0.003880419);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(4,0.002186347);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(6,0.002083618);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(9,0.002109186);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(10,0.002126611);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(1,0.01074993);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(2,0.005330841);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(3,0.002754198);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(4,0.002186347);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(6,0.002083618);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(9,0.002109186);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(10,0.002126611);
   VbbHcc_both_Aplanarity_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_12 = new TH1D("VbbHcc_both_Aplanarity_stack_12","",50,0,1);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.01915487);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.009601039);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.003651786);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.002131151);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.001423579);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.0008182779);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.0008299033);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.0006056176);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.0003371612);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.00234116);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.00165148);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.001015049);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.0007634846);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.0006370334);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.0004763225);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.0004791449);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.0004289514);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.0003371612);
   VbbHcc_both_Aplanarity_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Aplanarity__694 = new TH1D("VbbHcc_both_Aplanarity__694","",50,0,1);
   VbbHcc_both_Aplanarity__694->SetBinContent(1,61191);
   VbbHcc_both_Aplanarity__694->SetBinContent(2,17372);
   VbbHcc_both_Aplanarity__694->SetBinContent(3,8299);
   VbbHcc_both_Aplanarity__694->SetBinContent(4,4483);
   VbbHcc_both_Aplanarity__694->SetBinContent(5,2808);
   VbbHcc_both_Aplanarity__694->SetBinContent(6,1789);
   VbbHcc_both_Aplanarity__694->SetBinContent(7,1136);
   VbbHcc_both_Aplanarity__694->SetBinContent(8,779);
   VbbHcc_both_Aplanarity__694->SetBinContent(9,541);
   VbbHcc_both_Aplanarity__694->SetBinContent(10,380);
   VbbHcc_both_Aplanarity__694->SetBinContent(11,259);
   VbbHcc_both_Aplanarity__694->SetBinContent(12,168);
   VbbHcc_both_Aplanarity__694->SetBinContent(13,98);
   VbbHcc_both_Aplanarity__694->SetBinContent(14,71);
   VbbHcc_both_Aplanarity__694->SetBinContent(15,44);
   VbbHcc_both_Aplanarity__694->SetBinContent(16,32);
   VbbHcc_both_Aplanarity__694->SetBinContent(17,19);
   VbbHcc_both_Aplanarity__694->SetBinContent(18,13);
   VbbHcc_both_Aplanarity__694->SetBinContent(19,8);
   VbbHcc_both_Aplanarity__694->SetBinContent(20,1);
   VbbHcc_both_Aplanarity__694->SetEntries(99540);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity__694->SetLineColor(ci);
   VbbHcc_both_Aplanarity__694->SetLineWidth(2);
   VbbHcc_both_Aplanarity__694->SetMarkerStyle(20);
   VbbHcc_both_Aplanarity__694->SetMarkerSize(1.2);
   VbbHcc_both_Aplanarity__694->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity__694->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__694->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__694->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__694->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__694->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__694->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__694->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__694->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity__694->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__694->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__694->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__694->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__694->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__694->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Aplanarity_fx1505[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fy1505[50] = {
   89927.91,
   25429.71,
   13853.09,
   5317.403,
   4968.222,
   3559.208,
   2259.98,
   953.4339,
   544.9969,
   447.8852,
   565.3152,
   71.12526,
   99.16819,
   92.64988,
   37.284,
   5.898486,
   9.377956,
   6.000262,
   1.422649,
   0.7788882,
   0.1741629,
   0.09467345,
   0,
   0.06405613,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fex1505[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fey1505[50] = {
   4350.599,
   2224.402,
   1995.034,
   722.0426,
   1329.278,
   749.6334,
   1086.826,
   324.5028,
   238.808,
   213.2753,
   286.1986,
   25.06301,
   34.26635,
   33.37582,
   23.86194,
   0.6765135,
   5.583417,
   3.458614,
   0.273773,
   0.2044781,
   0.08740413,
   0.06784355,
   0,
   0.06405613,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_both_Aplanarity_fx1505,Graph_from_VbbHcc_both_Aplanarity_fy1505,Graph_from_VbbHcc_both_Aplanarity_fex1505,Graph_from_VbbHcc_both_Aplanarity_fey1505);
   gre->SetName("Graph_from_VbbHcc_both_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Aplanarity1505 = new TH1F("Graph_Graph_from_VbbHcc_both_Aplanarity1505","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->SetMaximum(103706.4);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Aplanarity1505);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_both_16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__695 = new TH1D("data_mc_ratio__695","",50,0,1);
   data_mc_ratio__695->SetBinContent(1,0.680445);
   data_mc_ratio__695->SetBinContent(2,0.683138);
   data_mc_ratio__695->SetBinContent(3,0.599072);
   data_mc_ratio__695->SetBinContent(4,0.8430808);
   data_mc_ratio__695->SetBinContent(5,0.5651921);
   data_mc_ratio__695->SetBinContent(6,0.5026399);
   data_mc_ratio__695->SetBinContent(7,0.5026593);
   data_mc_ratio__695->SetBinContent(8,0.8170467);
   data_mc_ratio__695->SetBinContent(9,0.9926663);
   data_mc_ratio__695->SetBinContent(10,0.8484317);
   data_mc_ratio__695->SetBinContent(11,0.4581515);
   data_mc_ratio__695->SetBinContent(12,2.36203);
   data_mc_ratio__695->SetBinContent(13,0.9882201);
   data_mc_ratio__695->SetBinContent(14,0.7663258);
   data_mc_ratio__695->SetBinContent(15,1.180131);
   data_mc_ratio__695->SetBinContent(16,5.425121);
   data_mc_ratio__695->SetBinContent(17,2.026028);
   data_mc_ratio__695->SetBinContent(18,2.166572);
   data_mc_ratio__695->SetBinContent(19,5.623312);
   data_mc_ratio__695->SetBinContent(20,1.283881);
   data_mc_ratio__695->SetBinError(1,0.002750738);
   data_mc_ratio__695->SetBinError(2,0.005183028);
   data_mc_ratio__695->SetBinError(3,0.006576066);
   data_mc_ratio__695->SetBinError(4,0.01259171);
   data_mc_ratio__695->SetBinError(5,0.0106659);
   data_mc_ratio__695->SetBinError(6,0.0118837);
   data_mc_ratio__695->SetBinError(7,0.01491367);
   data_mc_ratio__695->SetBinError(8,0.02927374);
   data_mc_ratio__695->SetBinError(9,0.04267806);
   data_mc_ratio__695->SetBinError(10,0.04352363);
   data_mc_ratio__695->SetBinError(11,0.02846815);
   data_mc_ratio__695->SetBinError(12,0.1822346);
   data_mc_ratio__695->SetBinError(13,0.0998253);
   data_mc_ratio__695->SetBinError(14,0.09094615);
   data_mc_ratio__695->SetBinError(15,0.1779114);
   data_mc_ratio__695->SetBinError(16,0.959035);
   data_mc_ratio__695->SetBinError(17,0.4648027);
   data_mc_ratio__695->SetBinError(18,0.600899);
   data_mc_ratio__695->SetBinError(19,1.988141);
   data_mc_ratio__695->SetBinError(20,1.283881);
   data_mc_ratio__695->SetMinimum(0.4);
   data_mc_ratio__695->SetMaximum(1.6);
   data_mc_ratio__695->SetEntries(61.68461);
   data_mc_ratio__695->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__695->SetLineColor(ci);
   data_mc_ratio__695->SetLineWidth(2);
   data_mc_ratio__695->SetMarkerStyle(20);
   data_mc_ratio__695->SetMarkerSize(1.2);
   data_mc_ratio__695->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__695->GetXaxis()->SetRange(1,50);
   data_mc_ratio__695->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__695->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__695->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__695->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__695->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__695->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__695->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__695->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__695->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__695->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__695->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__695->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__695->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__695->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__695->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__695->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__695->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1506[50] = {
   0.01,
   0.03,
   0.05,
   0.07,
   0.09,
   0.11,
   0.13,
   0.15,
   0.17,
   0.19,
   0.21,
   0.23,
   0.25,
   0.27,
   0.29,
   0.31,
   0.33,
   0.35,
   0.37,
   0.39,
   0.41,
   0.43,
   0.45,
   0.47,
   0.49,
   0.51,
   0.53,
   0.55,
   0.57,
   0.59,
   0.61,
   0.63,
   0.65,
   0.67,
   0.69,
   0.71,
   0.73,
   0.75,
   0.77,
   0.79,
   0.81,
   0.83,
   0.85,
   0.87,
   0.89,
   0.91,
   0.93,
   0.95,
   0.97,
   0.99};
   Double_t Graph_from_mc_statistical_error_fy1506[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1506[50] = {
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01,
   0.01};
   Double_t Graph_from_mc_statistical_error_fey1506[50] = {
   0.04837874,
   0.08747258,
   0.1440136,
   0.1357886,
   0.267556,
   0.210618,
   0.4809009,
   0.3403517,
   0.4381823,
   0.4761831,
   0.5062638,
   0.3523785,
   0.3455377,
   0.360236,
   0.6400048,
   0.1146928,
   0.5953767,
   0.5764106,
   0.1924389,
   0.2625256,
   0.5018528,
   0.7166059,
   0,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1506,Graph_from_mc_statistical_error_fy1506,Graph_from_mc_statistical_error_fex1506,Graph_from_mc_statistical_error_fey1506);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1506 = new TH1F("Graph_Graph_from_mc_statistical_error1506","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1506->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1506->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1506->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1506->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1506->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1506->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1506->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1506->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1506->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1506->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1506->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1506->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1506->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1506->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1506->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1506->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1506->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1506->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1506);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
