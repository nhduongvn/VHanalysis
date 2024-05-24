#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_SingleTop_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: Aplanarity_SingleTop_tagFirst_2b1c_17/Aplanarity_SingleTop_tagFirst_2b1c_17
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_SingleTop_tagFirst_2b1c_17 = new TCanvas("Aplanarity_SingleTop_tagFirst_2b1c_17", "Aplanarity_SingleTop_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_SingleTop_tagFirst_2b1c_17->SetHighLightColor(2);
   Aplanarity_SingleTop_tagFirst_2b1c_17->Range(-0.2,-3561.53,1.133333,32053.76);
   Aplanarity_SingleTop_tagFirst_2b1c_17->SetFillColor(0);
   Aplanarity_SingleTop_tagFirst_2b1c_17->SetFillStyle(4000);
   Aplanarity_SingleTop_tagFirst_2b1c_17->SetBorderMode(0);
   Aplanarity_SingleTop_tagFirst_2b1c_17->SetBorderSize(2);
   Aplanarity_SingleTop_tagFirst_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_SingleTop_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagFirst_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_SingleTop_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_SingleTop_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2630 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2630","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(0,0.02927078);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(1,27135.46);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(2,3807.684);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(3,995.1742);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(4,331.569);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(5,140.5817);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(6,69.86587);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(7,40.43797);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(8,22.03584);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(9,12.59538);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(10,8.958346);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(11,5.973159);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(12,3.910801);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(13,2.975873);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(14,1.481974);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(15,0.5249415);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(16,0.2920892);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(17,0.4727704);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(18,0.521713);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinContent(19,0.2248193);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(0,0.02927078);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(1,72.69138);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(2,27.17333);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(3,14.07385);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(4,8.096472);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(5,5.210123);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(6,4.037961);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(7,3.218151);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(8,1.92597);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(9,1.500813);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(10,1.643909);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(11,1.231617);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(12,0.9310183);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(13,1.011023);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(14,0.5230151);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(15,0.2528386);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(16,0.1305836);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(17,0.297662);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(18,0.4094651);
   VH_tagFirst_2b1c_Aplanarity__2630->SetBinError(19,0.1911621);
   VH_tagFirst_2b1c_Aplanarity__2630->SetEntries(434434);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2630->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2630->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2630->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2630->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2630->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2630->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2630->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2630->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2630->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2630->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2630->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2630->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2630->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2630->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2630->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2630->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_SingleTop_tagFirst_2b1c_17->Modified();
   Aplanarity_SingleTop_tagFirst_2b1c_17->cd();
   Aplanarity_SingleTop_tagFirst_2b1c_17->SetSelected(Aplanarity_SingleTop_tagFirst_2b1c_17);
}
