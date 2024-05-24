#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_SingleTop_tagOnly_17()
{
//=========Macro generated from canvas: Aplanarity_SingleTop_tagOnly_17/Aplanarity_SingleTop_tagOnly_17
//=========  (Fri May 24 12:42:22 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_SingleTop_tagOnly_17 = new TCanvas("Aplanarity_SingleTop_tagOnly_17", "Aplanarity_SingleTop_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_SingleTop_tagOnly_17->SetHighLightColor(2);
   Aplanarity_SingleTop_tagOnly_17->Range(-0.2,-1776.924,1.133333,15992.32);
   Aplanarity_SingleTop_tagOnly_17->SetFillColor(0);
   Aplanarity_SingleTop_tagOnly_17->SetFillStyle(4000);
   Aplanarity_SingleTop_tagOnly_17->SetBorderMode(0);
   Aplanarity_SingleTop_tagOnly_17->SetBorderSize(2);
   Aplanarity_SingleTop_tagOnly_17->SetLeftMargin(0.15);
   Aplanarity_SingleTop_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagOnly_17->SetFrameBorderMode(0);
   Aplanarity_SingleTop_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1190 = new TH1D("VH_tagOnly_Aplanarity__1190","",50,0,1);
   VH_tagOnly_Aplanarity__1190->SetBinContent(1,13538.47);
   VH_tagOnly_Aplanarity__1190->SetBinContent(2,1894.372);
   VH_tagOnly_Aplanarity__1190->SetBinContent(3,494.0281);
   VH_tagOnly_Aplanarity__1190->SetBinContent(4,159.2452);
   VH_tagOnly_Aplanarity__1190->SetBinContent(5,70.38853);
   VH_tagOnly_Aplanarity__1190->SetBinContent(6,34.39052);
   VH_tagOnly_Aplanarity__1190->SetBinContent(7,21.28379);
   VH_tagOnly_Aplanarity__1190->SetBinContent(8,10.75016);
   VH_tagOnly_Aplanarity__1190->SetBinContent(9,5.712167);
   VH_tagOnly_Aplanarity__1190->SetBinContent(10,4.063631);
   VH_tagOnly_Aplanarity__1190->SetBinContent(11,3.358981);
   VH_tagOnly_Aplanarity__1190->SetBinContent(12,2.725251);
   VH_tagOnly_Aplanarity__1190->SetBinContent(13,1.523361);
   VH_tagOnly_Aplanarity__1190->SetBinContent(14,1.195186);
   VH_tagOnly_Aplanarity__1190->SetBinContent(15,0.3446602);
   VH_tagOnly_Aplanarity__1190->SetBinContent(16,0.1583968);
   VH_tagOnly_Aplanarity__1190->SetBinContent(17,0.2023658);
   VH_tagOnly_Aplanarity__1190->SetBinContent(18,0.521713);
   VH_tagOnly_Aplanarity__1190->SetBinContent(19,0.1874799);
   VH_tagOnly_Aplanarity__1190->SetBinError(1,53.7185);
   VH_tagOnly_Aplanarity__1190->SetBinError(2,20.05271);
   VH_tagOnly_Aplanarity__1190->SetBinError(3,10.2212);
   VH_tagOnly_Aplanarity__1190->SetBinError(4,5.8021);
   VH_tagOnly_Aplanarity__1190->SetBinError(5,3.706533);
   VH_tagOnly_Aplanarity__1190->SetBinError(6,2.669032);
   VH_tagOnly_Aplanarity__1190->SetBinError(7,2.428322);
   VH_tagOnly_Aplanarity__1190->SetBinError(8,1.242832);
   VH_tagOnly_Aplanarity__1190->SetBinError(9,0.9949529);
   VH_tagOnly_Aplanarity__1190->SetBinError(10,0.9085173);
   VH_tagOnly_Aplanarity__1190->SetBinError(11,1.029081);
   VH_tagOnly_Aplanarity__1190->SetBinError(12,0.8815138);
   VH_tagOnly_Aplanarity__1190->SetBinError(13,0.8996827);
   VH_tagOnly_Aplanarity__1190->SetBinError(14,0.4963995);
   VH_tagOnly_Aplanarity__1190->SetBinError(15,0.2351965);
   VH_tagOnly_Aplanarity__1190->SetBinError(16,0.08233285);
   VH_tagOnly_Aplanarity__1190->SetBinError(17,0.1906407);
   VH_tagOnly_Aplanarity__1190->SetBinError(18,0.4094651);
   VH_tagOnly_Aplanarity__1190->SetBinError(19,0.1874799);
   VH_tagOnly_Aplanarity__1190->SetEntries(200793);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1190->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1190->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1190->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1190->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1190->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1190->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1190->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1190->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1190->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1190->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1190->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1190->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1190->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1190->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1190->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1190->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_SingleTop_tagOnly_17->Modified();
   Aplanarity_SingleTop_tagOnly_17->cd();
   Aplanarity_SingleTop_tagOnly_17->SetSelected(Aplanarity_SingleTop_tagOnly_17);
}
