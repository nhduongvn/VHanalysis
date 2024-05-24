#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZZ_tagFirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Sphericity_ZZ_tagFirst_2b1c_18/Sphericity_ZZ_tagFirst_2b1c_18
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZZ_tagFirst_2b1c_18 = new TCanvas("Sphericity_ZZ_tagFirst_2b1c_18", "Sphericity_ZZ_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZZ_tagFirst_2b1c_18->SetHighLightColor(2);
   Sphericity_ZZ_tagFirst_2b1c_18->Range(-0.2,-1.283616,1.133333,2.97818);
   Sphericity_ZZ_tagFirst_2b1c_18->SetFillColor(0);
   Sphericity_ZZ_tagFirst_2b1c_18->SetFillStyle(4000);
   Sphericity_ZZ_tagFirst_2b1c_18->SetBorderMode(0);
   Sphericity_ZZ_tagFirst_2b1c_18->SetBorderSize(2);
   Sphericity_ZZ_tagFirst_2b1c_18->SetLogy();
   Sphericity_ZZ_tagFirst_2b1c_18->SetLeftMargin(0.15);
   Sphericity_ZZ_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagFirst_2b1c_18->SetFrameBorderMode(0);
   Sphericity_ZZ_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2610 = new TH1D("VH_tagFirst_2b1c_Sphericity__2610","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinContent(1,188.127);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinContent(2,123.1445);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinContent(3,78.588);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinContent(4,51.4803);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinContent(5,33.05847);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinContent(6,15.87878);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinContent(7,9.127164);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinContent(8,2.308206);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinContent(9,0.5027586);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinContent(10,1.979969);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinContent(11,0.385639);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinContent(12,0.2777112);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinContent(13,0.4782629);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinContent(14,0.5370637);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinContent(15,0.5048748);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinContent(16,4.158894);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinError(1,10.16037);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinError(2,7.945749);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinError(3,6.443209);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinError(4,5.605478);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinError(5,3.933753);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinError(6,2.609318);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinError(7,2.143166);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinError(8,0.9215122);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinError(9,0.3595777);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinError(10,1.08387);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinError(11,0.385639);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinError(12,0.2777112);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinError(13,0.4782629);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinError(14,0.3953973);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinError(15,0.5048748);
   VH_tagFirst_2b1c_Sphericity__2610->SetBinError(16,3.678113);
   VH_tagFirst_2b1c_Sphericity__2610->SetEntries(1195);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2610->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2610->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2610->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2610->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2610->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2610->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2610->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2610->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2610->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2610->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2610->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2610->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2610->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2610->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2610->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2610->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZZ_tagFirst_2b1c_18->Modified();
   Sphericity_ZZ_tagFirst_2b1c_18->cd();
   Sphericity_ZZ_tagFirst_2b1c_18->SetSelected(Sphericity_ZZ_tagFirst_2b1c_18);
}
