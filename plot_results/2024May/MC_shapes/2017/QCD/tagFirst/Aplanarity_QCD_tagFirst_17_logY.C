#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_QCD_tagFirst_17_logY()
{
//=========Macro generated from canvas: Aplanarity_QCD_tagFirst_17/Aplanarity_QCD_tagFirst_17
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_QCD_tagFirst_17 = new TCanvas("Aplanarity_QCD_tagFirst_17", "Aplanarity_QCD_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_QCD_tagFirst_17->SetHighLightColor(2);
   Aplanarity_QCD_tagFirst_17->Range(-0.2,-1.519788,1.133333,7.21619);
   Aplanarity_QCD_tagFirst_17->SetFillColor(0);
   Aplanarity_QCD_tagFirst_17->SetFillStyle(4000);
   Aplanarity_QCD_tagFirst_17->SetBorderMode(0);
   Aplanarity_QCD_tagFirst_17->SetBorderSize(2);
   Aplanarity_QCD_tagFirst_17->SetLogy();
   Aplanarity_QCD_tagFirst_17->SetLeftMargin(0.15);
   Aplanarity_QCD_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagFirst_17->SetFrameBorderMode(0);
   Aplanarity_QCD_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_QCD_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__458 = new TH1D("VH_tagFirst_Aplanarity__458","",50,0,1);
   VH_tagFirst_Aplanarity__458->SetBinContent(1,1161564);
   VH_tagFirst_Aplanarity__458->SetBinContent(2,140300.1);
   VH_tagFirst_Aplanarity__458->SetBinContent(3,34827.51);
   VH_tagFirst_Aplanarity__458->SetBinContent(4,13405.65);
   VH_tagFirst_Aplanarity__458->SetBinContent(5,7899.395);
   VH_tagFirst_Aplanarity__458->SetBinContent(6,1988.594);
   VH_tagFirst_Aplanarity__458->SetBinContent(7,1047.066);
   VH_tagFirst_Aplanarity__458->SetBinContent(8,779.7853);
   VH_tagFirst_Aplanarity__458->SetBinContent(9,509.2003);
   VH_tagFirst_Aplanarity__458->SetBinContent(10,313.2338);
   VH_tagFirst_Aplanarity__458->SetBinContent(11,194.6281);
   VH_tagFirst_Aplanarity__458->SetBinContent(12,52.99996);
   VH_tagFirst_Aplanarity__458->SetBinContent(13,43.95033);
   VH_tagFirst_Aplanarity__458->SetBinContent(14,38.99299);
   VH_tagFirst_Aplanarity__458->SetBinContent(15,1.078283);
   VH_tagFirst_Aplanarity__458->SetBinContent(16,25.07289);
   VH_tagFirst_Aplanarity__458->SetBinContent(17,0.4516895);
   VH_tagFirst_Aplanarity__458->SetBinContent(18,43.63467);
   VH_tagFirst_Aplanarity__458->SetBinError(1,46286.74);
   VH_tagFirst_Aplanarity__458->SetBinError(2,5274.494);
   VH_tagFirst_Aplanarity__458->SetBinError(3,2747.556);
   VH_tagFirst_Aplanarity__458->SetBinError(4,1693.735);
   VH_tagFirst_Aplanarity__458->SetBinError(5,3106.162);
   VH_tagFirst_Aplanarity__458->SetBinError(6,411.3178);
   VH_tagFirst_Aplanarity__458->SetBinError(7,287.0678);
   VH_tagFirst_Aplanarity__458->SetBinError(8,272.314);
   VH_tagFirst_Aplanarity__458->SetBinError(9,194.9731);
   VH_tagFirst_Aplanarity__458->SetBinError(10,210.822);
   VH_tagFirst_Aplanarity__458->SetBinError(11,61.10583);
   VH_tagFirst_Aplanarity__458->SetBinError(12,26.93757);
   VH_tagFirst_Aplanarity__458->SetBinError(13,17.44908);
   VH_tagFirst_Aplanarity__458->SetBinError(14,23.25471);
   VH_tagFirst_Aplanarity__458->SetBinError(15,1.078283);
   VH_tagFirst_Aplanarity__458->SetBinError(16,15.10201);
   VH_tagFirst_Aplanarity__458->SetBinError(17,0.4516895);
   VH_tagFirst_Aplanarity__458->SetBinError(18,30.93528);
   VH_tagFirst_Aplanarity__458->SetEntries(109648);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__458->SetLineColor(ci);
   VH_tagFirst_Aplanarity__458->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__458->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__458->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__458->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__458->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__458->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__458->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__458->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__458->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__458->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__458->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__458->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__458->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__458->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__458->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_QCD_tagFirst_17->Modified();
   Aplanarity_QCD_tagFirst_17->cd();
   Aplanarity_QCD_tagFirst_17->SetSelected(Aplanarity_QCD_tagFirst_17);
}
