#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WW_DHZfirst_18()
{
//=========Macro generated from canvas: Aplanarity_WW_DHZfirst_18/Aplanarity_WW_DHZfirst_18
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WW_DHZfirst_18 = new TCanvas("Aplanarity_WW_DHZfirst_18", "Aplanarity_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WW_DHZfirst_18->SetHighLightColor(2);
   Aplanarity_WW_DHZfirst_18->Range(-0.2,-0.659065,1.133333,5.931584);
   Aplanarity_WW_DHZfirst_18->SetFillColor(0);
   Aplanarity_WW_DHZfirst_18->SetFillStyle(4000);
   Aplanarity_WW_DHZfirst_18->SetBorderMode(0);
   Aplanarity_WW_DHZfirst_18->SetBorderSize(2);
   Aplanarity_WW_DHZfirst_18->SetLeftMargin(0.15);
   Aplanarity_WW_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_WW_DHZfirst_18->SetFrameBorderMode(0);
   Aplanarity_WW_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1914 = new TH1D("VH_DHZfirst_Aplanarity__1914","",50,0,1);
   VH_DHZfirst_Aplanarity__1914->SetBinContent(1,5.021447);
   VH_DHZfirst_Aplanarity__1914->SetBinContent(3,0.4370453);
   VH_DHZfirst_Aplanarity__1914->SetBinError(1,1.79577);
   VH_DHZfirst_Aplanarity__1914->SetBinError(3,0.4370453);
   VH_DHZfirst_Aplanarity__1914->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1914->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1914->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1914->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1914->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1914->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1914->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1914->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1914->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1914->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1914->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1914->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1914->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1914->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1914->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1914->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1914->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WW_DHZfirst_18->Modified();
   Aplanarity_WW_DHZfirst_18->cd();
   Aplanarity_WW_DHZfirst_18->SetSelected(Aplanarity_WW_DHZfirst_18);
}
