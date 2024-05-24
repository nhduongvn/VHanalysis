#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHcc_tagFirst_2b1c_18()
{
//=========Macro generated from canvas: Sphericity_ZHcc_tagFirst_2b1c_18/Sphericity_ZHcc_tagFirst_2b1c_18
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHcc_tagFirst_2b1c_18 = new TCanvas("Sphericity_ZHcc_tagFirst_2b1c_18", "Sphericity_ZHcc_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHcc_tagFirst_2b1c_18->SetHighLightColor(2);
   Sphericity_ZHcc_tagFirst_2b1c_18->Range(-0.2,-0.2979769,1.133333,2.681792);
   Sphericity_ZHcc_tagFirst_2b1c_18->SetFillColor(0);
   Sphericity_ZHcc_tagFirst_2b1c_18->SetFillStyle(4000);
   Sphericity_ZHcc_tagFirst_2b1c_18->SetBorderMode(0);
   Sphericity_ZHcc_tagFirst_2b1c_18->SetBorderSize(2);
   Sphericity_ZHcc_tagFirst_2b1c_18->SetLeftMargin(0.15);
   Sphericity_ZHcc_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagFirst_2b1c_18->SetFrameBorderMode(0);
   Sphericity_ZHcc_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2583 = new TH1D("VH_tagFirst_2b1c_Sphericity__2583","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(1,2.2703);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(2,1.845137);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(3,0.9549484);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(4,0.7182034);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(5,0.4510309);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(6,0.2269562);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(7,0.1089904);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(8,0.05270337);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(9,0.02239619);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(10,0.02421455);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(11,0.01356565);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(12,0.01368668);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(13,0.005618161);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(14,0.007993521);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(15,0.003193043);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(16,0.0005532805);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(17,0.001064053);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(18,0.003331728);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(19,0.0008484987);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinContent(20,0.0003544348);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(1,0.07921296);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(2,0.06772833);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(3,0.04943639);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(4,0.04152885);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(5,0.03334854);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(6,0.0225261);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(7,0.01870374);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(8,0.01046185);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(9,0.005282097);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(10,0.006165919);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(11,0.004038971);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(12,0.004900097);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(13,0.002675294);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(14,0.003266388);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(15,0.001151021);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(16,0.0005532805);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(17,0.0007564835);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(18,0.002733827);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(19,0.0006053457);
   VH_tagFirst_2b1c_Sphericity__2583->SetBinError(20,0.0003544348);
   VH_tagFirst_2b1c_Sphericity__2583->SetEntries(7112);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2583->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2583->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2583->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2583->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2583->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2583->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2583->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2583->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2583->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2583->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2583->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2583->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2583->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2583->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2583->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2583->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHcc_tagFirst_2b1c_18->Modified();
   Sphericity_ZHcc_tagFirst_2b1c_18->cd();
   Sphericity_ZHcc_tagFirst_2b1c_18->SetSelected(Sphericity_ZHcc_tagFirst_2b1c_18);
}
