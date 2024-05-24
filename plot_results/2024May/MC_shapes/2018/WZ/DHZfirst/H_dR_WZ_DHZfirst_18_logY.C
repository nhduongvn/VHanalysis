#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_WZ_DHZfirst_18_logY()
{
//=========Macro generated from canvas: H_dR_WZ_DHZfirst_18/H_dR_WZ_DHZfirst_18
//=========  (Thu May 23 20:48:47 2024) by ROOT version 6.28/10
   TCanvas *H_dR_WZ_DHZfirst_18 = new TCanvas("H_dR_WZ_DHZfirst_18", "H_dR_WZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_WZ_DHZfirst_18->SetHighLightColor(2);
   H_dR_WZ_DHZfirst_18->Range(-1.24,-1.007317,7.026667,1.641847);
   H_dR_WZ_DHZfirst_18->SetFillColor(0);
   H_dR_WZ_DHZfirst_18->SetFillStyle(4000);
   H_dR_WZ_DHZfirst_18->SetBorderMode(0);
   H_dR_WZ_DHZfirst_18->SetBorderSize(2);
   H_dR_WZ_DHZfirst_18->SetLogy();
   H_dR_WZ_DHZfirst_18->SetLeftMargin(0.15);
   H_dR_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_WZ_DHZfirst_18->SetFrameBorderMode(0);
   H_dR_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_WZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR__1617 = new TH1D("VH_DHZfirst_H_dR__1617","",30,0,6);
   VH_DHZfirst_H_dR__1617->SetBinContent(3,8.631189);
   VH_DHZfirst_H_dR__1617->SetBinContent(4,12.57134);
   VH_DHZfirst_H_dR__1617->SetBinContent(5,5.216761);
   VH_DHZfirst_H_dR__1617->SetBinContent(6,1.745122);
   VH_DHZfirst_H_dR__1617->SetBinContent(7,1.627783);
   VH_DHZfirst_H_dR__1617->SetBinContent(8,0.4255825);
   VH_DHZfirst_H_dR__1617->SetBinContent(9,2.923249);
   VH_DHZfirst_H_dR__1617->SetBinContent(10,0.7062591);
   VH_DHZfirst_H_dR__1617->SetBinContent(11,0.5629164);
   VH_DHZfirst_H_dR__1617->SetBinContent(12,0.5373678);
   VH_DHZfirst_H_dR__1617->SetBinContent(13,1.031476);
   VH_DHZfirst_H_dR__1617->SetBinContent(14,3.028989);
   VH_DHZfirst_H_dR__1617->SetBinContent(15,0.7651927);
   VH_DHZfirst_H_dR__1617->SetBinContent(16,0.3716468);
   VH_DHZfirst_H_dR__1617->SetBinContent(17,1.412949);
   VH_DHZfirst_H_dR__1617->SetBinContent(18,1.744633);
   VH_DHZfirst_H_dR__1617->SetBinContent(19,0.8015598);
   VH_DHZfirst_H_dR__1617->SetBinContent(20,3.125427);
   VH_DHZfirst_H_dR__1617->SetBinContent(21,0.7731086);
   VH_DHZfirst_H_dR__1617->SetBinContent(22,0.3702721);
   VH_DHZfirst_H_dR__1617->SetBinContent(23,0.3619341);
   VH_DHZfirst_H_dR__1617->SetBinContent(26,0.8390827);
   VH_DHZfirst_H_dR__1617->SetBinContent(28,3.85988);
   VH_DHZfirst_H_dR__1617->SetBinContent(29,1.770823);
   VH_DHZfirst_H_dR__1617->SetBinError(3,2.595095);
   VH_DHZfirst_H_dR__1617->SetBinError(4,3.108445);
   VH_DHZfirst_H_dR__1617->SetBinError(5,1.989274);
   VH_DHZfirst_H_dR__1617->SetBinError(6,1.100961);
   VH_DHZfirst_H_dR__1617->SetBinError(7,1.222436);
   VH_DHZfirst_H_dR__1617->SetBinError(8,0.4255825);
   VH_DHZfirst_H_dR__1617->SetBinError(9,1.410812);
   VH_DHZfirst_H_dR__1617->SetBinError(10,0.4995094);
   VH_DHZfirst_H_dR__1617->SetBinError(11,0.5629164);
   VH_DHZfirst_H_dR__1617->SetBinError(12,0.5373678);
   VH_DHZfirst_H_dR__1617->SetBinError(13,0.6023555);
   VH_DHZfirst_H_dR__1617->SetBinError(14,1.832366);
   VH_DHZfirst_H_dR__1617->SetBinError(15,0.5416426);
   VH_DHZfirst_H_dR__1617->SetBinError(16,0.3716468);
   VH_DHZfirst_H_dR__1617->SetBinError(17,0.8389988);
   VH_DHZfirst_H_dR__1617->SetBinError(18,1.062396);
   VH_DHZfirst_H_dR__1617->SetBinError(19,0.8015598);
   VH_DHZfirst_H_dR__1617->SetBinError(20,1.44982);
   VH_DHZfirst_H_dR__1617->SetBinError(21,0.5473094);
   VH_DHZfirst_H_dR__1617->SetBinError(22,0.3702721);
   VH_DHZfirst_H_dR__1617->SetBinError(23,0.3619341);
   VH_DHZfirst_H_dR__1617->SetBinError(26,0.8390827);
   VH_DHZfirst_H_dR__1617->SetBinError(28,2.665251);
   VH_DHZfirst_H_dR__1617->SetBinError(29,1.05292);
   VH_DHZfirst_H_dR__1617->SetEntries(90);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR__1617->SetLineColor(ci);
   VH_DHZfirst_H_dR__1617->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_DHZfirst_H_dR__1617->GetXaxis()->SetRange(1,31);
   VH_DHZfirst_H_dR__1617->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__1617->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR__1617->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__1617->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR__1617->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__1617->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR__1617->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR__1617->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR__1617->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__1617->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__1617->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR__1617->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__1617->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_WZ_DHZfirst_18->Modified();
   H_dR_WZ_DHZfirst_18->cd();
   H_dR_WZ_DHZfirst_18->SetSelected(H_dR_WZ_DHZfirst_18);
}
