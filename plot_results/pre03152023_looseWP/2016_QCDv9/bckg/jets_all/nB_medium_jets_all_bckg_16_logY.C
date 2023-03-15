#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_bckg_16_logY()
{
//=========Macro generated from canvas: nB_medium_jets_all_bckg_16/nB_medium_jets_all_bckg_16
//=========  (Fri Mar 10 14:09:17 2023) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all_bckg_16 = new TCanvas("nB_medium_jets_all_bckg_16", "nB_medium_jets_all_bckg_16",0,0,600,600);
   nB_medium_jets_all_bckg_16->SetHighLightColor(2);
   nB_medium_jets_all_bckg_16->Range(-2.683529,-1.726352,11.21633,14.19305);
   nB_medium_jets_all_bckg_16->SetFillColor(0);
   nB_medium_jets_all_bckg_16->SetFillStyle(4000);
   nB_medium_jets_all_bckg_16->SetBorderMode(0);
   nB_medium_jets_all_bckg_16->SetBorderSize(2);
   nB_medium_jets_all_bckg_16->SetLogy();
   nB_medium_jets_all_bckg_16->SetLeftMargin(0.15709);
   nB_medium_jets_all_bckg_16->SetRightMargin(0.1234783);
   nB_medium_jets_all_bckg_16->SetBottomMargin(0.12);
   nB_medium_jets_all_bckg_16->SetFrameFillStyle(1000);
   nB_medium_jets_all_bckg_16->SetFrameBorderMode(0);
   nB_medium_jets_all_bckg_16->SetFrameFillStyle(1000);
   nB_medium_jets_all_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1.240033e+12);
   
   TH1F *st_stack_182 = new TH1F("st_stack_182","",10,-0.5,9.5);
   st_stack_182->SetMinimum(1.527483);
   st_stack_182->SetMaximum(3.991277e+12);
   st_stack_182->SetDirectory(0);
   st_stack_182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_182->SetLineColor(ci);
   st_stack_182->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_182->GetXaxis()->SetRange(1,10);
   st_stack_182->GetXaxis()->SetLabelFont(42);
   st_stack_182->GetXaxis()->SetTitleOffset(1);
   st_stack_182->GetXaxis()->SetTitleFont(42);
   st_stack_182->GetYaxis()->SetTitle("Event/1.0");
   st_stack_182->GetYaxis()->SetLabelFont(42);
   st_stack_182->GetYaxis()->SetTitleSize(0.037);
   st_stack_182->GetYaxis()->SetTitleFont(42);
   st_stack_182->GetZaxis()->SetLabelFont(42);
   st_stack_182->GetZaxis()->SetTitleOffset(1);
   st_stack_182->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_182);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(1,1.029224e+12);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(2,1.109485e+11);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(3,1.178777e+10);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(4,5.934396e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(5,2.569086e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(6,727389.5);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(7,15043.03);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(8,110.5171);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(1,1.46788e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(2,4.754761e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(3,1.510354e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(4,3251235);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(5,626782.8);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(6,88692.9);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(7,3134.736);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(8,41.8844);
   VbbHcc_jets_all_nB_medium_stack_1->SetEntries(2.416594e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nB_medium_stack_1->SetFillColor(ci);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_2 = new TH1D("VbbHcc_jets_all_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(1,3283250);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(2,1.191259e+07);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(3,1.215625e+07);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(4,2277861);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(5,220062.8);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(6,15951.46);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(7,1043.653);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(8,69.54372);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(9,6.974514);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(10,0.5366895);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(11,0.2179536);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(1,447.9966);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(2,856.8736);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(3,869.0894);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(4,380.0611);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(5,118.9182);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(6,32.14031);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(7,8.265801);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(8,2.160173);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(9,0.6826137);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(10,0.1923933);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(11,0.1258686);
   VbbHcc_jets_all_nB_medium_stack_2->SetEntries(5.194289e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nB_medium_stack_2->SetFillColor(ci);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   nB_medium_jets_all_bckg_16->Modified();
   nB_medium_jets_all_bckg_16->cd();
   nB_medium_jets_all_bckg_16->SetSelected(nB_medium_jets_all_bckg_16);
}
