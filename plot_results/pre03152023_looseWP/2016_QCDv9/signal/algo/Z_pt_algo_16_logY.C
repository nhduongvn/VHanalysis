#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_algo_16_logY()
{
//=========Macro generated from canvas: Z_pt_algo_16/Z_pt_algo_16
//=========  (Fri Mar 10 11:27:13 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_algo_16 = new TCanvas("Z_pt_algo_16", "Z_pt_algo_16",0,0,600,600);
   Z_pt_algo_16->SetHighLightColor(2);
   Z_pt_algo_16->Range(37.97653,-0.1987672,1705.96,0.6356089);
   Z_pt_algo_16->SetFillColor(0);
   Z_pt_algo_16->SetFillStyle(4000);
   Z_pt_algo_16->SetBorderMode(0);
   Z_pt_algo_16->SetBorderSize(2);
   Z_pt_algo_16->SetLogy();
   Z_pt_algo_16->SetLeftMargin(0.15709);
   Z_pt_algo_16->SetRightMargin(0.1234783);
   Z_pt_algo_16->SetBottomMargin(0.12);
   Z_pt_algo_16->SetFrameFillStyle(1000);
   Z_pt_algo_16->SetFrameBorderMode(0);
   Z_pt_algo_16->SetFrameFillStyle(1000);
   Z_pt_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(3.235865);
   
   TH1F *st_stack_73 = new TH1F("st_stack_73","",40,0,2000);
   st_stack_73->SetMinimum(0.7968158);
   st_stack_73->SetMaximum(3.565917);
   st_stack_73->SetDirectory(0);
   st_stack_73->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_73->SetLineColor(ci);
   st_stack_73->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_73->GetXaxis()->SetRange(7,30);
   st_stack_73->GetXaxis()->SetLabelFont(42);
   st_stack_73->GetXaxis()->SetTitleOffset(1);
   st_stack_73->GetXaxis()->SetTitleFont(42);
   st_stack_73->GetYaxis()->SetTitle("Event/50.0 GeV");
   st_stack_73->GetYaxis()->SetLabelFont(42);
   st_stack_73->GetYaxis()->SetTitleSize(0.037);
   st_stack_73->GetYaxis()->SetTitleFont(42);
   st_stack_73->GetZaxis()->SetLabelFont(42);
   st_stack_73->GetZaxis()->SetTitleOffset(1);
   st_stack_73->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_73);
   
   
   TH1D *VbbHcc_algo_Z_pt_stack_1 = new TH1D("VbbHcc_algo_Z_pt_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(1,0.5419566);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(2,1.838489);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(3,2.685768);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(4,1.671829);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(5,1.041541);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(6,0.5395598);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(7,0.3579141);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(8,0.2257906);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(9,0.1056789);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(10,0.06270439);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(11,0.02794238);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(12,0.02422675);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(13,0.01491606);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(14,0.006752455);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(15,0.00263971);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(17,0.006026326);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(1,0.03934769);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(2,0.07454987);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(3,0.09022078);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(4,0.07112441);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(5,0.05690902);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(6,0.04119253);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(7,0.03315496);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(8,0.02610055);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(9,0.01854814);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(10,0.01410548);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(11,0.008932845);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(12,0.00858038);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(13,0.006680453);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(14,0.004053167);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(15,0.00263971);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(17,0.004261346);
   VbbHcc_algo_Z_pt_stack_1->SetEntries(3307);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_2 = new TH1D("VbbHcc_algo_Z_pt_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(1,0.1855852);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(2,0.5312655);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(3,0.9977342);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(4,0.7789463);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(5,0.4540553);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(6,0.245932);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(7,0.1303768);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(8,0.06036984);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(9,0.02622418);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(10,0.01257298);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(11,0.004514049);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(12,0.003877286);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(13,0.001224925);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(14,0.001569152);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(15,0.0003915395);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(17,0.0003751833);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(22,0.0004083722);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(1,0.008400703);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(2,0.01420819);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(3,0.01954036);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(4,0.01723855);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(5,0.01318989);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(6,0.00968736);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(7,0.007043074);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(8,0.004780253);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(9,0.003167046);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(10,0.002204573);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(11,0.001315303);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(12,0.001228559);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(13,0.000707417);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(14,0.0007487993);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(15,0.0003915395);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(17,0.0003751833);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(22,0.0004083722);
   VbbHcc_algo_Z_pt_stack_2->SetEntries(9173);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_algo_16->Modified();
   Z_pt_algo_16->cd();
   Z_pt_algo_16->SetSelected(Z_pt_algo_16);
}
