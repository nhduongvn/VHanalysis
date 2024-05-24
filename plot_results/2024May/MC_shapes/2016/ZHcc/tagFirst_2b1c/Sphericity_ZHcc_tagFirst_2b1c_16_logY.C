#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHcc_tagFirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Sphericity_ZHcc_tagFirst_2b1c_16/Sphericity_ZHcc_tagFirst_2b1c_16
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHcc_tagFirst_2b1c_16 = new TCanvas("Sphericity_ZHcc_tagFirst_2b1c_16", "Sphericity_ZHcc_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHcc_tagFirst_2b1c_16->SetHighLightColor(2);
   Sphericity_ZHcc_tagFirst_2b1c_16->Range(-0.2,-4.722601,1.133333,1.059719);
   Sphericity_ZHcc_tagFirst_2b1c_16->SetFillColor(0);
   Sphericity_ZHcc_tagFirst_2b1c_16->SetFillStyle(4000);
   Sphericity_ZHcc_tagFirst_2b1c_16->SetBorderMode(0);
   Sphericity_ZHcc_tagFirst_2b1c_16->SetBorderSize(2);
   Sphericity_ZHcc_tagFirst_2b1c_16->SetLogy();
   Sphericity_ZHcc_tagFirst_2b1c_16->SetLeftMargin(0.15);
   Sphericity_ZHcc_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagFirst_2b1c_16->SetFrameBorderMode(0);
   Sphericity_ZHcc_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2581 = new TH1D("VH_tagFirst_2b1c_Sphericity__2581","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(1,1.599331);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(2,1.353346);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(3,0.7859422);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(4,0.4848555);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(5,0.3190757);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(6,0.1996353);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(7,0.07415603);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(8,0.04104941);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(9,0.02055798);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(10,0.0117515);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(11,0.01143302);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(12,0.01685978);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(13,0.008682019);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(14,0.00669322);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(15,0.001543407);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(16,0.001309224);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(17,0.001144414);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(18,0.0004514806);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinContent(20,0.0001434371);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(1,0.0485694);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(2,0.04383912);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(3,0.03395175);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(4,0.0269006);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(5,0.02241507);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(6,0.01791752);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(7,0.01077863);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(8,0.007819268);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(9,0.005284517);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(10,0.00369618);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(11,0.003216618);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(12,0.005439606);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(13,0.003532393);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(14,0.002843144);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(15,0.0007029727);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(16,0.0006054975);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(17,0.0005793126);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(18,0.0003249433);
   VH_tagFirst_2b1c_Sphericity__2581->SetBinError(20,0.0001434371);
   VH_tagFirst_2b1c_Sphericity__2581->SetEntries(7495);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2581->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2581->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2581->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2581->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2581->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2581->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2581->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2581->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2581->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2581->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2581->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2581->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2581->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2581->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2581->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2581->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHcc_tagFirst_2b1c_16->Modified();
   Sphericity_ZHcc_tagFirst_2b1c_16->cd();
   Sphericity_ZHcc_tagFirst_2b1c_16->SetSelected(Sphericity_ZHcc_tagFirst_2b1c_16);
}
