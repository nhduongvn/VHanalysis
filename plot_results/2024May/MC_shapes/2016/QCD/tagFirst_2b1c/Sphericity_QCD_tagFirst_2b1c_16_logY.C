#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_QCD_tagFirst_2b1c_16_logY()
{
//=========Macro generated from canvas: Sphericity_QCD_tagFirst_2b1c_16/Sphericity_QCD_tagFirst_2b1c_16
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_QCD_tagFirst_2b1c_16 = new TCanvas("Sphericity_QCD_tagFirst_2b1c_16", "Sphericity_QCD_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_QCD_tagFirst_2b1c_16->SetHighLightColor(2);
   Sphericity_QCD_tagFirst_2b1c_16->Range(-0.2,-0.389179,1.133333,7.491095);
   Sphericity_QCD_tagFirst_2b1c_16->SetFillColor(0);
   Sphericity_QCD_tagFirst_2b1c_16->SetFillStyle(4000);
   Sphericity_QCD_tagFirst_2b1c_16->SetBorderMode(0);
   Sphericity_QCD_tagFirst_2b1c_16->SetBorderSize(2);
   Sphericity_QCD_tagFirst_2b1c_16->SetLogy();
   Sphericity_QCD_tagFirst_2b1c_16->SetLeftMargin(0.15);
   Sphericity_QCD_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_QCD_tagFirst_2b1c_16->SetFrameBorderMode(0);
   Sphericity_QCD_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_QCD_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2587 = new TH1D("VH_tagFirst_2b1c_Sphericity__2587","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(1,2663903);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(2,2297631);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(3,1306694);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(4,755021.3);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(5,367516.9);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(6,186665.9);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(7,76552.96);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(8,41298.05);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(9,27134.05);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(10,19445.55);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(11,12213.5);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(12,10546.19);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(13,8318.142);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(14,4934.598);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(15,4056.166);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(16,3105.699);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(17,1937.981);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(18,1364.409);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(19,1065.158);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(20,262.7852);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(21,434.8909);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(22,6.216771);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinContent(23,5.01047);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(1,40605.12);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(2,41083.63);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(3,31588.21);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(4,30983.9);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(5,8926.474);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(6,5821.619);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(7,3452.793);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(8,2492.038);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(9,1736.48);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(10,1859.742);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(11,929.3822);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(12,909.2549);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(13,896.3109);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(14,524.3284);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(15,542.19);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(16,427.8084);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(17,193.3972);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(18,248.157);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(19,377.5702);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(20,59.19196);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(21,251.3025);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(22,5.339671);
   VH_tagFirst_2b1c_Sphericity__2587->SetBinError(23,5.01047);
   VH_tagFirst_2b1c_Sphericity__2587->SetEntries(500989);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2587->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2587->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2587->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2587->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2587->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2587->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2587->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2587->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2587->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2587->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2587->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2587->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2587->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2587->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2587->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2587->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_QCD_tagFirst_2b1c_16->Modified();
   Sphericity_QCD_tagFirst_2b1c_16->cd();
   Sphericity_QCD_tagFirst_2b1c_16->SetSelected(Sphericity_QCD_tagFirst_2b1c_16);
}
