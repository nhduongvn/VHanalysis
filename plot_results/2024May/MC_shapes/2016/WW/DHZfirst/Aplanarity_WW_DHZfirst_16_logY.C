#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WW_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Aplanarity_WW_DHZfirst_16/Aplanarity_WW_DHZfirst_16
//=========  (Thu May 23 20:48:52 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WW_DHZfirst_16 = new TCanvas("Aplanarity_WW_DHZfirst_16", "Aplanarity_WW_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WW_DHZfirst_16->SetHighLightColor(2);
   Aplanarity_WW_DHZfirst_16->Range(-0.2,-1.78488,1.133333,1.422934);
   Aplanarity_WW_DHZfirst_16->SetFillColor(0);
   Aplanarity_WW_DHZfirst_16->SetFillStyle(4000);
   Aplanarity_WW_DHZfirst_16->SetBorderMode(0);
   Aplanarity_WW_DHZfirst_16->SetBorderSize(2);
   Aplanarity_WW_DHZfirst_16->SetLogy();
   Aplanarity_WW_DHZfirst_16->SetLeftMargin(0.15);
   Aplanarity_WW_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_WW_DHZfirst_16->SetFrameBorderMode(0);
   Aplanarity_WW_DHZfirst_16->SetFrameFillStyle(1000);
   Aplanarity_WW_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1912 = new TH1D("VH_DHZfirst_Aplanarity__1912","",50,0,1);
   VH_DHZfirst_Aplanarity__1912->SetBinContent(1,6.677341);
   VH_DHZfirst_Aplanarity__1912->SetBinContent(2,0.3957358);
   VH_DHZfirst_Aplanarity__1912->SetBinContent(3,0.08282056);
   VH_DHZfirst_Aplanarity__1912->SetBinContent(4,0.06869593);
   VH_DHZfirst_Aplanarity__1912->SetBinError(1,0.871444);
   VH_DHZfirst_Aplanarity__1912->SetBinError(2,0.2097638);
   VH_DHZfirst_Aplanarity__1912->SetBinError(3,0.08282056);
   VH_DHZfirst_Aplanarity__1912->SetBinError(4,0.06869593);
   VH_DHZfirst_Aplanarity__1912->SetEntries(67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1912->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1912->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1912->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1912->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1912->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1912->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1912->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1912->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1912->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1912->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1912->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1912->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1912->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1912->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1912->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1912->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WW_DHZfirst_16->Modified();
   Aplanarity_WW_DHZfirst_16->cd();
   Aplanarity_WW_DHZfirst_16->SetSelected(Aplanarity_WW_DHZfirst_16);
}
