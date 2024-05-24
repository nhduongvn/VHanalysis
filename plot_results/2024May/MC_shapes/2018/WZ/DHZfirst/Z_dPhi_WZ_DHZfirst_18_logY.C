#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dPhi_WZ_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Z_dPhi_WZ_DHZfirst_18/Z_dPhi_WZ_DHZfirst_18
//=========  (Thu May 23 20:48:48 2024) by ROOT version 6.28/10
   TCanvas *Z_dPhi_WZ_DHZfirst_18 = new TCanvas("Z_dPhi_WZ_DHZfirst_18", "Z_dPhi_WZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_WZ_DHZfirst_18->SetHighLightColor(2);
   Z_dPhi_WZ_DHZfirst_18->Range(-0.8,-0.981339,4.533333,1.204679);
   Z_dPhi_WZ_DHZfirst_18->SetFillColor(0);
   Z_dPhi_WZ_DHZfirst_18->SetFillStyle(4000);
   Z_dPhi_WZ_DHZfirst_18->SetBorderMode(0);
   Z_dPhi_WZ_DHZfirst_18->SetBorderSize(2);
   Z_dPhi_WZ_DHZfirst_18->SetLogy();
   Z_dPhi_WZ_DHZfirst_18->SetLeftMargin(0.15);
   Z_dPhi_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dPhi_WZ_DHZfirst_18->SetFrameBorderMode(0);
   Z_dPhi_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dPhi_WZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dPhi__1647 = new TH1D("VH_DHZfirst_Z_dPhi__1647","",120,0,4);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(0,22.93903);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(1,0.8121203);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(3,0.379651);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(5,1.274231);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(7,1.715444);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(9,0.7295594);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(10,0.4328347);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(11,0.922449);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(13,4.662896);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(14,3.096535);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(15,0.6437139);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(16,5.111259);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(17,1.587435);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(18,1.684253);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(19,0.6798511);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(20,1.604599);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(21,1.527069);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(22,0.3453765);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(23,0.5199607);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(26,0.4027821);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(27,1.252254);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(32,1.047246);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(34,0.3732109);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(51,0.3605006);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(70,0.5629164);
   VH_DHZfirst_Z_dPhi__1647->SetBinContent(85,0.5373678);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(0,3.988448);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(1,0.5748526);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(3,0.379651);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(5,1.274231);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(7,1.062019);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(9,0.7295594);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(10,0.4328347);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(11,0.6579623);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(13,2.79103);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(14,1.780228);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(15,0.6437139);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(16,2.147026);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(17,1.021036);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(18,0.9860554);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(19,0.4825918);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(20,1.287318);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(21,1.08022);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(22,0.3453765);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(23,0.5199607);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(26,0.4027821);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(27,0.9682726);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(32,0.771074);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(34,0.3732109);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(51,0.3605006);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(70,0.5629164);
   VH_DHZfirst_Z_dPhi__1647->SetBinError(85,0.5373678);
   VH_DHZfirst_Z_dPhi__1647->SetEntries(90);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dPhi__1647->SetLineColor(ci);
   VH_DHZfirst_Z_dPhi__1647->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VH_DHZfirst_Z_dPhi__1647->GetXaxis()->SetRange(1,120);
   VH_DHZfirst_Z_dPhi__1647->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__1647->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dPhi__1647->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__1647->GetYaxis()->SetTitle("Events/0.033");
   VH_DHZfirst_Z_dPhi__1647->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__1647->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dPhi__1647->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dPhi__1647->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dPhi__1647->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__1647->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__1647->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dPhi__1647->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__1647->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_WZ_DHZfirst_18->Modified();
   Z_dPhi_WZ_DHZfirst_18->cd();
   Z_dPhi_WZ_DHZfirst_18->SetSelected(Z_dPhi_WZ_DHZfirst_18);
}
