#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHcc_tagFirst_2b1c_17_logY()
{
//=========Macro generated from canvas: Sphericity_ZHcc_tagFirst_2b1c_17/Sphericity_ZHcc_tagFirst_2b1c_17
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHcc_tagFirst_2b1c_17 = new TCanvas("Sphericity_ZHcc_tagFirst_2b1c_17", "Sphericity_ZHcc_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHcc_tagFirst_2b1c_17->SetHighLightColor(2);
   Sphericity_ZHcc_tagFirst_2b1c_17->Range(-0.2,-4.262246,1.133333,0.8176804);
   Sphericity_ZHcc_tagFirst_2b1c_17->SetFillColor(0);
   Sphericity_ZHcc_tagFirst_2b1c_17->SetFillStyle(4000);
   Sphericity_ZHcc_tagFirst_2b1c_17->SetBorderMode(0);
   Sphericity_ZHcc_tagFirst_2b1c_17->SetBorderSize(2);
   Sphericity_ZHcc_tagFirst_2b1c_17->SetLogy();
   Sphericity_ZHcc_tagFirst_2b1c_17->SetLeftMargin(0.15);
   Sphericity_ZHcc_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagFirst_2b1c_17->SetFrameBorderMode(0);
   Sphericity_ZHcc_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2582 = new TH1D("VH_tagFirst_2b1c_Sphericity__2582","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(1,1.076809);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(2,0.926826);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(3,0.5869349);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(4,0.3453077);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(5,0.2415263);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(6,0.1089064);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(7,0.04755021);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(8,0.02878963);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(9,0.01990516);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(10,0.02400875);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(11,0.0133381);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(12,0.008644294);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(13,0.0033183);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(14,0.002810079);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(15,0.004503226);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(16,0.002093933);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(17,0.00035949);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(18,0.0003521895);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinContent(19,0.00049712);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(1,0.03318739);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(2,0.03120626);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(3,0.02505833);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(4,0.01974551);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(5,0.01793534);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(6,0.01069142);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(7,0.006885961);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(8,0.005316055);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(9,0.0039634);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(10,0.005946894);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(11,0.003971246);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(12,0.002677812);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(13,0.001130603);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(14,0.001100845);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(15,0.001854332);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(16,0.001155057);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(17,0.0002553456);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(18,0.000250463);
   VH_tagFirst_2b1c_Sphericity__2582->SetBinError(19,0.0002997089);
   VH_tagFirst_2b1c_Sphericity__2582->SetEntries(8476);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2582->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2582->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2582->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2582->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2582->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2582->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2582->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2582->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2582->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2582->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2582->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2582->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2582->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2582->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2582->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2582->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHcc_tagFirst_2b1c_17->Modified();
   Sphericity_ZHcc_tagFirst_2b1c_17->cd();
   Sphericity_ZHcc_tagFirst_2b1c_17->SetSelected(Sphericity_ZHcc_tagFirst_2b1c_17);
}
