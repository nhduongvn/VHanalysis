#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_all_bckg_16()
{
//=========Macro generated from canvas: nC_medium_jets_all_bckg_16/nC_medium_jets_all_bckg_16
//=========  (Wed Mar  1 14:06:15 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_all_bckg_16 = new TCanvas("nC_medium_jets_all_bckg_16", "nC_medium_jets_all_bckg_16",0,0,600,600);
   nC_medium_jets_all_bckg_16->SetHighLightColor(2);
   nC_medium_jets_all_bckg_16->Range(-2.683529,-1.005799e+11,11.21633,7.375859e+11);
   nC_medium_jets_all_bckg_16->SetFillColor(0);
   nC_medium_jets_all_bckg_16->SetFillStyle(4000);
   nC_medium_jets_all_bckg_16->SetBorderMode(0);
   nC_medium_jets_all_bckg_16->SetBorderSize(2);
   nC_medium_jets_all_bckg_16->SetLeftMargin(0.15709);
   nC_medium_jets_all_bckg_16->SetRightMargin(0.1234783);
   nC_medium_jets_all_bckg_16->SetBottomMargin(0.12);
   nC_medium_jets_all_bckg_16->SetFrameFillStyle(1000);
   nC_medium_jets_all_bckg_16->SetFrameBorderMode(0);
   nC_medium_jets_all_bckg_16->SetFrameFillStyle(1000);
   nC_medium_jets_all_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(6.537693e+11);
   
   TH1F *st_stack_188 = new TH1F("st_stack_188","",10,-0.5,9.5);
   st_stack_188->SetMinimum(0);
   st_stack_188->SetMaximum(6.537693e+11);
   st_stack_188->SetDirectory(0);
   st_stack_188->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_188->SetLineColor(ci);
   st_stack_188->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_188->GetXaxis()->SetRange(1,10);
   st_stack_188->GetXaxis()->SetLabelFont(42);
   st_stack_188->GetXaxis()->SetTitleOffset(1);
   st_stack_188->GetXaxis()->SetTitleFont(42);
   st_stack_188->GetYaxis()->SetTitle("Events/1.0");
   st_stack_188->GetYaxis()->SetLabelFont(42);
   st_stack_188->GetYaxis()->SetTitleSize(0.037);
   st_stack_188->GetYaxis()->SetTitleFont(42);
   st_stack_188->GetZaxis()->SetLabelFont(42);
   st_stack_188->GetZaxis()->SetTitleOffset(1);
   st_stack_188->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_188);
   
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_1 = new TH1D("VbbHcc_jets_all_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(1,4.35843e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(2,4.293005e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(3,2.008236e+11);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(4,6.418759e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(5,1.698059e+10);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(6,4.155157e+09);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(7,9.805253e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(8,2.348312e+08);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(9,5.848775e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(10,1.399277e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinContent(11,4816730);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(1,9.62325e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(2,9.451474e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(3,6.376469e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(4,3.548439e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(5,1.797952e+07);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(6,8796099);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(7,4242987);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(8,2072838);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(9,1034606);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(10,502717.4);
   VbbHcc_jets_all_nC_medium_stack_1->SetBinError(11,292919.5);
   VbbHcc_jets_all_nC_medium_stack_1->SetEntries(2.421249e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nC_medium_stack_2 = new TH1D("VbbHcc_jets_all_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(1,3196906);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(2,7583431);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(3,8450307);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(4,5934663);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(5,2990715);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(6,1175800);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(7,384881.6);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(8,110648.9);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(9,29285.18);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(10,7337.023);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinContent(11,2399.112);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(1,431.6794);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(2,679.7722);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(3,731.1315);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(4,621.6112);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(5,445.56);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(6,280.7855);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(7,160.8135);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(8,86.00762);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(9,44.0292);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(10,21.8833);
   VbbHcc_jets_all_nC_medium_stack_2->SetBinError(11,12.35382);
   VbbHcc_jets_all_nC_medium_stack_2->SetEntries(5.130375e+08);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_jets_all_nC_medium_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_all_bckg_16->Modified();
   nC_medium_jets_all_bckg_16->cd();
   nC_medium_jets_all_bckg_16->SetSelected(nC_medium_jets_all_bckg_16);
}
