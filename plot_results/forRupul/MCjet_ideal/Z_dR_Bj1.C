#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1()
{
//=========Macro generated from canvas: Z_dR_Bj1/Z_dR_Bj1
//=========  (Fri Mar 29 15:50:01 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj1 = new TCanvas("Z_dR_Bj1", "Z_dR_Bj1",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1->SetHighLightColor(2);
   Z_dR_Bj1->Range(-1.2,-0.4431124,6.8,3.988011);
   Z_dR_Bj1->SetFillColor(0);
   Z_dR_Bj1->SetFillStyle(4000);
   Z_dR_Bj1->SetBorderMode(0);
   Z_dR_Bj1->SetBorderSize(2);
   Z_dR_Bj1->SetLeftMargin(0.15);
   Z_dR_Bj1->SetFrameFillStyle(1000);
   Z_dR_Bj1->SetFrameBorderMode(0);
   Z_dR_Bj1->SetFrameFillStyle(1000);
   Z_dR_Bj1->SetFrameBorderMode(0);
   
   TH1D *VH_MCjet_ideal_Z_dR_Bj1__14 = new TH1D("VH_MCjet_ideal_Z_dR_Bj1__14","",30,0,6);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(1,0.9752686);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(2,3.286463);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(3,3.376094);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(4,1.980414);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(5,0.8984422);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(6,0.3393167);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(7,0.160055);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(8,0.08963082);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(9,0.06829015);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(10,0.04481541);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(11,0.04054727);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(12,0.03627914);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(13,0.04694947);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(14,0.02774287);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(15,0.02134067);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(16,0.0256088);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(17,0.004268134);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(18,0.004268134);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(19,0.002134067);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(20,0.002134067);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinContent(25,0.002134067);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(1,0.04562114);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(2,0.08374684);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(3,0.08488116);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(4,0.06501028);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(5,0.04378739);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(6,0.02690956);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(7,0.01848156);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(8,0.01383034);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(9,0.01207211);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(10,0.009779524);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(11,0.009302183);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(12,0.008798984);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(13,0.01000966);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(14,0.007694488);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(15,0.006748513);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(16,0.007392625);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(17,0.003018027);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(18,0.003018027);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(19,0.002134067);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(20,0.002134067);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetBinError(25,0.002134067);
   VH_MCjet_ideal_Z_dR_Bj1__14->SetEntries(5357);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_MCjet_ideal_Z_dR_Bj1__14->SetLineColor(ci);
   VH_MCjet_ideal_Z_dR_Bj1__14->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VH_MCjet_ideal_Z_dR_Bj1__14->GetXaxis()->SetRange(1,30);
   VH_MCjet_ideal_Z_dR_Bj1__14->GetXaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Z_dR_Bj1__14->GetXaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_Z_dR_Bj1__14->GetXaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Z_dR_Bj1__14->GetYaxis()->SetTitle("Events/0.2");
   VH_MCjet_ideal_Z_dR_Bj1__14->GetYaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Z_dR_Bj1__14->GetYaxis()->SetLabelSize(0.05);
   VH_MCjet_ideal_Z_dR_Bj1__14->GetYaxis()->SetTitleSize(0.057);
   VH_MCjet_ideal_Z_dR_Bj1__14->GetYaxis()->SetTitleOffset(1.2);
   VH_MCjet_ideal_Z_dR_Bj1__14->GetYaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Z_dR_Bj1__14->GetZaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Z_dR_Bj1__14->GetZaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_Z_dR_Bj1__14->GetZaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Z_dR_Bj1__14->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1->Modified();
   Z_dR_Bj1->cd();
   Z_dR_Bj1->SetSelected(Z_dR_Bj1);
}
