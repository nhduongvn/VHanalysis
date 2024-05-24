#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WW_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Sphericity_WW_DHZfirst_18/Sphericity_WW_DHZfirst_18
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WW_DHZfirst_18 = new TCanvas("Sphericity_WW_DHZfirst_18", "Sphericity_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WW_DHZfirst_18->SetHighLightColor(2);
   Sphericity_WW_DHZfirst_18->Range(-0.2,-0.5552097,1.133333,0.876664);
   Sphericity_WW_DHZfirst_18->SetFillColor(0);
   Sphericity_WW_DHZfirst_18->SetFillStyle(4000);
   Sphericity_WW_DHZfirst_18->SetBorderMode(0);
   Sphericity_WW_DHZfirst_18->SetBorderSize(2);
   Sphericity_WW_DHZfirst_18->SetLogy();
   Sphericity_WW_DHZfirst_18->SetLeftMargin(0.15);
   Sphericity_WW_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_WW_DHZfirst_18->SetFrameBorderMode(0);
   Sphericity_WW_DHZfirst_18->SetFrameFillStyle(1000);
   Sphericity_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1884 = new TH1D("VH_DHZfirst_Sphericity__1884","",25,0,1);
   VH_DHZfirst_Sphericity__1884->SetBinContent(1,2.857115);
   VH_DHZfirst_Sphericity__1884->SetBinContent(2,0.7744756);
   VH_DHZfirst_Sphericity__1884->SetBinContent(3,1.826902);
   VH_DHZfirst_Sphericity__1884->SetBinError(1,1.286413);
   VH_DHZfirst_Sphericity__1884->SetBinError(2,0.7744756);
   VH_DHZfirst_Sphericity__1884->SetBinError(3,1.077556);
   VH_DHZfirst_Sphericity__1884->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1884->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1884->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1884->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1884->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1884->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1884->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1884->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1884->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1884->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1884->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1884->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1884->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1884->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1884->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1884->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1884->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WW_DHZfirst_18->Modified();
   Sphericity_WW_DHZfirst_18->cd();
   Sphericity_WW_DHZfirst_18->SetSelected(Sphericity_WW_DHZfirst_18);
}
