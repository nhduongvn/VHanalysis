void nB_medium_jets_all_all()
{
//=========Macro generated from canvas: nB_medium_jets_all_all/nB_medium_jets_all_all
//=========  (Thu Dec 15 10:04:54 2022) by ROOT version 6.14/09
   TCanvas *nB_medium_jets_all_all = new TCanvas("nB_medium_jets_all_all", "nB_medium_jets_all_all",0,0,600,600);
   nB_medium_jets_all_all->SetHighLightColor(2);
   nB_medium_jets_all_all->Range(-2.683529,-333.2881,11.21633,2444.112);
   nB_medium_jets_all_all->SetFillColor(0);
   nB_medium_jets_all_all->SetFillStyle(4000);
   nB_medium_jets_all_all->SetBorderMode(0);
   nB_medium_jets_all_all->SetBorderSize(2);
   nB_medium_jets_all_all->SetLeftMargin(0.15709);
   nB_medium_jets_all_all->SetRightMargin(0.1234783);
   nB_medium_jets_all_all->SetBottomMargin(0.12);
   nB_medium_jets_all_all->SetFrameFillStyle(1000);
   nB_medium_jets_all_all->SetFrameBorderMode(0);
   nB_medium_jets_all_all->SetFrameFillStyle(1000);
   nB_medium_jets_all_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2063.212);
   
   TH1F *st_stack_64 = new TH1F("st_stack_64","",10,-0.5,9.5);
   st_stack_64->SetMinimum(0);
   st_stack_64->SetMaximum(2166.372);
   st_stack_64->SetDirectory(0);
   st_stack_64->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_64->SetLineColor(ci);
   st_stack_64->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_64->GetXaxis()->SetRange(1,10);
   st_stack_64->GetXaxis()->SetLabelFont(42);
   st_stack_64->GetXaxis()->SetLabelSize(0.035);
   st_stack_64->GetXaxis()->SetTitleSize(0.035);
   st_stack_64->GetXaxis()->SetTitleFont(42);
   st_stack_64->GetYaxis()->SetTitle("Events/1.0");
   st_stack_64->GetYaxis()->SetLabelFont(42);
   st_stack_64->GetYaxis()->SetLabelSize(0.035);
   st_stack_64->GetYaxis()->SetTitleSize(0.037);
   st_stack_64->GetYaxis()->SetTitleOffset(0);
   st_stack_64->GetYaxis()->SetTitleFont(42);
   st_stack_64->GetZaxis()->SetLabelFont(42);
   st_stack_64->GetZaxis()->SetLabelSize(0.035);
   st_stack_64->GetZaxis()->SetTitleSize(0.035);
   st_stack_64->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_64);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_all_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_all_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(1,1223.594);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(2,770.4934);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(3,319.0047);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(4,83.87385);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(5,12.13636);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(6,1.138848);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(7,0.1002292);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinContent(8,0.005163728);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(1,1.643787);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(2,1.297496);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(3,0.8338699);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(4,0.4268628);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(5,0.1613278);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(6,0.04908049);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(7,0.01441167);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetBinError(8,0.003015365);
   VbbHcc_jets_all_nB_medium_all_stack_1->SetEntries(1454659);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nB_medium_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_all_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_all_stack_2 = new TH1D("VbbHcc_jets_all_nB_medium_all_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(1,151.8809);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(2,108.1024);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(3,54.26797);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(4,16.46148);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(5,2.720519);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(6,0.3051718);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(7,0.0255202);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(8,0.002251686);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(9,0.0001892237);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinContent(10,0.0002048819);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(1,0.2108468);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(2,0.1775946);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(3,0.1260912);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(4,0.06941382);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(5,0.02824436);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(6,0.009433147);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(7,0.002652818);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(8,0.0006594925);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(9,0.0001892237);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetBinError(10,0.0002048819);
   VbbHcc_jets_all_nB_medium_all_stack_2->SetEntries(1387055);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nB_medium_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_nB_medium_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_all_all->Modified();
   nB_medium_jets_all_all->cd();
   nB_medium_jets_all_all->SetSelected(nB_medium_jets_all_all);
}
