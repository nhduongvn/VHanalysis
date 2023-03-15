#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenGlu_signal_18_logY()
{
//=========Macro generated from canvas: GenJet_cuts_nGenGlu_signal_18/GenJet_cuts_nGenGlu_signal_18
//=========  (Fri Mar 10 12:49:23 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenGlu_signal_18 = new TCanvas("GenJet_cuts_nGenGlu_signal_18", "GenJet_cuts_nGenGlu_signal_18",0,0,600,600);
   GenJet_cuts_nGenGlu_signal_18->SetHighLightColor(2);
   GenJet_cuts_nGenGlu_signal_18->Range(-4.867058,-0.9930922,22.93266,3.854498);
   GenJet_cuts_nGenGlu_signal_18->SetFillColor(0);
   GenJet_cuts_nGenGlu_signal_18->SetFillStyle(4000);
   GenJet_cuts_nGenGlu_signal_18->SetBorderMode(0);
   GenJet_cuts_nGenGlu_signal_18->SetBorderSize(2);
   GenJet_cuts_nGenGlu_signal_18->SetLogy();
   GenJet_cuts_nGenGlu_signal_18->SetLeftMargin(0.15709);
   GenJet_cuts_nGenGlu_signal_18->SetRightMargin(0.1234783);
   GenJet_cuts_nGenGlu_signal_18->SetBottomMargin(0.12);
   GenJet_cuts_nGenGlu_signal_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenGlu_signal_18->SetFrameBorderMode(0);
   GenJet_cuts_nGenGlu_signal_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenGlu_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(1436.049);
   
   TH1F *st_stack_101 = new TH1F("st_stack_101","",20,-0.5,19.5);
   st_stack_101->SetMinimum(0.3878096);
   st_stack_101->SetMaximum(2342.82);
   st_stack_101->SetDirectory(0);
   st_stack_101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_101->SetLineColor(ci);
   st_stack_101->GetXaxis()->SetTitle("Gen gluon jet multiplicity");
   st_stack_101->GetXaxis()->SetLabelFont(42);
   st_stack_101->GetXaxis()->SetTitleOffset(1);
   st_stack_101->GetXaxis()->SetTitleFont(42);
   st_stack_101->GetYaxis()->SetTitle("Event/1.0");
   st_stack_101->GetYaxis()->SetLabelFont(42);
   st_stack_101->GetYaxis()->SetTitleSize(0.037);
   st_stack_101->GetYaxis()->SetTitleFont(42);
   st_stack_101->GetZaxis()->SetLabelFont(42);
   st_stack_101->GetZaxis()->SetTitleOffset(1);
   st_stack_101->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_101);
   
   
   TH1D *GenJet_cuts_nGenGlu_stack_1 = new TH1D("GenJet_cuts_nGenGlu_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(1,1073.433);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(2,122.1418);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(3,15.2358);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(4,2.237744);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(5,0.3610005);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(6,0.05080131);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(7,0.004842797);
   GenJet_cuts_nGenGlu_stack_1->SetBinContent(8,0.002133138);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(1,1.891482);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(2,0.6118542);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(3,0.2198869);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(4,0.08045335);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(5,0.03182899);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(6,0.01161727);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(7,0.003507551);
   GenJet_cuts_nGenGlu_stack_1->SetBinError(8,0.002133138);
   GenJet_cuts_nGenGlu_stack_1->SetEntries(498953);

   ci = TColor::GetColor("#cc0000");
   GenJet_cuts_nGenGlu_stack_1->SetFillColor(ci);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_1->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_1->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenGlu_stack_1,"");
   
   TH1D *GenJet_cuts_nGenGlu_stack_2 = new TH1D("GenJet_cuts_nGenGlu_stack_2","",20,-0.5,19.5);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(1,118.4884);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(2,40.54948);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(3,7.842884);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(4,1.179556);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(5,0.1419299);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(6,0.02006753);
   GenJet_cuts_nGenGlu_stack_2->SetBinContent(7,0.0009794946);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(1,0.219714);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(2,0.1264888);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(3,0.05552438);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(4,0.02075849);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(5,0.007146719);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(6,0.002721299);
   GenJet_cuts_nGenGlu_stack_2->SetBinError(7,0.000572239);
   GenJet_cuts_nGenGlu_stack_2->SetEntries(493157);

   ci = TColor::GetColor("#00cc00");
   GenJet_cuts_nGenGlu_stack_2->SetFillColor(ci);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetRange(1,20);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_2->GetXaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetYaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetYaxis()->SetTitleFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetZaxis()->SetLabelFont(42);
   GenJet_cuts_nGenGlu_stack_2->GetZaxis()->SetTitleOffset(1);
   GenJet_cuts_nGenGlu_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(GenJet_cuts_nGenGlu_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("GenJet_cuts_nGenGlu_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("GenJet_cuts_nGenGlu_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenGlu_signal_18->Modified();
   GenJet_cuts_nGenGlu_signal_18->cd();
   GenJet_cuts_nGenGlu_signal_18->SetSelected(GenJet_cuts_nGenGlu_signal_18);
}
