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
   both_MH_v_MZ_18_projX->Range(-40,2452.635,226.6667,18295.56);
   both_MH_v_MZ_18_projX->SetFillColor(0);
   both_MH_v_MZ_18_projX->SetBorderMode(0);
   both_MH_v_MZ_18_projX->SetBorderSize(2);
   both_MH_v_MZ_18_projX->SetLeftMargin(0.15);
   both_MH_v_MZ_18_projX->SetFrameBorderMode(0);
   both_MH_v_MZ_18_projX->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_MH_v_MZ_px__59 = new TH1D("VbbHcc_both_MH_v_MZ_px__59","",2,0,200);
   VbbHcc_both_MH_v_MZ_px__59->SetBinContent(1,4611.728);
   VbbHcc_both_MH_v_MZ_px__59->SetBinContent(2,16107.73);
   VbbHcc_both_MH_v_MZ_px__59->SetBinContent(3,19126.89);
   VbbHcc_both_MH_v_MZ_px__59->SetEntries(39846);
   VbbHcc_both_MH_v_MZ_px__59->SetStats(0);
   VbbHcc_both_MH_v_MZ_px__59->SetLineColor(0);
   VbbHcc_both_MH_v_MZ_px__59->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_both_MH_v_MZ_px__59->GetXaxis()->SetRange(1,20);
   VbbHcc_both_MH_v_MZ_px__59->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__59->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_px__59->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__59->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_both_MH_v_MZ_px__59->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__59->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__59->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__59->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_px__59->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__59->Draw("HIST");
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
