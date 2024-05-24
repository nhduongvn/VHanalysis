#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZZ_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Aplanarity_ZZ_DHZfirst_18/Aplanarity_ZZ_DHZfirst_18
//=========  (Thu May 23 20:48:52 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZZ_DHZfirst_18 = new TCanvas("Aplanarity_ZZ_DHZfirst_18", "Aplanarity_ZZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZZ_DHZfirst_18->SetHighLightColor(2);
   Aplanarity_ZZ_DHZfirst_18->Range(-0.2,-0.08415185,1.133333,2.025436);
   Aplanarity_ZZ_DHZfirst_18->SetFillColor(0);
   Aplanarity_ZZ_DHZfirst_18->SetFillStyle(4000);
   Aplanarity_ZZ_DHZfirst_18->SetBorderMode(0);
   Aplanarity_ZZ_DHZfirst_18->SetBorderSize(2);
   Aplanarity_ZZ_DHZfirst_18->SetLogy();
   Aplanarity_ZZ_DHZfirst_18->SetLeftMargin(0.15);
   Aplanarity_ZZ_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_ZZ_DHZfirst_18->SetFrameBorderMode(0);
   Aplanarity_ZZ_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_ZZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1920 = new TH1D("VH_DHZfirst_Aplanarity__1920","",50,0,1);
   VH_DHZfirst_Aplanarity__1920->SetBinContent(1,34.42933);
   VH_DHZfirst_Aplanarity__1920->SetBinContent(2,2.678163);
   VH_DHZfirst_Aplanarity__1920->SetBinError(1,3.942091);
   VH_DHZfirst_Aplanarity__1920->SetBinError(2,1.462912);
   VH_DHZfirst_Aplanarity__1920->SetEntries(93);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1920->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1920->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1920->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1920->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1920->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1920->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1920->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1920->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1920->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1920->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1920->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1920->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1920->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1920->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1920->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1920->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZZ_DHZfirst_18->Modified();
   Aplanarity_ZZ_DHZfirst_18->cd();
   Aplanarity_ZZ_DHZfirst_18->SetSelected(Aplanarity_ZZ_DHZfirst_18);
}
