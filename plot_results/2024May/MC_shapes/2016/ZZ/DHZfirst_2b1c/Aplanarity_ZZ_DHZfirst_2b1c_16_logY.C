#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZZ_DHZfirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Aplanarity_ZZ_DHZfirst_2b1c_16/Aplanarity_ZZ_DHZfirst_2b1c_16
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZZ_DHZfirst_2b1c_16 = new TCanvas("Aplanarity_ZZ_DHZfirst_2b1c_16", "Aplanarity_ZZ_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZZ_DHZfirst_2b1c_16->SetHighLightColor(2);
   Aplanarity_ZZ_DHZfirst_2b1c_16->Range(-0.2,-1.094166,1.133333,2.718807);
   Aplanarity_ZZ_DHZfirst_2b1c_16->SetFillColor(0);
   Aplanarity_ZZ_DHZfirst_2b1c_16->SetFillStyle(4000);
   Aplanarity_ZZ_DHZfirst_2b1c_16->SetBorderMode(0);
   Aplanarity_ZZ_DHZfirst_2b1c_16->SetBorderSize(2);
   Aplanarity_ZZ_DHZfirst_2b1c_16->SetLogy();
   Aplanarity_ZZ_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Aplanarity_ZZ_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZZ_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Aplanarity_ZZ_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Aplanarity_ZZ_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4078 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4078","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4078->SetBinContent(1,114.8049);
   VH_DHZfirst_2b1c_Aplanarity__4078->SetBinContent(2,11.10936);
   VH_DHZfirst_2b1c_Aplanarity__4078->SetBinContent(3,1.830744);
   VH_DHZfirst_2b1c_Aplanarity__4078->SetBinContent(4,0.5995496);
   VH_DHZfirst_2b1c_Aplanarity__4078->SetBinContent(5,0.3874015);
   VH_DHZfirst_2b1c_Aplanarity__4078->SetBinError(1,4.865042);
   VH_DHZfirst_2b1c_Aplanarity__4078->SetBinError(2,1.507105);
   VH_DHZfirst_2b1c_Aplanarity__4078->SetBinError(3,0.5821893);
   VH_DHZfirst_2b1c_Aplanarity__4078->SetBinError(4,0.3502705);
   VH_DHZfirst_2b1c_Aplanarity__4078->SetBinError(5,0.2752858);
   VH_DHZfirst_2b1c_Aplanarity__4078->SetEntries(648);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4078->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4078->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4078->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4078->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4078->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4078->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4078->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4078->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4078->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4078->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4078->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4078->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4078->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4078->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4078->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4078->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZZ_DHZfirst_2b1c_16->Modified();
   Aplanarity_ZZ_DHZfirst_2b1c_16->cd();
   Aplanarity_ZZ_DHZfirst_2b1c_16->SetSelected(Aplanarity_ZZ_DHZfirst_2b1c_16);
}
