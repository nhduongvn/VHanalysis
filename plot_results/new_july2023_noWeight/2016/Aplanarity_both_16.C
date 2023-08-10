void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Aug 10 12:29:33 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.1532254,-305.8832,1.052419,305587.3);
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
   st->SetMaximum(261902.9);
   
   TH1F *st_stack_253 = new TH1F("st_stack_253","",50,0,1);
   st_stack_253->SetMinimum(0.01);
   st_stack_253->SetMaximum(274998);
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
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,107603.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,29744.48);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,16732.53);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,6313.18);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,5658.091);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,3878.814);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,2896.129);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1239.625);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,827.0558);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,487.7229);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,673.2146);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,41.67668);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,94.5786);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,92.62911);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,25.73584);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.1859404);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,5.879633);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,3.532283);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,5885.59);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,2932.063);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,2560.845);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,958.6137);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,1641.195);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,861.9942);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,1497.202);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,473.224);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,386.5044);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,275.1079);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,383.0527);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,24.44482);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,40.37539);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,35.3969);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,22.48277);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.1859404);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,5.879633);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,3.532283);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(10203);

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
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,465.9727);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,141.5321);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,72.174);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,39.96083);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,23.45326);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,18.24725);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,11.33686);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,5.313895);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,4.599452);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,2.583105);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,2.164006);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,1.364878);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.8508881);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.4653074);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.947822);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.4468063);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.3523464);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.2648783);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,0.04373405);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,8.501863);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,4.660824);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,3.420188);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,2.526038);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,1.916786);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,1.770446);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.431745);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.8800929);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.8276233);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.5966049);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.6283043);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.4891358);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.3133747);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.1475413);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.4017139);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.2801279);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.2720034);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.2648783);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,0.04373405);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(10096);

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
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,8375.66);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,2779.061);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,1374.282);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,790.7031);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,497.2007);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,324.114);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,223.8458);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,148.5143);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,103.1633);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,69.59143);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,50.4703);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,33.97998);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,23.29626);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,16.18006);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,9.445129);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,6.306194);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,3.937438);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,2.560967);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,1.850925);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.8882759);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.213515);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(22,0.06964491);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(24,0.06964491);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,22.96204);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,13.2323);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,9.31046);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,7.065234);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,5.599717);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,4.530414);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,3.763508);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,3.061911);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,2.553726);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,2.105351);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,1.788336);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,1.467555);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,1.218237);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,1.015161);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,0.7635689);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,0.636638);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.4928172);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.3969338);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.3483176);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.2402156);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.1083972);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(22,0.06964491);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(24,0.06964491);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(243289);

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
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,1221.407);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,382.1687);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,185.5544);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,90.5721);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,52.41658);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,40.61355);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,25.62788);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,19.67612);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,9.744204);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,9.277874);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,8.523583);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,2.812668);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,1.731272);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,1.440028);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,4.044728);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,0.7039117);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,0.4909697);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(18,0.279517);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(20,0.07830265);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,25.6511);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,17.20188);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,12.3924);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,7.507409);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,5.457303);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,5.875231);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,4.262709);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,4.121406);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,1.300692);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,2.89192);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,2.893053);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,0.7415448);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,0.5487884);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.4704677);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,2.73211);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.4084398);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.3051648);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(18,0.279517);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(20,0.07830265);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(15464);

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
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,125.7494);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,34.82593);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,20.09372);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,9.986389);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,4.172068);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,3.131579);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,1.405025);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,0.6091178);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.7028154);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,0.162535);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.7540495);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,0.3463211);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.0002136538);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.0002136538);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(17,0.0002136538);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,6.172197);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,6.784235);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,6.570631);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,2.273599);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,1.195259);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,1.152638);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,0.4353416);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.2255208);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.3847521);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.1471787);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.4367692);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,0.2124813);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.0002136538);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.0002136538);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(17,0.0002136538);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(3789);

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
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(1,0.9405851);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(2,0.5374772);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(1,0.3555077);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(2,0.2687386);
   VbbHcc_both_Aplanarity_stack_6->SetEntries(11);

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
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(1,3.489876);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(2,0.8724691);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(3,0.6543518);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(4,0.3271759);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(5,0.2181173);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(10,0.1090586);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(1,0.6169288);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(2,0.3084644);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(3,0.267138);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(4,0.1888951);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(5,0.1542322);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(10,0.1090586);
   VbbHcc_both_Aplanarity_stack_7->SetEntries(52);

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
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(1,26.26637);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(2,7.539422);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(3,4.864143);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(4,2.188864);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(5,0.2432072);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(6,0.7296215);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(7,0.2432072);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(8,0.2432072);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(9,0.2432072);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(1,2.527483);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(2,1.35412);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(3,1.087655);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(4,0.7296215);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(5,0.2432072);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(6,0.4212471);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(7,0.2432072);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(8,0.2432072);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(9,0.2432072);
   VbbHcc_both_Aplanarity_stack_8->SetEntries(175);

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
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,23.17443);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,7.152788);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,3.559906);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,2.07604);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,1.321741);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,0.8532234);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,0.5482064);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.3805844);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.2418153);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.1511346);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.09755051);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.07144544);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.04396642);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.02885297);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.01648741);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.009617655);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.009617655);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.004121852);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.002747902);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(20,0.001373951);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(22,0.001373951);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.1784391);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.09913414);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.06993666);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.05340764);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.04261463);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.03423868);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.02744465);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.0228671);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.01822752);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.01441012);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.01157712);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.0099077);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.007772239);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.006296233);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.004759505);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.003635132);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.003635132);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.002379753);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.00194306);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(20,0.001373951);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(22,0.001373951);
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
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,9.981254);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,3.34809);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,1.731511);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,1.02258);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,0.6337418);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.4128273);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.2785599);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.1979996);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.1231679);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.08342477);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.05299084);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.03938508);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.02721151);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.0193345);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.006444832);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.005370693);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.006086786);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.001790231);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.001432185);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.0007160924);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.05978085);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.03462327);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.02489902);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.01913455);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.01506349);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.01215776);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.009986858);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.008419797);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.006640768);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.005465338);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.00435582);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.00375522);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.003121374);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.002631092);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.001519061);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.001386707);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.001476262);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.0008006157);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.0007160924);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0005063538);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(50200);

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
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(1,0.06564018);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(2,0.01641004);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(3,0.005470015);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(4,0.002735007);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(6,0.002735007);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(1,0.01339875);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(2,0.006699373);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(3,0.003867885);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(4,0.002735007);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(6,0.002735007);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(9,0.002735007);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(10,0.002735007);
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
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.02429408);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.01214704);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.004644456);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.002858127);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.001786329);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.001071798);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.001071798);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.0007145317);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.0003572658);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.00294609);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.0020832);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.00128814);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.0010105);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.0007988707);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.0006188026);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.0006188026);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.0005052502);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.0003572658);
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
   VbbHcc_both_Aplanarity__694->SetBinContent(1,62763);
   VbbHcc_both_Aplanarity__694->SetBinContent(2,17837);
   VbbHcc_both_Aplanarity__694->SetBinContent(3,8464);
   VbbHcc_both_Aplanarity__694->SetBinContent(4,4619);
   VbbHcc_both_Aplanarity__694->SetBinContent(5,2863);
   VbbHcc_both_Aplanarity__694->SetBinContent(6,1832);
   VbbHcc_both_Aplanarity__694->SetBinContent(7,1169);
   VbbHcc_both_Aplanarity__694->SetBinContent(8,808);
   VbbHcc_both_Aplanarity__694->SetBinContent(9,552);
   VbbHcc_both_Aplanarity__694->SetBinContent(10,387);
   VbbHcc_both_Aplanarity__694->SetBinContent(11,267);
   VbbHcc_both_Aplanarity__694->SetBinContent(12,166);
   VbbHcc_both_Aplanarity__694->SetBinContent(13,100);
   VbbHcc_both_Aplanarity__694->SetBinContent(14,72);
   VbbHcc_both_Aplanarity__694->SetBinContent(15,44);
   VbbHcc_both_Aplanarity__694->SetBinContent(16,34);
   VbbHcc_both_Aplanarity__694->SetBinContent(17,19);
   VbbHcc_both_Aplanarity__694->SetBinContent(18,13);
   VbbHcc_both_Aplanarity__694->SetBinContent(19,8);
   VbbHcc_both_Aplanarity__694->SetBinContent(20,1);
   VbbHcc_both_Aplanarity__694->SetEntries(102067);

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
   117856.3,
   33101.54,
   18395.46,
   7250.022,
   6237.752,
   4266.92,
   3159.416,
   1414.561,
   945.8766,
   569.6845,
   735.2771,
   80.29136,
   120.5282,
   110.7629,
   40.19667,
   7.657841,
   10.67631,
   6.643557,
   1.855105,
   0.9679525,
   0.2142311,
   0.1147529,
   0,
   0.06964491,
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
   5885.7,
   2932.156,
   2560.903,
   958.6754,
   1641.215,
   862.0288,
   1497.213,
   473.2527,
   386.5162,
   275.1319,
   383.0686,
   24.50587,
   40.39871,
   35.41489,
   22.6646,
   0.827763,
   5.914396,
   3.575315,
   0.3483238,
   0.2526593,
   0.1083984,
   0.08224943,
   0,
   0.06964491,
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
   Graph_Graph_from_VbbHcc_both_Aplanarity1505->SetMaximum(136116.2);
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
   data_mc_ratio__695->SetBinContent(1,0.5325384);
   data_mc_ratio__695->SetBinContent(2,0.5388571);
   data_mc_ratio__695->SetBinContent(3,0.4601136);
   data_mc_ratio__695->SetBinContent(4,0.6371015);
   data_mc_ratio__695->SetBinContent(5,0.4589794);
   data_mc_ratio__695->SetBinContent(6,0.4293496);
   data_mc_ratio__695->SetBinContent(7,0.3700051);
   data_mc_ratio__695->SetBinContent(8,0.5712021);
   data_mc_ratio__695->SetBinContent(9,0.5835857);
   data_mc_ratio__695->SetBinContent(10,0.6793234);
   data_mc_ratio__695->SetBinContent(11,0.3631284);
   data_mc_ratio__695->SetBinContent(12,2.06747);
   data_mc_ratio__695->SetBinContent(13,0.8296814);
   data_mc_ratio__695->SetBinContent(14,0.6500371);
   data_mc_ratio__695->SetBinContent(15,1.094618);
   data_mc_ratio__695->SetBinContent(16,4.439894);
   data_mc_ratio__695->SetBinContent(17,1.779642);
   data_mc_ratio__695->SetBinContent(18,1.956783);
   data_mc_ratio__695->SetBinContent(19,4.312423);
   data_mc_ratio__695->SetBinContent(20,1.033109);
   data_mc_ratio__695->SetBinError(1,0.002125686);
   data_mc_ratio__695->SetBinError(2,0.004034713);
   data_mc_ratio__695->SetBinError(3,0.005001235);
   data_mc_ratio__695->SetBinError(4,0.009374209);
   data_mc_ratio__695->SetBinError(5,0.008577931);
   data_mc_ratio__695->SetBinError(6,0.01003109);
   data_mc_ratio__695->SetBinError(7,0.01082182);
   data_mc_ratio__695->SetBinError(8,0.02009482);
   data_mc_ratio__695->SetBinError(9,0.02483906);
   data_mc_ratio__695->SetBinError(10,0.03453195);
   data_mc_ratio__695->SetBinError(11,0.0222231);
   data_mc_ratio__695->SetBinError(12,0.1604668);
   data_mc_ratio__695->SetBinError(13,0.08296814);
   data_mc_ratio__695->SetBinError(14,0.07660761);
   data_mc_ratio__695->SetBinError(15,0.1650199);
   data_mc_ratio__695->SetBinError(16,0.7614355);
   data_mc_ratio__695->SetBinError(17,0.4082778);
   data_mc_ratio__695->SetBinError(18,0.542714);
   data_mc_ratio__695->SetBinError(19,1.524672);
   data_mc_ratio__695->SetBinError(20,1.033109);
   data_mc_ratio__695->SetMinimum(0.4);
   data_mc_ratio__695->SetMaximum(1.6);
   data_mc_ratio__695->SetEntries(64.70751);
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
   0.04993963,
   0.08858063,
   0.1392139,
   0.1322307,
   0.26311,
   0.202026,
   0.4738893,
   0.3345581,
   0.4086328,
   0.4829548,
   0.5209854,
   0.3052118,
   0.3351805,
   0.319736,
   0.5638427,
   0.1080935,
   0.553974,
   0.5381627,
   0.187765,
   0.2610245,
   0.505988,
   0.7167524,
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
