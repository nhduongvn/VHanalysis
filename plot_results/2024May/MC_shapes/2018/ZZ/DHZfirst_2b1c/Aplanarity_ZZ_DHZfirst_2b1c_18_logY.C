#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZZ_DHZfirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Aplanarity_ZZ_DHZfirst_2b1c_18/Aplanarity_ZZ_DHZfirst_2b1c_18
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZZ_DHZfirst_2b1c_18 = new TCanvas("Aplanarity_ZZ_DHZfirst_2b1c_18", "Aplanarity_ZZ_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZZ_DHZfirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_ZZ_DHZfirst_2b1c_18->Range(-0.2,-1.241842,1.133333,2.884454);
   Aplanarity_ZZ_DHZfirst_2b1c_18->SetFillColor(0);
   Aplanarity_ZZ_DHZfirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_ZZ_DHZfirst_2b1c_18->SetBorderMode(0);
   Aplanarity_ZZ_DHZfirst_2b1c_18->SetBorderSize(2);
   Aplanarity_ZZ_DHZfirst_2b1c_18->SetLogy();
   Aplanarity_ZZ_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_ZZ_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZZ_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_ZZ_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZZ_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4080 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4080","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4080->SetBinContent(1,156.4138);
   VH_DHZfirst_2b1c_Aplanarity__4080->SetBinContent(2,11.85071);
   VH_DHZfirst_2b1c_Aplanarity__4080->SetBinContent(3,1.307975);
   VH_DHZfirst_2b1c_Aplanarity__4080->SetBinContent(4,0.2963586);
   VH_DHZfirst_2b1c_Aplanarity__4080->SetBinError(1,9.663559);
   VH_DHZfirst_2b1c_Aplanarity__4080->SetBinError(2,2.626426);
   VH_DHZfirst_2b1c_Aplanarity__4080->SetBinError(3,0.7793332);
   VH_DHZfirst_2b1c_Aplanarity__4080->SetBinError(4,0.2963586);
   VH_DHZfirst_2b1c_Aplanarity__4080->SetEntries(396);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4080->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4080->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4080->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4080->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4080->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4080->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4080->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4080->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4080->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4080->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4080->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4080->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4080->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4080->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4080->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4080->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZZ_DHZfirst_2b1c_18->Modified();
   Aplanarity_ZZ_DHZfirst_2b1c_18->cd();
   Aplanarity_ZZ_DHZfirst_2b1c_18->SetSelected(Aplanarity_ZZ_DHZfirst_2b1c_18);
}
