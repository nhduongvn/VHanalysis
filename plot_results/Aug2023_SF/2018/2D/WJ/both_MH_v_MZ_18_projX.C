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
   both_MH_v_MZ_18_projX->Range(-40,47.04046,226.6667,164.9343);
   both_MH_v_MZ_18_projX->SetFillColor(0);
   both_MH_v_MZ_18_projX->SetBorderMode(0);
   both_MH_v_MZ_18_projX->SetBorderSize(2);
   both_MH_v_MZ_18_projX->SetLeftMargin(0.15);
   both_MH_v_MZ_18_projX->SetFrameBorderMode(0);
   both_MH_v_MZ_18_projX->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_MH_v_MZ_px__63 = new TH1D("VbbHcc_both_MH_v_MZ_px__63","",2,0,200);
   VbbHcc_both_MH_v_MZ_px__63->SetBinContent(1,63.10717);
   VbbHcc_both_MH_v_MZ_px__63->SetBinContent(2,148.6537);
   VbbHcc_both_MH_v_MZ_px__63->SetBinContent(3,345.6804);
   VbbHcc_both_MH_v_MZ_px__63->SetEntries(557);
   VbbHcc_both_MH_v_MZ_px__63->SetStats(0);
   VbbHcc_both_MH_v_MZ_px__63->SetLineColor(0);
   VbbHcc_both_MH_v_MZ_px__63->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_both_MH_v_MZ_px__63->GetXaxis()->SetRange(1,20);
   VbbHcc_both_MH_v_MZ_px__63->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__63->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_px__63->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__63->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_both_MH_v_MZ_px__63->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__63->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__63->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__63->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_px__63->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__63->Draw("HIST");
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
