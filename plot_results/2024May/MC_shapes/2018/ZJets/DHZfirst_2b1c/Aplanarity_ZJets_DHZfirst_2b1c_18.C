#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZJets_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: Aplanarity_ZJets_DHZfirst_2b1c_18/Aplanarity_ZJets_DHZfirst_2b1c_18
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZJets_DHZfirst_2b1c_18 = new TCanvas("Aplanarity_ZJets_DHZfirst_2b1c_18", "Aplanarity_ZJets_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZJets_DHZfirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_ZJets_DHZfirst_2b1c_18->Range(-0.2,-1584.018,1.133333,14256.16);
   Aplanarity_ZJets_DHZfirst_2b1c_18->SetFillColor(0);
   Aplanarity_ZJets_DHZfirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_ZJets_DHZfirst_2b1c_18->SetBorderMode(0);
   Aplanarity_ZJets_DHZfirst_2b1c_18->SetBorderSize(2);
   Aplanarity_ZJets_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_ZJets_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZJets_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_ZJets_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZJets_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4065 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4065","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetBinContent(1,12068.71);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetBinContent(2,1111.636);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetBinContent(3,213.036);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetBinContent(4,41.74696);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetBinContent(5,8.279062);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetBinContent(6,2.899569);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetBinContent(7,0.8686719);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetBinContent(8,0.2829935);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetBinContent(9,0.1363351);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetBinError(1,110.3377);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetBinError(2,38.19656);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetBinError(3,14.09276);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetBinError(4,6.38554);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetBinError(5,2.291495);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetBinError(6,1.707419);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetBinError(7,0.634254);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetBinError(8,0.2829935);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetBinError(9,0.1363351);
   VH_DHZfirst_2b1c_Aplanarity__4065->SetEntries(43930);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4065->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4065->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4065->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4065->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4065->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4065->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4065->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4065->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4065->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4065->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4065->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4065->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4065->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4065->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4065->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4065->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZJets_DHZfirst_2b1c_18->Modified();
   Aplanarity_ZJets_DHZfirst_2b1c_18->cd();
   Aplanarity_ZJets_DHZfirst_2b1c_18->SetSelected(Aplanarity_ZJets_DHZfirst_2b1c_18);
}
