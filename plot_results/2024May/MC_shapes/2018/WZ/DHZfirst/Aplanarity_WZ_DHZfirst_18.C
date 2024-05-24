#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WZ_DHZfirst_18()
{
//=========Macro generated from canvas: Aplanarity_WZ_DHZfirst_18/Aplanarity_WZ_DHZfirst_18
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WZ_DHZfirst_18 = new TCanvas("Aplanarity_WZ_DHZfirst_18", "Aplanarity_WZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WZ_DHZfirst_18->SetHighLightColor(2);
   Aplanarity_WZ_DHZfirst_18->Range(-0.2,-6.697199,1.133333,60.27478);
   Aplanarity_WZ_DHZfirst_18->SetFillColor(0);
   Aplanarity_WZ_DHZfirst_18->SetFillStyle(4000);
   Aplanarity_WZ_DHZfirst_18->SetBorderMode(0);
   Aplanarity_WZ_DHZfirst_18->SetBorderSize(2);
   Aplanarity_WZ_DHZfirst_18->SetLeftMargin(0.15);
   Aplanarity_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_WZ_DHZfirst_18->SetFrameBorderMode(0);
   Aplanarity_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_WZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1917 = new TH1D("VH_DHZfirst_Aplanarity__1917","",50,0,1);
   VH_DHZfirst_Aplanarity__1917->SetBinContent(1,51.02627);
   VH_DHZfirst_Aplanarity__1917->SetBinContent(2,4.178273);
   VH_DHZfirst_Aplanarity__1917->SetBinError(1,6.43478);
   VH_DHZfirst_Aplanarity__1917->SetBinError(2,1.701111);
   VH_DHZfirst_Aplanarity__1917->SetEntries(90);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1917->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1917->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1917->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1917->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1917->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1917->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1917->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1917->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1917->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1917->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1917->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1917->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1917->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1917->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1917->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1917->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WZ_DHZfirst_18->Modified();
   Aplanarity_WZ_DHZfirst_18->cd();
   Aplanarity_WZ_DHZfirst_18->SetSelected(Aplanarity_WZ_DHZfirst_18);
}
