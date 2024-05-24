#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WJets_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Aplanarity_WJets_DHZfirst_18/Aplanarity_WJets_DHZfirst_18
//=========  (Thu May 23 20:48:52 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WJets_DHZfirst_18 = new TCanvas("Aplanarity_WJets_DHZfirst_18", "Aplanarity_WJets_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WJets_DHZfirst_18->SetHighLightColor(2);
   Aplanarity_WJets_DHZfirst_18->Range(-0.2,-2.410945,1.133333,4.015885);
   Aplanarity_WJets_DHZfirst_18->SetFillColor(0);
   Aplanarity_WJets_DHZfirst_18->SetFillStyle(4000);
   Aplanarity_WJets_DHZfirst_18->SetBorderMode(0);
   Aplanarity_WJets_DHZfirst_18->SetBorderSize(2);
   Aplanarity_WJets_DHZfirst_18->SetLogy();
   Aplanarity_WJets_DHZfirst_18->SetLeftMargin(0.15);
   Aplanarity_WJets_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_WJets_DHZfirst_18->SetFrameBorderMode(0);
   Aplanarity_WJets_DHZfirst_18->SetFrameFillStyle(1000);
   Aplanarity_WJets_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Aplanarity__1902 = new TH1D("VH_DHZfirst_Aplanarity__1902","",50,0,1);
   VH_DHZfirst_Aplanarity__1902->SetBinContent(1,1246.388);
   VH_DHZfirst_Aplanarity__1902->SetBinContent(2,109.2251);
   VH_DHZfirst_Aplanarity__1902->SetBinContent(3,24.6014);
   VH_DHZfirst_Aplanarity__1902->SetBinContent(4,2.14491);
   VH_DHZfirst_Aplanarity__1902->SetBinContent(6,0.03410105);
   VH_DHZfirst_Aplanarity__1902->SetBinError(1,57.23169);
   VH_DHZfirst_Aplanarity__1902->SetBinError(2,28.84171);
   VH_DHZfirst_Aplanarity__1902->SetBinError(3,8.172065);
   VH_DHZfirst_Aplanarity__1902->SetBinError(4,1.670181);
   VH_DHZfirst_Aplanarity__1902->SetBinError(6,0.03410105);
   VH_DHZfirst_Aplanarity__1902->SetEntries(3529);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Aplanarity__1902->SetLineColor(ci);
   VH_DHZfirst_Aplanarity__1902->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_Aplanarity__1902->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_Aplanarity__1902->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1902->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1902->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1902->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_Aplanarity__1902->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1902->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Aplanarity__1902->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Aplanarity__1902->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Aplanarity__1902->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1902->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Aplanarity__1902->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Aplanarity__1902->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Aplanarity__1902->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WJets_DHZfirst_18->Modified();
   Aplanarity_WJets_DHZfirst_18->cd();
   Aplanarity_WJets_DHZfirst_18->SetSelected(Aplanarity_WJets_DHZfirst_18);
}
