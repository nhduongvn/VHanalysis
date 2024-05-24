#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_QCD_tagOnly_2b1c_16_logY()
{
//=========Macro generated from canvas: Sphericity_QCD_tagOnly_2b1c_16/Sphericity_QCD_tagOnly_2b1c_16
//=========  (Thu May 23 20:49:12 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_QCD_tagOnly_2b1c_16 = new TCanvas("Sphericity_QCD_tagOnly_2b1c_16", "Sphericity_QCD_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_QCD_tagOnly_2b1c_16->SetHighLightColor(2);
   Sphericity_QCD_tagOnly_2b1c_16->Range(-0.2,-2.001281,1.133333,7.76502);
   Sphericity_QCD_tagOnly_2b1c_16->SetFillColor(0);
   Sphericity_QCD_tagOnly_2b1c_16->SetFillStyle(4000);
   Sphericity_QCD_tagOnly_2b1c_16->SetBorderMode(0);
   Sphericity_QCD_tagOnly_2b1c_16->SetBorderSize(2);
   Sphericity_QCD_tagOnly_2b1c_16->SetLogy();
   Sphericity_QCD_tagOnly_2b1c_16->SetLeftMargin(0.15);
   Sphericity_QCD_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_QCD_tagOnly_2b1c_16->SetFrameBorderMode(0);
   Sphericity_QCD_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_QCD_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3307 = new TH1D("VH_tagOnly_2b1c_Sphericity__3307","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(1,3242209);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(2,2938561);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(3,1625619);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(4,940745.9);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(5,456896.6);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(6,238528.2);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(7,84063.54);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(8,38720.85);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(9,26551.87);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(10,16443.39);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(11,9522.903);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(12,8315.09);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(13,6614.322);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(14,4499.601);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(15,3299.192);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(16,2665.406);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(17,1307.422);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(18,1216.727);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(19,916.7928);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(20,196.8697);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(21,387.2486);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(22,0.1889639);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinContent(23,5.01047);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(1,42273.22);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(2,52593.07);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(3,32949.87);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(4,31852.35);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(5,17545.9);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(6,25499.04);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(7,3668.141);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(8,2442.337);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(9,1937.688);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(10,1758.795);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(11,748.9634);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(12,809.8531);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(13,717.4101);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(14,561.2194);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(15,505.2672);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(16,421.6105);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(17,124.0189);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(18,259.9882);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(19,309.3198);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(20,49.57454);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(21,249.4352);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(22,0.1889639);
   VH_tagOnly_2b1c_Sphericity__3307->SetBinError(23,5.01047);
   VH_tagOnly_2b1c_Sphericity__3307->SetEntries(555840);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3307->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3307->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3307->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3307->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3307->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3307->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3307->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3307->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3307->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3307->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3307->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3307->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3307->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3307->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3307->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3307->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_QCD_tagOnly_2b1c_16->Modified();
   Sphericity_QCD_tagOnly_2b1c_16->cd();
   Sphericity_QCD_tagOnly_2b1c_16->SetSelected(Sphericity_QCD_tagOnly_2b1c_16);
}
