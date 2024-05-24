#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZJets_tagOnly_16_logY()
{
//=========Macro generated from canvas: Sphericity_ZJets_tagOnly_16/Sphericity_ZJets_tagOnly_16
//=========  (Thu May 23 20:48:41 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZJets_tagOnly_16 = new TCanvas("Sphericity_ZJets_tagOnly_16", "Sphericity_ZJets_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZJets_tagOnly_16->SetHighLightColor(2);
   Sphericity_ZJets_tagOnly_16->Range(-0.2,-1.429929,1.133333,4.660928);
   Sphericity_ZJets_tagOnly_16->SetFillColor(0);
   Sphericity_ZJets_tagOnly_16->SetFillStyle(4000);
   Sphericity_ZJets_tagOnly_16->SetBorderMode(0);
   Sphericity_ZJets_tagOnly_16->SetBorderSize(2);
   Sphericity_ZJets_tagOnly_16->SetLogy();
   Sphericity_ZJets_tagOnly_16->SetLeftMargin(0.15);
   Sphericity_ZJets_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagOnly_16->SetFrameBorderMode(0);
   Sphericity_ZJets_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1153 = new TH1D("VH_tagOnly_Sphericity__1153","",25,0,1);
   VH_tagOnly_Sphericity__1153->SetBinContent(1,5946.94);
   VH_tagOnly_Sphericity__1153->SetBinContent(2,4668.857);
   VH_tagOnly_Sphericity__1153->SetBinContent(3,2784.542);
   VH_tagOnly_Sphericity__1153->SetBinContent(4,1675.758);
   VH_tagOnly_Sphericity__1153->SetBinContent(5,966.7001);
   VH_tagOnly_Sphericity__1153->SetBinContent(6,488.5144);
   VH_tagOnly_Sphericity__1153->SetBinContent(7,242.1889);
   VH_tagOnly_Sphericity__1153->SetBinContent(8,131.5441);
   VH_tagOnly_Sphericity__1153->SetBinContent(9,89.47488);
   VH_tagOnly_Sphericity__1153->SetBinContent(10,62.48434);
   VH_tagOnly_Sphericity__1153->SetBinContent(11,45.55307);
   VH_tagOnly_Sphericity__1153->SetBinContent(12,34.16971);
   VH_tagOnly_Sphericity__1153->SetBinContent(13,28.12063);
   VH_tagOnly_Sphericity__1153->SetBinContent(14,23.137);
   VH_tagOnly_Sphericity__1153->SetBinContent(15,14.2942);
   VH_tagOnly_Sphericity__1153->SetBinContent(16,10.5438);
   VH_tagOnly_Sphericity__1153->SetBinContent(17,8.253537);
   VH_tagOnly_Sphericity__1153->SetBinContent(18,7.550751);
   VH_tagOnly_Sphericity__1153->SetBinContent(19,2.447458);
   VH_tagOnly_Sphericity__1153->SetBinContent(20,1.143926);
   VH_tagOnly_Sphericity__1153->SetBinContent(21,0.6738307);
   VH_tagOnly_Sphericity__1153->SetBinContent(22,0.3021249);
   VH_tagOnly_Sphericity__1153->SetBinError(1,47.49013);
   VH_tagOnly_Sphericity__1153->SetBinError(2,46.9472);
   VH_tagOnly_Sphericity__1153->SetBinError(3,36.60121);
   VH_tagOnly_Sphericity__1153->SetBinError(4,26.18056);
   VH_tagOnly_Sphericity__1153->SetBinError(5,19.30662);
   VH_tagOnly_Sphericity__1153->SetBinError(6,11.30613);
   VH_tagOnly_Sphericity__1153->SetBinError(7,8.409331);
   VH_tagOnly_Sphericity__1153->SetBinError(8,4.284272);
   VH_tagOnly_Sphericity__1153->SetBinError(9,3.883619);
   VH_tagOnly_Sphericity__1153->SetBinError(10,3.599201);
   VH_tagOnly_Sphericity__1153->SetBinError(11,2.161677);
   VH_tagOnly_Sphericity__1153->SetBinError(12,1.958475);
   VH_tagOnly_Sphericity__1153->SetBinError(13,2.601245);
   VH_tagOnly_Sphericity__1153->SetBinError(14,2.804623);
   VH_tagOnly_Sphericity__1153->SetBinError(15,1.169108);
   VH_tagOnly_Sphericity__1153->SetBinError(16,1.021533);
   VH_tagOnly_Sphericity__1153->SetBinError(17,0.885898);
   VH_tagOnly_Sphericity__1153->SetBinError(18,1.975457);
   VH_tagOnly_Sphericity__1153->SetBinError(19,0.5159123);
   VH_tagOnly_Sphericity__1153->SetBinError(20,0.3262692);
   VH_tagOnly_Sphericity__1153->SetBinError(21,0.2837214);
   VH_tagOnly_Sphericity__1153->SetBinError(22,0.2569024);
   VH_tagOnly_Sphericity__1153->SetEntries(161332);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1153->SetLineColor(ci);
   VH_tagOnly_Sphericity__1153->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1153->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1153->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1153->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1153->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1153->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1153->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1153->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1153->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1153->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1153->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1153->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1153->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1153->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1153->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZJets_tagOnly_16->Modified();
   Sphericity_ZJets_tagOnly_16->cd();
   Sphericity_ZJets_tagOnly_16->SetSelected(Sphericity_ZJets_tagOnly_16);
}
