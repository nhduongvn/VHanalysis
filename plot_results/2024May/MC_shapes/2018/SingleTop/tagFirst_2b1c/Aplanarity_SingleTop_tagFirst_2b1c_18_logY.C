#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_SingleTop_tagFirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Aplanarity_SingleTop_tagFirst_2b1c_18/Aplanarity_SingleTop_tagFirst_2b1c_18
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_SingleTop_tagFirst_2b1c_18 = new TCanvas("Aplanarity_SingleTop_tagFirst_2b1c_18", "Aplanarity_SingleTop_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_SingleTop_tagFirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_SingleTop_tagFirst_2b1c_18->Range(-0.2,-1.681839,1.133333,5.780637);
   Aplanarity_SingleTop_tagFirst_2b1c_18->SetFillColor(0);
   Aplanarity_SingleTop_tagFirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_SingleTop_tagFirst_2b1c_18->SetBorderMode(0);
   Aplanarity_SingleTop_tagFirst_2b1c_18->SetBorderSize(2);
   Aplanarity_SingleTop_tagFirst_2b1c_18->SetLogy();
   Aplanarity_SingleTop_tagFirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_SingleTop_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagFirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_SingleTop_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2631 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2631","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(1,57126.91);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(2,7703.322);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(3,2016.652);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(4,713.0095);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(5,298.0118);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(6,139.1366);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(7,81.15161);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(8,49.58574);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(9,23.78661);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(10,14.29473);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(11,8.385773);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(12,5.717437);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(13,4.771763);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(14,3.139458);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(15,1.264263);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(16,0.8118187);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(17,1.037843);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(18,0.7508636);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinContent(19,0.2319736);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(1,148.3388);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(2,54.30045);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(3,30.49691);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(4,17.19818);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(5,11.19839);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(6,6.87864);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(7,8.495144);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(8,4.827949);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(9,2.70832);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(10,1.787906);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(11,1.51403);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(12,1.346344);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(13,1.203857);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(14,1.005289);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(15,0.5081071);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(16,0.3729181);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(17,0.4278301);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(18,0.4752324);
   VH_tagFirst_2b1c_Aplanarity__2631->SetBinError(19,0.2319736);
   VH_tagFirst_2b1c_Aplanarity__2631->SetEntries(511562);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2631->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2631->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2631->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2631->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2631->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2631->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2631->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2631->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2631->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2631->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2631->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2631->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2631->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2631->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2631->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2631->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_SingleTop_tagFirst_2b1c_18->Modified();
   Aplanarity_SingleTop_tagFirst_2b1c_18->cd();
   Aplanarity_SingleTop_tagFirst_2b1c_18->SetSelected(Aplanarity_SingleTop_tagFirst_2b1c_18);
}
