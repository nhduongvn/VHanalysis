#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_signal_16()
{
//=========Macro generated from canvas: H_mass_signal_16/H_mass_signal_16
//=========  (Fri Mar 10 11:21:19 2023) by ROOT version 6.26/06
   TCanvas *H_mass_signal_16 = new TCanvas("H_mass_signal_16", "H_mass_signal_16",0,0,600,600);
   H_mass_signal_16->SetHighLightColor(2);
   H_mass_signal_16->Range(-65.50587,-31.06613,351.4899,227.8183);
   H_mass_signal_16->SetFillColor(0);
   H_mass_signal_16->SetFillStyle(4000);
   H_mass_signal_16->SetBorderMode(0);
   H_mass_signal_16->SetBorderSize(2);
   H_mass_signal_16->SetLeftMargin(0.15709);
   H_mass_signal_16->SetRightMargin(0.1234783);
   H_mass_signal_16->SetBottomMargin(0.12);
   H_mass_signal_16->SetFrameFillStyle(1000);
   H_mass_signal_16->SetFrameBorderMode(0);
   H_mass_signal_16->SetFrameFillStyle(1000);
   H_mass_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(201.9299);
   
   TH1F *st_stack_1 = new TH1F("st_stack_1","",40,0,400);
   st_stack_1->SetMinimum(0);
   st_stack_1->SetMaximum(201.9299);
   st_stack_1->SetDirectory(0);
   st_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_1->SetLineColor(ci);
   st_stack_1->GetXaxis()->SetTitle("M_{H} [GeV]");
   st_stack_1->GetXaxis()->SetRange(1,30);
   st_stack_1->GetXaxis()->SetLabelFont(42);
   st_stack_1->GetXaxis()->SetTitleOffset(1);
   st_stack_1->GetXaxis()->SetTitleFont(42);
   st_stack_1->GetYaxis()->SetTitle("Event/10.0 GeV");
   st_stack_1->GetYaxis()->SetLabelFont(42);
   st_stack_1->GetYaxis()->SetTitleSize(0.037);
   st_stack_1->GetYaxis()->SetTitleFont(42);
   st_stack_1->GetZaxis()->SetLabelFont(42);
   st_stack_1->GetZaxis()->SetTitleOffset(1);
   st_stack_1->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_1);
   
   
   TH1D *VbbHcc_MC_H_mass_stack_1 = new TH1D("VbbHcc_MC_H_mass_stack_1","",40,0,400);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(10,0.00330076);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(11,0.01216756);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(12,0.02017501);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(13,147.1719);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(14,0.02036806);
   VbbHcc_MC_H_mass_stack_1->SetBinError(10,0.00330076);
   VbbHcc_MC_H_mass_stack_1->SetBinError(11,0.006098286);
   VbbHcc_MC_H_mass_stack_1->SetBinError(12,0.008695725);
   VbbHcc_MC_H_mass_stack_1->SetBinError(13,0.676353);
   VbbHcc_MC_H_mass_stack_1->SetBinError(14,0.007711581);
   VbbHcc_MC_H_mass_stack_1->SetEntries(54432);

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
   
   TH1D *VbbHcc_MC_H_mass_stack_2 = new TH1D("VbbHcc_MC_H_mass_stack_2","",40,0,400);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(9,0.0003688227);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(11,0.0003754982);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(12,0.001965809);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(13,20.42991);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(14,0.001854537);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(15,0.0003838873);
   VbbHcc_MC_H_mass_stack_2->SetBinError(9,0.0003688227);
   VbbHcc_MC_H_mass_stack_2->SetBinError(11,0.0003754982);
   VbbHcc_MC_H_mass_stack_2->SetBinError(12,0.0008807238);
   VbbHcc_MC_H_mass_stack_2->SetBinError(13,0.08834109);
   VbbHcc_MC_H_mass_stack_2->SetBinError(14,0.0008375102);
   VbbHcc_MC_H_mass_stack_2->SetBinError(15,0.0003838873);
   VbbHcc_MC_H_mass_stack_2->SetEntries(54504);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_signal_16->Modified();
   H_mass_signal_16->cd();
   H_mass_signal_16->SetSelected(H_mass_signal_16);
}
