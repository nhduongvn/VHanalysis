#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WW_tagOnly_18()
{
//=========Macro generated from canvas: Sphericity_WW_tagOnly_18/Sphericity_WW_tagOnly_18
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WW_tagOnly_18 = new TCanvas("Sphericity_WW_tagOnly_18", "Sphericity_WW_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WW_tagOnly_18->SetHighLightColor(2);
   Sphericity_WW_tagOnly_18->Range(-0.2,-4.808264,1.133333,43.27437);
   Sphericity_WW_tagOnly_18->SetFillColor(0);
   Sphericity_WW_tagOnly_18->SetFillStyle(4000);
   Sphericity_WW_tagOnly_18->SetBorderMode(0);
   Sphericity_WW_tagOnly_18->SetBorderSize(2);
   Sphericity_WW_tagOnly_18->SetLeftMargin(0.15);
   Sphericity_WW_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_WW_tagOnly_18->SetFrameBorderMode(0);
   Sphericity_WW_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_WW_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1164 = new TH1D("VH_tagOnly_Sphericity__1164","",25,0,1);
   VH_tagOnly_Sphericity__1164->SetBinContent(1,36.63439);
   VH_tagOnly_Sphericity__1164->SetBinContent(2,24.14441);
   VH_tagOnly_Sphericity__1164->SetBinContent(3,19.13325);
   VH_tagOnly_Sphericity__1164->SetBinContent(4,12.38142);
   VH_tagOnly_Sphericity__1164->SetBinContent(5,5.288095);
   VH_tagOnly_Sphericity__1164->SetBinContent(6,4.778524);
   VH_tagOnly_Sphericity__1164->SetBinContent(7,0.8541545);
   VH_tagOnly_Sphericity__1164->SetBinContent(8,1.716452);
   VH_tagOnly_Sphericity__1164->SetBinContent(11,0.8645198);
   VH_tagOnly_Sphericity__1164->SetBinContent(13,1.84946);
   VH_tagOnly_Sphericity__1164->SetBinContent(15,0.5430295);
   VH_tagOnly_Sphericity__1164->SetBinError(1,5.557553);
   VH_tagOnly_Sphericity__1164->SetBinError(2,4.442762);
   VH_tagOnly_Sphericity__1164->SetBinError(3,4.846544);
   VH_tagOnly_Sphericity__1164->SetBinError(4,3.547176);
   VH_tagOnly_Sphericity__1164->SetBinError(5,2.19589);
   VH_tagOnly_Sphericity__1164->SetBinError(6,2.071119);
   VH_tagOnly_Sphericity__1164->SetBinError(7,0.60699);
   VH_tagOnly_Sphericity__1164->SetBinError(8,1.228288);
   VH_tagOnly_Sphericity__1164->SetBinError(11,0.8645198);
   VH_tagOnly_Sphericity__1164->SetBinError(13,1.84946);
   VH_tagOnly_Sphericity__1164->SetBinError(15,0.5430295);
   VH_tagOnly_Sphericity__1164->SetEntries(144);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1164->SetLineColor(ci);
   VH_tagOnly_Sphericity__1164->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1164->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1164->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1164->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1164->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1164->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1164->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1164->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1164->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1164->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1164->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1164->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1164->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1164->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1164->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WW_tagOnly_18->Modified();
   Sphericity_WW_tagOnly_18->cd();
   Sphericity_WW_tagOnly_18->SetSelected(Sphericity_WW_tagOnly_18);
}
