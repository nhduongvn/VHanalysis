#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tagFirst_2combo_18_logY()
{
//=========Macro generated from canvas: H_pt_tagFirst_2combo_18/H_pt_tagFirst_2combo_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *H_pt_tagFirst_2combo_18 = new TCanvas("H_pt_tagFirst_2combo_18", "H_pt_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_pt_tagFirst_2combo_18->SetHighLightColor(2);
   H_pt_tagFirst_2combo_18->Range(59.99999,-3.374876,1660,-2.135945);
   H_pt_tagFirst_2combo_18->SetFillColor(0);
   H_pt_tagFirst_2combo_18->SetFillStyle(4000);
   H_pt_tagFirst_2combo_18->SetBorderMode(0);
   H_pt_tagFirst_2combo_18->SetBorderSize(2);
   H_pt_tagFirst_2combo_18->SetLogy();
   H_pt_tagFirst_2combo_18->SetLeftMargin(0.15);
   H_pt_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_pt_tagFirst_2combo_18->SetFrameBorderMode(0);
   H_pt_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_pt_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_H_pt__100 = new TH1D("VH_tagFirst_2combo_H_pt__100","",500,0,2000);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(28,0.004790387);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(33,0.002424007);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(35,0.001006722);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(39,0.002400052);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(40,0.002387506);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(41,0.002335104);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(47,0.002319012);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(49,0.002476757);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(51,0.00208343);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(52,0.002127519);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(54,0.002874786);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(57,0.002124915);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(58,0.004822818);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(59,0.002351008);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(62,0.002412888);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(80,0.001909916);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(81,0.002198887);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(105,0.002901436);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(111,0.002105444);
   VH_tagFirst_2combo_H_pt__100->SetBinContent(146,0.001122139);
   VH_tagFirst_2combo_H_pt__100->SetBinError(28,0.004790387);
   VH_tagFirst_2combo_H_pt__100->SetBinError(33,0.002424007);
   VH_tagFirst_2combo_H_pt__100->SetBinError(35,0.001006722);
   VH_tagFirst_2combo_H_pt__100->SetBinError(39,0.002400052);
   VH_tagFirst_2combo_H_pt__100->SetBinError(40,0.002387506);
   VH_tagFirst_2combo_H_pt__100->SetBinError(41,0.002335104);
   VH_tagFirst_2combo_H_pt__100->SetBinError(47,0.002319012);
   VH_tagFirst_2combo_H_pt__100->SetBinError(49,0.002476757);
   VH_tagFirst_2combo_H_pt__100->SetBinError(51,0.00208343);
   VH_tagFirst_2combo_H_pt__100->SetBinError(52,0.002127519);
   VH_tagFirst_2combo_H_pt__100->SetBinError(54,0.002874786);
   VH_tagFirst_2combo_H_pt__100->SetBinError(57,0.002124915);
   VH_tagFirst_2combo_H_pt__100->SetBinError(58,0.004822818);
   VH_tagFirst_2combo_H_pt__100->SetBinError(59,0.002351008);
   VH_tagFirst_2combo_H_pt__100->SetBinError(62,0.002412888);
   VH_tagFirst_2combo_H_pt__100->SetBinError(80,0.001909916);
   VH_tagFirst_2combo_H_pt__100->SetBinError(81,0.002198887);
   VH_tagFirst_2combo_H_pt__100->SetBinError(105,0.002901436);
   VH_tagFirst_2combo_H_pt__100->SetBinError(111,0.002105444);
   VH_tagFirst_2combo_H_pt__100->SetBinError(146,0.001122139);
   VH_tagFirst_2combo_H_pt__100->SetEntries(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_H_pt__100->SetLineColor(ci);
   VH_tagFirst_2combo_H_pt__100->GetXaxis()->SetTitle("H p_{T} [GeV]");
   VH_tagFirst_2combo_H_pt__100->GetXaxis()->SetRange(76,375);
   VH_tagFirst_2combo_H_pt__100->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_pt__100->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_pt__100->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_pt__100->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_tagFirst_2combo_H_pt__100->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_pt__100->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_H_pt__100->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_H_pt__100->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_H_pt__100->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_pt__100->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_pt__100->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_pt__100->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_pt__100->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tagFirst_2combo_18->Modified();
   H_pt_tagFirst_2combo_18->cd();
   H_pt_tagFirst_2combo_18->SetSelected(H_pt_tagFirst_2combo_18);
}
