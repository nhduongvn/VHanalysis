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
   both_MH_v_MZ_18_projY->Range(-40,1024.164,226.6667,1092.346);
   both_MH_v_MZ_18_projY->SetFillColor(0);
   both_MH_v_MZ_18_projY->SetBorderMode(0);
   both_MH_v_MZ_18_projY->SetBorderSize(2);
   both_MH_v_MZ_18_projY->SetLeftMargin(0.15);
   both_MH_v_MZ_18_projY->SetFrameBorderMode(0);
   both_MH_v_MZ_18_projY->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_MH_v_MZ_py__62 = new TH1D("VbbHcc_both_MH_v_MZ_py__62","",2,0,200);
   VbbHcc_both_MH_v_MZ_py__62->SetBinContent(1,1033.456);
   VbbHcc_both_MH_v_MZ_py__62->SetBinContent(2,1082.931);
   VbbHcc_both_MH_v_MZ_py__62->SetBinContent(3,2625.274);
   VbbHcc_both_MH_v_MZ_py__62->SetEntries(4742);
   VbbHcc_both_MH_v_MZ_py__62->SetStats(0);
   VbbHcc_both_MH_v_MZ_py__62->SetLineColor(0);
   VbbHcc_both_MH_v_MZ_py__62->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_both_MH_v_MZ_py__62->GetXaxis()->SetRange(1,20);
   VbbHcc_both_MH_v_MZ_py__62->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__62->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__62->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_both_MH_v_MZ_py__62->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__62->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__62->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__62->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_py__62->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__62->Draw("HIST");
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
