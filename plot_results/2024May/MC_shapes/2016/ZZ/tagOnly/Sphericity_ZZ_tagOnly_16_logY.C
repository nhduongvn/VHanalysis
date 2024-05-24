#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZZ_tagOnly_16_logY()
{
//=========Macro generated from canvas: Sphericity_ZZ_tagOnly_16/Sphericity_ZZ_tagOnly_16
//=========  (Thu May 23 20:48:41 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZZ_tagOnly_16 = new TCanvas("Sphericity_ZZ_tagOnly_16", "Sphericity_ZZ_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZZ_tagOnly_16->SetHighLightColor(2);
   Sphericity_ZZ_tagOnly_16->Range(-0.2,-1.51492,1.133333,2.432865);
   Sphericity_ZZ_tagOnly_16->SetFillColor(0);
   Sphericity_ZZ_tagOnly_16->SetFillStyle(4000);
   Sphericity_ZZ_tagOnly_16->SetBorderMode(0);
   Sphericity_ZZ_tagOnly_16->SetBorderSize(2);
   Sphericity_ZZ_tagOnly_16->SetLogy();
   Sphericity_ZZ_tagOnly_16->SetLeftMargin(0.15);
   Sphericity_ZZ_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagOnly_16->SetFrameBorderMode(0);
   Sphericity_ZZ_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1168 = new TH1D("VH_tagOnly_Sphericity__1168","",25,0,1);
   VH_tagOnly_Sphericity__1168->SetBinContent(1,57.61525);
   VH_tagOnly_Sphericity__1168->SetBinContent(2,47.76487);
   VH_tagOnly_Sphericity__1168->SetBinContent(3,24.68419);
   VH_tagOnly_Sphericity__1168->SetBinContent(4,15.41887);
   VH_tagOnly_Sphericity__1168->SetBinContent(5,10.61888);
   VH_tagOnly_Sphericity__1168->SetBinContent(6,4.238283);
   VH_tagOnly_Sphericity__1168->SetBinContent(7,2.588436);
   VH_tagOnly_Sphericity__1168->SetBinContent(8,1.963739);
   VH_tagOnly_Sphericity__1168->SetBinContent(9,0.8952075);
   VH_tagOnly_Sphericity__1168->SetBinContent(10,0.3520797);
   VH_tagOnly_Sphericity__1168->SetBinContent(11,0.1516661);
   VH_tagOnly_Sphericity__1168->SetBinContent(12,0.4148851);
   VH_tagOnly_Sphericity__1168->SetBinContent(14,0.4671479);
   VH_tagOnly_Sphericity__1168->SetBinContent(15,0.2228607);
   VH_tagOnly_Sphericity__1168->SetBinContent(18,0.1786167);
   VH_tagOnly_Sphericity__1168->SetBinError(1,3.476972);
   VH_tagOnly_Sphericity__1168->SetBinError(2,3.161932);
   VH_tagOnly_Sphericity__1168->SetBinError(3,2.274573);
   VH_tagOnly_Sphericity__1168->SetBinError(4,1.805502);
   VH_tagOnly_Sphericity__1168->SetBinError(5,1.505759);
   VH_tagOnly_Sphericity__1168->SetBinError(6,1.003295);
   VH_tagOnly_Sphericity__1168->SetBinError(7,0.7483569);
   VH_tagOnly_Sphericity__1168->SetBinError(8,0.6402291);
   VH_tagOnly_Sphericity__1168->SetBinError(9,0.4500502);
   VH_tagOnly_Sphericity__1168->SetBinError(10,0.2490094);
   VH_tagOnly_Sphericity__1168->SetBinError(11,0.1516661);
   VH_tagOnly_Sphericity__1168->SetBinError(12,0.298471);
   VH_tagOnly_Sphericity__1168->SetBinError(14,0.3313659);
   VH_tagOnly_Sphericity__1168->SetBinError(15,0.2228607);
   VH_tagOnly_Sphericity__1168->SetBinError(18,0.1786167);
   VH_tagOnly_Sphericity__1168->SetEntries(834);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1168->SetLineColor(ci);
   VH_tagOnly_Sphericity__1168->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1168->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1168->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1168->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1168->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1168->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1168->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1168->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1168->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1168->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1168->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1168->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1168->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1168->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1168->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZZ_tagOnly_16->Modified();
   Sphericity_ZZ_tagOnly_16->cd();
   Sphericity_ZZ_tagOnly_16->SetSelected(Sphericity_ZZ_tagOnly_16);
}
