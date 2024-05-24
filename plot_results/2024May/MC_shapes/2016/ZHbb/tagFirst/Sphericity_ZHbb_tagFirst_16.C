#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHbb_tagFirst_16()
{
//=========Macro generated from canvas: Sphericity_ZHbb_tagFirst_16/Sphericity_ZHbb_tagFirst_16
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHbb_tagFirst_16 = new TCanvas("Sphericity_ZHbb_tagFirst_16", "Sphericity_ZHbb_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHbb_tagFirst_16->SetHighLightColor(2);
   Sphericity_ZHbb_tagFirst_16->Range(-0.2,-5.155798,1.133333,46.40218);
   Sphericity_ZHbb_tagFirst_16->SetFillColor(0);
   Sphericity_ZHbb_tagFirst_16->SetFillStyle(4000);
   Sphericity_ZHbb_tagFirst_16->SetBorderMode(0);
   Sphericity_ZHbb_tagFirst_16->SetBorderSize(2);
   Sphericity_ZHbb_tagFirst_16->SetLeftMargin(0.15);
   Sphericity_ZHbb_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagFirst_16->SetFrameBorderMode(0);
   Sphericity_ZHbb_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__424 = new TH1D("VH_tagFirst_Sphericity__424","",25,0,1);
   VH_tagFirst_Sphericity__424->SetBinContent(1,39.28227);
   VH_tagFirst_Sphericity__424->SetBinContent(2,33.59699);
   VH_tagFirst_Sphericity__424->SetBinContent(3,19.49177);
   VH_tagFirst_Sphericity__424->SetBinContent(4,12.66583);
   VH_tagFirst_Sphericity__424->SetBinContent(5,7.829816);
   VH_tagFirst_Sphericity__424->SetBinContent(6,4.189824);
   VH_tagFirst_Sphericity__424->SetBinContent(7,2.055368);
   VH_tagFirst_Sphericity__424->SetBinContent(8,1.072429);
   VH_tagFirst_Sphericity__424->SetBinContent(9,0.6021837);
   VH_tagFirst_Sphericity__424->SetBinContent(10,0.5003271);
   VH_tagFirst_Sphericity__424->SetBinContent(11,0.3302836);
   VH_tagFirst_Sphericity__424->SetBinContent(12,0.2647835);
   VH_tagFirst_Sphericity__424->SetBinContent(13,0.2168776);
   VH_tagFirst_Sphericity__424->SetBinContent(14,0.1617843);
   VH_tagFirst_Sphericity__424->SetBinContent(15,0.1100827);
   VH_tagFirst_Sphericity__424->SetBinContent(16,0.08068997);
   VH_tagFirst_Sphericity__424->SetBinContent(17,0.05685404);
   VH_tagFirst_Sphericity__424->SetBinContent(18,0.04139594);
   VH_tagFirst_Sphericity__424->SetBinContent(19,0.01869066);
   VH_tagFirst_Sphericity__424->SetBinContent(20,0.00523358);
   VH_tagFirst_Sphericity__424->SetBinContent(21,0.001054582);
   VH_tagFirst_Sphericity__424->SetBinContent(22,0.00223695);
   VH_tagFirst_Sphericity__424->SetBinContent(23,0.0003553043);
   VH_tagFirst_Sphericity__424->SetBinError(1,0.1837215);
   VH_tagFirst_Sphericity__424->SetBinError(2,0.1691484);
   VH_tagFirst_Sphericity__424->SetBinError(3,0.1295276);
   VH_tagFirst_Sphericity__424->SetBinError(4,0.1051073);
   VH_tagFirst_Sphericity__424->SetBinError(5,0.08346991);
   VH_tagFirst_Sphericity__424->SetBinError(6,0.06084321);
   VH_tagFirst_Sphericity__424->SetBinError(7,0.04238992);
   VH_tagFirst_Sphericity__424->SetBinError(8,0.02959861);
   VH_tagFirst_Sphericity__424->SetBinError(9,0.02226594);
   VH_tagFirst_Sphericity__424->SetBinError(10,0.02088701);
   VH_tagFirst_Sphericity__424->SetBinError(11,0.01629052);
   VH_tagFirst_Sphericity__424->SetBinError(12,0.01463541);
   VH_tagFirst_Sphericity__424->SetBinError(13,0.01358759);
   VH_tagFirst_Sphericity__424->SetBinError(14,0.01190537);
   VH_tagFirst_Sphericity__424->SetBinError(15,0.009373868);
   VH_tagFirst_Sphericity__424->SetBinError(16,0.007921179);
   VH_tagFirst_Sphericity__424->SetBinError(17,0.006815227);
   VH_tagFirst_Sphericity__424->SetBinError(18,0.006150268);
   VH_tagFirst_Sphericity__424->SetBinError(19,0.00353453);
   VH_tagFirst_Sphericity__424->SetBinError(20,0.00187154);
   VH_tagFirst_Sphericity__424->SetBinError(21,0.0006129514);
   VH_tagFirst_Sphericity__424->SetBinError(22,0.001572874);
   VH_tagFirst_Sphericity__424->SetBinError(23,0.0003553043);
   VH_tagFirst_Sphericity__424->SetEntries(207200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__424->SetLineColor(ci);
   VH_tagFirst_Sphericity__424->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__424->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__424->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__424->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__424->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__424->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__424->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__424->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__424->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__424->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__424->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__424->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__424->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__424->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__424->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHbb_tagFirst_16->Modified();
   Sphericity_ZHbb_tagFirst_16->cd();
   Sphericity_ZHbb_tagFirst_16->SetSelected(Sphericity_ZHbb_tagFirst_16);
}
