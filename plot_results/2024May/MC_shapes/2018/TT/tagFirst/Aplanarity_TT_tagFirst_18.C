#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_TT_tagFirst_18()
{
//=========Macro generated from canvas: Aplanarity_TT_tagFirst_18/Aplanarity_TT_tagFirst_18
//=========  (Fri May 24 12:42:12 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_TT_tagFirst_18 = new TCanvas("Aplanarity_TT_tagFirst_18", "Aplanarity_TT_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_TT_tagFirst_18->SetHighLightColor(2);
   Aplanarity_TT_tagFirst_18->Range(-0.2,-71781.15,1.133333,646030.3);
   Aplanarity_TT_tagFirst_18->SetFillColor(0);
   Aplanarity_TT_tagFirst_18->SetFillStyle(4000);
   Aplanarity_TT_tagFirst_18->SetBorderMode(0);
   Aplanarity_TT_tagFirst_18->SetBorderSize(2);
   Aplanarity_TT_tagFirst_18->SetLeftMargin(0.15);
   Aplanarity_TT_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_TT_tagFirst_18->SetFrameBorderMode(0);
   Aplanarity_TT_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_TT_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__468 = new TH1D("VH_tagFirst_Aplanarity__468","",50,0,1);
   VH_tagFirst_Aplanarity__468->SetBinContent(1,546903.9);
   VH_tagFirst_Aplanarity__468->SetBinContent(2,73128.2);
   VH_tagFirst_Aplanarity__468->SetBinContent(3,19197.66);
   VH_tagFirst_Aplanarity__468->SetBinContent(4,6904.782);
   VH_tagFirst_Aplanarity__468->SetBinContent(5,3212.628);
   VH_tagFirst_Aplanarity__468->SetBinContent(6,1610.977);
   VH_tagFirst_Aplanarity__468->SetBinContent(7,916.0982);
   VH_tagFirst_Aplanarity__468->SetBinContent(8,534.1348);
   VH_tagFirst_Aplanarity__468->SetBinContent(9,312.963);
   VH_tagFirst_Aplanarity__468->SetBinContent(10,210.5195);
   VH_tagFirst_Aplanarity__468->SetBinContent(11,132.5659);
   VH_tagFirst_Aplanarity__468->SetBinContent(12,81.68896);
   VH_tagFirst_Aplanarity__468->SetBinContent(13,50.91997);
   VH_tagFirst_Aplanarity__468->SetBinContent(14,34.20062);
   VH_tagFirst_Aplanarity__468->SetBinContent(15,20.12046);
   VH_tagFirst_Aplanarity__468->SetBinContent(16,9.971358);
   VH_tagFirst_Aplanarity__468->SetBinContent(17,9.720744);
   VH_tagFirst_Aplanarity__468->SetBinContent(18,3.837501);
   VH_tagFirst_Aplanarity__468->SetBinContent(19,1.867318);
   VH_tagFirst_Aplanarity__468->SetBinContent(20,0.4224073);
   VH_tagFirst_Aplanarity__468->SetBinContent(21,1.067082);
   VH_tagFirst_Aplanarity__468->SetBinError(1,331.2273);
   VH_tagFirst_Aplanarity__468->SetBinError(2,121.3582);
   VH_tagFirst_Aplanarity__468->SetBinError(3,63.48874);
   VH_tagFirst_Aplanarity__468->SetBinError(4,36.70499);
   VH_tagFirst_Aplanarity__468->SetBinError(5,27.74438);
   VH_tagFirst_Aplanarity__468->SetBinError(6,17.46401);
   VH_tagFirst_Aplanarity__468->SetBinError(7,13.89315);
   VH_tagFirst_Aplanarity__468->SetBinError(8,10.13618);
   VH_tagFirst_Aplanarity__468->SetBinError(9,7.736533);
   VH_tagFirst_Aplanarity__468->SetBinError(10,6.37833);
   VH_tagFirst_Aplanarity__468->SetBinError(11,5.04304);
   VH_tagFirst_Aplanarity__468->SetBinError(12,3.749013);
   VH_tagFirst_Aplanarity__468->SetBinError(13,2.987602);
   VH_tagFirst_Aplanarity__468->SetBinError(14,4.301335);
   VH_tagFirst_Aplanarity__468->SetBinError(15,2.0166);
   VH_tagFirst_Aplanarity__468->SetBinError(16,1.313561);
   VH_tagFirst_Aplanarity__468->SetBinError(17,2.868427);
   VH_tagFirst_Aplanarity__468->SetBinError(18,0.8472669);
   VH_tagFirst_Aplanarity__468->SetBinError(19,0.4641059);
   VH_tagFirst_Aplanarity__468->SetBinError(20,0.2243656);
   VH_tagFirst_Aplanarity__468->SetBinError(21,0.5579123);
   VH_tagFirst_Aplanarity__468->SetEntries(5358098);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__468->SetLineColor(ci);
   VH_tagFirst_Aplanarity__468->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__468->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__468->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__468->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__468->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__468->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__468->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__468->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__468->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__468->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__468->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__468->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__468->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__468->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__468->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_TT_tagFirst_18->Modified();
   Aplanarity_TT_tagFirst_18->cd();
   Aplanarity_TT_tagFirst_18->SetSelected(Aplanarity_TT_tagFirst_18);
}
