#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_SingleTop_tagOnly_2b1c_18_logY()
{
//=========Macro generated from canvas: Aplanarity_SingleTop_tagOnly_2b1c_18/Aplanarity_SingleTop_tagOnly_2b1c_18
//=========  (Thu May 23 20:49:13 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_SingleTop_tagOnly_2b1c_18 = new TCanvas("Aplanarity_SingleTop_tagOnly_2b1c_18", "Aplanarity_SingleTop_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_SingleTop_tagOnly_2b1c_18->SetHighLightColor(2);
   Aplanarity_SingleTop_tagOnly_2b1c_18->Range(-0.2,-1.158334,1.133333,5.801465);
   Aplanarity_SingleTop_tagOnly_2b1c_18->SetFillColor(0);
   Aplanarity_SingleTop_tagOnly_2b1c_18->SetFillStyle(4000);
   Aplanarity_SingleTop_tagOnly_2b1c_18->SetBorderMode(0);
   Aplanarity_SingleTop_tagOnly_2b1c_18->SetBorderSize(2);
   Aplanarity_SingleTop_tagOnly_2b1c_18->SetLogy();
   Aplanarity_SingleTop_tagOnly_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_SingleTop_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagOnly_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_SingleTop_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Aplanarity__3351 = new TH1D("VH_tagOnly_2b1c_Aplanarity__3351","",50,0,1);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinContent(1,67287.74);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinContent(2,9052.633);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinContent(3,2288.662);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinContent(4,759.7633);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinContent(5,323.1953);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinContent(6,146.8908);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinContent(7,83.70445);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinContent(8,48.58788);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinContent(9,27.04896);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinContent(10,14.23651);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinContent(11,8.753924);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinContent(12,5.612275);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinContent(13,4.988259);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinContent(14,2.884796);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinContent(15,1.704274);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinContent(16,0.6897252);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinContent(17,1.282159);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinContent(18,0.7074931);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinError(1,159.5323);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinError(2,57.7249);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinError(3,31.93256);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinError(4,16.1347);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinError(5,11.49445);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinError(6,7.010329);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinError(7,8.673136);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinError(8,4.839965);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinError(9,3.008724);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinError(10,1.926713);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinError(11,1.546365);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinError(12,1.504704);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinError(13,1.201399);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinError(14,0.9234143);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinError(15,0.5372022);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinError(16,0.342952);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinError(17,0.5208787);
   VH_tagOnly_2b1c_Aplanarity__3351->SetBinError(18,0.4733139);
   VH_tagOnly_2b1c_Aplanarity__3351->SetEntries(617511);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Aplanarity__3351->SetLineColor(ci);
   VH_tagOnly_2b1c_Aplanarity__3351->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_2b1c_Aplanarity__3351->GetXaxis()->SetRange(1,50);
   VH_tagOnly_2b1c_Aplanarity__3351->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3351->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3351->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3351->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_2b1c_Aplanarity__3351->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3351->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Aplanarity__3351->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Aplanarity__3351->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Aplanarity__3351->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3351->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Aplanarity__3351->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Aplanarity__3351->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Aplanarity__3351->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_SingleTop_tagOnly_2b1c_18->Modified();
   Aplanarity_SingleTop_tagOnly_2b1c_18->cd();
   Aplanarity_SingleTop_tagOnly_2b1c_18->SetSelected(Aplanarity_SingleTop_tagOnly_2b1c_18);
}
