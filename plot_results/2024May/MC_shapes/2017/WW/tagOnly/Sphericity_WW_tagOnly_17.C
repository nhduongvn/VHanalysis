#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WW_tagOnly_17()
{
//=========Macro generated from canvas: Sphericity_WW_tagOnly_17/Sphericity_WW_tagOnly_17
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WW_tagOnly_17 = new TCanvas("Sphericity_WW_tagOnly_17", "Sphericity_WW_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WW_tagOnly_17->SetHighLightColor(2);
   Sphericity_WW_tagOnly_17->Range(-0.2,-3.000692,1.133333,27.00623);
   Sphericity_WW_tagOnly_17->SetFillColor(0);
   Sphericity_WW_tagOnly_17->SetFillStyle(4000);
   Sphericity_WW_tagOnly_17->SetBorderMode(0);
   Sphericity_WW_tagOnly_17->SetBorderSize(2);
   Sphericity_WW_tagOnly_17->SetLeftMargin(0.15);
   Sphericity_WW_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_WW_tagOnly_17->SetFrameBorderMode(0);
   Sphericity_WW_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_WW_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1163 = new TH1D("VH_tagOnly_Sphericity__1163","",25,0,1);
   VH_tagOnly_Sphericity__1163->SetBinContent(1,22.86241);
   VH_tagOnly_Sphericity__1163->SetBinContent(2,13.60858);
   VH_tagOnly_Sphericity__1163->SetBinContent(3,9.196548);
   VH_tagOnly_Sphericity__1163->SetBinContent(4,4.096758);
   VH_tagOnly_Sphericity__1163->SetBinContent(5,3.514096);
   VH_tagOnly_Sphericity__1163->SetBinContent(6,1.904052);
   VH_tagOnly_Sphericity__1163->SetBinContent(7,1.426004);
   VH_tagOnly_Sphericity__1163->SetBinContent(8,1.251424);
   VH_tagOnly_Sphericity__1163->SetBinContent(13,0.2611829);
   VH_tagOnly_Sphericity__1163->SetBinContent(15,0.1686304);
   VH_tagOnly_Sphericity__1163->SetBinError(1,3.03268);
   VH_tagOnly_Sphericity__1163->SetBinError(2,2.212006);
   VH_tagOnly_Sphericity__1163->SetBinError(3,1.836439);
   VH_tagOnly_Sphericity__1163->SetBinError(4,1.185079);
   VH_tagOnly_Sphericity__1163->SetBinError(5,0.942016);
   VH_tagOnly_Sphericity__1163->SetBinError(6,0.7524319);
   VH_tagOnly_Sphericity__1163->SetBinError(7,0.7889855);
   VH_tagOnly_Sphericity__1163->SetBinError(8,0.6572765);
   VH_tagOnly_Sphericity__1163->SetBinError(13,0.2611829);
   VH_tagOnly_Sphericity__1163->SetBinError(15,0.1686304);
   VH_tagOnly_Sphericity__1163->SetEntries(198);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1163->SetLineColor(ci);
   VH_tagOnly_Sphericity__1163->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1163->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1163->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1163->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1163->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1163->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1163->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1163->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1163->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1163->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1163->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1163->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1163->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1163->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1163->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WW_tagOnly_17->Modified();
   Sphericity_WW_tagOnly_17->cd();
   Sphericity_WW_tagOnly_17->SetSelected(Sphericity_WW_tagOnly_17);
}
