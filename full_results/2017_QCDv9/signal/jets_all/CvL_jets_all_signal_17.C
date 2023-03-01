#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_jets_all_signal_17()
{
//=========Macro generated from canvas: CvL_jets_all_signal_17/CvL_jets_all_signal_17
//=========  (Wed Mar  1 14:06:14 2023) by ROOT version 6.26/06
   TCanvas *CvL_jets_all_signal_17 = new TCanvas("CvL_jets_all_signal_17", "CvL_jets_all_signal_17",0,0,600,600);
   CvL_jets_all_signal_17->SetHighLightColor(2);
   CvL_jets_all_signal_17->Range(-0.2183529,-727.5261,1.171633,5335.191);
   CvL_jets_all_signal_17->SetFillColor(0);
   CvL_jets_all_signal_17->SetFillStyle(4000);
   CvL_jets_all_signal_17->SetBorderMode(0);
   CvL_jets_all_signal_17->SetBorderSize(2);
   CvL_jets_all_signal_17->SetLeftMargin(0.15709);
   CvL_jets_all_signal_17->SetRightMargin(0.1234783);
   CvL_jets_all_signal_17->SetBottomMargin(0.12);
   CvL_jets_all_signal_17->SetFrameFillStyle(1000);
   CvL_jets_all_signal_17->SetFrameBorderMode(0);
   CvL_jets_all_signal_17->SetFrameFillStyle(1000);
   CvL_jets_all_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4728.919);
   
   TH1F *st_stack_171 = new TH1F("st_stack_171","",20,0,1);
   st_stack_171->SetMinimum(0);
   st_stack_171->SetMaximum(4728.919);
   st_stack_171->SetDirectory(0);
   st_stack_171->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_171->SetLineColor(ci);
   st_stack_171->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_171->GetXaxis()->SetRange(1,20);
   st_stack_171->GetXaxis()->SetLabelFont(42);
   st_stack_171->GetXaxis()->SetTitleOffset(1);
   st_stack_171->GetXaxis()->SetTitleFont(42);
   st_stack_171->GetYaxis()->SetTitle("Events/0.05");
   st_stack_171->GetYaxis()->SetLabelFont(42);
   st_stack_171->GetYaxis()->SetTitleSize(0.037);
   st_stack_171->GetYaxis()->SetTitleFont(42);
   st_stack_171->GetZaxis()->SetLabelFont(42);
   st_stack_171->GetZaxis()->SetTitleOffset(1);
   st_stack_171->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_171);
   
   
   TH1D *VbbHcc_jets_all_CvL_stack_1 = new TH1D("VbbHcc_jets_all_CvL_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(1,571.321);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(2,2748.161);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(3,811.4876);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(4,266.3493);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(5,146.3678);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(6,101.6669);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(7,75.76894);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(8,61.61391);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(9,53.7261);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(10,49.56066);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(11,46.54192);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(12,43.99097);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(13,42.85236);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(14,43.3181);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(15,44.75345);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(16,49.04033);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(17,54.80572);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(18,65.64336);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(19,85.12686);
   VbbHcc_jets_all_CvL_stack_1->SetBinContent(20,282.9906);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(1,1.044466);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(2,2.302874);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(3,1.248812);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(4,0.7150675);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(5,0.5305239);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(6,0.441835);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(7,0.3818136);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(8,0.3452455);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(9,0.3218916);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(10,0.3095885);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(11,0.2995121);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(12,0.2911845);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(13,0.2876233);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(14,0.2889147);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(15,0.2935102);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(16,0.3071373);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(17,0.3250601);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(18,0.3562539);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(19,0.4055578);
   VbbHcc_jets_all_CvL_stack_1->SetBinError(20,0.7393204);
   VbbHcc_jets_all_CvL_stack_1->SetEntries(3443220);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CvL_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvL_stack_2 = new TH1D("VbbHcc_jets_all_CvL_stack_2","",20,0,1);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(1,109.4567);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(2,404.4521);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(3,118.9813);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(4,40.26656);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(5,22.29034);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(6,15.5254);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(7,11.85986);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(8,9.488558);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(9,8.388281);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(10,7.666721);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(11,7.392908);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(12,7.108817);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(13,6.927678);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(14,7.003435);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(15,7.418367);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(16,8.315604);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(17,9.398778);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(18,11.50251);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(19,14.90042);
   VbbHcc_jets_all_CvL_stack_2->SetBinContent(20,50.25905);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(1,0.1622669);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(2,0.3109977);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(3,0.168544);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(4,0.09810874);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(5,0.07304753);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(6,0.06096438);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(7,0.05333628);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(8,0.04768331);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(9,0.04484126);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(10,0.0428823);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(11,0.04215998);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(12,0.04135553);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(13,0.0408269);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(14,0.04102637);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(15,0.04226572);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(16,0.04476283);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(17,0.04753077);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(18,0.05263992);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(19,0.05993742);
   VbbHcc_jets_all_CvL_stack_2->SetBinError(20,0.1101252);
   VbbHcc_jets_all_CvL_stack_2->SetEntries(3859299);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CvL_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CvL_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CvL_stack_1","ZHcc","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_all_signal_17->Modified();
   CvL_jets_all_signal_17->cd();
   CvL_jets_all_signal_17->SetSelected(CvL_jets_all_signal_17);
}
