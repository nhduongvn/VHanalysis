#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tagFirst_2combo_18()
{
//=========Macro generated from canvas: H_dR_tagFirst_2combo_18/H_dR_tagFirst_2combo_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *H_dR_tagFirst_2combo_18 = new TCanvas("H_dR_tagFirst_2combo_18", "H_dR_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tagFirst_2combo_18->SetHighLightColor(2);
   H_dR_tagFirst_2combo_18->Range(-1.24,-0.001250725,7.026667,0.01125653);
   H_dR_tagFirst_2combo_18->SetFillColor(0);
   H_dR_tagFirst_2combo_18->SetFillStyle(4000);
   H_dR_tagFirst_2combo_18->SetBorderMode(0);
   H_dR_tagFirst_2combo_18->SetBorderSize(2);
   H_dR_tagFirst_2combo_18->SetLeftMargin(0.15);
   H_dR_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_dR_tagFirst_2combo_18->SetFrameBorderMode(0);
   H_dR_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_dR_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_H_dR__102 = new TH1D("VH_tagFirst_2combo_H_dR__102","",30,0,6);
   VH_tagFirst_2combo_H_dR__102->SetBinContent(3,0.008936568);
   VH_tagFirst_2combo_H_dR__102->SetBinContent(4,0.00921065);
   VH_tagFirst_2combo_H_dR__102->SetBinContent(5,0.009529336);
   VH_tagFirst_2combo_H_dR__102->SetBinContent(6,0.006243262);
   VH_tagFirst_2combo_H_dR__102->SetBinContent(7,0.002400052);
   VH_tagFirst_2combo_H_dR__102->SetBinContent(8,0.002424007);
   VH_tagFirst_2combo_H_dR__102->SetBinContent(9,0.002412888);
   VH_tagFirst_2combo_H_dR__102->SetBinContent(15,0.001122139);
   VH_tagFirst_2combo_H_dR__102->SetBinContent(19,0.004790387);
   VH_tagFirst_2combo_H_dR__102->SetBinContent(30,0.002105444);
   VH_tagFirst_2combo_H_dR__102->SetBinError(3,0.004488257);
   VH_tagFirst_2combo_H_dR__102->SetBinError(4,0.004652599);
   VH_tagFirst_2combo_H_dR__102->SetBinError(5,0.005859827);
   VH_tagFirst_2combo_H_dR__102->SetBinError(6,0.003858047);
   VH_tagFirst_2combo_H_dR__102->SetBinError(7,0.002400052);
   VH_tagFirst_2combo_H_dR__102->SetBinError(8,0.002424007);
   VH_tagFirst_2combo_H_dR__102->SetBinError(9,0.002412888);
   VH_tagFirst_2combo_H_dR__102->SetBinError(15,0.001122139);
   VH_tagFirst_2combo_H_dR__102->SetBinError(19,0.004790387);
   VH_tagFirst_2combo_H_dR__102->SetBinError(30,0.002105444);
   VH_tagFirst_2combo_H_dR__102->SetEntries(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_H_dR__102->SetLineColor(ci);
   VH_tagFirst_2combo_H_dR__102->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_tagFirst_2combo_H_dR__102->GetXaxis()->SetRange(1,31);
   VH_tagFirst_2combo_H_dR__102->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_dR__102->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_dR__102->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_dR__102->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_2combo_H_dR__102->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_dR__102->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_H_dR__102->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_H_dR__102->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_H_dR__102->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_dR__102->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_dR__102->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_dR__102->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_dR__102->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tagFirst_2combo_18->Modified();
   H_dR_tagFirst_2combo_18->cd();
   H_dR_tagFirst_2combo_18->SetSelected(H_dR_tagFirst_2combo_18);
}
