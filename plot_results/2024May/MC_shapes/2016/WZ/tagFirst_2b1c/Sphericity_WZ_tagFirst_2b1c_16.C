#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WZ_tagFirst_2b1c_16()
{
//=========Macro generated from canvas: Sphericity_WZ_tagFirst_2b1c_16/Sphericity_WZ_tagFirst_2b1c_16
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WZ_tagFirst_2b1c_16 = new TCanvas("Sphericity_WZ_tagFirst_2b1c_16", "Sphericity_WZ_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WZ_tagFirst_2b1c_16->SetHighLightColor(2);
   Sphericity_WZ_tagFirst_2b1c_16->Range(-0.2,-26.3201,1.133333,236.8808);
   Sphericity_WZ_tagFirst_2b1c_16->SetFillColor(0);
   Sphericity_WZ_tagFirst_2b1c_16->SetFillStyle(4000);
   Sphericity_WZ_tagFirst_2b1c_16->SetBorderMode(0);
   Sphericity_WZ_tagFirst_2b1c_16->SetBorderSize(2);
   Sphericity_WZ_tagFirst_2b1c_16->SetLeftMargin(0.15);
   Sphericity_WZ_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_WZ_tagFirst_2b1c_16->SetFrameBorderMode(0);
   Sphericity_WZ_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_WZ_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2605 = new TH1D("VH_tagFirst_2b1c_Sphericity__2605","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(1,200.534);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(2,167.8227);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(3,96.08075);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(4,55.75096);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(5,34.69771);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(6,17.30369);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(7,8.014575);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(8,3.971525);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(9,2.25182);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(10,2.649401);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(11,1.557998);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(12,0.5672239);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(13,1.083118);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(14,0.3228296);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(15,0.5104695);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(16,0.3901172);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(17,0.5397659);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(18,0.1647076);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(19,0.0915609);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinContent(20,0.2147203);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(1,4.338286);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(2,3.914133);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(3,2.97525);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(4,2.273876);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(5,1.804979);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(6,1.274418);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(7,0.8706217);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(8,0.6317476);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(9,0.456073);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(10,0.5169591);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(11,0.4061617);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(12,0.2340129);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(13,0.328944);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(14,0.1641807);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(15,0.2265938);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(16,0.1954671);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(17,0.2472503);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(18,0.1165463);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(19,0.0915609);
   VH_tagFirst_2b1c_Sphericity__2605->SetBinError(20,0.1564576);
   VH_tagFirst_2b1c_Sphericity__2605->SetEntries(6672);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2605->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2605->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2605->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2605->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2605->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2605->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2605->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2605->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2605->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2605->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2605->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2605->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2605->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2605->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2605->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2605->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WZ_tagFirst_2b1c_16->Modified();
   Sphericity_WZ_tagFirst_2b1c_16->cd();
   Sphericity_WZ_tagFirst_2b1c_16->SetSelected(Sphericity_WZ_tagFirst_2b1c_16);
}
