#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenC_signal_17()
{
//=========Macro generated from canvas: GenJet_cuts_nGenC_signal_17/GenJet_cuts_nGenC_signal_17
//=========  (Thu Mar  9 15:52:37 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenC_signal_17 = new TCanvas("GenJet_cuts_nGenC_signal_17", "GenJet_cuts_nGenC_signal_17",0,0,600,600);
   GenJet_cuts_nGenC_signal_17->SetHighLightColor(2);
   GenJet_cuts_nGenC_signal_17->Range(-4.867058,-79.2862,22.93266,581.4322);
   GenJet_cuts_nGenC_signal_17->SetFillColor(0);
   GenJet_cuts_nGenC_signal_17->SetFillStyle(4000);
   GenJet_cuts_nGenC_signal_17->SetBorderMode(0);
   GenJet_cuts_nGenC_signal_17->SetBorderSize(2);
   GenJet_cuts_nGenC_signal_17->SetLeftMargin(0.15709);
   GenJet_cuts_nGenC_signal_17->SetRightMargin(0.1234783);
   GenJet_cuts_nGenC_signal_17->SetBottomMargin(0.12);
   GenJet_cuts_nGenC_signal_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenC_signal_17->SetFrameBorderMode(0);
   GenJet_cuts_nGenC_signal_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenC_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(515.3603);
   
   TH1F *st_stack_93 = new TH1F("st_stack_93","",20,-0.5,19.5);
   st_stack_93->SetMinimum(0);
   st_stack_93->SetMaximum(515.3603);
   st_stack_93->SetDirectory(0);
   st_stack_93->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_93->SetLineColor(ci);
   st_stack_93->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_93->GetXaxis()->SetLabelFont(42);
   st_stack_93->GetXaxis()->SetTitleOffset(1);
   st_stack_93->GetXaxis()->SetTitleFont(42);
   st_stack_93->GetYaxis()->SetTitle("Event/1.0");
   st_stack_93->GetYaxis()->SetLabelFont(42);
   st_stack_93->GetYaxis()->SetTitleSize(0.037);
   st_stack_93->GetYaxis()->SetTitleFont(42);
   st_stack_93->GetZaxis()->SetLabelFont(42);
   st_stack_93->GetZaxis()->SetTitleOffset(1);
   st_stack_93->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_93);
   
   
   TH1D *GenJet_cuts_nGenC_stack_1 = new TH1D("GenJet_cuts_nGenC_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenC_stack_1->SetBinContent(1,172.2276);
   GenJet_cuts_nGenC_stack_1->SetBinContent(2,376.6656);
   GenJet_cuts_nGenC_stack_1->SetBinContent(3,225.9097);
   GenJet_cuts_nGenC_stack_1->SetBinContent(4,36.36214);
   GenJet_cuts_nGenC_stack_1->SetBinContent(5,8.595899);
   GenJet_cuts_nGenC_stack_1->SetBinContent(6,0.3181996);
   GenJet_cuts_nGenC_stack_1->SetBinContent(7,0.02214147);
   GenJet_cuts_nGenC_stack_1->SetBinError(1,0.5858898);
   GenJet_cuts_nGenC_stack_1->SetBinError(2,0.8544542);
   GenJet_cuts_nGenC_stack_1->SetBinError(3,0.6601758);
   GenJet_cuts_nGenC_stack_1->SetBinError(4,0.2628387);
   GenJet_cuts_nGenC_stack_1->SetBinError(5,0.1284468);
   GenJet_cuts_nGenC_stack_1->SetBinError(6,0.02422028);
   GenJet_cuts_nGenC_stack_1->SetBinError(7,0.006285972);
   GenJet_cuts_nGenC_stack_1->SetEntries(499112);

   ci = TColor::GetColor("#cc0000");
   GenJet_cuts_nGenC_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenC_stack_1,"");
   
   TH1D *GenJet_cuts_nGenC_stack_2 = new TH1D("GenJet_cuts_nGenC_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenC_stack_2->SetBinContent(1,7.100824);
   GenJet_cuts_nGenC_stack_2->SetBinContent(2,51.08352);
   GenJet_cuts_nGenC_stack_2->SetBinContent(3,42.05241);
   GenJet_cuts_nGenC_stack_2->SetBinContent(4,9.861356);
   GenJet_cuts_nGenC_stack_2->SetBinContent(5,3.408342);
   GenJet_cuts_nGenC_stack_2->SetBinContent(6,0.1764539);
   GenJet_cuts_nGenC_stack_2->SetBinContent(7,0.009993659);
   GenJet_cuts_nGenC_stack_2->SetBinError(1,0.04076441);
   GenJet_cuts_nGenC_stack_2->SetBinError(2,0.1108014);
   GenJet_cuts_nGenC_stack_2->SetBinError(3,0.1006345);
   GenJet_cuts_nGenC_stack_2->SetBinError(4,0.04875855);
   GenJet_cuts_nGenC_stack_2->SetBinError(5,0.02867912);
   GenJet_cuts_nGenC_stack_2->SetBinError(6,0.006491527);
   GenJet_cuts_nGenC_stack_2->SetBinError(7,0.001540993);
   GenJet_cuts_nGenC_stack_2->SetEntries(495010);

   ci = TColor::GetColor("#00cc00");
   GenJet_cuts_nGenC_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenC_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenC_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenC_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenC_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenC_signal_17->Modified();
   GenJet_cuts_nGenC_signal_17->cd();
   GenJet_cuts_nGenC_signal_17->SetSelected(GenJet_cuts_nGenC_signal_17);
}
