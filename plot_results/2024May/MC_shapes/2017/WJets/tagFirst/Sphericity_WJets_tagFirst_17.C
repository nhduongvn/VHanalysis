#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WJets_tagFirst_17()
{
//=========Macro generated from canvas: Sphericity_WJets_tagFirst_17/Sphericity_WJets_tagFirst_17
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WJets_tagFirst_17 = new TCanvas("Sphericity_WJets_tagFirst_17", "Sphericity_WJets_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WJets_tagFirst_17->SetHighLightColor(2);
   Sphericity_WJets_tagFirst_17->Range(-0.2,-317.1782,1.133333,2854.604);
   Sphericity_WJets_tagFirst_17->SetFillColor(0);
   Sphericity_WJets_tagFirst_17->SetFillStyle(4000);
   Sphericity_WJets_tagFirst_17->SetBorderMode(0);
   Sphericity_WJets_tagFirst_17->SetBorderSize(2);
   Sphericity_WJets_tagFirst_17->SetLeftMargin(0.15);
   Sphericity_WJets_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_WJets_tagFirst_17->SetFrameBorderMode(0);
   Sphericity_WJets_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_WJets_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__431 = new TH1D("VH_tagFirst_Sphericity__431","",25,0,1);
   VH_tagFirst_Sphericity__431->SetBinContent(1,2416.596);
   VH_tagFirst_Sphericity__431->SetBinContent(2,1659.255);
   VH_tagFirst_Sphericity__431->SetBinContent(3,981.4283);
   VH_tagFirst_Sphericity__431->SetBinContent(4,583.4093);
   VH_tagFirst_Sphericity__431->SetBinContent(5,343.7084);
   VH_tagFirst_Sphericity__431->SetBinContent(6,193.2204);
   VH_tagFirst_Sphericity__431->SetBinContent(7,96.91843);
   VH_tagFirst_Sphericity__431->SetBinContent(8,55.89665);
   VH_tagFirst_Sphericity__431->SetBinContent(9,48.8373);
   VH_tagFirst_Sphericity__431->SetBinContent(10,24.1589);
   VH_tagFirst_Sphericity__431->SetBinContent(11,19.93991);
   VH_tagFirst_Sphericity__431->SetBinContent(12,21.12766);
   VH_tagFirst_Sphericity__431->SetBinContent(13,15.31872);
   VH_tagFirst_Sphericity__431->SetBinContent(14,17.6654);
   VH_tagFirst_Sphericity__431->SetBinContent(15,4.442568);
   VH_tagFirst_Sphericity__431->SetBinContent(16,4.593267);
   VH_tagFirst_Sphericity__431->SetBinContent(17,2.530667);
   VH_tagFirst_Sphericity__431->SetBinContent(18,2.78894);
   VH_tagFirst_Sphericity__431->SetBinContent(19,0.7963111);
   VH_tagFirst_Sphericity__431->SetBinContent(20,0.05672097);
   VH_tagFirst_Sphericity__431->SetBinContent(21,0.03334759);
   VH_tagFirst_Sphericity__431->SetBinError(1,51.60623);
   VH_tagFirst_Sphericity__431->SetBinError(2,44.32663);
   VH_tagFirst_Sphericity__431->SetBinError(3,36.12501);
   VH_tagFirst_Sphericity__431->SetBinError(4,22.76392);
   VH_tagFirst_Sphericity__431->SetBinError(5,21.41508);
   VH_tagFirst_Sphericity__431->SetBinError(6,11.8517);
   VH_tagFirst_Sphericity__431->SetBinError(7,7.231711);
   VH_tagFirst_Sphericity__431->SetBinError(8,5.454174);
   VH_tagFirst_Sphericity__431->SetBinError(9,7.957934);
   VH_tagFirst_Sphericity__431->SetBinError(10,2.986836);
   VH_tagFirst_Sphericity__431->SetBinError(11,2.419922);
   VH_tagFirst_Sphericity__431->SetBinError(12,5.176546);
   VH_tagFirst_Sphericity__431->SetBinError(13,4.195872);
   VH_tagFirst_Sphericity__431->SetBinError(14,6.908234);
   VH_tagFirst_Sphericity__431->SetBinError(15,0.714502);
   VH_tagFirst_Sphericity__431->SetBinError(16,0.7656922);
   VH_tagFirst_Sphericity__431->SetBinError(17,0.5665193);
   VH_tagFirst_Sphericity__431->SetBinError(18,0.7367668);
   VH_tagFirst_Sphericity__431->SetBinError(19,0.242424);
   VH_tagFirst_Sphericity__431->SetBinError(20,0.04736711);
   VH_tagFirst_Sphericity__431->SetBinError(21,0.03334759);
   VH_tagFirst_Sphericity__431->SetEntries(45049);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__431->SetLineColor(ci);
   VH_tagFirst_Sphericity__431->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__431->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__431->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__431->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__431->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__431->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__431->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__431->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__431->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__431->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__431->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__431->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__431->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__431->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__431->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WJets_tagFirst_17->Modified();
   Sphericity_WJets_tagFirst_17->cd();
   Sphericity_WJets_tagFirst_17->SetSelected(Sphericity_WJets_tagFirst_17);
}
