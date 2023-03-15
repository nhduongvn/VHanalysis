#ifdef __CLING__
#pragma cling optimize(0)
#endif
void GenJet_cuts_nGenB_signal_16()
{
//=========Macro generated from canvas: GenJet_cuts_nGenB_signal_16/GenJet_cuts_nGenB_signal_16
//=========  (Thu Mar  9 15:52:37 2023) by ROOT version 6.26/06
   TCanvas *GenJet_cuts_nGenB_signal_16 = new TCanvas("GenJet_cuts_nGenB_signal_16", "GenJet_cuts_nGenB_signal_16",0,0,600,600);
   GenJet_cuts_nGenB_signal_16->SetHighLightColor(2);
   GenJet_cuts_nGenB_signal_16->Range(-4.867058,-119.3757,22.93266,875.4216);
   GenJet_cuts_nGenB_signal_16->SetFillColor(0);
   GenJet_cuts_nGenB_signal_16->SetFillStyle(4000);
   GenJet_cuts_nGenB_signal_16->SetBorderMode(0);
   GenJet_cuts_nGenB_signal_16->SetBorderSize(2);
   GenJet_cuts_nGenB_signal_16->SetLeftMargin(0.15709);
   GenJet_cuts_nGenB_signal_16->SetRightMargin(0.1234783);
   GenJet_cuts_nGenB_signal_16->SetBottomMargin(0.12);
   GenJet_cuts_nGenB_signal_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenB_signal_16->SetFrameBorderMode(0);
   GenJet_cuts_nGenB_signal_16->SetFrameFillStyle(1000);
   GenJet_cuts_nGenB_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(775.9418);
   
   TH1F *st_stack_85 = new TH1F("st_stack_85","",20,-0.5,19.5);
   st_stack_85->SetMinimum(0);
   st_stack_85->SetMaximum(775.9418);
   st_stack_85->SetDirectory(0);
   st_stack_85->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_85->SetLineColor(ci);
   st_stack_85->GetXaxis()->SetTitle("Gen b-jet multiplicity");
   st_stack_85->GetXaxis()->SetLabelFont(42);
   st_stack_85->GetXaxis()->SetTitleOffset(1);
   st_stack_85->GetXaxis()->SetTitleFont(42);
   st_stack_85->GetYaxis()->SetTitle("Event/1.0");
   st_stack_85->GetYaxis()->SetLabelFont(42);
   st_stack_85->GetYaxis()->SetTitleSize(0.037);
   st_stack_85->GetYaxis()->SetTitleFont(42);
   st_stack_85->GetZaxis()->SetLabelFont(42);
   st_stack_85->GetZaxis()->SetTitleOffset(1);
   st_stack_85->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_85);
   
   
   TH1D *GenJet_cuts_nGenB_stack_1 = new TH1D("GenJet_cuts_nGenB_stack_1","",20,-0.5,19.5);
   GenJet_cuts_nGenB_stack_1->SetBinContent(1,570.6346);
   GenJet_cuts_nGenB_stack_1->SetBinContent(2,77.29727);
   GenJet_cuts_nGenB_stack_1->SetBinContent(3,23.27223);
   GenJet_cuts_nGenB_stack_1->SetBinContent(4,0.4395344);
   GenJet_cuts_nGenB_stack_1->SetBinContent(5,0.02799921);
   GenJet_cuts_nGenB_stack_1->SetBinContent(6,0.002938675);
   GenJet_cuts_nGenB_stack_1->SetBinError(1,1.333565);
   GenJet_cuts_nGenB_stack_1->SetBinError(2,0.4876364);
   GenJet_cuts_nGenB_stack_1->SetBinError(3,0.2672073);
   GenJet_cuts_nGenB_stack_1->SetBinError(4,0.03629362);
   GenJet_cuts_nGenB_stack_1->SetBinError(5,0.008878191);
   GenJet_cuts_nGenB_stack_1->SetBinError(6,0.002938675);
   GenJet_cuts_nGenB_stack_1->SetEntries(249005);

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
   GenJet_cuts_nGenB_stack_2->SetBinContent(1,73.39717);
   GenJet_cuts_nGenB_stack_2->SetBinContent(2,12.06372);
   GenJet_cuts_nGenB_stack_2->SetBinContent(3,7.509384);
   GenJet_cuts_nGenB_stack_2->SetBinContent(4,0.1736918);
   GenJet_cuts_nGenB_stack_2->SetBinContent(5,0.01415066);
   GenJet_cuts_nGenB_stack_2->SetBinContent(6,0.0003675904);
   GenJet_cuts_nGenB_stack_2->SetBinError(1,0.1674046);
   GenJet_cuts_nGenB_stack_2->SetBinError(2,0.06789203);
   GenJet_cuts_nGenB_stack_2->SetBinError(3,0.05363849);
   GenJet_cuts_nGenB_stack_2->SetBinError(4,0.008136036);
   GenJet_cuts_nGenB_stack_2->SetBinError(5,0.002339826);
   GenJet_cuts_nGenB_stack_2->SetBinError(6,0.0003675904);
   GenJet_cuts_nGenB_stack_2->SetEntries(248576);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   GenJet_cuts_nGenB_signal_16->Modified();
   GenJet_cuts_nGenB_signal_16->cd();
   GenJet_cuts_nGenB_signal_16->SetSelected(GenJet_cuts_nGenB_signal_16);
}
