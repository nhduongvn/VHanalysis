#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_DHZfirst_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_DHZfirst_18/Z_dR_Bj1_DHZfirst_18
//=========  (Thu May 23 13:53:21 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj1_DHZfirst_18 = new TCanvas("Z_dR_Bj1_DHZfirst_18", "Z_dR_Bj1_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_DHZfirst_18->SetHighLightColor(2);
   Z_dR_Bj1_DHZfirst_18->Range(-1.2,-0.02436838,6.8,0.2193154);
   Z_dR_Bj1_DHZfirst_18->SetFillColor(0);
   Z_dR_Bj1_DHZfirst_18->SetFillStyle(4000);
   Z_dR_Bj1_DHZfirst_18->SetBorderMode(0);
   Z_dR_Bj1_DHZfirst_18->SetBorderSize(2);
   Z_dR_Bj1_DHZfirst_18->SetLeftMargin(0.15);
   Z_dR_Bj1_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_DHZfirst_18->SetFrameBorderMode(0);
   Z_dR_Bj1_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj1__62 = new TH1D("VH_DHZfirst_Z_dR_Bj1__62","",30,0,6);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(1,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(2,0.1472506);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(3,0.1856638);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(4,0.05548574);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(5,0.0192066);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(6,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(8,0.01067034);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(9,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(10,0.006402201);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(14,0.004268134);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(15,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(16,0.004268134);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(17,0.004268134);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(18,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(19,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(20,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(21,0.006402201);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(22,0.004268134);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(23,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(27,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(1,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(2,0.01772689);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(3,0.01990525);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(4,0.01088165);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(5,0.006402201);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(6,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(8,0.004771919);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(9,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(10,0.003696313);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(14,0.003018027);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(15,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(16,0.003018027);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(17,0.003018027);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(18,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(19,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(20,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(21,0.003696313);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(22,0.003018027);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(23,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(27,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetEntries(219);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj1__62->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj1__62->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VH_DHZfirst_Z_dR_Bj1__62->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj1__62->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__62->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj1__62->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__62->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj1__62->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__62->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj1__62->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj1__62->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj1__62->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__62->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__62->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj1__62->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__62->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_DHZfirst_18->Modified();
   Z_dR_Bj1_DHZfirst_18->cd();
   Z_dR_Bj1_DHZfirst_18->SetSelected(Z_dR_Bj1_DHZfirst_18);
}
