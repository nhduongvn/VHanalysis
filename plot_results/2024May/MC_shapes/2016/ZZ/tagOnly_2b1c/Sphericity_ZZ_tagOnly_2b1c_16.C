#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZZ_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: Sphericity_ZZ_tagOnly_2b1c_16/Sphericity_ZZ_tagOnly_2b1c_16
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZZ_tagOnly_2b1c_16 = new TCanvas("Sphericity_ZZ_tagOnly_2b1c_16", "Sphericity_ZZ_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZZ_tagOnly_2b1c_16->SetHighLightColor(2);
   Sphericity_ZZ_tagOnly_2b1c_16->Range(-0.2,-21.81468,1.133333,196.3321);
   Sphericity_ZZ_tagOnly_2b1c_16->SetFillColor(0);
   Sphericity_ZZ_tagOnly_2b1c_16->SetFillStyle(4000);
   Sphericity_ZZ_tagOnly_2b1c_16->SetBorderMode(0);
   Sphericity_ZZ_tagOnly_2b1c_16->SetBorderSize(2);
   Sphericity_ZZ_tagOnly_2b1c_16->SetLeftMargin(0.15);
   Sphericity_ZZ_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagOnly_2b1c_16->SetFrameBorderMode(0);
   Sphericity_ZZ_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3328 = new TH1D("VH_tagOnly_2b1c_Sphericity__3328","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinContent(1,166.2071);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinContent(2,141.4669);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinContent(3,81.5761);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinContent(4,49.40718);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinContent(5,31.43018);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinContent(6,17.01194);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinContent(7,6.097568);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinContent(8,2.545178);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinContent(9,2.345788);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinContent(10,0.9704038);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinContent(11,0.2638125);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinContent(12,1.014658);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinContent(13,0.4672405);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinContent(14,0.8905764);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinContent(15,0.450587);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinContent(18,0.4426558);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinError(1,5.874002);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinError(2,5.407667);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinError(3,4.081264);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinError(4,3.190952);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinError(5,2.597955);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinError(6,1.91371);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinError(7,1.141066);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinError(8,0.7230337);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinError(9,0.7160805);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinError(10,0.4356467);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinError(11,0.1886251);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinError(12,0.4577106);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinError(13,0.3402385);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinError(14,0.4468359);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinError(15,0.3186317);
   VH_tagOnly_2b1c_Sphericity__3328->SetBinError(18,0.3187798);
   VH_tagOnly_2b1c_Sphericity__3328->SetEntries(2523);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3328->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3328->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3328->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3328->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3328->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3328->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3328->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3328->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3328->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3328->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3328->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3328->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3328->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3328->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3328->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3328->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZZ_tagOnly_2b1c_16->Modified();
   Sphericity_ZZ_tagOnly_2b1c_16->cd();
   Sphericity_ZZ_tagOnly_2b1c_16->SetSelected(Sphericity_ZZ_tagOnly_2b1c_16);
}
