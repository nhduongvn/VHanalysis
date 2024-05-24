#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZJets_DHZfirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Sphericity_ZJets_DHZfirst_2b1c_16/Sphericity_ZJets_DHZfirst_2b1c_16
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZJets_DHZfirst_2b1c_16 = new TCanvas("Sphericity_ZJets_DHZfirst_2b1c_16", "Sphericity_ZJets_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZJets_DHZfirst_2b1c_16->SetHighLightColor(2);
   Sphericity_ZJets_DHZfirst_2b1c_16->Range(-0.2,-1.673183,1.133333,4.459384);
   Sphericity_ZJets_DHZfirst_2b1c_16->SetFillColor(0);
   Sphericity_ZJets_DHZfirst_2b1c_16->SetFillStyle(4000);
   Sphericity_ZJets_DHZfirst_2b1c_16->SetBorderMode(0);
   Sphericity_ZJets_DHZfirst_2b1c_16->SetBorderSize(2);
   Sphericity_ZJets_DHZfirst_2b1c_16->SetLogy();
   Sphericity_ZJets_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   Sphericity_ZJets_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZJets_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   Sphericity_ZJets_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZJets_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Sphericity__4033 = new TH1D("VH_DHZfirst_2b1c_Sphericity__4033","",25,0,1);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinContent(1,3703.211);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinContent(2,3397.261);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinContent(3,1910.842);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinContent(4,1121.211);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinContent(5,607.654);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinContent(6,259.642);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinContent(7,73.28778);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinContent(8,21.05457);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinContent(9,9.638628);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinContent(10,2.445225);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinContent(11,2.026547);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinContent(12,1.158627);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinContent(13,3.497123);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinContent(14,0.5741754);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinContent(15,0.2897204);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinContent(17,0.1926756);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinContent(18,0.1742222);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinContent(19,0.2634998);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinError(1,44.46821);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinError(2,47.25641);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinError(3,34.432);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinError(4,25.08974);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinError(5,17.23086);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinError(6,10.59875);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinError(7,5.906379);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinError(8,3.14007);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinError(9,2.893114);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinError(10,0.5148633);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinError(11,0.5873789);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinError(12,0.4236687);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinError(13,2.70894);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinError(14,0.3018408);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinError(15,0.2037611);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinError(17,0.1926756);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinError(18,0.1742222);
   VH_DHZfirst_2b1c_Sphericity__4033->SetBinError(19,0.2634998);
   VH_DHZfirst_2b1c_Sphericity__4033->SetEntries(83543);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Sphericity__4033->SetLineColor(ci);
   VH_DHZfirst_2b1c_Sphericity__4033->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_2b1c_Sphericity__4033->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_2b1c_Sphericity__4033->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4033->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4033->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4033->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_2b1c_Sphericity__4033->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4033->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Sphericity__4033->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Sphericity__4033->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Sphericity__4033->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4033->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Sphericity__4033->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Sphericity__4033->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Sphericity__4033->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZJets_DHZfirst_2b1c_16->Modified();
   Sphericity_ZJets_DHZfirst_2b1c_16->cd();
   Sphericity_ZJets_DHZfirst_2b1c_16->SetSelected(Sphericity_ZJets_DHZfirst_2b1c_16);
}
