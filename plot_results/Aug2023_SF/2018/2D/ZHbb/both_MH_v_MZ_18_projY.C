#ifdef __CLING__
#pragma cling optimize(0)
#endif
void both_MH_v_MZ_18_projY()
{
//=========Macro generated from canvas: both_MH_v_MZ_18_projY/both_MH_v_MZ_18_projY
//=========  (Tue Sep 12 12:59:02 2023) by ROOT version 6.28/04
   TCanvas *both_MH_v_MZ_18_projY = new TCanvas("both_MH_v_MZ_18_projY", "both_MH_v_MZ_18_projY",0,0,600,600);
   gStyle->SetOptStat(0);
   both_MH_v_MZ_18_projY->SetHighLightColor(2);
   both_MH_v_MZ_18_projY->Range(-40,15.80431,226.6667,25.47298);
   both_MH_v_MZ_18_projY->SetFillColor(0);
   both_MH_v_MZ_18_projY->SetBorderMode(0);
   both_MH_v_MZ_18_projY->SetBorderSize(2);
   both_MH_v_MZ_18_projY->SetLeftMargin(0.15);
   both_MH_v_MZ_18_projY->SetFrameBorderMode(0);
   both_MH_v_MZ_18_projY->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_MH_v_MZ_py__72 = new TH1D("VbbHcc_both_MH_v_MZ_py__72","",2,0,200);
   VbbHcc_both_MH_v_MZ_py__72->SetBinContent(1,17.12197);
   VbbHcc_both_MH_v_MZ_py__72->SetBinContent(2,24.13778);
   VbbHcc_both_MH_v_MZ_py__72->SetBinContent(3,42.14248);
   VbbHcc_both_MH_v_MZ_py__72->SetEntries(83);
   VbbHcc_both_MH_v_MZ_py__72->SetStats(0);
   VbbHcc_both_MH_v_MZ_py__72->SetLineColor(0);
   VbbHcc_both_MH_v_MZ_py__72->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_both_MH_v_MZ_py__72->GetXaxis()->SetRange(1,20);
   VbbHcc_both_MH_v_MZ_py__72->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__72->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__72->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_both_MH_v_MZ_py__72->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__72->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__72->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__72->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_py__72->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__72->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   both_MH_v_MZ_18_projY->Modified();
   both_MH_v_MZ_18_projY->cd();
   both_MH_v_MZ_18_projY->SetSelected(both_MH_v_MZ_18_projY);
}
