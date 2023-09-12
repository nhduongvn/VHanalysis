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
   both_MH_v_MZ_18_projY->Range(-40,202.7124,226.6667,548.0885);
   both_MH_v_MZ_18_projY->SetFillColor(0);
   both_MH_v_MZ_18_projY->SetBorderMode(0);
   both_MH_v_MZ_18_projY->SetBorderSize(2);
   both_MH_v_MZ_18_projY->SetLeftMargin(0.15);
   both_MH_v_MZ_18_projY->SetFrameBorderMode(0);
   both_MH_v_MZ_18_projY->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_MH_v_MZ_py__58 = new TH1D("VbbHcc_both_MH_v_MZ_py__58","",2,0,200);
   VbbHcc_both_MH_v_MZ_py__58->SetBinContent(1,249.7806);
   VbbHcc_both_MH_v_MZ_py__58->SetBinContent(2,500.3937);
   VbbHcc_both_MH_v_MZ_py__58->SetBinContent(3,1171.875);
   VbbHcc_both_MH_v_MZ_py__58->SetEntries(1922);
   VbbHcc_both_MH_v_MZ_py__58->SetStats(0);
   VbbHcc_both_MH_v_MZ_py__58->SetLineColor(0);
   VbbHcc_both_MH_v_MZ_py__58->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_both_MH_v_MZ_py__58->GetXaxis()->SetRange(1,20);
   VbbHcc_both_MH_v_MZ_py__58->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__58->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__58->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_both_MH_v_MZ_py__58->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__58->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__58->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__58->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_py__58->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__58->Draw("HIST");
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
