#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenB_signal_17()
{
//=========Macro generated from canvas: GenJet_cuts_nGenB_signal_17/GenJet_cuts_nGenB_signal_17
//=========  (Fri Mar 10 12:49:29 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenB_signal_17 = new TCanvas("GenJet_cuts_nGenB_signal_17", "GenJet_cuts_nGenB_signal_17",0,0,600,600);
   GenJet_cuts_nGenB_signal_17->SetHighLightColor(2);
   GenJet_cuts_nGenB_signal_17->Range(-4.867058,-145.5132,22.93266,1067.097);
   GenJet_cuts_nGenB_signal_17->SetFillColor(0);
   GenJet_cuts_nGenB_signal_17->SetFillStyle(4000);
   GenJet_cuts_nGenB_signal_17->SetBorderMode(0);
   GenJet_cuts_nGenB_signal_17->SetBorderSize(2);
   GenJet_cuts_nGenB_signal_17->SetLeftMargin(0.15709);
   GenJet_cuts_nGenB_signal_17->SetRightMargin(0.1234783);
   GenJet_cuts_nGenB_signal_17->SetBottomMargin(0.12);
   GenJet_cuts_nGenB_signal_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenB_signal_17->SetFrameBorderMode(0);
   GenJet_cuts_nGenB_signal_17->SetFrameFillStyle(1000);
   GenJet_cuts_nGenB_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(945.8358);
   
   TH1F *st_stack_87 = new TH1F("st_stack_87","",20,-0.5,19.5);
   st_stack_87->SetMinimum(0);
   st_stack_87->SetMaximum(945.8358);
   st_stack_87->SetDirectory(0);
   st_stack_87->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_87->SetLineColor(ci);
   st_stack_87->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_87->GetXaxis()->SetLabelFont(42);
   st_stack_87->GetXaxis()->SetTitleOffset(1);
   st_stack_87->GetXaxis()->SetTitleFont(42);
   st_stack_87->GetYaxis()->SetTitle("Event/1.0");
   st_stack_87->GetYaxis()->SetLabelFont(42);
   st_stack_87->GetYaxis()->SetTitleSize(0.037);
   st_stack_87->GetYaxis()->SetTitleFont(42);
   st_stack_87->GetZaxis()->SetLabelFont(42);
   st_stack_87->GetZaxis()->SetTitleOffset(1);
   st_stack_87->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_87);
   
   
   TH1D *GenJet_cuts_nGenB_stack_1 = new TH1D("GenJet_cuts_nGenB_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenB_stack_1->SetBinContent(1,695.4117);
   GenJet_cuts_nGenB_stack_1->SetBinContent(2,95.07926);
   GenJet_cuts_nGenB_stack_1->SetBinContent(3,28.92934);
   GenJet_cuts_nGenB_stack_1->SetBinContent(4,0.6400444);
   GenJet_cuts_nGenB_stack_1->SetBinContent(5,0.03941726);
   GenJet_cuts_nGenB_stack_1->SetBinContent(6,0.001426177);
   GenJet_cuts_nGenB_stack_1->SetBinError(1,1.164313);
   GenJet_cuts_nGenB_stack_1->SetBinError(2,0.4280633);
   GenJet_cuts_nGenB_stack_1->SetBinError(3,0.2350842);
   GenJet_cuts_nGenB_stack_1->SetBinError(4,0.0346593);
   GenJet_cuts_nGenB_stack_1->SetBinError(5,0.008348796);
   GenJet_cuts_nGenB_stack_1->SetBinError(6,0.001426177);
   GenJet_cuts_nGenB_stack_1->SetEntries(499112);

   ci = TColor::GetColor("#cc0000");
   GenJet_cuts_nGenB_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenB_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenB_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenB_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenB_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenB_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenB_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenB_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenB_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenB_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenB_stack_1,"");
   
   TH1D *GenJet_cuts_nGenB_stack_2 = new TH1D("GenJet_cuts_nGenB_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenB_stack_2->SetBinContent(1,89.63202);
   GenJet_cuts_nGenB_stack_2->SetBinContent(2,14.57212);
   GenJet_cuts_nGenB_stack_2->SetBinContent(3,9.250841);
   GenJet_cuts_nGenB_stack_2->SetBinContent(4,0.2167145);
   GenJet_cuts_nGenB_stack_2->SetBinContent(5,0.02056292);
   GenJet_cuts_nGenB_stack_2->SetBinContent(6,0.0006399425);
   GenJet_cuts_nGenB_stack_2->SetBinError(1,0.1467036);
   GenJet_cuts_nGenB_stack_2->SetBinError(2,0.05919655);
   GenJet_cuts_nGenB_stack_2->SetBinError(3,0.04718975);
   GenJet_cuts_nGenB_stack_2->SetBinError(4,0.007230423);
   GenJet_cuts_nGenB_stack_2->SetBinError(5,0.002216564);
   GenJet_cuts_nGenB_stack_2->SetBinError(6,0.0003731646);
   GenJet_cuts_nGenB_stack_2->SetEntries(495010);

   ci = TColor::GetColor("#00cc00");
   GenJet_cuts_nGenB_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenB_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenB_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenB_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenB_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenB_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenB_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenB_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenB_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenB_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenB_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenB_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenB_stack_1","ZHcc","F");

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
   GenJet_cuts_nGenB_signal_17->Modified();
   GenJet_cuts_nGenB_signal_17->cd();
   GenJet_cuts_nGenB_signal_17->SetSelected(GenJet_cuts_nGenB_signal_17);
}
