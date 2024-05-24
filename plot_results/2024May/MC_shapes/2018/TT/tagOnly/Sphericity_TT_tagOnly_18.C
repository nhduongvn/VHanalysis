#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_TT_tagOnly_18()
{
//=========Macro generated from canvas: Sphericity_TT_tagOnly_18/Sphericity_TT_tagOnly_18
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_TT_tagOnly_18 = new TCanvas("Sphericity_TT_tagOnly_18", "Sphericity_TT_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_TT_tagOnly_18->SetHighLightColor(2);
   Sphericity_TT_tagOnly_18->Range(-0.2,-26839.02,1.133333,241551.1);
   Sphericity_TT_tagOnly_18->SetFillColor(0);
   Sphericity_TT_tagOnly_18->SetFillStyle(4000);
   Sphericity_TT_tagOnly_18->SetBorderMode(0);
   Sphericity_TT_tagOnly_18->SetBorderSize(2);
   Sphericity_TT_tagOnly_18->SetLeftMargin(0.15);
   Sphericity_TT_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_TT_tagOnly_18->SetFrameBorderMode(0);
   Sphericity_TT_tagOnly_18->SetFrameFillStyle(1000);
   Sphericity_TT_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1158 = new TH1D("VH_tagOnly_Sphericity__1158","",25,0,1);
   VH_tagOnly_Sphericity__1158->SetBinContent(1,204487.7);
   VH_tagOnly_Sphericity__1158->SetBinContent(2,171751);
   VH_tagOnly_Sphericity__1158->SetBinContent(3,96020.36);
   VH_tagOnly_Sphericity__1158->SetBinContent(4,55577.81);
   VH_tagOnly_Sphericity__1158->SetBinContent(5,32245.62);
   VH_tagOnly_Sphericity__1158->SetBinContent(6,18446.17);
   VH_tagOnly_Sphericity__1158->SetBinContent(7,10731.99);
   VH_tagOnly_Sphericity__1158->SetBinContent(8,6486.435);
   VH_tagOnly_Sphericity__1158->SetBinContent(9,4331.333);
   VH_tagOnly_Sphericity__1158->SetBinContent(10,2990.212);
   VH_tagOnly_Sphericity__1158->SetBinContent(11,2119.126);
   VH_tagOnly_Sphericity__1158->SetBinContent(12,1584.509);
   VH_tagOnly_Sphericity__1158->SetBinContent(13,1182.942);
   VH_tagOnly_Sphericity__1158->SetBinContent(14,894.0196);
   VH_tagOnly_Sphericity__1158->SetBinContent(15,705.1492);
   VH_tagOnly_Sphericity__1158->SetBinContent(16,532.2273);
   VH_tagOnly_Sphericity__1158->SetBinContent(17,383.0053);
   VH_tagOnly_Sphericity__1158->SetBinContent(18,245.426);
   VH_tagOnly_Sphericity__1158->SetBinContent(19,145.355);
   VH_tagOnly_Sphericity__1158->SetBinContent(20,59.0085);
   VH_tagOnly_Sphericity__1158->SetBinContent(21,17.18979);
   VH_tagOnly_Sphericity__1158->SetBinContent(22,5.152731);
   VH_tagOnly_Sphericity__1158->SetBinContent(23,1.00595);
   VH_tagOnly_Sphericity__1158->SetBinError(1,201.7302);
   VH_tagOnly_Sphericity__1158->SetBinError(2,182.7365);
   VH_tagOnly_Sphericity__1158->SetBinError(3,137.7782);
   VH_tagOnly_Sphericity__1158->SetBinError(4,105.4078);
   VH_tagOnly_Sphericity__1158->SetBinError(5,80.11417);
   VH_tagOnly_Sphericity__1158->SetBinError(6,60.12692);
   VH_tagOnly_Sphericity__1158->SetBinError(7,45.76527);
   VH_tagOnly_Sphericity__1158->SetBinError(8,35.96204);
   VH_tagOnly_Sphericity__1158->SetBinError(9,31.36767);
   VH_tagOnly_Sphericity__1158->SetBinError(10,23.96417);
   VH_tagOnly_Sphericity__1158->SetBinError(11,20.41397);
   VH_tagOnly_Sphericity__1158->SetBinError(12,20.27934);
   VH_tagOnly_Sphericity__1158->SetBinError(13,15.15855);
   VH_tagOnly_Sphericity__1158->SetBinError(14,12.70476);
   VH_tagOnly_Sphericity__1158->SetBinError(15,12.38409);
   VH_tagOnly_Sphericity__1158->SetBinError(16,12.80892);
   VH_tagOnly_Sphericity__1158->SetBinError(17,9.395453);
   VH_tagOnly_Sphericity__1158->SetBinError(18,6.924204);
   VH_tagOnly_Sphericity__1158->SetBinError(19,5.154138);
   VH_tagOnly_Sphericity__1158->SetBinError(20,4.092576);
   VH_tagOnly_Sphericity__1158->SetBinError(21,1.677358);
   VH_tagOnly_Sphericity__1158->SetBinError(22,0.8066314);
   VH_tagOnly_Sphericity__1158->SetBinError(23,0.5529497);
   VH_tagOnly_Sphericity__1158->SetEntries(5043348);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1158->SetLineColor(ci);
   VH_tagOnly_Sphericity__1158->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1158->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1158->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1158->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1158->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1158->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1158->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1158->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1158->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1158->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1158->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1158->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1158->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1158->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1158->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_TT_tagOnly_18->Modified();
   Sphericity_TT_tagOnly_18->cd();
   Sphericity_TT_tagOnly_18->SetSelected(Sphericity_TT_tagOnly_18);
}
