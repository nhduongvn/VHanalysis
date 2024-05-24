#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dPhi_HZ_WW_DHZfirst_17_logY()
{
//=========Macro generated from canvas: dPhi_HZ_WW_DHZfirst_17/dPhi_HZ_WW_DHZfirst_17
//=========  (Thu May 23 20:48:49 2024) by ROOT version 6.28/10
   TCanvas *dPhi_HZ_WW_DHZfirst_17 = new TCanvas("dPhi_HZ_WW_DHZfirst_17", "dPhi_HZ_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   dPhi_HZ_WW_DHZfirst_17->SetHighLightColor(2);
   dPhi_HZ_WW_DHZfirst_17->Range(-5.6,-1.582177,5.066667,0.1454807);
   dPhi_HZ_WW_DHZfirst_17->SetFillColor(0);
   dPhi_HZ_WW_DHZfirst_17->SetFillStyle(4000);
   dPhi_HZ_WW_DHZfirst_17->SetBorderMode(0);
   dPhi_HZ_WW_DHZfirst_17->SetBorderSize(2);
   dPhi_HZ_WW_DHZfirst_17->SetLogy();
   dPhi_HZ_WW_DHZfirst_17->SetLeftMargin(0.15);
   dPhi_HZ_WW_DHZfirst_17->SetFrameFillStyle(1000);
   dPhi_HZ_WW_DHZfirst_17->SetFrameBorderMode(0);
   dPhi_HZ_WW_DHZfirst_17->SetFrameFillStyle(1000);
   dPhi_HZ_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_dPhi_HZ__1703 = new TH1D("VH_DHZfirst_dPhi_HZ__1703","",480,-4,4);
   VH_DHZfirst_dPhi_HZ__1703->SetBinContent(186,0.362265);
   VH_DHZfirst_dPhi_HZ__1703->SetBinContent(200,0.2028034);
   VH_DHZfirst_dPhi_HZ__1703->SetBinContent(203,0.2353289);
   VH_DHZfirst_dPhi_HZ__1703->SetBinContent(224,0.07791458);
   VH_DHZfirst_dPhi_HZ__1703->SetBinContent(251,0.152338);
   VH_DHZfirst_dPhi_HZ__1703->SetBinContent(258,0.4956396);
   VH_DHZfirst_dPhi_HZ__1703->SetBinContent(271,0.2553652);
   VH_DHZfirst_dPhi_HZ__1703->SetBinContent(274,0.2290723);
   VH_DHZfirst_dPhi_HZ__1703->SetBinContent(280,0.2776511);
   VH_DHZfirst_dPhi_HZ__1703->SetBinContent(291,0.2128171);
   VH_DHZfirst_dPhi_HZ__1703->SetBinContent(308,0.4922072);
   VH_DHZfirst_dPhi_HZ__1703->SetBinContent(343,0.3529121);
   VH_DHZfirst_dPhi_HZ__1703->SetBinContent(359,0.2037551);
   VH_DHZfirst_dPhi_HZ__1703->SetBinContent(364,0.4893481);
   VH_DHZfirst_dPhi_HZ__1703->SetBinError(186,0.256886);
   VH_DHZfirst_dPhi_HZ__1703->SetBinError(200,0.2028034);
   VH_DHZfirst_dPhi_HZ__1703->SetBinError(203,0.2353289);
   VH_DHZfirst_dPhi_HZ__1703->SetBinError(224,0.07791458);
   VH_DHZfirst_dPhi_HZ__1703->SetBinError(251,0.152338);
   VH_DHZfirst_dPhi_HZ__1703->SetBinError(258,0.4956396);
   VH_DHZfirst_dPhi_HZ__1703->SetBinError(271,0.2553652);
   VH_DHZfirst_dPhi_HZ__1703->SetBinError(274,0.2290723);
   VH_DHZfirst_dPhi_HZ__1703->SetBinError(280,0.2776511);
   VH_DHZfirst_dPhi_HZ__1703->SetBinError(291,0.2128171);
   VH_DHZfirst_dPhi_HZ__1703->SetBinError(308,0.4922072);
   VH_DHZfirst_dPhi_HZ__1703->SetBinError(343,0.3529121);
   VH_DHZfirst_dPhi_HZ__1703->SetBinError(359,0.2037551);
   VH_DHZfirst_dPhi_HZ__1703->SetBinError(364,0.4893481);
   VH_DHZfirst_dPhi_HZ__1703->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_dPhi_HZ__1703->SetLineColor(ci);
   VH_DHZfirst_dPhi_HZ__1703->GetXaxis()->SetTitle("#Delta#Phi_{ZH}");
   VH_DHZfirst_dPhi_HZ__1703->GetXaxis()->SetRange(1,480);
   VH_DHZfirst_dPhi_HZ__1703->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_dPhi_HZ__1703->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_dPhi_HZ__1703->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_dPhi_HZ__1703->GetYaxis()->SetTitle("Events/0.017");
   VH_DHZfirst_dPhi_HZ__1703->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_dPhi_HZ__1703->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_dPhi_HZ__1703->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_dPhi_HZ__1703->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_dPhi_HZ__1703->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_dPhi_HZ__1703->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_dPhi_HZ__1703->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_dPhi_HZ__1703->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_dPhi_HZ__1703->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dPhi_HZ_WW_DHZfirst_17->Modified();
   dPhi_HZ_WW_DHZfirst_17->cd();
   dPhi_HZ_WW_DHZfirst_17->SetSelected(dPhi_HZ_WW_DHZfirst_17);
}
