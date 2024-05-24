#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_TT_tagFirst_16()
{
//=========Macro generated from canvas: Aplanarity_TT_tagFirst_16/Aplanarity_TT_tagFirst_16
//=========  (Fri May 24 12:42:12 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_TT_tagFirst_16 = new TCanvas("Aplanarity_TT_tagFirst_16", "Aplanarity_TT_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_TT_tagFirst_16->SetHighLightColor(2);
   Aplanarity_TT_tagFirst_16->Range(-0.2,-43875.99,1.133333,394883.9);
   Aplanarity_TT_tagFirst_16->SetFillColor(0);
   Aplanarity_TT_tagFirst_16->SetFillStyle(4000);
   Aplanarity_TT_tagFirst_16->SetBorderMode(0);
   Aplanarity_TT_tagFirst_16->SetBorderSize(2);
   Aplanarity_TT_tagFirst_16->SetLeftMargin(0.15);
   Aplanarity_TT_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_TT_tagFirst_16->SetFrameBorderMode(0);
   Aplanarity_TT_tagFirst_16->SetFrameFillStyle(1000);
   Aplanarity_TT_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__466 = new TH1D("VH_tagFirst_Aplanarity__466","",50,0,1);
   VH_tagFirst_Aplanarity__466->SetBinContent(1,334293.3);
   VH_tagFirst_Aplanarity__466->SetBinContent(2,47540.66);
   VH_tagFirst_Aplanarity__466->SetBinContent(3,12468.65);
   VH_tagFirst_Aplanarity__466->SetBinContent(4,4505.066);
   VH_tagFirst_Aplanarity__466->SetBinContent(5,1980.783);
   VH_tagFirst_Aplanarity__466->SetBinContent(6,1007.448);
   VH_tagFirst_Aplanarity__466->SetBinContent(7,547.5853);
   VH_tagFirst_Aplanarity__466->SetBinContent(8,318.7676);
   VH_tagFirst_Aplanarity__466->SetBinContent(9,197.0441);
   VH_tagFirst_Aplanarity__466->SetBinContent(10,115.9304);
   VH_tagFirst_Aplanarity__466->SetBinContent(11,77.16098);
   VH_tagFirst_Aplanarity__466->SetBinContent(12,47.82452);
   VH_tagFirst_Aplanarity__466->SetBinContent(13,30.77579);
   VH_tagFirst_Aplanarity__466->SetBinContent(14,19.95052);
   VH_tagFirst_Aplanarity__466->SetBinContent(15,13.02759);
   VH_tagFirst_Aplanarity__466->SetBinContent(16,6.199086);
   VH_tagFirst_Aplanarity__466->SetBinContent(17,4.137826);
   VH_tagFirst_Aplanarity__466->SetBinContent(18,2.537693);
   VH_tagFirst_Aplanarity__466->SetBinContent(19,1.452018);
   VH_tagFirst_Aplanarity__466->SetBinContent(20,0.2722517);
   VH_tagFirst_Aplanarity__466->SetBinContent(21,0.4443023);
   VH_tagFirst_Aplanarity__466->SetBinContent(22,0.1345586);
   VH_tagFirst_Aplanarity__466->SetBinError(1,147.5269);
   VH_tagFirst_Aplanarity__466->SetBinError(2,54.95841);
   VH_tagFirst_Aplanarity__466->SetBinError(3,28.14573);
   VH_tagFirst_Aplanarity__466->SetBinError(4,16.94036);
   VH_tagFirst_Aplanarity__466->SetBinError(5,11.24344);
   VH_tagFirst_Aplanarity__466->SetBinError(6,8.056126);
   VH_tagFirst_Aplanarity__466->SetBinError(7,5.944699);
   VH_tagFirst_Aplanarity__466->SetBinError(8,4.543881);
   VH_tagFirst_Aplanarity__466->SetBinError(9,3.576837);
   VH_tagFirst_Aplanarity__466->SetBinError(10,2.730522);
   VH_tagFirst_Aplanarity__466->SetBinError(11,2.249866);
   VH_tagFirst_Aplanarity__466->SetBinError(12,1.782995);
   VH_tagFirst_Aplanarity__466->SetBinError(13,1.436677);
   VH_tagFirst_Aplanarity__466->SetBinError(14,1.155508);
   VH_tagFirst_Aplanarity__466->SetBinError(15,0.9478375);
   VH_tagFirst_Aplanarity__466->SetBinError(16,0.6336194);
   VH_tagFirst_Aplanarity__466->SetBinError(17,0.5253915);
   VH_tagFirst_Aplanarity__466->SetBinError(18,0.4100822);
   VH_tagFirst_Aplanarity__466->SetBinError(19,0.3080063);
   VH_tagFirst_Aplanarity__466->SetBinError(20,0.1214808);
   VH_tagFirst_Aplanarity__466->SetBinError(21,0.1849885);
   VH_tagFirst_Aplanarity__466->SetBinError(22,0.09525813);
   VH_tagFirst_Aplanarity__466->SetEntries(6851129);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__466->SetLineColor(ci);
   VH_tagFirst_Aplanarity__466->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__466->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__466->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__466->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__466->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__466->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__466->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__466->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__466->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__466->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__466->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__466->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__466->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__466->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__466->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_TT_tagFirst_16->Modified();
   Aplanarity_TT_tagFirst_16->cd();
   Aplanarity_TT_tagFirst_16->SetSelected(Aplanarity_TT_tagFirst_16);
}
