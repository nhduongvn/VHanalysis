#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_QCD_tagOnly_17_logY()
{
//=========Macro generated from canvas: Aplanarity_QCD_tagOnly_17/Aplanarity_QCD_tagOnly_17
//=========  (Thu May 23 20:48:41 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_QCD_tagOnly_17 = new TCanvas("Aplanarity_QCD_tagOnly_17", "Aplanarity_QCD_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_QCD_tagOnly_17->SetHighLightColor(2);
   Aplanarity_QCD_tagOnly_17->Range(-0.2,-1.517479,1.133333,7.195409);
   Aplanarity_QCD_tagOnly_17->SetFillColor(0);
   Aplanarity_QCD_tagOnly_17->SetFillStyle(4000);
   Aplanarity_QCD_tagOnly_17->SetBorderMode(0);
   Aplanarity_QCD_tagOnly_17->SetBorderSize(2);
   Aplanarity_QCD_tagOnly_17->SetLogy();
   Aplanarity_QCD_tagOnly_17->SetLeftMargin(0.15);
   Aplanarity_QCD_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagOnly_17->SetFrameBorderMode(0);
   Aplanarity_QCD_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1178 = new TH1D("VH_tagOnly_Aplanarity__1178","",50,0,1);
   VH_tagOnly_Aplanarity__1178->SetBinContent(1,1113194);
   VH_tagOnly_Aplanarity__1178->SetBinContent(2,133749.2);
   VH_tagOnly_Aplanarity__1178->SetBinContent(3,32119.34);
   VH_tagOnly_Aplanarity__1178->SetBinContent(4,12615.29);
   VH_tagOnly_Aplanarity__1178->SetBinContent(5,7363.262);
   VH_tagOnly_Aplanarity__1178->SetBinContent(6,1770.938);
   VH_tagOnly_Aplanarity__1178->SetBinContent(7,796.3183);
   VH_tagOnly_Aplanarity__1178->SetBinContent(8,724.7668);
   VH_tagOnly_Aplanarity__1178->SetBinContent(9,466.4745);
   VH_tagOnly_Aplanarity__1178->SetBinContent(10,312.9255);
   VH_tagOnly_Aplanarity__1178->SetBinContent(11,194.6281);
   VH_tagOnly_Aplanarity__1178->SetBinContent(12,26.3534);
   VH_tagOnly_Aplanarity__1178->SetBinContent(13,43.95033);
   VH_tagOnly_Aplanarity__1178->SetBinContent(14,38.99299);
   VH_tagOnly_Aplanarity__1178->SetBinContent(15,1.078283);
   VH_tagOnly_Aplanarity__1178->SetBinContent(16,25.07289);
   VH_tagOnly_Aplanarity__1178->SetBinContent(17,0.4516895);
   VH_tagOnly_Aplanarity__1178->SetBinContent(18,43.63467);
   VH_tagOnly_Aplanarity__1178->SetBinError(1,46207.73);
   VH_tagOnly_Aplanarity__1178->SetBinError(2,5181.37);
   VH_tagOnly_Aplanarity__1178->SetBinError(3,2344.443);
   VH_tagOnly_Aplanarity__1178->SetBinError(4,1688.085);
   VH_tagOnly_Aplanarity__1178->SetBinError(5,3093.621);
   VH_tagOnly_Aplanarity__1178->SetBinError(6,372.0404);
   VH_tagOnly_Aplanarity__1178->SetBinError(7,193.4524);
   VH_tagOnly_Aplanarity__1178->SetBinError(8,267.5253);
   VH_tagOnly_Aplanarity__1178->SetBinError(9,192.5239);
   VH_tagOnly_Aplanarity__1178->SetBinError(10,210.8218);
   VH_tagOnly_Aplanarity__1178->SetBinError(11,61.10583);
   VH_tagOnly_Aplanarity__1178->SetBinError(12,15.18162);
   VH_tagOnly_Aplanarity__1178->SetBinError(13,17.44908);
   VH_tagOnly_Aplanarity__1178->SetBinError(14,23.25471);
   VH_tagOnly_Aplanarity__1178->SetBinError(15,1.078283);
   VH_tagOnly_Aplanarity__1178->SetBinError(16,15.10201);
   VH_tagOnly_Aplanarity__1178->SetBinError(17,0.4516895);
   VH_tagOnly_Aplanarity__1178->SetBinError(18,30.93528);
   VH_tagOnly_Aplanarity__1178->SetEntries(102182);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1178->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1178->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1178->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1178->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1178->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1178->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1178->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1178->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1178->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1178->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1178->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1178->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1178->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1178->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1178->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1178->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_QCD_tagOnly_17->Modified();
   Aplanarity_QCD_tagOnly_17->cd();
   Aplanarity_QCD_tagOnly_17->SetSelected(Aplanarity_QCD_tagOnly_17);
}
