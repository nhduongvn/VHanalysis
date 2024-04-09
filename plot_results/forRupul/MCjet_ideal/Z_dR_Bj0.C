#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0()
{
//=========Macro generated from canvas: Z_dR_Bj0/Z_dR_Bj0
//=========  (Fri Mar 29 15:50:01 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0 = new TCanvas("Z_dR_Bj0", "Z_dR_Bj0",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0->SetHighLightColor(2);
   Z_dR_Bj0->Range(-1.2,-0.4450731,6.8,4.005657);
   Z_dR_Bj0->SetFillColor(0);
   Z_dR_Bj0->SetFillStyle(4000);
   Z_dR_Bj0->SetBorderMode(0);
   Z_dR_Bj0->SetBorderSize(2);
   Z_dR_Bj0->SetLeftMargin(0.15);
   Z_dR_Bj0->SetFrameFillStyle(1000);
   Z_dR_Bj0->SetFrameBorderMode(0);
   Z_dR_Bj0->SetFrameFillStyle(1000);
   Z_dR_Bj0->SetFrameBorderMode(0);
   
   TH1D *VH_MCjet_ideal_Z_dR_Bj0__13 = new TH1D("VH_MCjet_ideal_Z_dR_Bj0__13","",30,0,6);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(1,0.8728334);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(2,3.203235);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(3,3.391033);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(4,2.129799);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(5,0.9923412);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(6,0.3905343);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(7,0.1408484);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(8,0.07469235);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(9,0.05548574);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(10,0.03627914);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(11,0.02774287);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(12,0.02347474);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(13,0.01067034);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(14,0.02134067);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(15,0.01707254);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(16,0.008536268);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(17,0.01067034);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(18,0.008536268);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(19,0.008536268);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(20,0.004268134);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(21,0.002134067);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinContent(24,0.002134067);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(1,0.04315883);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(2,0.08267961);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(3,0.08506874);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(4,0.06741761);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(5,0.04601872);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(6,0.02886912);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(7,0.01733724);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(8,0.01262531);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(9,0.01088165);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(10,0.008798984);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(11,0.007694488);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(12,0.0070779);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(13,0.004771919);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(14,0.006748513);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(15,0.006036053);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(16,0.004268134);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(17,0.004771919);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(18,0.004268134);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(19,0.004268134);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(20,0.003018027);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(21,0.002134067);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetBinError(24,0.002134067);
   VH_MCjet_ideal_Z_dR_Bj0__13->SetEntries(5357);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_MCjet_ideal_Z_dR_Bj0__13->SetLineColor(ci);
   VH_MCjet_ideal_Z_dR_Bj0__13->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_MCjet_ideal_Z_dR_Bj0__13->GetXaxis()->SetRange(1,30);
   VH_MCjet_ideal_Z_dR_Bj0__13->GetXaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Z_dR_Bj0__13->GetXaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_Z_dR_Bj0__13->GetXaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Z_dR_Bj0__13->GetYaxis()->SetTitle("Events/0.2");
   VH_MCjet_ideal_Z_dR_Bj0__13->GetYaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Z_dR_Bj0__13->GetYaxis()->SetLabelSize(0.05);
   VH_MCjet_ideal_Z_dR_Bj0__13->GetYaxis()->SetTitleSize(0.057);
   VH_MCjet_ideal_Z_dR_Bj0__13->GetYaxis()->SetTitleOffset(1.2);
   VH_MCjet_ideal_Z_dR_Bj0__13->GetYaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Z_dR_Bj0__13->GetZaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Z_dR_Bj0__13->GetZaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_Z_dR_Bj0__13->GetZaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Z_dR_Bj0__13->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0->Modified();
   Z_dR_Bj0->cd();
   Z_dR_Bj0->SetSelected(Z_dR_Bj0);
}
