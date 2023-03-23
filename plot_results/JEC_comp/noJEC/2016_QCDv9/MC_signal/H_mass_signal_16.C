#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_signal_16()
{
//=========Macro generated from canvas: H_mass_signal_16/H_mass_signal_16
//=========  (Thu Mar 23 11:52:35 2023) by ROOT version 6.26/06
   TCanvas *H_mass_signal_16 = new TCanvas("H_mass_signal_16", "H_mass_signal_16",0,0,600,600);
   H_mass_signal_16->SetHighLightColor(2);
   H_mass_signal_16->Range(-65.50587,-30.96779,351.4899,227.0971);
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
   st->SetMaximum(201.2907);
   
   TH1F *st_stack_1 = new TH1F("st_stack_1","",200,0,400);
   st_stack_1->SetMinimum(0);
   st_stack_1->SetMaximum(201.2907);
   st_stack_1->SetDirectory(0);
   st_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_1->SetLineColor(ci);
   st_stack_1->GetXaxis()->SetTitle("M_{H} [GeV]");
   st_stack_1->GetXaxis()->SetRange(1,150);
   st_stack_1->GetXaxis()->SetLabelFont(42);
   st_stack_1->GetXaxis()->SetTitleOffset(1);
   st_stack_1->GetXaxis()->SetTitleFont(42);
   st_stack_1->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_1->GetYaxis()->SetLabelFont(42);
   st_stack_1->GetYaxis()->SetTitleSize(0.037);
   st_stack_1->GetYaxis()->SetTitleFont(42);
   st_stack_1->GetZaxis()->SetLabelFont(42);
   st_stack_1->GetZaxis()->SetTitleOffset(1);
   st_stack_1->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_1);
   
   
   TH1D *VbbHcc_MC_H_mass_stack_1 = new TH1D("VbbHcc_MC_H_mass_stack_1","",200,0,400);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(47,0.00330076);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(52,0.003280002);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(53,0.003218024);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(54,0.002794956);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(55,0.002874583);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(56,0.003079495);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(57,0.002475435);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(58,0.003015135);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(59,0.002863852);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(60,0.008741096);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(61,0.04978462);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(62,0.3990389);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(63,146.6824);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(64,0.03449539);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(65,0.006102901);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(66,0.0143325);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(68,0.003124003);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(70,0.002911559);
   VbbHcc_MC_H_mass_stack_1->SetBinError(47,0.00330076);
   VbbHcc_MC_H_mass_stack_1->SetBinError(52,0.003280002);
   VbbHcc_MC_H_mass_stack_1->SetBinError(53,0.003218024);
   VbbHcc_MC_H_mass_stack_1->SetBinError(54,0.002794956);
   VbbHcc_MC_H_mass_stack_1->SetBinError(55,0.002874583);
   VbbHcc_MC_H_mass_stack_1->SetBinError(56,0.003079495);
   VbbHcc_MC_H_mass_stack_1->SetBinError(57,0.002475435);
   VbbHcc_MC_H_mass_stack_1->SetBinError(58,0.005131196);
   VbbHcc_MC_H_mass_stack_1->SetBinError(59,0.002863852);
   VbbHcc_MC_H_mass_stack_1->SetBinError(60,0.005047152);
   VbbHcc_MC_H_mass_stack_1->SetBinError(61,0.01258863);
   VbbHcc_MC_H_mass_stack_1->SetBinError(62,0.0357255);
   VbbHcc_MC_H_mass_stack_1->SetBinError(63,0.6751798);
   VbbHcc_MC_H_mass_stack_1->SetBinError(64,0.01149468);
   VbbHcc_MC_H_mass_stack_1->SetBinError(65,0.004322886);
   VbbHcc_MC_H_mass_stack_1->SetBinError(66,0.006421208);
   VbbHcc_MC_H_mass_stack_1->SetBinError(68,0.003124003);
   VbbHcc_MC_H_mass_stack_1->SetBinError(70,0.002911559);
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
   
   TH1D *VbbHcc_MC_H_mass_stack_2 = new TH1D("VbbHcc_MC_H_mass_stack_2","",200,0,400);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(41,0.0003688227);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(53,0.0003754982);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(57,0.0003800229);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(59,0.001177455);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(60,0.0004083315);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(61,0.00233563);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(62,0.03149779);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(63,20.38879);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(64,0.006130072);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(65,0.001152128);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(66,0.001854537);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(73,0.0003838873);
   VbbHcc_MC_H_mass_stack_2->SetBinError(41,0.0003688227);
   VbbHcc_MC_H_mass_stack_2->SetBinError(53,0.0003754982);
   VbbHcc_MC_H_mass_stack_2->SetBinError(57,0.0003800229);
   VbbHcc_MC_H_mass_stack_2->SetBinError(59,0.0006815589);
   VbbHcc_MC_H_mass_stack_2->SetBinError(60,0.0004083315);
   VbbHcc_MC_H_mass_stack_2->SetBinError(61,0.0009608877);
   VbbHcc_MC_H_mass_stack_2->SetBinError(62,0.003427366);
   VbbHcc_MC_H_mass_stack_2->SetBinError(63,0.08825361);
   VbbHcc_MC_H_mass_stack_2->SetBinError(64,0.001527525);
   VbbHcc_MC_H_mass_stack_2->SetBinError(65,0.0006667532);
   VbbHcc_MC_H_mass_stack_2->SetBinError(66,0.0008375102);
   VbbHcc_MC_H_mass_stack_2->SetBinError(73,0.0003838873);
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
