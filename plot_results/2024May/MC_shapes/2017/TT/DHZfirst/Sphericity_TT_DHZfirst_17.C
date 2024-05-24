#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_TT_DHZfirst_17()
{
//=========Macro generated from canvas: Sphericity_TT_DHZfirst_17/Sphericity_TT_DHZfirst_17
//=========  (Fri May 24 12:42:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_TT_DHZfirst_17 = new TCanvas("Sphericity_TT_DHZfirst_17", "Sphericity_TT_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_TT_DHZfirst_17->SetHighLightColor(2);
   Sphericity_TT_DHZfirst_17->Range(-0.2,-624.139,1.133333,5617.251);
   Sphericity_TT_DHZfirst_17->SetFillColor(0);
   Sphericity_TT_DHZfirst_17->SetFillStyle(4000);
   Sphericity_TT_DHZfirst_17->SetBorderMode(0);
   Sphericity_TT_DHZfirst_17->SetBorderSize(2);
   Sphericity_TT_DHZfirst_17->SetLeftMargin(0.15);
   Sphericity_TT_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_TT_DHZfirst_17->SetFrameBorderMode(0);
   Sphericity_TT_DHZfirst_17->SetFrameFillStyle(1000);
   Sphericity_TT_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Sphericity__1877 = new TH1D("VH_DHZfirst_Sphericity__1877","",25,0,1);
   VH_DHZfirst_Sphericity__1877->SetBinContent(1,4755.344);
   VH_DHZfirst_Sphericity__1877->SetBinContent(2,4523.216);
   VH_DHZfirst_Sphericity__1877->SetBinContent(3,2551.732);
   VH_DHZfirst_Sphericity__1877->SetBinContent(4,1359.186);
   VH_DHZfirst_Sphericity__1877->SetBinContent(5,719.9394);
   VH_DHZfirst_Sphericity__1877->SetBinContent(6,342.3884);
   VH_DHZfirst_Sphericity__1877->SetBinContent(7,155.3226);
   VH_DHZfirst_Sphericity__1877->SetBinContent(8,71.7485);
   VH_DHZfirst_Sphericity__1877->SetBinContent(9,39.01266);
   VH_DHZfirst_Sphericity__1877->SetBinContent(10,22.83784);
   VH_DHZfirst_Sphericity__1877->SetBinContent(11,12.72624);
   VH_DHZfirst_Sphericity__1877->SetBinContent(12,8.808207);
   VH_DHZfirst_Sphericity__1877->SetBinContent(13,5.167204);
   VH_DHZfirst_Sphericity__1877->SetBinContent(14,3.100085);
   VH_DHZfirst_Sphericity__1877->SetBinContent(15,1.889731);
   VH_DHZfirst_Sphericity__1877->SetBinContent(16,1.653723);
   VH_DHZfirst_Sphericity__1877->SetBinContent(17,1.183629);
   VH_DHZfirst_Sphericity__1877->SetBinContent(18,0.8319944);
   VH_DHZfirst_Sphericity__1877->SetBinContent(19,0.2430349);
   VH_DHZfirst_Sphericity__1877->SetBinContent(20,0.1666658);
   VH_DHZfirst_Sphericity__1877->SetBinContent(21,0.02296363);
   VH_DHZfirst_Sphericity__1877->SetBinContent(23,0.024789);
   VH_DHZfirst_Sphericity__1877->SetBinError(1,20.27518);
   VH_DHZfirst_Sphericity__1877->SetBinError(2,19.71292);
   VH_DHZfirst_Sphericity__1877->SetBinError(3,14.90757);
   VH_DHZfirst_Sphericity__1877->SetBinError(4,10.83031);
   VH_DHZfirst_Sphericity__1877->SetBinError(5,7.951194);
   VH_DHZfirst_Sphericity__1877->SetBinError(6,5.472839);
   VH_DHZfirst_Sphericity__1877->SetBinError(7,3.614674);
   VH_DHZfirst_Sphericity__1877->SetBinError(8,2.388667);
   VH_DHZfirst_Sphericity__1877->SetBinError(9,1.770376);
   VH_DHZfirst_Sphericity__1877->SetBinError(10,1.286683);
   VH_DHZfirst_Sphericity__1877->SetBinError(11,0.9709059);
   VH_DHZfirst_Sphericity__1877->SetBinError(12,0.815416);
   VH_DHZfirst_Sphericity__1877->SetBinError(13,0.5524222);
   VH_DHZfirst_Sphericity__1877->SetBinError(14,0.4283353);
   VH_DHZfirst_Sphericity__1877->SetBinError(15,0.3136846);
   VH_DHZfirst_Sphericity__1877->SetBinError(16,0.3321357);
   VH_DHZfirst_Sphericity__1877->SetBinError(17,0.2883071);
   VH_DHZfirst_Sphericity__1877->SetBinError(18,0.2082816);
   VH_DHZfirst_Sphericity__1877->SetBinError(19,0.08701509);
   VH_DHZfirst_Sphericity__1877->SetBinError(20,0.1066963);
   VH_DHZfirst_Sphericity__1877->SetBinError(21,0.02296363);
   VH_DHZfirst_Sphericity__1877->SetBinError(23,0.024789);
   VH_DHZfirst_Sphericity__1877->SetEntries(239565);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Sphericity__1877->SetLineColor(ci);
   VH_DHZfirst_Sphericity__1877->GetXaxis()->SetTitle("Sphericity");
   VH_DHZfirst_Sphericity__1877->GetXaxis()->SetRange(1,25);
   VH_DHZfirst_Sphericity__1877->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1877->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1877->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1877->GetYaxis()->SetTitle("Events/0.04");
   VH_DHZfirst_Sphericity__1877->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1877->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Sphericity__1877->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Sphericity__1877->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Sphericity__1877->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1877->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Sphericity__1877->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Sphericity__1877->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Sphericity__1877->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_TT_DHZfirst_17->Modified();
   Sphericity_TT_DHZfirst_17->cd();
   Sphericity_TT_DHZfirst_17->SetSelected(Sphericity_TT_DHZfirst_17);
}
