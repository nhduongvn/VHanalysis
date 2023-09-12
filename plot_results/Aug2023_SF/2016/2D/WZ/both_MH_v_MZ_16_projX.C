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
   both_MH_v_MZ_16_projX->Range(-40,1.2178,226.6667,1.2714);
   both_MH_v_MZ_16_projX->SetFillColor(0);
   both_MH_v_MZ_16_projX->SetBorderMode(0);
   both_MH_v_MZ_16_projX->SetBorderSize(2);
   both_MH_v_MZ_16_projX->SetLeftMargin(0.15);
   both_MH_v_MZ_16_projX->SetFrameBorderMode(0);
   both_MH_v_MZ_16_projX->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_MH_v_MZ_px__15 = new TH1D("VbbHcc_both_MH_v_MZ_px__15","",2,0,200);
   VbbHcc_both_MH_v_MZ_px__15->SetBinContent(1,1.225105);
   VbbHcc_both_MH_v_MZ_px__15->SetBinContent(2,1.263998);
   VbbHcc_both_MH_v_MZ_px__15->SetBinContent(3,2.400647);
   VbbHcc_both_MH_v_MZ_px__15->SetEntries(5);
   VbbHcc_both_MH_v_MZ_px__15->SetStats(0);
   VbbHcc_both_MH_v_MZ_px__15->SetLineColor(0);
   VbbHcc_both_MH_v_MZ_px__15->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_both_MH_v_MZ_px__15->GetXaxis()->SetRange(1,20);
   VbbHcc_both_MH_v_MZ_px__15->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__15->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_px__15->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__15->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_both_MH_v_MZ_px__15->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__15->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__15->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__15->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_px__15->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__15->Draw("HIST");
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
