#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_signal_16_logY()
{
//=========Macro generated from canvas: nB_medium_jets_signal_16/nB_medium_jets_signal_16
//=========  (Thu Mar  9 13:30:10 2023) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_signal_16 = new TCanvas("nB_medium_jets_signal_16", "nB_medium_jets_signal_16",0,0,600,600);
   nB_medium_jets_signal_16->SetHighLightColor(2);
   nB_medium_jets_signal_16->Range(-2.683529,0.3709066,11.21633,3.258297);
   nB_medium_jets_signal_16->SetFillColor(0);
   nB_medium_jets_signal_16->SetFillStyle(4000);
   nB_medium_jets_signal_16->SetBorderMode(0);
   nB_medium_jets_signal_16->SetBorderSize(2);
   nB_medium_jets_signal_16->SetLogy();
   nB_medium_jets_signal_16->SetLeftMargin(0.15709);
   nB_medium_jets_signal_16->SetRightMargin(0.1234783);
   nB_medium_jets_signal_16->SetBottomMargin(0.12);
   nB_medium_jets_signal_16->SetFrameFillStyle(1000);
   nB_medium_jets_signal_16->SetFrameBorderMode(0);
   nB_medium_jets_signal_16->SetFrameFillStyle(1000);
   nB_medium_jets_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(682.1221);
   
   TH1F *st_stack_25 = new TH1F("st_stack_25","",10,-0.5,9.5);
   st_stack_25->SetMinimum(5.216672);
   st_stack_25->SetMaximum(932.3056);
   st_stack_25->SetDirectory(0);
   st_stack_25->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_25->SetLineColor(ci);
   st_stack_25->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_25->GetXaxis()->SetRange(1,10);
   st_stack_25->GetXaxis()->SetLabelFont(42);
   st_stack_25->GetXaxis()->SetTitleOffset(1);
   st_stack_25->GetXaxis()->SetTitleFont(42);
   st_stack_25->GetYaxis()->SetTitle("Event/1.0");
   st_stack_25->GetYaxis()->SetLabelFont(42);
   st_stack_25->GetYaxis()->SetTitleSize(0.037);
   st_stack_25->GetYaxis()->SetTitleFont(42);
   st_stack_25->GetZaxis()->SetLabelFont(42);
   st_stack_25->GetZaxis()->SetTitleOffset(1);
   st_stack_25->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_25);
   
   
   TH1D *VbbHcc_jets_nB_medium_stack_1 = new TH1D("VbbHcc_jets_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(1,505.5229);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(2,139.078);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(3,24.37918);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(4,2.561581);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(5,0.1268753);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(6,0.006034523);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(1,1.256204);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(2,0.6542193);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(3,0.2733977);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(4,0.088337);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(5,0.0192052);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(6,0.004276361);
   VbbHcc_jets_nB_medium_stack_1->SetEntries(249005);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_nB_medium_stack_2 = new TH1D("VbbHcc_jets_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(1,60.63845);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(2,24.67463);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(3,6.824249);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(4,0.9641101);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(5,0.05588721);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(6,0.001159547);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(1,0.1521366);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(2,0.09711527);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(3,0.05113071);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(4,0.01922146);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(5,0.004619056);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(6,0.0006703663);
   VbbHcc_jets_nB_medium_stack_2->SetEntries(248576);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_nB_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_nB_medium_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_signal_16->Modified();
   nB_medium_jets_signal_16->cd();
   nB_medium_jets_signal_16->SetSelected(nB_medium_jets_signal_16);
}
