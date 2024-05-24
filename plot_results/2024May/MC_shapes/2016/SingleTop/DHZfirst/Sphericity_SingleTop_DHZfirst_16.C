#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_SingleTop_DHZfirst_16()
{
//=========Macro generated from canvas: Sphericity_SingleTop_DHZfirst_16/Sphericity_SingleTop_DHZfirst_16
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_SingleTop_DHZfirst_16 = new TCanvas("Sphericity_SingleTop_DHZfirst_16", "Sphericity_SingleTop_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_SingleTop_DHZfirst_16->SetHighLightColor(2);
   Sphericity_SingleTop_DHZfirst_16->Range(-0.2,-97.7577,1.133333,879.8192);
   Sphericity_SingleTop_DHZfirst_16->SetFillColor(0);
   Sphericity_SingleTop_DHZfirst_16->SetFillStyle(4000);
   Sphericity_SingleTop_DHZfirst_16->SetBorderMode(0);
   Sphericity_SingleTop_DHZfirst_16->SetBorderSize(2);
   Sphericity_SingleTop_DHZfirst_16->SetLeftMargin(0.15);
   Sphericity_SingleTop_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_SingleTop_DHZfirst_16->SetFrameBorderMode(0);
   Sphericity_SingleTop_DHZfirst_16->SetFrameFillStyle(1000);
   Sphericity_SingleTop_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1879 = new TH1D("VH_DHZfirst_Sphericity__1879","",25,0,1);
   VH_DHZfirst_Sphericity__1879->SetBinContent(1,744.8205);
   VH_DHZfirst_Sphericity__1879->SetBinContent(2,689.28);
   VH_DHZfirst_Sphericity__1879->SetBinContent(3,402.1879);
   VH_DHZfirst_Sphericity__1879->SetBinContent(4,212.4271);
   VH_DHZfirst_Sphericity__1879->SetBinContent(5,117.5007);
   VH_DHZfirst_Sphericity__1879->SetBinContent(6,51.0209);
   VH_DHZfirst_Sphericity__1879->SetBinContent(7,14.84398);
   VH_DHZfirst_Sphericity__1879->SetBinContent(8,8.230731);
   VH_DHZfirst_Sphericity__1879->SetBinContent(9,3.107501);
   VH_DHZfirst_Sphericity__1879->SetBinContent(10,1.529642);
   VH_DHZfirst_Sphericity__1879->SetBinContent(11,1.18582);
   VH_DHZfirst_Sphericity__1879->SetBinContent(12,0.6335742);
   VH_DHZfirst_Sphericity__1879->SetBinContent(13,0.4778046);
   VH_DHZfirst_Sphericity__1879->SetBinContent(14,0.4913835);
   VH_DHZfirst_Sphericity__1879->SetBinContent(15,0.08899988);
   VH_DHZfirst_Sphericity__1879->SetBinContent(16,0.4473187);
   VH_DHZfirst_Sphericity__1879->SetBinContent(17,0.2951208);
   VH_DHZfirst_Sphericity__1879->SetBinError(1,9.670954);
   VH_DHZfirst_Sphericity__1879->SetBinError(2,9.125014);
   VH_DHZfirst_Sphericity__1879->SetBinError(3,7.126266);
   VH_DHZfirst_Sphericity__1879->SetBinError(4,5.325398);
   VH_DHZfirst_Sphericity__1879->SetBinError(5,4.171429);
   VH_DHZfirst_Sphericity__1879->SetBinError(6,2.819345);
   VH_DHZfirst_Sphericity__1879->SetBinError(7,1.406309);
   VH_DHZfirst_Sphericity__1879->SetBinError(8,1.150637);
   VH_DHZfirst_Sphericity__1879->SetBinError(9,0.613273);
   VH_DHZfirst_Sphericity__1879->SetBinError(10,0.4291945);
   VH_DHZfirst_Sphericity__1879->SetBinError(11,0.403736);
   VH_DHZfirst_Sphericity__1879->SetBinError(12,0.2975175);
   VH_DHZfirst_Sphericity__1879->SetBinError(13,0.240915);
   VH_DHZfirst_Sphericity__1879->SetBinError(14,0.2408594);
   VH_DHZfirst_Sphericity__1879->SetBinError(15,0.05327516);
   VH_DHZfirst_Sphericity__1879->SetBinError(16,0.2869207);
   VH_DHZfirst_Sphericity__1879->SetBinError(17,0.2156191);
   VH_DHZfirst_Sphericity__1879->SetEntries(39210);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1879->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1879->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1879->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1879->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1879->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1879->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1879->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1879->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1879->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1879->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1879->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1879->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1879->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1879->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1879->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1879->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_SingleTop_DHZfirst_16->Modified();
   Sphericity_SingleTop_DHZfirst_16->cd();
   Sphericity_SingleTop_DHZfirst_16->SetSelected(Sphericity_SingleTop_DHZfirst_16);
}
