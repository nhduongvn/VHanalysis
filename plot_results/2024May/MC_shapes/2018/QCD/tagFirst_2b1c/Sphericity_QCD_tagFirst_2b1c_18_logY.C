#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_QCD_tagFirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Sphericity_QCD_tagFirst_2b1c_18/Sphericity_QCD_tagFirst_2b1c_18
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_QCD_tagFirst_2b1c_18 = new TCanvas("Sphericity_QCD_tagFirst_2b1c_18", "Sphericity_QCD_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_QCD_tagFirst_2b1c_18->SetHighLightColor(2);
   Sphericity_QCD_tagFirst_2b1c_18->Range(-0.2,0.820613,1.133333,7.305422);
   Sphericity_QCD_tagFirst_2b1c_18->SetFillColor(0);
   Sphericity_QCD_tagFirst_2b1c_18->SetFillStyle(4000);
   Sphericity_QCD_tagFirst_2b1c_18->SetBorderMode(0);
   Sphericity_QCD_tagFirst_2b1c_18->SetBorderSize(2);
   Sphericity_QCD_tagFirst_2b1c_18->SetLogy();
   Sphericity_QCD_tagFirst_2b1c_18->SetLeftMargin(0.15);
   Sphericity_QCD_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_QCD_tagFirst_2b1c_18->SetFrameBorderMode(0);
   Sphericity_QCD_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_QCD_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2589 = new TH1D("VH_tagFirst_2b1c_Sphericity__2589","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(1,2395478);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(2,1870855);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(3,1036468);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(4,670552.9);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(5,317899.6);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(6,162440.7);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(7,75676.66);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(8,43753.32);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(9,35980.24);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(10,20059.52);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(11,17774.9);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(12,12471.96);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(13,7403.517);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(14,6553.593);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(15,6029.295);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(16,6239.371);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(17,3202.21);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(18,2288.943);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(19,2240.606);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(20,337.0863);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(21,71.83901);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(22,63.72161);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinContent(23,58.90118);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(1,44075.91);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(2,30511.81);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(3,21497.81);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(4,25698.09);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(5,10728.75);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(6,7819.153);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(7,4711.154);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(8,3297.389);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(9,4349.34);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(10,1882.329);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(11,2731.489);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(12,1705.272);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(13,949.4697);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(14,1120.949);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(15,1248.52);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(16,3589.147);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(17,974.5466);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(18,661.9865);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(19,1109.352);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(20,130.2259);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(21,56.00437);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(22,63.34893);
   VH_tagFirst_2b1c_Sphericity__2589->SetBinError(23,42.46058);
   VH_tagFirst_2b1c_Sphericity__2589->SetEntries(227328);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2589->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2589->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2589->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2589->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2589->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2589->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2589->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2589->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2589->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2589->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2589->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2589->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2589->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2589->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2589->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2589->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_QCD_tagFirst_2b1c_18->Modified();
   Sphericity_QCD_tagFirst_2b1c_18->cd();
   Sphericity_QCD_tagFirst_2b1c_18->SetSelected(Sphericity_QCD_tagFirst_2b1c_18);
}
