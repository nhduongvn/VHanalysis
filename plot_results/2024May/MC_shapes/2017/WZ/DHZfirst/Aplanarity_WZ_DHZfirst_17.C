#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WZ_DHZfirst_17()
{
//=========Macro generated from canvas: Aplanarity_WZ_DHZfirst_17/Aplanarity_WZ_DHZfirst_17
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WZ_DHZfirst_17 = new TCanvas("Aplanarity_WZ_DHZfirst_17", "Aplanarity_WZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WZ_DHZfirst_17->SetHighLightColor(2);
   Aplanarity_WZ_DHZfirst_17->Range(-0.2,-3.339929,1.133333,30.05936);
   Aplanarity_WZ_DHZfirst_17->SetFillColor(0);
   Aplanarity_WZ_DHZfirst_17->SetFillStyle(4000);
   Aplanarity_WZ_DHZfirst_17->SetBorderMode(0);
   Aplanarity_WZ_DHZfirst_17->SetBorderSize(2);
   Aplanarity_WZ_DHZfirst_17->SetLeftMargin(0.15);
   Aplanarity_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_WZ_DHZfirst_17->SetFrameBorderMode(0);
   Aplanarity_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_WZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1916 = new TH1D("VH_DHZfirst_Aplanarity__1916","",50,0,1);
   VH_DHZfirst_Aplanarity__1916->SetBinContent(1,25.44708);
   VH_DHZfirst_Aplanarity__1916->SetBinContent(2,0.9728232);
   VH_DHZfirst_Aplanarity__1916->SetBinContent(3,0.3417144);
   VH_DHZfirst_Aplanarity__1916->SetBinError(1,3.06637);
   VH_DHZfirst_Aplanarity__1916->SetBinError(2,0.4468585);
   VH_DHZfirst_Aplanarity__1916->SetBinError(3,0.2416308);
   VH_DHZfirst_Aplanarity__1916->SetEntries(105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1916->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1916->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1916->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1916->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1916->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1916->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1916->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1916->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1916->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1916->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1916->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1916->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1916->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1916->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1916->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1916->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WZ_DHZfirst_17->Modified();
   Aplanarity_WZ_DHZfirst_17->cd();
   Aplanarity_WZ_DHZfirst_17->SetSelected(Aplanarity_WZ_DHZfirst_17);
}
