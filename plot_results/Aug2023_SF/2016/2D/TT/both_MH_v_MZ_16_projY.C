#ifdef __CLING__
#pragma cling optimize(0)
#endif
void both_MH_v_MZ_16_projY()
{
//=========Macro generated from canvas: both_MH_v_MZ_16_projY/both_MH_v_MZ_16_projY
//=========  (Tue Sep 12 12:59:01 2023) by ROOT version 6.28/04
   TCanvas *both_MH_v_MZ_16_projY = new TCanvas("both_MH_v_MZ_16_projY", "both_MH_v_MZ_16_projY",0,0,600,600);
   gStyle->SetOptStat(0);
   both_MH_v_MZ_16_projY->SetHighLightColor(2);
   both_MH_v_MZ_16_projY->Range(-40,1516.526,226.6667,4045.134);
   both_MH_v_MZ_16_projY->SetFillColor(0);
   both_MH_v_MZ_16_projY->SetBorderMode(0);
   both_MH_v_MZ_16_projY->SetBorderSize(2);
   both_MH_v_MZ_16_projY->SetLeftMargin(0.15);
   both_MH_v_MZ_16_projY->SetFrameBorderMode(0);
   both_MH_v_MZ_16_projY->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_MH_v_MZ_py__8 = new TH1D("VbbHcc_both_MH_v_MZ_py__8","",2,0,200);
   VbbHcc_both_MH_v_MZ_py__8->SetBinContent(1,1861.128);
   VbbHcc_both_MH_v_MZ_py__8->SetBinContent(2,3695.946);
   VbbHcc_both_MH_v_MZ_py__8->SetBinContent(3,6945.002);
   VbbHcc_both_MH_v_MZ_py__8->SetEntries(12502);
   VbbHcc_both_MH_v_MZ_py__8->SetStats(0);
   VbbHcc_both_MH_v_MZ_py__8->SetLineColor(0);
   VbbHcc_both_MH_v_MZ_py__8->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_both_MH_v_MZ_py__8->GetXaxis()->SetRange(1,20);
   VbbHcc_both_MH_v_MZ_py__8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__8->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_both_MH_v_MZ_py__8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_py__8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   both_MH_v_MZ_16_projY->Modified();
   both_MH_v_MZ_16_projY->cd();
   both_MH_v_MZ_16_projY->SetSelected(both_MH_v_MZ_16_projY);
}
