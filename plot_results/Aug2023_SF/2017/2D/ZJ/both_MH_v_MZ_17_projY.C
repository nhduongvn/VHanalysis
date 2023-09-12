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
   both_MH_v_MZ_17_projY->Range(-40,598.8056,226.6667,711.4566);
   both_MH_v_MZ_17_projY->SetFillColor(0);
   both_MH_v_MZ_17_projY->SetBorderMode(0);
   both_MH_v_MZ_17_projY->SetBorderSize(2);
   both_MH_v_MZ_17_projY->SetLeftMargin(0.15);
   both_MH_v_MZ_17_projY->SetFrameBorderMode(0);
   both_MH_v_MZ_17_projY->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_MH_v_MZ_py__36 = new TH1D("VbbHcc_both_MH_v_MZ_py__36","",2,0,200);
   VbbHcc_both_MH_v_MZ_py__36->SetBinContent(1,614.1578);
   VbbHcc_both_MH_v_MZ_py__36->SetBinContent(2,695.9);
   VbbHcc_both_MH_v_MZ_py__36->SetBinContent(3,1563.574);
   VbbHcc_both_MH_v_MZ_py__36->SetEntries(2874);
   VbbHcc_both_MH_v_MZ_py__36->SetStats(0);
   VbbHcc_both_MH_v_MZ_py__36->SetLineColor(0);
   VbbHcc_both_MH_v_MZ_py__36->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_both_MH_v_MZ_py__36->GetXaxis()->SetRange(1,20);
   VbbHcc_both_MH_v_MZ_py__36->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__36->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__36->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_both_MH_v_MZ_py__36->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__36->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__36->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__36->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_py__36->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__36->Draw("HIST");
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
