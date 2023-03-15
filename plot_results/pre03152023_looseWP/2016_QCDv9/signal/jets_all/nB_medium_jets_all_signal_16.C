#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_signal_16()
{
//=========Macro generated from canvas: nB_medium_jets_all_signal_16/nB_medium_jets_all_signal_16
//=========  (Fri Mar 10 12:14:02 2023) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all_signal_16 = new TCanvas("nB_medium_jets_all_signal_16", "nB_medium_jets_all_signal_16",0,0,600,600);
   nB_medium_jets_all_signal_16->SetHighLightColor(2);
   nB_medium_jets_all_signal_16->Range(-2.683529,-81.83618,11.21633,600.132);
   nB_medium_jets_all_signal_16->SetFillColor(0);
   nB_medium_jets_all_signal_16->SetFillStyle(4000);
   nB_medium_jets_all_signal_16->SetBorderMode(0);
   nB_medium_jets_all_signal_16->SetBorderSize(2);
   nB_medium_jets_all_signal_16->SetLeftMargin(0.15709);
   nB_medium_jets_all_signal_16->SetRightMargin(0.1234783);
   nB_medium_jets_all_signal_16->SetBottomMargin(0.12);
   nB_medium_jets_all_signal_16->SetFrameFillStyle(1000);
   nB_medium_jets_all_signal_16->SetFrameBorderMode(0);
   nB_medium_jets_all_signal_16->SetFrameFillStyle(1000);
   nB_medium_jets_all_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(531.9351);
   
   TH1F *st_stack_181 = new TH1F("st_stack_181","",10,-0.5,9.5);
   st_stack_181->SetMinimum(0);
   st_stack_181->SetMaximum(531.9351);
   st_stack_181->SetDirectory(0);
   st_stack_181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_181->SetLineColor(ci);
   st_stack_181->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_181->GetXaxis()->SetRange(1,10);
   st_stack_181->GetXaxis()->SetLabelFont(42);
   st_stack_181->GetXaxis()->SetTitleOffset(1);
   st_stack_181->GetXaxis()->SetTitleFont(42);
   st_stack_181->GetYaxis()->SetTitle("Event/1.0");
   st_stack_181->GetYaxis()->SetLabelFont(42);
   st_stack_181->GetYaxis()->SetTitleSize(0.037);
   st_stack_181->GetYaxis()->SetTitleFont(42);
   st_stack_181->GetZaxis()->SetLabelFont(42);
   st_stack_181->GetZaxis()->SetTitleOffset(1);
   st_stack_181->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_181);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(1,392.283);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(2,195.6037);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(3,68.26564);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(4,13.944);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(5,1.503622);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(6,0.07453322);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(1,1.108277);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(2,0.7768582);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(3,0.4579732);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(4,0.2066969);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(5,0.06725432);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(6,0.01466704);
   VbbHcc_jets_all_nB_medium_stack_1->SetEntries(249005);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nB_medium_stack_1->SetFillColor(ci);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_2 = new TH1D("VbbHcc_jets_all_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(1,49.22314);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(2,28.09924);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(3,12.5053);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(4,2.949432);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(5,0.3475567);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(6,0.03192309);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(7,0.001889577);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(1,0.1370824);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(2,0.1035848);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(3,0.06917862);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(4,0.03360862);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(5,0.01153679);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(6,0.003477129);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(7,0.0008454127);
   VbbHcc_jets_all_nB_medium_stack_2->SetEntries(248576);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nB_medium_stack_2->SetFillColor(ci);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_1","ZHcc","F");

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
   nB_medium_jets_all_signal_16->Modified();
   nB_medium_jets_all_signal_16->cd();
   nB_medium_jets_all_signal_16->SetSelected(nB_medium_jets_all_signal_16);
}
