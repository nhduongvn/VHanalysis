void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Aug 10 12:20:17 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(0,0,1,1);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetFillStyle(4000);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetFrameFillStyle(1000);
   Aplanarity_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.908904,1.052419,13.84817);
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
   st->SetMaximum(3.998299e+11);
   
   TH1F *st_stack_61 = new TH1F("st_stack_61","",50,0,1);
   st_stack_61->SetMinimum(0.001281897);
   st_stack_61->SetMaximum(1.487517e+12);
   st_stack_61->SetDirectory(0);
   st_stack_61->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_61->SetLineColor(ci);
   st_stack_61->GetXaxis()->SetRange(1,50);
   st_stack_61->GetXaxis()->SetLabelFont(42);
   st_stack_61->GetXaxis()->SetLabelSize(0.035);
   st_stack_61->GetXaxis()->SetTitleSize(0.035);
   st_stack_61->GetXaxis()->SetTitleFont(42);
   st_stack_61->GetYaxis()->SetTitle("Events/0.02");
   st_stack_61->GetYaxis()->SetLabelFont(42);
   st_stack_61->GetYaxis()->SetLabelSize(0.05);
   st_stack_61->GetYaxis()->SetTitleSize(0.057);
   st_stack_61->GetYaxis()->SetTitleOffset(1.2);
   st_stack_61->GetYaxis()->SetTitleFont(42);
   st_stack_61->GetZaxis()->SetLabelFont(42);
   st_stack_61->GetZaxis()->SetLabelSize(0.035);
   st_stack_61->GetZaxis()->SetTitleSize(0.035);
   st_stack_61->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_61);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,151880.4);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,26195.76);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,3588.749);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,949.4377);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,156.791);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,111.6043);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,118.4749);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,48.34077);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,59.90658);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,4.399252);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,32.01838);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,7086.86);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,4167.264);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,816.2263);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,326.6222);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,43.70352);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,39.22759);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,47.0078);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,26.17841);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,37.81612);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,3.328382);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,26.54634);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(9435);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,589.7522);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,75.30682);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,21.90621);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,9.567767);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,3.590555);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,1.606236);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,2.25905);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.4176743);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.4609641);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.05137638);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.10421);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.05058542);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,10.40302);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,3.619544);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,1.912979);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.347276);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.7755309);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.4133156);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.7313315);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.1483565);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.2799155);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.05137638);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.07387695);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.05058542);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(9214);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_3 = new TH1D("VbbHcc_tags_Aplanarity_stack_3","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(1,11726.38);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(2,1756.594);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(3,476.6547);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(4,172.7946);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(5,80.93426);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(6,39.55713);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(7,23.96158);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(8,11.35179);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(9,7.559199);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(10,4.231685);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(11,3.191136);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(12,1.580174);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(13,1.18858);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(14,0.8990212);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(15,0.7382667);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(16,0.2076928);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(17,0.06131771);
   VbbHcc_tags_Aplanarity_stack_3->SetBinContent(18,0.2190971);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(1,28.59968);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(2,11.03568);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(3,5.734705);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(4,3.4457);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(5,2.341083);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(6,1.640453);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(7,1.278136);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(8,0.8750996);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(9,0.7129468);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(10,0.5481709);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(11,0.4630586);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(12,0.3311733);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(13,0.2726001);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(14,0.2430513);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(15,0.2266291);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(16,0.1207512);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(17,0.06131771);
   VbbHcc_tags_Aplanarity_stack_3->SetBinError(18,0.1291257);
   VbbHcc_tags_Aplanarity_stack_3->SetEntries(221451);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,1811.71);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,232.1389);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,60.10672);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,14.82192);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,7.109309);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,3.01509);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,2.632551);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.408228);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,0.5411026);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,0.374793);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.06273751);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.1497339);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.08936341);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(14,0.07001007);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,32.79959);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,15.02033);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,7.844825);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,1.590892);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,1.190862);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,0.647878);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.7061086);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.5208294);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,0.2049631);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,0.1680429);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.06273751);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.1061714);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.08936341);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(14,0.07001007);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(14977);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_5 = new TH1D("VbbHcc_tags_Aplanarity_stack_5","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(1,175.0645);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(2,15.8853);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(3,3.368492);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(4,0.9411881);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(5,0.8183688);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(6,1.306482);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(7,0.2652507);
   VbbHcc_tags_Aplanarity_stack_5->SetBinContent(11,0.01324415);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(1,12.76399);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(2,2.583386);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(3,1.211697);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(4,0.2556991);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(5,0.318113);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(6,0.9165215);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(7,0.1947877);
   VbbHcc_tags_Aplanarity_stack_5->SetBinError(11,0.009378829);
   VbbHcc_tags_Aplanarity_stack_5->SetEntries(3105);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_6 = new TH1D("VbbHcc_tags_Aplanarity_stack_6","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(1,1.250872);
   VbbHcc_tags_Aplanarity_stack_6->SetBinContent(2,0.2976093);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(1,0.4218659);
   VbbHcc_tags_Aplanarity_stack_6->SetBinError(2,0.2105503);
   VbbHcc_tags_Aplanarity_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_7 = new TH1D("VbbHcc_tags_Aplanarity_stack_7","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(1,5.033228);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(2,0.3545757);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(3,0.1159231);
   VbbHcc_tags_Aplanarity_stack_7->SetBinContent(8,0.1075422);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(1,0.7703853);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(2,0.2050941);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(3,0.1159231);
   VbbHcc_tags_Aplanarity_stack_7->SetBinError(8,0.1075422);
   VbbHcc_tags_Aplanarity_stack_7->SetEntries(48);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_8 = new TH1D("VbbHcc_tags_Aplanarity_stack_8","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(1,38.97859);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(2,3.974212);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(3,1.065438);
   VbbHcc_tags_Aplanarity_stack_8->SetBinContent(4,1.321361);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(1,3.215542);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(2,1.02918);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(3,0.5333364);
   VbbHcc_tags_Aplanarity_stack_8->SetBinError(4,0.5917934);
   VbbHcc_tags_Aplanarity_stack_8->SetEntries(173);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,36.50431);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,3.046516);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.5494206);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.1678809);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.06663592);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.04805155);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.02377648);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.01798631);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.01183186);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.002838901);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.004494474);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(17,0.003086402);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.2382825);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.06849722);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.02894776);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.01589484);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.01003075);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.008441387);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.006030354);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.005206386);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.004185367);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.002007551);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.002597041);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(17,0.002183184);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(28234);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,16.29614);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,1.720967);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.3955333);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.1478424);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.05499292);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.02931423);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.01955485);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.009386947);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.008831307);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.005419196);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.001936024);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.001597147);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.00186611);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.0008408873);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0003736148);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0003933387);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.000389678);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.001263209);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.0794619);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.02580349);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.01234875);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.007518959);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.004588381);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.003352949);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.002736723);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.001884153);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.001848582);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.001453606);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.0008743362);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.000800525);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.0008346626);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0005946027);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0003736148);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0003933387);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.000389678);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.0007293605);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_11 = new TH1D("VbbHcc_tags_Aplanarity_stack_11","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(1,0.09624535);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(2,0.005581595);
   VbbHcc_tags_Aplanarity_stack_11->SetBinContent(3,0.002869221);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(1,0.01679373);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(2,0.003950335);
   VbbHcc_tags_Aplanarity_stack_11->SetBinError(3,0.002869221);
   VbbHcc_tags_Aplanarity_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_12 = new TH1D("VbbHcc_tags_Aplanarity_stack_12","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(1,0.04214121);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(2,0.003684512);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(3,0.001008715);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(4,0.0007666248);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(5,0.0003223444);
   VbbHcc_tags_Aplanarity_stack_12->SetBinContent(8,0.000139198);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(1,0.004029587);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(2,0.001172799);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(3,0.0005847566);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(4,0.0005421055);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(5,0.0003223444);
   VbbHcc_tags_Aplanarity_stack_12->SetBinError(8,0.000139198);
   VbbHcc_tags_Aplanarity_stack_12->SetEntries(127);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Aplanarity__166 = new TH1D("VbbHcc_tags_Aplanarity__166","",50,0,1);
   VbbHcc_tags_Aplanarity__166->SetBinContent(1,81809);
   VbbHcc_tags_Aplanarity__166->SetBinContent(2,10171);
   VbbHcc_tags_Aplanarity__166->SetBinContent(3,2925);
   VbbHcc_tags_Aplanarity__166->SetBinContent(4,1093);
   VbbHcc_tags_Aplanarity__166->SetBinContent(5,534);
   VbbHcc_tags_Aplanarity__166->SetBinContent(6,258);
   VbbHcc_tags_Aplanarity__166->SetBinContent(7,152);
   VbbHcc_tags_Aplanarity__166->SetBinContent(8,80);
   VbbHcc_tags_Aplanarity__166->SetBinContent(9,70);
   VbbHcc_tags_Aplanarity__166->SetBinContent(10,34);
   VbbHcc_tags_Aplanarity__166->SetBinContent(11,20);
   VbbHcc_tags_Aplanarity__166->SetBinContent(12,19);
   VbbHcc_tags_Aplanarity__166->SetBinContent(13,9);
   VbbHcc_tags_Aplanarity__166->SetBinContent(14,4);
   VbbHcc_tags_Aplanarity__166->SetBinContent(15,4);
   VbbHcc_tags_Aplanarity__166->SetBinContent(16,1);
   VbbHcc_tags_Aplanarity__166->SetBinContent(17,2);
   VbbHcc_tags_Aplanarity__166->SetEntries(97234);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity__166->SetLineColor(ci);
   VbbHcc_tags_Aplanarity__166->SetLineWidth(2);
   VbbHcc_tags_Aplanarity__166->SetMarkerStyle(20);
   VbbHcc_tags_Aplanarity__166->SetMarkerSize(1.2);
   VbbHcc_tags_Aplanarity__166->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity__166->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__166->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__166->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__166->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__166->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__166->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__166->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__166->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity__166->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__166->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__166->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity__166->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity__166->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__166->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fx1121[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fy1121[50] = {
   166281.5,
   28285.09,
   4152.915,
   1149.201,
   249.3654,
   157.1666,
   147.6366,
   61.65352,
   68.48851,
   9.065364,
   35.39614,
   1.731505,
   1.330395,
   0.9698722,
   0.7386403,
   0.2080862,
   0.06479379,
   0.2203603,
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
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fex1121[50] = {
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
   Double_t Graph_from_VbbHcc_tags_Aplanarity_fey1121[50] = {
   7087.013,
   4167.308,
   816.2875,
   326.6476,
   43.7904,
   39.28009,
   47.03657,
   26.19885,
   37.82443,
   3.377795,
   26.55056,
   0.3477769,
   0.2913009,
   0.2529342,
   0.2266294,
   0.1207518,
   0.0613578,
   0.1291278,
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
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_tags_Aplanarity_fx1121,Graph_from_VbbHcc_tags_Aplanarity_fy1121,Graph_from_VbbHcc_tags_Aplanarity_fex1121,Graph_from_VbbHcc_tags_Aplanarity_fey1121);
   gre->SetName("Graph_from_VbbHcc_tags_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Aplanarity1121 = new TH1F("Graph_Graph_from_VbbHcc_tags_Aplanarity1121","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetMinimum(190.7053);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetMaximum(190705.3);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Aplanarity1121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Aplanarity1121);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Aplanarity","MC unc. (stat.)","fl");

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
   Aplanarity_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__167 = new TH1D("data_mc_ratio__167","",50,0,1);
   data_mc_ratio__167->SetBinContent(1,0.4919911);
   data_mc_ratio__167->SetBinContent(2,0.3595887);
   data_mc_ratio__167->SetBinContent(3,0.7043246);
   data_mc_ratio__167->SetBinContent(4,0.9510956);
   data_mc_ratio__167->SetBinContent(5,2.141436);
   data_mc_ratio__167->SetBinContent(6,1.64157);
   data_mc_ratio__167->SetBinContent(7,1.029555);
   data_mc_ratio__167->SetBinContent(8,1.297574);
   data_mc_ratio__167->SetBinContent(9,1.022069);
   data_mc_ratio__167->SetBinContent(10,3.750539);
   data_mc_ratio__167->SetBinContent(11,0.5650334);
   data_mc_ratio__167->SetBinContent(12,10.97311);
   data_mc_ratio__167->SetBinContent(13,6.764908);
   data_mc_ratio__167->SetBinContent(14,4.124255);
   data_mc_ratio__167->SetBinContent(15,5.415356);
   data_mc_ratio__167->SetBinContent(16,4.805702);
   data_mc_ratio__167->SetBinContent(17,30.86715);
   data_mc_ratio__167->SetBinError(1,0.001720112);
   data_mc_ratio__167->SetBinError(2,0.003565531);
   data_mc_ratio__167->SetBinError(3,0.01302297);
   data_mc_ratio__167->SetBinError(4,0.02876829);
   data_mc_ratio__167->SetBinError(5,0.09266899);
   data_mc_ratio__167->SetBinError(6,0.1021997);
   data_mc_ratio__167->SetBinError(7,0.08350791);
   data_mc_ratio__167->SetBinError(8,0.1450732);
   data_mc_ratio__167->SetBinError(9,0.1221606);
   data_mc_ratio__167->SetBinError(10,0.6432121);
   data_mc_ratio__167->SetBinError(11,0.1263453);
   data_mc_ratio__167->SetBinError(12,2.517405);
   data_mc_ratio__167->SetBinError(13,2.254969);
   data_mc_ratio__167->SetBinError(14,2.062127);
   data_mc_ratio__167->SetBinError(15,2.707678);
   data_mc_ratio__167->SetBinError(16,4.805702);
   data_mc_ratio__167->SetBinError(17,21.82637);
   data_mc_ratio__167->SetMinimum(0.4);
   data_mc_ratio__167->SetMaximum(1.6);
   data_mc_ratio__167->SetEntries(4.226374);
   data_mc_ratio__167->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__167->SetLineColor(ci);
   data_mc_ratio__167->SetLineWidth(2);
   data_mc_ratio__167->SetMarkerStyle(20);
   data_mc_ratio__167->SetMarkerSize(1.2);
   data_mc_ratio__167->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__167->GetXaxis()->SetRange(1,50);
   data_mc_ratio__167->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__167->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__167->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__167->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__167->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__167->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__167->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__167->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__167->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__167->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__167->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__167->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__167->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__167->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__167->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__167->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__167->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1122[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1122[50] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1122[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1122[50] = {
   0.04262058,
   0.1473323,
   0.1965577,
   0.2842389,
   0.1756074,
   0.2499265,
   0.3185968,
   0.4249368,
   0.5522741,
   0.3726045,
   0.7500976,
   0.2008524,
   0.2189582,
   0.2607913,
   0.3068197,
   0.5802972,
   0.9469704,
   0.5859848,
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
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1122,Graph_from_mc_statistical_error_fy1122,Graph_from_mc_statistical_error_fex1122,Graph_from_mc_statistical_error_fey1122);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1122 = new TH1F("Graph_Graph_from_mc_statistical_error1122","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1122->SetMinimum(0.04772664);
   Graph_Graph_from_mc_statistical_error1122->SetMaximum(2.136364);
   Graph_Graph_from_mc_statistical_error1122->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1122->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1122->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1122->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1122->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1122->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1122->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1122);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
