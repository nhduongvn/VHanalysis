#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_jets_signal_17()
{
//=========Macro generated from canvas: nC_medium_jets_signal_17/nC_medium_jets_signal_17
//=========  (Thu Mar  9 13:30:49 2023) by ROOT version 6.26/06
   TCanvas *nC_medium_jets_signal_17 = new TCanvas("nC_medium_jets_signal_17", "nC_medium_jets_signal_17",0,0,600,600);
   nC_medium_jets_signal_17->SetHighLightColor(2);
   nC_medium_jets_signal_17->Range(-2.683529,-68.98692,11.21633,505.9041);
   nC_medium_jets_signal_17->SetFillColor(0);
   nC_medium_jets_signal_17->SetFillStyle(4000);
   nC_medium_jets_signal_17->SetBorderMode(0);
   nC_medium_jets_signal_17->SetBorderSize(2);
   nC_medium_jets_signal_17->SetLeftMargin(0.15709);
   nC_medium_jets_signal_17->SetRightMargin(0.1234783);
   nC_medium_jets_signal_17->SetBottomMargin(0.12);
   nC_medium_jets_signal_17->SetFrameFillStyle(1000);
   nC_medium_jets_signal_17->SetFrameBorderMode(0);
   nC_medium_jets_signal_17->SetFrameFillStyle(1000);
   nC_medium_jets_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(448.415);
   
   TH1F *st_stack_33 = new TH1F("st_stack_33","",10,-0.5,9.5);
   st_stack_33->SetMinimum(0);
   st_stack_33->SetMaximum(448.415);
   st_stack_33->SetDirectory(0);
   st_stack_33->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_33->SetLineColor(ci);
   st_stack_33->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   st_stack_33->GetXaxis()->SetRange(1,10);
   st_stack_33->GetXaxis()->SetLabelFont(42);
   st_stack_33->GetXaxis()->SetTitleOffset(1);
   st_stack_33->GetXaxis()->SetTitleFont(42);
   st_stack_33->GetYaxis()->SetTitle("Event/1.0");
   st_stack_33->GetYaxis()->SetLabelFont(42);
   st_stack_33->GetYaxis()->SetTitleSize(0.037);
   st_stack_33->GetYaxis()->SetTitleFont(42);
   st_stack_33->GetZaxis()->SetLabelFont(42);
   st_stack_33->GetZaxis()->SetTitleOffset(1);
   st_stack_33->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_33);
   
   
   TH1D *VbbHcc_jets_nC_medium_stack_1 = new TH1D("VbbHcc_jets_nC_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(1,275.2309);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(2,327.186);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(3,168.8857);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(4,42.09312);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(5,6.1492);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(6,0.5080078);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(7,0.04657499);
   VbbHcc_jets_nC_medium_stack_1->SetBinContent(8,0.001685057);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(1,0.7385169);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(2,0.7959946);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(3,0.5690022);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(4,0.2830315);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(5,0.1073099);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(6,0.03023177);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(7,0.009087187);
   VbbHcc_jets_nC_medium_stack_1->SetBinError(8,0.001685057);
   VbbHcc_jets_nC_medium_stack_1->SetEntries(499112);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nC_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nC_medium_stack_2 = new TH1D("VbbHcc_jets_nC_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(1,19.40757);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(2,44.99846);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(3,34.1828);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(4,12.32568);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(5,2.504042);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(6,0.2519754);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(7,0.02114537);
   VbbHcc_jets_nC_medium_stack_2->SetBinContent(8,0.001225461);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(1,0.06810975);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(2,0.1039664);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(3,0.09072314);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(4,0.05445195);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(5,0.02451415);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(6,0.007776701);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(7,0.002247691);
   VbbHcc_jets_nC_medium_stack_2->SetBinError(8,0.0005203988);
   VbbHcc_jets_nC_medium_stack_2->SetEntries(495010);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nC_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nC_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nC_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nC_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nC_medium_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_jets_signal_17->Modified();
   nC_medium_jets_signal_17->cd();
   nC_medium_jets_signal_17->SetSelected(nC_medium_jets_signal_17);
}
