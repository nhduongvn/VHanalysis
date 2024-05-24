#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tagFirst_2combo_18()
{
//=========Macro generated from canvas: Z_dR_tagFirst_2combo_18/Z_dR_tagFirst_2combo_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_tagFirst_2combo_18 = new TCanvas("Z_dR_tagFirst_2combo_18", "Z_dR_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tagFirst_2combo_18->SetHighLightColor(2);
   Z_dR_tagFirst_2combo_18->Range(-1.2,-0.001198318,6.8,0.01078486);
   Z_dR_tagFirst_2combo_18->SetFillColor(0);
   Z_dR_tagFirst_2combo_18->SetFillStyle(4000);
   Z_dR_tagFirst_2combo_18->SetBorderMode(0);
   Z_dR_tagFirst_2combo_18->SetBorderSize(2);
   Z_dR_tagFirst_2combo_18->SetLeftMargin(0.15);
   Z_dR_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_dR_tagFirst_2combo_18->SetFrameBorderMode(0);
   Z_dR_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_dR_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_Z_dR__101 = new TH1D("VH_tagFirst_2combo_Z_dR__101","",30,0,6);
   VH_tagFirst_2combo_Z_dR__101->SetBinContent(3,0.00755043);
   VH_tagFirst_2combo_Z_dR__101->SetBinContent(4,0.008544871);
   VH_tagFirst_2combo_Z_dR__101->SetBinContent(5,0.009130039);
   VH_tagFirst_2combo_Z_dR__101->SetBinContent(7,0.004787557);
   VH_tagFirst_2combo_Z_dR__101->SetBinContent(8,0.001006722);
   VH_tagFirst_2combo_Z_dR__101->SetBinContent(9,0.002105444);
   VH_tagFirst_2combo_Z_dR__101->SetBinContent(10,0.002412888);
   VH_tagFirst_2combo_Z_dR__101->SetBinContent(18,0.004790387);
   VH_tagFirst_2combo_Z_dR__101->SetBinContent(19,0.004023575);
   VH_tagFirst_2combo_Z_dR__101->SetBinContent(23,0.004822818);
   VH_tagFirst_2combo_Z_dR__101->SetBinError(3,0.004385639);
   VH_tagFirst_2combo_Z_dR__101->SetBinError(4,0.004288427);
   VH_tagFirst_2combo_Z_dR__101->SetBinError(5,0.004568701);
   VH_tagFirst_2combo_Z_dR__101->SetBinError(7,0.003385326);
   VH_tagFirst_2combo_Z_dR__101->SetBinError(8,0.001006722);
   VH_tagFirst_2combo_Z_dR__101->SetBinError(9,0.002105444);
   VH_tagFirst_2combo_Z_dR__101->SetBinError(10,0.002412888);
   VH_tagFirst_2combo_Z_dR__101->SetBinError(18,0.004790387);
   VH_tagFirst_2combo_Z_dR__101->SetBinError(19,0.003110872);
   VH_tagFirst_2combo_Z_dR__101->SetBinError(23,0.004822818);
   VH_tagFirst_2combo_Z_dR__101->SetEntries(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_Z_dR__101->SetLineColor(ci);
   VH_tagFirst_2combo_Z_dR__101->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagFirst_2combo_Z_dR__101->GetXaxis()->SetRange(1,30);
   VH_tagFirst_2combo_Z_dR__101->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_dR__101->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_dR__101->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_dR__101->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_2combo_Z_dR__101->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_dR__101->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_Z_dR__101->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_Z_dR__101->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_Z_dR__101->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_dR__101->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_dR__101->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_dR__101->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_dR__101->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tagFirst_2combo_18->Modified();
   Z_dR_tagFirst_2combo_18->cd();
   Z_dR_tagFirst_2combo_18->SetSelected(Z_dR_tagFirst_2combo_18);
}
