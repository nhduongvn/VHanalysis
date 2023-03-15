#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_signal_18()
{
//=========Macro generated from canvas: H_mass_signal_18/H_mass_signal_18
//=========  (Fri Mar 10 11:21:19 2023) by ROOT version 6.26/06
   TCanvas *H_mass_signal_18 = new TCanvas("H_mass_signal_18", "H_mass_signal_18",0,0,600,600);
   H_mass_signal_18->SetHighLightColor(2);
   H_mass_signal_18->Range(-65.50587,-55.85582,351.4899,409.6094);
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
   st->SetMaximum(363.0628);
   
   TH1F *st_stack_5 = new TH1F("st_stack_5","",40,0,400);
   st_stack_5->SetMinimum(0);
   st_stack_5->SetMaximum(363.0628);
   st_stack_5->SetDirectory(0);
   st_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_5->SetLineColor(ci);
   st_stack_5->GetXaxis()->SetTitle("M_{H} [GeV]");
   st_stack_5->GetXaxis()->SetRange(1,30);
   st_stack_5->GetXaxis()->SetLabelFont(42);
   st_stack_5->GetXaxis()->SetTitleOffset(1);
   st_stack_5->GetXaxis()->SetTitleFont(42);
   st_stack_5->GetYaxis()->SetTitle("Event/10.0 GeV");
   st_stack_5->GetYaxis()->SetLabelFont(42);
   st_stack_5->GetYaxis()->SetTitleSize(0.037);
   st_stack_5->GetYaxis()->SetTitleFont(42);
   st_stack_5->GetZaxis()->SetLabelFont(42);
   st_stack_5->GetZaxis()->SetTitleOffset(1);
   st_stack_5->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_5);
   
   
   TH1D *VbbHcc_MC_H_mass_stack_1 = new TH1D("VbbHcc_MC_H_mass_stack_1","",40,0,400);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(4,0.005064407);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(6,0.006007114);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(7,0.004585295);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(8,2.555001e-05);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(9,0.007503505);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(10,0.006408537);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(11,0.007948192);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(12,0.04479095);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(13,264.4882);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(14,0.02802612);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(15,0.00484204);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(16,0.002461314);
   VbbHcc_MC_H_mass_stack_1->SetBinContent(24,0.003272863);
   VbbHcc_MC_H_mass_stack_1->SetBinError(4,0.003581076);
   VbbHcc_MC_H_mass_stack_1->SetBinError(6,0.00386418);
   VbbHcc_MC_H_mass_stack_1->SetBinError(7,0.003250131);
   VbbHcc_MC_H_mass_stack_1->SetBinError(8,0.003485987);
   VbbHcc_MC_H_mass_stack_1->SetBinError(9,0.004467143);
   VbbHcc_MC_H_mass_stack_1->SetBinError(10,0.003762937);
   VbbHcc_MC_H_mass_stack_1->SetBinError(11,0.004618548);
   VbbHcc_MC_H_mass_stack_1->SetBinError(12,0.01164089);
   VbbHcc_MC_H_mass_stack_1->SetBinError(13,0.9253309);
   VbbHcc_MC_H_mass_stack_1->SetBinError(14,0.00858505);
   VbbHcc_MC_H_mass_stack_1->SetBinError(15,0.003424005);
   VbbHcc_MC_H_mass_stack_1->SetBinError(16,0.002461314);
   VbbHcc_MC_H_mass_stack_1->SetBinError(24,0.003272863);
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
   
   TH1D *VbbHcc_MC_H_mass_stack_2 = new TH1D("VbbHcc_MC_H_mass_stack_2","",40,0,400);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(11,0.00154563);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(12,0.003279728);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(13,36.85397);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(14,0.006020298);
   VbbHcc_MC_H_mass_stack_2->SetBinContent(15,0.0006858599);
   VbbHcc_MC_H_mass_stack_2->SetBinError(11,0.000791333);
   VbbHcc_MC_H_mass_stack_2->SetBinError(12,0.001019983);
   VbbHcc_MC_H_mass_stack_2->SetBinError(13,0.1238178);
   VbbHcc_MC_H_mass_stack_2->SetBinError(14,0.001532387);
   VbbHcc_MC_H_mass_stack_2->SetBinError(15,0.0004928519);
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
