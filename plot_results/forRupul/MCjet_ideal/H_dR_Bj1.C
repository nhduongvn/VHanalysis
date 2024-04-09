#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1()
{
//=========Macro generated from canvas: H_dR_Bj1/H_dR_Bj1
//=========  (Fri Mar 29 15:50:01 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj1 = new TCanvas("H_dR_Bj1", "H_dR_Bj1",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1->SetHighLightColor(2);
   H_dR_Bj1->Range(-1.2,-0.3391966,6.8,3.05277);
   H_dR_Bj1->SetFillColor(0);
   H_dR_Bj1->SetFillStyle(4000);
   H_dR_Bj1->SetBorderMode(0);
   H_dR_Bj1->SetBorderSize(2);
   H_dR_Bj1->SetLeftMargin(0.15);
   H_dR_Bj1->SetFrameFillStyle(1000);
   H_dR_Bj1->SetFrameBorderMode(0);
   H_dR_Bj1->SetFrameFillStyle(1000);
   H_dR_Bj1->SetFrameBorderMode(0);
   
   TH1D *VH_MCjet_ideal_H_dR_Bj1__12 = new TH1D("VH_MCjet_ideal_H_dR_Bj1__12","",30,0,6);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(1,0.4652266);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(2,2.084983);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(3,2.584355);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(4,2.317597);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(5,1.606952);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(6,1.058497);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(7,0.5335168);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(8,0.253954);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(9,0.1792616);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(10,0.07042421);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(11,0.08109455);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(12,0.03841321);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(13,0.03201101);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(14,0.04054727);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(15,0.02347474);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(16,0.02134067);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(17,0.0128044);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(18,0.01493847);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(19,0.006402201);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(21,0.002134067);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(24,0.002134067);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinContent(27,0.002134067);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(1,0.03150912);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(2,0.06670453);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(3,0.07426431);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(4,0.07032714);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(5,0.0585606);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(6,0.04752793);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(7,0.03374256);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(8,0.02327992);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(9,0.01955905);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(10,0.01225928);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(11,0.01315527);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(12,0.00905408);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(13,0.008265206);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(14,0.009302183);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(15,0.0070779);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(16,0.006748513);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(17,0.005227375);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(18,0.005646211);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(19,0.003696313);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(21,0.002134067);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(24,0.002134067);
   VH_MCjet_ideal_H_dR_Bj1__12->SetBinError(27,0.002134067);
   VH_MCjet_ideal_H_dR_Bj1__12->SetEntries(5357);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_MCjet_ideal_H_dR_Bj1__12->SetLineColor(ci);
   VH_MCjet_ideal_H_dR_Bj1__12->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VH_MCjet_ideal_H_dR_Bj1__12->GetXaxis()->SetRange(1,30);
   VH_MCjet_ideal_H_dR_Bj1__12->GetXaxis()->SetLabelFont(42);
   VH_MCjet_ideal_H_dR_Bj1__12->GetXaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_H_dR_Bj1__12->GetXaxis()->SetTitleFont(42);
   VH_MCjet_ideal_H_dR_Bj1__12->GetYaxis()->SetTitle("Events/0.2");
   VH_MCjet_ideal_H_dR_Bj1__12->GetYaxis()->SetLabelFont(42);
   VH_MCjet_ideal_H_dR_Bj1__12->GetYaxis()->SetLabelSize(0.05);
   VH_MCjet_ideal_H_dR_Bj1__12->GetYaxis()->SetTitleSize(0.057);
   VH_MCjet_ideal_H_dR_Bj1__12->GetYaxis()->SetTitleOffset(1.2);
   VH_MCjet_ideal_H_dR_Bj1__12->GetYaxis()->SetTitleFont(42);
   VH_MCjet_ideal_H_dR_Bj1__12->GetZaxis()->SetLabelFont(42);
   VH_MCjet_ideal_H_dR_Bj1__12->GetZaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_H_dR_Bj1__12->GetZaxis()->SetTitleFont(42);
   VH_MCjet_ideal_H_dR_Bj1__12->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1->Modified();
   H_dR_Bj1->cd();
   H_dR_Bj1->SetSelected(H_dR_Bj1);
}
