#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_QCD_tagFirst_16()
{
//=========Macro generated from canvas: Sphericity_QCD_tagFirst_16/Sphericity_QCD_tagFirst_16
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_QCD_tagFirst_16 = new TCanvas("Sphericity_QCD_tagFirst_16", "Sphericity_QCD_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_QCD_tagFirst_16->SetHighLightColor(2);
   Sphericity_QCD_tagFirst_16->Range(-0.2,-100752.2,1.133333,906769.9);
   Sphericity_QCD_tagFirst_16->SetFillColor(0);
   Sphericity_QCD_tagFirst_16->SetFillStyle(4000);
   Sphericity_QCD_tagFirst_16->SetBorderMode(0);
   Sphericity_QCD_tagFirst_16->SetBorderSize(2);
   Sphericity_QCD_tagFirst_16->SetLeftMargin(0.15);
   Sphericity_QCD_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_QCD_tagFirst_16->SetFrameBorderMode(0);
   Sphericity_QCD_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_QCD_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__427 = new TH1D("VH_tagFirst_Sphericity__427","",25,0,1);
   VH_tagFirst_Sphericity__427->SetBinContent(1,767635.9);
   VH_tagFirst_Sphericity__427->SetBinContent(2,655224.8);
   VH_tagFirst_Sphericity__427->SetBinContent(3,373088.5);
   VH_tagFirst_Sphericity__427->SetBinContent(4,232538.9);
   VH_tagFirst_Sphericity__427->SetBinContent(5,102681.2);
   VH_tagFirst_Sphericity__427->SetBinContent(6,56954.61);
   VH_tagFirst_Sphericity__427->SetBinContent(7,23877.69);
   VH_tagFirst_Sphericity__427->SetBinContent(8,13288.62);
   VH_tagFirst_Sphericity__427->SetBinContent(9,9664.164);
   VH_tagFirst_Sphericity__427->SetBinContent(10,6950.129);
   VH_tagFirst_Sphericity__427->SetBinContent(11,3003.17);
   VH_tagFirst_Sphericity__427->SetBinContent(12,3222.213);
   VH_tagFirst_Sphericity__427->SetBinContent(13,3193.745);
   VH_tagFirst_Sphericity__427->SetBinContent(14,1862.743);
   VH_tagFirst_Sphericity__427->SetBinContent(15,1295.719);
   VH_tagFirst_Sphericity__427->SetBinContent(16,1496.585);
   VH_tagFirst_Sphericity__427->SetBinContent(17,575.4272);
   VH_tagFirst_Sphericity__427->SetBinContent(18,631.3828);
   VH_tagFirst_Sphericity__427->SetBinContent(19,176.7527);
   VH_tagFirst_Sphericity__427->SetBinContent(20,74.5738);
   VH_tagFirst_Sphericity__427->SetBinContent(21,10.35158);
   VH_tagFirst_Sphericity__427->SetBinContent(22,0.1889639);
   VH_tagFirst_Sphericity__427->SetBinError(1,12274.02);
   VH_tagFirst_Sphericity__427->SetBinError(2,19764.22);
   VH_tagFirst_Sphericity__427->SetBinError(3,9317.772);
   VH_tagFirst_Sphericity__427->SetBinError(4,22430.38);
   VH_tagFirst_Sphericity__427->SetBinError(5,4268.994);
   VH_tagFirst_Sphericity__427->SetBinError(6,3244.251);
   VH_tagFirst_Sphericity__427->SetBinError(7,1729.945);
   VH_tagFirst_Sphericity__427->SetBinError(8,1513.75);
   VH_tagFirst_Sphericity__427->SetBinError(9,951.9426);
   VH_tagFirst_Sphericity__427->SetBinError(10,931.6587);
   VH_tagFirst_Sphericity__427->SetBinError(11,346.2708);
   VH_tagFirst_Sphericity__427->SetBinError(12,388.5701);
   VH_tagFirst_Sphericity__427->SetBinError(13,574.1576);
   VH_tagFirst_Sphericity__427->SetBinError(14,321.6966);
   VH_tagFirst_Sphericity__427->SetBinError(15,291.5322);
   VH_tagFirst_Sphericity__427->SetBinError(16,406.3958);
   VH_tagFirst_Sphericity__427->SetBinError(17,82.89631);
   VH_tagFirst_Sphericity__427->SetBinError(18,233.2238);
   VH_tagFirst_Sphericity__427->SetBinError(19,41.33334);
   VH_tagFirst_Sphericity__427->SetBinError(20,26.73465);
   VH_tagFirst_Sphericity__427->SetBinError(21,6.969909);
   VH_tagFirst_Sphericity__427->SetBinError(22,0.1889639);
   VH_tagFirst_Sphericity__427->SetEntries(184957);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__427->SetLineColor(ci);
   VH_tagFirst_Sphericity__427->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__427->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__427->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__427->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__427->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__427->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__427->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__427->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__427->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__427->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__427->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__427->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__427->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__427->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__427->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_QCD_tagFirst_16->Modified();
   Sphericity_QCD_tagFirst_16->cd();
   Sphericity_QCD_tagFirst_16->SetSelected(Sphericity_QCD_tagFirst_16);
}
