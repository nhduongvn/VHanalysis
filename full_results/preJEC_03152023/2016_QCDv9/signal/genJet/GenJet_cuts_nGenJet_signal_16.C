#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenJet_signal_16()
{
//=========Macro generated from canvas: GenJet_cuts_nGenJet_signal_16/GenJet_cuts_nGenJet_signal_16
//=========  (Thu Mar  9 15:52:37 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenJet_signal_16 = new TCanvas("GenJet_cuts_nGenJet_signal_16", "GenJet_cuts_nGenJet_signal_16",0,0,600,600);
   GenJet_cuts_nGenJet_signal_16->SetHighLightColor(2);
   GenJet_cuts_nGenJet_signal_16->Range(-4.867058,-44.46358,22.93266,326.0663);
   GenJet_cuts_nGenJet_signal_16->SetFillColor(0);
   GenJet_cuts_nGenJet_signal_16->SetFillStyle(4000);
   GenJet_cuts_nGenJet_signal_16->SetBorderMode(0);
   GenJet_cuts_nGenJet_signal_16->SetBorderSize(2);
   GenJet_cuts_nGenJet_signal_16->SetLeftMargin(0.15709);
   GenJet_cuts_nGenJet_signal_16->SetRightMargin(0.1234783);
   GenJet_cuts_nGenJet_signal_16->SetBottomMargin(0.12);
   GenJet_cuts_nGenJet_signal_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenJet_signal_16->SetFrameBorderMode(0);
   GenJet_cuts_nGenJet_signal_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenJet_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(289.0133);
   
   TH1F *st_stack_73 = new TH1F("st_stack_73","",20,-0.5,19.5);
   st_stack_73->SetMinimum(0);
   st_stack_73->SetMaximum(289.0133);
   st_stack_73->SetDirectory(0);
   st_stack_73->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_73->SetLineColor(ci);
   st_stack_73->GetXaxis()->SetTitle("Gen Jet multiplicity");
   st_stack_73->GetXaxis()->SetLabelFont(42);
   st_stack_73->GetXaxis()->SetTitleOffset(1);
   st_stack_73->GetXaxis()->SetTitleFont(42);
   st_stack_73->GetYaxis()->SetTitle("Event/1.0");
   st_stack_73->GetYaxis()->SetLabelFont(42);
   st_stack_73->GetYaxis()->SetTitleSize(0.037);
   st_stack_73->GetYaxis()->SetTitleFont(42);
   st_stack_73->GetZaxis()->SetLabelFont(42);
   st_stack_73->GetZaxis()->SetTitleOffset(1);
   st_stack_73->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_73);
   
   
   TH1D *GenJet_cuts_nGenJet_stack_1 = new TH1D("GenJet_cuts_nGenJet_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(1,75.54872);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(2,139.2727);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(3,218.6277);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(4,148.5092);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(5,65.82897);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(6,17.75973);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(7,4.568411);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(8,1.222957);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(9,0.2594741);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(10,0.06772363);
   GenJet_cuts_nGenJet_stack_1->SetBinContent(11,0.009006909);
   GenJet_cuts_nGenJet_stack_1->SetBinError(1,0.4992472);
   GenJet_cuts_nGenJet_stack_1->SetBinError(2,0.662296);
   GenJet_cuts_nGenJet_stack_1->SetBinError(3,0.8231865);
   GenJet_cuts_nGenJet_stack_1->SetBinError(4,0.6743706);
   GenJet_cuts_nGenJet_stack_1->SetBinError(5,0.445685);
   GenJet_cuts_nGenJet_stack_1->SetBinError(6,0.2285189);
   GenJet_cuts_nGenJet_stack_1->SetBinError(7,0.115447);
   GenJet_cuts_nGenJet_stack_1->SetBinError(8,0.05954685);
   GenJet_cuts_nGenJet_stack_1->SetBinError(9,0.02732327);
   GenJet_cuts_nGenJet_stack_1->SetBinError(10,0.01391905);
   GenJet_cuts_nGenJet_stack_1->SetBinError(11,0.004797552);
   GenJet_cuts_nGenJet_stack_1->SetEntries(249005);

   ci = TColor::GetColor("#cc0000");
   GenJet_cuts_nGenJet_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenJet_stack_1,"");
   
   TH1D *GenJet_cuts_nGenJet_stack_2 = new TH1D("GenJet_cuts_nGenJet_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(1,1.028502);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(2,5.755231);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(3,21.25337);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(4,29.79058);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(5,22.77679);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(6,9.22849);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(7,2.61759);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(8,0.576569);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(9,0.1044875);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(10,0.02346363);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(11,0.003024629);
   GenJet_cuts_nGenJet_stack_2->SetBinContent(12,0.000383191);
   GenJet_cuts_nGenJet_stack_2->SetBinError(1,0.01962476);
   GenJet_cuts_nGenJet_stack_2->SetBinError(2,0.04644815);
   GenJet_cuts_nGenJet_stack_2->SetBinError(3,0.09007682);
   GenJet_cuts_nGenJet_stack_2->SetBinError(4,0.1068024);
   GenJet_cuts_nGenJet_stack_2->SetBinError(5,0.09340466);
   GenJet_cuts_nGenJet_stack_2->SetBinError(6,0.05939039);
   GenJet_cuts_nGenJet_stack_2->SetBinError(7,0.0316048);
   GenJet_cuts_nGenJet_stack_2->SetBinError(8,0.01481457);
   GenJet_cuts_nGenJet_stack_2->SetBinError(9,0.006277253);
   GenJet_cuts_nGenJet_stack_2->SetBinError(10,0.002946943);
   GenJet_cuts_nGenJet_stack_2->SetBinError(11,0.001071048);
   GenJet_cuts_nGenJet_stack_2->SetBinError(12,0.000383191);
   GenJet_cuts_nGenJet_stack_2->SetEntries(248576);

   ci = TColor::GetColor("#00cc00");
   GenJet_cuts_nGenJet_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenJet_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenJet_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenJet_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenJet_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenJet_stack_1","ZHcc","F");

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
   GenJet_cuts_nGenJet_signal_16->Modified();
   GenJet_cuts_nGenJet_signal_16->cd();
   GenJet_cuts_nGenJet_signal_16->SetSelected(GenJet_cuts_nGenJet_signal_16);
}
