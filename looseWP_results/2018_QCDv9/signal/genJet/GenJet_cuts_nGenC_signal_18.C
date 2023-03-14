#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenC_signal_18()
{
//=========Macro generated from canvas: GenJet_cuts_nGenC_signal_18/GenJet_cuts_nGenC_signal_18
//=========  (Fri Mar 10 12:49:29 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenC_signal_18 = new TCanvas("GenJet_cuts_nGenC_signal_18", "GenJet_cuts_nGenC_signal_18",0,0,600,600);
   GenJet_cuts_nGenC_signal_18->SetHighLightColor(2);
   GenJet_cuts_nGenC_signal_18->Range(-4.867058,-117.0528,22.93266,858.3869);
   GenJet_cuts_nGenC_signal_18->SetFillColor(0);
   GenJet_cuts_nGenC_signal_18->SetFillStyle(4000);
   GenJet_cuts_nGenC_signal_18->SetBorderMode(0);
   GenJet_cuts_nGenC_signal_18->SetBorderSize(2);
   GenJet_cuts_nGenC_signal_18->SetLeftMargin(0.15709);
   GenJet_cuts_nGenC_signal_18->SetRightMargin(0.1234783);
   GenJet_cuts_nGenC_signal_18->SetBottomMargin(0.12);
   GenJet_cuts_nGenC_signal_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenC_signal_18->SetFrameBorderMode(0);
   GenJet_cuts_nGenC_signal_18->SetFrameFillStyle(1000);
   GenJet_cuts_nGenC_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(760.8429);
   
   TH1F *st_stack_95 = new TH1F("st_stack_95","",20,-0.5,19.5);
   st_stack_95->SetMinimum(0);
   st_stack_95->SetMaximum(760.8429);
   st_stack_95->SetDirectory(0);
   st_stack_95->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_95->SetLineColor(ci);
   st_stack_95->GetXaxis()->SetTitle("Gen c-jet multiplicity");
   st_stack_95->GetXaxis()->SetLabelFont(42);
   st_stack_95->GetXaxis()->SetTitleOffset(1);
   st_stack_95->GetXaxis()->SetTitleFont(42);
   st_stack_95->GetYaxis()->SetTitle("Event/1.0");
   st_stack_95->GetYaxis()->SetLabelFont(42);
   st_stack_95->GetYaxis()->SetTitleSize(0.037);
   st_stack_95->GetYaxis()->SetTitleFont(42);
   st_stack_95->GetZaxis()->SetLabelFont(42);
   st_stack_95->GetZaxis()->SetTitleOffset(1);
   st_stack_95->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_95);
   
   
   TH1D *GenJet_cuts_nGenC_stack_1 = new TH1D("GenJet_cuts_nGenC_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenC_stack_1->SetBinContent(1,257.9156);
   GenJet_cuts_nGenC_stack_1->SetBinContent(2,556.1639);
   GenJet_cuts_nGenC_stack_1->SetBinContent(3,331.8187);
   GenJet_cuts_nGenC_stack_1->SetBinContent(4,54.0319);
   GenJet_cuts_nGenC_stack_1->SetBinContent(5,12.96969);
   GenJet_cuts_nGenC_stack_1->SetBinContent(6,0.5499165);
   GenJet_cuts_nGenC_stack_1->SetBinContent(7,0.01295772);
   GenJet_cuts_nGenC_stack_1->SetBinContent(8,0.004189902);
   GenJet_cuts_nGenC_stack_1->SetBinError(1,0.9324592);
   GenJet_cuts_nGenC_stack_1->SetBinError(2,1.34242);
   GenJet_cuts_nGenC_stack_1->SetBinError(3,1.045496);
   GenJet_cuts_nGenC_stack_1->SetBinError(4,0.4362168);
   GenJet_cuts_nGenC_stack_1->SetBinError(5,0.2271794);
   GenJet_cuts_nGenC_stack_1->SetBinError(6,0.03853475);
   GenJet_cuts_nGenC_stack_1->SetBinError(7,0.00598851);
   GenJet_cuts_nGenC_stack_1->SetBinError(8,0.002977623);
   GenJet_cuts_nGenC_stack_1->SetEntries(498953);

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
   GenJet_cuts_nGenC_stack_2->SetBinContent(1,10.92593);
   GenJet_cuts_nGenC_stack_2->SetBinContent(2,75.33579);
   GenJet_cuts_nGenC_stack_2->SetBinContent(3,62.11449);
   GenJet_cuts_nGenC_stack_2->SetBinContent(4,14.58585);
   GenJet_cuts_nGenC_stack_2->SetBinContent(5,4.979788);
   GenJet_cuts_nGenC_stack_2->SetBinContent(6,0.2662831);
   GenJet_cuts_nGenC_stack_2->SetBinContent(7,0.01417476);
   GenJet_cuts_nGenC_stack_2->SetBinContent(8,0.0009826197);
   GenJet_cuts_nGenC_stack_2->SetBinError(1,0.06866984);
   GenJet_cuts_nGenC_stack_2->SetBinError(2,0.1748099);
   GenJet_cuts_nGenC_stack_2->SetBinError(3,0.1575598);
   GenJet_cuts_nGenC_stack_2->SetBinError(4,0.07457736);
   GenJet_cuts_nGenC_stack_2->SetBinError(5,0.04566422);
   GenJet_cuts_nGenC_stack_2->SetBinError(6,0.009739159);
   GenJet_cuts_nGenC_stack_2->SetBinError(7,0.002237691);
   GenJet_cuts_nGenC_stack_2->SetBinError(8,0.0005688386);
   GenJet_cuts_nGenC_stack_2->SetEntries(493157);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenC_signal_18->Modified();
   GenJet_cuts_nGenC_signal_18->cd();
   GenJet_cuts_nGenC_signal_18->SetSelected(GenJet_cuts_nGenC_signal_18);
}
