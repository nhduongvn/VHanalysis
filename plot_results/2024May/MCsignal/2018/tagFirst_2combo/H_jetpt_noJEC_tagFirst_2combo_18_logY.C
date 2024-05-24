#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_noJEC_tagFirst_2combo_18_logY()
{
//=========Macro generated from canvas: H_jetpt_noJEC_tagFirst_2combo_18/H_jetpt_noJEC_tagFirst_2combo_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *H_jetpt_noJEC_tagFirst_2combo_18 = new TCanvas("H_jetpt_noJEC_tagFirst_2combo_18", "H_jetpt_noJEC_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_noJEC_tagFirst_2combo_18->SetHighLightColor(2);
   H_jetpt_noJEC_tagFirst_2combo_18->Range(-60,-3.117988,340,-1.76062);
   H_jetpt_noJEC_tagFirst_2combo_18->SetFillColor(0);
   H_jetpt_noJEC_tagFirst_2combo_18->SetFillStyle(4000);
   H_jetpt_noJEC_tagFirst_2combo_18->SetBorderMode(0);
   H_jetpt_noJEC_tagFirst_2combo_18->SetBorderSize(2);
   H_jetpt_noJEC_tagFirst_2combo_18->SetLogy();
   H_jetpt_noJEC_tagFirst_2combo_18->SetLeftMargin(0.15);
   H_jetpt_noJEC_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_jetpt_noJEC_tagFirst_2combo_18->SetFrameBorderMode(0);
   H_jetpt_noJEC_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_jetpt_noJEC_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_H_jetpt_noJEC__113 = new TH1D("VH_tagFirst_2combo_H_jetpt_noJEC__113","",75,0,300);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinContent(21,0.002400052);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinContent(22,0.002387506);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinContent(23,0.003341826);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinContent(28,0.002476757);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinContent(30,0.00208343);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinContent(31,0.002319012);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinContent(32,0.002424007);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinContent(33,0.004822818);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinContent(34,0.002127519);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinContent(36,0.002874786);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinContent(37,0.002124915);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinContent(41,0.002351008);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinContent(43,0.006700303);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinContent(44,0.002198887);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinContent(61,0.002412888);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinContent(76,0.006129019);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinError(21,0.002400052);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinError(22,0.002387506);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinError(23,0.002542872);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinError(28,0.002476757);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinError(30,0.00208343);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinError(31,0.002319012);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinError(32,0.002424007);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinError(33,0.004822818);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinError(34,0.002127519);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinError(36,0.002874786);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinError(37,0.002124915);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinError(41,0.002351008);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinError(43,0.005157091);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinError(44,0.002198887);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinError(61,0.002412888);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetBinError(76,0.003756384);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetEntries(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_H_jetpt_noJEC__113->SetLineColor(ci);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetXaxis()->SetTitle("c-jet p_{T} [GeV]");
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetXaxis()->SetRange(1,75);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_jetpt_noJEC__113->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_noJEC_tagFirst_2combo_18->Modified();
   H_jetpt_noJEC_tagFirst_2combo_18->cd();
   H_jetpt_noJEC_tagFirst_2combo_18->SetSelected(H_jetpt_noJEC_tagFirst_2combo_18);
}
