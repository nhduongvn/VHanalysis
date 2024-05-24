#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetpt_JEC_tagFirst_2combo_18_logY()
{
//=========Macro generated from canvas: Z_jetpt_JEC_tagFirst_2combo_18/Z_jetpt_JEC_tagFirst_2combo_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *Z_jetpt_JEC_tagFirst_2combo_18 = new TCanvas("Z_jetpt_JEC_tagFirst_2combo_18", "Z_jetpt_JEC_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_JEC_tagFirst_2combo_18->SetHighLightColor(2);
   Z_jetpt_JEC_tagFirst_2combo_18->Range(-60,-3.455492,340,-1.881779);
   Z_jetpt_JEC_tagFirst_2combo_18->SetFillColor(0);
   Z_jetpt_JEC_tagFirst_2combo_18->SetFillStyle(4000);
   Z_jetpt_JEC_tagFirst_2combo_18->SetBorderMode(0);
   Z_jetpt_JEC_tagFirst_2combo_18->SetBorderSize(2);
   Z_jetpt_JEC_tagFirst_2combo_18->SetLogy();
   Z_jetpt_JEC_tagFirst_2combo_18->SetLeftMargin(0.15);
   Z_jetpt_JEC_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_jetpt_JEC_tagFirst_2combo_18->SetFrameBorderMode(0);
   Z_jetpt_JEC_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_jetpt_JEC_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_Z_jetpt_JEC__118 = new TH1D("VH_tagFirst_2combo_Z_jetpt_JEC__118","",75,0,300);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(25,0.002400052);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(28,0.002335104);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(31,0.002319012);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(32,0.002387506);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(36,0.001006722);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(39,0.002127519);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(41,0.002424007);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(45,0.002124915);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(47,0.002476757);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(53,0.002351008);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(54,0.00208343);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(55,0.002198887);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(57,0.001909916);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(58,0.002874786);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(61,0.002412888);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(64,0.004790387);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(71,0.004822818);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinContent(76,0.006129019);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(25,0.002400052);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(28,0.002335104);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(31,0.002319012);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(32,0.002387506);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(36,0.001006722);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(39,0.002127519);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(41,0.002424007);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(45,0.002124915);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(47,0.002476757);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(53,0.002351008);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(54,0.00208343);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(55,0.002198887);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(57,0.001909916);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(58,0.002874786);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(61,0.002412888);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(64,0.004790387);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(71,0.004822818);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetBinError(76,0.003756384);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetEntries(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_Z_jetpt_JEC__118->SetLineColor(ci);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetXaxis()->SetTitle("b-jet p_{T} (w/ JEC) [GeV]");
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetXaxis()->SetRange(1,75);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_jetpt_JEC__118->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_JEC_tagFirst_2combo_18->Modified();
   Z_jetpt_JEC_tagFirst_2combo_18->cd();
   Z_jetpt_JEC_tagFirst_2combo_18->SetSelected(Z_jetpt_JEC_tagFirst_2combo_18);
}
