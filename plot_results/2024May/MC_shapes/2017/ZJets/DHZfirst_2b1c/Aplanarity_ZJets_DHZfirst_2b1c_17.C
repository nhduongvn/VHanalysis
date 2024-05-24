#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZJets_DHZfirst_2b1c_17()
{
//=========Macro generated from canvas: Aplanarity_ZJets_DHZfirst_2b1c_17/Aplanarity_ZJets_DHZfirst_2b1c_17
//=========  (Fri May 24 12:43:07 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZJets_DHZfirst_2b1c_17 = new TCanvas("Aplanarity_ZJets_DHZfirst_2b1c_17", "Aplanarity_ZJets_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZJets_DHZfirst_2b1c_17->SetHighLightColor(2);
   Aplanarity_ZJets_DHZfirst_2b1c_17->Range(-0.2,-739.3813,1.133333,6654.431);
   Aplanarity_ZJets_DHZfirst_2b1c_17->SetFillColor(0);
   Aplanarity_ZJets_DHZfirst_2b1c_17->SetFillStyle(4000);
   Aplanarity_ZJets_DHZfirst_2b1c_17->SetBorderMode(0);
   Aplanarity_ZJets_DHZfirst_2b1c_17->SetBorderSize(2);
   Aplanarity_ZJets_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_ZJets_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZJets_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_ZJets_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZJets_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4064 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4064","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetBinContent(1,5633.381);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetBinContent(2,584.2934);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetBinContent(3,100.9649);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetBinContent(4,17.56527);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetBinContent(5,2.80546);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetBinContent(6,2.287919);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetBinContent(7,0.4287885);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetBinContent(8,0.2717058);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetBinContent(9,0.0140749);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetBinError(1,55.82719);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetBinError(2,22.32617);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetBinError(3,9.047066);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetBinError(4,2.059501);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetBinError(5,0.7445101);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetBinError(6,1.469236);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetBinError(7,0.2276628);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetBinError(8,0.2436818);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetBinError(9,0.0140749);
   VH_DHZfirst_2b1c_Aplanarity__4064->SetEntries(41564);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4064->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4064->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4064->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4064->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4064->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4064->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4064->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4064->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4064->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4064->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4064->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4064->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4064->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4064->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4064->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4064->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZJets_DHZfirst_2b1c_17->Modified();
   Aplanarity_ZJets_DHZfirst_2b1c_17->cd();
   Aplanarity_ZJets_DHZfirst_2b1c_17->SetSelected(Aplanarity_ZJets_DHZfirst_2b1c_17);
}
