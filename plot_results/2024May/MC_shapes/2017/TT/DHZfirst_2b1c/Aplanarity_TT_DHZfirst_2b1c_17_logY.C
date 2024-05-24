#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_TT_DHZfirst_2b1c_17_logY()
{
//=========Macro generated from canvas: Aplanarity_TT_DHZfirst_2b1c_17/Aplanarity_TT_DHZfirst_2b1c_17
//=========  (Thu May 23 20:49:25 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_TT_DHZfirst_2b1c_17 = new TCanvas("Aplanarity_TT_DHZfirst_2b1c_17", "Aplanarity_TT_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_TT_DHZfirst_2b1c_17->SetHighLightColor(2);
   Aplanarity_TT_DHZfirst_2b1c_17->Range(-0.2,-2.404094,1.133333,5.890675);
   Aplanarity_TT_DHZfirst_2b1c_17->SetFillColor(0);
   Aplanarity_TT_DHZfirst_2b1c_17->SetFillStyle(4000);
   Aplanarity_TT_DHZfirst_2b1c_17->SetBorderMode(0);
   Aplanarity_TT_DHZfirst_2b1c_17->SetBorderSize(2);
   Aplanarity_TT_DHZfirst_2b1c_17->SetLogy();
   Aplanarity_TT_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_TT_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_TT_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_TT_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_TT_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Aplanarity__4067 = new TH1D("VH_DHZfirst_2b1c_Aplanarity__4067","",50,0,1);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinContent(1,60764.45);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinContent(2,8337.887);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinContent(3,1856.648);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinContent(4,521.6873);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinContent(5,177.5871);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinContent(6,71.43319);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinContent(7,30.59404);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinContent(8,15.73747);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinContent(9,8.10814);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinContent(10,4.457621);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinContent(11,2.029602);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinContent(12,1.210902);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinContent(13,0.6027703);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinContent(14,0.3908592);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinContent(15,0.373225);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinContent(16,0.05326144);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinContent(17,0.2038578);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinContent(19,0.0826945);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinError(1,71.32064);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinError(2,26.16659);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinError(3,12.26156);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinError(4,6.47368);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinError(5,3.778317);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinError(6,2.270322);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinError(7,1.474438);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinError(8,1.045958);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinError(9,0.7574351);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinError(10,0.5386102);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinError(11,0.3083792);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinError(12,0.2926784);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinError(13,0.1811541);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinError(14,0.1270334);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinError(15,0.1466641);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinError(16,0.05326144);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinError(17,0.1010345);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetBinError(19,0.06564154);
   VH_DHZfirst_2b1c_Aplanarity__4067->SetEntries(1212796);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Aplanarity__4067->SetLineColor(ci);
   VH_DHZfirst_2b1c_Aplanarity__4067->GetXaxis()->SetTitle("Aplanarity");
   VH_DHZfirst_2b1c_Aplanarity__4067->GetXaxis()->SetRange(1,50);
   VH_DHZfirst_2b1c_Aplanarity__4067->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4067->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4067->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4067->GetYaxis()->SetTitle("Events/0.02");
   VH_DHZfirst_2b1c_Aplanarity__4067->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4067->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Aplanarity__4067->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Aplanarity__4067->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Aplanarity__4067->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4067->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4067->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Aplanarity__4067->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Aplanarity__4067->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_TT_DHZfirst_2b1c_17->Modified();
   Aplanarity_TT_DHZfirst_2b1c_17->cd();
   Aplanarity_TT_DHZfirst_2b1c_17->SetSelected(Aplanarity_TT_DHZfirst_2b1c_17);
}
