#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tagFirst_2combo_18_logY()
{
//=========Macro generated from canvas: Z_pt_tagFirst_2combo_18/Z_pt_tagFirst_2combo_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *Z_pt_tagFirst_2combo_18 = new TCanvas("Z_pt_tagFirst_2combo_18", "Z_pt_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_pt_tagFirst_2combo_18->SetHighLightColor(2);
   Z_pt_tagFirst_2combo_18->Range(59.99999,-3.420574,1660,-1.724669);
   Z_pt_tagFirst_2combo_18->SetFillColor(0);
   Z_pt_tagFirst_2combo_18->SetFillStyle(4000);
   Z_pt_tagFirst_2combo_18->SetBorderMode(0);
   Z_pt_tagFirst_2combo_18->SetBorderSize(2);
   Z_pt_tagFirst_2combo_18->SetLogy();
   Z_pt_tagFirst_2combo_18->SetLeftMargin(0.15);
   Z_pt_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_pt_tagFirst_2combo_18->SetFrameBorderMode(0);
   Z_pt_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_pt_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_Z_pt__99 = new TH1D("VH_tagFirst_2combo_Z_pt__99","",500,0,2000);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(40,0.002400052);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(44,0.001006722);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(45,0.002335104);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(55,0.002387506);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(56,0.002319012);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(59,0.002412888);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(60,0.002127519);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(61,0.004790387);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(62,0.002124915);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(64,0.002476757);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(67,0.002424007);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(76,0.002351008);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(79,0.00208343);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(85,0.002198887);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(94,0.006732735);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(106,0.002874786);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(114,0.001122139);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(165,0.002105444);
   VH_tagFirst_2combo_Z_pt__99->SetBinContent(194,0.002901436);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(40,0.002400052);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(44,0.001006722);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(45,0.002335104);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(55,0.002387506);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(56,0.002319012);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(59,0.002412888);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(60,0.002127519);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(61,0.004790387);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(62,0.002124915);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(64,0.002476757);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(67,0.002424007);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(76,0.002351008);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(79,0.00208343);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(85,0.002198887);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(94,0.00518723);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(106,0.002874786);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(114,0.001122139);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(165,0.002105444);
   VH_tagFirst_2combo_Z_pt__99->SetBinError(194,0.002901436);
   VH_tagFirst_2combo_Z_pt__99->SetEntries(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_Z_pt__99->SetLineColor(ci);
   VH_tagFirst_2combo_Z_pt__99->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   VH_tagFirst_2combo_Z_pt__99->GetXaxis()->SetRange(76,375);
   VH_tagFirst_2combo_Z_pt__99->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_pt__99->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_pt__99->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_pt__99->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_tagFirst_2combo_Z_pt__99->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_pt__99->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_Z_pt__99->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_Z_pt__99->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_Z_pt__99->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_pt__99->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_pt__99->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_pt__99->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_pt__99->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_tagFirst_2combo_18->Modified();
   Z_pt_tagFirst_2combo_18->cd();
   Z_pt_tagFirst_2combo_18->SetSelected(Z_pt_tagFirst_2combo_18);
}
