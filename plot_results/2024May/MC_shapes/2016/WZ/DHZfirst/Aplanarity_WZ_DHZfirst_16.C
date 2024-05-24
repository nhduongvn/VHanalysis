#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WZ_DHZfirst_16()
{
//=========Macro generated from canvas: Aplanarity_WZ_DHZfirst_16/Aplanarity_WZ_DHZfirst_16
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WZ_DHZfirst_16 = new TCanvas("Aplanarity_WZ_DHZfirst_16", "Aplanarity_WZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WZ_DHZfirst_16->SetHighLightColor(2);
   Aplanarity_WZ_DHZfirst_16->Range(-0.2,-5.205715,1.133333,46.85143);
   Aplanarity_WZ_DHZfirst_16->SetFillColor(0);
   Aplanarity_WZ_DHZfirst_16->SetFillStyle(4000);
   Aplanarity_WZ_DHZfirst_16->SetBorderMode(0);
   Aplanarity_WZ_DHZfirst_16->SetBorderSize(2);
   Aplanarity_WZ_DHZfirst_16->SetLeftMargin(0.15);
   Aplanarity_WZ_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_WZ_DHZfirst_16->SetFrameBorderMode(0);
   Aplanarity_WZ_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_WZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1915 = new TH1D("VH_DHZfirst_Aplanarity__1915","",50,0,1);
   VH_DHZfirst_Aplanarity__1915->SetBinContent(1,39.66258);
   VH_DHZfirst_Aplanarity__1915->SetBinContent(2,2.809891);
   VH_DHZfirst_Aplanarity__1915->SetBinContent(6,0.07623354);
   VH_DHZfirst_Aplanarity__1915->SetBinError(1,1.934269);
   VH_DHZfirst_Aplanarity__1915->SetBinError(2,0.5065401);
   VH_DHZfirst_Aplanarity__1915->SetBinError(6,0.07623354);
   VH_DHZfirst_Aplanarity__1915->SetEntries(469);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1915->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1915->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1915->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1915->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1915->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1915->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1915->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1915->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1915->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1915->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1915->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1915->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1915->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1915->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1915->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1915->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WZ_DHZfirst_16->Modified();
   Aplanarity_WZ_DHZfirst_16->cd();
   Aplanarity_WZ_DHZfirst_16->SetSelected(Aplanarity_WZ_DHZfirst_16);
}
