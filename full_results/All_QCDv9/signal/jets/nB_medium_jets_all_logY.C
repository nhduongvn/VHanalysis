#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_logY()
{
//=========Macro generated from canvas: nB_medium_jets_all/nB_medium_jets_all
//=========  (Mon Dec 19 11:03:32 2022) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all = new TCanvas("nB_medium_jets_all", "nB_medium_jets_all",0,0,600,600);
   nB_medium_jets_all->SetHighLightColor(2);
   nB_medium_jets_all->Range(-2.683529,-0.2596224,11.21633,6.128642);
   nB_medium_jets_all->SetFillColor(0);
   nB_medium_jets_all->SetFillStyle(4000);
   nB_medium_jets_all->SetBorderMode(0);
   nB_medium_jets_all->SetBorderSize(2);
   nB_medium_jets_all->SetLogy();
   nB_medium_jets_all->SetLeftMargin(0.15709);
   nB_medium_jets_all->SetRightMargin(0.1234783);
   nB_medium_jets_all->SetBottomMargin(0.12);
   nB_medium_jets_all->SetFrameFillStyle(1000);
   nB_medium_jets_all->SetFrameBorderMode(0);
   nB_medium_jets_all->SetFrameFillStyle(1000);
   nB_medium_jets_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(167445);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",10,-0.5,9.5);
   st_stack_20->SetMinimum(3.213434);
   st_stack_20->SetMaximum(308898.3);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_20->GetXaxis()->SetRange(1,10);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetTitleOffset(1);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/1.0");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetTitleSize(0.037);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetTitleOffset(1);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_jets_nB_medium_all_stack_1 = new TH1D("VbbHcc_jets_nB_medium_all_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(1,1494.398);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(2,681.5202);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(3,197.3849);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(4,34.14729);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(5,2.788466);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(6,0.09884325);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinContent(7,0.008208908);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(1,1.817915);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(2,1.217122);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(3,0.6530547);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(4,0.2701173);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(5,0.07663087);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(6,0.0141656);
   VbbHcc_jets_nB_medium_all_stack_1->SetBinError(7,0.003617565);
   VbbHcc_jets_nB_medium_all_stack_1->SetEntries(1454659);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nB_medium_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_nB_medium_all_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_all_stack_1,"");
   
   TH1D *VbbHcc_jets_nB_medium_all_stack_2 = new TH1D("VbbHcc_jets_nB_medium_all_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(1,180.0521);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(2,102.7709);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(3,40.88743);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(4,9.076079);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(5,0.9285408);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(6,0.04853798);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(7,0.002916619);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinContent(9,0.0002048819);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(1,0.2297643);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(2,0.1730659);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(3,0.1092421);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(4,0.05144074);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(5,0.01642381);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(6,0.00370856);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(7,0.0008904135);
   VbbHcc_jets_nB_medium_all_stack_2->SetBinError(9,0.0002048819);
   VbbHcc_jets_nB_medium_all_stack_2->SetEntries(1387055);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nB_medium_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_nB_medium_all_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nB_medium_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_all_stack_1","ZHcc","F");

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
   nB_medium_jets_all->Modified();
   nB_medium_jets_all->cd();
   nB_medium_jets_all->SetSelected(nB_medium_jets_all);
}
