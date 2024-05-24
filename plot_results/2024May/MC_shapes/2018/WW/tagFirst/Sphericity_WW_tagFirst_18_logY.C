#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WW_tagFirst_18_logY()
{
//=========Macro generated from canvas: Sphericity_WW_tagFirst_18/Sphericity_WW_tagFirst_18
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WW_tagFirst_18 = new TCanvas("Sphericity_WW_tagFirst_18", "Sphericity_WW_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WW_tagFirst_18->SetHighLightColor(2);
   Sphericity_WW_tagFirst_18->Range(-0.2,-0.8714148,1.133333,2.180667);
   Sphericity_WW_tagFirst_18->SetFillColor(0);
   Sphericity_WW_tagFirst_18->SetFillStyle(4000);
   Sphericity_WW_tagFirst_18->SetBorderMode(0);
   Sphericity_WW_tagFirst_18->SetBorderSize(2);
   Sphericity_WW_tagFirst_18->SetLogy();
   Sphericity_WW_tagFirst_18->SetLeftMargin(0.15);
   Sphericity_WW_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_WW_tagFirst_18->SetFrameBorderMode(0);
   Sphericity_WW_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_WW_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__444 = new TH1D("VH_tagFirst_Sphericity__444","",25,0,1);
   VH_tagFirst_Sphericity__444->SetBinContent(1,39.61955);
   VH_tagFirst_Sphericity__444->SetBinContent(2,24.14441);
   VH_tagFirst_Sphericity__444->SetBinContent(3,19.48672);
   VH_tagFirst_Sphericity__444->SetBinContent(4,12.27428);
   VH_tagFirst_Sphericity__444->SetBinContent(5,6.169164);
   VH_tagFirst_Sphericity__444->SetBinContent(6,4.778524);
   VH_tagFirst_Sphericity__444->SetBinContent(7,1.3604);
   VH_tagFirst_Sphericity__444->SetBinContent(8,1.716452);
   VH_tagFirst_Sphericity__444->SetBinContent(11,0.8645198);
   VH_tagFirst_Sphericity__444->SetBinContent(13,1.84946);
   VH_tagFirst_Sphericity__444->SetBinContent(15,0.5430295);
   VH_tagFirst_Sphericity__444->SetBinError(1,5.854915);
   VH_tagFirst_Sphericity__444->SetBinError(2,4.442762);
   VH_tagFirst_Sphericity__444->SetBinError(3,4.859416);
   VH_tagFirst_Sphericity__444->SetBinError(4,3.533477);
   VH_tagFirst_Sphericity__444->SetBinError(5,2.366055);
   VH_tagFirst_Sphericity__444->SetBinError(6,2.071119);
   VH_tagFirst_Sphericity__444->SetBinError(7,0.7903934);
   VH_tagFirst_Sphericity__444->SetBinError(8,1.228288);
   VH_tagFirst_Sphericity__444->SetBinError(11,0.8645198);
   VH_tagFirst_Sphericity__444->SetBinError(13,1.84946);
   VH_tagFirst_Sphericity__444->SetBinError(15,0.5430295);
   VH_tagFirst_Sphericity__444->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__444->SetLineColor(ci);
   VH_tagFirst_Sphericity__444->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__444->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__444->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__444->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__444->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__444->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__444->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__444->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__444->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__444->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__444->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__444->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__444->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__444->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__444->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WW_tagFirst_18->Modified();
   Sphericity_WW_tagFirst_18->cd();
   Sphericity_WW_tagFirst_18->SetSelected(Sphericity_WW_tagFirst_18);
}
