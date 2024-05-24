#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHcc_tagFirst_17_logY()
{
//=========Macro generated from canvas: Aplanarity_ZHcc_tagFirst_17/Aplanarity_ZHcc_tagFirst_17
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHcc_tagFirst_17 = new TCanvas("Aplanarity_ZHcc_tagFirst_17", "Aplanarity_ZHcc_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHcc_tagFirst_17->SetHighLightColor(2);
   Aplanarity_ZHcc_tagFirst_17->Range(-0.2,-4.717551,1.133333,1.157676);
   Aplanarity_ZHcc_tagFirst_17->SetFillColor(0);
   Aplanarity_ZHcc_tagFirst_17->SetFillStyle(4000);
   Aplanarity_ZHcc_tagFirst_17->SetBorderMode(0);
   Aplanarity_ZHcc_tagFirst_17->SetBorderSize(2);
   Aplanarity_ZHcc_tagFirst_17->SetLogy();
   Aplanarity_ZHcc_tagFirst_17->SetLeftMargin(0.15);
   Aplanarity_ZHcc_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagFirst_17->SetFrameBorderMode(0);
   Aplanarity_ZHcc_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__452 = new TH1D("VH_tagFirst_Aplanarity__452","",50,0,1);
   VH_tagFirst_Aplanarity__452->SetBinContent(1,1.961571);
   VH_tagFirst_Aplanarity__452->SetBinContent(2,0.1951422);
   VH_tagFirst_Aplanarity__452->SetBinContent(3,0.04168582);
   VH_tagFirst_Aplanarity__452->SetBinContent(4,0.01964036);
   VH_tagFirst_Aplanarity__452->SetBinContent(5,0.006278362);
   VH_tagFirst_Aplanarity__452->SetBinContent(6,0.001586797);
   VH_tagFirst_Aplanarity__452->SetBinContent(7,0.0009238973);
   VH_tagFirst_Aplanarity__452->SetBinContent(8,0.001198057);
   VH_tagFirst_Aplanarity__452->SetBinContent(9,0.001064883);
   VH_tagFirst_Aplanarity__452->SetBinContent(10,0.0001482523);
   VH_tagFirst_Aplanarity__452->SetBinContent(11,0.001758706);
   VH_tagFirst_Aplanarity__452->SetBinError(1,0.04692436);
   VH_tagFirst_Aplanarity__452->SetBinError(2,0.01432536);
   VH_tagFirst_Aplanarity__452->SetBinError(3,0.006932747);
   VH_tagFirst_Aplanarity__452->SetBinError(4,0.004706138);
   VH_tagFirst_Aplanarity__452->SetBinError(5,0.002284256);
   VH_tagFirst_Aplanarity__452->SetBinError(6,0.001309798);
   VH_tagFirst_Aplanarity__452->SetBinError(7,0.0003833563);
   VH_tagFirst_Aplanarity__452->SetBinError(8,0.0006203505);
   VH_tagFirst_Aplanarity__452->SetBinError(9,0.001064883);
   VH_tagFirst_Aplanarity__452->SetBinError(10,0.0001482523);
   VH_tagFirst_Aplanarity__452->SetBinError(11,0.001011927);
   VH_tagFirst_Aplanarity__452->SetEntries(5346);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__452->SetLineColor(ci);
   VH_tagFirst_Aplanarity__452->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__452->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__452->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__452->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__452->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__452->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__452->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__452->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__452->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__452->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__452->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__452->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__452->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__452->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__452->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHcc_tagFirst_17->Modified();
   Aplanarity_ZHcc_tagFirst_17->cd();
   Aplanarity_ZHcc_tagFirst_17->SetSelected(Aplanarity_ZHcc_tagFirst_17);
}
