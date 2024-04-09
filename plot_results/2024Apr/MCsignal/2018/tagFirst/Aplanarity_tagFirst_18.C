#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_18()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_18/Aplanarity_tagFirst_18
//=========  (Mon Apr  8 11:27:51 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagFirst_18 = new TCanvas("Aplanarity_tagFirst_18", "Aplanarity_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tagFirst_18->SetHighLightColor(2);
   Aplanarity_tagFirst_18->Range(-0.2,-0.3334958,1.133333,3.001462);
   Aplanarity_tagFirst_18->SetFillColor(0);
   Aplanarity_tagFirst_18->SetFillStyle(4000);
   Aplanarity_tagFirst_18->SetBorderMode(0);
   Aplanarity_tagFirst_18->SetBorderSize(2);
   Aplanarity_tagFirst_18->SetLeftMargin(0.15);
   Aplanarity_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_18->SetFrameBorderMode(0);
   Aplanarity_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__48 = new TH1D("VH_tagFirst_Aplanarity__48","",50,0,1);
   VH_tagFirst_Aplanarity__48->SetBinContent(1,2.540921);
   VH_tagFirst_Aplanarity__48->SetBinContent(2,0.196944);
   VH_tagFirst_Aplanarity__48->SetBinContent(3,0.05599686);
   VH_tagFirst_Aplanarity__48->SetBinContent(4,0.00789285);
   VH_tagFirst_Aplanarity__48->SetBinContent(5,0.004784755);
   VH_tagFirst_Aplanarity__48->SetBinContent(6,0.001750385);
   VH_tagFirst_Aplanarity__48->SetBinContent(7,0.006058982);
   VH_tagFirst_Aplanarity__48->SetBinContent(8,0.005370295);
   VH_tagFirst_Aplanarity__48->SetBinError(1,0.1011269);
   VH_tagFirst_Aplanarity__48->SetBinError(2,0.02523643);
   VH_tagFirst_Aplanarity__48->SetBinError(3,0.016435);
   VH_tagFirst_Aplanarity__48->SetBinError(4,0.005584141);
   VH_tagFirst_Aplanarity__48->SetBinError(5,0.003386026);
   VH_tagFirst_Aplanarity__48->SetBinError(6,0.001750385);
   VH_tagFirst_Aplanarity__48->SetBinError(7,0.004310176);
   VH_tagFirst_Aplanarity__48->SetBinError(8,0.005370295);
   VH_tagFirst_Aplanarity__48->SetEntries(939);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__48->SetLineColor(ci);
   VH_tagFirst_Aplanarity__48->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__48->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__48->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__48->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__48->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__48->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__48->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__48->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__48->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__48->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__48->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__48->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__48->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__48->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__48->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tagFirst_18->Modified();
   Aplanarity_tagFirst_18->cd();
   Aplanarity_tagFirst_18->SetSelected(Aplanarity_tagFirst_18);
}
