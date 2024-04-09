#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_DHZfirst_16()
{
//=========Macro generated from canvas: Aplanarity_DHZfirst_16/Aplanarity_DHZfirst_16
//=========  (Mon Apr  8 11:27:53 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_DHZfirst_16 = new TCanvas("Aplanarity_DHZfirst_16", "Aplanarity_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_DHZfirst_16->SetHighLightColor(2);
   Aplanarity_DHZfirst_16->Range(-0.2,-0.03817484,1.133333,0.3435736);
   Aplanarity_DHZfirst_16->SetFillColor(0);
   Aplanarity_DHZfirst_16->SetFillStyle(4000);
   Aplanarity_DHZfirst_16->SetBorderMode(0);
   Aplanarity_DHZfirst_16->SetBorderSize(2);
   Aplanarity_DHZfirst_16->SetLeftMargin(0.15);
   Aplanarity_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_16->SetFrameBorderMode(0);
   Aplanarity_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__190 = new TH1D("VH_DHZfirst_Aplanarity__190","",50,0,1);
   VH_DHZfirst_Aplanarity__190->SetBinContent(1,0.2908559);
   VH_DHZfirst_Aplanarity__190->SetBinContent(2,0.02735804);
   VH_DHZfirst_Aplanarity__190->SetBinContent(3,0.00375606);
   VH_DHZfirst_Aplanarity__190->SetBinError(1,0.02406673);
   VH_DHZfirst_Aplanarity__190->SetBinError(2,0.0074279);
   VH_DHZfirst_Aplanarity__190->SetBinError(3,0.002665142);
   VH_DHZfirst_Aplanarity__190->SetEntries(167);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__190->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__190->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__190->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__190->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__190->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__190->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__190->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__190->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__190->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__190->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__190->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__190->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__190->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__190->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__190->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__190->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_DHZfirst_16->Modified();
   Aplanarity_DHZfirst_16->cd();
   Aplanarity_DHZfirst_16->SetSelected(Aplanarity_DHZfirst_16);
}
