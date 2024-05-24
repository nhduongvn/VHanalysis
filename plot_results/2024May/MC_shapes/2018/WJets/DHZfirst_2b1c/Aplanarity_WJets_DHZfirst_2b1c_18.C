#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_WJets_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: Aplanarity_WJets_DHZfirst_2b1c_18/Aplanarity_WJets_DHZfirst_2b1c_18
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_WJets_DHZfirst_2b1c_18 = new TCanvas("Aplanarity_WJets_DHZfirst_2b1c_18", "Aplanarity_WJets_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_WJets_DHZfirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_WJets_DHZfirst_2b1c_18->Range(-0.2,-672.7769,1.133333,6054.992);
   Aplanarity_WJets_DHZfirst_2b1c_18->SetFillColor(0);
   Aplanarity_WJets_DHZfirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_WJets_DHZfirst_2b1c_18->SetBorderMode(0);
   Aplanarity_WJets_DHZfirst_2b1c_18->SetBorderSize(2);
   Aplanarity_WJets_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_WJets_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_WJets_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_WJets_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_WJets_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4062 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4062","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetBinContent(1,5125.919);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetBinContent(2,481.842);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetBinContent(3,82.73006);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetBinContent(4,31.13618);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetBinContent(5,0.5386313);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetBinContent(6,1.090803);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetBinContent(7,1.903872);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetBinContent(8,0.0609585);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetBinContent(10,3.033501);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetBinError(1,133.6127);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetBinError(2,43.2682);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetBinError(3,12.61288);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetBinError(4,12.39582);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetBinError(5,0.3002462);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetBinError(6,0.7184335);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetBinError(7,1.691674);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetBinError(8,0.0609585);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetBinError(10,3.033501);
   VH_DHZfirst_2b1c_Aplanarity__4062->SetEntries(14697);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4062->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4062->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4062->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4062->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4062->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4062->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4062->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4062->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4062->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4062->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4062->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4062->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4062->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4062->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4062->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4062->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_WJets_DHZfirst_2b1c_18->Modified();
   Aplanarity_WJets_DHZfirst_2b1c_18->cd();
   Aplanarity_WJets_DHZfirst_2b1c_18->SetSelected(Aplanarity_WJets_DHZfirst_2b1c_18);
}
