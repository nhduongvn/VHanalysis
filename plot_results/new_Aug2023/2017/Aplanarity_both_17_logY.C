void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Tue Aug 22 09:18:48 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(0,0,1,1);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetFillStyle(4000);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.897527,1.052419,13.40615);
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
   st->SetMaximum(1.638103e+11);
   
   TH1F *st_stack_254 = new TH1F("st_stack_254","",50,0,1);
   st_stack_254->SetMinimum(0.001314549);
   st_stack_254->SetMaximum(5.967393e+11);
   st_stack_254->SetDirectory(0);
   st_stack_254->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_254->SetLineColor(ci);
   st_stack_254->GetXaxis()->SetRange(1,50);
   st_stack_254->GetXaxis()->SetLabelFont(42);
   st_stack_254->GetXaxis()->SetLabelSize(0.035);
   st_stack_254->GetXaxis()->SetTitleSize(0.035);
   st_stack_254->GetXaxis()->SetTitleFont(42);
   st_stack_254->GetYaxis()->SetTitle("Events/0.02");
   st_stack_254->GetYaxis()->SetLabelFont(42);
   st_stack_254->GetYaxis()->SetLabelSize(0.05);
   st_stack_254->GetYaxis()->SetTitleSize(0.057);
   st_stack_254->GetYaxis()->SetTitleOffset(1.2);
   st_stack_254->GetYaxis()->SetTitleFont(42);
   st_stack_254->GetZaxis()->SetLabelFont(42);
   st_stack_254->GetZaxis()->SetLabelSize(0.035);
   st_stack_254->GetZaxis()->SetTitleSize(0.035);
   st_stack_254->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_254);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,97845.86);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,30020.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,29793.09);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,6087.037);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,25588.78);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,2952.634);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,1770.112);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1428.922);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,903.1493);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,375.8377);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,497.9298);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,318.6237);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,26.19372);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,77.2109);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,3.77131);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,51.12091);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,6.437462);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,3.963331);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,261.4261);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,3850.04);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,2175.043);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,16585.97);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,892.7661);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,20608.99);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,644.6657);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,523.1878);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,472.7965);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,404.3797);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,223.6638);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,280.5121);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,241.7265);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,11.66325);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,30.43391);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,3.77131);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,37.57746);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,6.437462);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,3.963331);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,237.597);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(9795);

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
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,551.5767);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,166.3897);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,74.67935);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,40.60037);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,31.00702);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,17.07377);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,12.19756);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,10.47447);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,5.976843);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,3.677201);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,2.176654);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,1.738562);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.8130484);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.5115172);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.4351565);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.3507274);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.0001083199);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.05756252);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.315519);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,0.05752587);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,9.807988);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,5.378556);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,3.58139);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,2.667613);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,2.406395);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,1.749962);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.39962);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,1.379688);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,1.044802);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.8806227);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.5342729);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.586882);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.3712432);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.2461364);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.2570204);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.29114);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.07514536);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.05756252);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.315519);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,0.05752587);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(12402);

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
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,11219.97);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,3689.833);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,1798.054);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,1041.806);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,641.2325);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,433.9081);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,276.2158);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,188.0236);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,136.8784);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,92.88126);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,60.95177);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,44.32294);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,30.20486);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,20.92145);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,12.16522);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,8.098217);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,4.559424);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,3.277555);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,1.507704);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.3939703);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.1313148);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(23,0.05113213);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,27.33867);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,15.62233);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,10.89993);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,8.300759);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,6.507194);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,5.360818);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,4.277397);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,3.517964);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,3.006604);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,2.472594);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,1.990538);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,1.708266);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,1.409697);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,1.158649);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,0.881807);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,0.7250205);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.5344936);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.4443666);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.310415);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.1576515);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.09501218);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(23,0.05113213);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(333238);

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
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,1440.594);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,408.0923);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,179.2801);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,108.023);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,61.2139);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,49.00157);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,27.39852);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,18.75038);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,12.34865);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,9.134234);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,4.101963);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,3.248621);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,2.734313);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,1.348201);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,1.244306);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,0.1198845);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,0.1919051);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,22.34951);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,12.4019);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,6.71334);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,7.699012);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,4.861285);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,5.326277);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,2.999466);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,2.582409);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,1.604179);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,2.455466);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,0.862639);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,0.8628474);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,0.7968559);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.5103884);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,0.5630792);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.08498239);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.139651);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(18334);

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
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,166.3532);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,44.82221);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,15.62585);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,8.793939);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,6.84352);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,2.951816);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,4.905503);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,1.054404);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.6455623);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,0.7331616);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.6328772);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,0.101563);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(13,0.08894666);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.2589813);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.2126529);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,11.68652);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,4.732563);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,2.221854);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,1.844763);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,2.080345);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,0.8411414);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,1.816175);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.3213547);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.2792383);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.3073295);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.2971119);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,0.101563);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(13,0.07389829);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.1516248);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.1503795);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(2217);

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
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(1,0.8437523);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(4,0.2950387);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(6,0.3049337);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(1,0.5005675);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(4,0.2950387);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(6,0.3049337);
   VbbHcc_both_Aplanarity_stack_6->SetEntries(5);

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
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(1,3.904651);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(2,1.339085);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(3,0.4228202);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(4,0.6188319);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(5,0.2275793);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(1,1.026617);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(2,0.6036451);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(3,0.3046862);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(4,0.3656253);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(5,0.2275793);
   VbbHcc_both_Aplanarity_stack_7->SetEntries(26);

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
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(1,25.57493);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(2,8.670835);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(3,3.793942);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(4,1.960369);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(5,0.4377879);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(6,0.725015);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(7,0.8063503);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(8,0.5784221);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(10,0.183263);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(1,2.506649);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(2,1.452577);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(3,0.9583334);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(4,0.7074822);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(5,0.3211283);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(6,0.4248476);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(7,0.4641292);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(8,0.4097132);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(10,0.183263);
   VbbHcc_both_Aplanarity_stack_8->SetEntries(184);

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
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,25.60664);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,7.619834);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,3.650146);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,2.180233);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,1.37691);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,0.7912843);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.5246341);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.3500621);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.2421027);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.1560042);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.1194952);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.06670538);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.04218151);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.02061143);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.01934162);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.007862121);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.01173464);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.004189235);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.001111367);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.2039473);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.1104687);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.07640931);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.05937237);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.04704855);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.03518225);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.02880672);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.02338639);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.01954346);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.01541319);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.01344331);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.01021154);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.008253115);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.005537806);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.005328582);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.003596585);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.004195613);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.002459897);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.001111367);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(29329);

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
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,8.925413);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,2.949465);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,1.527879);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,0.8966594);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,0.5622014);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.3595202);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.2493716);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.1796035);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.1106672);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.07487223);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.04147168);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.03687771);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.02489949);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.01883024);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.005290926);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.004959349);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.004610623);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.0007293015);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.001594355);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.0003480914);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.05911572);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.03377771);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.02428677);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.01856807);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.01470762);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.01172774);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.00976643);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.008289277);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.006496538);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.005339579);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.003931112);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.003779043);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.003071934);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.002658745);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.001420727);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.001384699);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.001292355);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.0005212042);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.0008000887);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0003480914);
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
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(1,0.08655821);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(2,0.02884656);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(3,0.007283812);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(4,0.009104648);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(5,0.00314066);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(7,0.00366241);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(8,0.005134446);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(10,0.002907272);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(1,0.01181095);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(2,0.006710013);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(3,0.003297671);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(4,0.003771436);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(5,0.002232965);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(7,0.002608315);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(8,0.002994056);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(10,0.0023621);
   VbbHcc_both_Aplanarity_stack_11->SetEntries(95);

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
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.0338242);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.0118566);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.006639273);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.004029747);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.002178507);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.001099283);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.000385567);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.0003885351);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(9,0.0004394118);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.0004150384);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(11,0.0004239412);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.00265162);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.001588559);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.001175346);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.0009116923);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.0006868189);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.000500168);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.0002728624);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.0002750462);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(9,0.0003109798);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.00029474);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(11,0.0003128379);
   VbbHcc_both_Aplanarity_stack_12->SetEntries(308);

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
   
   TH1D *VbbHcc_both_Aplanarity__697 = new TH1D("VbbHcc_both_Aplanarity__697","",50,0,1);
   VbbHcc_both_Aplanarity__697->SetBinContent(1,40886);
   VbbHcc_both_Aplanarity__697->SetBinContent(2,11951);
   VbbHcc_both_Aplanarity__697->SetBinContent(3,5474);
   VbbHcc_both_Aplanarity__697->SetBinContent(4,3124);
   VbbHcc_both_Aplanarity__697->SetBinContent(5,1911);
   VbbHcc_both_Aplanarity__697->SetBinContent(6,1231);
   VbbHcc_both_Aplanarity__697->SetBinContent(7,793);
   VbbHcc_both_Aplanarity__697->SetBinContent(8,567);
   VbbHcc_both_Aplanarity__697->SetBinContent(9,364);
   VbbHcc_both_Aplanarity__697->SetBinContent(10,232);
   VbbHcc_both_Aplanarity__697->SetBinContent(11,172);
   VbbHcc_both_Aplanarity__697->SetBinContent(12,116);
   VbbHcc_both_Aplanarity__697->SetBinContent(13,73);
   VbbHcc_both_Aplanarity__697->SetBinContent(14,51);
   VbbHcc_both_Aplanarity__697->SetBinContent(15,44);
   VbbHcc_both_Aplanarity__697->SetBinContent(16,19);
   VbbHcc_both_Aplanarity__697->SetBinContent(17,13);
   VbbHcc_both_Aplanarity__697->SetBinContent(18,7);
   VbbHcc_both_Aplanarity__697->SetBinContent(19,6);
   VbbHcc_both_Aplanarity__697->SetBinContent(20,2);
   VbbHcc_both_Aplanarity__697->SetEntries(67085);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity__697->SetLineColor(ci);
   VbbHcc_both_Aplanarity__697->SetLineWidth(2);
   VbbHcc_both_Aplanarity__697->SetMarkerStyle(20);
   VbbHcc_both_Aplanarity__697->SetMarkerSize(1.2);
   VbbHcc_both_Aplanarity__697->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity__697->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__697->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__697->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__697->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__697->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__697->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__697->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__697->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity__697->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__697->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__697->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity__697->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity__697->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__697->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Aplanarity_fx1507[50] = {
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
   Double_t Graph_from_VbbHcc_both_Aplanarity_fy1507[50] = {
   111289.3,
   34350.45,
   31870.14,
   7292.225,
   26331.68,
   3457.751,
   2092.414,
   1648.338,
   1059.352,
   482.681,
   565.9545,
   368.139,
   60.10197,
   100.2905,
   17.85328,
   59.70256,
   11.20524,
   7.303367,
   263.2521,
   0.3939703,
   0.1891888,
   0,
   0.05113213,
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
   0,
   0};
   Double_t Graph_from_VbbHcc_both_Aplanarity_fex1507[50] = {
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
   Double_t Graph_from_VbbHcc_both_Aplanarity_fey1507[50] = {
   3850.234,
   2175.147,
   16585.98,
   892.8442,
   20608.99,
   644.7131,
   523.2192,
   472.8189,
   404.3955,
   223.6929,
   280.5211,
   241.7348,
   11.78121,
   30.46161,
   3.925064,
   37.58568,
   6.461561,
   3.98858,
   237.5974,
   0.1576515,
   0.1110705,
   0,
   0.05113213,
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
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_both_Aplanarity_fx1507,Graph_from_VbbHcc_both_Aplanarity_fy1507,Graph_from_VbbHcc_both_Aplanarity_fex1507,Graph_from_VbbHcc_both_Aplanarity_fey1507);
   gre->SetName("Graph_from_VbbHcc_both_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Aplanarity1507 = new TH1F("Graph_Graph_from_VbbHcc_both_Aplanarity1507","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->SetMinimum(126.6535);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->SetMaximum(126653.5);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Aplanarity1507->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Aplanarity1507);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__698 = new TH1D("data_mc_ratio__698","",50,0,1);
   data_mc_ratio__698->SetBinContent(1,0.3673847);
   data_mc_ratio__698->SetBinContent(2,0.3479139);
   data_mc_ratio__698->SetBinContent(3,0.1717595);
   data_mc_ratio__698->SetBinContent(4,0.4284015);
   data_mc_ratio__698->SetBinContent(5,0.07257417);
   data_mc_ratio__698->SetBinContent(6,0.3560118);
   data_mc_ratio__698->SetBinContent(7,0.3789882);
   data_mc_ratio__698->SetBinContent(8,0.3439828);
   data_mc_ratio__698->SetBinContent(9,0.3436063);
   data_mc_ratio__698->SetBinContent(10,0.4806487);
   data_mc_ratio__698->SetBinContent(11,0.3039114);
   data_mc_ratio__698->SetBinContent(12,0.3150984);
   data_mc_ratio__698->SetBinContent(13,1.214603);
   data_mc_ratio__698->SetBinContent(14,0.5085228);
   data_mc_ratio__698->SetBinContent(15,2.464534);
   data_mc_ratio__698->SetBinContent(16,0.3182443);
   data_mc_ratio__698->SetBinContent(17,1.160171);
   data_mc_ratio__698->SetBinContent(18,0.958462);
   data_mc_ratio__698->SetBinContent(19,0.02279185);
   data_mc_ratio__698->SetBinContent(20,5.076525);
   data_mc_ratio__698->SetBinError(1,0.001816911);
   data_mc_ratio__698->SetBinError(2,0.003182509);
   data_mc_ratio__698->SetBinError(3,0.002321499);
   data_mc_ratio__698->SetBinError(4,0.007664705);
   data_mc_ratio__698->SetBinError(5,0.001660167);
   data_mc_ratio__698->SetBinError(6,0.01014695);
   data_mc_ratio__698->SetBinError(7,0.01345826);
   data_mc_ratio__698->SetBinError(8,0.01444592);
   data_mc_ratio__698->SetBinError(9,0.01800986);
   data_mc_ratio__698->SetBinError(10,0.03155614);
   data_mc_ratio__698->SetBinError(11,0.02317303);
   data_mc_ratio__698->SetBinError(12,0.02925615);
   data_mc_ratio__698->SetBinError(13,0.1421585);
   data_mc_ratio__698->SetBinError(14,0.07120743);
   data_mc_ratio__698->SetBinError(15,0.3715424);
   data_mc_ratio__698->SetBinError(16,0.07301025);
   data_mc_ratio__698->SetBinError(17,0.3217735);
   data_mc_ratio__698->SetBinError(18,0.3622646);
   data_mc_ratio__698->SetBinError(19,0.009304732);
   data_mc_ratio__698->SetBinError(20,3.589645);
   data_mc_ratio__698->SetMinimum(0.4);
   data_mc_ratio__698->SetMaximum(1.6);
   data_mc_ratio__698->SetEntries(13.0532);
   data_mc_ratio__698->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__698->SetLineColor(ci);
   data_mc_ratio__698->SetLineWidth(2);
   data_mc_ratio__698->SetMarkerStyle(20);
   data_mc_ratio__698->SetMarkerSize(1.2);
   data_mc_ratio__698->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__698->GetXaxis()->SetRange(1,50);
   data_mc_ratio__698->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__698->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__698->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__698->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__698->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__698->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__698->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__698->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__698->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__698->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__698->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__698->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__698->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__698->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__698->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__698->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__698->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1508[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1508[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1508[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1508[50] = {
   0.03459661,
   0.06332222,
   0.5204237,
   0.1224378,
   0.782669,
   0.1864545,
   0.2500553,
   0.2868458,
   0.3817385,
   0.4634385,
   0.4956602,
   0.6566401,
   0.1960204,
   0.3037337,
   0.2198512,
   0.6295489,
   0.576655,
   0.5461289,
   0.9025473,
   0.400161,
   0.5870884,
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
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1508,Graph_from_mc_statistical_error_fy1508,Graph_from_mc_statistical_error_fex1508,Graph_from_mc_statistical_error_fey1508);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1508 = new TH1F("Graph_Graph_from_mc_statistical_error1508","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1508->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1508->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1508->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1508->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1508->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1508->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1508->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1508->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1508->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1508->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1508->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1508->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1508->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1508->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1508->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1508->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1508->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1508->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1508);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
