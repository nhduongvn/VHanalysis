#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZHcc_tagOnly_17()
{
//=========Macro generated from canvas: Aplanarity_ZHcc_tagOnly_17/Aplanarity_ZHcc_tagOnly_17
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZHcc_tagOnly_17 = new TCanvas("Aplanarity_ZHcc_tagOnly_17", "Aplanarity_ZHcc_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZHcc_tagOnly_17->SetHighLightColor(2);
   Aplanarity_ZHcc_tagOnly_17->Range(-0.2,-0.2468028,1.133333,2.221225);
   Aplanarity_ZHcc_tagOnly_17->SetFillColor(0);
   Aplanarity_ZHcc_tagOnly_17->SetFillStyle(4000);
   Aplanarity_ZHcc_tagOnly_17->SetBorderMode(0);
   Aplanarity_ZHcc_tagOnly_17->SetBorderSize(2);
   Aplanarity_ZHcc_tagOnly_17->SetLeftMargin(0.15);
   Aplanarity_ZHcc_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagOnly_17->SetFrameBorderMode(0);
   Aplanarity_ZHcc_tagOnly_17->SetFrameFillStyle(1000);
   Aplanarity_ZHcc_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1172 = new TH1D("VH_tagOnly_Aplanarity__1172","",50,0,1);
   VH_tagOnly_Aplanarity__1172->SetBinContent(1,1.880402);
   VH_tagOnly_Aplanarity__1172->SetBinContent(2,0.1900199);
   VH_tagOnly_Aplanarity__1172->SetBinContent(3,0.04273742);
   VH_tagOnly_Aplanarity__1172->SetBinContent(4,0.01686858);
   VH_tagOnly_Aplanarity__1172->SetBinContent(5,0.007525562);
   VH_tagOnly_Aplanarity__1172->SetBinContent(6,0.001547559);
   VH_tagOnly_Aplanarity__1172->SetBinContent(7,0.0008243573);
   VH_tagOnly_Aplanarity__1172->SetBinContent(8,0.001198057);
   VH_tagOnly_Aplanarity__1172->SetBinContent(9,0.001064883);
   VH_tagOnly_Aplanarity__1172->SetBinContent(10,0.0001482523);
   VH_tagOnly_Aplanarity__1172->SetBinContent(11,0.001758706);
   VH_tagOnly_Aplanarity__1172->SetBinError(1,0.04568);
   VH_tagOnly_Aplanarity__1172->SetBinError(2,0.01426134);
   VH_tagOnly_Aplanarity__1172->SetBinError(3,0.007145626);
   VH_tagOnly_Aplanarity__1172->SetBinError(4,0.004005757);
   VH_tagOnly_Aplanarity__1172->SetBinError(5,0.002602563);
   VH_tagOnly_Aplanarity__1172->SetBinError(6,0.001304396);
   VH_tagOnly_Aplanarity__1172->SetBinError(7,0.0003702079);
   VH_tagOnly_Aplanarity__1172->SetBinError(8,0.0006203505);
   VH_tagOnly_Aplanarity__1172->SetBinError(9,0.001064883);
   VH_tagOnly_Aplanarity__1172->SetBinError(10,0.0001482523);
   VH_tagOnly_Aplanarity__1172->SetBinError(11,0.001011927);
   VH_tagOnly_Aplanarity__1172->SetEntries(5132);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1172->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1172->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1172->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1172->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1172->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1172->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1172->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1172->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1172->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1172->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1172->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1172->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1172->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1172->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1172->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1172->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZHcc_tagOnly_17->Modified();
   Aplanarity_ZHcc_tagOnly_17->cd();
   Aplanarity_ZHcc_tagOnly_17->SetSelected(Aplanarity_ZHcc_tagOnly_17);
}
