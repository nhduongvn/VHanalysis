#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_QCD_tagOnly_17()
{
//=========Macro generated from canvas: Sphericity_QCD_tagOnly_17/Sphericity_QCD_tagOnly_17
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_QCD_tagOnly_17 = new TCanvas("Sphericity_QCD_tagOnly_17", "Sphericity_QCD_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_QCD_tagOnly_17->SetHighLightColor(2);
   Sphericity_QCD_tagOnly_17->Range(-0.2,-60063.67,1.133333,540573);
   Sphericity_QCD_tagOnly_17->SetFillColor(0);
   Sphericity_QCD_tagOnly_17->SetFillStyle(4000);
   Sphericity_QCD_tagOnly_17->SetBorderMode(0);
   Sphericity_QCD_tagOnly_17->SetBorderSize(2);
   Sphericity_QCD_tagOnly_17->SetLeftMargin(0.15);
   Sphericity_QCD_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_QCD_tagOnly_17->SetFrameBorderMode(0);
   Sphericity_QCD_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_QCD_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1148 = new TH1D("VH_tagOnly_Sphericity__1148","",25,0,1);
   VH_tagOnly_Sphericity__1148->SetBinContent(1,457627.9);
   VH_tagOnly_Sphericity__1148->SetBinContent(2,405191.3);
   VH_tagOnly_Sphericity__1148->SetBinContent(3,194820.5);
   VH_tagOnly_Sphericity__1148->SetBinContent(4,110419.5);
   VH_tagOnly_Sphericity__1148->SetBinContent(5,59568.58);
   VH_tagOnly_Sphericity__1148->SetBinContent(6,30709.63);
   VH_tagOnly_Sphericity__1148->SetBinContent(7,16677.55);
   VH_tagOnly_Sphericity__1148->SetBinContent(8,8902.16);
   VH_tagOnly_Sphericity__1148->SetBinContent(9,4988.901);
   VH_tagOnly_Sphericity__1148->SetBinContent(10,3271.711);
   VH_tagOnly_Sphericity__1148->SetBinContent(11,2279.939);
   VH_tagOnly_Sphericity__1148->SetBinContent(12,1852.166);
   VH_tagOnly_Sphericity__1148->SetBinContent(13,1359.679);
   VH_tagOnly_Sphericity__1148->SetBinContent(14,2303.524);
   VH_tagOnly_Sphericity__1148->SetBinContent(15,1551.892);
   VH_tagOnly_Sphericity__1148->SetBinContent(16,668.76);
   VH_tagOnly_Sphericity__1148->SetBinContent(17,822.4405);
   VH_tagOnly_Sphericity__1148->SetBinContent(18,211.1881);
   VH_tagOnly_Sphericity__1148->SetBinContent(19,177.113);
   VH_tagOnly_Sphericity__1148->SetBinContent(20,68.08086);
   VH_tagOnly_Sphericity__1148->SetBinContent(21,1.366381);
   VH_tagOnly_Sphericity__1148->SetBinContent(22,12.63923);
   VH_tagOnly_Sphericity__1148->SetBinError(1,31433.57);
   VH_tagOnly_Sphericity__1148->SetBinError(2,33168.45);
   VH_tagOnly_Sphericity__1148->SetBinError(3,6478.618);
   VH_tagOnly_Sphericity__1148->SetBinError(4,4293.229);
   VH_tagOnly_Sphericity__1148->SetBinError(5,3672.539);
   VH_tagOnly_Sphericity__1148->SetBinError(6,2143.173);
   VH_tagOnly_Sphericity__1148->SetBinError(7,3148.921);
   VH_tagOnly_Sphericity__1148->SetBinError(8,1185.328);
   VH_tagOnly_Sphericity__1148->SetBinError(9,586.6686);
   VH_tagOnly_Sphericity__1148->SetBinError(10,373.9426);
   VH_tagOnly_Sphericity__1148->SetBinError(11,280.196);
   VH_tagOnly_Sphericity__1148->SetBinError(12,236.8266);
   VH_tagOnly_Sphericity__1148->SetBinError(13,229.273);
   VH_tagOnly_Sphericity__1148->SetBinError(14,1013.042);
   VH_tagOnly_Sphericity__1148->SetBinError(15,659.0693);
   VH_tagOnly_Sphericity__1148->SetBinError(16,118.2585);
   VH_tagOnly_Sphericity__1148->SetBinError(17,282.0552);
   VH_tagOnly_Sphericity__1148->SetBinError(18,52.29616);
   VH_tagOnly_Sphericity__1148->SetBinError(19,45.41331);
   VH_tagOnly_Sphericity__1148->SetBinError(20,34.09758);
   VH_tagOnly_Sphericity__1148->SetBinError(21,0.7023153);
   VH_tagOnly_Sphericity__1148->SetBinError(22,7.666848);
   VH_tagOnly_Sphericity__1148->SetEntries(102182);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1148->SetLineColor(ci);
   VH_tagOnly_Sphericity__1148->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1148->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1148->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1148->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1148->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1148->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1148->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1148->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1148->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1148->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1148->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1148->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1148->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1148->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1148->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_QCD_tagOnly_17->Modified();
   Sphericity_QCD_tagOnly_17->cd();
   Sphericity_QCD_tagOnly_17->SetSelected(Sphericity_QCD_tagOnly_17);
}
