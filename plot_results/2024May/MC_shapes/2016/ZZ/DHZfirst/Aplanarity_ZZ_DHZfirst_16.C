#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZZ_DHZfirst_16()
{
//=========Macro generated from canvas: Aplanarity_ZZ_DHZfirst_16/Aplanarity_ZZ_DHZfirst_16
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZZ_DHZfirst_16 = new TCanvas("Aplanarity_ZZ_DHZfirst_16", "Aplanarity_ZZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZZ_DHZfirst_16->SetHighLightColor(2);
   Aplanarity_ZZ_DHZfirst_16->Range(-0.2,-3.562046,1.133333,32.05841);
   Aplanarity_ZZ_DHZfirst_16->SetFillColor(0);
   Aplanarity_ZZ_DHZfirst_16->SetFillStyle(4000);
   Aplanarity_ZZ_DHZfirst_16->SetBorderMode(0);
   Aplanarity_ZZ_DHZfirst_16->SetBorderSize(2);
   Aplanarity_ZZ_DHZfirst_16->SetLeftMargin(0.15);
   Aplanarity_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   Aplanarity_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1918 = new TH1D("VH_DHZfirst_Aplanarity__1918","",50,0,1);
   VH_DHZfirst_Aplanarity__1918->SetBinContent(1,27.1394);
   VH_DHZfirst_Aplanarity__1918->SetBinContent(2,2.700199);
   VH_DHZfirst_Aplanarity__1918->SetBinContent(3,0.1720666);
   VH_DHZfirst_Aplanarity__1918->SetBinContent(5,0.1744355);
   VH_DHZfirst_Aplanarity__1918->SetBinError(1,2.360449);
   VH_DHZfirst_Aplanarity__1918->SetBinError(2,0.7289116);
   VH_DHZfirst_Aplanarity__1918->SetBinError(3,0.1720666);
   VH_DHZfirst_Aplanarity__1918->SetBinError(5,0.1744355);
   VH_DHZfirst_Aplanarity__1918->SetEntries(155);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1918->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1918->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1918->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1918->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1918->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1918->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1918->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1918->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1918->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1918->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1918->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1918->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1918->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1918->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1918->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1918->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZZ_DHZfirst_16->Modified();
   Aplanarity_ZZ_DHZfirst_16->cd();
   Aplanarity_ZZ_DHZfirst_16->SetSelected(Aplanarity_ZZ_DHZfirst_16);
}
