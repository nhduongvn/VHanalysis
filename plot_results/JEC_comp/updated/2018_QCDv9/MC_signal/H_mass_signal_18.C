#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_signal_18()
{
//=========Macro generated from canvas: H_mass_signal_18/H_mass_signal_18
//=========  (Thu Mar 23 11:54:00 2023) by ROOT version 6.26/06
   TCanvas *H_mass_signal_18 = new TCanvas("H_mass_signal_18", "H_mass_signal_18",0,0,600,600);
   H_mass_signal_18->SetHighLightColor(2);
   H_mass_signal_18->Range(-65.50587,-55.88038,351.4899,409.7894);
   H_mass_signal_18->SetFillColor(0);
   H_mass_signal_18->SetFillStyle(4000);
   H_mass_signal_18->SetBorderMode(0);
   H_mass_signal_18->SetBorderSize(2);
   H_mass_signal_18->SetLeftMargin(0.15709);
   H_mass_signal_18->SetRightMargin(0.1234783);
   H_mass_signal_18->SetBottomMargin(0.12);
   H_mass_signal_18->SetFrameFillStyle(1000);
   H_mass_signal_18->SetFrameBorderMode(0);
   H_mass_signal_18->SetFrameFillStyle(1000);
   H_mass_signal_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(363.2224);
   
   TH1F *st_stack_5 = new TH1F("st_stack_5","",200,0,400);
   st_stack_5->SetMinimum(0);
   st_stack_5->SetMaximum(363.2224);
   st_stack_5->SetDirectory(0);
   st_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_5->SetLineColor(ci);
   st_stack_5->GetXaxis()->SetTitle("M_{H} [GeV]");
   st_stack_5->GetXaxis()->SetRange(1,150);
   st_stack_5->GetXaxis()->SetLabelFont(42);
   st_stack_5->GetXaxis()->SetTitleOffset(1);
   st_stack_5->GetXaxis()->SetTitleFont(42);
   st_stack_5->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_5->GetYaxis()->SetLabelFont(42);
   st_stack_5->GetYaxis()->SetTitleSize(0.037);
   st_stack_5->GetYaxis()->SetTitleFont(42);
   st_stack_5->GetZaxis()->SetLabelFont(42);
   st_stack_5->GetZaxis()->SetTitleOffset(1);
   st_stack_5->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_5);
   
   
   TH1D *VbbHcc_MC_H_mass_stack_1 = new TH1D("VbbHcc_MC_H_mass_stack_1","",200,0,400);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(1,264.6091);
   VbbHcc_MC_H_mass_stack_1->SetBinError(1,0.9255166);
   VbbHcc_MC_H_mass_stack_1->SetEntries(108766);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_MC_H_mass_stack_1->SetFillColor(ci);
   VbbHcc_MC_H_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_MC_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_mass_stack_1,"");
   
   TH1D *VbbHcc_MC_H_mass_stack_2 = new TH1D("VbbHcc_MC_H_mass_stack_2","",200,0,400);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(1,36.8655);
   VbbHcc_MC_H_mass_stack_2->SetBinError(1,0.123835);
   VbbHcc_MC_H_mass_stack_2->SetEntries(108071);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_MC_H_mass_stack_2->SetFillColor(ci);
   VbbHcc_MC_H_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_MC_H_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_MC_H_mass_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_MC_H_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_MC_H_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_MC_H_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_MC_H_mass_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MC_H_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_MC_H_mass_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_MC_H_mass_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_MC_H_mass_stack_1","ZHcc","F");

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
   H_mass_signal_18->Modified();
   H_mass_signal_18->cd();
   H_mass_signal_18->SetSelected(H_mass_signal_18);
}
