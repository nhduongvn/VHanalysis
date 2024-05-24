#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZZ_tagOnly_18()
{
//=========Macro generated from canvas: Sphericity_ZZ_tagOnly_18/Sphericity_ZZ_tagOnly_18
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZZ_tagOnly_18 = new TCanvas("Sphericity_ZZ_tagOnly_18", "Sphericity_ZZ_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZZ_tagOnly_18->SetHighLightColor(2);
   Sphericity_ZZ_tagOnly_18->Range(-0.2,-10.3502,1.133333,93.15181);
   Sphericity_ZZ_tagOnly_18->SetFillColor(0);
   Sphericity_ZZ_tagOnly_18->SetFillStyle(4000);
   Sphericity_ZZ_tagOnly_18->SetBorderMode(0);
   Sphericity_ZZ_tagOnly_18->SetBorderSize(2);
   Sphericity_ZZ_tagOnly_18->SetLeftMargin(0.15);
   Sphericity_ZZ_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagOnly_18->SetFrameBorderMode(0);
   Sphericity_ZZ_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1170 = new TH1D("VH_tagOnly_Sphericity__1170","",25,0,1);
   VH_tagOnly_Sphericity__1170->SetBinContent(1,78.85868);
   VH_tagOnly_Sphericity__1170->SetBinContent(2,60.31647);
   VH_tagOnly_Sphericity__1170->SetBinContent(3,27.02193);
   VH_tagOnly_Sphericity__1170->SetBinContent(4,26.566);
   VH_tagOnly_Sphericity__1170->SetBinContent(5,14.78985);
   VH_tagOnly_Sphericity__1170->SetBinContent(6,5.356943);
   VH_tagOnly_Sphericity__1170->SetBinContent(7,3.014226);
   VH_tagOnly_Sphericity__1170->SetBinContent(8,1.11287);
   VH_tagOnly_Sphericity__1170->SetBinContent(9,0.213215);
   VH_tagOnly_Sphericity__1170->SetBinContent(10,1.488102);
   VH_tagOnly_Sphericity__1170->SetBinContent(12,0.6662793);
   VH_tagOnly_Sphericity__1170->SetBinContent(14,0.1906847);
   VH_tagOnly_Sphericity__1170->SetBinContent(15,0.5048748);
   VH_tagOnly_Sphericity__1170->SetBinError(1,6.716919);
   VH_tagOnly_Sphericity__1170->SetBinError(2,5.516519);
   VH_tagOnly_Sphericity__1170->SetBinError(3,3.70479);
   VH_tagOnly_Sphericity__1170->SetBinError(4,4.500426);
   VH_tagOnly_Sphericity__1170->SetBinError(5,2.740782);
   VH_tagOnly_Sphericity__1170->SetBinError(6,1.371716);
   VH_tagOnly_Sphericity__1170->SetBinError(7,1.103313);
   VH_tagOnly_Sphericity__1170->SetBinError(8,0.6899584);
   VH_tagOnly_Sphericity__1170->SetBinError(9,0.213215);
   VH_tagOnly_Sphericity__1170->SetBinError(10,0.9658368);
   VH_tagOnly_Sphericity__1170->SetBinError(12,0.4776073);
   VH_tagOnly_Sphericity__1170->SetBinError(14,0.1906847);
   VH_tagOnly_Sphericity__1170->SetBinError(15,0.5048748);
   VH_tagOnly_Sphericity__1170->SetEntries(509);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1170->SetLineColor(ci);
   VH_tagOnly_Sphericity__1170->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1170->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1170->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1170->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1170->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1170->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1170->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1170->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1170->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1170->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1170->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1170->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1170->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1170->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1170->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZZ_tagOnly_18->Modified();
   Sphericity_ZZ_tagOnly_18->cd();
   Sphericity_ZZ_tagOnly_18->SetSelected(Sphericity_ZZ_tagOnly_18);
}
