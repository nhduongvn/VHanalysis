#ifdef __CLING__
#pragma cling optimize(0)
#endif
void both_MH_v_MZ_17_projY()
{
//=========Macro generated from canvas: both_MH_v_MZ_17_projY/both_MH_v_MZ_17_projY
//=========  (Tue Sep 12 12:59:01 2023) by ROOT version 6.28/04
   TCanvas *both_MH_v_MZ_17_projY = new TCanvas("both_MH_v_MZ_17_projY", "both_MH_v_MZ_17_projY",0,0,600,600);
   gStyle->SetOptStat(0);
   both_MH_v_MZ_17_projY->SetHighLightColor(2);
   both_MH_v_MZ_17_projY->Range(-40,10383.1,226.6667,16025.14);
   both_MH_v_MZ_17_projY->SetFillColor(0);
   both_MH_v_MZ_17_projY->SetBorderMode(0);
   both_MH_v_MZ_17_projY->SetBorderSize(2);
   both_MH_v_MZ_17_projY->SetLeftMargin(0.15);
   both_MH_v_MZ_17_projY->SetFrameBorderMode(0);
   both_MH_v_MZ_17_projY->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_MH_v_MZ_py__28 = new TH1D("VbbHcc_both_MH_v_MZ_py__28","",2,0,200);
   VbbHcc_both_MH_v_MZ_py__28->SetBinContent(1,11152);
   VbbHcc_both_MH_v_MZ_py__28->SetBinContent(2,15246);
   VbbHcc_both_MH_v_MZ_py__28->SetBinContent(3,31528);
   VbbHcc_both_MH_v_MZ_py__28->SetEntries(57926);
   VbbHcc_both_MH_v_MZ_py__28->SetStats(0);
   VbbHcc_both_MH_v_MZ_py__28->SetLineColor(0);
   VbbHcc_both_MH_v_MZ_py__28->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_both_MH_v_MZ_py__28->GetXaxis()->SetRange(1,20);
   VbbHcc_both_MH_v_MZ_py__28->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__28->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__28->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_both_MH_v_MZ_py__28->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__28->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__28->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__28->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_py__28->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__28->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   both_MH_v_MZ_17_projY->Modified();
   both_MH_v_MZ_17_projY->cd();
   both_MH_v_MZ_17_projY->SetSelected(both_MH_v_MZ_17_projY);
}
