#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_QCD_DHZfirst_17()
{
//=========Macro generated from canvas: Aplanarity_QCD_DHZfirst_17/Aplanarity_QCD_DHZfirst_17
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_QCD_DHZfirst_17 = new TCanvas("Aplanarity_QCD_DHZfirst_17", "Aplanarity_QCD_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_QCD_DHZfirst_17->SetHighLightColor(2);
   Aplanarity_QCD_DHZfirst_17->Range(-0.2,-16776.56,1.133333,150989.1);
   Aplanarity_QCD_DHZfirst_17->SetFillColor(0);
   Aplanarity_QCD_DHZfirst_17->SetFillStyle(4000);
   Aplanarity_QCD_DHZfirst_17->SetBorderMode(0);
   Aplanarity_QCD_DHZfirst_17->SetBorderSize(2);
   Aplanarity_QCD_DHZfirst_17->SetLeftMargin(0.15);
   Aplanarity_QCD_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_QCD_DHZfirst_17->SetFrameBorderMode(0);
   Aplanarity_QCD_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_QCD_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1898 = new TH1D("VH_DHZfirst_Aplanarity__1898","",50,0,1);
   VH_DHZfirst_Aplanarity__1898->SetBinContent(1,127821.4);
   VH_DHZfirst_Aplanarity__1898->SetBinContent(2,14255);
   VH_DHZfirst_Aplanarity__1898->SetBinContent(3,1868.458);
   VH_DHZfirst_Aplanarity__1898->SetBinContent(4,282.2633);
   VH_DHZfirst_Aplanarity__1898->SetBinContent(5,247.8724);
   VH_DHZfirst_Aplanarity__1898->SetBinContent(7,0.8071405);
   VH_DHZfirst_Aplanarity__1898->SetBinError(1,4829.024);
   VH_DHZfirst_Aplanarity__1898->SetBinError(2,1731.882);
   VH_DHZfirst_Aplanarity__1898->SetBinError(3,434.936);
   VH_DHZfirst_Aplanarity__1898->SetBinError(4,196.7739);
   VH_DHZfirst_Aplanarity__1898->SetBinError(5,208.7706);
   VH_DHZfirst_Aplanarity__1898->SetBinError(7,0.8071405);
   VH_DHZfirst_Aplanarity__1898->SetEntries(9045);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1898->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1898->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1898->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1898->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1898->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1898->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1898->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1898->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1898->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1898->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1898->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1898->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1898->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1898->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1898->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1898->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_QCD_DHZfirst_17->Modified();
   Aplanarity_QCD_DHZfirst_17->cd();
   Aplanarity_QCD_DHZfirst_17->SetSelected(Aplanarity_QCD_DHZfirst_17);
}
