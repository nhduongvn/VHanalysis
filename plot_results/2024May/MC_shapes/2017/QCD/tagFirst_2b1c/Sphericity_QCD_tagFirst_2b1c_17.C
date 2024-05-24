#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_QCD_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: Sphericity_QCD_tagFirst_2b1c_17/Sphericity_QCD_tagFirst_2b1c_17
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_QCD_tagFirst_2b1c_17 = new TCanvas("Sphericity_QCD_tagFirst_2b1c_17", "Sphericity_QCD_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_QCD_tagFirst_2b1c_17->SetHighLightColor(2);
   Sphericity_QCD_tagFirst_2b1c_17->Range(-0.2,-163413.8,1.133333,1470724);
   Sphericity_QCD_tagFirst_2b1c_17->SetFillColor(0);
   Sphericity_QCD_tagFirst_2b1c_17->SetFillStyle(4000);
   Sphericity_QCD_tagFirst_2b1c_17->SetBorderMode(0);
   Sphericity_QCD_tagFirst_2b1c_17->SetBorderSize(2);
   Sphericity_QCD_tagFirst_2b1c_17->SetLeftMargin(0.15);
   Sphericity_QCD_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_QCD_tagFirst_2b1c_17->SetFrameBorderMode(0);
   Sphericity_QCD_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_QCD_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2588 = new TH1D("VH_tagFirst_2b1c_Sphericity__2588","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(1,1245058);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(2,1049846);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(3,555992.1);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(4,321412);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(5,179729.4);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(6,139426.9);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(7,41644.16);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(8,25871.97);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(9,14037.25);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(10,10753.19);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(11,7178.814);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(12,4963.265);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(13,4563.725);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(14,3954.897);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(15,2753.559);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(16,2862.394);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(17,1527.637);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(18,940.2862);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(19,1038.474);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(20,159.5037);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(21,54.09508);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinContent(22,16.0548);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(1,41325.41);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(2,47512.79);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(3,11105.75);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(4,22196.85);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(5,16644.93);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(6,41134.45);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(7,3718.153);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(8,2666.672);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(9,1192.182);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(10,1122.702);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(11,818.5572);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(12,461.4558);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(13,945.1996);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(14,1044.305);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(15,685.9477);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(16,690.2512);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(17,368.7926);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(18,355.92);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(19,552.4593);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(20,48.82195);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(21,41.34606);
   VH_tagFirst_2b1c_Sphericity__2588->SetBinError(22,8.393249);
   VH_tagFirst_2b1c_Sphericity__2588->SetEntries(247607);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2588->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2588->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2588->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2588->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2588->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2588->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2588->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2588->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2588->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2588->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2588->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2588->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2588->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2588->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2588->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2588->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_QCD_tagFirst_2b1c_17->Modified();
   Sphericity_QCD_tagFirst_2b1c_17->cd();
   Sphericity_QCD_tagFirst_2b1c_17->SetSelected(Sphericity_QCD_tagFirst_2b1c_17);
}
