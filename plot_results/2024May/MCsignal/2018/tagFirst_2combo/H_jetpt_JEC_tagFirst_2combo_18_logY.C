#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_JEC_tagFirst_2combo_18_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_tagFirst_2combo_18/H_jetpt_JEC_tagFirst_2combo_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *H_jetpt_JEC_tagFirst_2combo_18 = new TCanvas("H_jetpt_JEC_tagFirst_2combo_18", "H_jetpt_JEC_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_tagFirst_2combo_18->SetHighLightColor(2);
   H_jetpt_JEC_tagFirst_2combo_18->Range(-60,-3.49096,340,-1.562562);
   H_jetpt_JEC_tagFirst_2combo_18->SetFillColor(0);
   H_jetpt_JEC_tagFirst_2combo_18->SetFillStyle(4000);
   H_jetpt_JEC_tagFirst_2combo_18->SetBorderMode(0);
   H_jetpt_JEC_tagFirst_2combo_18->SetBorderSize(2);
   H_jetpt_JEC_tagFirst_2combo_18->SetLogy();
   H_jetpt_JEC_tagFirst_2combo_18->SetLeftMargin(0.15);
   H_jetpt_JEC_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_jetpt_JEC_tagFirst_2combo_18->SetFrameBorderMode(0);
   H_jetpt_JEC_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_jetpt_JEC_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_H_jetpt_JEC__114 = new TH1D("VH_tagFirst_2combo_H_jetpt_JEC__114","",75,0,300);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinContent(19,0.002400052);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinContent(22,0.002335104);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinContent(23,0.002387506);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinContent(26,0.001006722);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinContent(28,0.004560187);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinContent(31,0.002424007);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinContent(33,0.009269349);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinContent(35,0.002874786);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinContent(40,0.002124915);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinContent(41,0.004790387);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinContent(42,0.004260924);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinContent(44,0.002198887);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinContent(60,0.002412888);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinContent(76,0.006129019);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinError(19,0.002400052);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinError(22,0.002335104);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinError(23,0.002387506);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinError(26,0.001006722);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinError(28,0.003236511);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinError(31,0.002424007);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinError(33,0.005758796);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinError(35,0.002874786);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinError(40,0.002124915);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinError(41,0.004790387);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinError(42,0.003029029);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinError(44,0.002198887);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinError(60,0.002412888);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetBinError(76,0.003756384);
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetEntries(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_H_jetpt_JEC__114->SetLineColor(ci);
   VH_tagFirst_2combo_H_jetpt_JEC__114->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VH_tagFirst_2combo_H_jetpt_JEC__114->GetXaxis()->SetRange(1,75);
   VH_tagFirst_2combo_H_jetpt_JEC__114->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_jetpt_JEC__114->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_jetpt_JEC__114->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_jetpt_JEC__114->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_tagFirst_2combo_H_jetpt_JEC__114->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_jetpt_JEC__114->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_H_jetpt_JEC__114->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_H_jetpt_JEC__114->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_H_jetpt_JEC__114->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_jetpt_JEC__114->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_jetpt_JEC__114->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_jetpt_JEC__114->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_jetpt_JEC__114->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC_tagFirst_2combo_18->Modified();
   H_jetpt_JEC_tagFirst_2combo_18->cd();
   H_jetpt_JEC_tagFirst_2combo_18->SetSelected(H_jetpt_JEC_tagFirst_2combo_18);
}
