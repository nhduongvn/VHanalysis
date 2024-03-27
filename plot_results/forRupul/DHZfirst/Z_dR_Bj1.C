#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1()
{
//=========Macro generated from canvas: Z_dR_Bj1/Z_dR_Bj1
//=========  (Wed Mar 27 16:46:18 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj1 = new TCanvas("Z_dR_Bj1", "Z_dR_Bj1",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1->SetHighLightColor(2);
   Z_dR_Bj1->Range(-1.2,-0.01708588,6.8,0.1537729);
   Z_dR_Bj1->SetFillColor(0);
   Z_dR_Bj1->SetFillStyle(4000);
   Z_dR_Bj1->SetBorderMode(0);
   Z_dR_Bj1->SetBorderSize(2);
   Z_dR_Bj1->SetLeftMargin(0.15);
   Z_dR_Bj1->SetFrameFillStyle(1000);
   Z_dR_Bj1->SetFrameBorderMode(0);
   Z_dR_Bj1->SetFrameFillStyle(1000);
   Z_dR_Bj1->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj1__62 = new TH1D("VH_DHZfirst_Z_dR_Bj1__62","",30,0,6);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(2,0.1131056);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(3,0.1301781);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(4,0.05548574);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(5,0.008536268);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(6,0.006402201);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(7,0.008536268);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(8,0.006402201);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(9,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(10,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(11,0.004268134);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(12,0.004268134);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(15,0.004268134);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(17,0.004268134);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(19,0.004268134);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(22,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(24,0.004268134);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(25,0.004268134);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(26,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(2,0.01553624);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(3,0.0166676);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(4,0.01088165);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(5,0.004268134);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(6,0.003696313);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(7,0.004268134);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(8,0.003696313);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(9,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(10,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(11,0.003018027);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(12,0.003018027);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(15,0.003018027);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(17,0.003018027);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(19,0.003018027);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(22,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(24,0.003018027);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(25,0.003018027);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(26,0.002134067);
   VH_DHZfirst_Z_dR_Bj1__62->SetEntries(172);

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
   Z_dR_Bj1->Modified();
   Z_dR_Bj1->cd();
   Z_dR_Bj1->SetSelected(Z_dR_Bj1);
}
