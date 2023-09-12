#ifdef __CLING__
#pragma cling optimize(0)
#endif
void both_MH_v_MZ_16_projX()
{
//=========Macro generated from canvas: both_MH_v_MZ_16_projX/both_MH_v_MZ_16_projX
//=========  (Tue Sep 12 12:59:01 2023) by ROOT version 6.28/04
   TCanvas *both_MH_v_MZ_16_projX = new TCanvas("both_MH_v_MZ_16_projX", "both_MH_v_MZ_16_projX",0,0,600,600);
   gStyle->SetOptStat(0);
   both_MH_v_MZ_16_projX->SetHighLightColor(2);
   both_MH_v_MZ_16_projX->Range(-40,21670.04,226.6667,56985.17);
   both_MH_v_MZ_16_projX->SetFillColor(0);
   both_MH_v_MZ_16_projX->SetBorderMode(0);
   both_MH_v_MZ_16_projX->SetBorderSize(2);
   both_MH_v_MZ_16_projX->SetLeftMargin(0.15);
   both_MH_v_MZ_16_projX->SetFrameBorderMode(0);
   both_MH_v_MZ_16_projX->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_MH_v_MZ_px__3 = new TH1D("VbbHcc_both_MH_v_MZ_px__3","",2,0,200);
   VbbHcc_both_MH_v_MZ_px__3->SetBinContent(1,26482.83);
   VbbHcc_both_MH_v_MZ_px__3->SetBinContent(2,52108.32);
   VbbHcc_both_MH_v_MZ_px__3->SetBinContent(3,68215.72);
   VbbHcc_both_MH_v_MZ_px__3->SetEntries(146807);
   VbbHcc_both_MH_v_MZ_px__3->SetStats(0);
   VbbHcc_both_MH_v_MZ_px__3->SetLineColor(0);
   VbbHcc_both_MH_v_MZ_px__3->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_both_MH_v_MZ_px__3->GetXaxis()->SetRange(1,20);
   VbbHcc_both_MH_v_MZ_px__3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_px__3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__3->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_both_MH_v_MZ_px__3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_px__3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   both_MH_v_MZ_16_projX->Modified();
   both_MH_v_MZ_16_projX->cd();
   both_MH_v_MZ_16_projX->SetSelected(both_MH_v_MZ_16_projX);
}
