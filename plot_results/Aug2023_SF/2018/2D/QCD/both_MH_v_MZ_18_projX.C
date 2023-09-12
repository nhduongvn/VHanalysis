#ifdef __CLING__
#pragma cling optimize(0)
#endif
void both_MH_v_MZ_18_projX()
{
//=========Macro generated from canvas: both_MH_v_MZ_18_projX/both_MH_v_MZ_18_projX
//=========  (Tue Sep 12 12:59:02 2023) by ROOT version 6.28/04
   TCanvas *both_MH_v_MZ_18_projX = new TCanvas("both_MH_v_MZ_18_projX", "both_MH_v_MZ_18_projX",0,0,600,600);
   gStyle->SetOptStat(0);
   both_MH_v_MZ_18_projX->SetHighLightColor(2);
   both_MH_v_MZ_18_projX->Range(-40,39033.71,226.6667,119873.5);
   both_MH_v_MZ_18_projX->SetFillColor(0);
   both_MH_v_MZ_18_projX->SetBorderMode(0);
   both_MH_v_MZ_18_projX->SetBorderSize(2);
   both_MH_v_MZ_18_projX->SetLeftMargin(0.15);
   both_MH_v_MZ_18_projX->SetFrameBorderMode(0);
   both_MH_v_MZ_18_projX->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_MH_v_MZ_px__55 = new TH1D("VbbHcc_both_MH_v_MZ_px__55","",2,0,200);
   VbbHcc_both_MH_v_MZ_px__55->SetBinContent(1,50050.65);
   VbbHcc_both_MH_v_MZ_px__55->SetBinContent(2,108709.9);
   VbbHcc_both_MH_v_MZ_px__55->SetBinContent(3,142713.7);
   VbbHcc_both_MH_v_MZ_px__55->SetEntries(301474);
   VbbHcc_both_MH_v_MZ_px__55->SetStats(0);
   VbbHcc_both_MH_v_MZ_px__55->SetLineColor(0);
   VbbHcc_both_MH_v_MZ_px__55->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_both_MH_v_MZ_px__55->GetXaxis()->SetRange(1,20);
   VbbHcc_both_MH_v_MZ_px__55->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__55->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_px__55->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__55->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_both_MH_v_MZ_px__55->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__55->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__55->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__55->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_px__55->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__55->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   both_MH_v_MZ_18_projX->Modified();
   both_MH_v_MZ_18_projX->cd();
   both_MH_v_MZ_18_projX->SetSelected(both_MH_v_MZ_18_projX);
}
