#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dPhi_WW_DHZfirst_2b1c_18_logY()
{
//=========Macro generated from canvas: H_dPhi_WW_DHZfirst_2b1c_18/H_dPhi_WW_DHZfirst_2b1c_18
//=========  (Thu May 23 20:49:21 2024) by ROOT version 6.28/10
   TCanvas *H_dPhi_WW_DHZfirst_2b1c_18 = new TCanvas("H_dPhi_WW_DHZfirst_2b1c_18", "H_dPhi_WW_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_WW_DHZfirst_2b1c_18->SetHighLightColor(2);
   H_dPhi_WW_DHZfirst_2b1c_18->Range(-0.8,-1.223817,4.533333,0.8961482);
   H_dPhi_WW_DHZfirst_2b1c_18->SetFillColor(0);
   H_dPhi_WW_DHZfirst_2b1c_18->SetFillStyle(4000);
   H_dPhi_WW_DHZfirst_2b1c_18->SetBorderMode(0);
   H_dPhi_WW_DHZfirst_2b1c_18->SetBorderSize(2);
   H_dPhi_WW_DHZfirst_2b1c_18->SetLogy();
   H_dPhi_WW_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   H_dPhi_WW_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   H_dPhi_WW_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   H_dPhi_WW_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   H_dPhi_WW_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_H_dPhi__3834 = new TH1D("VH_DHZfirst_2b1c_H_dPhi__3834","",120,0,4);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinContent(0,16.60927);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinContent(6,0.4564509);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinContent(7,1.055165);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinContent(9,2.550367);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinContent(15,0.9917312);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinContent(20,1.388557);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinContent(21,1.079228);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinContent(22,2.139855);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinContent(26,0.4370453);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinContent(33,1.569272);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinContent(34,1.707942);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinContent(40,1.71247);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinContent(41,0.4628393);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinContent(50,0.1946298);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinContent(52,0.6551195);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinContent(54,0.4815663);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinContent(64,0.5092988);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinError(0,3.697422);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinError(6,0.4564509);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinError(7,0.7566786);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinError(9,2.550367);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinError(15,0.7022296);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinError(20,0.988387);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinError(21,0.7686409);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinError(22,2.139855);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinError(26,0.4370453);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinError(33,0.9193213);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinError(34,1.707942);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinError(40,1.284064);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinError(41,0.4628393);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinError(50,0.1946298);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinError(52,0.6551195);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinError(54,0.4815663);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetBinError(64,0.5092988);
   VH_DHZfirst_2b1c_H_dPhi__3834->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_H_dPhi__3834->SetLineColor(ci);
   VH_DHZfirst_2b1c_H_dPhi__3834->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VH_DHZfirst_2b1c_H_dPhi__3834->GetXaxis()->SetRange(1,120);
   VH_DHZfirst_2b1c_H_dPhi__3834->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_dPhi__3834->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_H_dPhi__3834->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_dPhi__3834->GetYaxis()->SetTitle("Events/0.033");
   VH_DHZfirst_2b1c_H_dPhi__3834->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_dPhi__3834->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_H_dPhi__3834->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_H_dPhi__3834->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_H_dPhi__3834->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_dPhi__3834->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_dPhi__3834->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_H_dPhi__3834->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_dPhi__3834->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_WW_DHZfirst_2b1c_18->Modified();
   H_dPhi_WW_DHZfirst_2b1c_18->cd();
   H_dPhi_WW_DHZfirst_2b1c_18->SetSelected(H_dPhi_WW_DHZfirst_2b1c_18);
}
