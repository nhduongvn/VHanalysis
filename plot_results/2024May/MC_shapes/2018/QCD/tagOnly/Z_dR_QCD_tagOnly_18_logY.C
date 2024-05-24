#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_QCD_tagOnly_18_logY()
{
//=========Macro generated from canvas: Z_dR_QCD_tagOnly_18/Z_dR_QCD_tagOnly_18
//=========  (Thu May 23 20:48:37 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_QCD_tagOnly_18 = new TCanvas("Z_dR_QCD_tagOnly_18", "Z_dR_QCD_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_QCD_tagOnly_18->SetHighLightColor(2);
   Z_dR_QCD_tagOnly_18->Range(-1.2,0.9796794,6.8,6.177595);
   Z_dR_QCD_tagOnly_18->SetFillColor(0);
   Z_dR_QCD_tagOnly_18->SetFillStyle(4000);
   Z_dR_QCD_tagOnly_18->SetBorderMode(0);
   Z_dR_QCD_tagOnly_18->SetBorderSize(2);
   Z_dR_QCD_tagOnly_18->SetLogy();
   Z_dR_QCD_tagOnly_18->SetLeftMargin(0.15);
   Z_dR_QCD_tagOnly_18->SetFrameFillStyle(1000);
   Z_dR_QCD_tagOnly_18->SetFrameBorderMode(0);
   Z_dR_QCD_tagOnly_18->SetFrameFillStyle(1000);
   Z_dR_QCD_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_dR__849 = new TH1D("VH_tagOnly_Z_dR__849","",30,0,6);
   VH_tagOnly_Z_dR__849->SetBinContent(2,63.16857);
   VH_tagOnly_Z_dR__849->SetBinContent(3,240024.1);
   VH_tagOnly_Z_dR__849->SetBinContent(4,239835.9);
   VH_tagOnly_Z_dR__849->SetBinContent(5,173285.6);
   VH_tagOnly_Z_dR__849->SetBinContent(6,136850.2);
   VH_tagOnly_Z_dR__849->SetBinContent(7,114861.7);
   VH_tagOnly_Z_dR__849->SetBinContent(8,101045.5);
   VH_tagOnly_Z_dR__849->SetBinContent(9,95503.13);
   VH_tagOnly_Z_dR__849->SetBinContent(10,86918.26);
   VH_tagOnly_Z_dR__849->SetBinContent(11,98177.6);
   VH_tagOnly_Z_dR__849->SetBinContent(12,87942.24);
   VH_tagOnly_Z_dR__849->SetBinContent(13,79962.6);
   VH_tagOnly_Z_dR__849->SetBinContent(14,95049.69);
   VH_tagOnly_Z_dR__849->SetBinContent(15,105866.2);
   VH_tagOnly_Z_dR__849->SetBinContent(16,118550.8);
   VH_tagOnly_Z_dR__849->SetBinContent(17,102052.3);
   VH_tagOnly_Z_dR__849->SetBinContent(18,102983.7);
   VH_tagOnly_Z_dR__849->SetBinContent(19,71635.88);
   VH_tagOnly_Z_dR__849->SetBinContent(20,81171.16);
   VH_tagOnly_Z_dR__849->SetBinContent(21,66504.67);
   VH_tagOnly_Z_dR__849->SetBinContent(22,56433.89);
   VH_tagOnly_Z_dR__849->SetBinContent(23,44588.34);
   VH_tagOnly_Z_dR__849->SetBinContent(24,47605.02);
   VH_tagOnly_Z_dR__849->SetBinContent(25,48348.44);
   VH_tagOnly_Z_dR__849->SetBinContent(26,32012.68);
   VH_tagOnly_Z_dR__849->SetBinContent(27,26998.23);
   VH_tagOnly_Z_dR__849->SetBinContent(28,29226.21);
   VH_tagOnly_Z_dR__849->SetBinContent(29,28029.05);
   VH_tagOnly_Z_dR__849->SetBinContent(30,16164.22);
   VH_tagOnly_Z_dR__849->SetBinContent(31,16008.03);
   VH_tagOnly_Z_dR__849->SetBinError(2,30.79711);
   VH_tagOnly_Z_dR__849->SetBinError(3,9283.969);
   VH_tagOnly_Z_dR__849->SetBinError(4,10344.06);
   VH_tagOnly_Z_dR__849->SetBinError(5,11870.74);
   VH_tagOnly_Z_dR__849->SetBinError(6,7626.633);
   VH_tagOnly_Z_dR__849->SetBinError(7,6922.376);
   VH_tagOnly_Z_dR__849->SetBinError(8,6644.718);
   VH_tagOnly_Z_dR__849->SetBinError(9,6549.079);
   VH_tagOnly_Z_dR__849->SetBinError(10,7334.66);
   VH_tagOnly_Z_dR__849->SetBinError(11,14963.48);
   VH_tagOnly_Z_dR__849->SetBinError(12,7682.891);
   VH_tagOnly_Z_dR__849->SetBinError(13,5003.115);
   VH_tagOnly_Z_dR__849->SetBinError(14,7330.913);
   VH_tagOnly_Z_dR__849->SetBinError(15,6808.975);
   VH_tagOnly_Z_dR__849->SetBinError(16,13832.74);
   VH_tagOnly_Z_dR__849->SetBinError(17,7345.252);
   VH_tagOnly_Z_dR__849->SetBinError(18,8070.139);
   VH_tagOnly_Z_dR__849->SetBinError(19,4841.586);
   VH_tagOnly_Z_dR__849->SetBinError(20,6289.542);
   VH_tagOnly_Z_dR__849->SetBinError(21,6730.138);
   VH_tagOnly_Z_dR__849->SetBinError(22,5347.409);
   VH_tagOnly_Z_dR__849->SetBinError(23,3807.609);
   VH_tagOnly_Z_dR__849->SetBinError(24,8095.204);
   VH_tagOnly_Z_dR__849->SetBinError(25,19678.3);
   VH_tagOnly_Z_dR__849->SetBinError(26,3463.397);
   VH_tagOnly_Z_dR__849->SetBinError(27,4031.595);
   VH_tagOnly_Z_dR__849->SetBinError(28,4430.338);
   VH_tagOnly_Z_dR__849->SetBinError(29,3418.304);
   VH_tagOnly_Z_dR__849->SetBinError(30,1633.222);
   VH_tagOnly_Z_dR__849->SetBinError(31,3325.007);
   VH_tagOnly_Z_dR__849->SetEntries(92465);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_dR__849->SetLineColor(ci);
   VH_tagOnly_Z_dR__849->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagOnly_Z_dR__849->GetXaxis()->SetRange(1,30);
   VH_tagOnly_Z_dR__849->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__849->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__849->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__849->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_Z_dR__849->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__849->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_dR__849->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_dR__849->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_dR__849->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__849->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__849->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__849->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__849->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_QCD_tagOnly_18->Modified();
   Z_dR_QCD_tagOnly_18->cd();
   Z_dR_QCD_tagOnly_18->SetSelected(Z_dR_QCD_tagOnly_18);
}
