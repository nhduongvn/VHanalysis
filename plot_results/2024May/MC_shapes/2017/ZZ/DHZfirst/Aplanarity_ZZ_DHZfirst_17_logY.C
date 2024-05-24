#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZZ_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Aplanarity_ZZ_DHZfirst_17/Aplanarity_ZZ_DHZfirst_17
//=========  (Thu May 23 20:48:52 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZZ_DHZfirst_17 = new TCanvas("Aplanarity_ZZ_DHZfirst_17", "Aplanarity_ZZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZZ_DHZfirst_17->SetHighLightColor(2);
   Aplanarity_ZZ_DHZfirst_17->Range(-0.2,-1.301788,1.133333,1.837177);
   Aplanarity_ZZ_DHZfirst_17->SetFillColor(0);
   Aplanarity_ZZ_DHZfirst_17->SetFillStyle(4000);
   Aplanarity_ZZ_DHZfirst_17->SetBorderMode(0);
   Aplanarity_ZZ_DHZfirst_17->SetBorderSize(2);
   Aplanarity_ZZ_DHZfirst_17->SetLogy();
   Aplanarity_ZZ_DHZfirst_17->SetLeftMargin(0.15);
   Aplanarity_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   Aplanarity_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   Aplanarity_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1919 = new TH1D("VH_DHZfirst_Aplanarity__1919","",50,0,1);
   VH_DHZfirst_Aplanarity__1919->SetBinContent(1,17.60886);
   VH_DHZfirst_Aplanarity__1919->SetBinContent(2,1.262471);
   VH_DHZfirst_Aplanarity__1919->SetBinContent(4,0.2056546);
   VH_DHZfirst_Aplanarity__1919->SetBinError(1,2.400387);
   VH_DHZfirst_Aplanarity__1919->SetBinError(2,0.4570221);
   VH_DHZfirst_Aplanarity__1919->SetBinError(4,0.2056546);
   VH_DHZfirst_Aplanarity__1919->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1919->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1919->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1919->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1919->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1919->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1919->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1919->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1919->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1919->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1919->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1919->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1919->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1919->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1919->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1919->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1919->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZZ_DHZfirst_17->Modified();
   Aplanarity_ZZ_DHZfirst_17->cd();
   Aplanarity_ZZ_DHZfirst_17->SetSelected(Aplanarity_ZZ_DHZfirst_17);
}
