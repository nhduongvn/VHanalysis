#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZZ_tagFirst_16_logY()
{
//=========Macro generated from canvas: Sphericity_ZZ_tagFirst_16/Sphericity_ZZ_tagFirst_16
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZZ_tagFirst_16 = new TCanvas("Sphericity_ZZ_tagFirst_16", "Sphericity_ZZ_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZZ_tagFirst_16->SetHighLightColor(2);
   Sphericity_ZZ_tagFirst_16->Range(-0.2,-1.436685,1.133333,2.439083);
   Sphericity_ZZ_tagFirst_16->SetFillColor(0);
   Sphericity_ZZ_tagFirst_16->SetFillStyle(4000);
   Sphericity_ZZ_tagFirst_16->SetBorderMode(0);
   Sphericity_ZZ_tagFirst_16->SetBorderSize(2);
   Sphericity_ZZ_tagFirst_16->SetLogy();
   Sphericity_ZZ_tagFirst_16->SetLeftMargin(0.15);
   Sphericity_ZZ_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagFirst_16->SetFrameBorderMode(0);
   Sphericity_ZZ_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__448 = new TH1D("VH_tagFirst_Sphericity__448","",25,0,1);
   VH_tagFirst_Sphericity__448->SetBinContent(1,59.42332);
   VH_tagFirst_Sphericity__448->SetBinContent(2,49.52847);
   VH_tagFirst_Sphericity__448->SetBinContent(3,26.60327);
   VH_tagFirst_Sphericity__448->SetBinContent(4,16.47322);
   VH_tagFirst_Sphericity__448->SetBinContent(5,10.77749);
   VH_tagFirst_Sphericity__448->SetBinContent(6,4.238283);
   VH_tagFirst_Sphericity__448->SetBinContent(7,2.986493);
   VH_tagFirst_Sphericity__448->SetBinContent(8,2.075885);
   VH_tagFirst_Sphericity__448->SetBinContent(9,0.8952075);
   VH_tagFirst_Sphericity__448->SetBinContent(10,0.3520797);
   VH_tagFirst_Sphericity__448->SetBinContent(11,0.438267);
   VH_tagFirst_Sphericity__448->SetBinContent(12,0.4148851);
   VH_tagFirst_Sphericity__448->SetBinContent(14,0.4671479);
   VH_tagFirst_Sphericity__448->SetBinContent(15,0.2228607);
   VH_tagFirst_Sphericity__448->SetBinContent(18,0.1786167);
   VH_tagFirst_Sphericity__448->SetBinError(1,3.530688);
   VH_tagFirst_Sphericity__448->SetBinError(2,3.223919);
   VH_tagFirst_Sphericity__448->SetBinError(3,2.380295);
   VH_tagFirst_Sphericity__448->SetBinError(4,1.869124);
   VH_tagFirst_Sphericity__448->SetBinError(5,1.533277);
   VH_tagFirst_Sphericity__448->SetBinError(6,1.003295);
   VH_tagFirst_Sphericity__448->SetBinError(7,0.800295);
   VH_tagFirst_Sphericity__448->SetBinError(8,0.649977);
   VH_tagFirst_Sphericity__448->SetBinError(9,0.4500502);
   VH_tagFirst_Sphericity__448->SetBinError(10,0.2490094);
   VH_tagFirst_Sphericity__448->SetBinError(11,0.3242571);
   VH_tagFirst_Sphericity__448->SetBinError(12,0.298471);
   VH_tagFirst_Sphericity__448->SetBinError(14,0.3313659);
   VH_tagFirst_Sphericity__448->SetBinError(15,0.2228607);
   VH_tagFirst_Sphericity__448->SetBinError(18,0.1786167);
   VH_tagFirst_Sphericity__448->SetEntries(868);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__448->SetLineColor(ci);
   VH_tagFirst_Sphericity__448->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__448->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__448->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__448->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__448->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__448->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__448->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__448->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__448->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__448->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__448->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__448->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__448->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__448->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__448->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZZ_tagFirst_16->Modified();
   Sphericity_ZZ_tagFirst_16->cd();
   Sphericity_ZZ_tagFirst_16->SetSelected(Sphericity_ZZ_tagFirst_16);
}
