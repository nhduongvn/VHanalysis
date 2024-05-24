#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_QCD_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Aplanarity_QCD_DHZfirst_18/Aplanarity_QCD_DHZfirst_18
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_QCD_DHZfirst_18 = new TCanvas("Aplanarity_QCD_DHZfirst_18", "Aplanarity_QCD_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_QCD_DHZfirst_18->SetHighLightColor(2);
   Aplanarity_QCD_DHZfirst_18->Range(-0.2,-0.1379647,1.133333,6.350137);
   Aplanarity_QCD_DHZfirst_18->SetFillColor(0);
   Aplanarity_QCD_DHZfirst_18->SetFillStyle(4000);
   Aplanarity_QCD_DHZfirst_18->SetBorderMode(0);
   Aplanarity_QCD_DHZfirst_18->SetBorderSize(2);
   Aplanarity_QCD_DHZfirst_18->SetLogy();
   Aplanarity_QCD_DHZfirst_18->SetLeftMargin(0.15);
   Aplanarity_QCD_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_QCD_DHZfirst_18->SetFrameBorderMode(0);
   Aplanarity_QCD_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_QCD_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1899 = new TH1D("VH_DHZfirst_Aplanarity__1899","",50,0,1);
   VH_DHZfirst_Aplanarity__1899->SetBinContent(1,265324.7);
   VH_DHZfirst_Aplanarity__1899->SetBinContent(2,22745.93);
   VH_DHZfirst_Aplanarity__1899->SetBinContent(3,2744.357);
   VH_DHZfirst_Aplanarity__1899->SetBinContent(4,1332.399);
   VH_DHZfirst_Aplanarity__1899->SetBinContent(5,132.6842);
   VH_DHZfirst_Aplanarity__1899->SetBinContent(6,6.484484);
   VH_DHZfirst_Aplanarity__1899->SetBinContent(8,9.848215);
   VH_DHZfirst_Aplanarity__1899->SetBinError(1,11630.52);
   VH_DHZfirst_Aplanarity__1899->SetBinError(2,2984.147);
   VH_DHZfirst_Aplanarity__1899->SetBinError(3,557.6105);
   VH_DHZfirst_Aplanarity__1899->SetBinError(4,773.7864);
   VH_DHZfirst_Aplanarity__1899->SetBinError(5,89.62555);
   VH_DHZfirst_Aplanarity__1899->SetBinError(6,6.484484);
   VH_DHZfirst_Aplanarity__1899->SetBinError(8,9.848215);
   VH_DHZfirst_Aplanarity__1899->SetEntries(8468);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1899->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1899->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1899->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1899->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1899->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1899->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1899->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1899->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1899->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1899->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1899->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1899->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1899->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1899->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1899->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1899->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_QCD_DHZfirst_18->Modified();
   Aplanarity_QCD_DHZfirst_18->cd();
   Aplanarity_QCD_DHZfirst_18->SetSelected(Aplanarity_QCD_DHZfirst_18);
}
