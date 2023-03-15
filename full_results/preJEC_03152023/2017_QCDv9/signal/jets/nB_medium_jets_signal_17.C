#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_signal_17()
{
//=========Macro generated from canvas: nB_medium_jets_signal_17/nB_medium_jets_signal_17
//=========  (Thu Mar  9 13:30:49 2023) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_signal_17 = new TCanvas("nB_medium_jets_signal_17", "nB_medium_jets_signal_17",0,0,600,600);
   nB_medium_jets_signal_17->SetHighLightColor(2);
   nB_medium_jets_signal_17->Range(-2.683529,-122.0342,11.21633,894.9178);
   nB_medium_jets_signal_17->SetFillColor(0);
   nB_medium_jets_signal_17->SetFillStyle(4000);
   nB_medium_jets_signal_17->SetBorderMode(0);
   nB_medium_jets_signal_17->SetBorderSize(2);
   nB_medium_jets_signal_17->SetLeftMargin(0.15709);
   nB_medium_jets_signal_17->SetRightMargin(0.1234783);
   nB_medium_jets_signal_17->SetBottomMargin(0.12);
   nB_medium_jets_signal_17->SetFrameFillStyle(1000);
   nB_medium_jets_signal_17->SetFrameBorderMode(0);
   nB_medium_jets_signal_17->SetFrameFillStyle(1000);
   nB_medium_jets_signal_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(793.2226);
   
   TH1F *st_stack_27 = new TH1F("st_stack_27","",10,-0.5,9.5);
   st_stack_27->SetMinimum(0);
   st_stack_27->SetMaximum(793.2226);
   st_stack_27->SetDirectory(0);
   st_stack_27->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_27->SetLineColor(ci);
   st_stack_27->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_27->GetXaxis()->SetRange(1,10);
   st_stack_27->GetXaxis()->SetLabelFont(42);
   st_stack_27->GetXaxis()->SetTitleOffset(1);
   st_stack_27->GetXaxis()->SetTitleFont(42);
   st_stack_27->GetYaxis()->SetTitle("Event/1.0");
   st_stack_27->GetYaxis()->SetLabelFont(42);
   st_stack_27->GetYaxis()->SetTitleSize(0.037);
   st_stack_27->GetYaxis()->SetTitleFont(42);
   st_stack_27->GetZaxis()->SetLabelFont(42);
   st_stack_27->GetZaxis()->SetTitleOffset(1);
   st_stack_27->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_27);
   
   
   TH1D *VbbHcc_jets_nB_medium_stack_1 = new TH1D("VbbHcc_jets_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(1,588.3819);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(2,189.478);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(3,37.60382);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(4,4.347654);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(5,0.2803204);
   VbbHcc_jets_nB_medium_stack_1->SetBinContent(6,0.00947791);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(1,1.0722);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(2,0.6041842);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(3,0.2681836);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(4,0.09103739);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(5,0.02279472);
   VbbHcc_jets_nB_medium_stack_1->SetBinError(6,0.004256959);
   VbbHcc_jets_nB_medium_stack_1->SetEntries(499112);

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
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(1,69.9928);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(2,32.20015);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(3,9.746114);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(4,1.636428);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(5,0.1135534);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(6,0.003558375);
   VbbHcc_jets_nB_medium_stack_2->SetBinContent(7,0.000299204);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(1,0.1295828);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(2,0.08801899);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(3,0.04845677);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(4,0.01986722);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(5,0.005253474);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(6,0.0009396669);
   VbbHcc_jets_nB_medium_stack_2->SetBinError(7,0.000299204);
   VbbHcc_jets_nB_medium_stack_2->SetEntries(495010);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_jets_signal_17->Modified();
   nB_medium_jets_signal_17->cd();
   nB_medium_jets_signal_17->SetSelected(nB_medium_jets_signal_17);
}
