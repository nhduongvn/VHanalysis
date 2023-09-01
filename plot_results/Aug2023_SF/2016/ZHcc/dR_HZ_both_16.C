#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dR_HZ_both_16()
{
//=========Macro generated from canvas: dR_HZ_both_16/dR_HZ_both_16
//=========  (Fri Sep  1 13:23:43 2023) by ROOT version 6.28/04
   TCanvas *dR_HZ_both_16 = new TCanvas("dR_HZ_both_16", "dR_HZ_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_both_16->SetHighLightColor(2);
   dR_HZ_both_16->Range(-1.2,-0.001397743,6.8,0.01257968);
   dR_HZ_both_16->SetFillColor(0);
   dR_HZ_both_16->SetBorderMode(0);
   dR_HZ_both_16->SetBorderSize(2);
   dR_HZ_both_16->SetLeftMargin(0.15);
   dR_HZ_both_16->SetFrameBorderMode(0);
   dR_HZ_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_dR_HZ__869 = new TH1D("VbbHcc_both_dR_HZ__869","",60,0,6);
   VbbHcc_both_dR_HZ__869->SetBinContent(6,0.001425773);
   VbbHcc_both_dR_HZ__869->SetBinContent(8,0.001929603);
   VbbHcc_both_dR_HZ__869->SetBinContent(11,0.002530526);
   VbbHcc_both_dR_HZ__869->SetBinContent(12,0.001703818);
   VbbHcc_both_dR_HZ__869->SetBinContent(13,0.006738278);
   VbbHcc_both_dR_HZ__869->SetBinContent(15,0.001943164);
   VbbHcc_both_dR_HZ__869->SetBinContent(22,0.002055762);
   VbbHcc_both_dR_HZ__869->SetBinContent(23,0.003831265);
   VbbHcc_both_dR_HZ__869->SetBinContent(24,0.003734723);
   VbbHcc_both_dR_HZ__869->SetBinContent(25,0.002664007);
   VbbHcc_both_dR_HZ__869->SetBinContent(27,0.007181714);
   VbbHcc_both_dR_HZ__869->SetBinContent(28,0.01064947);
   VbbHcc_both_dR_HZ__869->SetBinContent(29,0.005050123);
   VbbHcc_both_dR_HZ__869->SetBinContent(31,0.002370096);
   VbbHcc_both_dR_HZ__869->SetBinContent(32,0.002352597);
   VbbHcc_both_dR_HZ__869->SetBinContent(34,0.002996246);
   VbbHcc_both_dR_HZ__869->SetBinContent(35,0.002296727);
   VbbHcc_both_dR_HZ__869->SetBinContent(36,0.001871144);
   VbbHcc_both_dR_HZ__869->SetBinContent(37,0.003196902);
   VbbHcc_both_dR_HZ__869->SetBinContent(38,0.002318411);
   VbbHcc_both_dR_HZ__869->SetBinContent(39,0.002068793);
   VbbHcc_both_dR_HZ__869->SetBinContent(44,0.001927266);
   VbbHcc_both_dR_HZ__869->SetBinContent(46,0.00447608);
   VbbHcc_both_dR_HZ__869->SetBinContent(54,0.00204855);
   VbbHcc_both_dR_HZ__869->SetBinError(6,0.001425773);
   VbbHcc_both_dR_HZ__869->SetBinError(8,0.001929603);
   VbbHcc_both_dR_HZ__869->SetBinError(11,0.002530526);
   VbbHcc_both_dR_HZ__869->SetBinError(12,0.001703818);
   VbbHcc_both_dR_HZ__869->SetBinError(13,0.004012388);
   VbbHcc_both_dR_HZ__869->SetBinError(15,0.001943164);
   VbbHcc_both_dR_HZ__869->SetBinError(22,0.002055762);
   VbbHcc_both_dR_HZ__869->SetBinError(23,0.002767398);
   VbbHcc_both_dR_HZ__869->SetBinError(24,0.002641295);
   VbbHcc_both_dR_HZ__869->SetBinError(25,0.002664007);
   VbbHcc_both_dR_HZ__869->SetBinError(27,0.004189029);
   VbbHcc_both_dR_HZ__869->SetBinError(28,0.004816739);
   VbbHcc_both_dR_HZ__869->SetBinError(29,0.003595513);
   VbbHcc_both_dR_HZ__869->SetBinError(31,0.002370096);
   VbbHcc_both_dR_HZ__869->SetBinError(32,0.002352597);
   VbbHcc_both_dR_HZ__869->SetBinError(34,0.002996246);
   VbbHcc_both_dR_HZ__869->SetBinError(35,0.002296727);
   VbbHcc_both_dR_HZ__869->SetBinError(36,0.001871144);
   VbbHcc_both_dR_HZ__869->SetBinError(37,0.003196902);
   VbbHcc_both_dR_HZ__869->SetBinError(38,0.002318411);
   VbbHcc_both_dR_HZ__869->SetBinError(39,0.002068793);
   VbbHcc_both_dR_HZ__869->SetBinError(44,0.001927266);
   VbbHcc_both_dR_HZ__869->SetBinError(46,0.003168412);
   VbbHcc_both_dR_HZ__869->SetBinError(54,0.00204855);
   VbbHcc_both_dR_HZ__869->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_dR_HZ__869->SetFillColor(ci);
   VbbHcc_both_dR_HZ__869->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_both_dR_HZ__869->GetXaxis()->SetRange(1,60);
   VbbHcc_both_dR_HZ__869->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ__869->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_dR_HZ__869->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ__869->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ__869->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ__869->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ__869->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_dR_HZ__869->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ__869->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_both_16->Modified();
   dR_HZ_both_16->cd();
   dR_HZ_both_16->SetSelected(dR_HZ_both_16);
}
