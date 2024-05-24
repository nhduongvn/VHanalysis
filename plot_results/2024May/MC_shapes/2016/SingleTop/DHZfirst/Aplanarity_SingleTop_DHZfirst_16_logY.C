#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_SingleTop_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Aplanarity_SingleTop_DHZfirst_16/Aplanarity_SingleTop_DHZfirst_16
//=========  (Thu May 23 20:48:52 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_SingleTop_DHZfirst_16 = new TCanvas("Aplanarity_SingleTop_DHZfirst_16", "Aplanarity_SingleTop_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_SingleTop_DHZfirst_16->SetHighLightColor(2);
   Aplanarity_SingleTop_DHZfirst_16->Range(-0.2,-2.592377,1.133333,4.238732);
   Aplanarity_SingleTop_DHZfirst_16->SetFillColor(0);
   Aplanarity_SingleTop_DHZfirst_16->SetFillStyle(4000);
   Aplanarity_SingleTop_DHZfirst_16->SetBorderMode(0);
   Aplanarity_SingleTop_DHZfirst_16->SetBorderSize(2);
   Aplanarity_SingleTop_DHZfirst_16->SetLogy();
   Aplanarity_SingleTop_DHZfirst_16->SetLeftMargin(0.15);
   Aplanarity_SingleTop_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_DHZfirst_16->SetFrameBorderMode(0);
   Aplanarity_SingleTop_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1909 = new TH1D("VH_DHZfirst_Aplanarity__1909","",50,0,1);
   VH_DHZfirst_Aplanarity__1909->SetBinContent(1,1897.021);
   VH_DHZfirst_Aplanarity__1909->SetBinContent(2,270.7653);
   VH_DHZfirst_Aplanarity__1909->SetBinContent(3,59.53358);
   VH_DHZfirst_Aplanarity__1909->SetBinContent(4,13.90341);
   VH_DHZfirst_Aplanarity__1909->SetBinContent(5,4.068304);
   VH_DHZfirst_Aplanarity__1909->SetBinContent(6,1.143475);
   VH_DHZfirst_Aplanarity__1909->SetBinContent(7,1.097861);
   VH_DHZfirst_Aplanarity__1909->SetBinContent(8,0.7843381);
   VH_DHZfirst_Aplanarity__1909->SetBinContent(9,0.04909048);
   VH_DHZfirst_Aplanarity__1909->SetBinContent(10,0.1139752);
   VH_DHZfirst_Aplanarity__1909->SetBinContent(11,0.02464697);
   VH_DHZfirst_Aplanarity__1909->SetBinContent(12,0.06360254);
   VH_DHZfirst_Aplanarity__1909->SetBinError(1,15.56487);
   VH_DHZfirst_Aplanarity__1909->SetBinError(2,5.811703);
   VH_DHZfirst_Aplanarity__1909->SetBinError(3,2.672323);
   VH_DHZfirst_Aplanarity__1909->SetBinError(4,1.259116);
   VH_DHZfirst_Aplanarity__1909->SetBinError(5,0.6815908);
   VH_DHZfirst_Aplanarity__1909->SetBinError(6,0.3402642);
   VH_DHZfirst_Aplanarity__1909->SetBinError(7,0.3784624);
   VH_DHZfirst_Aplanarity__1909->SetBinError(8,0.3838116);
   VH_DHZfirst_Aplanarity__1909->SetBinError(9,0.04205972);
   VH_DHZfirst_Aplanarity__1909->SetBinError(10,0.06583358);
   VH_DHZfirst_Aplanarity__1909->SetBinError(11,0.02464697);
   VH_DHZfirst_Aplanarity__1909->SetBinError(12,0.04507091);
   VH_DHZfirst_Aplanarity__1909->SetEntries(39210);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1909->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1909->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1909->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1909->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1909->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1909->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1909->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1909->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1909->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1909->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1909->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1909->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1909->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1909->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1909->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1909->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_SingleTop_DHZfirst_16->Modified();
   Aplanarity_SingleTop_DHZfirst_16->cd();
   Aplanarity_SingleTop_DHZfirst_16->SetSelected(Aplanarity_SingleTop_DHZfirst_16);
}
