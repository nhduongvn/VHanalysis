#ifdef __CLING__
#pragma cling optimize(0)
#endif
void both_MH_v_MZ_17_projX()
{
//=========Macro generated from canvas: both_MH_v_MZ_17_projX/both_MH_v_MZ_17_projX
//=========  (Tue Sep 12 12:59:01 2023) by ROOT version 6.28/04
   TCanvas *both_MH_v_MZ_17_projX = new TCanvas("both_MH_v_MZ_17_projX", "both_MH_v_MZ_17_projX",0,0,600,600);
   gStyle->SetOptStat(0);
   both_MH_v_MZ_17_projX->SetHighLightColor(2);
   both_MH_v_MZ_17_projX->Range(-40,20.29823,226.6667,112.0065);
   both_MH_v_MZ_17_projX->SetFillColor(0);
   both_MH_v_MZ_17_projX->SetBorderMode(0);
   both_MH_v_MZ_17_projX->SetBorderSize(2);
   both_MH_v_MZ_17_projX->SetLeftMargin(0.15);
   both_MH_v_MZ_17_projX->SetFrameBorderMode(0);
   both_MH_v_MZ_17_projX->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_MH_v_MZ_px__37 = new TH1D("VbbHcc_both_MH_v_MZ_px__37","",2,0,200);
   VbbHcc_both_MH_v_MZ_px__37->SetBinContent(1,32.79634);
   VbbHcc_both_MH_v_MZ_px__37->SetBinContent(2,99.34202);
   VbbHcc_both_MH_v_MZ_px__37->SetBinContent(3,168.2451);
   VbbHcc_both_MH_v_MZ_px__37->SetEntries(300);
   VbbHcc_both_MH_v_MZ_px__37->SetStats(0);
   VbbHcc_both_MH_v_MZ_px__37->SetLineColor(0);
   VbbHcc_both_MH_v_MZ_px__37->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_both_MH_v_MZ_px__37->GetXaxis()->SetRange(1,20);
   VbbHcc_both_MH_v_MZ_px__37->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__37->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_px__37->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__37->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_both_MH_v_MZ_px__37->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__37->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__37->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__37->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_px__37->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__37->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   both_MH_v_MZ_17_projX->Modified();
   both_MH_v_MZ_17_projX->cd();
   both_MH_v_MZ_17_projX->SetSelected(both_MH_v_MZ_17_projX);
}
